/**
 * @file d_a_e_yd.cpp
 * 
*/

#include "d/actor/d_a_e_yd.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" void __ct__12daE_YD_HIO_cFv();
extern "C" static void yd_disappear__FP10e_yd_class();
extern "C" static void anm_init__FP10e_yd_classifUcf();
extern "C" static void leaf_anm_init__FP10e_yd_classifUcf();
extern "C" static void daE_YD_Draw__FP10e_yd_class();
extern "C" static void pl_check__FP10e_yd_classf();
extern "C" static void damage_check__FP10e_yd_class();
extern "C" static void e_yd_stay__FP10e_yd_class();
extern "C" static void e_yd_appear__FP10e_yd_class();
extern "C" static void e_yd_appear_v__FP10e_yd_class();
extern "C" static void e_yd_wait__FP10e_yd_class();
extern "C" static void e_yd_attack__FP10e_yd_class();
extern "C" static void e_yd_chance__FP10e_yd_class();
extern "C" static void e_yd_s_damage__FP10e_yd_class();
extern "C" static void e_yd_damage__FP10e_yd_class();
extern "C" static void kuki_control1__FP10e_yd_class();
extern "C" static void kuki_control2__FP10e_yd_class();
extern "C" static void kuki_control3__FP10e_yd_class();
extern "C" static void kuki_ha_set__FP10e_yd_class();
extern "C" static void action__FP10e_yd_class();
extern "C" static void eff_set__FP10e_yd_class();
extern "C" static void anm_se_set__FP10e_yd_class();
extern "C" static void daE_YD_Execute__FP10e_yd_class();
extern "C" static bool daE_YD_IsDelete__FP10e_yd_class();
extern "C" static void daE_YD_Delete__FP10e_yd_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daE_YD_Create__FP10fopAc_ac_c();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__12daE_YD_HIO_cFv();
extern "C" void __sinit_d_a_e_yd_cpp();
extern "C" static void func_807F7550();
extern "C" static void func_807F7558();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_e_yd__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemFromEnemyID__FUcPC4cXyziiPC5csXyzPC4cXyzPfPf();
extern "C" void fopAcM_otherBgCheck__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void StartCAt__8dCcD_SphFR4cXyz();
extern "C" void MoveCAt__8dCcD_SphFR4cXyz();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void func_802807E0();
extern "C" void func_80280808();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 807F7A2C-807F7A30 00002C 0004+00 1/4 0/0 0/0 .rodata          @3809 */
SECTION_RODATA static f32 const lit_3809 = 0.5f;
COMPILER_STRIP_GATE(0x807F7A2C, &lit_3809);

/* 807F7B70-807F7B74 000038 0004+00 1/1 0/0 0/0 .data            l_color$3890 */
SECTION_DATA static u8 l_color[4] = {
    0x14,
    0x0F,
    0x00,
    0xFF,
};

/* 807F7B74-807F7B8C 00003C 0016+02 1/1 0/0 0/0 .data            pow_xa$4634 */
SECTION_DATA static u8 pow_xa[22 + 2 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x10,
    0x00,
    0x20,
    0x00,
    0x30,
    0x00,
    0x40,
    0x00,
    0x30,
    0x00,
    0x20,
    0x00,
    0x10,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 807F7B8C-807F7BB0 -00001 0024+00 1/1 0/0 0/0 .data            @5007 */
SECTION_DATA static void* lit_5007[9] = {
    (void*)(((char*)action__FP10e_yd_class) + 0x1CC),
    (void*)(((char*)action__FP10e_yd_class) + 0x1E0),
    (void*)(((char*)action__FP10e_yd_class) + 0x200),
    (void*)(((char*)action__FP10e_yd_class) + 0x220),
    (void*)(((char*)action__FP10e_yd_class) + 0x240),
    (void*)(((char*)action__FP10e_yd_class) + 0x2AC),
    (void*)(((char*)action__FP10e_yd_class) + 0x260),
    (void*)(((char*)action__FP10e_yd_class) + 0x280),
    (void*)(((char*)action__FP10e_yd_class) + 0x2A0),
};

/* 807F7BB0-807F7BB8 000078 0006+02 1/1 0/0 0/0 .data            p_name$5015 */
SECTION_DATA static u8 p_name[6 + 2 /* padding */] = {
    0x88,
    0x11,
    0x88,
    0x12,
    0x88,
    0x13,
    /* padding */
    0x00,
    0x00,
};

/* 807F7BB8-807F7BC4 000080 000C+00 1/1 0/0 0/0 .data            p_idx$5016 */
SECTION_DATA static u8 p_idx[12] = {
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x06,
};

/* 807F7BC4-807F7C04 00008C 0040+00 0/1 0/0 0/0 .data            cc_sph_src$5344 */
#pragma push
#pragma force_active on
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0xd}, {0xd8fbfdff, 0x3}, 0x25}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_STONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 807F7C04-807F7C44 0000CC 0040+00 0/1 0/0 0/0 .data            at_sph_src$5345 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0xd}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 35.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 807F7C44-807F7C84 00010C 0040+00 0/1 0/0 0/0 .data            kuki_sph_src$5346 */
#pragma push
#pragma force_active on
static dCcD_SrcSph kuki_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0xd}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 20.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 807F7C84-807F7CA4 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_YD_Method */
static actor_method_class l_daE_YD_Method = {
    (process_method_func)daE_YD_Create__FP10fopAc_ac_c,
    (process_method_func)daE_YD_Delete__FP10e_yd_class,
    (process_method_func)daE_YD_Execute__FP10e_yd_class,
    (process_method_func)daE_YD_IsDelete__FP10e_yd_class,
    (process_method_func)daE_YD_Draw__FP10e_yd_class,
};

/* 807F7CA4-807F7CD4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_YD */
extern actor_process_profile_definition g_profile_E_YD = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_YD,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_yd_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  143,                    // mPriority
  &l_daE_YD_Method,       // sub_method
  0x10050100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 807F7CD4-807F7CE0 00019C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 807F7CE0-807F7CEC 0001A8 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 807F7CEC-807F7CF8 0001B4 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 807F7CF8-807F7D1C 0001C0 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807F7558,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807F7550,
};

/* 807F7D1C-807F7D28 0001E4 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 807F7D28-807F7D34 0001F0 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 807F7D34-807F7D48 0001FC 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 807F7D48-807F7D54 000210 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 807F7D54-807F7D60 00021C 000C+00 2/2 0/0 0/0 .data            __vt__12daE_YD_HIO_c */
SECTION_DATA extern void* __vt__12daE_YD_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daE_YD_HIO_cFv,
};

/* 807F2C2C-807F2C78 0000EC 004C+00 1/1 0/0 0/0 .text            __ct__12daE_YD_HIO_cFv */
daE_YD_HIO_c::daE_YD_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7A30-807F7A34 000030 0004+00 0/1 0/0 0/0 .rodata          @3870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3870 = 1.5f;
COMPILER_STRIP_GATE(0x807F7A30, &lit_3870);
#pragma pop

/* 807F7A34-807F7A38 000034 0004+00 2/4 0/0 0/0 .rodata          @3871 */
SECTION_RODATA static f32 const lit_3871 = -1.0f;
COMPILER_STRIP_GATE(0x807F7A34, &lit_3871);

/* 807F2C78-807F2E20 000138 01A8+00 1/1 0/0 0/0 .text            yd_disappear__FP10e_yd_class */
static void yd_disappear(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7B30-807F7B30 000130 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_807F7B30 = "E_yd";
#pragma pop

/* 807F2E20-807F2ECC 0002E0 00AC+00 8/8 0/0 0/0 .text            anm_init__FP10e_yd_classifUcf */
static void anm_init(e_yd_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 807F2ECC-807F2FA4 00038C 00D8+00 8/8 0/0 0/0 .text            leaf_anm_init__FP10e_yd_classifUcf
 */
static void leaf_anm_init(e_yd_class* param_0, int param_1, f32 param_2, u8 param_3,
                              f32 param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7A38-807F7A3C 000038 0004+00 0/6 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3949 = 50.0f;
COMPILER_STRIP_GATE(0x807F7A38, &lit_3949);
#pragma pop

/* 807F7A3C-807F7A40 00003C 0004+00 0/1 0/0 0/0 .rodata          @3950 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3950 = 600.0f;
COMPILER_STRIP_GATE(0x807F7A3C, &lit_3950);
#pragma pop

/* 807F2FA4-807F3168 000464 01C4+00 1/0 0/0 0/0 .text            daE_YD_Draw__FP10e_yd_class */
static void daE_YD_Draw(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F3168-807F31C0 000628 0058+00 2/2 0/0 0/0 .text            pl_check__FP10e_yd_classf */
static void pl_check(e_yd_class* param_0, f32 param_1) {
    // NONMATCHING
}

/* 807F31C0-807F342C 000680 026C+00 1/1 0/0 0/0 .text            damage_check__FP10e_yd_class */
static void damage_check(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7A40-807F7A44 000040 0004+00 0/4 0/0 0/0 .rodata          @4075 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4075 = 10.0f;
COMPILER_STRIP_GATE(0x807F7A40, &lit_4075);
#pragma pop

/* 807F7A44-807F7A48 000044 0004+00 0/2 0/0 0/0 .rodata          @4076 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4076 = -170.0f;
COMPILER_STRIP_GATE(0x807F7A44, &lit_4076);
#pragma pop

/* 807F7A48-807F7A4C 000048 0004+00 0/4 0/0 0/0 .rodata          @4077 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4077 = 170.0f;
COMPILER_STRIP_GATE(0x807F7A48, &lit_4077);
#pragma pop

/* 807F7A4C-807F7A50 00004C 0004+00 0/4 0/0 0/0 .rodata          @4078 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4078 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x807F7A4C, &lit_4078);
#pragma pop

/* 807F7A50-807F7A54 000050 0004+00 0/6 0/0 0/0 .rodata          @4079 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4079 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x807F7A50, &lit_4079);
#pragma pop

/* 807F7A54-807F7A58 000054 0004+00 0/5 0/0 0/0 .rodata          @4080 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4080 = 20.0f;
COMPILER_STRIP_GATE(0x807F7A54, &lit_4080);
#pragma pop

/* 807F7A58-807F7A5C 000058 0004+00 0/1 0/0 0/0 .rodata          @4081 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4081 = 4.0f;
COMPILER_STRIP_GATE(0x807F7A58, &lit_4081);
#pragma pop

/* 807F7A5C-807F7A60 00005C 0004+00 0/1 0/0 0/0 .rodata          @4082 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4082 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x807F7A5C, &lit_4082);
#pragma pop

/* 807F7A60-807F7A64 000060 0004+00 0/1 0/0 0/0 .rodata          @4083 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4083 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x807F7A60, &lit_4083);
#pragma pop

/* 807F7A64-807F7A68 000064 0004+00 0/7 0/0 0/0 .rodata          @4084 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4084 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x807F7A64, &lit_4084);
#pragma pop

/* 807F7D68-807F7D6C 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_807F7D68[4];

/* 807F7D6C-807F7D78 00000C 000C+00 1/1 0/0 0/0 .bss             @3804 */
static u8 lit_3804[12];

/* 807F7D78-807F7D94 000018 001C+00 9/9 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

/* 807F342C-807F3784 0008EC 0358+00 1/1 0/0 0/0 .text            e_yd_stay__FP10e_yd_class */
static void e_yd_stay(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7A68-807F7A6C 000068 0004+00 0/5 0/0 0/0 .rodata          @4118 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4118 = 30.0f;
COMPILER_STRIP_GATE(0x807F7A68, &lit_4118);
#pragma pop

/* 807F3784-807F3A44 000C44 02C0+00 1/1 0/0 0/0 .text            e_yd_appear__FP10e_yd_class */
static void e_yd_appear(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7A6C-807F7A70 00006C 0004+00 1/5 0/0 0/0 .rodata          @4148 */
SECTION_RODATA static f32 const lit_4148 = 5.0f;
COMPILER_STRIP_GATE(0x807F7A6C, &lit_4148);

/* 807F7A70-807F7A74 000070 0004+00 0/3 0/0 0/0 .rodata          @4149 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4149 = 15.0f;
COMPILER_STRIP_GATE(0x807F7A70, &lit_4149);
#pragma pop

/* 807F7A74-807F7A78 000074 0004+00 0/3 0/0 0/0 .rodata          @4150 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4150 = 60.0f;
COMPILER_STRIP_GATE(0x807F7A74, &lit_4150);
#pragma pop

/* 807F7A78-807F7A7C 000078 0004+00 0/3 0/0 0/0 .rodata          @4151 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4151 = 40.0f;
COMPILER_STRIP_GATE(0x807F7A78, &lit_4151);
#pragma pop

/* 807F7A7C-807F7A80 00007C 0004+00 0/2 0/0 0/0 .rodata          @4152 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4152 = 400.0f;
COMPILER_STRIP_GATE(0x807F7A7C, &lit_4152);
#pragma pop

/* 807F7A80-807F7A84 000080 0004+00 0/1 0/0 0/0 .rodata          @4153 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4153 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x807F7A80, &lit_4153);
#pragma pop

/* 807F3A44-807F3C10 000F04 01CC+00 1/1 0/0 0/0 .text            e_yd_appear_v__FP10e_yd_class */
static void e_yd_appear_v(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7A84-807F7A88 000084 0004+00 0/1 0/0 0/0 .rodata          @4246 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4246 = 0.75f;
COMPILER_STRIP_GATE(0x807F7A84, &lit_4246);
#pragma pop

/* 807F7A88-807F7A8C 000088 0004+00 0/1 0/0 0/0 .rodata          @4247 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4247 = 90.0f;
COMPILER_STRIP_GATE(0x807F7A88, &lit_4247);
#pragma pop

/* 807F7A8C-807F7A90 00008C 0004+00 0/2 0/0 0/0 .rodata          @4248 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4248 = -100.0f;
COMPILER_STRIP_GATE(0x807F7A8C, &lit_4248);
#pragma pop

/* 807F7A90-807F7A94 000090 0004+00 0/1 0/0 0/0 .rodata          @4249 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4249 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x807F7A90, &lit_4249);
#pragma pop

/* 807F7A94-807F7A98 000094 0004+00 0/1 0/0 0/0 .rodata          @4250 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4250 = 700.0f;
COMPILER_STRIP_GATE(0x807F7A94, &lit_4250);
#pragma pop

/* 807F7A98-807F7AA0 000098 0008+00 1/3 0/0 0/0 .rodata          @4252 */
SECTION_RODATA static u8 const lit_4252[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x807F7A98, &lit_4252);

/* 807F3C10-807F4158 0010D0 0548+00 1/1 0/0 0/0 .text            e_yd_wait__FP10e_yd_class */
static void e_yd_wait(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7AA0-807F7AA4 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4445 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4445 = 350.0f;
COMPILER_STRIP_GATE(0x807F7AA0, &lit_4445);
#pragma pop

/* 807F7AA4-807F7AA8 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4446 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4446 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x807F7AA4, &lit_4446);
#pragma pop

/* 807F7AA8-807F7AAC 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4447 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4447 = 2.0f;
COMPILER_STRIP_GATE(0x807F7AA8, &lit_4447);
#pragma pop

/* 807F7AAC-807F7AB0 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4448 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4448 = 2000.0f;
COMPILER_STRIP_GATE(0x807F7AAC, &lit_4448);
#pragma pop

/* 807F7AB0-807F7AB4 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4449 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4449 = 70.0f;
COMPILER_STRIP_GATE(0x807F7AB0, &lit_4449);
#pragma pop

/* 807F7AB4-807F7AB8 0000B4 0004+00 0/3 0/0 0/0 .rodata          @4450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4450 = -50.0f;
COMPILER_STRIP_GATE(0x807F7AB4, &lit_4450);
#pragma pop

/* 807F7AB8-807F7ABC 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4451 = 200.0f;
COMPILER_STRIP_GATE(0x807F7AB8, &lit_4451);
#pragma pop

/* 807F4158-807F4BB8 001618 0A60+00 1/1 0/0 0/0 .text            e_yd_attack__FP10e_yd_class */
static void e_yd_attack(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7ABC-807F7AC0 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4504 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4504 = 230.0f;
COMPILER_STRIP_GATE(0x807F7ABC, &lit_4504);
#pragma pop

/* 807F7AC0-807F7AC4 0000C0 0004+00 0/4 0/0 0/0 .rodata          @4505 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4505 = 3.0f;
COMPILER_STRIP_GATE(0x807F7AC0, &lit_4505);
#pragma pop

/* 807F4BB8-807F4EB8 002078 0300+00 1/1 0/0 0/0 .text            e_yd_chance__FP10e_yd_class */
static void e_yd_chance(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7AC4-807F7AC8 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4550 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4550 = 250.0f;
COMPILER_STRIP_GATE(0x807F7AC4, &lit_4550);
#pragma pop

/* 807F7AC8-807F7ACC 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4551 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4551 = 23.0f / 25.0f;
COMPILER_STRIP_GATE(0x807F7AC8, &lit_4551);
#pragma pop

/* 807F4EB8-807F5110 002378 0258+00 1/1 0/0 0/0 .text            e_yd_s_damage__FP10e_yd_class */
static void e_yd_s_damage(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7ACC-807F7AD0 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4628 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4628 = -20.0f;
COMPILER_STRIP_GATE(0x807F7ACC, &lit_4628);
#pragma pop

/* 807F7AD0-807F7AD4 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4629 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4629 = 450.0f;
COMPILER_STRIP_GATE(0x807F7AD0, &lit_4629);
#pragma pop

/* 807F7AD4-807F7AD8 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4630 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4630 = -1.0f / 10.0f;
COMPILER_STRIP_GATE(0x807F7AD4, &lit_4630);
#pragma pop

/* 807F5110-807F54F0 0025D0 03E0+00 1/1 0/0 0/0 .text            e_yd_damage__FP10e_yd_class */
static void e_yd_damage(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7AD8-807F7ADC 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4709 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4709 = -30.0f;
COMPILER_STRIP_GATE(0x807F7AD8, &lit_4709);
#pragma pop

/* 807F7ADC-807F7AE0 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4710 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4710 = -200.0f;
COMPILER_STRIP_GATE(0x807F7ADC, &lit_4710);
#pragma pop

/* 807F54F0-807F5820 0029B0 0330+00 1/1 0/0 0/0 .text            kuki_control1__FP10e_yd_class */
static void kuki_control1(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F5820-807F5994 002CE0 0174+00 1/1 0/0 0/0 .text            kuki_control2__FP10e_yd_class */
static void kuki_control2(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7AE0-807F7AE4 0000E0 0004+00 1/1 0/0 0/0 .rodata          @4765 */
SECTION_RODATA static f32 const lit_4765 = 11.0f;
COMPILER_STRIP_GATE(0x807F7AE0, &lit_4765);

/* 807F5994-807F5A70 002E54 00DC+00 1/1 0/0 0/0 .text            kuki_control3__FP10e_yd_class */
static void kuki_control3(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F5A70-807F5B5C 002F30 00EC+00 1/1 0/0 0/0 .text            kuki_ha_set__FP10e_yd_class */
static void kuki_ha_set(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F5B5C-807F613C 00301C 05E0+00 2/1 0/0 0/0 .text            action__FP10e_yd_class */
static void action(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F613C-807F64E0 0035FC 03A4+00 1/1 0/0 0/0 .text            eff_set__FP10e_yd_class */
static void eff_set(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7AE4-807F7AE8 0000E4 0004+00 0/0 0/0 0/0 .rodata          @4861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4861 = -10.0f;
COMPILER_STRIP_GATE(0x807F7AE4, &lit_4861);
#pragma pop

/* 807F7AE8-807F7AEC 0000E8 0004+00 0/1 0/0 0/0 .rodata          @4862 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4862 = 10000.0f;
COMPILER_STRIP_GATE(0x807F7AE8, &lit_4862);
#pragma pop

/* 807F7AEC-807F7AF0 0000EC 0004+00 0/0 0/0 0/0 .rodata          @4863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4863 = 65536.0f;
COMPILER_STRIP_GATE(0x807F7AEC, &lit_4863);
#pragma pop

/* 807F7AF0-807F7AF4 0000F0 0004+00 0/0 0/0 0/0 .rodata          @4864 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4864 = -5.0f;
COMPILER_STRIP_GATE(0x807F7AF0, &lit_4864);
#pragma pop

/* 807F7AF4-807F7AF8 0000F4 0004+00 0/0 0/0 0/0 .rodata          @5003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5003 = 25.0f;
COMPILER_STRIP_GATE(0x807F7AF4, &lit_5003);
#pragma pop

/* 807F7AF8-807F7AFC 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5004 = -30000.0f;
COMPILER_STRIP_GATE(0x807F7AF8, &lit_5004);
#pragma pop

/* 807F7AFC-807F7B00 0000FC 0004+00 0/0 0/0 0/0 .rodata          @5005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5005 = 300000.0f;
COMPILER_STRIP_GATE(0x807F7AFC, &lit_5005);
#pragma pop

/* 807F7B00-807F7B04 000100 0004+00 0/0 0/0 0/0 .rodata          @5006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5006 = 30000.0f;
COMPILER_STRIP_GATE(0x807F7B00, &lit_5006);
#pragma pop

/* 807F7B04-807F7B08 000104 0004+00 0/1 0/0 0/0 .rodata          @5167 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5167 = 22.0f;
COMPILER_STRIP_GATE(0x807F7B04, &lit_5167);
#pragma pop

/* 807F7B08-807F7B0C 000108 0004+00 0/1 0/0 0/0 .rodata          @5168 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5168 = 21.0f;
COMPILER_STRIP_GATE(0x807F7B08, &lit_5168);
#pragma pop

/* 807F64E0-807F6648 0039A0 0168+00 1/1 0/0 0/0 .text            anm_se_set__FP10e_yd_class */
static void anm_se_set(e_yd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7B0C-807F7B10 00010C 0004+00 0/1 0/0 0/0 .rodata          @5238 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5238 = -20000.0f;
COMPILER_STRIP_GATE(0x807F7B0C, &lit_5238);
#pragma pop

/* 807F6648-807F694C 003B08 0304+00 2/1 0/0 0/0 .text            daE_YD_Execute__FP10e_yd_class */
static void daE_YD_Execute(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F694C-807F6954 003E0C 0008+00 1/0 0/0 0/0 .text            daE_YD_IsDelete__FP10e_yd_class */
static bool daE_YD_IsDelete(e_yd_class* param_0) {
    return true;
}

/* 807F6954-807F69BC 003E14 0068+00 1/0 0/0 0/0 .text            daE_YD_Delete__FP10e_yd_class */
static void daE_YD_Delete(e_yd_class* param_0) {
    // NONMATCHING
}

/* 807F69BC-807F6C48 003E7C 028C+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 807F6C48-807F6C90 004108 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 807F7B10-807F7B14 000110 0004+00 0/1 0/0 0/0 .rodata          @5468 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5468 = 500.0f;
COMPILER_STRIP_GATE(0x807F7B10, &lit_5468);
#pragma pop

/* 807F7B14-807F7B18 000114 0004+00 0/1 0/0 0/0 .rodata          @5469 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5469 = -300.0f;
COMPILER_STRIP_GATE(0x807F7B14, &lit_5469);
#pragma pop

/* 807F7B18-807F7B1C 000118 0004+00 0/1 0/0 0/0 .rodata          @5470 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5470 = -400.0f;
COMPILER_STRIP_GATE(0x807F7B18, &lit_5470);
#pragma pop

/* 807F7B1C-807F7B20 00011C 0004+00 0/1 0/0 0/0 .rodata          @5471 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5471 = 300.0f;
COMPILER_STRIP_GATE(0x807F7B1C, &lit_5471);
#pragma pop

/* 807F7B20-807F7B28 000120 0004+04 0/1 0/0 0/0 .rodata          @5472 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5472[1 + 1 /* padding */] = {
    65535.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x807F7B20, &lit_5472);
#pragma pop

/* 807F7B28-807F7B30 000128 0008+00 0/1 0/0 0/0 .rodata          @5474 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5474[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x807F7B28, &lit_5474);
#pragma pop

/* 807F6C90-807F7160 004150 04D0+00 1/0 0/0 0/0 .text            daE_YD_Create__FP10fopAc_ac_c */
static void daE_YD_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 807F7160-807F71D0 004620 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 807F71D0-807F7240 004690 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 807F7240-807F72C4 004700 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 807F72C4-807F7390 004784 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 807F7390-807F73D8 004850 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 807F73D8-807F7420 004898 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 807F7420-807F747C 0048E0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 807F747C-807F7480 00493C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 807F7480-807F7484 004940 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 807F7484-807F74CC 004944 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 807F74CC-807F7514 00498C 0048+00 2/1 0/0 0/0 .text            __dt__12daE_YD_HIO_cFv */
daE_YD_HIO_c::~daE_YD_HIO_c() {
    // NONMATCHING
}

/* 807F7514-807F7550 0049D4 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_e_yd_cpp */
void __sinit_d_a_e_yd_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x807F7514, __sinit_d_a_e_yd_cpp);
#pragma pop

/* 807F7550-807F7558 004A10 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_807F7550() {
    // NONMATCHING
}

/* 807F7558-807F7560 004A18 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_807F7558() {
    // NONMATCHING
}

/* 807F7974-807F79B0 004E34 003C+00 1/1 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 807F79B0-807F79EC 004E70 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 807F7B30-807F7B30 000130 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
