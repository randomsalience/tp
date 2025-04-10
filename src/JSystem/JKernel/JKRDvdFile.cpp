#include "JSystem/JKernel/JKRDvdFile.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "JSystem/JUtility/JUTException.h"

/* 8043436C-80434378 06108C 000C+00 4/4 0/0 0/0 .bss             sDvdList__10JKRDvdFile */
JSUList<JKRDvdFile> JKRDvdFile::sDvdList;

/* 802D9584-802D95F8 2D3EC4 0074+00 0/0 3/3 0/0 .text            __ct__10JKRDvdFileFv */
JKRDvdFile::JKRDvdFile() : mDvdLink(this) {
    initiate();
}

/* 802D95F8-802D96A0 2D3F38 00A8+00 0/0 2/2 0/0 .text            __ct__10JKRDvdFileFPCc */
JKRDvdFile::JKRDvdFile(const char* name) : mDvdLink(this) {
    initiate();
    bool result = open(name);
    mIsAvailable = result;
    // weird code. doesn't match without this, maybe remains from assert or something?
    if (mIsAvailable)
        return;
    else
        return;
}

/* 802D96A0-802D9748 2D3FE0 00A8+00 0/0 3/3 0/0 .text            __ct__10JKRDvdFileFl */
JKRDvdFile::JKRDvdFile(s32 entryNum) : mDvdLink(this) {
    initiate();
    bool result = open(entryNum);
    mIsAvailable = result;
    // weird code. doesn't match without this, maybe remains from assert or something?
    if (mIsAvailable)
        return;
    else
        return;
}

/* 802D9748-802D97E4 2D4088 009C+00 1/0 5/5 0/0 .text            __dt__10JKRDvdFileFv */
JKRDvdFile::~JKRDvdFile() {
    close();
}

/* 802D97E4-802D9850 2D4124 006C+00 3/3 0/0 0/0 .text            initiate__10JKRDvdFileFv */
void JKRDvdFile::initiate(void) {
    mDvdFile = this;
    OSInitMutex(&mMutex1);
    OSInitMutex(&mMutex2);
    OSInitMessageQueue(&mMessageQueue2, &mMessage2, 1);
    OSInitMessageQueue(&mMessageQueue1, &mMessage1, 1);
    mOSThread = NULL;
    field_0x50 = 0;
    field_0x58 = 0;
}

/* 802D9850-802D98C4 2D4190 0074+00 1/0 1/1 0/0 .text            open__10JKRDvdFileFPCc */
bool JKRDvdFile::open(const char* name) {
    if (!mIsAvailable) {
        mIsAvailable = DVDOpen(name, &mFileInfo);
        if (mIsAvailable) {
            getDvdList().append(&mDvdLink);
            getStatus();
        }
    }
    return mIsAvailable;
}

/* 802D98C4-802D9938 2D4204 0074+00 1/0 2/2 0/0 .text            open__10JKRDvdFileFl */
bool JKRDvdFile::open(s32 entryNum) {
    if (!mIsAvailable) {
        mIsAvailable = DVDFastOpen(entryNum, &mFileInfo);
        if (mIsAvailable) {
            getDvdList().append(&mDvdLink);
            getStatus();
        }
    }
    return mIsAvailable;
}

/* 802D9938-802D99B4 2D4278 007C+00 1/0 0/0 0/0 .text            close__10JKRDvdFileFv */
void JKRDvdFile::close() {
    if (mIsAvailable) {
        s32 result = DVDClose(&mFileInfo);
        if (result != 0) {
            mIsAvailable = false;
            getDvdList().remove(&mDvdLink);
        } else {
            JUTException::panic(__FILE__, 213, "cannot close DVD file\n");
        }
    }
}

/* 802D99B4-802D9A68 2D42F4 00B4+00 1/0 0/0 0/0 .text            readData__10JKRDvdFileFPvll */
s32 JKRDvdFile::readData(void* param_1, s32 length, s32 param_3) {
    /* clang-format off */
    // The assert condition gets stringified as "( length & 0x1f ) == 0", 
    // with out disabling clang-format the spaces in the condition will  
    // get removed and the string will be incorrect.
    JUT_ASSERT(238, ( length & 0x1f ) == 0);
    /* clang-format on */

    OSLockMutex(&mMutex1);
    if (mOSThread) {
        OSUnlockMutex(&mMutex1);
        return -1;
    }

    mOSThread = OSGetCurrentThread();

    s32 result = -1;
    s32 readAsyncResult =
        DVDReadAsyncPrio(&mFileInfo, param_1, length, param_3, JKRDvdFile::doneProcess, 2);
    if (readAsyncResult) {
        result = sync();
    }

    mOSThread = NULL;
    OSUnlockMutex(&mMutex1);

    return result;
}

/* 802D9A68-802D9A70 2D43A8 0008+00 1/0 0/0 0/0 .text            writeData__10JKRDvdFileFPCvll */
s32 JKRDvdFile::writeData(void const* param_0, s32 length, s32 param_2) {
    /* clang-format off */
    JUT_ASSERT(344, ( length & 0x1f ) == 0);
    /* clang-format on */
    return -1;
}

/* 802D9A70-802D9AC4 2D43B0 0054+00 1/1 0/0 0/0 .text            sync__10JKRDvdFileFv */
s32 JKRDvdFile::sync(void) {
    OSMessage message;
    OSLockMutex(&mMutex1);
    OSReceiveMessage(&mMessageQueue2, &message, 1);
    mOSThread = NULL;
    OSUnlockMutex(&mMutex1);
    return (int)message;
}

/* 802D9AC4-802D9AF8 2D4404 0034+00 1/1 0/0 0/0 .text doneProcess__10JKRDvdFileFlP11DVDFileInfo */
void JKRDvdFile::doneProcess(s32 id, DVDFileInfo* fileInfo) {
    // fileInfo->field_0x3c looks like some kind of user pointer?
    JKRDvdFile* dvdFile = *(JKRDvdFile**)((u8*)fileInfo + 0x3c);
    OSSendMessage(&dvdFile->mMessageQueue2, (OSMessage)id, OS_MESSAGE_NOBLOCK);
}

/* 802D9AF8-802D9B00 2D4438 0008+00 1/0 0/0 0/0 .text            getFileSize__10JKRDvdFileCFv */
s32 JKRDvdFile::getFileSize(void) const {
    return mFileInfo.length;
}