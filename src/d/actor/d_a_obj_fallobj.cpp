/**
 * d_a_obj_fallobj.cpp
 *
 */

#include "d/actor/d_a_obj_fallobj.h"
#include "d/d_procname.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__14daObjFallObj_cFv();
extern "C" void setBaseMtx__14daObjFallObj_cFv();
extern "C" void Create__14daObjFallObj_cFv();
extern "C" void getFallTime__14daObjFallObj_cFv();
extern "C" void getFallHeight__14daObjFallObj_cFv();
extern "C" void CreateHeap__14daObjFallObj_cFv();
extern "C" void create1st__14daObjFallObj_cFv();
extern "C" void Execute__14daObjFallObj_cFPPA3_A4_f();
extern "C" void action__14daObjFallObj_cFv();
extern "C" void action_wait__14daObjFallObj_cFb();
extern "C" void action_fallStart__14daObjFallObj_cFv();
extern "C" void action_countdown__14daObjFallObj_cFv();
extern "C" void action_fall__14daObjFallObj_cFv();
extern "C" void action_end__14daObjFallObj_cFv();
extern "C" void action_follow_fall__14daObjFallObj_cFv();
extern "C" void checkHang__14daObjFallObj_cFv();
extern "C" void checkHang2__14daObjFallObj_cFv();
extern "C" void Draw__14daObjFallObj_cFv();
extern "C" void Delete__14daObjFallObj_cFv();
extern "C" static void daObjFallObj_create1st__FP14daObjFallObj_c();
extern "C" static void daObjFallObj_MoveBGDelete__FP14daObjFallObj_c();
extern "C" static void daObjFallObj_MoveBGExecute__FP14daObjFallObj_c();
extern "C" static void daObjFallObj_MoveBGDraw__FP14daObjFallObj_c();
extern "C" void func_80BE4A70(void* _this, s16*);
extern "C" void func_80BE4A8C(void* _this, u8*);
extern "C" extern char const* const d_a_obj_fallobj__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChildFromOffset__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_chaseS__FPsss();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 80BE39B8-80BE3A24 000078 006C+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjFallObj_cFv */
void daObjFallObj_c::initBaseMtx() {
    // NONMATCHING
}

/* 80BE3A24-80BE3A88 0000E4 0064+00 2/2 0/0 0/0 .text            setBaseMtx__14daObjFallObj_cFv */
void daObjFallObj_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4AB0-80BE4AB4 000000 0004+00 7/7 0/0 0/0 .rodata          @3677 */
SECTION_RODATA static u8 const lit_3677[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BE4AB0, &lit_3677);

/* 80BE4AB4-80BE4AB8 000004 0004+00 0/1 0/0 0/0 .rodata          @3678 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3678 = -300.0f;
COMPILER_STRIP_GATE(0x80BE4AB4, &lit_3678);
#pragma pop

/* 80BE4AB8-80BE4ABC 000008 0004+00 0/1 0/0 0/0 .rodata          @3679 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3679 = -6.0f;
COMPILER_STRIP_GATE(0x80BE4AB8, &lit_3679);
#pragma pop

/* 80BE4B20-80BE4B24 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
static char* l_arcName = "K_drock00";

/* 80BE4B24-80BE4B3C 000004 0018+00 1/1 0/0 0/0 .data            l_cull_box */
static Vec l_cull_box[2] = {
    {-200.0f, -10000.0f, -200.0f},
    {200.0f, 600.0f, 200.0f},
};

/* 80BE3A88-80BE3BA8 000148 0120+00 1/0 0/0 0/0 .text            Create__14daObjFallObj_cFv */
int daObjFallObj_c::Create() {
    // NONMATCHING
}

/* 80BE3BA8-80BE3BD4 000268 002C+00 2/2 0/0 0/0 .text            getFallTime__14daObjFallObj_cFv */
void daObjFallObj_c::getFallTime() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4ABC-80BE4AC0 00000C 0004+00 0/1 0/0 0/0 .rodata          @3705 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3705 = 450.0f;
COMPILER_STRIP_GATE(0x80BE4ABC, &lit_3705);
#pragma pop

/* 80BE4AC0-80BE4AC4 000010 0004+00 0/2 0/0 0/0 .rodata          @3706 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3706 = 300.0f;
COMPILER_STRIP_GATE(0x80BE4AC0, &lit_3706);
#pragma pop

/* 80BE4AC4-80BE4AC8 000014 0004+00 1/2 0/0 0/0 .rodata          @3707 */
SECTION_RODATA static f32 const lit_3707 = 50.0f;
COMPILER_STRIP_GATE(0x80BE4AC4, &lit_3707);

/* 80BE4AC8-80BE4AD0 000018 0008+00 0/1 0/0 0/0 .rodata          @3709 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3709[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE4AC8, &lit_3709);
#pragma pop

/* 80BE3BD4-80BE3C28 000294 0054+00 1/1 0/0 0/0 .text            getFallHeight__14daObjFallObj_cFv
 */
void daObjFallObj_c::getFallHeight() {
    // NONMATCHING
}

/* 80BE3C28-80BE3C98 0002E8 0070+00 1/0 0/0 0/0 .text            CreateHeap__14daObjFallObj_cFv */
int daObjFallObj_c::CreateHeap() {
    // NONMATCHING
}

/* 80BE3C98-80BE3D24 000358 008C+00 1/1 0/0 0/0 .text            create1st__14daObjFallObj_cFv */
int daObjFallObj_c::create1st() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4AD0-80BE4AD4 000020 0004+00 0/1 0/0 0/0 .rodata          @3818 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3818 = 150.0f;
COMPILER_STRIP_GATE(0x80BE4AD0, &lit_3818);
#pragma pop

/* 80BE4AD4-80BE4AD8 000024 0004+00 0/1 0/0 0/0 .rodata          @3819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3819 = 160.0f;
COMPILER_STRIP_GATE(0x80BE4AD4, &lit_3819);
#pragma pop

/* 80BE4AD8-80BE4AE0 000028 0008+00 0/1 0/0 0/0 .rodata          @3820 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3820[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE4AD8, &lit_3820);
#pragma pop

/* 80BE4AE0-80BE4AE8 000030 0008+00 0/1 0/0 0/0 .rodata          @3821 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3821[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE4AE0, &lit_3821);
#pragma pop

/* 80BE4AE8-80BE4AF0 000038 0008+00 0/1 0/0 0/0 .rodata          @3822 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3822[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE4AE8, &lit_3822);
#pragma pop

/* 80BE4AF0-80BE4AF4 000040 0004+00 0/1 0/0 0/0 .rodata          @3823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3823 = 2150.0f;
COMPILER_STRIP_GATE(0x80BE4AF0, &lit_3823);
#pragma pop

/* 80BE3D24-80BE4138 0003E4 0414+00 1/0 0/0 0/0 .text            Execute__14daObjFallObj_cFPPA3_A4_f
 */
int daObjFallObj_c::Execute(Mtx** i_mtx) {
    // NONMATCHING
}

/* 80BE4138-80BE4228 0007F8 00F0+00 1/1 0/0 0/0 .text            action__14daObjFallObj_cFv */
void daObjFallObj_c::action() {
    // NONMATCHING
}

/* 80BE4228-80BE42C0 0008E8 0098+00 1/1 0/0 0/0 .text            action_wait__14daObjFallObj_cFb */
void daObjFallObj_c::action_wait(bool param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4AF4-80BE4AF8 000044 0004+00 0/1 0/0 0/0 .rodata          @3882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3882 = -25.0f;
COMPILER_STRIP_GATE(0x80BE4AF4, &lit_3882);
#pragma pop

/* 80BE4AF8-80BE4B00 000048 0004+04 0/1 0/0 0/0 .rodata          @3883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3883[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BE4AF8, &lit_3883);
#pragma pop

/* 80BE42C0-80BE43E4 000980 0124+00 1/1 0/0 0/0 .text action_fallStart__14daObjFallObj_cFv */
void daObjFallObj_c::action_fallStart() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4B00-80BE4B08 000050 0008+00 1/1 0/0 0/0 .rodata          @3930 */
SECTION_RODATA static u8 const lit_3930[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE4B00, &lit_3930);

/* 80BE43E4-80BE45F4 000AA4 0210+00 1/1 0/0 0/0 .text action_countdown__14daObjFallObj_cFv */
void daObjFallObj_c::action_countdown() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4B08-80BE4B0C 000058 0004+00 2/2 0/0 0/0 .rodata          @3949 */
SECTION_RODATA static f32 const lit_3949 = 10000.0f;
COMPILER_STRIP_GATE(0x80BE4B08, &lit_3949);

/* 80BE45F4-80BE466C 000CB4 0078+00 1/1 0/0 0/0 .text            action_fall__14daObjFallObj_cFv */
void daObjFallObj_c::action_fall() {
    // NONMATCHING
}

/* 80BE466C-80BE4670 000D2C 0004+00 1/1 0/0 0/0 .text            action_end__14daObjFallObj_cFv */
void daObjFallObj_c::action_end() {
    /* empty function */
}

/* 80BE4670-80BE4700 000D30 0090+00 1/1 0/0 0/0 .text action_follow_fall__14daObjFallObj_cFv */
void daObjFallObj_c::action_follow_fall() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4B0C-80BE4B10 00005C 0004+00 0/1 0/0 0/0 .rodata          @3990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3990 = 250.0f;
COMPILER_STRIP_GATE(0x80BE4B0C, &lit_3990);
#pragma pop

/* 80BE4B10-80BE4B14 000060 0004+00 0/1 0/0 0/0 .rodata          @3991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3991 = 100.0f;
COMPILER_STRIP_GATE(0x80BE4B10, &lit_3991);
#pragma pop

/* 80BE4700-80BE47A0 000DC0 00A0+00 2/2 0/0 0/0 .text            checkHang__14daObjFallObj_cFv */
void daObjFallObj_c::checkHang() {
    // NONMATCHING
}

/* 80BE47A0-80BE48A4 000E60 0104+00 1/1 0/0 0/0 .text            checkHang2__14daObjFallObj_cFv */
void daObjFallObj_c::checkHang2() {
    // NONMATCHING
}

/* 80BE48A4-80BE4948 000F64 00A4+00 1/0 0/0 0/0 .text            Draw__14daObjFallObj_cFv */
int daObjFallObj_c::Draw() {
    // NONMATCHING
}

/* 80BE4948-80BE4990 001008 0048+00 1/0 0/0 0/0 .text            Delete__14daObjFallObj_cFv */
int daObjFallObj_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BE4B3C-80BE4B5C -00001 0020+00 1/0 0/0 0/0 .data            daObjFallObj_METHODS */
static actor_method_class daObjFallObj_METHODS = {
    (process_method_func)daObjFallObj_create1st__FP14daObjFallObj_c,
    (process_method_func)daObjFallObj_MoveBGDelete__FP14daObjFallObj_c,
    (process_method_func)daObjFallObj_MoveBGExecute__FP14daObjFallObj_c,
    0,
    (process_method_func)daObjFallObj_MoveBGDraw__FP14daObjFallObj_c,
};

/* 80BE4B5C-80BE4B8C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_FallObj */
extern actor_process_profile_definition g_profile_Obj_FallObj = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_FallObj,       // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjFallObj_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  552,                    // mPriority
  &daObjFallObj_METHODS,  // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BE4B8C-80BE4BB4 00006C 0028+00 1/1 0/0 0/0 .data            __vt__14daObjFallObj_c */
SECTION_DATA extern void* __vt__14daObjFallObj_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjFallObj_cFv,
    (void*)Create__14daObjFallObj_cFv,
    (void*)Execute__14daObjFallObj_cFPPA3_A4_f,
    (void*)Draw__14daObjFallObj_cFv,
    (void*)Delete__14daObjFallObj_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BE4990-80BE4A04 001050 0074+00 1/0 0/0 0/0 .text daObjFallObj_create1st__FP14daObjFallObj_c
 */
static void daObjFallObj_create1st(daObjFallObj_c* i_this) {
    // NONMATCHING
}

/* 80BE4A04-80BE4A24 0010C4 0020+00 1/0 0/0 0/0 .text
 * daObjFallObj_MoveBGDelete__FP14daObjFallObj_c                */
static void daObjFallObj_MoveBGDelete(daObjFallObj_c* i_this) {
    // NONMATCHING
}

/* 80BE4A24-80BE4A44 0010E4 0020+00 1/0 0/0 0/0 .text
 * daObjFallObj_MoveBGExecute__FP14daObjFallObj_c               */
static void daObjFallObj_MoveBGExecute(daObjFallObj_c* i_this) {
    // NONMATCHING
}

/* 80BE4A44-80BE4A70 001104 002C+00 1/0 0/0 0/0 .text daObjFallObj_MoveBGDraw__FP14daObjFallObj_c
 */
static void daObjFallObj_MoveBGDraw(daObjFallObj_c* i_this) {
    // NONMATCHING
}

/* 80BE4A70-80BE4A8C 001130 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
extern "C" void func_80BE4A70(void* _this, s16* param_0) {
    // NONMATCHING
}

/* 80BE4A8C-80BE4AA8 00114C 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
extern "C" void func_80BE4A8C(void* _this, u8* param_0) {
    // NONMATCHING
}

/* 80BE4B14-80BE4B14 000064 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
