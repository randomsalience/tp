/**
 * @file d_a_e_pz.cpp
 * 
*/

#include "d/actor/d_a_e_pz.h"
#include "dol2asm.h"
#include "d/d_camera.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__12daE_PZ_HIO_cFv();
extern "C" void draw__8daE_PZ_cFv();
extern "C" static void daE_PZ_Draw__FP8daE_PZ_c();
extern "C" void setBck__8daE_PZ_cFiUcff();
extern "C" void setActionMode__8daE_PZ_cFii();
extern "C" void mEntrySUB__8daE_PZ_cFb();
extern "C" void mPzScaleSet__8daE_PZ_cFb();
extern "C" void mEnemyScaleSet__8daE_PZ_cFv();
extern "C" void getCutType__8daE_PZ_cFv();
extern "C" void mSetFirePos__8daE_PZ_cFv();
extern "C" void damage_check__8daE_PZ_cFv();
extern "C" static void s_PointSearch__FPvPv();
extern "C" void executeSearchPoint__8daE_PZ_cFv();
extern "C" void executeOpeningDemo__8daE_PZ_cFv();
extern "C" void checkSkipEdge__14dEvt_control_cFv();
extern "C" void mPointerSet__8daE_PZ_cFv();
extern "C" void executeWait__8daE_PZ_cFv();
extern "C" void executeAttack__8daE_PZ_cFv();
extern "C" void executeDamage__8daE_PZ_cFv();
extern "C" void executeDead__8daE_PZ_cFv();
extern "C" void executeSummonsBullet__8daE_PZ_cFv();
extern "C" void executeBullet__8daE_PZ_cFv();
extern "C" void action__8daE_PZ_cFv();
extern "C" void action_fire__8daE_PZ_cFv();
extern "C" void fire_mtx_set__8daE_PZ_cFv();
extern "C" void mtx_set__8daE_PZ_cFv();
extern "C" void cc_set__8daE_PZ_cFv();
extern "C" void execute__8daE_PZ_cFv();
extern "C" static void daE_PZ_Execute__FP8daE_PZ_c();
extern "C" static bool daE_PZ_IsDelete__FP8daE_PZ_c();
extern "C" void _delete__8daE_PZ_cFv();
extern "C" static void daE_PZ_Delete__FP8daE_PZ_c();
extern "C" void CreateHeap__8daE_PZ_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__8daE_PZ_cFv();
extern "C" void __ct__8daE_PZ_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__4cXyzFv();
extern "C" static void daE_PZ_Create__FP8daE_PZ_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_PZ_HIO_cFv();
extern "C" void __sinit_d_a_e_pz_cpp();
extern "C" static void func_80760CE4();
extern "C" static void func_80760CEC();
extern "C" void __dt__4cXyzFv();
extern "C" void changeDemoMoveAngle__9daPy_py_cFs(fopAc_ac_c* param_0, u16 param_1);
extern "C" void zero__4cXyzFv();
extern "C" static void dComIfGp_particle_set__FUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" void isStop__13mDoExt_morf_cFv();
extern "C" void checkNowWolf__9daPy_py_cFv();
extern "C" static void fopAcM_onSwitch__FPC10fopAc_ac_ci();
extern "C" void abs__4cXyzCFv();
extern "C" void changeDemoPos0__9daPy_py_cFPC4cXyz();
extern "C" static void fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c();
extern "C" void setFrame__13mDoExt_morf_cFf();
extern "C" void set__4cXyzFRC3Vec();
extern "C" void set__4cXyzFfff();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" void __ct__4cXyzFfff();
extern "C" extern char const* const d_a_e_pz__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleX__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetGroundUpY__9dBgS_AcchFf();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void StartBlure__9dCamera_cFiP10fopAc_ac_cff();
extern "C" void dCam_getBody__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void subBgmStop__8Z2SeqMgrFv();
extern "C" void bgmStreamPrepare__8Z2SeqMgrFUl();
extern "C" void bgmStreamPlay__8Z2SeqMgrFv();
extern "C" void bgmStreamStop__8Z2SeqMgrFUl();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 struct_80450C98[4];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80761528-8076152C 00002C 0004+00 0/6 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 10.0f;
COMPILER_STRIP_GATE(0x80761528, &lit_3927);
#pragma pop

/* 8076152C-80761530 000030 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 35.0f;
COMPILER_STRIP_GATE(0x8076152C, &lit_3928);
#pragma pop

/* 80761530-80761534 000034 0004+00 1/8 0/0 0/0 .rodata          @3929 */
SECTION_RODATA static f32 const lit_3929 = 3.0f;
COMPILER_STRIP_GATE(0x80761530, &lit_3929);

/* 807617F4-80761838 000038 0044+00 0/1 0/0 0/0 .data            cc_pz_src__22@unnamed@d_a_e_pz_cpp@
 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_807617F4[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x75,
    0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};
#pragma pop

/* 80761838-80761878 00007C 0040+00 0/1 0/0 0/0 .data cc_pz_at_src__22@unnamed@d_a_e_pz_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_80761838[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
#pragma pop

/* 80761878-807618BC 0000BC 0044+00 0/1 0/0 0/0 .data cc_pz_wp_src__22@unnamed@d_a_e_pz_cpp@ */
#pragma push
#pragma force_active on
SECTION_DATA static u8 data_80761878[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x41, 0x60, 0x80, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0xA6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};
#pragma pop

/* 807618BC-80761958 -00001 009C+00 1/1 0/0 0/0 .data            @4194 */
SECTION_DATA static void* lit_4194[39] = {
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x48),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x48),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x48),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x50),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x50),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x48),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x30),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x38),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x38),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x30),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x40),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x50),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x50),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x50),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x58),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x50),
    (void*)(((char*)getCutType__8daE_PZ_cFv) + 0x48),
};

/* 80761958-80761B6C -00001 0214+00 1/1 0/0 0/0 .data            @5018 */
SECTION_DATA static void* lit_5018[133] = {
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x7E4),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x800),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x9EC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xA7C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xB6C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xB90),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xBD8),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xC68),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xCDC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xD8C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xDE8),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xF50),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xFDC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1130),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x11AC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x12AC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x145C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1594),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x7E4),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x800),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1918),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1988),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x19E0),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1A88),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1AA8),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1C48),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1C74),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1C94),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1EDC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1F84),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x2124),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x2184),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x2230),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xD8C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xE64),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xF50),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0xFDC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1130),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x11AC),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x231C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1298),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x145C),
    (void*)(((char*)executeOpeningDemo__8daE_PZ_cFv) + 0x1564),
};

/* 80761B6C-80761BF0 -00001 0084+00 1/1 0/0 0/0 .data            @5481 */
SECTION_DATA static void* lit_5481[33] = {
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x74),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x110),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x210),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x330),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x370),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x3AC),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x538),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xF8),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x264),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0xC9C),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x330),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x370),
    (void*)(((char*)executeWait__8daE_PZ_cFv) + 0x3AC),
};

/* 80761BF0-80761BF8 000434 0006+02 1/1 0/0 0/0 .data            eff_delete_id$5688 */
SECTION_DATA static u8 eff_delete_id[6 + 2 /* padding */] = {
    0x88,
    0x9E,
    0x88,
    0x9F,
    0x88,
    0xA0,
    /* padding */
    0x00,
    0x00,
};

/* 80761BF8-80761C28 -00001 0030+00 1/1 0/0 0/0 .data            @5981 */
SECTION_DATA static void* lit_5981[12] = {
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0x204),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0x428),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0x5E4),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0x6F4),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0xA78),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0xA78),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0xA78),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0xA78),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0xA78),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0xA78),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0x204),
    (void*)(((char*)executeDead__8daE_PZ_cFv) + 0x894),
};

/* 80761C28-80761C2C 00046C 0004+00 0/0 0/0 0/0 .data            eff_seed_id */
#pragma push
#pragma force_active on
SECTION_DATA static u32 eff_seed_id = 0x88A388A4;
#pragma pop

/* 80761C2C-80761C34 000470 0006+02 0/1 0/0 0/0 .data            eff_summonBall_id */
#pragma push
#pragma force_active on
SECTION_DATA static u8 eff_summonBall_id[6 + 2 /* padding */] = {
    0x88,
    0x98,
    0x88,
    0x99,
    0x88,
    0x9A,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 80761C34-80761C38 000478 0004+00 0/1 0/0 0/0 .data            eff_summonBall2_id */
#pragma push
#pragma force_active on
SECTION_DATA static u32 eff_summonBall2_id = 0x89138914;
#pragma pop

/* 80761C38-80761C3C 00047C 0004+00 0/0 0/0 0/0 .data            eff_summonShoot2_id */
#pragma push
#pragma force_active on
SECTION_DATA static u32 eff_summonShoot2_id = 0x89118912;
#pragma pop

/* 80761C3C-80761CC4 -00001 0088+00 1/1 0/0 0/0 .data            @6713 */
SECTION_DATA static void* lit_6713[34] = {
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xB0),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x3BC),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x8A4),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xBFC),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xCAC),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xD04),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xD7C),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x126C),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1424),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xBB8),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x1758),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0x8A4),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xBB8),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xBFC),
    (void*)(((char*)executeSummonsBullet__8daE_PZ_cFv) + 0xCCC),
};

/* 80761CC4-80761CCC 000508 0006+02 1/1 0/0 0/0 .data            eff_bullet_id$6717 */
SECTION_DATA static u8 eff_bullet_id[6 + 2 /* padding */] = {
    0x88,
    0x66,
    0x88,
    0x67,
    0x88,
    0x68,
    /* padding */
    0x00,
    0x00,
};

/* 80761CCC-80761CD4 000510 0008+00 1/1 0/0 0/0 .data            eff_bullet_delete_id$6718 */
SECTION_DATA static u8 eff_bullet_delete_id[8] = {
    0x88, 0x62, 0x88, 0x63, 0x88, 0x64, 0x88, 0x65,
};

/* 80761CD4-80761CD8 000518 0004+00 1/1 0/0 0/0 .data            eff_darkHoll_id$6837 */
SECTION_DATA static u8 eff_darkHoll_id[4] = {
    0x84,
    0xA6,
    0x84,
    0xA7,
};

/* 80761CD8-80761CE0 00051C 0008+00 1/1 0/0 0/0 .data            mPzDarkHoll_dt$6994 */
SECTION_DATA static u8 mPzDarkHoll_dt[8] = {
    0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x20,
};

/* 80761CE0-80761D00 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_PZ_Method */
static actor_method_class l_daE_PZ_Method = {
    (process_method_func)daE_PZ_Create__FP8daE_PZ_c,
    (process_method_func)daE_PZ_Delete__FP8daE_PZ_c,
    (process_method_func)daE_PZ_Execute__FP8daE_PZ_c,
    (process_method_func)daE_PZ_IsDelete__FP8daE_PZ_c,
    (process_method_func)daE_PZ_Draw__FP8daE_PZ_c,
};

/* 80761D00-80761D30 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_PZ */
extern actor_process_profile_definition g_profile_E_PZ = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_PZ,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daE_PZ_c),       // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  175,                    // mPriority
  &l_daE_PZ_Method,       // sub_method
  0x00040100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80761D30-80761D3C 000574 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80761D3C-80761D48 000580 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80761D48-80761D54 00058C 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80761D54-80761D60 000598 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80761D60-80761D6C 0005A4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80761D6C-80761D78 0005B0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80761D78-80761D9C 0005BC 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80760CEC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80760CE4,
};

/* 80761D9C-80761DA8 0005E0 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80761DA8-80761DB4 0005EC 000C+00 2/2 0/0 0/0 .data            __vt__12daE_PZ_HIO_c */
SECTION_DATA extern void* __vt__12daE_PZ_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_PZ_HIO_cFv,
};

/* 8075856C-807585BC 0000EC 0050+00 1/1 0/0 0/0 .text            __ct__12daE_PZ_HIO_cFv */
daE_PZ_HIO_c::daE_PZ_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80761534-80761538 000038 0004+00 0/1 0/0 0/0 .rodata          @4040 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4040 = 800.0f;
COMPILER_STRIP_GATE(0x80761534, &lit_4040);
#pragma pop

/* 807585BC-807587E0 00013C 0224+00 1/1 0/0 0/0 .text            draw__8daE_PZ_cFv */
void daE_PZ_c::draw() {
    // NONMATCHING
}

/* 807587E0-80758800 000360 0020+00 1/0 0/0 0/0 .text            daE_PZ_Draw__FP8daE_PZ_c */
static void daE_PZ_Draw(daE_PZ_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80761538-8076153C 00003C 0004+00 1/6 0/0 0/0 .rodata          @4050 */
SECTION_RODATA static f32 const lit_4050 = -1.0f;
COMPILER_STRIP_GATE(0x80761538, &lit_4050);

/* 807617B4-807617B4 0002B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_807617B4 = "E_PZ";
#pragma pop

/* 80758800-807588AC 000380 00AC+00 6/6 0/0 0/0 .text            setBck__8daE_PZ_cFiUcff */
void daE_PZ_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* 807588AC-807588B8 00042C 000C+00 7/7 0/0 0/0 .text            setActionMode__8daE_PZ_cFii */
void daE_PZ_c::setActionMode(int param_0, int param_1) {
    // NONMATCHING
}

/* 807588B8-80758A94 000438 01DC+00 4/4 0/0 0/0 .text            mEntrySUB__8daE_PZ_cFb */
void daE_PZ_c::mEntrySUB(bool param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076153C-80761540 000040 0004+00 0/2 0/0 0/0 .rodata          @4115 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4115 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8076153C, &lit_4115);
#pragma pop

/* 80761540-80761544 000044 0004+00 0/3 0/0 0/0 .rodata          @4116 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4116 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80761540, &lit_4116);
#pragma pop

/* 80761544-80761548 000048 0004+00 1/3 0/0 0/0 .rodata          @4117 */
SECTION_RODATA static f32 const lit_4117 = 2.0f;
COMPILER_STRIP_GATE(0x80761544, &lit_4117);

/* 80761548-8076154C 00004C 0004+00 0/1 0/0 0/0 .rodata          @4118 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4118 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80761548, &lit_4118);
#pragma pop

/* 80761DC0-80761DC4 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80761DC4-80761DC8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80761DC8-80761DCC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80761DCC-80761DD0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80761DD0-80761DD4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80761DD4-80761DD8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80761DD8-80761DDC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80761DDC-80761DE0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80761DE0-80761DE4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80761DE4-80761DE8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80761DE8-80761DEC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80761DEC-80761DF0 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80761DF0-80761DF4 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80761DF4-80761DF8 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80761DF8-80761DFC 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80761DFC-80761E00 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 80761DFC 0001+00 data_80761DFC @1009 */
/* 80761DFD 0003+00 data_80761DFD None */
static u8 struct_80761DFC[4];

/* 80761E00-80761E0C 000048 000C+00 1/1 0/0 0/0 .bss             @3922 */
static u8 lit_3922[12];

/* 80761E0C-80761E2C -00001 0020+00 10/12 0/0 0/0 .bss             None */
/* 80761E0C 001C+01 data_80761E0C l_HIO */
/* 80761E29 0003+00 data_80761E29 None */
static u8 struct_80761E0C[32];

/* 80758A94-80758BA0 000614 010C+00 3/3 0/0 0/0 .text            mPzScaleSet__8daE_PZ_cFb */
void daE_PZ_c::mPzScaleSet(bool param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076154C-80761550 000050 0004+00 0/3 0/0 0/0 .rodata          @4159 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4159 = 5.0f;
COMPILER_STRIP_GATE(0x8076154C, &lit_4159);
#pragma pop

/* 80761550-80761554 000054 0004+00 0/1 0/0 0/0 .rodata          @4160 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4160 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80761550, &lit_4160);
#pragma pop

/* 80758BA0-80758D44 000720 01A4+00 1/1 0/0 0/0 .text            mEnemyScaleSet__8daE_PZ_cFv */
void daE_PZ_c::mEnemyScaleSet() {
    // NONMATCHING
}

/* 80758D44-80758DA4 0008C4 0060+00 2/1 0/0 0/0 .text            getCutType__8daE_PZ_cFv */
void daE_PZ_c::getCutType() {
    // NONMATCHING
}

/* 80758DA4-80758E04 000924 0060+00 1/1 0/0 0/0 .text            mSetFirePos__8daE_PZ_cFv */
void daE_PZ_c::mSetFirePos() {
    // NONMATCHING
}

/* 80758E04-8075923C 000984 0438+00 1/1 0/0 0/0 .text            damage_check__8daE_PZ_cFv */
void daE_PZ_c::damage_check() {
    // NONMATCHING
}

/* 8075923C-807592F4 000DBC 00B8+00 1/1 0/0 0/0 .text            s_PointSearch__FPvPv */
static void s_PointSearch(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80761554-8076155C 000058 0008+00 2/2 0/0 0/0 .rodata          @4333 */
SECTION_RODATA static u8 const lit_4333[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80761554, &lit_4333);

/* 807592F4-807593CC 000E74 00D8+00 1/1 0/0 0/0 .text            executeSearchPoint__8daE_PZ_cFv */
void daE_PZ_c::executeSearchPoint() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076155C-80761560 000060 0004+00 0/1 0/0 0/0 .rodata          @4925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4925 = -50.0f;
COMPILER_STRIP_GATE(0x8076155C, &lit_4925);
#pragma pop

/* 80761560-80761564 000064 0004+00 0/1 0/0 0/0 .rodata          @4926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4926 = -3150.0f;
COMPILER_STRIP_GATE(0x80761560, &lit_4926);
#pragma pop

/* 80761564-80761568 000068 0004+00 0/1 0/0 0/0 .rodata          @4927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4927 = -3140.0f;
COMPILER_STRIP_GATE(0x80761564, &lit_4927);
#pragma pop

/* 80761568-8076156C 00006C 0004+00 0/1 0/0 0/0 .rodata          @4928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4928 = 105.0f;
COMPILER_STRIP_GATE(0x80761568, &lit_4928);
#pragma pop

/* 8076156C-80761570 000070 0004+00 0/1 0/0 0/0 .rodata          @4929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4929 = 70.0f;
COMPILER_STRIP_GATE(0x8076156C, &lit_4929);
#pragma pop

/* 80761570-80761574 000074 0004+00 0/1 0/0 0/0 .rodata          @4930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4930 = -2950.0f;
COMPILER_STRIP_GATE(0x80761570, &lit_4930);
#pragma pop

/* 80761574-80761578 000078 0004+00 0/1 0/0 0/0 .rodata          @4931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4931 = -65.0f;
COMPILER_STRIP_GATE(0x80761574, &lit_4931);
#pragma pop

/* 80761578-8076157C 00007C 0004+00 0/1 0/0 0/0 .rodata          @4932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4932 = 270.0f;
COMPILER_STRIP_GATE(0x80761578, &lit_4932);
#pragma pop

/* 8076157C-80761580 000080 0004+00 0/1 0/0 0/0 .rodata          @4933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4933 = -3200.0f;
COMPILER_STRIP_GATE(0x8076157C, &lit_4933);
#pragma pop

/* 80761580-80761584 000084 0004+00 0/1 0/0 0/0 .rodata          @4934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4934 = -95.0f;
COMPILER_STRIP_GATE(0x80761580, &lit_4934);
#pragma pop

/* 80761584-80761588 000088 0004+00 0/1 0/0 0/0 .rodata          @4935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4935 = 180.0f;
COMPILER_STRIP_GATE(0x80761584, &lit_4935);
#pragma pop

/* 80761588-8076158C 00008C 0004+00 0/1 0/0 0/0 .rodata          @4936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4936 = -3100.0f;
COMPILER_STRIP_GATE(0x80761588, &lit_4936);
#pragma pop

/* 8076158C-80761590 000090 0004+00 0/1 0/0 0/0 .rodata          @4937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4937 = -20.0f;
COMPILER_STRIP_GATE(0x8076158C, &lit_4937);
#pragma pop

/* 80761590-80761594 000094 0004+00 0/3 0/0 0/0 .rodata          @4938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4938 = 30.0f;
COMPILER_STRIP_GATE(0x80761590, &lit_4938);
#pragma pop

/* 80761594-80761598 000098 0004+00 0/1 0/0 0/0 .rodata          @4939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4939 = -1590.0f;
COMPILER_STRIP_GATE(0x80761594, &lit_4939);
#pragma pop

/* 80761598-8076159C 00009C 0004+00 0/1 0/0 0/0 .rodata          @4940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4940 = -110.0f;
COMPILER_STRIP_GATE(0x80761598, &lit_4940);
#pragma pop

/* 8076159C-807615A0 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4941 = 170.0f;
COMPILER_STRIP_GATE(0x8076159C, &lit_4941);
#pragma pop

/* 807615A0-807615A4 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4942 = -940.0f;
COMPILER_STRIP_GATE(0x807615A0, &lit_4942);
#pragma pop

/* 807615A4-807615A8 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4943 = -60.0f;
COMPILER_STRIP_GATE(0x807615A4, &lit_4943);
#pragma pop

/* 807615A8-807615AC 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4944 = 560.0f;
COMPILER_STRIP_GATE(0x807615A8, &lit_4944);
#pragma pop

/* 807615AC-807615B0 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4945 = -1420.0f;
COMPILER_STRIP_GATE(0x807615AC, &lit_4945);
#pragma pop

/* 807615B0-807615B4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4946 = -157.0f;
COMPILER_STRIP_GATE(0x807615B0, &lit_4946);
#pragma pop

/* 807615B4-807615B8 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4947 = 128.0f;
COMPILER_STRIP_GATE(0x807615B4, &lit_4947);
#pragma pop

/* 807615B8-807615BC 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4948 = -3260.0f;
COMPILER_STRIP_GATE(0x807615B8, &lit_4948);
#pragma pop

/* 807615BC-807615C0 0000C0 0004+00 0/2 0/0 0/0 .rodata          @4949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4949 = 150.0f;
COMPILER_STRIP_GATE(0x807615BC, &lit_4949);
#pragma pop

/* 807615C0-807615C4 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4950 = -3050.0f;
COMPILER_STRIP_GATE(0x807615C0, &lit_4950);
#pragma pop

/* 807615C4-807615C8 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4951 = 125.0f;
COMPILER_STRIP_GATE(0x807615C4, &lit_4951);
#pragma pop

/* 807615C8-807615CC 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4952 = -2710.0f;
COMPILER_STRIP_GATE(0x807615C8, &lit_4952);
#pragma pop

/* 807615CC-807615D0 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4953 = 380.0f;
COMPILER_STRIP_GATE(0x807615CC, &lit_4953);
#pragma pop

/* 807615D0-807615D4 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4954 = -2515.0f;
COMPILER_STRIP_GATE(0x807615D0, &lit_4954);
#pragma pop

/* 807615D4-807615D8 0000D8 0004+00 0/4 0/0 0/0 .rodata          @4955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4955 = 300.0f;
COMPILER_STRIP_GATE(0x807615D4, &lit_4955);
#pragma pop

/* 807615D8-807615DC 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4956 = -2960.0f;
COMPILER_STRIP_GATE(0x807615D8, &lit_4956);
#pragma pop

/* 807615DC-807615E0 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4957 = -15.0f;
COMPILER_STRIP_GATE(0x807615DC, &lit_4957);
#pragma pop

/* 807615E0-807615E4 0000E4 0004+00 0/2 0/0 0/0 .rodata          @4958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4958 = 200.0f;
COMPILER_STRIP_GATE(0x807615E0, &lit_4958);
#pragma pop

/* 807615E4-807615E8 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4959 = -3160.0f;
COMPILER_STRIP_GATE(0x807615E4, &lit_4959);
#pragma pop

/* 807615E8-807615EC 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4960 = -10.0f;
COMPILER_STRIP_GATE(0x807615E8, &lit_4960);
#pragma pop

/* 807615EC-807615F0 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4961 = 120.0f;
COMPILER_STRIP_GATE(0x807615EC, &lit_4961);
#pragma pop

/* 807615F0-807615F4 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4962 = -3010.0f;
COMPILER_STRIP_GATE(0x807615F0, &lit_4962);
#pragma pop

/* 807615F4-807615F8 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4963 = -1120.0f;
COMPILER_STRIP_GATE(0x807615F4, &lit_4963);
#pragma pop

/* 807615F8-807615FC 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4964 = -210.0f;
COMPILER_STRIP_GATE(0x807615F8, &lit_4964);
#pragma pop

/* 807615FC-80761600 000100 0004+00 0/2 0/0 0/0 .rodata          @4965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4965 = 40.0f;
COMPILER_STRIP_GATE(0x807615FC, &lit_4965);
#pragma pop

/* 80761600-80761604 000104 0004+00 0/1 0/0 0/0 .rodata          @4966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4966 = -2790.0f;
COMPILER_STRIP_GATE(0x80761600, &lit_4966);
#pragma pop

/* 80761604-80761608 000108 0004+00 0/1 0/0 0/0 .rodata          @4967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4967 = 185.0f;
COMPILER_STRIP_GATE(0x80761604, &lit_4967);
#pragma pop

/* 80761608-8076160C 00010C 0004+00 0/1 0/0 0/0 .rodata          @4968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4968 = -3330.0f;
COMPILER_STRIP_GATE(0x80761608, &lit_4968);
#pragma pop

/* 8076160C-80761610 000110 0004+00 0/1 0/0 0/0 .rodata          @4969 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4969 = 310.0f;
COMPILER_STRIP_GATE(0x8076160C, &lit_4969);
#pragma pop

/* 80761610-80761614 000114 0004+00 0/1 0/0 0/0 .rodata          @4970 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4970 = 85.0f;
COMPILER_STRIP_GATE(0x80761610, &lit_4970);
#pragma pop

/* 80761614-80761618 000118 0004+00 0/1 0/0 0/0 .rodata          @4971 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4971 = -2745.0f;
COMPILER_STRIP_GATE(0x80761614, &lit_4971);
#pragma pop

/* 80761618-8076161C 00011C 0004+00 0/1 0/0 0/0 .rodata          @4972 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4972 = 110.0f;
COMPILER_STRIP_GATE(0x80761618, &lit_4972);
#pragma pop

/* 8076161C-80761620 000120 0004+00 0/1 0/0 0/0 .rodata          @4973 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4973 = 705.0f;
COMPILER_STRIP_GATE(0x8076161C, &lit_4973);
#pragma pop

/* 80761620-80761624 000124 0004+00 0/1 0/0 0/0 .rodata          @4974 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4974 = -3650.0f;
COMPILER_STRIP_GATE(0x80761620, &lit_4974);
#pragma pop

/* 80761624-80761628 000128 0004+00 0/2 0/0 0/0 .rodata          @4975 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4975 = 220.0f;
COMPILER_STRIP_GATE(0x80761624, &lit_4975);
#pragma pop

/* 80761628-8076162C 00012C 0004+00 0/1 0/0 0/0 .rodata          @4976 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4976 = -1930.0f;
COMPILER_STRIP_GATE(0x80761628, &lit_4976);
#pragma pop

/* 8076162C-80761630 000130 0004+00 0/1 0/0 0/0 .rodata          @4977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4977 = -130.0f;
COMPILER_STRIP_GATE(0x8076162C, &lit_4977);
#pragma pop

/* 80761630-80761634 000134 0004+00 0/2 0/0 0/0 .rodata          @4978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4978 = -600.0f;
COMPILER_STRIP_GATE(0x80761630, &lit_4978);
#pragma pop

/* 80761634-80761638 000138 0004+00 0/1 0/0 0/0 .rodata          @4979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4979 = -85.0f;
COMPILER_STRIP_GATE(0x80761634, &lit_4979);
#pragma pop

/* 80761638-8076163C 00013C 0004+00 0/1 0/0 0/0 .rodata          @4980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4980 = 320.0f;
COMPILER_STRIP_GATE(0x80761638, &lit_4980);
#pragma pop

/* 8076163C-80761640 000140 0004+00 0/1 0/0 0/0 .rodata          @4981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4981 = 295.0f;
COMPILER_STRIP_GATE(0x8076163C, &lit_4981);
#pragma pop

/* 80761640-80761644 000144 0004+00 0/1 0/0 0/0 .rodata          @4982 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4982 = 210.0f;
COMPILER_STRIP_GATE(0x80761640, &lit_4982);
#pragma pop

/* 80761644-80761648 000148 0004+00 0/1 0/0 0/0 .rodata          @4983 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4983 = -2670.0f;
COMPILER_STRIP_GATE(0x80761644, &lit_4983);
#pragma pop

/* 80761648-8076164C 00014C 0004+00 0/1 0/0 0/0 .rodata          @4984 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4984 = -5.0f;
COMPILER_STRIP_GATE(0x80761648, &lit_4984);
#pragma pop

/* 8076164C-80761650 000150 0004+00 0/1 0/0 0/0 .rodata          @4985 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4985 = -2325.0f;
COMPILER_STRIP_GATE(0x8076164C, &lit_4985);
#pragma pop

/* 80761650-80761654 000154 0004+00 0/1 0/0 0/0 .rodata          @4986 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4986 = 145.0f;
COMPILER_STRIP_GATE(0x80761650, &lit_4986);
#pragma pop

/* 80761654-80761658 000158 0004+00 0/1 0/0 0/0 .rodata          @4987 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4987 = -2200.0f;
COMPILER_STRIP_GATE(0x80761654, &lit_4987);
#pragma pop

/* 80761658-8076165C 00015C 0004+00 0/1 0/0 0/0 .rodata          @4988 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4988 = 75.0f;
COMPILER_STRIP_GATE(0x80761658, &lit_4988);
#pragma pop

/* 8076165C-80761660 000160 0004+00 0/1 0/0 0/0 .rodata          @4989 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4989 = -3270.0f;
COMPILER_STRIP_GATE(0x8076165C, &lit_4989);
#pragma pop

/* 80761660-80761664 000164 0004+00 0/1 0/0 0/0 .rodata          @4990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4990 = -205.0f;
COMPILER_STRIP_GATE(0x80761660, &lit_4990);
#pragma pop

/* 80761664-80761668 000168 0004+00 0/1 0/0 0/0 .rodata          @4991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4991 = -3430.0f;
COMPILER_STRIP_GATE(0x80761664, &lit_4991);
#pragma pop

/* 80761668-8076166C 00016C 0004+00 0/2 0/0 0/0 .rodata          @4992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4992 = 20.0f;
COMPILER_STRIP_GATE(0x80761668, &lit_4992);
#pragma pop

/* 8076166C-80761670 000170 0004+00 0/1 0/0 0/0 .rodata          @4993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4993 = 130.0f;
COMPILER_STRIP_GATE(0x8076166C, &lit_4993);
#pragma pop

/* 80761670-80761674 000174 0004+00 0/1 0/0 0/0 .rodata          @4994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4994 = -2630.0f;
COMPILER_STRIP_GATE(0x80761670, &lit_4994);
#pragma pop

/* 80761674-80761678 000178 0004+00 0/1 0/0 0/0 .rodata          @4995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4995 = 15.0f;
COMPILER_STRIP_GATE(0x80761674, &lit_4995);
#pragma pop

/* 80761678-8076167C 00017C 0004+00 0/1 0/0 0/0 .rodata          @4996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4996 = 285.0f;
COMPILER_STRIP_GATE(0x80761678, &lit_4996);
#pragma pop

/* 8076167C-80761680 000180 0004+00 0/1 0/0 0/0 .rodata          @4997 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4997 = -760.0f;
COMPILER_STRIP_GATE(0x8076167C, &lit_4997);
#pragma pop

/* 80761680-80761684 000184 0004+00 0/3 0/0 0/0 .rodata          @4998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4998 = -1500.0f;
COMPILER_STRIP_GATE(0x80761680, &lit_4998);
#pragma pop

/* 80761684-80761688 000188 0004+00 0/1 0/0 0/0 .rodata          @4999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4999 = -2800.0f;
COMPILER_STRIP_GATE(0x80761684, &lit_4999);
#pragma pop

/* 80761688-8076168C 00018C 0004+00 0/1 0/0 0/0 .rodata          @5000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5000 = -2500.0f;
COMPILER_STRIP_GATE(0x80761688, &lit_5000);
#pragma pop

/* 80761E2C-80761E3C 000074 000C+04 0/1 0/0 0/0 .bss             @4339 */
#pragma push
#pragma force_active on
static u8 lit_4339[12 + 4 /* padding */];
#pragma pop

/* 80761E3C-80761E48 000084 000C+00 0/1 0/0 0/0 .bss             @4342 */
#pragma push
#pragma force_active on
static u8 lit_4342[12];
#pragma pop

/* 80761E48-80761E54 000090 000C+00 0/1 0/0 0/0 .bss             @4343 */
#pragma push
#pragma force_active on
static u8 lit_4343[12];
#pragma pop

/* 80761E54-80761E60 00009C 000C+00 0/1 0/0 0/0 .bss             @4344 */
#pragma push
#pragma force_active on
static u8 lit_4344[12];
#pragma pop

/* 80761E60-80761E6C 0000A8 000C+00 0/1 0/0 0/0 .bss             @4345 */
#pragma push
#pragma force_active on
static u8 lit_4345[12];
#pragma pop

/* 80761E6C-80761E78 0000B4 000C+00 0/1 0/0 0/0 .bss             @4346 */
#pragma push
#pragma force_active on
static u8 lit_4346[12];
#pragma pop

/* 80761E78-80761E84 0000C0 000C+00 0/1 0/0 0/0 .bss             @4347 */
#pragma push
#pragma force_active on
static u8 lit_4347[12];
#pragma pop

/* 80761E84-80761E90 0000CC 000C+00 0/1 0/0 0/0 .bss             @4348 */
#pragma push
#pragma force_active on
static u8 lit_4348[12];
#pragma pop

/* 80761E90-80761E9C 0000D8 000C+00 0/1 0/0 0/0 .bss             @4349 */
#pragma push
#pragma force_active on
static u8 lit_4349[12];
#pragma pop

/* 80761E9C-80761EA8 0000E4 000C+00 0/1 0/0 0/0 .bss             @4350 */
#pragma push
#pragma force_active on
static u8 lit_4350[12];
#pragma pop

/* 80761EA8-80761EB4 0000F0 000C+00 0/1 0/0 0/0 .bss             @4351 */
#pragma push
#pragma force_active on
static u8 lit_4351[12];
#pragma pop

/* 80761EB4-80761EC0 0000FC 000C+00 0/1 0/0 0/0 .bss             @4352 */
#pragma push
#pragma force_active on
static u8 lit_4352[12];
#pragma pop

/* 80761EC0-80761ECC 000108 000C+00 0/1 0/0 0/0 .bss             @4353 */
#pragma push
#pragma force_active on
static u8 lit_4353[12];
#pragma pop

/* 80761ECC-80761ED8 000114 000C+00 0/1 0/0 0/0 .bss             @4354 */
#pragma push
#pragma force_active on
static u8 lit_4354[12];
#pragma pop

/* 80761ED8-80761EE4 000120 000C+00 0/1 0/0 0/0 .bss             @4355 */
#pragma push
#pragma force_active on
static u8 lit_4355[12];
#pragma pop

/* 80761EE4-80761EF0 00012C 000C+00 0/1 0/0 0/0 .bss             @4356 */
#pragma push
#pragma force_active on
static u8 lit_4356[12];
#pragma pop

/* 80761EF0-80761EFC 000138 000C+00 0/1 0/0 0/0 .bss             @4357 */
#pragma push
#pragma force_active on
static u8 lit_4357[12];
#pragma pop

/* 80761EFC-80761F08 000144 000C+00 0/1 0/0 0/0 .bss             @4358 */
#pragma push
#pragma force_active on
static u8 lit_4358[12];
#pragma pop

/* 80761F08-80761FE0 000150 00D8+00 0/1 0/0 0/0 .bss             mPzCenterInit_dt$4338 */
#pragma push
#pragma force_active on
static u8 mPzCenterInit_dt[216];
#pragma pop

/* 80761FE0-80761FF0 000228 000C+04 0/1 0/0 0/0 .bss             @4360 */
#pragma push
#pragma force_active on
static u8 lit_4360[12 + 4 /* padding */];
#pragma pop

/* 80761FF0-80761FFC 000238 000C+00 0/1 0/0 0/0 .bss             @4363 */
#pragma push
#pragma force_active on
static u8 lit_4363[12];
#pragma pop

/* 80761FFC-80762008 000244 000C+00 0/1 0/0 0/0 .bss             @4364 */
#pragma push
#pragma force_active on
static u8 lit_4364[12];
#pragma pop

/* 80762008-80762014 000250 000C+00 0/1 0/0 0/0 .bss             @4365 */
#pragma push
#pragma force_active on
static u8 lit_4365[12];
#pragma pop

/* 80762014-80762020 00025C 000C+00 0/1 0/0 0/0 .bss             @4366 */
#pragma push
#pragma force_active on
static u8 lit_4366[12];
#pragma pop

/* 80762020-8076202C 000268 000C+00 0/1 0/0 0/0 .bss             @4367 */
#pragma push
#pragma force_active on
static u8 lit_4367[12];
#pragma pop

/* 8076202C-80762038 000274 000C+00 0/1 0/0 0/0 .bss             @4368 */
#pragma push
#pragma force_active on
static u8 lit_4368[12];
#pragma pop

/* 80762038-80762044 000280 000C+00 0/1 0/0 0/0 .bss             @4369 */
#pragma push
#pragma force_active on
static u8 lit_4369[12];
#pragma pop

/* 80762044-80762050 00028C 000C+00 0/1 0/0 0/0 .bss             @4370 */
#pragma push
#pragma force_active on
static u8 lit_4370[12];
#pragma pop

/* 80762050-8076205C 000298 000C+00 0/1 0/0 0/0 .bss             @4371 */
#pragma push
#pragma force_active on
static u8 lit_4371[12];
#pragma pop

/* 8076205C-80762068 0002A4 000C+00 0/1 0/0 0/0 .bss             @4372 */
#pragma push
#pragma force_active on
static u8 lit_4372[12];
#pragma pop

/* 80762068-80762074 0002B0 000C+00 0/1 0/0 0/0 .bss             @4373 */
#pragma push
#pragma force_active on
static u8 lit_4373[12];
#pragma pop

/* 80762074-80762080 0002BC 000C+00 0/1 0/0 0/0 .bss             @4374 */
#pragma push
#pragma force_active on
static u8 lit_4374[12];
#pragma pop

/* 80762080-8076208C 0002C8 000C+00 0/1 0/0 0/0 .bss             @4375 */
#pragma push
#pragma force_active on
static u8 lit_4375[12];
#pragma pop

/* 8076208C-80762098 0002D4 000C+00 0/1 0/0 0/0 .bss             @4376 */
#pragma push
#pragma force_active on
static u8 lit_4376[12];
#pragma pop

/* 80762098-807620A4 0002E0 000C+00 0/1 0/0 0/0 .bss             @4377 */
#pragma push
#pragma force_active on
static u8 lit_4377[12];
#pragma pop

/* 807620A4-807620B0 0002EC 000C+00 0/1 0/0 0/0 .bss             @4378 */
#pragma push
#pragma force_active on
static u8 lit_4378[12];
#pragma pop

/* 807620B0-807620BC 0002F8 000C+00 0/1 0/0 0/0 .bss             @4379 */
#pragma push
#pragma force_active on
static u8 lit_4379[12];
#pragma pop

/* 807620BC-80762194 000304 00D8+00 0/1 0/0 0/0 .bss             mPzEyeInit_dt$4359 */
#pragma push
#pragma force_active on
static u8 mPzEyeInit_dt[216];
#pragma pop

/* 807593CC-8075B7CC 000F4C 2400+00 2/1 0/0 0/0 .text            executeOpeningDemo__8daE_PZ_cFv */
void daE_PZ_c::executeOpeningDemo() {
    // NONMATCHING
}

/* 8075B7CC-8075B7E0 00334C 0014+00 1/1 0/0 0/0 .text            checkSkipEdge__14dEvt_control_cFv
 */
// void dEvt_control_c::checkSkipEdge() {
extern "C" void checkSkipEdge__14dEvt_control_cFv() {
    // NONMATCHING
}

/* 8075B7E0-8075B970 003360 0190+00 1/1 0/0 0/0 .text            mPointerSet__8daE_PZ_cFv */
void daE_PZ_c::mPointerSet() {
    // NONMATCHING
}

/* 8075B970-8075C6AC 0034F0 0D3C+00 2/1 0/0 0/0 .text            executeWait__8daE_PZ_cFv */
void daE_PZ_c::executeWait() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076168C-80761690 000190 0004+00 0/1 0/0 0/0 .rodata          @5001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5001 = -100.0f;
COMPILER_STRIP_GATE(0x8076168C, &lit_5001);
#pragma pop

/* 80761690-80761694 000194 0004+00 0/0 0/0 0/0 .rodata          @5002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5002 = -3300.0f;
COMPILER_STRIP_GATE(0x80761690, &lit_5002);
#pragma pop

/* 80761694-80761698 000198 0004+00 0/0 0/0 0/0 .rodata          @5003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5003 = -3000.0f;
COMPILER_STRIP_GATE(0x80761694, &lit_5003);
#pragma pop

/* 80761698-8076169C 00019C 0004+00 0/0 0/0 0/0 .rodata          @5004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5004 = 0.5f;
COMPILER_STRIP_GATE(0x80761698, &lit_5004);
#pragma pop

/* 8076169C-807616A0 0001A0 0004+00 0/0 0/0 0/0 .rodata          @5005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5005 = 1000.0f;
COMPILER_STRIP_GATE(0x8076169C, &lit_5005);
#pragma pop

/* 807616A0-807616A4 0001A4 0004+00 0/1 0/0 0/0 .rodata          @5006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5006 = 140.0f;
COMPILER_STRIP_GATE(0x807616A0, &lit_5006);
#pragma pop

/* 807616A4-807616A8 0001A8 0004+00 0/2 0/0 0/0 .rodata          @5007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5007 = -1300.0f;
COMPILER_STRIP_GATE(0x807616A4, &lit_5007);
#pragma pop

/* 807616A8-807616AC 0001AC 0004+00 0/0 0/0 0/0 .rodata          @5008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5008 = -70.0f;
COMPILER_STRIP_GATE(0x807616A8, &lit_5008);
#pragma pop

/* 807616AC-807616B0 0001B0 0004+00 0/1 0/0 0/0 .rodata          @5009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5009 = 250.0f;
COMPILER_STRIP_GATE(0x807616AC, &lit_5009);
#pragma pop

/* 807616B0-807616B4 0001B4 0004+00 0/0 0/0 0/0 .rodata          @5010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5010 = -950.0f;
COMPILER_STRIP_GATE(0x807616B0, &lit_5010);
#pragma pop

/* 807616B4-807616B8 0001B8 0004+00 0/0 0/0 0/0 .rodata          @5011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5011 = -700.0f;
COMPILER_STRIP_GATE(0x807616B4, &lit_5011);
#pragma pop

/* 807616B8-807616BC 0001BC 0004+00 0/0 0/0 0/0 .rodata          @5012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5012 = -800.0f;
COMPILER_STRIP_GATE(0x807616B8, &lit_5012);
#pragma pop

/* 807616BC-807616C0 0001C0 0004+00 0/0 0/0 0/0 .rodata          @5013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5013 = -300.0f;
COMPILER_STRIP_GATE(0x807616BC, &lit_5013);
#pragma pop

/* 807616C0-807616C4 0001C4 0004+00 0/1 0/0 0/0 .rodata          @5014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5014 = -1200.0f;
COMPILER_STRIP_GATE(0x807616C0, &lit_5014);
#pragma pop

/* 807616C4-807616C8 0001C8 0004+00 0/0 0/0 0/0 .rodata          @5015 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5015 = -2600.0f;
COMPILER_STRIP_GATE(0x807616C4, &lit_5015);
#pragma pop

/* 807616C8-807616CC 0001CC 0004+00 0/0 0/0 0/0 .rodata          @5016 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5016 = 6.0f;
COMPILER_STRIP_GATE(0x807616C8, &lit_5016);
#pragma pop

/* 807616CC-807616D4 0001D0 0004+04 0/0 0/0 0/0 .rodata          @5017 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5017[1 + 1 /* padding */] = {
    -2850.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x807616CC, &lit_5017);
#pragma pop

/* 807616D4-807616DC 0001D8 0008+00 1/1 0/0 0/0 .rodata          @5083 */
SECTION_RODATA static u8 const lit_5083[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x807616D4, &lit_5083);

/* 807616DC-807616E0 0001E0 0004+00 0/1 0/0 0/0 .rodata          @5608 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5608 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x807616DC, &lit_5608);
#pragma pop

/* 8075C6AC-8075CB80 00422C 04D4+00 1/1 0/0 0/0 .text            executeAttack__8daE_PZ_cFv */
void daE_PZ_c::executeAttack() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807616E0-807616E4 0001E4 0004+00 0/1 0/0 0/0 .rodata          @5672 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5672 = -40.0f;
COMPILER_STRIP_GATE(0x807616E0, &lit_5672);
#pragma pop

/* 8075CB80-8075CE68 004700 02E8+00 1/1 0/0 0/0 .text            executeDamage__8daE_PZ_cFv */
void daE_PZ_c::executeDamage() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807616E4-807616E8 0001E8 0004+00 0/1 0/0 0/0 .rodata          @5974 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5974 = 215.0f;
COMPILER_STRIP_GATE(0x807616E4, &lit_5974);
#pragma pop

/* 807616E8-807616EC 0001EC 0004+00 0/1 0/0 0/0 .rodata          @5975 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5975 = 880.0f;
COMPILER_STRIP_GATE(0x807616E8, &lit_5975);
#pragma pop

/* 807616EC-807616F0 0001F0 0004+00 0/2 0/0 0/0 .rodata          @5976 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5976 = 400.0f;
COMPILER_STRIP_GATE(0x807616EC, &lit_5976);
#pragma pop

/* 80762194-807621A4 0003DC 000C+04 0/1 0/0 0/0 .bss             @5677 */
#pragma push
#pragma force_active on
static u8 lit_5677[12 + 4 /* padding */];
#pragma pop

/* 807621A4-807621B0 0003EC 000C+00 0/1 0/0 0/0 .bss             @5680 */
#pragma push
#pragma force_active on
static u8 lit_5680[12];
#pragma pop

/* 807621B0-807621BC 0003F8 000C+00 0/1 0/0 0/0 .bss             @5681 */
#pragma push
#pragma force_active on
static u8 lit_5681[12];
#pragma pop

/* 807621BC-807621E0 000404 0024+00 0/1 0/0 0/0 .bss             mPzDeadDemo_mCenter_dt$5676 */
#pragma push
#pragma force_active on
static u8 mPzDeadDemo_mCenter_dt[36];
#pragma pop

/* 807621E0-807621F0 000428 000C+04 0/1 0/0 0/0 .bss             @5683 */
#pragma push
#pragma force_active on
static u8 lit_5683[12 + 4 /* padding */];
#pragma pop

/* 807621F0-807621FC 000438 000C+00 0/1 0/0 0/0 .bss             @5686 */
#pragma push
#pragma force_active on
static u8 lit_5686[12];
#pragma pop

/* 807621FC-80762208 000444 000C+00 0/1 0/0 0/0 .bss             @5687 */
#pragma push
#pragma force_active on
static u8 lit_5687[12];
#pragma pop

/* 80762208-8076222C 000450 0024+00 0/1 0/0 0/0 .bss             mPzDeadDemo_mEye_dt$5682 */
#pragma push
#pragma force_active on
static u8 mPzDeadDemo_mEye_dt[36];
#pragma pop

/* 8075CE68-8075D94C 0049E8 0AE4+00 2/1 0/0 0/0 .text            executeDead__8daE_PZ_cFv */
void daE_PZ_c::executeDead() {
    // NONMATCHING
}

/* 8075D94C-8075F0BC 0054CC 1770+00 2/1 0/0 0/0 .text            executeSummonsBullet__8daE_PZ_cFv
 */
void daE_PZ_c::executeSummonsBullet() {
    // NONMATCHING
}

/* 8075F0BC-8075F3A8 006C3C 02EC+00 1/1 0/0 0/0 .text            executeBullet__8daE_PZ_cFv */
void daE_PZ_c::executeBullet() {
    // NONMATCHING
}

/* 8075F3A8-8075F510 006F28 0168+00 1/1 0/0 0/0 .text            action__8daE_PZ_cFv */
void daE_PZ_c::action() {
    // NONMATCHING
}

/* 8075F510-8075F578 007090 0068+00 1/1 0/0 0/0 .text            action_fire__8daE_PZ_cFv */
void daE_PZ_c::action_fire() {
    // NONMATCHING
}

/* 8075F578-8075F734 0070F8 01BC+00 1/1 0/0 0/0 .text            fire_mtx_set__8daE_PZ_cFv */
void daE_PZ_c::fire_mtx_set() {
    // NONMATCHING
}

/* 8075F734-8075F7E8 0072B4 00B4+00 1/1 0/0 0/0 .text            mtx_set__8daE_PZ_cFv */
void daE_PZ_c::mtx_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807616F0-807616F4 0001F4 0004+00 0/0 0/0 0/0 .rodata          @5977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5977 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x807616F0, &lit_5977);
#pragma pop

/* 807616F4-807616F8 0001F8 0004+00 0/0 0/0 0/0 .rodata          @5978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5978 = 500.0f;
COMPILER_STRIP_GATE(0x807616F4, &lit_5978);
#pragma pop

/* 807616F8-807616FC 0001FC 0004+00 0/1 0/0 0/0 .rodata          @5979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5979 = 50.0f;
COMPILER_STRIP_GATE(0x807616F8, &lit_5979);
#pragma pop

/* 807616FC-80761700 000200 0004+00 0/0 0/0 0/0 .rodata          @5980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5980 = 11.0f / 5.0f;
COMPILER_STRIP_GATE(0x807616FC, &lit_5980);
#pragma pop

/* 80761700-80761748 000204 0048+00 0/0 0/0 0/0 .rodata          BIRTH_DT */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const BIRTH_DT[72] = {
    0x01, 0xF9, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x14, 0x01, 0xFB, 0x00,
    0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x14, 0x01, 0xE4, 0x00, 0x00, 0xFF, 0xFF,
    0x00, 0x1E, 0x00, 0x00, 0x00, 0x0C, 0x01, 0xB4, 0x00, 0x00, 0xFF, 0xFF, 0xEF, 0x00, 0x00,
    0x00, 0x00, 0x08, 0x01, 0xCD, 0x00, 0x00, 0xFF, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0C,
    0x01, 0xE4, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x28, 0x00, 0x00, 0x00, 0x03,
};
COMPILER_STRIP_GATE(0x80761700, &BIRTH_DT);
#pragma pop

/* 80761748-80761760 00024C 0018+00 0/0 0/0 0/0 .rodata          mDBaBa_birthAngle_dt */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const mDBaBa_birthAngle_dt[24] = {
    0x00, 0x00, 0x2A, 0xAA, 0x55, 0x54, 0x7F, 0xFE, 0xAA, 0xA8, 0xD5, 0x52,
    0x10, 0x00, 0x3A, 0xAA, 0x65, 0x54, 0x8F, 0xFE, 0xBA, 0xA8, 0xE5, 0x52,
};
COMPILER_STRIP_GATE(0x80761748, &mDBaBa_birthAngle_dt);
#pragma pop

/* 80761760-80761790 000264 0030+00 0/0 0/0 0/0 .rodata          mDBaBa_birthHani_dt */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const mDBaBa_birthHani_dt[48] = {
    0x44, 0x16, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
    0x44, 0x16, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00, 0x44, 0xE1, 0x00, 0x00, 0x44, 0xE1, 0x00, 0x00,
    0x44, 0xE1, 0x00, 0x00, 0x44, 0xE1, 0x00, 0x00, 0x44, 0xE1, 0x00, 0x00, 0x44, 0xE1, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80761760, &mDBaBa_birthHani_dt);
#pragma pop

/* 80761790-80761794 000294 0004+00 0/0 0/0 0/0 .rodata          @6712 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6712 = -2000.0f;
COMPILER_STRIP_GATE(0x80761790, &lit_6712);
#pragma pop

/* 80761794-80761798 000298 0004+00 0/1 0/0 0/0 .rodata          @6935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6935 = -120.0f;
COMPILER_STRIP_GATE(0x80761794, &lit_6935);
#pragma pop

/* 8075F7E8-8075F964 007368 017C+00 1/1 0/0 0/0 .text            cc_set__8daE_PZ_cFv */
void daE_PZ_c::cc_set() {
    // NONMATCHING
}

/* 8075F964-8075FA60 0074E4 00FC+00 1/1 0/0 0/0 .text            execute__8daE_PZ_cFv */
void daE_PZ_c::execute() {
    // NONMATCHING
}

/* 8075FA60-8075FA80 0075E0 0020+00 2/1 0/0 0/0 .text            daE_PZ_Execute__FP8daE_PZ_c */
static void daE_PZ_Execute(daE_PZ_c* param_0) {
    // NONMATCHING
}

/* 8075FA80-8075FA88 007600 0008+00 1/0 0/0 0/0 .text            daE_PZ_IsDelete__FP8daE_PZ_c */
static bool daE_PZ_IsDelete(daE_PZ_c* param_0) {
    return true;
}

/* 8075FA88-8075FB2C 007608 00A4+00 1/1 0/0 0/0 .text            _delete__8daE_PZ_cFv */
void daE_PZ_c::_delete() {
    // NONMATCHING
}

/* 8075FB2C-8075FB4C 0076AC 0020+00 1/0 0/0 0/0 .text            daE_PZ_Delete__FP8daE_PZ_c */
static void daE_PZ_Delete(daE_PZ_c* param_0) {
    // NONMATCHING
}

/* 8075FB4C-807600A4 0076CC 0558+00 1/1 0/0 0/0 .text            CreateHeap__8daE_PZ_cFv */
void daE_PZ_c::CreateHeap() {
    // NONMATCHING
}

/* 807600A4-807600EC 007C24 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 807600EC-8076010C 007C6C 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80761798-8076179C 00029C 0004+00 0/1 0/0 0/0 .rodata          @7430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7430 = -4000.0f;
COMPILER_STRIP_GATE(0x80761798, &lit_7430);
#pragma pop

/* 8076179C-807617A0 0002A0 0004+00 0/1 0/0 0/0 .rodata          @7431 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7431 = 4000.0f;
COMPILER_STRIP_GATE(0x8076179C, &lit_7431);
#pragma pop

/* 807617A0-807617A4 0002A4 0004+00 0/1 0/0 0/0 .rodata          @7432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7432 = -3.0f;
COMPILER_STRIP_GATE(0x807617A0, &lit_7432);
#pragma pop

/* 807617A4-807617A8 0002A8 0004+00 0/1 0/0 0/0 .rodata          @7433 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7433 = -400.0f;
COMPILER_STRIP_GATE(0x807617A4, &lit_7433);
#pragma pop

/* 807617A8-807617AC 0002AC 0004+00 0/1 0/0 0/0 .rodata          @7434 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7434 = -10000.0f;
COMPILER_STRIP_GATE(0x807617A8, &lit_7434);
#pragma pop

/* 807617AC-807617B0 0002B0 0004+00 0/1 0/0 0/0 .rodata          @7435 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7435 = 10000.0f;
COMPILER_STRIP_GATE(0x807617AC, &lit_7435);
#pragma pop

/* 807617B0-807617B4 0002B4 0004+00 0/1 0/0 0/0 .rodata          @7436 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7436 = 60.0f;
COMPILER_STRIP_GATE(0x807617B0, &lit_7436);
#pragma pop

/* 8076010C-807607EC 007C8C 06E0+00 1/1 0/0 0/0 .text            create__8daE_PZ_cFv */
void daE_PZ_c::create() {
    // NONMATCHING
}

/* 807607EC-807609E0 00836C 01F4+00 1/1 0/0 0/0 .text            __ct__8daE_PZ_cFv */
daE_PZ_c::daE_PZ_c() {
    // NONMATCHING
}

/* 807609E0-80760A28 008560 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80760A28-80760A70 0085A8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80760A70-80760AB8 0085F0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80760AB8-80760B14 008638 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80760B14-80760B84 008694 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80760B84-80760BF4 008704 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80760BF4-80760BF8 008774 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80760BF8-80760C18 008778 0020+00 1/0 0/0 0/0 .text            daE_PZ_Create__FP8daE_PZ_c */
static void daE_PZ_Create(daE_PZ_c* param_0) {
    // NONMATCHING
}

/* 80760C18-80760C60 008798 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80760C60-80760CA8 0087E0 0048+00 2/1 0/0 0/0 .text            __dt__12daE_PZ_HIO_cFv */
daE_PZ_HIO_c::~daE_PZ_HIO_c() {
    // NONMATCHING
}

/* 80760CA8-80760CE4 008828 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_pz_cpp */
void __sinit_d_a_e_pz_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80760CA8, __sinit_d_a_e_pz_cpp);
#pragma pop

/* 80760CE4-80760CEC 008864 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80760CE4() {
    // NONMATCHING
}

/* 80760CEC-80760CF4 00886C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80760CEC() {
    // NONMATCHING
}

/* 80761108-80761144 008C88 003C+00 3/3 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80761144-8076114C -00001 0008+00 0/0 0/0 0/0 .text            changeDemoMoveAngle__9daPy_py_cFs
 */
// void daPy_py_c::changeDemoMoveAngle(s16 param_0) {
extern "C" void changeDemoMoveAngle__9daPy_py_cFs(fopAc_ac_c* param_0, u16 param_1) {
    *(u16*)(((u8*)param_0) + 1542) /* this->field_0x606 */ = param_1;
}

/* 8076114C-80761164 008CCC 0018+00 1/1 0/0 0/0 .text            zero__4cXyzFv */
// void cXyz::zero() {
extern "C" void zero__4cXyzFv() {
    // NONMATCHING
}

/* 807611D8-80761208 008D58 0030+00 1/1 0/0 0/0 .text            isStop__13mDoExt_morf_cFv */
// void mDoExt_morf_c::isStop() {
extern "C" void isStop__13mDoExt_morf_cFv() {
    // NONMATCHING
}

/* 80761208-80761220 008D88 0018+00 1/1 0/0 0/0 .text            checkNowWolf__9daPy_py_cFv */
// void daPy_py_c::checkNowWolf() {
extern "C" void checkNowWolf__9daPy_py_cFv() {
    // NONMATCHING
}

/* 80761220-80761254 008DA0 0034+00 1/1 0/0 0/0 .text            fopAcM_onSwitch__FPC10fopAc_ac_ci
 */
// static void fopAcM_onSwitch(fopAc_ac_c const* param_0, int param_1) {
extern "C" void fopAcM_onSwitch__FPC10fopAc_ac_ci() {
    // NONMATCHING
}

/* 80761254-80761368 008DD4 0114+00 1/1 0/0 0/0 .text            abs__4cXyzCFv */
// void cXyz::abs() const {
extern "C" void abs__4cXyzCFv() {
    // NONMATCHING
}

/* 80761368-80761384 008EE8 001C+00 1/1 0/0 0/0 .text            changeDemoPos0__9daPy_py_cFPC4cXyz
 */
// void daPy_py_c::changeDemoPos0(cXyz const* param_0) {
extern "C" void changeDemoPos0__9daPy_py_cFPC4cXyz() {
    // NONMATCHING
}

/* 80761384-807613B0 008F04 002C+00 1/1 0/0 0/0 .text fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c
 */
// static void fopAcM_searchPlayerAngleY(fopAc_ac_c const* param_0) {
extern "C" void fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c() {
    // NONMATCHING
}

/* 807613B0-807613F0 008F30 0040+00 1/1 0/0 0/0 .text            setFrame__13mDoExt_morf_cFf */
// void mDoExt_morf_c::setFrame(f32 param_0) {
extern "C" void setFrame__13mDoExt_morf_cFf() {
    // NONMATCHING
}

/* 807613F0-8076140C 008F70 001C+00 1/1 0/0 0/0 .text            set__4cXyzFRC3Vec */
// void cXyz::set(Vec const& param_0) {
extern "C" void set__4cXyzFRC3Vec() {
    // NONMATCHING
}

/* 8076140C-8076141C 008F8C 0010+00 1/1 0/0 0/0 .text            set__4cXyzFfff */
// void cXyz::set(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void set__4cXyzFfff() {
    // NONMATCHING
}

/* 8076141C-80761430 008F9C 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
// void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
extern "C" void changeDemoMode__9daPy_py_cFUliis() {
    // NONMATCHING
}

/* 80761430-80761444 008FB0 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::changeOriginalDemo() {
extern "C" void changeOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 80761454-80761470 008FD4 001C+00 1/1 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
// void cXyz::operator=(cXyz const& param_0) {
extern "C" void __as__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 80761470-80761488 008FF0 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
// static void dComIfGp_getPlayer(int param_0) {
extern "C" void dComIfGp_getPlayer__Fi() {
    // NONMATCHING
}

/* 807614BC-807614D8 00903C 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
// cXyz::cXyz(cXyz const& param_0) {
extern "C" void __ct__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 807614D8-807614E8 009058 0010+00 1/1 0/0 0/0 .text            __ct__4cXyzFfff */
// cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void __ct__4cXyzFfff() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8076222C-80762230 000474 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8076222C[4];
#pragma pop

/* 80762230-80762234 000478 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80762230[4];
#pragma pop

/* 80762234-80762238 00047C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80762234[4];
#pragma pop

/* 80762238-8076223C 000480 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80762238[4];
#pragma pop

/* 8076223C-80762240 000484 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8076223C[4];
#pragma pop

/* 80762240-80762244 000488 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80762240[4];
#pragma pop

/* 80762244-80762248 00048C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80762244[4];
#pragma pop

/* 80762248-8076224C 000490 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80762248[4];
#pragma pop

/* 8076224C-80762250 000494 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8076224C[4];
#pragma pop

/* 80762250-80762254 000498 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80762250[4];
#pragma pop

/* 80762254-80762258 00049C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80762254[4];
#pragma pop

/* 80762258-8076225C 0004A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80762258[4];
#pragma pop

/* 8076225C-80762260 0004A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8076225C[4];
#pragma pop

/* 80762260-80762264 0004A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80762260[4];
#pragma pop

/* 80762264-80762268 0004AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80762264[4];
#pragma pop

/* 80762268-8076226C 0004B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80762268[4];
#pragma pop

/* 8076226C-80762270 0004B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8076226C[4];
#pragma pop

/* 80762270-80762274 0004B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80762270[4];
#pragma pop

/* 80762274-80762278 0004BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80762274[4];
#pragma pop

/* 80762278-8076227C 0004C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80762278[4];
#pragma pop

/* 8076227C-80762280 0004C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8076227C[4];
#pragma pop

/* 80762280-80762284 0004C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80762280[4];
#pragma pop

/* 80762284-80762288 0004CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80762284[4];
#pragma pop

/* 80762288-8076228C 0004D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80762288[4];
#pragma pop

/* 8076228C-80762290 0004D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8076228C[4];
#pragma pop

/* 807617B4-807617B4 0002B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
