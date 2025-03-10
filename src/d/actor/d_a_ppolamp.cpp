/**
 * @file d_a_ppolamp.cpp
 * 
*/

#include "d/actor/d_a_ppolamp.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void daPPolamp_c_createHeap__FP10fopAc_ac_c();
extern "C" void __dt__11daPPolamp_cFv();
extern "C" void create__11daPPolamp_cFv();
extern "C" void execute__11daPPolamp_cFv();
extern "C" void draw__11daPPolamp_cFv();
extern "C" void Delete__11daPPolamp_cFv();
extern "C" void setModelMtx__11daPPolamp_cFv();
extern "C" void setPclModelMtx__11daPPolamp_cFv();
extern "C" void createHeap__11daPPolamp_cFv();
extern "C" void moveSwing__11daPPolamp_cFv();
extern "C" void initParam__11daPPolamp_cFv();
extern "C" static void daPPolamp_create__FP11daPPolamp_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daPPolamp_Delete__FP11daPPolamp_c();
extern "C" static void daPPolamp_execute__FP11daPPolamp_c();
extern "C" static void daPPolamp_draw__FP11daPPolamp_c();
extern "C" extern char const* const d_a_ppolamp__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 80D4C938-80D4C958 000078 0020+00 1/1 0/0 0/0 .text daPPolamp_c_createHeap__FP10fopAc_ac_c */
static void daPPolamp_c_createHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D2C8-80D4D2C8 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D4D2C8 = "PPolamp";
#pragma pop

/* 80D4D2D0-80D4D2D4 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_ppolamp__stringBase0;

/* 80D4D2D4-80D4D2F4 -00001 0020+00 1/0 0/0 0/0 .data            daPPolamp_METHODS */
static actor_method_class daPPolamp_METHODS = {
    (process_method_func)daPPolamp_create__FP11daPPolamp_c,
    (process_method_func)daPPolamp_Delete__FP11daPPolamp_c,
    (process_method_func)daPPolamp_execute__FP11daPPolamp_c,
    0,
    (process_method_func)daPPolamp_draw__FP11daPPolamp_c,
};

/* 80D4D2F4-80D4D324 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_PPolamp */
extern actor_process_profile_definition g_profile_PPolamp = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_PPolamp,          // mProcName
  &g_fpcLf_Method.base, // sub_method
  sizeof(daPPolamp_c),   // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  727,                   // mPriority
  &daPPolamp_METHODS,    // sub_method
  0x00040180,            // mStatus
  fopAc_ENV_e,           // mActorType
  fopAc_CULLBOX_12_e,    // cullType
};

/* 80D4D324-80D4D330 000054 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D4D330-80D4D33C 000060 000C+00 2/2 0/0 0/0 .data            __vt__11daPPolamp_c */
SECTION_DATA extern void* __vt__11daPPolamp_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daPPolamp_cFv,
};

/* 80D4C958-80D4C9FC 000098 00A4+00 1/0 0/0 0/0 .text            __dt__11daPPolamp_cFv */
daPPolamp_c::~daPPolamp_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D27C-80D4D288 000000 000C+00 2/2 0/0 0/0 .rodata          @3757 */
SECTION_RODATA static u8 const lit_3757[12] = {
    0x00, 0x00, 0x00, 0x00, 0xC2, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D4D27C, &lit_3757);

/* 80D4C9FC-80D4CB24 00013C 0128+00 1/1 0/0 0/0 .text            create__11daPPolamp_cFv */
void daPPolamp_c::create() {
    // NONMATCHING
}

/* 80D4CB24-80D4CB84 000264 0060+00 1/1 0/0 0/0 .text            execute__11daPPolamp_cFv */
void daPPolamp_c::execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D288-80D4D290 00000C 0008+00 1/1 0/0 0/0 .rodata          @3797 */
SECTION_RODATA static u8 const lit_3797[8] = {
    0x00, 0x48, 0x00, 0x85, 0x00, 0xFF, 0x00, 0xFF,
};
COMPILER_STRIP_GATE(0x80D4D288, &lit_3797);

/* 80D4D290-80D4D298 000014 0008+00 1/1 0/0 0/0 .rodata          @3802 */
SECTION_RODATA static u8 const lit_3802[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF,
};
COMPILER_STRIP_GATE(0x80D4D290, &lit_3802);

/* 80D4D340-80D4D344 000000 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80D4D344-80D4D348 000004 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80D4D348-80D4D34C 000008 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80D4D34C-80D4D350 00000C 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80D4D350-80D4D354 000010 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80D4D354-80D4D358 000014 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80D4D358-80D4D35C 000018 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80D4D35C-80D4D360 00001C 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80D4D360-80D4D364 000020 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80D4D364-80D4D368 000024 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80D4D368-80D4D36C 000028 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80D4D36C-80D4D370 00002C 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80D4D370-80D4D374 000030 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80D4D374-80D4D378 000034 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80D4D378-80D4D37C 000038 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80D4D37C-80D4D380 00003C 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80D4D380-80D4D38C 000040 0008+04 0/1 0/0 0/0 .bss             TEV_COLOR_1$3795 */
#pragma push
#pragma force_active on
static u8 TEV_COLOR_1[8 + 4 /* padding */];
#pragma pop

/* 80D4D38C-80D4D394 00004C 0008+00 0/1 0/0 0/0 .bss             TEV_COLOR_2$3800 */
#pragma push
#pragma force_active on
static u8 TEV_COLOR_2[8];
#pragma pop

/* 80D4CB84-80D4CCF0 0002C4 016C+00 1/1 0/0 0/0 .text            draw__11daPPolamp_cFv */
void daPPolamp_c::draw() {
    // NONMATCHING
}

/* 80D4CCF0-80D4CD24 000430 0034+00 1/1 0/0 0/0 .text            Delete__11daPPolamp_cFv */
void daPPolamp_c::Delete() {
    // NONMATCHING
}

/* 80D4CD24-80D4CDA8 000464 0084+00 2/2 0/0 0/0 .text            setModelMtx__11daPPolamp_cFv */
void daPPolamp_c::setModelMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D298-80D4D2A4 00001C 000C+00 1/1 0/0 0/0 .rodata          @3859 */
SECTION_RODATA static u8 const lit_3859[12] = {
    0x00, 0x00, 0x00, 0x00, 0xC2, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D4D298, &lit_3859);

/* 80D4CDA8-80D4CE9C 0004E8 00F4+00 1/1 0/0 0/0 .text            setPclModelMtx__11daPPolamp_cFv */
void daPPolamp_c::setPclModelMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D2A4-80D4D2A8 000028 0004+00 2/2 0/0 0/0 .rodata          @3909 */
SECTION_RODATA static f32 const lit_3909 = 1.0f;
COMPILER_STRIP_GATE(0x80D4D2A4, &lit_3909);

/* 80D4CE9C-80D4CFB0 0005DC 0114+00 1/1 0/0 0/0 .text            createHeap__11daPPolamp_cFv */
void daPPolamp_c::createHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D2A8-80D4D2AC 00002C 0004+00 0/1 0/0 0/0 .rodata          @3922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3922 = 450.0f;
COMPILER_STRIP_GATE(0x80D4D2A8, &lit_3922);
#pragma pop

/* 80D4D2AC-80D4D2B0 000030 0004+00 0/1 0/0 0/0 .rodata          @3923 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3923 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D4D2AC, &lit_3923);
#pragma pop

/* 80D4D2B0-80D4D2B4 000034 0004+00 0/1 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3924 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D4D2B0, &lit_3924);
#pragma pop

/* 80D4D2B4-80D4D2B8 000038 0004+00 0/1 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = 3.0f / 25.0f;
COMPILER_STRIP_GATE(0x80D4D2B4, &lit_3925);
#pragma pop

/* 80D4D2B8-80D4D2BC 00003C 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = 80.0f;
COMPILER_STRIP_GATE(0x80D4D2B8, &lit_3926);
#pragma pop

/* 80D4D2BC-80D4D2C4 000040 0008+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3928[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D4D2BC, &lit_3928);
#pragma pop

/* 80D4CFB0-80D4D10C 0006F0 015C+00 1/1 0/0 0/0 .text            moveSwing__11daPPolamp_cFv */
void daPPolamp_c::moveSwing() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D2C4-80D4D2C8 000048 0004+00 1/1 0/0 0/0 .rodata          @3936 */
SECTION_RODATA static f32 const lit_3936 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80D4D2C4, &lit_3936);

/* 80D4D10C-80D4D140 00084C 0034+00 1/1 0/0 0/0 .text            initParam__11daPPolamp_cFv */
void daPPolamp_c::initParam() {
    // NONMATCHING
}

/* 80D4D140-80D4D1CC 000880 008C+00 1/0 0/0 0/0 .text            daPPolamp_create__FP11daPPolamp_c
 */
static void daPPolamp_create(daPPolamp_c* param_0) {
    // NONMATCHING
}

/* 80D4D1CC-80D4D214 00090C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80D4D214-80D4D234 000954 0020+00 1/0 0/0 0/0 .text            daPPolamp_Delete__FP11daPPolamp_c
 */
static void daPPolamp_Delete(daPPolamp_c* param_0) {
    // NONMATCHING
}

/* 80D4D234-80D4D254 000974 0020+00 1/0 0/0 0/0 .text            daPPolamp_execute__FP11daPPolamp_c
 */
static void daPPolamp_execute(daPPolamp_c* param_0) {
    // NONMATCHING
}

/* 80D4D254-80D4D274 000994 0020+00 1/0 0/0 0/0 .text            daPPolamp_draw__FP11daPPolamp_c */
static void daPPolamp_draw(daPPolamp_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D4D394-80D4D398 000054 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80D4D394[4];
#pragma pop

/* 80D4D398-80D4D39C 000058 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80D4D398[4];
#pragma pop

/* 80D4D39C-80D4D3A0 00005C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80D4D39C[4];
#pragma pop

/* 80D4D3A0-80D4D3A4 000060 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80D4D3A0[4];
#pragma pop

/* 80D4D3A4-80D4D3A8 000064 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3A4[4];
#pragma pop

/* 80D4D3A8-80D4D3AC 000068 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3A8[4];
#pragma pop

/* 80D4D3AC-80D4D3B0 00006C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3AC[4];
#pragma pop

/* 80D4D3B0-80D4D3B4 000070 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80D4D3B0[4];
#pragma pop

/* 80D4D3B4-80D4D3B8 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80D4D3B4[4];
#pragma pop

/* 80D4D3B8-80D4D3BC 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80D4D3B8[4];
#pragma pop

/* 80D4D3BC-80D4D3C0 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80D4D3BC[4];
#pragma pop

/* 80D4D3C0-80D4D3C4 000080 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80D4D3C0[4];
#pragma pop

/* 80D4D3C4-80D4D3C8 000084 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80D4D3C4[4];
#pragma pop

/* 80D4D3C8-80D4D3CC 000088 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3C8[4];
#pragma pop

/* 80D4D3CC-80D4D3D0 00008C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80D4D3CC[4];
#pragma pop

/* 80D4D3D0-80D4D3D4 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80D4D3D0[4];
#pragma pop

/* 80D4D3D4-80D4D3D8 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80D4D3D4[4];
#pragma pop

/* 80D4D3D8-80D4D3DC 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80D4D3D8[4];
#pragma pop

/* 80D4D3DC-80D4D3E0 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3DC[4];
#pragma pop

/* 80D4D3E0-80D4D3E4 0000A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80D4D3E0[4];
#pragma pop

/* 80D4D3E4-80D4D3E8 0000A4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3E4[4];
#pragma pop

/* 80D4D3E8-80D4D3EC 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3E8[4];
#pragma pop

/* 80D4D3EC-80D4D3F0 0000AC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3EC[4];
#pragma pop

/* 80D4D3F0-80D4D3F4 0000B0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80D4D3F0[4];
#pragma pop

/* 80D4D3F4-80D4D3F8 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80D4D3F4[4];
#pragma pop

/* 80D4D2C8-80D4D2C8 00004C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
