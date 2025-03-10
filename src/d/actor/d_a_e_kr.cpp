/**
 * @file d_a_e_kr.cpp
 * 
*/

#include "d/actor/d_a_e_kr.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void anm_init__FP10e_kr_classifUcf();
extern "C" static void kuti_open__FP10e_kr_classsUl();
extern "C" static void e_kr_player_bg_check__FP10e_kr_class();
extern "C" static void e_kr_setpos_bg_check__FP10e_kr_class();
extern "C" static void e_kr_player_view_check__FP10e_kr_class();
extern "C" static void pl_horse_check__FP10e_kr_class();
extern "C" static void daE_Kr_shadowDraw__FP10e_kr_class();
extern "C" static void daE_Kr_Draw__FP10e_kr_class();
extern "C" static void e_kr_pos_move__FP10e_kr_class();
extern "C" static void coach_path_check__FP10e_kr_class();
extern "C" static void e_kr_path_move__FP10e_kr_class();
extern "C" static void e_kr_auto_move__FP10e_kr_class();
extern "C" static void e_kr_atack_move__FP10e_kr_class();
extern "C" static void e_kr_horse_move__FP10e_kr_class();
extern "C" static void e_kr_wait_move__FP10e_kr_class();
extern "C" static void e_kr_su_wait_move__FP10e_kr_class();
extern "C" static void body_smoke_set__FP10e_kr_class();
extern "C" static void wing_smoke_set__FP10e_kr_class();
extern "C" static void e_kr_damage__FP10e_kr_class();
extern "C" static void damage_check__FP10e_kr_class();
extern "C" static void ground_angle_set__FP10e_kr_class();
extern "C" static void action__FP10e_kr_class();
extern "C" static void daE_Kr_Execute__FP10e_kr_class();
extern "C" static bool daE_Kr_IsDelete__FP10e_kr_class();
extern "C" static void daE_Kr_Delete__FP10e_kr_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_Kr_Create__FP10fopAc_ac_c();
extern "C" void __ct__10e_kr_classFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_e_kr_cpp();
extern "C" void __dt__9e_krHIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" static void func_80705684();
extern "C" static void func_8070568C();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_e_kr__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_fastCreate__FsUlPC4cXyziPC5csXyzPC4cXyzScPFPv_iPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_setCarryNow__FP10fopAc_ac_ci();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void cancelBoomerangLockActor__9daPy_py_cFP10fopAc_ac_c();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_Sound_set__F4cXyziUii();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dv__4cXyzCFf();
extern "C" void __pl__5csXyzFR5csXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 806FF9AC-806FFCD8 0000EC 032C+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B24-80705B28 00002C 0004+00 1/1 0/0 0/0 .rodata          @4043 */
SECTION_RODATA static f32 const lit_4043 = -1.0f;
COMPILER_STRIP_GATE(0x80705B24, &lit_4043);

/* 80705C4C-80705C4C 000154 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80705C4C = "E_kr";
#pragma pop

/* 806FFCD8-806FFD84 000418 00AC+00 8/8 0/0 0/0 .text            anm_init__FP10e_kr_classifUcf */
static void anm_init(e_kr_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 806FFD84-806FFDB0 0004C4 002C+00 3/3 0/0 0/0 .text            kuti_open__FP10e_kr_classsUl */
static void kuti_open(e_kr_class* param_0, s16 param_1, u32 param_2) {
    // NONMATCHING
}

/* 806FFDB0-806FFE90 0004F0 00E0+00 2/2 0/0 0/0 .text e_kr_player_bg_check__FP10e_kr_class */
static void e_kr_player_bg_check(e_kr_class* param_0) {
    // NONMATCHING
}

/* 806FFE90-806FFF54 0005D0 00C4+00 1/1 0/0 0/0 .text e_kr_setpos_bg_check__FP10e_kr_class */
static void e_kr_setpos_bg_check(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B28-80705B30 000030 0008+00 1/1 0/0 0/0 .rodata          @4155 */
SECTION_RODATA static u8 const lit_4155[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80705B28, &lit_4155);

/* 80705FE8-80705FF4 000008 000C+00 1/1 0/0 0/0 .bss             @3921 */
static u8 lit_3921[12];

/* 80705FF4-80706070 000014 007C+00 9/9 0/0 0/0 .bss             l_e_krHIO */
static u8 l_e_krHIO[124];

/* 806FFF54-80700108 000694 01B4+00 3/3 0/0 0/0 .text e_kr_player_view_check__FP10e_kr_class */
static void e_kr_player_view_check(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B30-80705B34 000038 0004+00 1/5 0/0 0/0 .rodata          @4167 */
SECTION_RODATA static f32 const lit_4167 = 20.0f;
COMPILER_STRIP_GATE(0x80705B30, &lit_4167);

/* 80700108-80700174 000848 006C+00 2/2 0/0 0/0 .text            pl_horse_check__FP10e_kr_class */
static void pl_horse_check(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B34-80705B38 00003C 0004+00 0/3 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 150.0f;
COMPILER_STRIP_GATE(0x80705B34, &lit_4192);
#pragma pop

/* 80705B38-80705B3C 000040 0004+00 0/1 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4193 = 1200.0f;
COMPILER_STRIP_GATE(0x80705B38, &lit_4193);
#pragma pop

/* 80700174-80700204 0008B4 0090+00 1/1 0/0 0/0 .text            daE_Kr_shadowDraw__FP10e_kr_class
 */
static void daE_Kr_shadowDraw(e_kr_class* param_0) {
    // NONMATCHING
}

/* 80700204-8070034C 000944 0148+00 1/0 0/0 0/0 .text            daE_Kr_Draw__FP10e_kr_class */
static void daE_Kr_Draw(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B3C-80705B40 000044 0004+00 0/5 0/0 0/0 .rodata          @4249 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4249 = 0.5f;
COMPILER_STRIP_GATE(0x80705B3C, &lit_4249);
#pragma pop

/* 80705B40-80705B44 000048 0004+00 0/1 0/0 0/0 .rodata          @4250 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4250 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x80705B40, &lit_4250);
#pragma pop

/* 80705B44-80705B48 00004C 0004+00 0/7 0/0 0/0 .rodata          @4251 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4251 = 5.0f;
COMPILER_STRIP_GATE(0x80705B44, &lit_4251);
#pragma pop

/* 8070034C-80700588 000A8C 023C+00 6/6 0/0 0/0 .text            e_kr_pos_move__FP10e_kr_class */
static void e_kr_pos_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B48-80705B4C 000050 0004+00 0/1 0/0 0/0 .rodata          @4269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4269 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80705B48, &lit_4269);
#pragma pop

/* 80705B4C-80705B50 000054 0004+00 0/1 0/0 0/0 .rodata          @4270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4270 = 3.0f;
COMPILER_STRIP_GATE(0x80705B4C, &lit_4270);
#pragma pop

/* 80705B50-80705B54 000058 0004+00 0/0 0/0 0/0 .rodata          @4271 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4271 = -0.5f;
COMPILER_STRIP_GATE(0x80705B50, &lit_4271);
#pragma pop

/* 80705B54-80705B58 00005C 0004+00 1/3 0/0 0/0 .rodata          @4289 */
SECTION_RODATA static f32 const lit_4289 = 500.0f;
COMPILER_STRIP_GATE(0x80705B54, &lit_4289);

/* 80700588-80700638 000CC8 00B0+00 1/1 0/0 0/0 .text            coach_path_check__FP10e_kr_class */
static void coach_path_check(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B58-80705B5C 000060 0004+00 0/3 0/0 0/0 .rodata          @4420 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4420 = 12.0f;
COMPILER_STRIP_GATE(0x80705B58, &lit_4420);
#pragma pop

/* 80705B5C-80705B60 000064 0004+00 0/2 0/0 0/0 .rodata          @4421 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4421 = 2.0f;
COMPILER_STRIP_GATE(0x80705B5C, &lit_4421);
#pragma pop

/* 80700638-80700AF8 000D78 04C0+00 1/1 0/0 0/0 .text            e_kr_path_move__FP10e_kr_class */
static void e_kr_path_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B60-80705B64 000068 0004+00 0/0 0/0 0/0 .rodata          @4422 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4422 = 0x42700001;
COMPILER_STRIP_GATE(0x80705B60, &lit_4422);
#pragma pop

/* 80705B64-80705B68 00006C 0004+00 0/1 0/0 0/0 .rodata          @4423 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4423 = 5000.0f;
COMPILER_STRIP_GATE(0x80705B64, &lit_4423);
#pragma pop

/* 80705B68-80705B6C 000070 0004+00 0/4 0/0 0/0 .rodata          @4424 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4424 = 300.0f;
COMPILER_STRIP_GATE(0x80705B68, &lit_4424);
#pragma pop

/* 80705B6C-80705B70 000074 0004+00 0/2 0/0 0/0 .rodata          @4425 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4425 = 2000.0f;
COMPILER_STRIP_GATE(0x80705B6C, &lit_4425);
#pragma pop

/* 80705B70-80705B74 000078 0004+00 0/0 0/0 0/0 .rodata          @4426 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4426 = -2000.0f;
COMPILER_STRIP_GATE(0x80705B70, &lit_4426);
#pragma pop

/* 80705B74-80705B78 00007C 0004+00 0/5 0/0 0/0 .rodata          @4500 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4500 = 50.0f;
COMPILER_STRIP_GATE(0x80705B74, &lit_4500);
#pragma pop

/* 80705B78-80705B7C 000080 0004+00 0/5 0/0 0/0 .rodata          @4501 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4501 = 200.0f;
COMPILER_STRIP_GATE(0x80705B78, &lit_4501);
#pragma pop

/* 80705B7C-80705B80 000084 0004+00 0/3 0/0 0/0 .rodata          @4502 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4502 = 60.0f;
COMPILER_STRIP_GATE(0x80705B7C, &lit_4502);
#pragma pop

/* 80705B80-80705B84 000088 0004+00 0/1 0/0 0/0 .rodata          @4503 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4503 = 25.0f;
COMPILER_STRIP_GATE(0x80705B80, &lit_4503);
#pragma pop

/* 80700AF8-80700E3C 001238 0344+00 1/1 0/0 0/0 .text            e_kr_auto_move__FP10e_kr_class */
static void e_kr_auto_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705B84-80705B88 00008C 0004+00 0/4 0/0 0/0 .rodata          @4827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4827 = 30.0f;
COMPILER_STRIP_GATE(0x80705B84, &lit_4827);
#pragma pop

/* 80705B88-80705B8C 000090 0004+00 0/3 0/0 0/0 .rodata          @4828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4828 = 10.0f;
COMPILER_STRIP_GATE(0x80705B88, &lit_4828);
#pragma pop

/* 80705B8C-80705B90 000094 0004+00 0/3 0/0 0/0 .rodata          @4829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4829 = 400.0f;
COMPILER_STRIP_GATE(0x80705B8C, &lit_4829);
#pragma pop

/* 80705B90-80705B94 000098 0004+00 0/3 0/0 0/0 .rodata          @4830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4830 = 1000.0f;
COMPILER_STRIP_GATE(0x80705B90, &lit_4830);
#pragma pop

/* 80705B94-80705B98 00009C 0004+00 0/0 0/0 0/0 .rodata          @4831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4831 = 1280.0f;
COMPILER_STRIP_GATE(0x80705B94, &lit_4831);
#pragma pop

/* 80705B98-80705B9C 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4832 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4832 = 768.0f;
COMPILER_STRIP_GATE(0x80705B98, &lit_4832);
#pragma pop

/* 80705B9C-80705BA0 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4833 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80705B9C, &lit_4833);
#pragma pop

/* 80705BA0-80705BA4 0000A8 0004+00 0/0 0/0 0/0 .rodata          @4834 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4834 = 7000.0f;
COMPILER_STRIP_GATE(0x80705BA0, &lit_4834);
#pragma pop

/* 80705BA4-80705BA8 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4835 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4835 = 600.0f;
COMPILER_STRIP_GATE(0x80705BA4, &lit_4835);
#pragma pop

/* 80705BA8-80705BAC 0000B0 0004+00 0/0 0/0 0/0 .rodata          @4836 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4836 = 35.0f;
COMPILER_STRIP_GATE(0x80705BA8, &lit_4836);
#pragma pop

/* 80705BAC-80705BB0 0000B4 0004+00 0/0 0/0 0/0 .rodata          @4837 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4837 = 1350.0f;
COMPILER_STRIP_GATE(0x80705BAC, &lit_4837);
#pragma pop

/* 80705BB0-80705BB4 0000B8 0004+00 0/0 0/0 0/0 .rodata          @4838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4838 = -10.0f;
COMPILER_STRIP_GATE(0x80705BB0, &lit_4838);
#pragma pop

/* 80705BB4-80705BB8 0000BC 0004+00 0/2 0/0 0/0 .rodata          @4839 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4839 = 3000.0f;
COMPILER_STRIP_GATE(0x80705BB4, &lit_4839);
#pragma pop

/* 80705BB8-80705BC0 0000C0 0004+04 0/2 0/0 0/0 .rodata          @4840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4840[1 + 1 /* padding */] = {
    -20.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80705BB8, &lit_4840);
#pragma pop

/* 80705BC0-80705BC8 0000C8 0008+00 0/2 0/0 0/0 .rodata          @4843 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4843[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80705BC0, &lit_4843);
#pragma pop

/* 80705C8C-80705D1C -00001 0090+00 1/1 0/0 0/0 .data            @4842 */
SECTION_DATA static void* lit_4842[36] = {
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x10C),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x144),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x144),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x330),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x4CC),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x858),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x920),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xBBC),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xBBC),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0xCF8),
    (void*)(((char*)e_kr_atack_move__FP10e_kr_class) + 0x330),
};

/* 80700E3C-80701CF4 00157C 0EB8+00 2/1 0/0 0/0 .text            e_kr_atack_move__FP10e_kr_class */
static void e_kr_atack_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705BC8-80705BCC 0000D0 0004+00 1/2 0/0 0/0 .rodata          @5003 */
SECTION_RODATA static f32 const lit_5003 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x80705BC8, &lit_5003);

/* 80705BCC-80705BD0 0000D4 0004+00 0/3 0/0 0/0 .rodata          @5004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5004 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80705BCC, &lit_5004);
#pragma pop

/* 80705BD0-80705BD4 0000D8 0004+00 0/3 0/0 0/0 .rodata          @5005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5005 = 70.0f;
COMPILER_STRIP_GATE(0x80705BD0, &lit_5005);
#pragma pop

/* 80705BD4-80705BD8 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5006 = 180.0f;
COMPILER_STRIP_GATE(0x80705BD4, &lit_5006);
#pragma pop

/* 80705BD8-80705BDC 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5007 = 19.0f / 20.0f;
COMPILER_STRIP_GATE(0x80705BD8, &lit_5007);
#pragma pop

/* 80705BDC-80705BE0 0000E4 0004+00 0/3 0/0 0/0 .rodata          @5008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5008 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80705BDC, &lit_5008);
#pragma pop

/* 80705BE0-80705BE4 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5009 = 250.0f;
COMPILER_STRIP_GATE(0x80705BE0, &lit_5009);
#pragma pop

/* 80705BE4-80705BE8 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5010 = -100.0f;
COMPILER_STRIP_GATE(0x80705BE4, &lit_5010);
#pragma pop

/* 80701CF4-807025B8 002434 08C4+00 1/1 0/0 0/0 .text            e_kr_horse_move__FP10e_kr_class */
static void e_kr_horse_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705D1C-80705D74 -00001 0058+00 1/1 0/0 0/0 .data            @5114 */
SECTION_DATA static void* lit_5114[22] = {
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0xA4),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0xE0),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x108),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x1EC),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x238),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x2FC),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x2FC),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x2FC),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x614),
    (void*)(((char*)e_kr_wait_move__FP10e_kr_class) + 0x50C),
};

/* 807025B8-80702C08 002CF8 0650+00 2/1 0/0 0/0 .text            e_kr_wait_move__FP10e_kr_class */
static void e_kr_wait_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705D74-80705DCC -00001 0058+00 1/1 0/0 0/0 .data            @5210 */
SECTION_DATA static void* lit_5210[22] = {
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0xA4),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0xE0),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x108),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x1EC),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x238),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x2FC),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x2FC),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x2FC),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x5C8),
    (void*)(((char*)e_kr_su_wait_move__FP10e_kr_class) + 0x4C0),
};

/* 80702C08-8070320C 003348 0604+00 2/1 0/0 0/0 .text            e_kr_su_wait_move__FP10e_kr_class
 */
static void e_kr_su_wait_move(e_kr_class* param_0) {
    // NONMATCHING
}

/* 8070320C-8070329C 00394C 0090+00 1/1 0/0 0/0 .text            body_smoke_set__FP10e_kr_class */
static void body_smoke_set(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705BE8-80705BEC 0000F0 0004+00 0/2 0/0 0/0 .rodata          @5111 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5111 = 1.5f;
COMPILER_STRIP_GATE(0x80705BE8, &lit_5111);
#pragma pop

/* 80705BEC-80705BF0 0000F4 0004+00 0/0 0/0 0/0 .rodata          @5112 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5112 = 80.0f;
COMPILER_STRIP_GATE(0x80705BEC, &lit_5112);
#pragma pop

/* 80705BF0-80705BF4 0000F8 0004+00 0/0 0/0 0/0 .rodata          @5113 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5113 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80705BF0, &lit_5113);
#pragma pop

/* 80705BF4-80705BF8 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5267 = -50.0f;
COMPILER_STRIP_GATE(0x80705BF4, &lit_5267);
#pragma pop

/* 80705DCC-80705DDC 000178 0010+00 1/1 0/0 0/0 .data            wing_j$5235 */
SECTION_DATA static u8 wing_j[16] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12,
};

/* 8070329C-8070338C 0039DC 00F0+00 1/1 0/0 0/0 .text            wing_smoke_set__FP10e_kr_class */
static void wing_smoke_set(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705BF8-80705BFC 000100 0004+00 0/1 0/0 0/0 .rodata          @5342 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5342 = -3.0f;
COMPILER_STRIP_GATE(0x80705BF8, &lit_5342);
#pragma pop

/* 80705BFC-80705C00 000104 0004+00 0/1 0/0 0/0 .rodata          @5343 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5343 = 24.0f / 25.0f;
COMPILER_STRIP_GATE(0x80705BFC, &lit_5343);
#pragma pop

/* 80705C00-80705C04 000108 0004+00 0/2 0/0 0/0 .rodata          @5344 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5344 = 8000.0f;
COMPILER_STRIP_GATE(0x80705C00, &lit_5344);
#pragma pop

/* 80705C04-80705C08 00010C 0004+00 0/1 0/0 0/0 .rodata          @5345 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5345 = 15.0f;
COMPILER_STRIP_GATE(0x80705C04, &lit_5345);
#pragma pop

/* 80705C08-80705C0C 000110 0004+00 0/1 0/0 0/0 .rodata          @5346 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5346 = -30.0f;
COMPILER_STRIP_GATE(0x80705C08, &lit_5346);
#pragma pop

/* 8070338C-80703990 003ACC 0604+00 1/1 0/0 0/0 .text            e_kr_damage__FP10e_kr_class */
static void e_kr_damage(e_kr_class* param_0) {
    // NONMATCHING
}

/* 80703990-80703D74 0040D0 03E4+00 1/1 0/0 0/0 .text            damage_check__FP10e_kr_class */
static void damage_check(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705C0C-80705C10 000114 0004+00 0/1 0/0 0/0 .rodata          @5493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5493 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80705C0C, &lit_5493);
#pragma pop

/* 80705C10-80705C14 000118 0004+00 0/1 0/0 0/0 .rodata          @5494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5494 = 75.0f;
COMPILER_STRIP_GATE(0x80705C10, &lit_5494);
#pragma pop

/* 80703D74-807040B0 0044B4 033C+00 1/1 0/0 0/0 .text            ground_angle_set__FP10e_kr_class */
static void ground_angle_set(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705C14-80705C18 00011C 0004+00 1/1 0/0 0/0 .rodata          @5527 */
SECTION_RODATA static f32 const lit_5527 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x80705C14, &lit_5527);

/* 80705DDC-80705E08 -00001 002C+00 1/1 0/0 0/0 .data            @5528 */
SECTION_DATA static void* lit_5528[11] = {
    (void*)(((char*)action__FP10e_kr_class) + 0x50),
    (void*)(((char*)action__FP10e_kr_class) + 0xB0),
    (void*)(((char*)action__FP10e_kr_class) + 0xB0),
    (void*)(((char*)action__FP10e_kr_class) + 0x80),
    (void*)(((char*)action__FP10e_kr_class) + 0x8C),
    (void*)(((char*)action__FP10e_kr_class) + 0xB0),
    (void*)(((char*)action__FP10e_kr_class) + 0xB0),
    (void*)(((char*)action__FP10e_kr_class) + 0x94),
    (void*)(((char*)action__FP10e_kr_class) + 0x6C),
    (void*)(((char*)action__FP10e_kr_class) + 0x5C),
    (void*)(((char*)action__FP10e_kr_class) + 0x9C),
};

/* 807040B0-80704208 0047F0 0158+00 2/1 0/0 0/0 .text            action__FP10e_kr_class */
static void action(e_kr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705C18-80705C1C 000120 0004+00 0/1 0/0 0/0 .rodata          @5725 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5725 = 27.0f;
COMPILER_STRIP_GATE(0x80705C18, &lit_5725);
#pragma pop

/* 80705C1C-80705C20 000124 0004+00 0/1 0/0 0/0 .rodata          @5726 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5726 = 11.0f;
COMPILER_STRIP_GATE(0x80705C1C, &lit_5726);
#pragma pop

/* 80705C20-80705C24 000128 0004+00 0/2 0/0 0/0 .rodata          @5727 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5727 = 10000.0f;
COMPILER_STRIP_GATE(0x80705C20, &lit_5727);
#pragma pop

/* 80705C24-80705C28 00012C 0004+00 0/1 0/0 0/0 .rodata          @5728 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5728 = 200000.0f;
COMPILER_STRIP_GATE(0x80705C24, &lit_5728);
#pragma pop

/* 80705C28-80705C2C 000130 0004+00 0/1 0/0 0/0 .rodata          @5729 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5729 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80705C28, &lit_5729);
#pragma pop

/* 80704208-80704B5C 004948 0954+00 2/1 0/0 0/0 .text            daE_Kr_Execute__FP10e_kr_class */
static void daE_Kr_Execute(e_kr_class* param_0) {
    // NONMATCHING
}

/* 80704B5C-80704B64 00529C 0008+00 1/0 0/0 0/0 .text            daE_Kr_IsDelete__FP10e_kr_class */
static bool daE_Kr_IsDelete(e_kr_class* param_0) {
    return true;
}

/* 80704B64-80704BB4 0052A4 0050+00 1/0 0/0 0/0 .text            daE_Kr_Delete__FP10e_kr_class */
static void daE_Kr_Delete(e_kr_class* param_0) {
    // NONMATCHING
}

/* 80704BB4-80704CF0 0052F4 013C+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705C2C-80705C30 000134 0004+00 0/1 0/0 0/0 .rodata          @5872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5872 = -300.0f;
COMPILER_STRIP_GATE(0x80705C2C, &lit_5872);
#pragma pop

/* 80705C30-80705C34 000138 0004+00 0/1 0/0 0/0 .rodata          @5873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5873 = -200.0f;
COMPILER_STRIP_GATE(0x80705C30, &lit_5873);
#pragma pop

/* 80705E08-80705E48 0001B4 0040+00 0/1 0/0 0/0 .data            at_sph_src$5807 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0xd}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_METAL, 0x0, 0x0, 0x0, 0x1}, // mGObjAt
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 25.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80705E48-80705E88 0001F4 0040+00 0/1 0/0 0/0 .data            head_tg_sph_src$5808 */
#pragma push
#pragma force_active on
static dCcD_SrcSph head_tg_sph_src = {
    {
        {0x0, {{0x0, 0x1, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 62.5f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80705E88-80705EC8 000234 0040+00 0/1 0/0 0/0 .data            body_tg_sph_src$5809 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_tg_sph_src = {
    {
        {0x0, {{0x0, 0x1, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 65.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80705EC8-80705F08 000274 0040+00 0/1 0/0 0/0 .data            body_co_sph_src$5810 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_co_sph_src = {
    {
        {0x0, {{0x0, 0x1, 0x0}, {0x0, 0x0}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 80.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80704CF0-80705004 005430 0314+00 1/0 0/0 0/0 .text            daE_Kr_Create__FP10fopAc_ac_c */
static void daE_Kr_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705F08-80705F28 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_Kr_Method */
static actor_method_class l_daE_Kr_Method = {
    (process_method_func)daE_Kr_Create__FP10fopAc_ac_c,
    (process_method_func)daE_Kr_Delete__FP10e_kr_class,
    (process_method_func)daE_Kr_Execute__FP10e_kr_class,
    (process_method_func)daE_Kr_IsDelete__FP10e_kr_class,
    (process_method_func)daE_Kr_Draw__FP10e_kr_class,
};

/* 80705F28-80705F58 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_KR */
extern actor_process_profile_definition g_profile_E_KR = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_KR,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_kr_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  186,                    // mPriority
  &l_daE_Kr_Method,       // sub_method
  0x10040120,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80705F58-80705F64 000304 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80705F64-80705F70 000310 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80705F70-80705F7C 00031C 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80705F7C-80705F88 000328 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80705F88-80705F94 000334 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80705F94-80705FB8 000340 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8070568C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80705684,
};

/* 80705004-80705220 005744 021C+00 1/1 0/0 0/0 .text            __ct__10e_kr_classFv */
e_kr_class::e_kr_class() {
    // NONMATCHING
}

/* 80705220-80705224 005960 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80705224-8070526C 005964 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 8070526C-807052B4 0059AC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 807052B4-80705310 0059F4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80705310-80705380 005A50 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80705380-807053F0 005AC0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 807053F0-80705438 005B30 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80705C34-80705C38 00013C 0004+00 0/1 0/0 0/0 .rodata          @6045 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6045 = 2500.0f;
COMPILER_STRIP_GATE(0x80705C34, &lit_6045);
#pragma pop

/* 80705C38-80705C3C 000140 0004+00 0/1 0/0 0/0 .rodata          @6046 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6046 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x80705C38, &lit_6046);
#pragma pop

/* 80705C3C-80705C40 000144 0004+00 0/1 0/0 0/0 .rodata          @6047 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6047 = 3.5f;
COMPILER_STRIP_GATE(0x80705C3C, &lit_6047);
#pragma pop

/* 80705C40-80705C44 000148 0004+00 0/1 0/0 0/0 .rodata          @6048 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6048 = 40.0f;
COMPILER_STRIP_GATE(0x80705C40, &lit_6048);
#pragma pop

/* 80705C44-80705C48 00014C 0004+00 0/1 0/0 0/0 .rodata          @6049 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6049 = 1500.0f;
COMPILER_STRIP_GATE(0x80705C44, &lit_6049);
#pragma pop

/* 80705C48-80705C4C 000150 0004+00 0/1 0/0 0/0 .rodata          @6050 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6050 = -40.0f;
COMPILER_STRIP_GATE(0x80705C48, &lit_6050);
#pragma pop

/* 80705FB8-80705FC4 000364 000C+00 2/2 0/0 0/0 .data            __vt__9e_krHIO_c */
SECTION_DATA extern void* __vt__9e_krHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9e_krHIO_cFv,
};

/* 80705FC4-80705FD0 000370 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80705FD0-80705FDC 00037C 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80705438-80705574 005B78 013C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_kr_cpp */
void __sinit_d_a_e_kr_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80705438, __sinit_d_a_e_kr_cpp);
#pragma pop

/* 80705574-807055E0 005CB4 006C+00 2/1 0/0 0/0 .text            __dt__9e_krHIO_cFv */
e_krHIO_c::~e_krHIO_c() {
    // NONMATCHING
}

/* 807055E0-8070563C 005D20 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
// fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
extern "C" void __dt__18fOpAcm_HIO_entry_cFv() {
    // NONMATCHING
}

/* 8070563C-80705684 005D7C 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* 80705684-8070568C 005DC4 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80705684() {
    // NONMATCHING
}

/* 8070568C-80705694 005DCC 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_8070568C() {
    // NONMATCHING
}

/* 80705AA8-80705AE4 0061E8 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80705C4C-80705C4C 000154 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
