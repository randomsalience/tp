#include "dolphin/dvd/fstload.h"
#include "dolphin/dvd.h"
#include "dolphin/os.h"

/* 804517D0-804517D4 000CD0 0004+00 1/1 0/0 0/0 .sbss            status */
static s32 status;

/* 804517D4-804517D8 000CD4 0004+00 2/2 0/0 0/0 .sbss            bb2 */
static DVDBB2* bb2;

/* 804517D8-804517E0 000CD8 0004+04 2/2 0/0 0/0 .sbss            idTmp */
static DVDDiskID* idTmp;

/* 8034BD2C-8034BE04 34666C 00D8+00 1/1 0/0 0/0 .text            cb */
static void cb(s32 result, DVDCommandBlock* block) {
    if (result > 0) {
        switch (status) {
        case 0:
            status = 1;
            DVDReadAbsAsyncForBS(block, bb2, OSRoundUp32B(sizeof(bb2)), 0x420, cb);
            break;
        case 1:
            status = 2;
            DVDReadAbsAsyncForBS(block, bb2->FSTAddress, OSRoundUp32B(bb2->FSTLength),
                                 bb2->FSTPosition, cb);
        }
    } else if (result == -1) {
    } else if (result == -4) {
        status = 0;
        DVDReset();
        DVDReadDiskID(block, idTmp, cb);
    }
}

/* 8044C9B8-8044C9F8 0796D8 003F+01 1/1 0/0 0/0 .bss             bb2Buf */
static u8 bb2Buf[OSRoundUp32B(sizeof(DVDBB2)) + 31];

/* 8044C9F8-8044CA28 079718 0030+00 1/1 0/0 0/0 .bss             block$18 */
static u8 block[48];

/* 8034BE04-8034BF6C 346744 0168+00 0/0 1/1 0/0 .text            __fstLoad */
void __fstLoad(void) {
    OSBootInfo* bootInfo;
    DVDDiskID* id;
    u8 idTmpBuf[sizeof(DVDDiskID) + 31];
    static DVDCommandBlock block;
    void* arenaHi;

    arenaHi = OSGetArenaHi();
    bootInfo = (OSBootInfo*)OSPhysicalToCached(0);

    idTmp = (DVDDiskID*)(OSRoundUp32B(idTmpBuf));
    bb2 = (DVDBB2*)(OSRoundUp32B(bb2Buf));

    DVDReset();
    DVDReadDiskID(&block, idTmp, cb);
    while (DVDGetDriveStatus() != 0)
        ;

    bootInfo->fst_location = bb2->FSTAddress;
    bootInfo->fst_max_length = bb2->FSTMaxLength;

    id = &bootInfo->disk_info;

    memcpy(id, idTmp, sizeof(DVDDiskID));
    OSReport("\n");
    OSReport("  Game Name ... %c%c%c%c\n", id->game_name[0], id->game_name[1], id->game_name[2],
             id->game_name[3]);
    OSReport("  Company ..... %c%c\n", id->company[0], id->company[1]);
    OSReport("  Disk # ...... %d\n", id->disk_number);
    OSReport("  Game ver .... %d\n", id->game_version);
    OSReport("  Streaming ... %s\n", (id->is_streaming == 0) ? "OFF" : "ON");
    OSReport("\n");
    OSSetArenaHi(bb2->FSTAddress);
}