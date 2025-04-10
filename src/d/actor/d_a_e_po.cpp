/**
 * @file d_a_e_po.cpp
 * 
*/

#include "d/actor/d_a_e_po.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__12daE_PO_HIO_cFv();
extern "C" static void mArg0Check__FP10e_po_classs();
extern "C" static void anm_init__FP10e_po_classifUcf();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void daE_PO_Draw__FP10e_po_class();
extern "C" static void e_po_opening__FP10e_po_class();
extern "C" static void e_po_wait__FP10e_po_class();
extern "C" static void e_po_avoid__FP10e_po_class();
extern "C" static void e_po_search__FP10e_po_class();
extern "C" static void e_po_attack__FP10e_po_class();
extern "C" static void damage_check__FP10e_po_class();
extern "C" static void e_po_damage__FP10e_po_class();
extern "C" static void e_po_wolfbite__FP10e_po_class();
extern "C" static void e_po_dead__FP10e_po_class();
extern "C" static void e_rollingMove__FP10e_po_classsff();
extern "C" static void e_po_limbering__FP10e_po_class();
extern "C" static void e_po_roll_move__FP10e_po_class();
extern "C" static void e_po_holl_demo__FP10e_po_class();
extern "C" static void dComIfGp_particle_getEmitter__FUl();
extern "C" static void dComIfGp_particle_set__FUlUsPC4cXyzPC5csXyzPC4cXyz();
extern "C" static void fopAcM_isSwitch__FPC10fopAc_ac_ci();
extern "C" static void fopAcM_GetID__FPCv();
extern "C" void fopAcM_SetGroup__FP10fopAc_ac_cUc(fopAc_ac_c* param_0, u8 param_1);
extern "C" void OnCoSetBit__14cCcD_ObjHitInfFv();
extern "C" static void action__FP10e_po_class();
extern "C" static void daE_PO_Execute__FP10e_po_class();
extern "C" static void
mPo_tgHitCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static bool daE_PO_IsDelete__FP10e_po_class();
extern "C" static void daE_PO_Delete__FP10e_po_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_PO_Create__FP10fopAc_ac_c();
extern "C" void __ct__10e_po_classFv();
extern "C" void cleanup__18dPa_levelEcallBackFv();
extern "C" void __dt__18dPa_levelEcallBackFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void execute__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void draw__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void __dt__12daE_PO_HIO_cFv();
extern "C" void __sinit_d_a_e_po_cpp();
extern "C" static void func_80756E6C();
extern "C" static void func_80756E74();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" void cancelOriginalDemo__9daPy_py_cFv();
extern "C" static void dComIfGp_event_reset__Fv();
extern "C" void __apl__4cXyzFRC3Vec();
extern "C" static void fopAcM_onSwitch__FPC10fopAc_ac_ci();
extern "C" static void dComIfGp_getVibration__Fv();
extern "C" void __ct__10JAISoundIDFUl();
extern "C" static void fopAcM_offSwitch__FPC10fopAc_ac_ci();
extern "C" void getFrame__13mDoExt_morf_cFv();
extern "C" void isStop__13mDoExt_morf_cFv();
extern "C" static void cM_scos__Fs();
extern "C" static void cM_ssin__Fs();
extern "C" void abs__4cXyzCFv();
extern "C" void changeDemoPos0__9daPy_py_cFPC4cXyz();
extern "C" void set__4cXyzFRC3Vec();
extern "C" void set__4cXyzFfff();
extern "C" void changeDemoMode__9daPy_py_cFUliis();
extern "C" void changeOriginalDemo__9daPy_py_cFv();
extern "C" static void daPy_getPlayerActorClass__Fv();
extern "C" void Fovy__9dCamera_cFv();
extern "C" void __as__4cXyzFRC4cXyz();
extern "C" static void fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c();
extern "C" void onCondition__11dEvt_info_cFUs();
extern "C" void checkCommandDemoAccrpt__11dEvt_info_cFv();
extern "C" void __ct__4cXyzFRC4cXyz();
extern "C" void __ct__4cXyzFfff();
extern "C" static void dComIfGp_getCamera__Fi();
extern "C" static void dComIfGp_getPlayerCameraID__Fi();
extern "C" static void dComIfGp_getPlayer__Fi();
extern "C" extern char const* const d_a_e_po__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotS__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void create__21mDoExt_invisibleModelFP8J3DModelUc();
extern "C" void entryDL__21mDoExt_invisibleModelFP4cXyz();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void initBallModel__13fopEn_enemy_cFv();
extern "C" void checkBallModelDraw__13fopEn_enemy_cFv();
extern "C" void setBallModelEffect__13fopEn_enemy_cFP12dKy_tevstr_c();
extern "C" void drawBallModel__13fopEn_enemy_cFP12dKy_tevstr_c();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_getTalkEventPartner__FPC10fopAc_ac_c();
extern "C" void fopAcM_createItemForPresentDemo__FPC4cXyziUciiPC5csXyzPC4cXyz();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_IsExist__FUi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPtT__14dEvt_control_cFPv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getRunEventName__16dEvent_manager_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void setOldPosP__22dPa_hermiteEcallBack_cFPC4cXyzPC4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void GetLockonList__12dAttention_cFl();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void getActor__10dAttList_cFv();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
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
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void StartBlure__9dCamera_cFiP10fopAc_ac_cff();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_change_colpat__FUc();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dt__18JPAEmitterCallBackFv();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_20();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_20();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__22dPa_hermiteEcallBack_c[9];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mParticleTracePCB__13dPa_control_c[4 + 4 /* padding */];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80757728-8075772C 00002C 0004+00 0/1 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3938 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x80757728, &lit_3938);
#pragma pop

/* 8075772C-80757730 000030 0004+00 0/3 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = 1000.0f;
COMPILER_STRIP_GATE(0x8075772C, &lit_3939);
#pragma pop

/* 80757730-80757734 000034 0004+00 0/1 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 300.0f;
COMPILER_STRIP_GATE(0x80757730, &lit_3940);
#pragma pop

/* 80757734-80757738 000038 0004+00 0/2 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = 15.0f;
COMPILER_STRIP_GATE(0x80757734, &lit_3941);
#pragma pop

/* 80757738-8075773C 00003C 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = 700.0f;
COMPILER_STRIP_GATE(0x80757738, &lit_3942);
#pragma pop

/* 80757ADA-80757ADC 000036 0002+00 6/7 0/0 0/0 .data            mAttackNo */
SECTION_DATA static u16 mAttackNo = 0x0003;

/* 80757ADC-80757AE0 000038 0004+00 1/2 0/0 0/0 .data            mHaba */
SECTION_DATA static f32 mHaba = 400.0f;

/* 80757AE0-80757AE4 00003C 0002+02 2/4 0/0 0/0 .data            mRollHp */
SECTION_DATA static u16 mRollHp[1 + 1 /* padding */] = {
    0x005A,
    /* padding */
    0x0000,
};

/* 80757AE4-80757AF4 000040 000E+02 0/0 0/0 0/0 .data            particleNmaeDt$4835 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 particleNmaeDt[14 + 2 /* padding */] = {
    0x86,
    0x8A,
    0x86,
    0x8B,
    0x86,
    0x8C,
    0x86,
    0x8D,
    0x86,
    0x8E,
    0x86,
    0x8F,
    0x86,
    0x98,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 80757AF4-80757AFC 000050 0008+00 0/0 0/0 0/0 .data            dead_eff_Dt1$4836 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 dead_eff_Dt1[8] = {
    0x86, 0x90, 0x86, 0x91, 0x86, 0x92, 0x86, 0x93,
};
#pragma pop

/* 80757AFC-80757B00 000058 0004+00 0/0 0/0 0/0 .data            dead_eff_Dt2$4837 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 dead_eff_Dt2[4] = {
    0x86,
    0x94,
    0x86,
    0x95,
};
#pragma pop

/* 80757B00-80757B04 00005C 0004+00 0/0 0/0 0/0 .data            dead_eff_Dt3$4838 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 dead_eff_Dt3[4] = {
    0x86,
    0x96,
    0x86,
    0x97,
};
#pragma pop

/* 80757B04-80757B08 000060 0004+00 0/0 0/0 0/0 .data            dead_eff_Dt4$4839 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 dead_eff_Dt4[4] = {
    0x86,
    0x6D,
    0x86,
    0x9B,
};
#pragma pop

/* 80757B08-80757BD8 -00001 00D0+00 1/1 0/0 0/0 .data            @5635 */
SECTION_DATA static void* lit_5635[52] = {
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x15C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x300),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x448),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x5F4),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x6C8),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0xAD8),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x97C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0xF38),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x127C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x12DC),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x130C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0xCC),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x162C),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x1414),
    (void*)(((char*)e_po_dead__FP10e_po_class) + 0x1440),
};

/* 80757BD8-80757C18 -00001 0040+00 1/1 0/0 0/0 .data            @5903 */
SECTION_DATA static void* lit_5903[16] = {
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x4C0),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x4F8),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x6C8),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x804),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x9BC),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x9BC),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x9BC),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x9BC),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x9BC),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x9BC),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x70),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x2C8),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x418),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x6A4),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x88C),
    (void*)(((char*)e_po_limbering__FP10e_po_class) + 0x8FC),
};

/* 80757C18-80757C1C 000174 0004+00 1/1 0/0 0/0 .data            holl_demo_eff_Dt$6023 */
SECTION_DATA static u8 holl_demo_eff_Dt[4] = {
    0x86,
    0x70,
    0x86,
    0x71,
};

/* 80757C1C-80757C24 000178 0008+00 1/1 0/0 0/0 .data            mKAngInit_dt$6091 */
SECTION_DATA static u8 mKAngInit_dt[8] = {
    0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80757C24-80757C78 -00001 0054+00 1/1 0/0 0/0 .data            @7233 */
SECTION_DATA static void* lit_7233[21] = {
    (void*)(((char*)action__FP10e_po_class) + 0x2D4),
    (void*)(((char*)action__FP10e_po_class) + 0x2E0),
    (void*)(((char*)action__FP10e_po_class) + 0x2EC),
    (void*)(((char*)action__FP10e_po_class) + 0x2F8),
    (void*)(((char*)action__FP10e_po_class) + 0x310),
    (void*)(((char*)action__FP10e_po_class) + 0x34C),
    (void*)(((char*)action__FP10e_po_class) + 0x358),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x328),
    (void*)(((char*)action__FP10e_po_class) + 0x334),
    (void*)(((char*)action__FP10e_po_class) + 0x340),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x36C),
    (void*)(((char*)action__FP10e_po_class) + 0x364),
};

/* 80757C78-80757C7C 0001D4 0004+00 0/0 0/0 0/0 .data            po_bottleIn_dt$7646 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 po_bottleIn_dt[4] = {
    0xEF,
    0xF0,
    0xF1,
    0xF2,
};
#pragma pop

/* 80757C7C-80757CC0 0001D8 0044+00 0/1 0/0 0/0 .data            cc_cyl_src$7667 */
#pragma push
#pragma force_active on
static dCcD_SrcCyl cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8000000, 0x3}, 0x0}}, // mObj
        {dCcD_SE_13, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        50.0f, // mRadius
        300.0f // mHeight
    } // mCyl
};
#pragma pop

/* 80757CC0-80757D00 00021C 0040+00 0/1 0/0 0/0 .data            at_sph_src$7668 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0xd}, {0xd8fbfdff, 0x43}, 0x15}}, // mObj
        {dCcD_SE_METAL, 0x0, 0x1, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x6}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 30.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80757D00-80757D20 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_PO_Method */
static actor_method_class l_daE_PO_Method = {
    (process_method_func)daE_PO_Create__FP10fopAc_ac_c,
    (process_method_func)daE_PO_Delete__FP10e_po_class,
    (process_method_func)daE_PO_Execute__FP10e_po_class,
    (process_method_func)daE_PO_IsDelete__FP10e_po_class,
    (process_method_func)daE_PO_Draw__FP10e_po_class,
};

/* 80757D20-80757D50 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_PO */
extern actor_process_profile_definition g_profile_E_PO = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_PO,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_po_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  162,                    // mPriority
  &l_daE_PO_Method,       // sub_method
  0x00044100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80757D50-80757D5C 0002AC 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80757D5C-80757D68 0002B8 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80757D68-80757D74 0002C4 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80757D74-80757D98 0002D0 0024+00 2/2 0/0 0/0 .data            __vt__18dPa_levelEcallBack */
SECTION_DATA extern void* __vt__18dPa_levelEcallBack[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18dPa_levelEcallBackFv,
    (void*)execute__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)draw__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)NULL,
    (void*)cleanup__18dPa_levelEcallBackFv,
};

/* 80757D98-80757DB4 0002F4 001C+00 1/1 0/0 0/0 .data            __vt__18JPAEmitterCallBack */
SECTION_DATA extern void* __vt__18JPAEmitterCallBack[7] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)execute__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)draw__18JPAEmitterCallBackFP14JPABaseEmitter,
    (void*)drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter,
};

/* 80757DB4-80757DC0 000310 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80757DC0-80757DCC 00031C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80757DCC-80757DD8 000328 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80757DD8-80757DFC 000334 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80756E74,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80756E6C,
};

/* 80757DFC-80757E08 000358 000C+00 2/2 0/0 0/0 .data            __vt__12daE_PO_HIO_c */
SECTION_DATA extern void* __vt__12daE_PO_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_PO_HIO_cFv,
};

/* 8074C54C-8074C5EC 0000EC 00A0+00 1/1 0/0 0/0 .text            __ct__12daE_PO_HIO_cFv */
daE_PO_HIO_c::daE_PO_HIO_c() {
    // NONMATCHING
}

/* 8074C5EC-8074C660 00018C 0074+00 13/13 0/0 0/0 .text            mArg0Check__FP10e_po_classs */
static void mArg0Check(e_po_class* param_0, s16 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8075773C-80757740 000040 0004+00 1/2 0/0 0/0 .rodata          @3974 */
SECTION_RODATA static f32 const lit_3974 = -1.0f;
COMPILER_STRIP_GATE(0x8075773C, &lit_3974);

/* 80757A88-80757A88 00038C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80757A88 = "E_PO";
#pragma pop

/* 8074C660-8074C70C 000200 00AC+00 12/12 0/0 0/0 .text            anm_init__FP10e_po_classifUcf */
static void anm_init(e_po_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 8074C70C-8074C858 0002AC 014C+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757740-80757744 000044 0004+00 0/3 0/0 0/0 .rodata          @4111 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4111 = 45.0f;
COMPILER_STRIP_GATE(0x80757740, &lit_4111);
#pragma pop

/* 80757744-80757748 000048 0004+00 0/3 0/0 0/0 .rodata          @4112 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4112 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80757744, &lit_4112);
#pragma pop

/* 80757748-8075774C 00004C 0004+00 0/3 0/0 0/0 .rodata          @4113 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4113 = 4.0f;
COMPILER_STRIP_GATE(0x80757748, &lit_4113);
#pragma pop

/* 80757E10-80757E14 000008 0001+03 3/3 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80757E14-80757E18 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80757E18-80757E1C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80757E1C-80757E20 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80757E20-80757E24 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80757E24-80757E28 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80757E28-80757E2C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80757E2C-80757E30 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80757E30-80757E34 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80757E34-80757E38 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80757E38-80757E3C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80757E3C-80757E40 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80757E40-80757E44 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80757E44-80757E48 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80757E48-80757E4C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80757E4C-80757E50 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 80757E4C 0001+00 data_80757E4C @1009 */
/* 80757E4D 0003+00 data_80757E4D None */
static u8 struct_80757E4C[4];

/* 80757E50-80757E5C 000048 000C+00 1/1 0/0 0/0 .bss             @3933 */
static u8 lit_3933[12];

/* 80757E5C-80757E98 000054 003C+00 9/11 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[60];

/* 80757E98-80757E9C -00001 0004+00 0/1 0/0 0/0 .bss             None */
#pragma push
#pragma force_active on
/* 80757E98 0002+00 data_80757E98 mRollCount */
/* 80757E9A 0002+00 data_80757E9A mRollPlus */
static u8 struct_80757E98[4];
#pragma pop

/* 80757E9C-80757EA0 -00001 0004+00 1/3 0/0 0/0 .bss             None */
/* 80757E9C 0002+00 data_80757E9C mRollDemoFlag */
/* 80757E9E 0002+00 data_80757E9E mHollDemoFlag */
static u8 struct_80757E9C[4];

/* 8074C858-8074CCCC 0003F8 0474+00 1/0 0/0 0/0 .text            daE_PO_Draw__FP10e_po_class */
static void daE_PO_Draw(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8075774C-80757750 000050 0004+00 0/9 0/0 0/0 .rodata          @4262 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4262 = 10.0f;
COMPILER_STRIP_GATE(0x8075774C, &lit_4262);
#pragma pop

/* 80757750-80757754 000054 0004+00 0/6 0/0 0/0 .rodata          @4263 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4263 = 0.5f;
COMPILER_STRIP_GATE(0x80757750, &lit_4263);
#pragma pop

/* 80757754-80757758 000058 0004+00 0/1 0/0 0/0 .rodata          @4264 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4264 = 1.5f;
COMPILER_STRIP_GATE(0x80757754, &lit_4264);
#pragma pop

/* 80757758-8075775C 00005C 0004+00 0/4 0/0 0/0 .rodata          @4265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4265 = 250.0f;
COMPILER_STRIP_GATE(0x80757758, &lit_4265);
#pragma pop

/* 8075775C-80757760 000060 0004+00 0/5 0/0 0/0 .rodata          @4266 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4266 = 200.0f;
COMPILER_STRIP_GATE(0x8075775C, &lit_4266);
#pragma pop

/* 8074CCCC-8074D16C 00086C 04A0+00 3/3 0/0 0/0 .text            e_po_opening__FP10e_po_class */
static void e_po_opening(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757760-80757764 000064 0004+00 0/6 0/0 0/0 .rodata          @4297 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4297 = 3.0f;
COMPILER_STRIP_GATE(0x80757760, &lit_4297);
#pragma pop

/* 80757764-80757768 000068 0004+00 0/5 0/0 0/0 .rodata          @4298 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4298 = 50.0f;
COMPILER_STRIP_GATE(0x80757764, &lit_4298);
#pragma pop

/* 8074D16C-8074D338 000D0C 01CC+00 1/1 0/0 0/0 .text            e_po_wait__FP10e_po_class */
static void e_po_wait(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757768-8075776C 00006C 0004+00 0/2 0/0 0/0 .rodata          @4328 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4328 = 8.0f;
COMPILER_STRIP_GATE(0x80757768, &lit_4328);
#pragma pop

/* 8074D338-8074D500 000ED8 01C8+00 1/1 0/0 0/0 .text            e_po_avoid__FP10e_po_class */
static void e_po_avoid(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8075776C-80757770 000070 0004+00 0/1 0/0 0/0 .rodata          @4521 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4521 = 7000.0f;
COMPILER_STRIP_GATE(0x8075776C, &lit_4521);
#pragma pop

/* 80757770-80757774 000074 0004+00 0/5 0/0 0/0 .rodata          @4522 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4522 = 20.0f;
COMPILER_STRIP_GATE(0x80757770, &lit_4522);
#pragma pop

/* 80757774-80757778 000078 0004+00 0/3 0/0 0/0 .rodata          @4523 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4523 = 30.0f;
COMPILER_STRIP_GATE(0x80757774, &lit_4523);
#pragma pop

/* 80757778-8075777C 00007C 0004+00 0/3 0/0 0/0 .rodata          @4524 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4524 = 5.0f;
COMPILER_STRIP_GATE(0x80757778, &lit_4524);
#pragma pop

/* 8075777C-80757780 000080 0004+00 0/2 0/0 0/0 .rodata          @4525 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4525 = -5.0f;
COMPILER_STRIP_GATE(0x8075777C, &lit_4525);
#pragma pop

/* 80757780-80757784 000084 0004+00 0/2 0/0 0/0 .rodata          @4526 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4526 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80757780, &lit_4526);
#pragma pop

/* 8074D500-8074DC40 0010A0 0740+00 1/1 0/0 0/0 .text            e_po_search__FP10e_po_class */
static void e_po_search(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757784-80757788 000088 0004+00 0/4 0/0 0/0 .rodata          @4632 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4632 = 65536.0f;
COMPILER_STRIP_GATE(0x80757784, &lit_4632);
#pragma pop

/* 80757788-8075778C 00008C 0004+00 0/3 0/0 0/0 .rodata          @4633 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4633 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80757788, &lit_4633);
#pragma pop

/* 8074DC40-8074E168 0017E0 0528+00 1/1 0/0 0/0 .text            e_po_attack__FP10e_po_class */
static void e_po_attack(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8075778C-80757790 000090 0004+00 0/3 0/0 0/0 .rodata          @4720 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4720 = -20.0f;
COMPILER_STRIP_GATE(0x8075778C, &lit_4720);
#pragma pop

/* 8074E168-8074E4EC 001D08 0384+00 1/1 0/0 0/0 .text            damage_check__FP10e_po_class */
static void damage_check(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757790-80757794 000094 0004+00 0/4 0/0 0/0 .rodata          @4756 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4756 = 2.0f;
COMPILER_STRIP_GATE(0x80757790, &lit_4756);
#pragma pop

/* 8074E4EC-8074E694 00208C 01A8+00 1/1 0/0 0/0 .text            e_po_damage__FP10e_po_class */
static void e_po_damage(e_po_class* param_0) {
    // NONMATCHING
}

/* 8074E694-8074EA6C 002234 03D8+00 1/1 0/0 0/0 .text            e_po_wolfbite__FP10e_po_class */
static void e_po_wolfbite(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757A88-80757A88 00038C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80757A8D = "DEFAULT_GETITEM";
#pragma pop

/* 8074EA6C-807501B0 00260C 1744+00 2/1 0/0 0/0 .text            e_po_dead__FP10e_po_class */
static void e_po_dead(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757794-80757798 000098 0004+00 0/4 0/0 0/0 .rodata          @5627 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5627 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80757794, &lit_5627);
#pragma pop

/* 807501B0-8075030C 003D50 015C+00 2/2 0/0 0/0 .text            e_rollingMove__FP10e_po_classsff */
static void e_rollingMove(e_po_class* param_0, s16 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757798-8075779C 00009C 0004+00 0/2 0/0 0/0 .rodata          @5628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5628 = 70.0f;
COMPILER_STRIP_GATE(0x80757798, &lit_5628);
#pragma pop

/* 8075779C-807577A0 0000A0 0004+00 0/2 0/0 0/0 .rodata          @5629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5629 = 60.0f;
COMPILER_STRIP_GATE(0x8075779C, &lit_5629);
#pragma pop

/* 807577A0-807577A4 0000A4 0004+00 0/1 0/0 0/0 .rodata          @5630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5630 = -490.0f;
COMPILER_STRIP_GATE(0x807577A0, &lit_5630);
#pragma pop

/* 807577A4-807577A8 0000A8 0004+00 0/0 0/0 0/0 .rodata          @5631 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5631 = 1526.0f;
COMPILER_STRIP_GATE(0x807577A4, &lit_5631);
#pragma pop

/* 807577A8-807577AC 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5632 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5632 = -1590.0f;
COMPILER_STRIP_GATE(0x807577A8, &lit_5632);
#pragma pop

/* 807577AC-807577B0 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5633 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5633 = 6.0f;
COMPILER_STRIP_GATE(0x807577AC, &lit_5633);
#pragma pop

/* 807577B0-807577B4 0000B4 0004+00 0/1 0/0 0/0 .rodata          @5634 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5634 = 800.0f;
COMPILER_STRIP_GATE(0x807577B0, &lit_5634);
#pragma pop

/* 807577B4-807577B8 0000B8 0004+00 0/1 0/0 0/0 .rodata          @5899 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5899 = -4400.0f;
COMPILER_STRIP_GATE(0x807577B4, &lit_5899);
#pragma pop

/* 807577B8-807577BC 0000BC 0004+00 0/2 0/0 0/0 .rodata          @5900 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5900 = 4000.0f;
COMPILER_STRIP_GATE(0x807577B8, &lit_5900);
#pragma pop

/* 8075030C-80750E88 003EAC 0B7C+00 2/1 0/0 0/0 .text            e_po_limbering__FP10e_po_class */
static void e_po_limbering(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807577BC-807577C0 0000C0 0004+00 0/2 0/0 0/0 .rodata          @5901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5901 = 400.0f;
COMPILER_STRIP_GATE(0x807577BC, &lit_5901);
#pragma pop

/* 807577C0-807577C4 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5902 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5902 = 600.0f;
COMPILER_STRIP_GATE(0x807577C0, &lit_5902);
#pragma pop

/* 80750E88-80751408 004A28 0580+00 1/1 0/0 0/0 .text            e_po_roll_move__FP10e_po_class */
static void e_po_roll_move(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807577C4-807577C8 0000C8 0004+00 0/1 0/0 0/0 .rodata          @6814 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6814 = -13.0f;
COMPILER_STRIP_GATE(0x807577C4, &lit_6814);
#pragma pop

/* 807577C8-807577CC 0000CC 0004+00 0/1 0/0 0/0 .rodata          @6815 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6815 = 143.0f;
COMPILER_STRIP_GATE(0x807577C8, &lit_6815);
#pragma pop

/* 807577CC-807577D0 0000D0 0004+00 0/1 0/0 0/0 .rodata          @6816 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6816 = 344.0f;
COMPILER_STRIP_GATE(0x807577CC, &lit_6816);
#pragma pop

/* 807577D0-807577D4 0000D4 0004+00 0/1 0/0 0/0 .rodata          @6817 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6817 = 48.0f;
COMPILER_STRIP_GATE(0x807577D0, &lit_6817);
#pragma pop

/* 807577D4-807577D8 0000D8 0004+00 0/1 0/0 0/0 .rodata          @6818 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6818 = 631.0f;
COMPILER_STRIP_GATE(0x807577D4, &lit_6818);
#pragma pop

/* 807577D8-807577DC 0000DC 0004+00 0/1 0/0 0/0 .rodata          @6819 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6819 = -2300.0f;
COMPILER_STRIP_GATE(0x807577D8, &lit_6819);
#pragma pop

/* 807577DC-807577E0 0000E0 0004+00 0/1 0/0 0/0 .rodata          @6820 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6820 = -697.0f;
COMPILER_STRIP_GATE(0x807577DC, &lit_6820);
#pragma pop

/* 807577E0-807577E4 0000E4 0004+00 0/1 0/0 0/0 .rodata          @6821 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6821 = 515.0f;
COMPILER_STRIP_GATE(0x807577E0, &lit_6821);
#pragma pop

/* 807577E4-807577E8 0000E8 0004+00 0/1 0/0 0/0 .rodata          @6822 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6822 = -1640.0f;
COMPILER_STRIP_GATE(0x807577E4, &lit_6822);
#pragma pop

/* 807577E8-807577EC 0000EC 0004+00 0/1 0/0 0/0 .rodata          @6823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6823 = -645.0f;
COMPILER_STRIP_GATE(0x807577E8, &lit_6823);
#pragma pop

/* 807577EC-807577F0 0000F0 0004+00 0/1 0/0 0/0 .rodata          @6824 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6824 = 640.0f;
COMPILER_STRIP_GATE(0x807577EC, &lit_6824);
#pragma pop

/* 807577F0-807577F4 0000F4 0004+00 0/1 0/0 0/0 .rodata          @6825 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6825 = -1900.0f;
COMPILER_STRIP_GATE(0x807577F0, &lit_6825);
#pragma pop

/* 807577F4-807577F8 0000F8 0004+00 0/1 0/0 0/0 .rodata          @6826 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6826 = 778.0f;
COMPILER_STRIP_GATE(0x807577F4, &lit_6826);
#pragma pop

/* 807577F8-807577FC 0000FC 0004+00 0/1 0/0 0/0 .rodata          @6827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6827 = 496.0f;
COMPILER_STRIP_GATE(0x807577F8, &lit_6827);
#pragma pop

/* 807577FC-80757800 000100 0004+00 0/1 0/0 0/0 .rodata          @6828 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6828 = -1619.0f;
COMPILER_STRIP_GATE(0x807577FC, &lit_6828);
#pragma pop

/* 80757800-80757804 000104 0004+00 0/1 0/0 0/0 .rodata          @6829 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6829 = -35.0f;
COMPILER_STRIP_GATE(0x80757800, &lit_6829);
#pragma pop

/* 80757804-80757808 000108 0004+00 0/1 0/0 0/0 .rodata          @6830 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6830 = 241.0f;
COMPILER_STRIP_GATE(0x80757804, &lit_6830);
#pragma pop

/* 80757808-8075780C 00010C 0004+00 0/1 0/0 0/0 .rodata          @6831 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6831 = -1223.0f;
COMPILER_STRIP_GATE(0x80757808, &lit_6831);
#pragma pop

/* 8075780C-80757810 000110 0004+00 0/1 0/0 0/0 .rodata          @6832 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6832 = 635.0f;
COMPILER_STRIP_GATE(0x8075780C, &lit_6832);
#pragma pop

/* 80757810-80757814 000114 0004+00 0/1 0/0 0/0 .rodata          @6833 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6833 = -2360.0f;
COMPILER_STRIP_GATE(0x80757810, &lit_6833);
#pragma pop

/* 80757814-80757818 000118 0004+00 0/1 0/0 0/0 .rodata          @6834 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6834 = -32.0f;
COMPILER_STRIP_GATE(0x80757814, &lit_6834);
#pragma pop

/* 80757818-8075781C 00011C 0004+00 0/1 0/0 0/0 .rodata          @6835 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6835 = 177.0f;
COMPILER_STRIP_GATE(0x80757818, &lit_6835);
#pragma pop

/* 8075781C-80757820 000120 0004+00 0/1 0/0 0/0 .rodata          @6836 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6836 = -846.0f;
COMPILER_STRIP_GATE(0x8075781C, &lit_6836);
#pragma pop

/* 80757820-80757824 000124 0004+00 0/1 0/0 0/0 .rodata          @6837 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6837 = 40.0f;
COMPILER_STRIP_GATE(0x80757820, &lit_6837);
#pragma pop

/* 80757824-80757828 000128 0004+00 0/1 0/0 0/0 .rodata          @6838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6838 = 740.0f;
COMPILER_STRIP_GATE(0x80757824, &lit_6838);
#pragma pop

/* 80757828-8075782C 00012C 0004+00 0/1 0/0 0/0 .rodata          @6839 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6839 = -2850.0f;
COMPILER_STRIP_GATE(0x80757828, &lit_6839);
#pragma pop

/* 8075782C-80757830 000130 0004+00 0/1 0/0 0/0 .rodata          @6840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6840 = 39.0f;
COMPILER_STRIP_GATE(0x8075782C, &lit_6840);
#pragma pop

/* 80757830-80757834 000134 0004+00 0/1 0/0 0/0 .rodata          @6841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6841 = -577.0f;
COMPILER_STRIP_GATE(0x80757830, &lit_6841);
#pragma pop

/* 80757834-80757838 000138 0004+00 0/2 0/0 0/0 .rodata          @6842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6842 = -45.0f;
COMPILER_STRIP_GATE(0x80757834, &lit_6842);
#pragma pop

/* 80757838-8075783C 00013C 0004+00 0/1 0/0 0/0 .rodata          @6843 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6843 = 197.0f;
COMPILER_STRIP_GATE(0x80757838, &lit_6843);
#pragma pop

/* 8075783C-80757840 000140 0004+00 0/1 0/0 0/0 .rodata          @6844 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6844 = 1620.0f;
COMPILER_STRIP_GATE(0x8075783C, &lit_6844);
#pragma pop

/* 80757840-80757844 000144 0004+00 0/1 0/0 0/0 .rodata          @6845 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6845 = 1630.0f;
COMPILER_STRIP_GATE(0x80757840, &lit_6845);
#pragma pop

/* 80757844-80757848 000148 0004+00 0/1 0/0 0/0 .rodata          @6846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6846 = 450.0f;
COMPILER_STRIP_GATE(0x80757844, &lit_6846);
#pragma pop

/* 80757848-8075784C 00014C 0004+00 0/1 0/0 0/0 .rodata          @6847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6847 = 1575.0f;
COMPILER_STRIP_GATE(0x80757848, &lit_6847);
#pragma pop

/* 8075784C-80757850 000150 0004+00 0/1 0/0 0/0 .rodata          @6848 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6848 = 160.0f;
COMPILER_STRIP_GATE(0x8075784C, &lit_6848);
#pragma pop

/* 80757850-80757854 000154 0004+00 0/1 0/0 0/0 .rodata          @6849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6849 = -420.0f;
COMPILER_STRIP_GATE(0x80757850, &lit_6849);
#pragma pop

/* 80757854-80757858 000158 0004+00 0/1 0/0 0/0 .rodata          @6850 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6850 = -715.0f;
COMPILER_STRIP_GATE(0x80757854, &lit_6850);
#pragma pop

/* 80757858-8075785C 00015C 0004+00 0/1 0/0 0/0 .rodata          @6851 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6851 = 1350.0f;
COMPILER_STRIP_GATE(0x80757858, &lit_6851);
#pragma pop

/* 8075785C-80757860 000160 0004+00 0/1 0/0 0/0 .rodata          @6852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6852 = 90.0f;
COMPILER_STRIP_GATE(0x8075785C, &lit_6852);
#pragma pop

/* 80757860-80757864 000164 0004+00 0/1 0/0 0/0 .rodata          @6853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6853 = -480.0f;
COMPILER_STRIP_GATE(0x80757860, &lit_6853);
#pragma pop

/* 80757864-80757868 000168 0004+00 0/1 0/0 0/0 .rodata          @6854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6854 = -30.0f;
COMPILER_STRIP_GATE(0x80757864, &lit_6854);
#pragma pop

/* 80757868-8075786C 00016C 0004+00 0/1 0/0 0/0 .rodata          @6855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6855 = 1970.0f;
COMPILER_STRIP_GATE(0x80757868, &lit_6855);
#pragma pop

/* 8075786C-80757870 000170 0004+00 0/1 0/0 0/0 .rodata          @6856 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6856 = -1090.0f;
COMPILER_STRIP_GATE(0x8075786C, &lit_6856);
#pragma pop

/* 80757870-80757874 000174 0004+00 0/1 0/0 0/0 .rodata          @6857 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6857 = -74.0f;
COMPILER_STRIP_GATE(0x80757870, &lit_6857);
#pragma pop

/* 80757874-80757878 000178 0004+00 0/1 0/0 0/0 .rodata          @6858 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6858 = 684.0f;
COMPILER_STRIP_GATE(0x80757874, &lit_6858);
#pragma pop

/* 80757878-8075787C 00017C 0004+00 0/1 0/0 0/0 .rodata          @6859 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6859 = -1095.0f;
COMPILER_STRIP_GATE(0x80757878, &lit_6859);
#pragma pop

/* 8075787C-80757880 000180 0004+00 0/1 0/0 0/0 .rodata          @6860 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6860 = -31.0f;
COMPILER_STRIP_GATE(0x8075787C, &lit_6860);
#pragma pop

/* 80757880-80757884 000184 0004+00 0/1 0/0 0/0 .rodata          @6861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6861 = 846.0f;
COMPILER_STRIP_GATE(0x80757880, &lit_6861);
#pragma pop

/* 80757884-80757888 000188 0004+00 0/1 0/0 0/0 .rodata          @6862 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6862 = -2029.0f;
COMPILER_STRIP_GATE(0x80757884, &lit_6862);
#pragma pop

/* 80757888-8075788C 00018C 0004+00 0/1 0/0 0/0 .rodata          @6863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6863 = -10.0f;
COMPILER_STRIP_GATE(0x80757888, &lit_6863);
#pragma pop

/* 8075788C-80757890 000190 0004+00 0/1 0/0 0/0 .rodata          @6864 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6864 = 165.0f;
COMPILER_STRIP_GATE(0x8075788C, &lit_6864);
#pragma pop

/* 80757890-80757894 000194 0004+00 0/1 0/0 0/0 .rodata          @6865 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6865 = 690.0f;
COMPILER_STRIP_GATE(0x80757890, &lit_6865);
#pragma pop

/* 80757894-80757898 000198 0004+00 0/1 0/0 0/0 .rodata          @6866 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6866 = 53.0f;
COMPILER_STRIP_GATE(0x80757894, &lit_6866);
#pragma pop

/* 80757898-8075789C 00019C 0004+00 0/1 0/0 0/0 .rodata          @6867 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6867 = 563.0f;
COMPILER_STRIP_GATE(0x80757898, &lit_6867);
#pragma pop

/* 8075789C-807578A0 0001A0 0004+00 0/1 0/0 0/0 .rodata          @6868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6868 = -1971.0f;
COMPILER_STRIP_GATE(0x8075789C, &lit_6868);
#pragma pop

/* 807578A0-807578A4 0001A4 0004+00 0/1 0/0 0/0 .rodata          @6869 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6869 = -942.0f;
COMPILER_STRIP_GATE(0x807578A0, &lit_6869);
#pragma pop

/* 807578A4-807578A8 0001A8 0004+00 0/1 0/0 0/0 .rodata          @6870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6870 = 433.0f;
COMPILER_STRIP_GATE(0x807578A4, &lit_6870);
#pragma pop

/* 807578A8-807578AC 0001AC 0004+00 0/1 0/0 0/0 .rodata          @6871 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6871 = -1403.0f;
COMPILER_STRIP_GATE(0x807578A8, &lit_6871);
#pragma pop

/* 807578AC-807578B0 0001B0 0004+00 0/1 0/0 0/0 .rodata          @6872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6872 = -590.0f;
COMPILER_STRIP_GATE(0x807578AC, &lit_6872);
#pragma pop

/* 807578B0-807578B4 0001B4 0004+00 0/1 0/0 0/0 .rodata          @6873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6873 = 715.0f;
COMPILER_STRIP_GATE(0x807578B0, &lit_6873);
#pragma pop

/* 807578B4-807578B8 0001B8 0004+00 0/1 0/0 0/0 .rodata          @6874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6874 = -1560.0f;
COMPILER_STRIP_GATE(0x807578B4, &lit_6874);
#pragma pop

/* 807578B8-807578BC 0001BC 0004+00 0/1 0/0 0/0 .rodata          @6875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6875 = 1030.0f;
COMPILER_STRIP_GATE(0x807578B8, &lit_6875);
#pragma pop

/* 807578BC-807578C0 0001C0 0004+00 0/1 0/0 0/0 .rodata          @6876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6876 = 410.0f;
COMPILER_STRIP_GATE(0x807578BC, &lit_6876);
#pragma pop

/* 807578C0-807578C4 0001C4 0004+00 0/1 0/0 0/0 .rodata          @6877 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6877 = -1400.0f;
COMPILER_STRIP_GATE(0x807578C0, &lit_6877);
#pragma pop

/* 807578C4-807578C8 0001C8 0004+00 0/1 0/0 0/0 .rodata          @6878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6878 = 84.0f;
COMPILER_STRIP_GATE(0x807578C4, &lit_6878);
#pragma pop

/* 807578C8-807578CC 0001CC 0004+00 0/1 0/0 0/0 .rodata          @6879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6879 = -851.0f;
COMPILER_STRIP_GATE(0x807578C8, &lit_6879);
#pragma pop

/* 807578CC-807578D0 0001D0 0004+00 0/1 0/0 0/0 .rodata          @6880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6880 = 520.0f;
COMPILER_STRIP_GATE(0x807578CC, &lit_6880);
#pragma pop

/* 807578D0-807578D4 0001D4 0004+00 0/1 0/0 0/0 .rodata          @6881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6881 = -1990.0f;
COMPILER_STRIP_GATE(0x807578D0, &lit_6881);
#pragma pop

/* 807578D4-807578D8 0001D8 0004+00 0/1 0/0 0/0 .rodata          @6882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6882 = -155.0f;
COMPILER_STRIP_GATE(0x807578D4, &lit_6882);
#pragma pop

/* 807578D8-807578DC 0001DC 0004+00 0/1 0/0 0/0 .rodata          @6883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6883 = 105.0f;
COMPILER_STRIP_GATE(0x807578D8, &lit_6883);
#pragma pop

/* 807578DC-807578E0 0001E0 0004+00 0/1 0/0 0/0 .rodata          @6884 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6884 = -262.0f;
COMPILER_STRIP_GATE(0x807578DC, &lit_6884);
#pragma pop

/* 807578E0-807578E4 0001E4 0004+00 0/1 0/0 0/0 .rodata          @6885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6885 = 670.0f;
COMPILER_STRIP_GATE(0x807578E0, &lit_6885);
#pragma pop

/* 807578E4-807578E8 0001E8 0004+00 0/1 0/0 0/0 .rodata          @6886 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6886 = -2520.0f;
COMPILER_STRIP_GATE(0x807578E4, &lit_6886);
#pragma pop

/* 807578E8-807578EC 0001EC 0004+00 0/1 0/0 0/0 .rodata          @6887 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6887 = -17.0f;
COMPILER_STRIP_GATE(0x807578E8, &lit_6887);
#pragma pop

/* 807578EC-807578F0 0001F0 0004+00 0/1 0/0 0/0 .rodata          @6888 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6888 = 256.0f;
COMPILER_STRIP_GATE(0x807578EC, &lit_6888);
#pragma pop

/* 807578F0-807578F4 0001F4 0004+00 0/1 0/0 0/0 .rodata          @6889 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6889 = -236.0f;
COMPILER_STRIP_GATE(0x807578F0, &lit_6889);
#pragma pop

/* 807578F4-807578F8 0001F8 0004+00 0/1 0/0 0/0 .rodata          @6890 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6890 = -255.0f;
COMPILER_STRIP_GATE(0x807578F4, &lit_6890);
#pragma pop

/* 807578F8-807578FC 0001FC 0004+00 0/1 0/0 0/0 .rodata          @6891 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6891 = 58.0f;
COMPILER_STRIP_GATE(0x807578F8, &lit_6891);
#pragma pop

/* 807578FC-80757900 000200 0004+00 0/1 0/0 0/0 .rodata          @6892 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6892 = 1382.0f;
COMPILER_STRIP_GATE(0x807578FC, &lit_6892);
#pragma pop

/* 80757900-80757904 000204 0004+00 0/1 0/0 0/0 .rodata          @6893 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6893 = 1365.0f;
COMPILER_STRIP_GATE(0x80757900, &lit_6893);
#pragma pop

/* 80757904-80757908 000208 0004+00 0/1 0/0 0/0 .rodata          @6894 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6894 = 665.0f;
COMPILER_STRIP_GATE(0x80757904, &lit_6894);
#pragma pop

/* 80757908-8075790C 00020C 0004+00 0/1 0/0 0/0 .rodata          @6895 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6895 = 1440.0f;
COMPILER_STRIP_GATE(0x80757908, &lit_6895);
#pragma pop

/* 8075790C-80757910 000210 0004+00 0/1 0/0 0/0 .rodata          @6896 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6896 = 175.0f;
COMPILER_STRIP_GATE(0x8075790C, &lit_6896);
#pragma pop

/* 80757910-80757914 000214 0004+00 0/1 0/0 0/0 .rodata          @6897 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6897 = -95.0f;
COMPILER_STRIP_GATE(0x80757910, &lit_6897);
#pragma pop

/* 80757914-80757918 000218 0004+00 0/1 0/0 0/0 .rodata          @6898 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6898 = -475.0f;
COMPILER_STRIP_GATE(0x80757914, &lit_6898);
#pragma pop

/* 80757918-8075791C 00021C 0004+00 0/1 0/0 0/0 .rodata          @6899 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6899 = 1415.0f;
COMPILER_STRIP_GATE(0x80757918, &lit_6899);
#pragma pop

/* 8075791C-80757920 000220 0004+00 0/1 0/0 0/0 .rodata          @6900 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6900 = 350.0f;
COMPILER_STRIP_GATE(0x8075791C, &lit_6900);
#pragma pop

/* 80757920-80757924 000224 0004+00 0/1 0/0 0/0 .rodata          @6901 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6901 = -750.0f;
COMPILER_STRIP_GATE(0x80757920, &lit_6901);
#pragma pop

/* 80757924-80757928 000228 0004+00 0/1 0/0 0/0 .rodata          @6902 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6902 = 2260.0f;
COMPILER_STRIP_GATE(0x80757924, &lit_6902);
#pragma pop

/* 80757928-8075792C 00022C 0004+00 0/1 0/0 0/0 .rodata          @6903 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6903 = -890.0f;
COMPILER_STRIP_GATE(0x80757928, &lit_6903);
#pragma pop

/* 8075792C-80757930 000230 0004+00 0/1 0/0 0/0 .rodata          @6904 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6904 = -94.0f;
COMPILER_STRIP_GATE(0x8075792C, &lit_6904);
#pragma pop

/* 80757930-80757934 000234 0004+00 0/1 0/0 0/0 .rodata          @6905 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6905 = 693.0f;
COMPILER_STRIP_GATE(0x80757930, &lit_6905);
#pragma pop

/* 80757934-80757938 000238 0004+00 0/1 0/0 0/0 .rodata          @6906 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6906 = -739.0f;
COMPILER_STRIP_GATE(0x80757934, &lit_6906);
#pragma pop

/* 80757938-8075793C 00023C 0004+00 0/1 0/0 0/0 .rodata          @6907 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6907 = -41.0f;
COMPILER_STRIP_GATE(0x80757938, &lit_6907);
#pragma pop

/* 8075793C-80757940 000240 0004+00 0/1 0/0 0/0 .rodata          @6908 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6908 = -1676.0f;
COMPILER_STRIP_GATE(0x8075793C, &lit_6908);
#pragma pop

/* 80757940-80757944 000244 0004+00 0/1 0/0 0/0 .rodata          @6909 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6909 = 110.0f;
COMPILER_STRIP_GATE(0x80757940, &lit_6909);
#pragma pop

/* 80757944-80757948 000248 0004+00 0/1 0/0 0/0 .rodata          @6910 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6910 = -3350.0f;
COMPILER_STRIP_GATE(0x80757944, &lit_6910);
#pragma pop

/* 80757948-8075794C 00024C 0004+00 0/1 0/0 0/0 .rodata          @6911 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6911 = 550.0f;
COMPILER_STRIP_GATE(0x80757948, &lit_6911);
#pragma pop

/* 8075794C-80757950 000250 0004+00 0/1 0/0 0/0 .rodata          @6912 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6912 = -2165.0f;
COMPILER_STRIP_GATE(0x8075794C, &lit_6912);
#pragma pop

/* 80757950-80757954 000254 0004+00 0/1 0/0 0/0 .rodata          @6913 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6913 = -726.0f;
COMPILER_STRIP_GATE(0x80757950, &lit_6913);
#pragma pop

/* 80757954-80757958 000258 0004+00 0/1 0/0 0/0 .rodata          @6914 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6914 = 540.0f;
COMPILER_STRIP_GATE(0x80757954, &lit_6914);
#pragma pop

/* 80757958-8075795C 00025C 0004+00 0/1 0/0 0/0 .rodata          @6915 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6915 = -2089.0f;
COMPILER_STRIP_GATE(0x80757958, &lit_6915);
#pragma pop

/* 8075795C-80757960 000260 0004+00 0/1 0/0 0/0 .rodata          @6916 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6916 = 653.0f;
COMPILER_STRIP_GATE(0x8075795C, &lit_6916);
#pragma pop

/* 80757960-80757964 000264 0004+00 0/1 0/0 0/0 .rodata          @6917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6917 = 770.0f;
COMPILER_STRIP_GATE(0x80757960, &lit_6917);
#pragma pop

/* 80757964-80757968 000268 0004+00 0/1 0/0 0/0 .rodata          @6918 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6918 = -2231.0f;
COMPILER_STRIP_GATE(0x80757964, &lit_6918);
#pragma pop

/* 80757968-8075796C 00026C 0004+00 0/1 0/0 0/0 .rodata          @6919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6919 = 725.0f;
COMPILER_STRIP_GATE(0x80757968, &lit_6919);
#pragma pop

/* 8075796C-80757970 000270 0004+00 0/1 0/0 0/0 .rodata          @6920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6920 = -1629.0f;
COMPILER_STRIP_GATE(0x8075796C, &lit_6920);
#pragma pop

/* 80757970-80757974 000274 0004+00 0/1 0/0 0/0 .rodata          @6921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6921 = -609.0f;
COMPILER_STRIP_GATE(0x80757970, &lit_6921);
#pragma pop

/* 80757974-80757978 000278 0004+00 0/1 0/0 0/0 .rodata          @6922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6922 = -2634.0f;
COMPILER_STRIP_GATE(0x80757974, &lit_6922);
#pragma pop

/* 80757978-8075797C 00027C 0004+00 0/1 0/0 0/0 .rodata          @6923 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6923 = -531.0f;
COMPILER_STRIP_GATE(0x80757978, &lit_6923);
#pragma pop

/* 8075797C-80757980 000280 0004+00 0/1 0/0 0/0 .rodata          @6924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6924 = -1834.0f;
COMPILER_STRIP_GATE(0x8075797C, &lit_6924);
#pragma pop

/* 80757980-80757984 000284 0004+00 0/1 0/0 0/0 .rodata          @6925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6925 = 458.0f;
COMPILER_STRIP_GATE(0x80757980, &lit_6925);
#pragma pop

/* 80757984-80757988 000288 0004+00 0/1 0/0 0/0 .rodata          @6926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6926 = 970.0f;
COMPILER_STRIP_GATE(0x80757984, &lit_6926);
#pragma pop

/* 80757988-8075798C 00028C 0004+00 0/1 0/0 0/0 .rodata          @6927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6927 = -2446.0f;
COMPILER_STRIP_GATE(0x80757988, &lit_6927);
#pragma pop

/* 8075798C-80757990 000290 0004+00 0/1 0/0 0/0 .rodata          @6928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6928 = 530.0f;
COMPILER_STRIP_GATE(0x8075798C, &lit_6928);
#pragma pop

/* 80757990-80757994 000294 0004+00 0/1 0/0 0/0 .rodata          @6929 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6929 = -1844.0f;
COMPILER_STRIP_GATE(0x80757990, &lit_6929);
#pragma pop

/* 80757994-80757998 000298 0004+00 0/1 0/0 0/0 .rodata          @6930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6930 = -469.0f;
COMPILER_STRIP_GATE(0x80757994, &lit_6930);
#pragma pop

/* 80757998-8075799C 00029C 0004+00 0/1 0/0 0/0 .rodata          @6931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6931 = -2409.0f;
COMPILER_STRIP_GATE(0x80757998, &lit_6931);
#pragma pop

/* 8075799C-807579A0 0002A0 0004+00 0/1 0/0 0/0 .rodata          @6932 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6932 = 1500.0f;
COMPILER_STRIP_GATE(0x8075799C, &lit_6932);
#pragma pop

/* 807579A0-807579A4 0002A4 0004+00 0/1 0/0 0/0 .rodata          @6933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6933 = 1645.0f;
COMPILER_STRIP_GATE(0x807579A0, &lit_6933);
#pragma pop

/* 807579A4-807579A8 0002A8 0004+00 0/1 0/0 0/0 .rodata          @6934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6934 = 430.0f;
COMPILER_STRIP_GATE(0x807579A4, &lit_6934);
#pragma pop

/* 807579A8-807579AC 0002AC 0004+00 0/1 0/0 0/0 .rodata          @6935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6935 = 1580.0f;
COMPILER_STRIP_GATE(0x807579A8, &lit_6935);
#pragma pop

/* 807579AC-807579B0 0002B0 0004+00 0/2 0/0 0/0 .rodata          @6936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6936 = 150.0f;
COMPILER_STRIP_GATE(0x807579AC, &lit_6936);
#pragma pop

/* 807579B0-807579B4 0002B4 0004+00 0/1 0/0 0/0 .rodata          @6937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6937 = -610.0f;
COMPILER_STRIP_GATE(0x807579B0, &lit_6937);
#pragma pop

/* 807579B4-807579B8 0002B8 0004+00 0/1 0/0 0/0 .rodata          @6938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6938 = -1550.0f;
COMPILER_STRIP_GATE(0x807579B4, &lit_6938);
#pragma pop

/* 807579B8-807579BC 0002BC 0004+00 0/1 0/0 0/0 .rodata          @6939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6939 = 1200.0f;
COMPILER_STRIP_GATE(0x807579B8, &lit_6939);
#pragma pop

/* 807579BC-807579C0 0002C0 0004+00 0/1 0/0 0/0 .rodata          @6940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6940 = -605.0f;
COMPILER_STRIP_GATE(0x807579BC, &lit_6940);
#pragma pop

/* 807579C0-807579C4 0002C4 0004+00 0/2 0/0 0/0 .rodata          @6941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6941 = 80.0f;
COMPILER_STRIP_GATE(0x807579C0, &lit_6941);
#pragma pop

/* 807579C4-807579C8 0002C8 0004+00 0/1 0/0 0/0 .rodata          @6942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6942 = 2100.0f;
COMPILER_STRIP_GATE(0x807579C4, &lit_6942);
#pragma pop

/* 807579C8-807579CC 0002CC 0004+00 0/1 0/0 0/0 .rodata          @6943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6943 = -200.0f;
COMPILER_STRIP_GATE(0x807579C8, &lit_6943);
#pragma pop

/* 807579CC-807579D0 0002D0 0004+00 0/1 0/0 0/0 .rodata          @6944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6944 = 1810.0f;
COMPILER_STRIP_GATE(0x807579CC, &lit_6944);
#pragma pop

/* 807579D0-807579D4 0002D4 0004+00 0/1 0/0 0/0 .rodata          @6945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6945 = -1800.0f;
COMPILER_STRIP_GATE(0x807579D0, &lit_6945);
#pragma pop

/* 807579D4-807579D8 0002D8 0004+00 0/1 0/0 0/0 .rodata          @6946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6946 = -626.0f;
COMPILER_STRIP_GATE(0x807579D4, &lit_6946);
#pragma pop

/* 807579D8-807579DC 0002DC 0004+00 0/1 0/0 0/0 .rodata          @6947 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6947 = 660.0f;
COMPILER_STRIP_GATE(0x807579D8, &lit_6947);
#pragma pop

/* 807579DC-807579E0 0002E0 0004+00 0/1 0/0 0/0 .rodata          @6948 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6948 = -1839.0f;
COMPILER_STRIP_GATE(0x807579DC, &lit_6948);
#pragma pop

/* 807579E0-807579E4 0002E4 0004+00 0/1 0/0 0/0 .rodata          @6949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6949 = 553.0f;
COMPILER_STRIP_GATE(0x807579E0, &lit_6949);
#pragma pop

/* 807579E4-807579E8 0002E8 0004+00 0/1 0/0 0/0 .rodata          @6950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6950 = 870.0f;
COMPILER_STRIP_GATE(0x807579E4, &lit_6950);
#pragma pop

/* 807579E8-807579EC 0002EC 0004+00 0/1 0/0 0/0 .rodata          @6951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6951 = -2426.0f;
COMPILER_STRIP_GATE(0x807579E8, &lit_6951);
#pragma pop

/* 807579EC-807579F0 0002F0 0004+00 0/1 0/0 0/0 .rodata          @6952 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6952 = 625.0f;
COMPILER_STRIP_GATE(0x807579EC, &lit_6952);
#pragma pop

/* 807579F0-807579F4 0002F4 0004+00 0/1 0/0 0/0 .rodata          @6953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6953 = -1849.0f;
COMPILER_STRIP_GATE(0x807579F0, &lit_6953);
#pragma pop

/* 807579F4-807579F8 0002F8 0004+00 0/1 0/0 0/0 .rodata          @6954 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6954 = -549.0f;
COMPILER_STRIP_GATE(0x807579F4, &lit_6954);
#pragma pop

/* 807579F8-807579FC 0002FC 0004+00 0/1 0/0 0/0 .rodata          @6955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6955 = -2424.0f;
COMPILER_STRIP_GATE(0x807579F8, &lit_6955);
#pragma pop

/* 807579FC-80757A00 000300 0004+00 0/1 0/0 0/0 .rodata          @6956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6956 = 555.0f;
COMPILER_STRIP_GATE(0x807579FC, &lit_6956);
#pragma pop

/* 80757A00-80757A04 000304 0004+00 0/2 0/0 0/0 .rodata          @6957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6957 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80757A00, &lit_6957);
#pragma pop

/* 80757A04-80757A08 000308 0004+00 0/1 0/0 0/0 .rodata          @6958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6958 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80757A04, &lit_6958);
#pragma pop

/* 80757A08-80757A0C 00030C 0004+00 0/1 0/0 0/0 .rodata          @6959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6959 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80757A08, &lit_6959);
#pragma pop

/* 80757A0C-80757A10 000310 0004+00 0/2 0/0 0/0 .rodata          @6960 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6960 = 500.0f;
COMPILER_STRIP_GATE(0x80757A0C, &lit_6960);
#pragma pop

/* 80757A10-80757A14 000314 0004+00 0/1 0/0 0/0 .rodata          @6961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6961 = -400.0f;
COMPILER_STRIP_GATE(0x80757A10, &lit_6961);
#pragma pop

/* 80757A14-80757A18 000318 0004+00 0/2 0/0 0/0 .rodata          @6962 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6962 = -600.0f;
COMPILER_STRIP_GATE(0x80757A14, &lit_6962);
#pragma pop

/* 80757A18-80757A1C 00031C 0004+00 0/1 0/0 0/0 .rodata          @6963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6963 = -470.0f;
COMPILER_STRIP_GATE(0x80757A18, &lit_6963);
#pragma pop

/* 80757A1C-80757A20 000320 0004+00 0/1 0/0 0/0 .rodata          @6964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6964 = 320.0f;
COMPILER_STRIP_GATE(0x80757A1C, &lit_6964);
#pragma pop

/* 80757A20-80757A24 000324 0004+00 0/1 0/0 0/0 .rodata          @6965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6965 = -128.0f;
COMPILER_STRIP_GATE(0x80757A20, &lit_6965);
#pragma pop

/* 80757A24-80757A28 000328 0004+00 0/2 0/0 0/0 .rodata          @6966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6966 = 55.0f;
COMPILER_STRIP_GATE(0x80757A24, &lit_6966);
#pragma pop

/* 80757A28-80757A2C 00032C 0004+00 0/1 0/0 0/0 .rodata          @6967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6967 = -601.0f;
COMPILER_STRIP_GATE(0x80757A28, &lit_6967);
#pragma pop

/* 80757A2C-80757A30 000330 0004+00 0/1 0/0 0/0 .rodata          @6968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6968 = 136.0f;
COMPILER_STRIP_GATE(0x80757A2C, &lit_6968);
#pragma pop

/* 80757A30-80757A34 000334 0004+00 0/1 0/0 0/0 .rodata          @6969 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6969 = -354.0f;
COMPILER_STRIP_GATE(0x80757A30, &lit_6969);
#pragma pop

/* 80757A34-80757A3C 000338 0004+04 0/1 0/0 0/0 .rodata          @6970 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6970[1 + 1 /* padding */] = {
    826.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80757A34, &lit_6970);
#pragma pop

/* 80757A3C-80757A44 000340 0008+00 0/2 0/0 0/0 .rodata          @6972 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_6972[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80757A3C, &lit_6972);
#pragma pop

/* 80757EA0-80757EB0 000098 000C+04 0/1 0/0 0/0 .bss             @6025 */
#pragma push
#pragma force_active on
static u8 lit_6025[12 + 4 /* padding */];
#pragma pop

/* 80757EB0-80757EBC 0000A8 000C+00 0/1 0/0 0/0 .bss             @6028 */
#pragma push
#pragma force_active on
static u8 lit_6028[12];
#pragma pop

/* 80757EBC-80757EC8 0000B4 000C+00 0/1 0/0 0/0 .bss             @6029 */
#pragma push
#pragma force_active on
static u8 lit_6029[12];
#pragma pop

/* 80757EC8-80757ED4 0000C0 000C+00 0/1 0/0 0/0 .bss             @6030 */
#pragma push
#pragma force_active on
static u8 lit_6030[12];
#pragma pop

/* 80757ED4-80757EE0 0000CC 000C+00 0/1 0/0 0/0 .bss             @6031 */
#pragma push
#pragma force_active on
static u8 lit_6031[12];
#pragma pop

/* 80757EE0-80757EEC 0000D8 000C+00 0/1 0/0 0/0 .bss             @6032 */
#pragma push
#pragma force_active on
static u8 lit_6032[12];
#pragma pop

/* 80757EEC-80757EF8 0000E4 000C+00 0/1 0/0 0/0 .bss             @6033 */
#pragma push
#pragma force_active on
static u8 lit_6033[12];
#pragma pop

/* 80757EF8-80757F04 0000F0 000C+00 0/1 0/0 0/0 .bss             @6034 */
#pragma push
#pragma force_active on
static u8 lit_6034[12];
#pragma pop

/* 80757F04-80757F10 0000FC 000C+00 0/1 0/0 0/0 .bss             @6035 */
#pragma push
#pragma force_active on
static u8 lit_6035[12];
#pragma pop

/* 80757F10-80757F1C 000108 000C+00 0/1 0/0 0/0 .bss             @6036 */
#pragma push
#pragma force_active on
static u8 lit_6036[12];
#pragma pop

/* 80757F1C-80757F28 000114 000C+00 0/1 0/0 0/0 .bss             @6037 */
#pragma push
#pragma force_active on
static u8 lit_6037[12];
#pragma pop

/* 80757F28-80757F34 000120 000C+00 0/1 0/0 0/0 .bss             @6038 */
#pragma push
#pragma force_active on
static u8 lit_6038[12];
#pragma pop

/* 80757F34-80757F40 00012C 000C+00 0/1 0/0 0/0 .bss             @6039 */
#pragma push
#pragma force_active on
static u8 lit_6039[12];
#pragma pop

/* 80757F40-80757F4C 000138 000C+00 0/1 0/0 0/0 .bss             @6040 */
#pragma push
#pragma force_active on
static u8 lit_6040[12];
#pragma pop

/* 80757F4C-80757F58 000144 000C+00 0/1 0/0 0/0 .bss             @6041 */
#pragma push
#pragma force_active on
static u8 lit_6041[12];
#pragma pop

/* 80757F58-80757F64 000150 000C+00 0/1 0/0 0/0 .bss             @6042 */
#pragma push
#pragma force_active on
static u8 lit_6042[12];
#pragma pop

/* 80757F64-80757F70 00015C 000C+00 0/1 0/0 0/0 .bss             @6043 */
#pragma push
#pragma force_active on
static u8 lit_6043[12];
#pragma pop

/* 80757F70-80757F7C 000168 000C+00 0/1 0/0 0/0 .bss             @6044 */
#pragma push
#pragma force_active on
static u8 lit_6044[12];
#pragma pop

/* 80757F7C-80758054 000174 00D8+00 0/1 0/0 0/0 .bss             mKcenterInit_dt$6024 */
#pragma push
#pragma force_active on
static u8 mKcenterInit_dt[216];
#pragma pop

/* 80758054-80758064 00024C 000C+04 0/1 0/0 0/0 .bss             @6046 */
#pragma push
#pragma force_active on
static u8 lit_6046[12 + 4 /* padding */];
#pragma pop

/* 80758064-80758070 00025C 000C+00 0/1 0/0 0/0 .bss             @6049 */
#pragma push
#pragma force_active on
static u8 lit_6049[12];
#pragma pop

/* 80758070-8075807C 000268 000C+00 0/1 0/0 0/0 .bss             @6050 */
#pragma push
#pragma force_active on
static u8 lit_6050[12];
#pragma pop

/* 8075807C-80758088 000274 000C+00 0/1 0/0 0/0 .bss             @6051 */
#pragma push
#pragma force_active on
static u8 lit_6051[12];
#pragma pop

/* 80758088-80758094 000280 000C+00 0/1 0/0 0/0 .bss             @6052 */
#pragma push
#pragma force_active on
static u8 lit_6052[12];
#pragma pop

/* 80758094-807580A0 00028C 000C+00 0/1 0/0 0/0 .bss             @6053 */
#pragma push
#pragma force_active on
static u8 lit_6053[12];
#pragma pop

/* 807580A0-807580AC 000298 000C+00 0/1 0/0 0/0 .bss             @6054 */
#pragma push
#pragma force_active on
static u8 lit_6054[12];
#pragma pop

/* 807580AC-807580B8 0002A4 000C+00 0/1 0/0 0/0 .bss             @6055 */
#pragma push
#pragma force_active on
static u8 lit_6055[12];
#pragma pop

/* 807580B8-807580C4 0002B0 000C+00 0/1 0/0 0/0 .bss             @6056 */
#pragma push
#pragma force_active on
static u8 lit_6056[12];
#pragma pop

/* 807580C4-807580D0 0002BC 000C+00 0/1 0/0 0/0 .bss             @6057 */
#pragma push
#pragma force_active on
static u8 lit_6057[12];
#pragma pop

/* 807580D0-807580DC 0002C8 000C+00 0/1 0/0 0/0 .bss             @6058 */
#pragma push
#pragma force_active on
static u8 lit_6058[12];
#pragma pop

/* 807580DC-807580E8 0002D4 000C+00 0/1 0/0 0/0 .bss             @6059 */
#pragma push
#pragma force_active on
static u8 lit_6059[12];
#pragma pop

/* 807580E8-807580F4 0002E0 000C+00 0/1 0/0 0/0 .bss             @6060 */
#pragma push
#pragma force_active on
static u8 lit_6060[12];
#pragma pop

/* 807580F4-80758100 0002EC 000C+00 0/1 0/0 0/0 .bss             @6061 */
#pragma push
#pragma force_active on
static u8 lit_6061[12];
#pragma pop

/* 80758100-8075810C 0002F8 000C+00 0/1 0/0 0/0 .bss             @6062 */
#pragma push
#pragma force_active on
static u8 lit_6062[12];
#pragma pop

/* 8075810C-80758118 000304 000C+00 0/1 0/0 0/0 .bss             @6063 */
#pragma push
#pragma force_active on
static u8 lit_6063[12];
#pragma pop

/* 80758118-80758124 000310 000C+00 0/1 0/0 0/0 .bss             @6064 */
#pragma push
#pragma force_active on
static u8 lit_6064[12];
#pragma pop

/* 80758124-80758130 00031C 000C+00 0/1 0/0 0/0 .bss             @6065 */
#pragma push
#pragma force_active on
static u8 lit_6065[12];
#pragma pop

/* 80758130-80758208 000328 00D8+00 0/1 0/0 0/0 .bss             mKeyeInit_dt$6045 */
#pragma push
#pragma force_active on
static u8 mKeyeInit_dt[216];
#pragma pop

/* 80758208-80758218 000400 000C+04 0/1 0/0 0/0 .bss             @6067 */
#pragma push
#pragma force_active on
static u8 lit_6067[12 + 4 /* padding */];
#pragma pop

/* 80758218-80758224 000410 000C+00 0/1 0/0 0/0 .bss             @6070 */
#pragma push
#pragma force_active on
static u8 lit_6070[12];
#pragma pop

/* 80758224-80758230 00041C 000C+00 0/1 0/0 0/0 .bss             @6071 */
#pragma push
#pragma force_active on
static u8 lit_6071[12];
#pragma pop

/* 80758230-8075823C 000428 000C+00 0/1 0/0 0/0 .bss             @6072 */
#pragma push
#pragma force_active on
static u8 lit_6072[12];
#pragma pop

/* 8075823C-80758248 000434 000C+00 0/1 0/0 0/0 .bss             @6073 */
#pragma push
#pragma force_active on
static u8 lit_6073[12];
#pragma pop

/* 80758248-80758254 000440 000C+00 0/1 0/0 0/0 .bss             @6074 */
#pragma push
#pragma force_active on
static u8 lit_6074[12];
#pragma pop

/* 80758254-80758260 00044C 000C+00 0/1 0/0 0/0 .bss             @6075 */
#pragma push
#pragma force_active on
static u8 lit_6075[12];
#pragma pop

/* 80758260-8075826C 000458 000C+00 0/1 0/0 0/0 .bss             @6076 */
#pragma push
#pragma force_active on
static u8 lit_6076[12];
#pragma pop

/* 8075826C-80758278 000464 000C+00 0/1 0/0 0/0 .bss             @6077 */
#pragma push
#pragma force_active on
static u8 lit_6077[12];
#pragma pop

/* 80758278-80758284 000470 000C+00 0/1 0/0 0/0 .bss             @6078 */
#pragma push
#pragma force_active on
static u8 lit_6078[12];
#pragma pop

/* 80758284-80758290 00047C 000C+00 0/1 0/0 0/0 .bss             @6079 */
#pragma push
#pragma force_active on
static u8 lit_6079[12];
#pragma pop

/* 80758290-8075829C 000488 000C+00 0/1 0/0 0/0 .bss             @6080 */
#pragma push
#pragma force_active on
static u8 lit_6080[12];
#pragma pop

/* 8075829C-807582A8 000494 000C+00 0/1 0/0 0/0 .bss             @6081 */
#pragma push
#pragma force_active on
static u8 lit_6081[12];
#pragma pop

/* 807582A8-807582B4 0004A0 000C+00 0/1 0/0 0/0 .bss             @6082 */
#pragma push
#pragma force_active on
static u8 lit_6082[12];
#pragma pop

/* 807582B4-807582C0 0004AC 000C+00 0/1 0/0 0/0 .bss             @6083 */
#pragma push
#pragma force_active on
static u8 lit_6083[12];
#pragma pop

/* 807582C0-807582CC 0004B8 000C+00 0/1 0/0 0/0 .bss             @6084 */
#pragma push
#pragma force_active on
static u8 lit_6084[12];
#pragma pop

/* 807582CC-807582D8 0004C4 000C+00 0/1 0/0 0/0 .bss             @6085 */
#pragma push
#pragma force_active on
static u8 lit_6085[12];
#pragma pop

/* 807582D8-807582E4 0004D0 000C+00 0/1 0/0 0/0 .bss             @6086 */
#pragma push
#pragma force_active on
static u8 lit_6086[12];
#pragma pop

/* 807582E4-807582F0 0004DC 000C+00 0/1 0/0 0/0 .bss             @6087 */
#pragma push
#pragma force_active on
static u8 lit_6087[12];
#pragma pop

/* 807582F0-807582FC 0004E8 000C+00 0/1 0/0 0/0 .bss             @6088 */
#pragma push
#pragma force_active on
static u8 lit_6088[12];
#pragma pop

/* 807582FC-80758308 0004F4 000C+00 0/1 0/0 0/0 .bss             @6089 */
#pragma push
#pragma force_active on
static u8 lit_6089[12];
#pragma pop

/* 80758308-80758314 000500 000C+00 0/1 0/0 0/0 .bss             @6090 */
#pragma push
#pragma force_active on
static u8 lit_6090[12];
#pragma pop

/* 80758314-8075841C 00050C 0108+00 0/1 0/0 0/0 .bss             mKPosInit_dt$6066 */
#pragma push
#pragma force_active on
static u8 mKPosInit_dt[264];
#pragma pop

/* 80751408-807549C0 004FA8 35B8+00 1/1 0/0 0/0 .text            e_po_holl_demo__FP10e_po_class */
static void e_po_holl_demo(e_po_class* param_0) {
    // NONMATCHING
}

/* 80754A74-80754AA8 008614 0034+00 1/1 0/0 0/0 .text            fopAcM_isSwitch__FPC10fopAc_ac_ci
 */
// static void fopAcM_isSwitch(fopAc_ac_c const* param_0, int param_1) {
extern "C" void fopAcM_isSwitch__FPC10fopAc_ac_ci() {
    // NONMATCHING
}

/* 80754AA8-80754AC0 008648 0018+00 1/1 0/0 0/0 .text            fopAcM_GetID__FPCv */
// static void fopAcM_GetID(void const* param_0) {
extern "C" void fopAcM_GetID__FPCv() {
    // NONMATCHING
}

/* 80754AC0-80754AC8 -00001 0008+00 0/0 0/0 0/0 .text            fopAcM_SetGroup__FP10fopAc_ac_cUc
 */
// void fopAcM_SetGroup(fopAc_ac_c* param_0, u8 param_1) {
extern "C" void fopAcM_SetGroup__FP10fopAc_ac_cUc(fopAc_ac_c* param_0, u8 param_1) {
    *(u8*)(((u8*)param_0) + 1174) /* param_0->field_0x496 */ = (u8)(param_1);
}

/* 80754AC8-80754AD8 008668 0010+00 1/1 0/0 0/0 .text            OnCoSetBit__14cCcD_ObjHitInfFv */
// void cCcD_ObjHitInf::OnCoSetBit() {
extern "C" void OnCoSetBit__14cCcD_ObjHitInfFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757A44-80757A48 000348 0004+00 0/1 0/0 0/0 .rodata          @7231 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7231 = 230.0f;
COMPILER_STRIP_GATE(0x80757A44, &lit_7231);
#pragma pop

/* 80757A48-80757A4C 00034C 0004+00 0/1 0/0 0/0 .rodata          @7232 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7232 = 255.0f;
COMPILER_STRIP_GATE(0x80757A48, &lit_7232);
#pragma pop

/* 80754AD8-807550EC 008678 0614+00 2/1 0/0 0/0 .text            action__FP10e_po_class */
static void action(e_po_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757A4C-80757A50 000350 0004+00 0/1 0/0 0/0 .rodata          @7523 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7523 = -22.0f;
COMPILER_STRIP_GATE(0x80757A4C, &lit_7523);
#pragma pop

/* 80757A50-80757A54 000354 0004+00 0/1 0/0 0/0 .rodata          @7524 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7524 = 24.0f;
COMPILER_STRIP_GATE(0x80757A50, &lit_7524);
#pragma pop

/* 80757A54-80757A58 000358 0004+00 0/1 0/0 0/0 .rodata          @7525 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7525 = -42.0f / 5.0f;
COMPILER_STRIP_GATE(0x80757A54, &lit_7525);
#pragma pop

/* 80757A58-80757A5C 00035C 0004+00 0/1 0/0 0/0 .rodata          @7526 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7526 = -25.0f;
COMPILER_STRIP_GATE(0x80757A58, &lit_7526);
#pragma pop

/* 80757A5C-80757A60 000360 0004+00 0/1 0/0 0/0 .rodata          @7527 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7527 = 6000.0f;
COMPILER_STRIP_GATE(0x80757A5C, &lit_7527);
#pragma pop

/* 80757A60-80757A64 000364 0004+00 0/1 0/0 0/0 .rodata          @7528 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7528 = -15.0f;
COMPILER_STRIP_GATE(0x80757A60, &lit_7528);
#pragma pop

/* 807550EC-80755C00 008C8C 0B14+00 2/1 0/0 0/0 .text            daE_PO_Execute__FP10e_po_class */
static void daE_PO_Execute(e_po_class* param_0) {
    // NONMATCHING
}

/* 80755C00-80755C04 0097A0 0004+00 1/1 0/0 0/0 .text
 * mPo_tgHitCallback__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void mPo_tgHitCallback(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                              dCcD_GObjInf* param_3) {
    /* empty function */
}

/* 80755C04-80755C0C 0097A4 0008+00 1/0 0/0 0/0 .text            daE_PO_IsDelete__FP10e_po_class */
static bool daE_PO_IsDelete(e_po_class* param_0) {
    return true;
}

/* 80755C0C-80755C94 0097AC 0088+00 1/0 0/0 0/0 .text            daE_PO_Delete__FP10e_po_class */
static void daE_PO_Delete(e_po_class* param_0) {
    // NONMATCHING
}

/* 80755C94-80756020 009834 038C+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80757A64-80757A68 000368 0004+00 0/1 0/0 0/0 .rodata          @8006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8006 = -500.0f;
COMPILER_STRIP_GATE(0x80757A64, &lit_8006);
#pragma pop

/* 80757A68-80757A6C 00036C 0004+00 0/1 0/0 0/0 .rodata          @8007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8007 = 95.0f;
COMPILER_STRIP_GATE(0x80757A68, &lit_8007);
#pragma pop

/* 80757A6C-80757A70 000370 0004+00 0/1 0/0 0/0 .rodata          @8008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8008 = 4170.0f;
COMPILER_STRIP_GATE(0x80757A6C, &lit_8008);
#pragma pop

/* 80757A70-80757A74 000374 0004+00 0/1 0/0 0/0 .rodata          @8009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8009 = -5180.0f;
COMPILER_STRIP_GATE(0x80757A70, &lit_8009);
#pragma pop

/* 80757A74-80757A78 000378 0004+00 0/1 0/0 0/0 .rodata          @8010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8010 = 5630.0f;
COMPILER_STRIP_GATE(0x80757A74, &lit_8010);
#pragma pop

/* 80757A78-80757A7C 00037C 0004+00 0/1 0/0 0/0 .rodata          @8011 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8011 = 1050.0f;
COMPILER_STRIP_GATE(0x80757A78, &lit_8011);
#pragma pop

/* 80757A7C-80757A80 000380 0004+00 0/1 0/0 0/0 .rodata          @8012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8012 = 4560.0f;
COMPILER_STRIP_GATE(0x80757A7C, &lit_8012);
#pragma pop

/* 80757A80-80757A84 000384 0004+00 0/1 0/0 0/0 .rodata          @8013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8013 = -4550.0f;
COMPILER_STRIP_GATE(0x80757A80, &lit_8013);
#pragma pop

/* 80757A84-80757A88 000388 0004+00 0/1 0/0 0/0 .rodata          @8014 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_8014 = 1055.0f;
COMPILER_STRIP_GATE(0x80757A84, &lit_8014);
#pragma pop

/* 80757A88-80757A88 00038C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80757A9D = "E_po";
#pragma pop

/* 80756020-80756900 009BC0 08E0+00 1/0 0/0 0/0 .text            daE_PO_Create__FP10fopAc_ac_c */
static void daE_PO_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80756900-80756B00 00A4A0 0200+00 1/1 0/0 0/0 .text            __ct__10e_po_classFv */
e_po_class::e_po_class() {
    // NONMATCHING
}

/* 80756B00-80756B04 00A6A0 0004+00 1/0 0/0 0/0 .text            cleanup__18dPa_levelEcallBackFv */
// void dPa_levelEcallBack::cleanup() {
extern "C" void cleanup__18dPa_levelEcallBackFv() {
    /* empty function */
}

/* 80756B04-80756B78 00A6A4 0074+00 1/0 0/0 0/0 .text            __dt__18dPa_levelEcallBackFv */
// dPa_levelEcallBack::~dPa_levelEcallBack() {
extern "C" void __dt__18dPa_levelEcallBackFv() {
    // NONMATCHING
}

/* 80756B78-80756BC0 00A718 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80756BC0-80756C08 00A760 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80756C08-80756C50 00A7A8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80756C50-80756CAC 00A7F0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80756CAC-80756D1C 00A84C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80756D1C-80756D8C 00A8BC 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80756D8C-80756D90 00A92C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 80756D90-80756DD8 00A930 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80756DD8-80756DDC 00A978 0004+00 2/0 0/0 0/0 .text
 * execute__18JPAEmitterCallBackFP14JPABaseEmitter              */
// void JPAEmitterCallBack::execute(JPABaseEmitter* param_0) {
extern "C" void execute__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 80756DDC-80756DE0 00A97C 0004+00 2/0 0/0 0/0 .text
 * executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter         */
// void JPAEmitterCallBack::executeAfter(JPABaseEmitter* param_0) {
extern "C" void executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 80756DE0-80756DE4 00A980 0004+00 2/0 0/0 0/0 .text draw__18JPAEmitterCallBackFP14JPABaseEmitter
 */
// void JPAEmitterCallBack::draw(JPABaseEmitter* param_0) {
extern "C" void draw__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 80756DE4-80756DE8 00A984 0004+00 2/0 0/0 0/0 .text
 * drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter            */
// void JPAEmitterCallBack::drawAfter(JPABaseEmitter* param_0) {
extern "C" void drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 80756DE8-80756E30 00A988 0048+00 2/1 0/0 0/0 .text            __dt__12daE_PO_HIO_cFv */
daE_PO_HIO_c::~daE_PO_HIO_c() {
    // NONMATCHING
}

/* 80756E30-80756E6C 00A9D0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_po_cpp */
void __sinit_d_a_e_po_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80756E30, __sinit_d_a_e_po_cpp);
#pragma pop

/* 80756E6C-80756E74 00AA0C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80756E6C() {
    // NONMATCHING
}

/* 80756E74-80756E7C 00AA14 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80756E74() {
    // NONMATCHING
}

/* 80757290-807572CC 00AE30 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 807572CC-80757308 00AE6C 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80757308-8075731C 00AEA8 0014+00 1/1 0/0 0/0 .text            cancelOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::cancelOriginalDemo() {
extern "C" void cancelOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 80757348-8075737C 00AEE8 0034+00 1/1 0/0 0/0 .text            __apl__4cXyzFRC3Vec */
// void cXyz::operator+=(Vec const& param_0) {
extern "C" void __apl__4cXyzFRC3Vec() {
    // NONMATCHING
}

/* 8075737C-807573B0 00AF1C 0034+00 1/1 0/0 0/0 .text            fopAcM_onSwitch__FPC10fopAc_ac_ci
 */
// static void fopAcM_onSwitch(fopAc_ac_c const* param_0, int param_1) {
extern "C" void fopAcM_onSwitch__FPC10fopAc_ac_ci() {
    // NONMATCHING
}

/* 807573C0-807573C8 -00001 0008+00 0/0 0/0 0/0 .text            __ct__10JAISoundIDFUl */
// JAISoundID::JAISoundID(u32 param_0) {
void __ct__10JAISoundIDFUl() {
    asm {
        stw r4, 0x0(r3)
    }
}

/* 807573C8-807573FC 00AF68 0034+00 1/1 0/0 0/0 .text            fopAcM_offSwitch__FPC10fopAc_ac_ci
 */
// static void fopAcM_offSwitch(fopAc_ac_c const* param_0, int param_1) {
extern "C" void fopAcM_offSwitch__FPC10fopAc_ac_ci() {
    // NONMATCHING
}

/* 807573FC-80757404 00AF9C 0008+00 1/1 0/0 0/0 .text            getFrame__13mDoExt_morf_cFv */
// void mDoExt_morf_c::getFrame() {
extern "C" void getFrame__13mDoExt_morf_cFv() {
    // NONMATCHING
}

/* 80757404-80757434 00AFA4 0030+00 1/1 0/0 0/0 .text            isStop__13mDoExt_morf_cFv */
// void mDoExt_morf_c::isStop() {
extern "C" void isStop__13mDoExt_morf_cFv() {
    // NONMATCHING
}

/* 80757434-8075744C 00AFD4 0018+00 1/1 0/0 0/0 .text            cM_scos__Fs */
// static void cM_scos(s16 param_0) {
extern "C" void cM_scos__Fs() {
    // NONMATCHING
}

/* 8075744C-80757460 00AFEC 0014+00 1/1 0/0 0/0 .text            cM_ssin__Fs */
// static void cM_ssin(s16 param_0) {
extern "C" void cM_ssin__Fs() {
    // NONMATCHING
}

/* 80757460-80757574 00B000 0114+00 1/1 0/0 0/0 .text            abs__4cXyzCFv */
// void cXyz::abs() const {
extern "C" void abs__4cXyzCFv() {
    // NONMATCHING
}

/* 80757574-80757590 00B114 001C+00 1/1 0/0 0/0 .text            changeDemoPos0__9daPy_py_cFPC4cXyz
 */
// void daPy_py_c::changeDemoPos0(cXyz const* param_0) {
extern "C" void changeDemoPos0__9daPy_py_cFPC4cXyz() {
    // NONMATCHING
}

/* 80757590-807575AC 00B130 001C+00 1/1 0/0 0/0 .text            set__4cXyzFRC3Vec */
// void cXyz::set(Vec const& param_0) {
extern "C" void set__4cXyzFRC3Vec() {
    // NONMATCHING
}

/* 807575AC-807575BC 00B14C 0010+00 1/1 0/0 0/0 .text            set__4cXyzFfff */
// void cXyz::set(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void set__4cXyzFfff() {
    // NONMATCHING
}

/* 807575BC-807575D0 00B15C 0014+00 1/1 0/0 0/0 .text            changeDemoMode__9daPy_py_cFUliis */
// void daPy_py_c::changeDemoMode(u32 param_0, int param_1, int param_2, s16 param_3) {
extern "C" void changeDemoMode__9daPy_py_cFUliis() {
    // NONMATCHING
}

/* 807575D0-807575E4 00B170 0014+00 1/1 0/0 0/0 .text            changeOriginalDemo__9daPy_py_cFv */
// void daPy_py_c::changeOriginalDemo() {
extern "C" void changeOriginalDemo__9daPy_py_cFv() {
    // NONMATCHING
}

/* 807575F4-80757604 00B194 0010+00 1/1 0/0 0/0 .text            Fovy__9dCamera_cFv */
// void dCamera_c::Fovy() {
extern "C" void Fovy__9dCamera_cFv() {
    // NONMATCHING
}

/* 80757604-80757620 00B1A4 001C+00 1/1 0/0 0/0 .text            __as__4cXyzFRC4cXyz */
// void cXyz::operator=(cXyz const& param_0) {
extern "C" void __as__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 80757620-8075764C 00B1C0 002C+00 1/1 0/0 0/0 .text fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c
 */
// static void fopAcM_searchPlayerAngleY(fopAc_ac_c const* param_0) {
extern "C" void fopAcM_searchPlayerAngleY__FPC10fopAc_ac_c() {
    // NONMATCHING
}

/* 8075764C-8075765C 00B1EC 0010+00 1/1 0/0 0/0 .text            onCondition__11dEvt_info_cFUs */
/* void dEvt_info_c::onCondition(u16 param_0) {
    // NONMATCHING
} */

/* 8075765C-80757670 00B1FC 0014+00 1/1 0/0 0/0 .text checkCommandDemoAccrpt__11dEvt_info_cFv */
// void dEvt_info_c::checkCommandDemoAccrpt() {
extern "C" void checkCommandDemoAccrpt__11dEvt_info_cFv() {
    // NONMATCHING
}

/* 80757670-8075768C 00B210 001C+00 1/1 0/0 0/0 .text            __ct__4cXyzFRC4cXyz */
// cXyz::cXyz(cXyz const& param_0) {
extern "C" void __ct__4cXyzFRC4cXyz() {
    // NONMATCHING
}

/* 8075768C-8075769C 00B22C 0010+00 1/1 0/0 0/0 .text            __ct__4cXyzFfff */
// cXyz::cXyz(f32 param_0, f32 param_1, f32 param_2) {
extern "C" void __ct__4cXyzFfff() {
    // NONMATCHING
}

/* 807576D0-807576E8 00B270 0018+00 1/1 0/0 0/0 .text            dComIfGp_getPlayer__Fi */
// static void dComIfGp_getPlayer(int param_0) {
extern "C" void dComIfGp_getPlayer__Fi() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8075841C-80758420 000614 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_8075841C[4];
#pragma pop

/* 80758420-80758424 000618 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80758420[4];
#pragma pop

/* 80758424-80758428 00061C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80758424[4];
#pragma pop

/* 80758428-8075842C 000620 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80758428[4];
#pragma pop

/* 8075842C-80758430 000624 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_8075842C[4];
#pragma pop

/* 80758430-80758434 000628 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80758430[4];
#pragma pop

/* 80758434-80758438 00062C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80758434[4];
#pragma pop

/* 80758438-8075843C 000630 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80758438[4];
#pragma pop

/* 8075843C-80758440 000634 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8075843C[4];
#pragma pop

/* 80758440-80758444 000638 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80758440[4];
#pragma pop

/* 80758444-80758448 00063C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80758444[4];
#pragma pop

/* 80758448-8075844C 000640 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80758448[4];
#pragma pop

/* 8075844C-80758450 000644 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8075844C[4];
#pragma pop

/* 80758450-80758454 000648 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80758450[4];
#pragma pop

/* 80758454-80758458 00064C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80758454[4];
#pragma pop

/* 80758458-8075845C 000650 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80758458[4];
#pragma pop

/* 8075845C-80758460 000654 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8075845C[4];
#pragma pop

/* 80758460-80758464 000658 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80758460[4];
#pragma pop

/* 80758464-80758468 00065C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80758464[4];
#pragma pop

/* 80758468-8075846C 000660 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80758468[4];
#pragma pop

/* 8075846C-80758470 000664 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8075846C[4];
#pragma pop

/* 80758470-80758474 000668 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80758470[4];
#pragma pop

/* 80758474-80758478 00066C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80758474[4];
#pragma pop

/* 80758478-8075847C 000670 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80758478[4];
#pragma pop

/* 8075847C-80758480 000674 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8075847C[4];
#pragma pop

/* 80757A88-80757A88 00038C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
