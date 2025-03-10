/**
 * @file d_a_obj_keyhole.cpp
 * 
*/

#include "d/actor/d_a_obj_keyhole.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__19daObj_Keyhole_HIO_cFv();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daObj_Keyhole_Draw__FP17obj_keyhole_class();
extern "C" static void chain_control1__FP17obj_keyhole_classP10kh_chain_si();
extern "C" void __dt__4cXyzFv();
extern "C" static void chain_control1_2__FP17obj_keyhole_classP10kh_chain_si();
extern "C" static void chain_control2__FP17obj_keyhole_classP10kh_chain_si();
extern "C" static void chain_control3__FP17obj_keyhole_classP10kh_chain_si();
extern "C" static void chain_move__FP17obj_keyhole_class();
extern "C" static void open__FP17obj_keyhole_class();
extern "C" static void drop__FP17obj_keyhole_class();
extern "C" static void daObj_Keyhole_Execute__FP17obj_keyhole_class();
extern "C" static bool daObj_Keyhole_IsDelete__FP17obj_keyhole_class();
extern "C" static void daObj_Keyhole_Delete__FP17obj_keyhole_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Keyhole_Create__FP10fopAc_ac_c();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10kh_chain_sFv();
extern "C" void __ct__10kh_chain_sFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__19daObj_Keyhole_HIO_cFv();
extern "C" void __sinit_d_a_obj_keyhole_cpp();
extern "C" extern char const* const d_a_obj_keyhole__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void stopAnime__10Z2CreatureFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_16();
extern "C" void _savegpr_20();
extern "C" void _savegpr_21();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_16();
extern "C" void _restgpr_20();
extern "C" void _restgpr_21();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C439E4-80C439E8 000000 0004+00 10/10 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static f32 const lit_3655 = 1.0f;
COMPILER_STRIP_GATE(0x80C439E4, &lit_3655);

/* 80C43ABC-80C43ABC 0000D8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C43ABC = "Obj_keyh";
SECTION_DEAD static char const* const stringBase_80C43AC5 = "Obj_bkey";
SECTION_DEAD static char const* const stringBase_80C43ACE = "Obj_bkey2";
SECTION_DEAD static char const* const stringBase_80C43AD8 = "Obj_bkey3";
SECTION_DEAD static char const* const stringBase_80C43AE2 = "Obj_bkey5";
#pragma pop

/* 80C43AEC-80C43AF8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C43AF8-80C43B0C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80C43B0C-80C43B34 000020 0028+00 0/1 0/0 0/0 .data            bmd_d$4377 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 bmd_d[40] = {
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0B,
};
#pragma pop

/* 80C43B34-80C43B5C 000048 0028+00 0/1 0/0 0/0 .data            mdl_f$4378 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mdl_f[40] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80C43B5C-80C43B84 000070 0028+00 0/1 0/0 0/0 .data            bck_d$4396 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 bck_d[40] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05,
};
#pragma pop

/* 80C43B84-80C43BAC 000098 0028+00 0/1 0/0 0/0 .data            cbmd_d$4397 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 cbmd_d[40] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
};
#pragma pop

/* 80C43BAC-80C43BD4 -00001 0028+00 1/1 0/0 0/0 .data            arc_name$4469 */
SECTION_DATA static void* arc_name[10] = {
    (void*)&d_a_obj_keyhole__stringBase0,
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x12),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x1C),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x26),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_keyhole__stringBase0) + 0x9),
};

/* 80C43BD4-80C43C14 0000E8 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4485 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdbf, 0x3}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_METAL, 0x2, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 60.0f} // mSph
    } // mSphAttr
};

/* 80C43C14-80C43C34 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Keyhole_Method */
static actor_method_class l_daObj_Keyhole_Method = {
    (process_method_func)daObj_Keyhole_Create__FP10fopAc_ac_c,
    (process_method_func)daObj_Keyhole_Delete__FP17obj_keyhole_class,
    (process_method_func)daObj_Keyhole_Execute__FP17obj_keyhole_class,
    (process_method_func)daObj_Keyhole_IsDelete__FP17obj_keyhole_class,
    (process_method_func)daObj_Keyhole_Draw__FP17obj_keyhole_class,
};

/* 80C43C34-80C43C64 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_KEYHOLE */
extern actor_process_profile_definition g_profile_OBJ_KEYHOLE = {
  fpcLy_CURRENT_e,         // mLayerID
  7,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_OBJ_KEYHOLE,        // mProcName
  &g_fpcLf_Method.base,   // sub_method
  0x00002CB8,              // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  45,                      // mPriority
  &l_daObj_Keyhole_Method, // sub_method
  0x00044100,              // mStatus
  fopAc_ACTOR_e,           // mActorType
  fopAc_CULLBOX_CUSTOM_e,  // cullType
};

/* 80C43C64-80C43C70 000178 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C43C70-80C43C7C 000184 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C43C7C-80C43C88 000190 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C43C88-80C43C94 00019C 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C43C94-80C43CA0 0001A8 000C+00 2/2 0/0 0/0 .data            __vt__19daObj_Keyhole_HIO_c */
SECTION_DATA extern void* __vt__19daObj_Keyhole_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19daObj_Keyhole_HIO_cFv,
};

/* 80C4124C-80C41270 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__19daObj_Keyhole_HIO_cFv */
daObj_Keyhole_HIO_c::daObj_Keyhole_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C439E8-80C439EC 000004 0004+00 1/9 0/0 0/0 .rodata          @3689 */
SECTION_RODATA static u8 const lit_3689[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C439E8, &lit_3689);

/* 80C41270-80C4134C 000110 00DC+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 80C4134C-80C41454 0001EC 0108+00 1/0 0/0 0/0 .text daObj_Keyhole_Draw__FP17obj_keyhole_class */
static void daObj_Keyhole_Draw(obj_keyhole_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C439EC-80C439F0 000008 0004+00 0/3 0/0 0/0 .rodata          @3763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3763 = 10.0f;
COMPILER_STRIP_GATE(0x80C439EC, &lit_3763);
#pragma pop

/* 80C439F0-80C439F4 00000C 0004+00 0/5 0/0 0/0 .rodata          @3764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3764 = 30.0f;
COMPILER_STRIP_GATE(0x80C439F0, &lit_3764);
#pragma pop

/* 80C439F4-80C439F8 000010 0004+00 0/2 0/0 0/0 .rodata          @3765 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3765 = -13.0f;
COMPILER_STRIP_GATE(0x80C439F4, &lit_3765);
#pragma pop

/* 80C41454-80C41654 0002F4 0200+00 1/1 0/0 0/0 .text
 * chain_control1__FP17obj_keyhole_classP10kh_chain_si          */
static void chain_control1(obj_keyhole_class* param_0, kh_chain_s* param_1, int param_2) {
    // NONMATCHING
}

/* 80C41654-80C41690 0004F4 003C+00 3/3 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C439F8-80C439FC 000014 0004+00 0/2 0/0 0/0 .rodata          @3845 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3845 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C439F8, &lit_3845);
#pragma pop

/* 80C439FC-80C43A00 000018 0004+00 0/1 0/0 0/0 .rodata          @3846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3846 = -20.0f;
COMPILER_STRIP_GATE(0x80C439FC, &lit_3846);
#pragma pop

/* 80C43A00-80C43A04 00001C 0004+00 0/1 0/0 0/0 .rodata          @3847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3847 = 33.0f / 50.0f;
COMPILER_STRIP_GATE(0x80C43A00, &lit_3847);
#pragma pop

/* 80C43A04-80C43A08 000020 0004+00 0/4 0/0 0/0 .rodata          @3848 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3848 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C43A04, &lit_3848);
#pragma pop

/* 80C41690-80C419C4 000530 0334+00 1/1 0/0 0/0 .text
 * chain_control1_2__FP17obj_keyhole_classP10kh_chain_si        */
static void chain_control1_2(obj_keyhole_class* param_0, kh_chain_s* param_1, int param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A08-80C43A0C 000024 0004+00 0/4 0/0 0/0 .rodata          @3900 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3900 = 0.5f;
COMPILER_STRIP_GATE(0x80C43A08, &lit_3900);
#pragma pop

/* 80C419C4-80C41C84 000864 02C0+00 1/1 0/0 0/0 .text
 * chain_control2__FP17obj_keyhole_classP10kh_chain_si          */
static void chain_control2(obj_keyhole_class* param_0, kh_chain_s* param_1, int param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A0C-80C43A14 000028 0008+00 1/1 0/0 0/0 .rodata          @3928 */
SECTION_RODATA static u8 const lit_3928[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C43A0C, &lit_3928);

/* 80C41C84-80C41D6C 000B24 00E8+00 1/1 0/0 0/0 .text
 * chain_control3__FP17obj_keyhole_classP10kh_chain_si          */
static void chain_control3(obj_keyhole_class* param_0, kh_chain_s* param_1, int param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A14-80C43A18 000030 0004+00 0/1 0/0 0/0 .rodata          @4111 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4111 = 140.0f;
COMPILER_STRIP_GATE(0x80C43A14, &lit_4111);
#pragma pop

/* 80C43A18-80C43A1C 000034 0004+00 0/1 0/0 0/0 .rodata          @4112 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4112 = 130.0f;
COMPILER_STRIP_GATE(0x80C43A18, &lit_4112);
#pragma pop

/* 80C43A1C-80C43A20 000038 0004+00 0/1 0/0 0/0 .rodata          @4113 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4113 = -140.0f;
COMPILER_STRIP_GATE(0x80C43A1C, &lit_4113);
#pragma pop

/* 80C43A20-80C43A24 00003C 0004+00 0/1 0/0 0/0 .rodata          @4114 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4114 = 170.0f;
COMPILER_STRIP_GATE(0x80C43A20, &lit_4114);
#pragma pop

/* 80C43A24-80C43A28 000040 0004+00 0/1 0/0 0/0 .rodata          @4115 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4115 = -170.0f;
COMPILER_STRIP_GATE(0x80C43A24, &lit_4115);
#pragma pop

/* 80C43A28-80C43A2C 000044 0004+00 0/1 0/0 0/0 .rodata          @4116 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4116 = -100.0f;
COMPILER_STRIP_GATE(0x80C43A28, &lit_4116);
#pragma pop

/* 80C43A2C-80C43A30 000048 0004+00 0/1 0/0 0/0 .rodata          @4117 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4117 = 2.0f;
COMPILER_STRIP_GATE(0x80C43A2C, &lit_4117);
#pragma pop

/* 80C43A30-80C43A34 00004C 0004+00 0/3 0/0 0/0 .rodata          @4118 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4118 = 150.0f;
COMPILER_STRIP_GATE(0x80C43A30, &lit_4118);
#pragma pop

/* 80C43A34-80C43A38 000050 0004+00 0/2 0/0 0/0 .rodata          @4119 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4119 = 7.0f;
COMPILER_STRIP_GATE(0x80C43A34, &lit_4119);
#pragma pop

/* 80C43A38-80C43A3C 000054 0004+00 0/1 0/0 0/0 .rodata          @4120 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4120 = 20.0f;
COMPILER_STRIP_GATE(0x80C43A38, &lit_4120);
#pragma pop

/* 80C43A3C-80C43A40 000058 0004+00 0/1 0/0 0/0 .rodata          @4121 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4121 = 35.0f;
COMPILER_STRIP_GATE(0x80C43A3C, &lit_4121);
#pragma pop

/* 80C43A40-80C43A44 00005C 0004+00 0/1 0/0 0/0 .rodata          @4122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4122 = 13000.0f;
COMPILER_STRIP_GATE(0x80C43A40, &lit_4122);
#pragma pop

/* 80C43A44-80C43A48 000060 0004+00 0/1 0/0 0/0 .rodata          @4123 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4123 = 25.0f;
COMPILER_STRIP_GATE(0x80C43A44, &lit_4123);
#pragma pop

/* 80C43A48-80C43A4C 000064 0004+00 0/2 0/0 0/0 .rodata          @4124 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4124 = 12.0f;
COMPILER_STRIP_GATE(0x80C43A48, &lit_4124);
#pragma pop

/* 80C43A4C-80C43A50 000068 0004+00 0/1 0/0 0/0 .rodata          @4125 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4125 = 19.0f / 20.0f;
COMPILER_STRIP_GATE(0x80C43A4C, &lit_4125);
#pragma pop

/* 80C43A50-80C43A54 00006C 0004+00 0/2 0/0 0/0 .rodata          @4126 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4126 = -5.0f;
COMPILER_STRIP_GATE(0x80C43A50, &lit_4126);
#pragma pop

/* 80C43CA8-80C43CAC 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80C43CAC-80C43CB0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80C43CB0-80C43CB4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80C43CB4-80C43CB8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80C43CB8-80C43CBC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80C43CBC-80C43CC0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80C43CC0-80C43CC4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80C43CC4-80C43CC8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80C43CC8-80C43CCC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80C43CCC-80C43CD0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80C43CD0-80C43CD4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80C43CD4-80C43CD8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80C43CD8-80C43CDC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80C43CDC-80C43CE0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80C43CE0-80C43CE4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80C43CE4-80C43CE8 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 80C43CE4 0001+00 data_80C43CE4 @1009 */
/* 80C43CE5 0003+00 data_80C43CE5 None */
static u8 struct_80C43CE4[4];

/* 80C43CE8-80C43CF4 000048 000C+00 1/1 0/0 0/0 .bss             @3650 */
static u8 lit_3650[12];

/* 80C43CF4-80C43D00 000054 000C+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80C43D00-80C43D10 000060 000C+04 0/1 0/0 0/0 .bss             @3934 */
#pragma push
#pragma force_active on
static u8 lit_3934[12 + 4 /* padding */];
#pragma pop

/* 80C43D10-80C43D1C 000070 000C+00 0/1 0/0 0/0 .bss             @3937 */
#pragma push
#pragma force_active on
static u8 lit_3937[12];
#pragma pop

/* 80C43D1C-80C43D28 00007C 000C+00 0/1 0/0 0/0 .bss             @3938 */
#pragma push
#pragma force_active on
static u8 lit_3938[12];
#pragma pop

/* 80C43D28-80C43D34 000088 000C+00 0/1 0/0 0/0 .bss             @3939 */
#pragma push
#pragma force_active on
static u8 lit_3939[12];
#pragma pop

/* 80C43D34-80C43D40 000094 000C+00 0/1 0/0 0/0 .bss             @3940 */
#pragma push
#pragma force_active on
static u8 lit_3940[12];
#pragma pop

/* 80C43D40-80C43D4C 0000A0 000C+00 0/1 0/0 0/0 .bss             @3941 */
#pragma push
#pragma force_active on
static u8 lit_3941[12];
#pragma pop

/* 80C43D4C-80C43D94 0000AC 0048+00 0/1 0/0 0/0 .bss             lock_pos$3933 */
#pragma push
#pragma force_active on
static u8 lock_pos[72];
#pragma pop

/* 80C41D6C-80C42380 000C0C 0614+00 1/1 0/0 0/0 .text            chain_move__FP17obj_keyhole_class
 */
static void chain_move(obj_keyhole_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A54-80C43A58 000070 0004+00 0/2 0/0 0/0 .rodata          @4165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4165 = 8.0f;
COMPILER_STRIP_GATE(0x80C43A54, &lit_4165);
#pragma pop

/* 80C42380-80C42518 001220 0198+00 1/1 0/0 0/0 .text            open__FP17obj_keyhole_class */
static void open(obj_keyhole_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A58-80C43A5C 000074 0004+00 0/3 0/0 0/0 .rodata          @4211 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4211 = 1.5f;
COMPILER_STRIP_GATE(0x80C43A58, &lit_4211);
#pragma pop

/* 80C43A5C-80C43A60 000078 0004+00 0/1 0/0 0/0 .rodata          @4212 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4212 = 4.0f;
COMPILER_STRIP_GATE(0x80C43A5C, &lit_4212);
#pragma pop

/* 80C43A60-80C43A64 00007C 0004+00 0/3 0/0 0/0 .rodata          @4213 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4213 = 40.0f;
COMPILER_STRIP_GATE(0x80C43A60, &lit_4213);
#pragma pop

/* 80C43A64-80C43A68 000080 0004+00 0/1 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4214 = 70.0f;
COMPILER_STRIP_GATE(0x80C43A64, &lit_4214);
#pragma pop

/* 80C43A68-80C43A6C 000084 0004+00 0/2 0/0 0/0 .rodata          @4215 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4215 = 100.0f;
COMPILER_STRIP_GATE(0x80C43A68, &lit_4215);
#pragma pop

/* 80C43A6C-80C43A70 000088 0004+00 0/1 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4216 = 5.0f;
COMPILER_STRIP_GATE(0x80C43A6C, &lit_4216);
#pragma pop

/* 80C43A70-80C43A74 00008C 0004+00 0/1 0/0 0/0 .rodata          @4217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4217 = 3.0f;
COMPILER_STRIP_GATE(0x80C43A70, &lit_4217);
#pragma pop

/* 80C43A74-80C43A78 000090 0004+00 0/1 0/0 0/0 .rodata          @4218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4218 = 10000.0f;
COMPILER_STRIP_GATE(0x80C43A74, &lit_4218);
#pragma pop

/* 80C43A78-80C43A7C 000094 0004+00 0/1 0/0 0/0 .rodata          @4219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4219 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C43A78, &lit_4219);
#pragma pop

/* 80C42518-80C427D0 0013B8 02B8+00 1/1 0/0 0/0 .text            drop__FP17obj_keyhole_class */
static void drop(obj_keyhole_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A7C-80C43A80 000098 0004+00 0/1 0/0 0/0 .rodata          @4344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4344 = 300.0f;
COMPILER_STRIP_GATE(0x80C43A7C, &lit_4344);
#pragma pop

/* 80C43A80-80C43A84 00009C 0004+00 0/1 0/0 0/0 .rodata          @4345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4345 = 500.0f;
COMPILER_STRIP_GATE(0x80C43A80, &lit_4345);
#pragma pop

/* 80C43A84-80C43A88 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4346 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4346 = 17000.0f;
COMPILER_STRIP_GATE(0x80C43A84, &lit_4346);
#pragma pop

/* 80C43A88-80C43A8C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4347 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4347 = 90.0f;
COMPILER_STRIP_GATE(0x80C43A88, &lit_4347);
#pragma pop

/* 80C43A8C-80C43A90 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4348 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4348 = 17.0f;
COMPILER_STRIP_GATE(0x80C43A8C, &lit_4348);
#pragma pop

/* 80C427D0-80C42D0C 001670 053C+00 2/1 0/0 0/0 .text daObj_Keyhole_Execute__FP17obj_keyhole_class
 */
static void daObj_Keyhole_Execute(obj_keyhole_class* param_0) {
    // NONMATCHING
}

/* 80C42D0C-80C42D14 001BAC 0008+00 1/0 0/0 0/0 .text
 * daObj_Keyhole_IsDelete__FP17obj_keyhole_class                */
static bool daObj_Keyhole_IsDelete(obj_keyhole_class* param_0) {
    return true;
}

/* 80C42D14-80C42DC8 001BB4 00B4+00 1/0 0/0 0/0 .text daObj_Keyhole_Delete__FP17obj_keyhole_class
 */
static void daObj_Keyhole_Delete(obj_keyhole_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A90-80C43A94 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4456 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4456 = -1.0f;
COMPILER_STRIP_GATE(0x80C43A90, &lit_4456);
#pragma pop

/* 80C42DC8-80C4307C 001C68 02B4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C43A94-80C43AA8 0000B0 0014+00 0/1 0/0 0/0 .rodata          estimateSizeTbl$4475 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const estimateSizeTbl[20] = {
    0xBF, 0x40, 0xA4, 0xE0, 0x93, 0x60, 0xD0, 0x60, 0xA4, 0xE0,
    0xA4, 0x20, 0xA4, 0xE0, 0xA4, 0xE0, 0xA4, 0xE0, 0xA4, 0xE0,
};
COMPILER_STRIP_GATE(0x80C43A94, &estimateSizeTbl);
#pragma pop

/* 80C43AA8-80C43AAC 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4627 = -400.0f;
COMPILER_STRIP_GATE(0x80C43AA8, &lit_4627);
#pragma pop

/* 80C43AAC-80C43AB0 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4628 = 400.0f;
COMPILER_STRIP_GATE(0x80C43AAC, &lit_4628);
#pragma pop

/* 80C43AB0-80C43AB4 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4629 = -15.0f;
COMPILER_STRIP_GATE(0x80C43AB0, &lit_4629);
#pragma pop

/* 80C43AB4-80C43AB8 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4630 = 295.0f;
COMPILER_STRIP_GATE(0x80C43AB4, &lit_4630);
#pragma pop

/* 80C43AB8-80C43ABC 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4631 = 60.0f;
COMPILER_STRIP_GATE(0x80C43AB8, &lit_4631);
#pragma pop

/* 80C4307C-80C434AC 001F1C 0430+00 1/0 0/0 0/0 .text daObj_Keyhole_Create__FP10fopAc_ac_c */
static void daObj_Keyhole_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C434AC-80C434E8 00234C 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
void __dt__5csXyzFv() {
//asm csXyz::~csXyz() {
    // NONMATCHING
}

/* 80C434E8-80C435B4 002388 00CC+00 2/2 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80C435B4-80C435FC 002454 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80C435FC-80C43644 00249C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80C43644-80C436A0 0024E4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80C436A0-80C437A4 002540 0104+00 1/1 0/0 0/0 .text            __dt__10kh_chain_sFv */
kh_chain_s::~kh_chain_s() {
    // NONMATCHING
}

/* 80C437A4-80C43878 002644 00D4+00 1/1 0/0 0/0 .text            __ct__10kh_chain_sFv */
kh_chain_s::kh_chain_s() {
    // NONMATCHING
}

/* 80C43878-80C438FC 002718 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80C438FC-80C43900 00279C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
void __ct__5csXyzFv() {
    /* empty function */
}

/* 80C43900-80C43904 0027A0 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80C43904-80C4394C 0027A4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80C4394C-80C43994 0027EC 0048+00 2/1 0/0 0/0 .text            __dt__19daObj_Keyhole_HIO_cFv */
daObj_Keyhole_HIO_c::~daObj_Keyhole_HIO_c() {
    // NONMATCHING
}

/* 80C43994-80C439D0 002834 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_keyhole_cpp */
void __sinit_d_a_obj_keyhole_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C43994, __sinit_d_a_obj_keyhole_cpp);
#pragma pop

/* ############################################################################################## */
/* 80C43D94-80C43D98 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80C43D94[4];
#pragma pop

/* 80C43D98-80C43D9C 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80C43D98[4];
#pragma pop

/* 80C43D9C-80C43DA0 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C43D9C[4];
#pragma pop

/* 80C43DA0-80C43DA4 000100 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C43DA0[4];
#pragma pop

/* 80C43DA4-80C43DA8 000104 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DA4[4];
#pragma pop

/* 80C43DA8-80C43DAC 000108 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DA8[4];
#pragma pop

/* 80C43DAC-80C43DB0 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DAC[4];
#pragma pop

/* 80C43DB0-80C43DB4 000110 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80C43DB0[4];
#pragma pop

/* 80C43DB4-80C43DB8 000114 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80C43DB4[4];
#pragma pop

/* 80C43DB8-80C43DBC 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80C43DB8[4];
#pragma pop

/* 80C43DBC-80C43DC0 00011C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C43DBC[4];
#pragma pop

/* 80C43DC0-80C43DC4 000120 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C43DC0[4];
#pragma pop

/* 80C43DC4-80C43DC8 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80C43DC4[4];
#pragma pop

/* 80C43DC8-80C43DCC 000128 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DC8[4];
#pragma pop

/* 80C43DCC-80C43DD0 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C43DCC[4];
#pragma pop

/* 80C43DD0-80C43DD4 000130 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80C43DD0[4];
#pragma pop

/* 80C43DD4-80C43DD8 000134 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80C43DD4[4];
#pragma pop

/* 80C43DD8-80C43DDC 000138 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C43DD8[4];
#pragma pop

/* 80C43DDC-80C43DE0 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DDC[4];
#pragma pop

/* 80C43DE0-80C43DE4 000140 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C43DE0[4];
#pragma pop

/* 80C43DE4-80C43DE8 000144 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DE4[4];
#pragma pop

/* 80C43DE8-80C43DEC 000148 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DE8[4];
#pragma pop

/* 80C43DEC-80C43DF0 00014C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DEC[4];
#pragma pop

/* 80C43DF0-80C43DF4 000150 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C43DF0[4];
#pragma pop

/* 80C43DF4-80C43DF8 000154 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C43DF4[4];
#pragma pop

/* 80C43ABC-80C43ABC 0000D8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
