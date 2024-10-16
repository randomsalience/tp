/**
 * @file d_a_b_yo_ice.cpp
 * 
*/

#include "d/actor/d_a_b_yo_ice.h"
#include "dol2asm.h"
#include "d/d_camera.h"
//
// Forward References:
//

extern "C" void __ct__13daB_YOI_HIO_cFv();
extern "C" void draw__9daB_YOI_cFv();
extern "C" static void daB_YOI_Draw__FP9daB_YOI_c();
extern "C" void setActionMode__9daB_YOI_cFii();
extern "C" void damage_check__9daB_YOI_cFv();
extern "C" void setOperate__9daB_YOI_cFi();
extern "C" void setWeight__9daB_YOI_cFUc();
extern "C" void setBreakIceEffect__9daB_YOI_cFv();
extern "C" void setWallBreakIceEffect__9daB_YOI_cFv();
extern "C" void setApperEffect__9daB_YOI_cFv();
extern "C" void setApperEffect2__9daB_YOI_cFv();
extern "C" void setLandingEffect__9daB_YOI_cFv();
extern "C" void executeFirst__9daB_YOI_cFv();
extern "C" void getSingleFallPos__9daB_YOI_cFv();
extern "C" void executeRiseUp__9daB_YOI_cFv();
extern "C" void executeSingleFall__9daB_YOI_cFv();
extern "C" void executeYose__9daB_YOI_cFv();
extern "C" void executeYoseFall__9daB_YOI_cFv();
extern "C" void executeDemoRevival__9daB_YOI_cFv();
extern "C" void executeDamage__9daB_YOI_cFv();
extern "C" void executeDeath__9daB_YOI_cFv();
extern "C" void crack_execute__9daB_YOI_cFv();
extern "C" void action__9daB_YOI_cFv();
extern "C" void mtx_set__9daB_YOI_cFv();
extern "C" void cc_set__9daB_YOI_cFv();
extern "C" void execute__9daB_YOI_cFv();
extern "C" static void daB_YOI_Execute__FP9daB_YOI_c();
extern "C" static bool daB_YOI_IsDelete__FP9daB_YOI_c();
extern "C" void _delete__9daB_YOI_cFv();
extern "C" static void daB_YOI_Delete__FP9daB_YOI_c();
extern "C" void CreateHeap__9daB_YOI_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__9daB_YOI_cFv();
extern "C" void __ct__9daB_YOI_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" static void daB_YOI_Create__FP9daB_YOI_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__13daB_YOI_HIO_cFv();
extern "C" void __sinit_d_a_b_yo_ice_cpp();
extern "C" void getIceCenterPos__8daB_YO_cFv();
extern "C" extern char const* const d_a_b_yo_ice__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItem__FPC4cXyziiiPC5csXyzPC4cXyzi();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void GetForceLockOnActor__9dCamera_cFv();
extern "C" void ForceLockOn__9dCamera_cFP10fopAc_ac_c();
extern "C" void ForceLockOff__9dCamera_cFP10fopAc_ac_c();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ClrCcMove__9cCcD_SttsFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__5csXyzFR5csXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalcPosXZ2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chasePosXZ__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void onIceBreak__8daB_YO_cFUs();
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8063DC84-8063DC88 000000 0004+00 19/19 0/0 0/0 .rodata          @3776 */
SECTION_RODATA static f32 const lit_3776 = 1.0f;
COMPILER_STRIP_GATE(0x8063DC84, &lit_3776);

/* 8063DC88-8063DC8C 000004 0004+00 1/1 0/0 0/0 .rodata          @3777 */
SECTION_RODATA static f32 const lit_3777 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x8063DC88, &lit_3777);

/* 8063DDA4-8063DDB0 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8063DDB0-8063DDC4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 8063DDC4-8063DE08 000020 0044+00 0/1 0/0 0/0 .data cc_yo_src__26@unnamed@d_a_b_yo_ice_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8063DDC4[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0C, 0xD8, 0xBB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x55,
    0x09, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8063DE08-8063DE4C 000064 0044+00 0/1 0/0 0/0 .data cc_yo_iron_src__26@unnamed@d_a_b_yo_ice_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8063DE08[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x25,
    0x09, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8063DE4C-8063DE90 0000A8 0044+00 0/1 0/0 0/0 .data cc_yo_cam_src__26@unnamed@d_a_b_yo_ice_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_8063DE4C[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05,
    0x09, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 8063DE90-8063DEBC -00001 002C+00 1/1 0/0 0/0 .data            @3891 */
SECTION_DATA static void* lit_3891[11] = {
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x34),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x44),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x54),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x64),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x80),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x90),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0xA0),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0xB0),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x15C),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x16C),
    (void*)(((char*)setOperate__9daB_YOI_cFi) + 0x17C),
};

/* 8063DEBC-8063DEC4 000118 0006+02 1/1 0/0 0/0 .data            break_effect_id$3901 */
SECTION_DATA static u8 break_effect_id[6 + 2 /* padding */] = {
    0x87,
    0xBB,
    0x87,
    0xBC,
    0x87,
    0xBD,
    /* padding */
    0x00,
    0x00,
};

/* 8063DEC4-8063DECC 000120 0006+02 1/1 0/0 0/0 .data            wall_break_effect_id$3920 */
SECTION_DATA static u8 wall_break_effect_id[6 + 2 /* padding */] = {
    0x87,
    0xB8,
    0x87,
    0xB9,
    0x87,
    0xBA,
    /* padding */
    0x00,
    0x00,
};

/* 8063DECC-8063DED0 000128 0004+00 1/1 0/0 0/0 .data            apper_effect_id$3948 */
SECTION_DATA static u8 apper_effect_id[4] = {
    0x87,
    0xB6,
    0x87,
    0xB7,
};

/* 8063DED0-8063DEDC 00012C 000C+00 1/1 0/0 0/0 .data            l_landing_effect_id$3966 */
SECTION_DATA static u8 l_landing_effect_id[12] = {
    0x86, 0xDC, 0x86, 0xDD, 0x86, 0xDE, 0x86, 0xDF, 0x86, 0xE0, 0x86, 0xE1,
};

/* 8063DEDC-8063DF04 -00001 0028+00 1/1 0/0 0/0 .data            @4180 */
SECTION_DATA static void* lit_4180[10] = {
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x7C),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x1F0),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x54C),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x54C),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x54C),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x98),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x98),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x260),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x2C4),
    (void*)(((char*)executeRiseUp__9daB_YOI_cFv) + 0x404),
};

/* 8063DF04-8063DF30 -00001 002C+00 1/1 0/0 0/0 .data            @4385 */
SECTION_DATA static void* lit_4385[11] = {
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x4C),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x218),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x5BC),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x8E8),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x660),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x704),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x8E8),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x8E8),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x8E8),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x8E8),
    (void*)(((char*)executeSingleFall__9daB_YOI_cFv) + 0x98),
};

/* 8063DF30-8063DF50 -00001 0020+00 1/1 0/0 0/0 .data            @4909 */
SECTION_DATA static void* lit_4909[8] = {
    (void*)(((char*)action__9daB_YOI_cFv) + 0x104), (void*)(((char*)action__9daB_YOI_cFv) + 0x110),
    (void*)(((char*)action__9daB_YOI_cFv) + 0x11C), (void*)(((char*)action__9daB_YOI_cFv) + 0x128),
    (void*)(((char*)action__9daB_YOI_cFv) + 0x134), (void*)(((char*)action__9daB_YOI_cFv) + 0x140),
    (void*)(((char*)action__9daB_YOI_cFv) + 0x14C), (void*)(((char*)action__9daB_YOI_cFv) + 0x158),
};

/* 8063DF50-8063DF70 -00001 0020+00 1/0 0/0 0/0 .data            l_daB_YOI_Method */
static actor_method_class l_daB_YOI_Method = {
    (process_method_func)daB_YOI_Create__FP9daB_YOI_c,
    (process_method_func)daB_YOI_Delete__FP9daB_YOI_c,
    (process_method_func)daB_YOI_Execute__FP9daB_YOI_c,
    (process_method_func)daB_YOI_IsDelete__FP9daB_YOI_c,
    (process_method_func)daB_YOI_Draw__FP9daB_YOI_c,
};

/* 8063DF70-8063DFA0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_B_YOI */
extern actor_process_profile_definition g_profile_B_YOI = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_B_YOI,             // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daB_YOI_c),      // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  224,                    // mPriority
  &l_daB_YOI_Method,      // sub_method
  0x00044000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 8063DFA0-8063DFAC 0001FC 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8063DFAC-8063DFB8 000208 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 8063DFB8-8063DFC4 000214 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8063DFC4-8063DFD0 000220 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8063DFD0-8063DFDC 00022C 000C+00 2/2 0/0 0/0 .data            __vt__13daB_YOI_HIO_c */
SECTION_DATA extern void* __vt__13daB_YOI_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daB_YOI_HIO_cFv,
};

/* 8063A14C-8063A17C 0000EC 0030+00 1/1 0/0 0/0 .text            __ct__13daB_YOI_HIO_cFv */
daB_YOI_HIO_c::daB_YOI_HIO_c() {
    // NONMATCHING
}

/* 8063A17C-8063A2B8 00011C 013C+00 1/1 0/0 0/0 .text            draw__9daB_YOI_cFv */
void daB_YOI_c::draw() {
    // NONMATCHING
}

/* 8063A2B8-8063A2D8 000258 0020+00 1/0 0/0 0/0 .text            daB_YOI_Draw__FP9daB_YOI_c */
static void daB_YOI_Draw(daB_YOI_c* param_0) {
    // NONMATCHING
}

/* 8063A2D8-8063A2E4 000278 000C+00 2/2 0/0 0/0 .text            setActionMode__9daB_YOI_cFii */
void daB_YOI_c::setActionMode(int param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DC8C-8063DC90 000008 0004+00 0/6 0/0 0/0 .rodata          @3858 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3858 = 100.0f;
COMPILER_STRIP_GATE(0x8063DC8C, &lit_3858);
#pragma pop

/* 8063DC90-8063DC94 00000C 0004+00 1/2 0/0 0/0 .rodata          @3859 */
SECTION_RODATA static f32 const lit_3859 = 33.0f / 100.0f;
COMPILER_STRIP_GATE(0x8063DC90, &lit_3859);

/* 8063DC94-8063DC98 000010 0004+00 1/5 0/0 0/0 .rodata          @3860 */
SECTION_RODATA static f32 const lit_3860 = 50.0f;
COMPILER_STRIP_GATE(0x8063DC94, &lit_3860);

/* 8063A2E4-8063A480 000284 019C+00 1/1 0/0 0/0 .text            damage_check__9daB_YOI_cFv */
void daB_YOI_c::damage_check() {
    // NONMATCHING
}

/* 8063A480-8063A628 000420 01A8+00 1/0 0/0 3/3 .text            setOperate__9daB_YOI_cFi */
void daB_YOI_c::setOperate(int param_0) {
    // NONMATCHING
}

/* 8063A628-8063A638 0005C8 0010+00 2/2 0/0 0/0 .text            setWeight__9daB_YOI_cFUc */
void daB_YOI_c::setWeight(u8 param_0) {
    // NONMATCHING
}

/* 8063A638-8063A6F8 0005D8 00C0+00 2/2 0/0 0/0 .text            setBreakIceEffect__9daB_YOI_cFv */
void daB_YOI_c::setBreakIceEffect() {
    // NONMATCHING
}

/* 8063A6F8-8063A79C 000698 00A4+00 1/1 0/0 0/0 .text            setWallBreakIceEffect__9daB_YOI_cFv
 */
void daB_YOI_c::setWallBreakIceEffect() {
    // NONMATCHING
}

/* 8063A79C-8063A824 00073C 0088+00 1/1 0/0 0/0 .text            setApperEffect__9daB_YOI_cFv */
void daB_YOI_c::setApperEffect() {
    // NONMATCHING
}

/* 8063A824-8063A8C8 0007C4 00A4+00 1/1 0/0 0/0 .text            setApperEffect2__9daB_YOI_cFv */
void daB_YOI_c::setApperEffect2() {
    // NONMATCHING
}

/* 8063A8C8-8063A96C 000868 00A4+00 2/2 0/0 0/0 .text            setLandingEffect__9daB_YOI_cFv */
void daB_YOI_c::setLandingEffect() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DC98-8063DC9C 000014 0004+00 0/10 0/0 0/0 .rodata          @4038 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4038[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8063DC98, &lit_4038);
#pragma pop

/* 8063DC9C-8063DCA0 000018 0004+00 0/1 0/0 0/0 .rodata          @4039 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4039 = 150.0f;
COMPILER_STRIP_GATE(0x8063DC9C, &lit_4039);
#pragma pop

/* 8063DCA0-8063DCA4 00001C 0004+00 0/2 0/0 0/0 .rodata          @4040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4040 = 10.0f;
COMPILER_STRIP_GATE(0x8063DCA0, &lit_4040);
#pragma pop

/* 8063DCA4-8063DCA8 000020 0004+00 0/6 0/0 0/0 .rodata          @4041 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4041 = 0.5f;
COMPILER_STRIP_GATE(0x8063DCA4, &lit_4041);
#pragma pop

/* 8063DCA8-8063DCAC 000024 0004+00 0/3 0/0 0/0 .rodata          @4042 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4042 = -10.0f;
COMPILER_STRIP_GATE(0x8063DCA8, &lit_4042);
#pragma pop

/* 8063DCAC-8063DCB0 000028 0004+00 0/4 0/0 0/0 .rodata          @4043 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4043 = 5.0f;
COMPILER_STRIP_GATE(0x8063DCAC, &lit_4043);
#pragma pop

/* 8063A96C-8063ABC0 00090C 0254+00 1/1 0/0 0/0 .text            executeFirst__9daB_YOI_cFv */
void daB_YOI_c::executeFirst() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DCB0-8063DCD8 00002C 0028+00 0/1 0/0 0/0 .rodata          yoi_fall_timer */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const yoi_fall_timer[40] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x48,
    0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x6C,
};
COMPILER_STRIP_GATE(0x8063DCB0, &yoi_fall_timer);
#pragma pop

/* 8063DCD8-8063DCDC 000054 0004+00 1/1 0/0 0/0 .rodata          @4082 */
SECTION_RODATA static f32 const lit_4082 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x8063DCD8, &lit_4082);

/* 8063ABC0-8063ACCC 000B60 010C+00 2/2 0/0 0/0 .text            getSingleFallPos__9daB_YOI_cFv */
void daB_YOI_c::getSingleFallPos() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DCDC-8063DCE0 000058 0004+00 0/2 0/0 0/0 .rodata          @4166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4166 = 64.0f;
COMPILER_STRIP_GATE(0x8063DCDC, &lit_4166);
#pragma pop

/* 8063DCE0-8063DCE4 00005C 0004+00 0/3 0/0 0/0 .rodata          @4167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4167 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8063DCE0, &lit_4167);
#pragma pop

/* 8063DCE4-8063DCE8 000060 0004+00 0/1 0/0 0/0 .rodata          @4168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4168 = 60.0f;
COMPILER_STRIP_GATE(0x8063DCE4, &lit_4168);
#pragma pop

/* 8063DCE8-8063DCEC 000064 0004+00 0/3 0/0 0/0 .rodata          @4169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4169 = 3584.0f;
COMPILER_STRIP_GATE(0x8063DCE8, &lit_4169);
#pragma pop

/* 8063DCEC-8063DCF0 000068 0004+00 0/3 0/0 0/0 .rodata          @4170 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4170 = 256.0f;
COMPILER_STRIP_GATE(0x8063DCEC, &lit_4170);
#pragma pop

/* 8063DCF0-8063DCF4 00006C 0004+00 0/3 0/0 0/0 .rodata          @4171 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4171 = -3584.0f;
COMPILER_STRIP_GATE(0x8063DCF0, &lit_4171);
#pragma pop

/* 8063ACCC-8063B238 000C6C 056C+00 2/1 0/0 0/0 .text            executeRiseUp__9daB_YOI_cFv */
void daB_YOI_c::executeRiseUp() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DCF4-8063DCF8 000070 0004+00 0/0 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4172 = 55.0f;
COMPILER_STRIP_GATE(0x8063DCF4, &lit_4172);
#pragma pop

/* 8063DCF8-8063DCFC 000074 0004+00 0/1 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4173 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8063DCF8, &lit_4173);
#pragma pop

/* 8063DCFC-8063DD00 000078 0004+00 0/3 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4174 = 200.0f;
COMPILER_STRIP_GATE(0x8063DCFC, &lit_4174);
#pragma pop

/* 8063DD00-8063DD04 00007C 0004+00 0/0 0/0 0/0 .rodata          @4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4175 = 800.0f;
COMPILER_STRIP_GATE(0x8063DD00, &lit_4175);
#pragma pop

/* 8063DD04-8063DD08 000080 0004+00 0/3 0/0 0/0 .rodata          @4176 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4176 = 15.0f;
COMPILER_STRIP_GATE(0x8063DD04, &lit_4176);
#pragma pop

/* 8063DD08-8063DD0C 000084 0004+00 0/1 0/0 0/0 .rodata          @4177 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4177 = -15.0f;
COMPILER_STRIP_GATE(0x8063DD08, &lit_4177);
#pragma pop

/* 8063DD0C-8063DD10 000088 0004+00 0/1 0/0 0/0 .rodata          @4178 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4178 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x8063DD0C, &lit_4178);
#pragma pop

/* 8063DD10-8063DD14 00008C 0004+00 0/0 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = 30.0f;
COMPILER_STRIP_GATE(0x8063DD10, &lit_4179);
#pragma pop

/* 8063DD14-8063DD1C 000090 0008+00 0/2 0/0 0/0 .rodata          @4183 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4183[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8063DD14, &lit_4183);
#pragma pop

/* 8063DD1C-8063DD20 000098 0004+00 0/1 0/0 0/0 .rodata          @4370 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4370 = 600.0f;
COMPILER_STRIP_GATE(0x8063DD1C, &lit_4370);
#pragma pop

/* 8063DD20-8063DD24 00009C 0004+00 0/1 0/0 0/0 .rodata          @4371 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4371 = 4.0f;
COMPILER_STRIP_GATE(0x8063DD20, &lit_4371);
#pragma pop

/* 8063B238-8063BB40 0011D8 0908+00 2/1 0/0 0/0 .text            executeSingleFall__9daB_YOI_cFv */
void daB_YOI_c::executeSingleFall() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DD24-8063DD28 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4372 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4372 = -85.0f;
COMPILER_STRIP_GATE(0x8063DD24, &lit_4372);
#pragma pop

/* 8063DD28-8063DD2C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4373 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4373 = 32768.0f;
COMPILER_STRIP_GATE(0x8063DD28, &lit_4373);
#pragma pop

/* 8063DD2C-8063DD30 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4374 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4374 = 180.0f;
COMPILER_STRIP_GATE(0x8063DD2C, &lit_4374);
#pragma pop

/* 8063DD30-8063DD34 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4375 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4375 = 40.0f;
COMPILER_STRIP_GATE(0x8063DD30, &lit_4375);
#pragma pop

/* 8063DD34-8063DD38 0000B0 0004+00 0/0 0/0 0/0 .rodata          @4376 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4376 = 3.0f;
COMPILER_STRIP_GATE(0x8063DD34, &lit_4376);
#pragma pop

/* 8063DD38-8063DD3C 0000B4 0004+00 0/0 0/0 0/0 .rodata          @4377 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4377 = 16384.0f;
COMPILER_STRIP_GATE(0x8063DD38, &lit_4377);
#pragma pop

/* 8063DD3C-8063DD44 0000B8 0008+00 0/2 0/0 0/0 .rodata          @4378 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4378[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8063DD3C, &lit_4378);
#pragma pop

/* 8063DD44-8063DD4C 0000C0 0008+00 0/2 0/0 0/0 .rodata          @4379 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4379[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8063DD44, &lit_4379);
#pragma pop

/* 8063DD4C-8063DD54 0000C8 0008+00 0/2 0/0 0/0 .rodata          @4380 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4380[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8063DD4C, &lit_4380);
#pragma pop

/* 8063DD54-8063DD58 0000D0 0004+00 0/0 0/0 0/0 .rodata          @4381 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4381 = 140.0f;
COMPILER_STRIP_GATE(0x8063DD54, &lit_4381);
#pragma pop

/* 8063DD58-8063DD5C 0000D4 0004+00 0/0 0/0 0/0 .rodata          @4382 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4382 = 2048.0f;
COMPILER_STRIP_GATE(0x8063DD58, &lit_4382);
#pragma pop

/* 8063DD5C-8063DD60 0000D8 0004+00 0/2 0/0 0/0 .rodata          @4383 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4383 = -200.0f;
COMPILER_STRIP_GATE(0x8063DD5C, &lit_4383);
#pragma pop

/* 8063DD60-8063DD64 0000DC 0004+00 0/2 0/0 0/0 .rodata          @4384 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4384 = 1700.0f;
COMPILER_STRIP_GATE(0x8063DD60, &lit_4384);
#pragma pop

/* 8063DD64-8063DD68 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4597 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4597 = 70.0f;
COMPILER_STRIP_GATE(0x8063DD64, &lit_4597);
#pragma pop

/* 8063DD68-8063DD6C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4598 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4598 = 1600.0f;
COMPILER_STRIP_GATE(0x8063DD68, &lit_4598);
#pragma pop

/* 8063DD6C-8063DD70 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4599 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4599 = 75.0f;
COMPILER_STRIP_GATE(0x8063DD6C, &lit_4599);
#pragma pop

/* 8063BB40-8063C3F0 001AE0 08B0+00 1/1 0/0 0/0 .text            executeYose__9daB_YOI_cFv */
void daB_YOI_c::executeYose() {
    // NONMATCHING
}

/* 8063C3F0-8063C76C 002390 037C+00 1/1 0/0 0/0 .text            executeYoseFall__9daB_YOI_cFv */
void daB_YOI_c::executeYoseFall() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DD70-8063DD74 0000EC 0004+00 0/2 0/0 0/0 .rodata          @4728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4728 = 1000.0f;
COMPILER_STRIP_GATE(0x8063DD70, &lit_4728);
#pragma pop

/* 8063C76C-8063C900 00270C 0194+00 1/1 0/0 0/0 .text            executeDemoRevival__9daB_YOI_cFv */
void daB_YOI_c::executeDemoRevival() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DD74-8063DD78 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4784 = 80.0f;
COMPILER_STRIP_GATE(0x8063DD74, &lit_4784);
#pragma pop

/* 8063DD78-8063DD7C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4785 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4785 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8063DD78, &lit_4785);
#pragma pop

/* 8063DD7C-8063DD80 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4786 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4786 = 1024.0f;
COMPILER_STRIP_GATE(0x8063DD7C, &lit_4786);
#pragma pop

/* 8063C900-8063CC90 0028A0 0390+00 1/1 0/0 0/0 .text            executeDamage__9daB_YOI_cFv */
void daB_YOI_c::executeDamage() {
    // NONMATCHING
}

/* 8063CC90-8063CD14 002C30 0084+00 1/1 0/0 0/0 .text            executeDeath__9daB_YOI_cFv */
void daB_YOI_c::executeDeath() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DD80-8063DD84 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4814 = 255.0f;
COMPILER_STRIP_GATE(0x8063DD80, &lit_4814);
#pragma pop

/* 8063DD84-8063DD88 000100 0004+00 0/1 0/0 0/0 .rodata          @4815 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4815 = 2.0f;
COMPILER_STRIP_GATE(0x8063DD84, &lit_4815);
#pragma pop

/* 8063CD14-8063CD90 002CB4 007C+00 1/1 0/0 0/0 .text            crack_execute__9daB_YOI_cFv */
void daB_YOI_c::crack_execute() {
    // NONMATCHING
}

/* 8063CD90-8063D0C8 002D30 0338+00 2/1 0/0 0/0 .text            action__9daB_YOI_cFv */
void daB_YOI_c::action() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DFE8-8063DFEC 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_8063DFE8[4];

/* 8063DFEC-8063DFF8 00000C 000C+00 1/1 0/0 0/0 .bss             @3771 */
static u8 lit_3771[12];

/* 8063DFF8-8063E008 000018 0010+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 8063D0C8-8063D1B0 003068 00E8+00 1/1 0/0 0/0 .text            mtx_set__9daB_YOI_cFv */
void daB_YOI_c::mtx_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8063DD88-8063DD8C 000104 0004+00 0/1 0/0 0/0 .rodata          @4953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4953 = 350.0f;
COMPILER_STRIP_GATE(0x8063DD88, &lit_4953);
#pragma pop

/* 8063DD8C-8063DD90 000108 0004+00 0/1 0/0 0/0 .rodata          @4954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4954 = 550.0f;
COMPILER_STRIP_GATE(0x8063DD8C, &lit_4954);
#pragma pop

/* 8063DD90-8063DD94 00010C 0004+00 0/1 0/0 0/0 .rodata          @4955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4955 = 160.0f;
COMPILER_STRIP_GATE(0x8063DD90, &lit_4955);
#pragma pop

/* 8063DD94-8063DD98 000110 0004+00 0/1 0/0 0/0 .rodata          @4956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4956 = 120.0f;
COMPILER_STRIP_GATE(0x8063DD94, &lit_4956);
#pragma pop

/* 8063DD98-8063DD9C 000114 0004+00 0/1 0/0 0/0 .rodata          @4957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4957 = 400.0f;
COMPILER_STRIP_GATE(0x8063DD98, &lit_4957);
#pragma pop

/* 8063D1B0-8063D350 003150 01A0+00 1/1 0/0 0/0 .text            cc_set__9daB_YOI_cFv */
void daB_YOI_c::cc_set() {
    // NONMATCHING
}

/* 8063D350-8063D434 0032F0 00E4+00 1/1 0/0 0/0 .text            execute__9daB_YOI_cFv */
void daB_YOI_c::execute() {
    // NONMATCHING
}

/* 8063D434-8063D454 0033D4 0020+00 2/1 0/0 0/0 .text            daB_YOI_Execute__FP9daB_YOI_c */
static void daB_YOI_Execute(daB_YOI_c* param_0) {
    // NONMATCHING
}

/* 8063D454-8063D45C 0033F4 0008+00 1/0 0/0 0/0 .text            daB_YOI_IsDelete__FP9daB_YOI_c */
static bool daB_YOI_IsDelete(daB_YOI_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 8063DD9C-8063DD9C 000118 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8063DD9C = "B_YO";
#pragma pop

/* 8063D45C-8063D4D8 0033FC 007C+00 1/1 0/0 0/0 .text            _delete__9daB_YOI_cFv */
void daB_YOI_c::_delete() {
    // NONMATCHING
}

/* 8063D4D8-8063D4F8 003478 0020+00 1/0 0/0 0/0 .text            daB_YOI_Delete__FP9daB_YOI_c */
static void daB_YOI_Delete(daB_YOI_c* param_0) {
    // NONMATCHING
}

/* 8063D4F8-8063D5B0 003498 00B8+00 1/1 0/0 0/0 .text            CreateHeap__9daB_YOI_cFv */
void daB_YOI_c::CreateHeap() {
    // NONMATCHING
}

/* 8063D5B0-8063D5D0 003550 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 8063D5D0-8063D8FC 003570 032C+00 1/1 0/0 0/0 .text            create__9daB_YOI_cFv */
void daB_YOI_c::create() {
    // NONMATCHING
}

/* 8063D8FC-8063DA7C 00389C 0180+00 1/1 0/0 0/0 .text            __ct__9daB_YOI_cFv */
daB_YOI_c::daB_YOI_c() {
    // NONMATCHING
}

/* 8063DA7C-8063DAC4 003A1C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 8063DAC4-8063DB0C 003A64 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 8063DB0C-8063DB68 003AAC 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 8063DB68-8063DB88 003B08 0020+00 1/0 0/0 0/0 .text            daB_YOI_Create__FP9daB_YOI_c */
static void daB_YOI_Create(daB_YOI_c* param_0) {
    // NONMATCHING
}

/* 8063DB88-8063DBD0 003B28 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 8063DBD0-8063DC18 003B70 0048+00 2/1 0/0 0/0 .text            __dt__13daB_YOI_HIO_cFv */
daB_YOI_HIO_c::~daB_YOI_HIO_c() {
    // NONMATCHING
}

/* 8063DC18-8063DC54 003BB8 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_b_yo_ice_cpp */
void __sinit_d_a_b_yo_ice_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8063DC18, __sinit_d_a_b_yo_ice_cpp);
#pragma pop

/* 8063DC54-8063DC70 003BF4 001C+00 7/7 0/0 0/0 .text            getIceCenterPos__8daB_YO_cFv */
// void daB_YO_c::getIceCenterPos() {
extern "C" void getIceCenterPos__8daB_YO_cFv() {
    // NONMATCHING
}

/* 8063DD9C-8063DD9C 000118 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */