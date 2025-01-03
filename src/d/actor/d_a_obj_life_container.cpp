/**
 * @file d_a_obj_life_container.cpp
 * 
*/

#include "d/actor/d_a_obj_life_container.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void Reflect__FP4cXyzRC13cBgS_PolyInfof();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void
lifeGetTgCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" static void
lifeGetCoCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void initBaseMtx__11daObjLife_cFv();
extern "C" void setBaseMtx__11daObjLife_cFv();
extern "C" void Create__11daObjLife_cFv();
extern "C" void setEffect__11daObjLife_cFv();
extern "C" void endEffect00__11daObjLife_cFv();
extern "C" void endEffect02__11daObjLife_cFv();
extern "C" bool __CreateHeap__11daObjLife_cFv();
extern "C" void create__11daObjLife_cFv();
extern "C" void cleanup__18dPa_levelEcallBackFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void bg_check__11daObjLife_cFv();
extern "C" void actionWaitInit__11daObjLife_cFv();
extern "C" void actionWait__11daObjLife_cFv();
extern "C" void initActionOrderGetDemo__11daObjLife_cFv();
extern "C" void actionOrderGetDemo__11daObjLife_cFv();
extern "C" void actionGetDemo__11daObjLife_cFv();
extern "C" void actionSwOnWait__11daObjLife_cFv();
extern "C" void actionInitBoomerangCarry__11daObjLife_cFv();
extern "C" void actionBoomerangCarry__11daObjLife_cFv();
extern "C" void actionInitWait2__11daObjLife_cFv();
extern "C" void actionWait2__11daObjLife_cFv();
extern "C" void calcScale__11daObjLife_cFv();
extern "C" void execute__11daObjLife_cFv();
extern "C" void draw__11daObjLife_cFv();
extern "C" void setListStart__11daObjLife_cFv();
extern "C" void _delete__11daObjLife_cFv();
extern "C" static void daObjLife_Draw__FP11daObjLife_c();
extern "C" static void daObjLife_Execute__FP11daObjLife_c();
extern "C" static void daObjLife_Delete__FP11daObjLife_c();
extern "C" static void daObjLife_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__18dPa_levelEcallBackFv();
extern "C" void execute__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void draw__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter();
extern "C" void func_804CE3C0(void* _this, u8*);
extern "C" static void func_804CE3DC();
extern "C" static void func_804CE3E4();
extern "C" extern char const* const d_a_obj_life_container__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderItemEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_createItemForTrBoxDemo__FPC4cXyziiiPC5csXyzPC4cXyz();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void setEventReg__11dSv_event_cFUsUc();
extern "C" void getEventReg__11dSv_event_cCFUs();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void onItem__10dSv_info_cFii();
extern "C" void isItem__10dSv_info_cCFii();
extern "C" void hide__12daItemBase_cFv();
extern "C" void show__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void CheckFieldItemCreateHeap__FP10fopAc_ac_c();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void endCheckOld__16dEvent_manager_cFPCc();
extern "C" void __ct__19dPa_followEcallBackFUcUc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void animPlay__12daItemBase_cFffffff();
extern "C" void chkFlag__12daItemBase_cFi();
extern "C" void getTevFrm__12daItemBase_cFv();
extern "C" void getBtpFrm__12daItemBase_cFv();
extern "C" void getShadowSize__12daItemBase_cFv();
extern "C" void getCollisionH__12daItemBase_cFv();
extern "C" void getCollisionR__12daItemBase_cFv();
extern "C" void getData__12daItemBase_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dt__18JPAEmitterCallBackFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" void* field_item_res__10dItem_data[1020];
extern "C" u8 item_info__10dItem_data[1020 + 4 /* padding */];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_804CE6A0[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 804CE3F4-804CE438 000000 0044+00 6/6 0/0 0/0 .rodata          l_cyl_src */
const static dCcD_SrcCyl l_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xffffffff, 0x11}, 0x59}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x4}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        20.0f, // mRadius
        40.0f // mHeight
    } // mCyl
};

/* 804CE438-804CE43C 000044 0004+00 1/6 0/0 0/0 .rodata          @3855 */
SECTION_RODATA static u8 const lit_3855[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804CE438, &lit_3855);

/* 804CE43C-804CE444 000048 0008+00 0/1 0/0 0/0 .rodata          @3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3856[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804CE43C, &lit_3856);
#pragma pop

/* 804CE444-804CE44C 000050 0008+00 0/1 0/0 0/0 .rodata          @3857 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3857[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804CE444, &lit_3857);
#pragma pop

/* 804CE44C-804CE454 000058 0008+00 0/1 0/0 0/0 .rodata          @3858 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3858[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804CE44C, &lit_3858);
#pragma pop

/* 804CE4CC-804CE4D8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804CE4D8-804CE4EC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 804CE4EC-804CE4F8 -00001 000C+00 0/1 0/0 0/0 .data            @4479 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4479[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__11daObjLife_cFv,
};
#pragma pop

/* 804CE4F8-804CE504 -00001 000C+00 0/1 0/0 0/0 .data            @4480 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4480[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderGetDemo__11daObjLife_cFv,
};
#pragma pop

/* 804CE504-804CE510 -00001 000C+00 0/1 0/0 0/0 .data            @4481 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4481[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionGetDemo__11daObjLife_cFv,
};
#pragma pop

/* 804CE510-804CE51C -00001 000C+00 0/1 0/0 0/0 .data            @4482 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4482[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionSwOnWait__11daObjLife_cFv,
};
#pragma pop

/* 804CE51C-804CE528 -00001 000C+00 0/1 0/0 0/0 .data            @4483 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4483[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionBoomerangCarry__11daObjLife_cFv,
};
#pragma pop

/* 804CE528-804CE534 -00001 000C+00 0/1 0/0 0/0 .data            @4484 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4484[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait2__11daObjLife_cFv,
};
#pragma pop

/* 804CE534-804CE57C 000068 0048+00 0/1 0/0 0/0 .data            l_demoFunc$4478 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_demoFunc[72] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 804CE57C-804CE59C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjLife_Method */
static actor_method_class l_daObjLife_Method = {
    (process_method_func)daObjLife_Create__FP10fopAc_ac_c,
    (process_method_func)daObjLife_Delete__FP11daObjLife_c,
    (process_method_func)daObjLife_Execute__FP11daObjLife_c,
    0,
    (process_method_func)daObjLife_Draw__FP11daObjLife_c,
};

/* 804CE59C-804CE5CC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_LifeContainer */
extern actor_process_profile_definition g_profile_Obj_LifeContainer = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_LifeContainer, // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjLife_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  239,                    // mPriority
  &l_daObjLife_Method,    // sub_method
  0x000C4100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 804CE5CC-804CE5D8 000100 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 804CE5D8-804CE5E4 00010C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804CE5E4-804CE5F0 000118 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804CE5F0-804CE614 000124 0024+00 1/1 0/0 0/0 .data            __vt__18dPa_levelEcallBack */
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

/* 804CE614-804CE620 000148 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 804CE620-804CE62C 000154 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804CE62C-804CE650 000160 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804CE3E4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804CE3DC,
};

/* 804CE650-804CE694 000184 0044+00 1/1 0/0 0/0 .data            __vt__11daObjLife_c */
SECTION_DATA extern void* __vt__11daObjLife_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__11daObjLife_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daItemBase_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__11daObjLife_cFv,
    (void*)chkFlag__12daItemBase_cFi,
    (void*)getTevFrm__12daItemBase_cFv,
    (void*)getBtpFrm__12daItemBase_cFv,
    (void*)getShadowSize__12daItemBase_cFv,
    (void*)getCollisionH__12daItemBase_cFv,
    (void*)getCollisionR__12daItemBase_cFv,
};

/* 804CE694-804CE6A0 0001C8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 804CC7D8-804CCAD4 000078 02FC+00 1/1 0/0 0/0 .text            Reflect__FP4cXyzRC13cBgS_PolyInfof
 */
static void Reflect(cXyz* param_0, cBgS_PolyInfo const& param_1, f32 param_2) {
    // NONMATCHING
}

/* 804CCAD4-804CCB1C 000374 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* 804CCB1C-804CCB78 0003BC 005C+00 1/1 0/0 0/0 .text
 * lifeGetTgCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void lifeGetTgCallBack(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                                  dCcD_GObjInf* param_3) {
    // NONMATCHING
}

/* 804CCB78-804CCBE4 000418 006C+00 1/1 0/0 0/0 .text
 * lifeGetCoCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf */
static void lifeGetCoCallBack(fopAc_ac_c* param_0, dCcD_GObjInf* param_1, fopAc_ac_c* param_2,
                                  dCcD_GObjInf* param_3) {
    // NONMATCHING
}

/* 804CCBE4-804CCC04 000484 0020+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjLife_cFv */
void daObjLife_c::initBaseMtx() {
    // NONMATCHING
}

/* 804CCC04-804CCC6C 0004A4 0068+00 2/2 0/0 0/0 .text            setBaseMtx__11daObjLife_cFv */
void daObjLife_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE454-804CE458 000060 0004+00 0/2 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = 30.0f;
COMPILER_STRIP_GATE(0x804CE454, &lit_3935);
#pragma pop

/* 804CE458-804CE45C 000064 0004+00 0/2 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = -16.0f / 5.0f;
COMPILER_STRIP_GATE(0x804CE458, &lit_3936);
#pragma pop

/* 804CE45C-804CE464 000068 0004+04 0/2 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937[1 + 1 /* padding */] = {
    7.0f / 10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804CE45C, &lit_3937);
#pragma pop

/* 804CE464-804CE46C 000070 0008+00 1/2 0/0 0/0 .rodata          @3939 */
SECTION_RODATA static u8 const lit_3939[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804CE464, &lit_3939);

/* 804CCC6C-804CCE00 00050C 0194+00 1/1 0/0 0/0 .text            Create__11daObjLife_cFv */
void daObjLife_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE46C-804CE470 000078 0004+00 1/1 0/0 0/0 .rodata          @3969 */
SECTION_RODATA static f32 const lit_3969 = 1.5f;
COMPILER_STRIP_GATE(0x804CE46C, &lit_3969);

/* 804CE470-804CE474 00007C 0004+00 1/5 0/0 0/0 .rodata          @3970 */
SECTION_RODATA static f32 const lit_3970 = 1.0f;
COMPILER_STRIP_GATE(0x804CE470, &lit_3970);

/* 804CCE00-804CCF5C 0006A0 015C+00 1/1 0/0 0/0 .text            setEffect__11daObjLife_cFv */
void daObjLife_c::setEffect() {
    // NONMATCHING
}

/* 804CCF5C-804CCFAC 0007FC 0050+00 2/2 0/0 0/0 .text            endEffect00__11daObjLife_cFv */
void daObjLife_c::endEffect00() {
    // NONMATCHING
}

/* 804CCFAC-804CCFD8 00084C 002C+00 3/3 0/0 0/0 .text            endEffect02__11daObjLife_cFv */
void daObjLife_c::endEffect02() {
    // NONMATCHING
}

/* 804CCFD8-804CCFE0 000878 0008+00 1/0 0/0 0/0 .text            __CreateHeap__11daObjLife_cFv */
bool daObjLife_c::__CreateHeap() {
    return true;
}

/* 804CCFE0-804CD258 000880 0278+00 1/1 0/0 0/0 .text            create__11daObjLife_cFv */
void daObjLife_c::create() {
    // NONMATCHING
}

/* 804CD258-804CD25C 000AF8 0004+00 1/0 0/0 0/0 .text            cleanup__18dPa_levelEcallBackFv */
// void dPa_levelEcallBack::cleanup() {
extern "C" void cleanup__18dPa_levelEcallBackFv() {
    /* empty function */
}

/* 804CD25C-804CD2A4 000AFC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 804CD2A4-804CD2EC 000B44 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 804CD2EC-804CD348 000B8C 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 804CD348-804CD3B8 000BE8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 804CD3B8-804CD428 000C58 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE474-804CE478 000080 0004+00 0/2 0/0 0/0 .rodata          @4187 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4187 = 5.0f;
COMPILER_STRIP_GATE(0x804CE474, &lit_4187);
#pragma pop

/* 804CE478-804CE47C 000084 0004+00 0/2 0/0 0/0 .rodata          @4188 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4188 = 3.0f;
COMPILER_STRIP_GATE(0x804CE478, &lit_4188);
#pragma pop

/* 804CE47C-804CE480 000088 0004+00 0/1 0/0 0/0 .rodata          @4189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4189 = 2.0f;
COMPILER_STRIP_GATE(0x804CE47C, &lit_4189);
#pragma pop

/* 804CE480-804CE484 00008C 0004+00 0/2 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = -1.0f;
COMPILER_STRIP_GATE(0x804CE480, &lit_4190);
#pragma pop

/* 804CD428-804CD5B8 000CC8 0190+00 1/1 0/0 0/0 .text            bg_check__11daObjLife_cFv */
void daObjLife_c::bg_check() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE484-804CE488 000090 0004+00 2/2 0/0 0/0 .rodata          @4206 */
SECTION_RODATA static f32 const lit_4206 = 4.0f;
COMPILER_STRIP_GATE(0x804CE484, &lit_4206);

/* 804CE4A4-804CE4A4 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804CE4A4 = "D_MN11A";
#pragma pop

/* 804CD5B8-804CD660 000E58 00A8+00 3/3 0/0 0/0 .text            actionWaitInit__11daObjLife_cFv */
void daObjLife_c::actionWaitInit() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE488-804CE48C 000094 0004+00 0/2 0/0 0/0 .rodata          @4299 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4299 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x804CE488, &lit_4299);
#pragma pop

/* 804CE48C-804CE490 000098 0004+00 0/2 0/0 0/0 .rodata          @4300 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4300 = 0.5f;
COMPILER_STRIP_GATE(0x804CE48C, &lit_4300);
#pragma pop

/* 804CE490-804CE494 00009C 0004+00 0/1 0/0 0/0 .rodata          @4301 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4301 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804CE490, &lit_4301);
#pragma pop

/* 804CE494-804CE498 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4302 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4302 = 3.5f;
COMPILER_STRIP_GATE(0x804CE494, &lit_4302);
#pragma pop

/* 804CE498-804CE49C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4303 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4303 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x804CE498, &lit_4303);
#pragma pop

/* 804CD660-804CD8C0 000F00 0260+00 1/0 0/0 0/0 .text            actionWait__11daObjLife_cFv */
void daObjLife_c::actionWait() {
    // NONMATCHING
}

/* 804CD8C0-804CD98C 001160 00CC+00 3/3 0/0 0/0 .text initActionOrderGetDemo__11daObjLife_cFv */
void daObjLife_c::initActionOrderGetDemo() {
    // NONMATCHING
}

/* 804CD98C-804CDA08 00122C 007C+00 1/0 0/0 0/0 .text            actionOrderGetDemo__11daObjLife_cFv
 */
void daObjLife_c::actionOrderGetDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE4A4-804CE4A4 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804CE4AC = "DEFAULT_GETITEM";
SECTION_DEAD static char const* const stringBase_804CE4BC = "F_SP121";
SECTION_DEAD static char const* const stringBase_804CE4C4 = "F_SP109";
#pragma pop

/* 804CDA08-804CDBC8 0012A8 01C0+00 1/0 0/0 0/0 .text            actionGetDemo__11daObjLife_cFv */
void daObjLife_c::actionGetDemo() {
    // NONMATCHING
}

/* 804CDBC8-804CDC2C 001468 0064+00 1/0 0/0 0/0 .text            actionSwOnWait__11daObjLife_cFv */
void daObjLife_c::actionSwOnWait() {
    // NONMATCHING
}

/* 804CDC2C-804CDD0C 0014CC 00E0+00 1/1 0/0 0/0 .text actionInitBoomerangCarry__11daObjLife_cFv */
void daObjLife_c::actionInitBoomerangCarry() {
    // NONMATCHING
}

/* 804CDD0C-804CDD7C 0015AC 0070+00 1/0 0/0 0/0 .text actionBoomerangCarry__11daObjLife_cFv */
void daObjLife_c::actionBoomerangCarry() {
    // NONMATCHING
}

/* 804CDD7C-804CDD8C 00161C 0010+00 0/0 0/0 1/1 .text            actionInitWait2__11daObjLife_cFv */
void daObjLife_c::actionInitWait2() {
    // NONMATCHING
}

/* 804CDD8C-804CDDAC 00162C 0020+00 1/0 0/0 0/0 .text            actionWait2__11daObjLife_cFv */
void daObjLife_c::actionWait2() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE49C-804CE4A0 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4474 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4474 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804CE49C, &lit_4474);
#pragma pop

/* 804CDDAC-804CDE70 00164C 00C4+00 1/1 0/0 0/0 .text            calcScale__11daObjLife_cFv */
void daObjLife_c::calcScale() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804CE4A0-804CE4A4 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4538 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4538 = 300.0f;
COMPILER_STRIP_GATE(0x804CE4A0, &lit_4538);
#pragma pop

/* 804CDE70-804CE19C 001710 032C+00 1/1 0/0 0/0 .text            execute__11daObjLife_cFv */
void daObjLife_c::execute() {
    // NONMATCHING
}

/* 804CE19C-804CE1F0 001A3C 0054+00 1/1 0/0 0/0 .text            draw__11daObjLife_cFv */
void daObjLife_c::draw() {
    // NONMATCHING
}

/* 804CE1F0-804CE214 001A90 0024+00 1/0 0/0 0/0 .text            setListStart__11daObjLife_cFv */
void daObjLife_c::setListStart() {
    // NONMATCHING
}

/* 804CE214-804CE274 001AB4 0060+00 1/1 0/0 0/0 .text            _delete__11daObjLife_cFv */
void daObjLife_c::_delete() {
    // NONMATCHING
}

/* 804CE274-804CE294 001B14 0020+00 1/0 0/0 0/0 .text            daObjLife_Draw__FP11daObjLife_c */
static void daObjLife_Draw(daObjLife_c* param_0) {
    // NONMATCHING
}

/* 804CE294-804CE2B4 001B34 0020+00 1/0 0/0 0/0 .text            daObjLife_Execute__FP11daObjLife_c
 */
static void daObjLife_Execute(daObjLife_c* param_0) {
    // NONMATCHING
}

/* 804CE2B4-804CE2D4 001B54 0020+00 1/0 0/0 0/0 .text            daObjLife_Delete__FP11daObjLife_c
 */
static void daObjLife_Delete(daObjLife_c* param_0) {
    // NONMATCHING
}

/* 804CE2D4-804CE2F4 001B74 0020+00 1/0 0/0 0/0 .text            daObjLife_Create__FP10fopAc_ac_c */
static void daObjLife_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804CE2F4-804CE33C 001B94 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 804CE33C-804CE3B0 001BDC 0074+00 1/0 0/0 0/0 .text            __dt__18dPa_levelEcallBackFv */
// dPa_levelEcallBack::~dPa_levelEcallBack() {
extern "C" void __dt__18dPa_levelEcallBackFv() {
    // NONMATCHING
}

/* 804CE3B0-804CE3B4 001C50 0004+00 1/0 0/0 0/0 .text
 * execute__18JPAEmitterCallBackFP14JPABaseEmitter              */
// void JPAEmitterCallBack::execute(JPABaseEmitter* param_0) {
extern "C" void execute__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 804CE3B4-804CE3B8 001C54 0004+00 1/0 0/0 0/0 .text
 * executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter         */
// void JPAEmitterCallBack::executeAfter(JPABaseEmitter* param_0) {
extern "C" void executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 804CE3B8-804CE3BC 001C58 0004+00 1/0 0/0 0/0 .text draw__18JPAEmitterCallBackFP14JPABaseEmitter
 */
// void JPAEmitterCallBack::draw(JPABaseEmitter* param_0) {
extern "C" void draw__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 804CE3BC-804CE3C0 001C5C 0004+00 1/0 0/0 0/0 .text
 * drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter            */
// void JPAEmitterCallBack::drawAfter(JPABaseEmitter* param_0) {
extern "C" void drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter() {
    /* empty function */
}

/* 804CE3C0-804CE3DC 001C60 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
extern "C" void func_804CE3C0(void* _this, u8* param_0) {
    // NONMATCHING
}

/* 804CE3DC-804CE3E4 001C7C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_804CE3DC() {
    // NONMATCHING
}

/* 804CE3E4-804CE3EC 001C84 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_804CE3E4() {
    // NONMATCHING
}

/* 804CE4A4-804CE4A4 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */