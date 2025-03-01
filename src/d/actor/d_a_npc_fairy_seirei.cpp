/**
 * @file d_a_npc_fairy_seirei.cpp
 * 
*/

#include "d/actor/d_a_npc_fairy_seirei.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __dt__19daNpc_FairySeirei_cFv();
extern "C" void create__19daNpc_FairySeirei_cFv();
extern "C" void Delete__19daNpc_FairySeirei_cFv();
extern "C" void Execute__19daNpc_FairySeirei_cFv();
extern "C" bool Draw__19daNpc_FairySeirei_cFv();
extern "C" void isDelete__19daNpc_FairySeirei_cFv();
extern "C" void reset__19daNpc_FairySeirei_cFv();
extern "C" void setParam__19daNpc_FairySeirei_cFv();
extern "C" void getDistTable__12dAttention_cFi();
extern "C" void srchActors__19daNpc_FairySeirei_cFv();
extern "C" void evtTalk__19daNpc_FairySeirei_cFv();
extern "C" void evtCutProc__19daNpc_FairySeirei_cFv();
extern "C" void action__19daNpc_FairySeirei_cFv();
extern "C" void beforeMove__19daNpc_FairySeirei_cFv();
extern "C" void setCollision__19daNpc_FairySeirei_cFv();
extern "C" void setAttnPos__19daNpc_FairySeirei_cFv();
extern "C" bool drawDbgInfo__19daNpc_FairySeirei_cFv();
extern "C" void selectAction__19daNpc_FairySeirei_cFv();
extern "C" void setAction__19daNpc_FairySeirei_cFM19daNpc_FairySeirei_cFPCvPvi_i();
extern "C" void setPrtcls__19daNpc_FairySeirei_cFv();
extern "C" void wait__19daNpc_FairySeirei_cFi();
extern "C" void talk__19daNpc_FairySeirei_cFi();
extern "C" void _to_FairyCave__19daNpc_FairySeirei_cFv();
extern "C" static void daNpc_FairySeirei_Create__FPv();
extern "C" static void daNpc_FairySeirei_Delete__FPv();
extern "C" static void daNpc_FairySeirei_Execute__FPv();
extern "C" static void daNpc_FairySeirei_Draw__FPv();
extern "C" static bool daNpc_FairySeirei_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__8daNpcT_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void
__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__15daNpcT_JntAnm_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__18daNpcT_ActorMngr_cFv();
extern "C" void __dt__22daNpcT_MotionSeqMngr_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void ctrlSubFaceMotion__8daNpcT_cFi();
extern "C" bool checkChangeJoint__8daNpcT_cFi();
extern "C" bool checkRemoveJoint__8daNpcT_cFi();
extern "C" s32 getBackboneJointNo__8daNpcT_cFv();
extern "C" s32 getNeckJointNo__8daNpcT_cFv();
extern "C" s32 getHeadJointNo__8daNpcT_cFv();
extern "C" s32 getFootLJointNo__8daNpcT_cFv();
extern "C" s32 getFootRJointNo__8daNpcT_cFv();
extern "C" bool getEyeballLMaterialNo__8daNpcT_cFv();
extern "C" bool getEyeballRMaterialNo__8daNpcT_cFv();
extern "C" s32 getEyeballMaterialNo__8daNpcT_cFv();
extern "C" void afterJntAnm__8daNpcT_cFi();
extern "C" bool checkChangeEvt__8daNpcT_cFv();
extern "C" bool evtEndProc__8daNpcT_cFv();
extern "C" void setAfterTalkMotion__8daNpcT_cFv();
extern "C" void afterMoved__8daNpcT_cFv();
extern "C" bool chkXYItems__8daNpcT_cFv();
extern "C" void decTmr__8daNpcT_cFv();
extern "C" void drawOtherMdl__8daNpcT_cFv();
extern "C" void drawGhost__8daNpcT_cFv();
extern "C" bool afterSetFaceMotionAnm__8daNpcT_cFiifi();
extern "C" bool afterSetMotionAnm__8daNpcT_cFiifi();
extern "C" void getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c();
extern "C" void getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c();
extern "C" void changeAnm__8daNpcT_cFPiPi();
extern "C" void changeBck__8daNpcT_cFPiPi();
extern "C" void changeBtp__8daNpcT_cFPiPi();
extern "C" void changeBtk__8daNpcT_cFPiPi();
extern "C" void __sinit_d_a_npc_fairy_seirei_cpp();
extern "C" void
__ct__19daNpc_FairySeirei_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__25daNpc_FairySeirei_Param_cFv();
extern "C" static void func_80541D68();
extern "C" static void func_80541D70();
extern "C" u8 const m__25daNpc_FairySeirei_Param_c[148];
extern "C" extern char const* const d_a_npc_fairy_seirei__stringBase0;
extern "C" void* mCutNameList__19daNpc_FairySeirei_c;
extern "C" u8 mCutList__19daNpc_FairySeirei_c[12];

//
// External References:
//

extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_createItemForPresentDemo__FPC4cXyziUciiPC5csXyzPC4cXyz();
extern "C" void fpcEx_IsExist__FUi();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void initialize__18daNpcT_ActorMngr_cFv();
extern "C" void initialize__15daNpcT_MatAnm_cFv();
extern "C" void initialize__22daNpcT_MotionSeqMngr_cFv();
extern "C" void initialize__15daNpcT_JntAnm_cFv();
extern "C" void execute__8daNpcT_cFv();
extern "C" void setEnvTevColor__8daNpcT_cFv();
extern "C" void setRoomNo__8daNpcT_cFv();
extern "C" void ctrlBtk__8daNpcT_cFv();
extern "C" void ctrlJoint__8daNpcT_cFP8J3DJointP8J3DModel();
extern "C" void evtProc__8daNpcT_cFv();
extern "C" void setFootPos__8daNpcT_cFv();
extern "C" void setFootPrtcl__8daNpcT_cFP4cXyzff();
extern "C" bool checkCullDraw__8daNpcT_cFv();
extern "C" void twilight__8daNpcT_cFv();
extern "C" void evtOrder__8daNpcT_cFv();
extern "C" void evtChange__8daNpcT_cFv();
extern "C" void clrParam__8daNpcT_cFv();
extern "C" void setMotionAnm__8daNpcT_cFifi();
extern "C" void setAngle__8daNpcT_cFs();
extern "C" void initTalk__8daNpcT_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcT_cFPiiPP10fopAc_ac_ci();
extern "C" void daNpcT_chkDoBtnIsSpeak__FP10fopAc_ac_c();
extern "C" void daNpcT_chkEvtBit__FUl();
extern "C" void daNpcT_onTmpBit__FUl();
extern "C" void daNpcT_chkTmpBit__FUl();
extern "C" void daNpcF_offTmpBit__FUl();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_29();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" u8 dist_table__12dAttention_c[6552];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" u8 mCcDCyl__8daNpcT_c[68];
extern "C" extern void* __vt__8daNpcT_c[49];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80541E58-80541E58 0000CC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80541E58 = "";
#pragma pop

/* 80541E60-80541E6C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80541E6C-80541E80 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80541E80-80541E88 -00001 0008+00 0/1 0/0 0/0 .data            l_evtList */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_evtList[2] = {
    (void*)&d_a_npc_fairy_seirei__stringBase0,
    (void*)NULL,
};
#pragma pop

/* 80541E88-80541E90 -00001 0008+00 0/1 0/0 0/0 .data            l_resNameList */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_resNameList[2] = {
    (void*)&d_a_npc_fairy_seirei__stringBase0,
    (void*)NULL,
};
#pragma pop

/* 80541E90-80541E94 000030 0002+02 1/0 0/0 0/0 .data            l_loadResPtrn0 */
SECTION_DATA static u16 l_loadResPtrn0[1 + 1 /* padding */] = {
    0x01FF,
    /* padding */
    0x0000,
};

/* 80541E94-80541EA4 -00001 0010+00 0/0 0/0 0/0 .data            l_loadResPtrnList */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_loadResPtrnList[4] = {
    (void*)&l_loadResPtrn0,
    (void*)&l_loadResPtrn0,
    (void*)&l_loadResPtrn0,
    (void*)&l_loadResPtrn0,
};
#pragma pop

/* 80541EA4-80541EC0 000044 001C+00 0/1 0/0 0/0 .data            l_faceMotionAnmData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_faceMotionAnmData[28] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80541EC0-80541EDC 000060 001C+00 0/1 0/0 0/0 .data            l_motionAnmData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_motionAnmData[28] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80541EDC-80541EEC 00007C 0010+00 0/1 0/0 0/0 .data            l_faceMotionSequenceData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_faceMotionSequenceData[16] = {
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
};
#pragma pop

/* 80541EEC-80541EFC 00008C 0010+00 0/1 0/0 0/0 .data            l_motionSequenceData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_motionSequenceData[16] = {
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
};
#pragma pop

/* 80541EFC-80541F00 -00001 0004+00 1/1 0/0 0/0 .data            mCutNameList__19daNpc_FairySeirei_c
 */
SECTION_DATA void* daNpc_FairySeirei_c::mCutNameList = (void*)&d_a_npc_fairy_seirei__stringBase0;

/* 80541F00-80541F0C 0000A0 000C+00 2/2 0/0 0/0 .data            mCutList__19daNpc_FairySeirei_c */
SECTION_DATA u8 daNpc_FairySeirei_c::mCutList[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80541F0C-80541F18 -00001 000C+00 1/1 0/0 0/0 .data            @4368 */
SECTION_DATA static void* lit_4368[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__19daNpc_FairySeirei_cFi,
};

/* 80541F18-80541F24 -00001 000C+00 1/1 0/0 0/0 .data            @4378 */
SECTION_DATA static void* lit_4378[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__19daNpc_FairySeirei_cFi,
};

/* 80541F24-80541F30 -00001 000C+00 1/1 0/0 0/0 .data            @4475 */
SECTION_DATA static void* lit_4475[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__19daNpc_FairySeirei_cFi,
};

/* 80541F30-80541F50 -00001 0020+00 1/0 0/0 0/0 .data            daNpc_FairySeirei_MethodTable */
static actor_method_class daNpc_FairySeirei_MethodTable = {
    (process_method_func)daNpc_FairySeirei_Create__FPv,
    (process_method_func)daNpc_FairySeirei_Delete__FPv,
    (process_method_func)daNpc_FairySeirei_Execute__FPv,
    (process_method_func)daNpc_FairySeirei_IsDelete__FPv,
    (process_method_func)daNpc_FairySeirei_Draw__FPv,
};

/* 80541F50-80541F80 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_FAIRY_SEIREI */
extern actor_process_profile_definition g_profile_NPC_FAIRY_SEIREI = {
  fpcLy_CURRENT_e,                // mLayerID
  7,                              // mListID
  fpcPi_CURRENT_e,                // mListPrio
  PROC_NPC_FAIRY_SEIREI,          // mProcName
  &g_fpcLf_Method.base,          // sub_method
  sizeof(daNpc_FairySeirei_c),    // mSize
  0,                              // mSizeOther
  0,                              // mParameters
  &g_fopAc_Method.base,           // sub_method
  339,                            // mPriority
  &daNpc_FairySeirei_MethodTable, // sub_method
  0x00044000,                     // mStatus
  fopAc_ACTOR_e,                  // mActorType
  fopAc_CULLBOX_CUSTOM_e,         // cullType
};

/* 80541F80-80541F8C 000120 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80541F8C-80541FB0 00012C 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80541D70,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80541D68,
};

/* 80541FB0-80541FBC 000150 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80541FBC-80541FC8 00015C 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80541FC8-80541FD4 000168 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80541FD4-80541FE0 000174 000C+00 3/3 0/0 0/0 .data            __vt__22daNpcT_MotionSeqMngr_c */
SECTION_DATA extern void* __vt__22daNpcT_MotionSeqMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22daNpcT_MotionSeqMngr_cFv,
};

/* 80541FE0-80541FEC 000180 000C+00 4/4 0/0 0/0 .data            __vt__18daNpcT_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcT_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcT_ActorMngr_cFv,
};

/* 80541FEC-80541FF8 00018C 000C+00 3/3 0/0 0/0 .data            __vt__15daNpcT_JntAnm_c */
SECTION_DATA extern void* __vt__15daNpcT_JntAnm_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daNpcT_JntAnm_cFv,
};

/* 80541FF8-80542004 000198 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80542004-80542010 0001A4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80542010-805420D4 0001B0 00C4+00 2/2 0/0 0/0 .data            __vt__19daNpc_FairySeirei_c */
SECTION_DATA extern void* __vt__19daNpc_FairySeirei_c[49] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19daNpc_FairySeirei_cFv,
    (void*)ctrlBtk__8daNpcT_cFv,
    (void*)ctrlSubFaceMotion__8daNpcT_cFi,
    (void*)checkChangeJoint__8daNpcT_cFi,
    (void*)checkRemoveJoint__8daNpcT_cFi,
    (void*)getBackboneJointNo__8daNpcT_cFv,
    (void*)getNeckJointNo__8daNpcT_cFv,
    (void*)getHeadJointNo__8daNpcT_cFv,
    (void*)getFootLJointNo__8daNpcT_cFv,
    (void*)getFootRJointNo__8daNpcT_cFv,
    (void*)getEyeballLMaterialNo__8daNpcT_cFv,
    (void*)getEyeballRMaterialNo__8daNpcT_cFv,
    (void*)getEyeballMaterialNo__8daNpcT_cFv,
    (void*)ctrlJoint__8daNpcT_cFP8J3DJointP8J3DModel,
    (void*)afterJntAnm__8daNpcT_cFi,
    (void*)setParam__19daNpc_FairySeirei_cFv,
    (void*)checkChangeEvt__8daNpcT_cFv,
    (void*)evtTalk__19daNpc_FairySeirei_cFv,
    (void*)evtEndProc__8daNpcT_cFv,
    (void*)evtCutProc__19daNpc_FairySeirei_cFv,
    (void*)setAfterTalkMotion__8daNpcT_cFv,
    (void*)evtProc__8daNpcT_cFv,
    (void*)action__19daNpc_FairySeirei_cFv,
    (void*)beforeMove__19daNpc_FairySeirei_cFv,
    (void*)afterMoved__8daNpcT_cFv,
    (void*)setAttnPos__19daNpc_FairySeirei_cFv,
    (void*)setFootPos__8daNpcT_cFv,
    (void*)setCollision__19daNpc_FairySeirei_cFv,
    (void*)setFootPrtcl__8daNpcT_cFP4cXyzff,
    (void*)checkCullDraw__8daNpcT_cFv,
    (void*)twilight__8daNpcT_cFv,
    (void*)chkXYItems__8daNpcT_cFv,
    (void*)evtOrder__8daNpcT_cFv,
    (void*)decTmr__8daNpcT_cFv,
    (void*)clrParam__8daNpcT_cFv,
    (void*)drawDbgInfo__19daNpc_FairySeirei_cFv,
    (void*)drawOtherMdl__8daNpcT_cFv,
    (void*)drawGhost__8daNpcT_cFv,
    (void*)afterSetFaceMotionAnm__8daNpcT_cFiifi,
    (void*)afterSetMotionAnm__8daNpcT_cFiifi,
    (void*)getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c,
    (void*)getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c,
    (void*)changeAnm__8daNpcT_cFPiPi,
    (void*)changeBck__8daNpcT_cFPiPi,
    (void*)changeBtp__8daNpcT_cFPiPi,
    (void*)changeBtk__8daNpcT_cFPiPi,
    (void*)setMotionAnm__8daNpcT_cFifi,
};

/* 8053FF6C-8054006C 0000EC 0100+00 1/0 0/0 0/0 .text            __dt__19daNpc_FairySeirei_cFv */
daNpc_FairySeirei_c::~daNpc_FairySeirei_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80541D8C-80541E20 000000 0094+00 6/6 0/0 0/0 .rodata          m__25daNpc_FairySeirei_Param_c */
SECTION_RODATA u8 const daNpc_FairySeirei_Param_c::m[148] = {
    0x44, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x45, 0x7A, 0x00,
    0x00, 0x43, 0x7F, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x70,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80541D8C, &daNpc_FairySeirei_Param_c::m);

/* 80541E20-80541E24 000094 0004+00 1/1 0/0 0/0 .rodata          @4024 */
SECTION_RODATA static f32 const lit_4024 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80541E20, &lit_4024);

/* 8054006C-80540298 0001EC 022C+00 1/1 0/0 0/0 .text            create__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::create() {
    // NONMATCHING
}

/* 80540298-805402CC 000418 0034+00 1/1 0/0 0/0 .text            Delete__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::Delete() {
    // NONMATCHING
}

/* 805402CC-805402EC 00044C 0020+00 2/2 0/0 0/0 .text            Execute__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::Execute() {
    // NONMATCHING
}

/* 805402EC-805402F4 00046C 0008+00 1/1 0/0 0/0 .text            Draw__19daNpc_FairySeirei_cFv */
bool daNpc_FairySeirei_c::Draw() {
    return true;
}

/* 805402F4-80540334 000474 0040+00 1/1 0/0 0/0 .text            isDelete__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::isDelete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80541E24-80541E28 000098 0004+00 1/3 0/0 0/0 .rodata          @4178 */
SECTION_RODATA static u8 const lit_4178[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80541E24, &lit_4178);

/* 80541E28-80541E2C 00009C 0004+00 0/2 0/0 0/0 .rodata          @4179 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4179 = 65536.0f;
COMPILER_STRIP_GATE(0x80541E28, &lit_4179);
#pragma pop

/* 80541E2C-80541E30 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4180 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80541E2C, &lit_4180);
#pragma pop

/* 80541E30-80541E34 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4325 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4325 = -1.0f;
COMPILER_STRIP_GATE(0x80541E30, &lit_4325);
#pragma pop

/* 80540334-8054048C 0004B4 0158+00 1/1 0/0 0/0 .text            reset__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::reset() {
    // NONMATCHING
}

/* 8054048C-8054059C 00060C 0110+00 1/0 0/0 0/0 .text            setParam__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::setParam() {
    // NONMATCHING
}

/* 8054059C-805405B0 00071C 0014+00 1/1 0/0 0/0 .text            getDistTable__12dAttention_cFi */
// void dAttention_c::getDistTable(int param_0) {
extern "C" void getDistTable__12dAttention_cFi() {
    // NONMATCHING
}

/* 805405B0-805405B4 000730 0004+00 1/1 0/0 0/0 .text            srchActors__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::srchActors() {
    /* empty function */
}

/* 805405B4-805406BC 000734 0108+00 1/0 0/0 0/0 .text            evtTalk__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::evtTalk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80541E58-80541E58 0000CC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80541E59 = "Seirei";
#pragma pop

/* 805406BC-80540784 00083C 00C8+00 1/0 0/0 0/0 .text            evtCutProc__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::evtCutProc() {
    // NONMATCHING
}

/* 80540784-8054080C 000904 0088+00 1/0 0/0 0/0 .text            action__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::action() {
    // NONMATCHING
}

/* 8054080C-80540884 00098C 0078+00 1/0 0/0 0/0 .text            beforeMove__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::beforeMove() {
    // NONMATCHING
}

/* 80540884-80540988 000A04 0104+00 1/0 0/0 0/0 .text setCollision__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::setCollision() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80541E34-80541E38 0000A8 0004+00 1/1 0/0 0/0 .rodata          @4465 */
SECTION_RODATA static f32 const lit_4465 = 350.0f;
COMPILER_STRIP_GATE(0x80541E34, &lit_4465);

/* 80540988-80540A30 000B08 00A8+00 1/0 0/0 0/0 .text            setAttnPos__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::setAttnPos() {
    // NONMATCHING
}

/* 80540A30-80540A38 000BB0 0008+00 1/0 0/0 0/0 .text drawDbgInfo__19daNpc_FairySeirei_cFv */
bool daNpc_FairySeirei_c::drawDbgInfo() {
    return false;
}

/* 80540A38-80540A80 000BB8 0048+00 1/1 0/0 0/0 .text selectAction__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::selectAction() {
    // NONMATCHING
}

/* 80540A80-80540B28 000C00 00A8+00 2/2 0/0 0/0 .text
 * setAction__19daNpc_FairySeirei_cFM19daNpc_FairySeirei_cFPCvPvi_i */
void daNpc_FairySeirei_c::setAction(int (daNpc_FairySeirei_c::*param_0)(int)) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80541E38-80541E40 0000AC 0006+02 0/1 0/0 0/0 .rodata          id$4489 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const id[6 + 2 /* padding */] = {
    0x8A,
    0xA3,
    0x8A,
    0xA4,
    0x8A,
    0xA5,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80541E38, &id);
#pragma pop

/* 80541E40-80541E44 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4530 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4530 = 1.0f;
COMPILER_STRIP_GATE(0x80541E40, &lit_4530);
#pragma pop

/* 80541E44-80541E48 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4531 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4531 = 200.0f;
COMPILER_STRIP_GATE(0x80541E44, &lit_4531);
#pragma pop

/* 80540B28-80540C54 000CA8 012C+00 1/1 0/0 0/0 .text            setPrtcls__19daNpc_FairySeirei_cFv
 */
void daNpc_FairySeirei_c::setPrtcls() {
    // NONMATCHING
}

/* 80540C54-80540CC0 000DD4 006C+00 1/0 0/0 0/0 .text            wait__19daNpc_FairySeirei_cFi */
void daNpc_FairySeirei_c::wait(int param_0) {
    // NONMATCHING
}

/* 80540CC0-80540E10 000E40 0150+00 2/0 0/0 0/0 .text            talk__19daNpc_FairySeirei_cFi */
void daNpc_FairySeirei_c::talk(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80541E48-80541E58 0000BC 0010+00 1/1 0/0 0/0 .rodata          sTempBit$4575 */
SECTION_RODATA static u8 const sTempBit[16] = {
    0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x7A, 0x00, 0x00, 0x00, 0x7B, 0x00, 0x00, 0x00, 0x7C,
};
COMPILER_STRIP_GATE(0x80541E48, &sTempBit);

/* 80540E10-80540E78 000F90 0068+00 1/1 0/0 0/0 .text _to_FairyCave__19daNpc_FairySeirei_cFv */
void daNpc_FairySeirei_c::_to_FairyCave() {
    // NONMATCHING
}

/* 80540E78-80540E98 000FF8 0020+00 1/0 0/0 0/0 .text            daNpc_FairySeirei_Create__FPv */
static void daNpc_FairySeirei_Create(void* param_0) {
    // NONMATCHING
}

/* 80540E98-80540EB8 001018 0020+00 1/0 0/0 0/0 .text            daNpc_FairySeirei_Delete__FPv */
static void daNpc_FairySeirei_Delete(void* param_0) {
    // NONMATCHING
}

/* 80540EB8-80540ED8 001038 0020+00 1/0 0/0 0/0 .text            daNpc_FairySeirei_Execute__FPv */
static void daNpc_FairySeirei_Execute(void* param_0) {
    // NONMATCHING
}

/* 80540ED8-80540EF8 001058 0020+00 1/0 0/0 0/0 .text            daNpc_FairySeirei_Draw__FPv */
static void daNpc_FairySeirei_Draw(void* param_0) {
    // NONMATCHING
}

/* 80540EF8-80540F00 001078 0008+00 1/0 0/0 0/0 .text            daNpc_FairySeirei_IsDelete__FPv */
static bool daNpc_FairySeirei_IsDelete(void* param_0) {
    return true;
}

/* 80540F00-80540F48 001080 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80540F48-805412D0 0010C8 0388+00 1/1 0/0 0/0 .text            __dt__8daNpcT_cFv */
// daNpcT_c::~daNpcT_c() {
extern "C" void __dt__8daNpcT_cFv() {
    // NONMATCHING
}

/* 805412D0-8054130C 001450 003C+00 3/3 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 8054130C-80541348 00148C 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 80541348-8054174C 0014C8 0404+00 1/1 0/0 0/0 .text
 * __ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc
 */
// daNpcT_c::daNpcT_c(daNpcT_faceMotionAnmData_c const* param_0,
//                       daNpcT_motionAnmData_c const* param_1,
// daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_2, int param_3,
//                          daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_4, int param_5,
//                       daNpcT_evtData_c const* param_6, char** param_7) {
extern "C" void __ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc() {
    // NONMATCHING
}

/* 8054174C-80541750 0018CC 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 80541750-8054184C 0018D0 00FC+00 1/0 0/0 0/0 .text            __dt__15daNpcT_JntAnm_cFv */
// daNpcT_JntAnm_c::~daNpcT_JntAnm_c() {
extern "C" void __dt__15daNpcT_JntAnm_cFv() {
    // NONMATCHING
}

/* 8054184C-80541850 0019CC 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80541850-80541898 0019D0 0048+00 1/0 0/0 0/0 .text            __dt__18daNpcT_ActorMngr_cFv */
// daNpcT_ActorMngr_c::~daNpcT_ActorMngr_c() {
extern "C" void __dt__18daNpcT_ActorMngr_cFv() {
    // NONMATCHING
}

/* 80541898-805418E0 001A18 0048+00 1/0 0/0 0/0 .text            __dt__22daNpcT_MotionSeqMngr_cFv */
// daNpcT_MotionSeqMngr_c::~daNpcT_MotionSeqMngr_c() {
extern "C" void __dt__22daNpcT_MotionSeqMngr_cFv() {
    // NONMATCHING
}

/* 805418E0-80541950 001A60 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80541950-805419AC 001AD0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 805419AC-80541A1C 001B2C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80541A1C-80541A64 001B9C 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80541A64-80541A68 001BE4 0004+00 1/0 0/0 0/0 .text            ctrlSubFaceMotion__8daNpcT_cFi */
// void daNpcT_c::ctrlSubFaceMotion(int param_0) {
extern "C" void ctrlSubFaceMotion__8daNpcT_cFi() {
    /* empty function */
}

/* 80541AA0-80541AA8 001C20 0008+00 1/0 0/0 0/0 .text            getEyeballLMaterialNo__8daNpcT_cFv
 */
// bool daNpcT_c::getEyeballLMaterialNo() {
extern "C" bool getEyeballLMaterialNo__8daNpcT_cFv() {
    return false;
}

/* 80541AA8-80541AB0 001C28 0008+00 1/0 0/0 0/0 .text            getEyeballRMaterialNo__8daNpcT_cFv
 */
// bool daNpcT_c::getEyeballRMaterialNo() {
extern "C" bool getEyeballRMaterialNo__8daNpcT_cFv() {
    return false;
}

/* 80541AC4-80541ACC 001C44 0008+00 1/0 0/0 0/0 .text            evtEndProc__8daNpcT_cFv */
// bool daNpcT_c::evtEndProc() {
extern "C" bool evtEndProc__8daNpcT_cFv() {
    return true;
}

/* 80541AD4-80541ADC 001C54 0008+00 1/0 0/0 0/0 .text            chkXYItems__8daNpcT_cFv */
// bool daNpcT_c::chkXYItems() {
extern "C" bool chkXYItems__8daNpcT_cFv() {
    return false;
}

/* 80541ADC-80541AF4 001C5C 0018+00 1/0 0/0 0/0 .text            decTmr__8daNpcT_cFv */
// void daNpcT_c::decTmr() {
extern "C" void decTmr__8daNpcT_cFv() {
    // NONMATCHING
}

/* 80541AF4-80541AF8 001C74 0004+00 1/0 0/0 0/0 .text            drawOtherMdl__8daNpcT_cFv */
// void daNpcT_c::drawOtherMdl() {
extern "C" void drawOtherMdl__8daNpcT_cFv() {
    /* empty function */
}

/* 80541AF8-80541AFC 001C78 0004+00 1/0 0/0 0/0 .text            drawGhost__8daNpcT_cFv */
// void daNpcT_c::drawGhost() {
extern "C" void drawGhost__8daNpcT_cFv() {
    /* empty function */
}

/* 80541AFC-80541B04 001C7C 0008+00 1/0 0/0 0/0 .text afterSetFaceMotionAnm__8daNpcT_cFiifi */
// bool daNpcT_c::afterSetFaceMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
extern "C" bool afterSetFaceMotionAnm__8daNpcT_cFiifi() {
    return true;
}

/* 80541B04-80541B0C 001C84 0008+00 1/0 0/0 0/0 .text            afterSetMotionAnm__8daNpcT_cFiifi
 */
// bool daNpcT_c::afterSetMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
extern "C" bool afterSetMotionAnm__8daNpcT_cFiifi() {
    return true;
}

/* 80541B0C-80541B3C 001C8C 0030+00 1/0 0/0 0/0 .text
 * getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c     */
// void daNpcT_c::getFaceMotionAnm(daNpcT_faceMotionAnmData_c param_0) {
extern "C" void getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c() {
    // NONMATCHING
}

/* 80541B3C-80541B6C 001CBC 0030+00 1/0 0/0 0/0 .text
 * getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c             */
// void daNpcT_c::getMotionAnm(daNpcT_motionAnmData_c param_0) {
extern "C" void getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c() {
    // NONMATCHING
}

/* 80541B6C-80541B70 001CEC 0004+00 1/0 0/0 0/0 .text            changeAnm__8daNpcT_cFPiPi */
// void daNpcT_c::changeAnm(int* param_0, int* param_1) {
extern "C" void changeAnm__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80541B70-80541B74 001CF0 0004+00 1/0 0/0 0/0 .text            changeBck__8daNpcT_cFPiPi */
// void daNpcT_c::changeBck(int* param_0, int* param_1) {
extern "C" void changeBck__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80541B74-80541B78 001CF4 0004+00 1/0 0/0 0/0 .text            changeBtp__8daNpcT_cFPiPi */
// void daNpcT_c::changeBtp(int* param_0, int* param_1) {
extern "C" void changeBtp__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80541B78-80541B7C 001CF8 0004+00 1/0 0/0 0/0 .text            changeBtk__8daNpcT_cFPiPi */
// void daNpcT_c::changeBtk(int* param_0, int* param_1) {
extern "C" void changeBtk__8daNpcT_cFPiPi() {
    /* empty function */
}

/* ############################################################################################## */
/* 805420D4-805420E0 000274 000C+00 2/2 0/0 0/0 .data            __vt__25daNpc_FairySeirei_Param_c
 */
SECTION_DATA extern void* __vt__25daNpc_FairySeirei_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__25daNpc_FairySeirei_Param_cFv,
};

/* 805420E8-805420F4 000008 000C+00 1/1 0/0 0/0 .bss             @3831 */
static u8 lit_3831[12];

/* 805420F4-805420F8 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80541B7C-80541BE4 001CFC 0068+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_fairy_seirei_cpp */
void __sinit_d_a_npc_fairy_seirei_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80541B7C, __sinit_d_a_npc_fairy_seirei_cpp);
#pragma pop

/* 80541BE4-80541C90 001D64 00AC+00 1/1 0/0 0/0 .text
 * __ct__19daNpc_FairySeirei_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc
 */
daNpc_FairySeirei_c::daNpc_FairySeirei_c(
    daNpcT_faceMotionAnmData_c const* param_0, daNpcT_motionAnmData_c const* param_1,
    daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_2, int param_3,
    daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_4, int param_5,
    daNpcT_evtData_c const* param_6, char** param_7) {
    // NONMATCHING
}

/* 80541C90-80541CD8 001E10 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80541CD8-80541D20 001E58 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80541D20-80541D68 001EA0 0048+00 2/1 0/0 0/0 .text            __dt__25daNpc_FairySeirei_Param_cFv
 */
daNpc_FairySeirei_Param_c::~daNpc_FairySeirei_Param_c() {
    // NONMATCHING
}

/* 80541D68-80541D70 001EE8 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80541D68() {
    // NONMATCHING
}

/* 80541D70-80541D78 001EF0 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80541D70() {
    // NONMATCHING
}

/* 80541E58-80541E58 0000CC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
