/**
 * d_a_obj_wood_pendulum.cpp
 *
 */

#include "d/actor/d_a_obj_wood_pendulum.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__13daObjWPndlm_cFv();
extern "C" void setBaseMtx__13daObjWPndlm_cFv();
extern "C" void Create__13daObjWPndlm_cFv();
extern "C" void CreateHeap__13daObjWPndlm_cFv();
extern "C" void create__13daObjWPndlm_cFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void execute__13daObjWPndlm_cFv();
extern "C" void draw__13daObjWPndlm_cFv();
extern "C" void _delete__13daObjWPndlm_cFv();
extern "C" static void daObjWPndlm_Draw__FP13daObjWPndlm_c();
extern "C" static void daObjWPndlm_Execute__FP13daObjWPndlm_c();
extern "C" static void daObjWPndlm_Delete__FP13daObjWPndlm_c();
extern "C" static void daObjWPndlm_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_obj_wood_pendulum__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];

//
// Declarations:
//

/* 80D393F8-80D39418 000078 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
static int CheckCreateHeap(fopAc_ac_c* i_this) {
    // NONMATCHING
}

/* 80D39418-80D39454 000098 003C+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjWPndlm_cFv */
void daObjWPndlm_c::initBaseMtx() {
    // NONMATCHING
}

/* 80D39454-80D394CC 0000D4 0078+00 2/2 0/0 0/0 .text            setBaseMtx__13daObjWPndlm_cFv */
void daObjWPndlm_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D39C88-80D39CC8 000000 0040+00 2/2 0/0 0/0 .rodata          l_sph_src */
const static dCcD_SrcSph l_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x0, 0xd}, {0x0, 0x10}, 0x0}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x1, 0x0, 0x8},                            // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2},                            // mGObjTg
        {0x0},                                                         // mGObjCo
    },                                                                 // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 150.0f}  // mSph
    }                                 // mSphAttr
};

/* 80D39CC8-80D39D08 000040 0040+00 0/1 0/0 0/0 .rodata          l_sph_src2 */
#pragma push
#pragma force_active on
const static dCcD_SrcSph l_sph_src2 = {
    {
        {0x0, {{0x0, 0x0, 0xc}, {0xd8fafdff, 0x11}, 0x0}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x1, 0x0, 0x8},                 // mGObjAt
        {dCcD_SE_NONE, 0x2, 0x0, 0x0, 0x3},                 // mGObjTg
        {0x0},                                              // mGObjCo
    },                                                      // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 120.0f}  // mSph
    }                                 // mSphAttr
};
#pragma pop

/* 80D39D08-80D39D10 000080 0004+04 0/1 0/0 0/0 .rodata          @3672 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3672[1 + 1 /* padding */] = {
    0x43360B61,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x80D39D08, &lit_3672);
#pragma pop

/* 80D39D10-80D39D18 000088 0008+00 0/1 0/0 0/0 .rodata          @3674 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3674[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D39D10, &lit_3674);
#pragma pop

/* 80D394CC-80D395C8 00014C 00FC+00 1/1 0/0 0/0 .text            Create__13daObjWPndlm_cFv */
int daObjWPndlm_c::Create() {
    // NONMATCHING
}

/* 80D39D44-80D39D48 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
static char* l_arcName = "A_Turuki";

/* 80D395C8-80D39638 000248 0070+00 1/1 0/0 0/0 .text            CreateHeap__13daObjWPndlm_cFv */
int daObjWPndlm_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D39D48-80D39D68 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjWPndlm_Method */
static actor_method_class l_daObjWPndlm_Method = {
    (process_method_func)daObjWPndlm_Create__FP10fopAc_ac_c,
    (process_method_func)daObjWPndlm_Delete__FP13daObjWPndlm_c,
    (process_method_func)daObjWPndlm_Execute__FP13daObjWPndlm_c,
    0,
    (process_method_func)daObjWPndlm_Draw__FP13daObjWPndlm_c,
};

/* 80D39D68-80D39D98 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_WoodPendulum */
extern actor_process_profile_definition g_profile_Obj_WoodPendulum = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_WoodPendulum,  // mProcName
  &g_fpcLf_Method.mBase,  // sub_method
  sizeof(daObjWPndlm_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  253,                    // mPriority
  &l_daObjWPndlm_Method,  // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80D39D98-80D39DA4 000054 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80D39DA4-80D39DB0 000060 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D39638-80D39798 0002B8 0160+00 1/1 0/0 0/0 .text            create__13daObjWPndlm_cFv */
int daObjWPndlm_c::create() {
    // NONMATCHING
}

/* 80D39798-80D3981C 000418 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80D3981C-80D398E8 00049C 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80D398E8-80D39930 000568 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80D39930-80D39978 0005B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D39D18-80D39D30 000090 0018+00 0/0 0/0 0/0 .rodata          @3826 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3826[24] = {
    0xC2, 0x70, 0x00, 0x00, 0xC4, 0x8C, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0xC4, 0x99, 0xC0, 0x00, 0xC2, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D39D18, &lit_3826);
#pragma pop

/* 80D39D30-80D39D34 0000A8 0004+00 0/1 0/0 0/0 .rodata          @3860 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3860[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D39D30, &lit_3860);
#pragma pop

/* 80D39D34-80D39D38 0000AC 0004+00 0/1 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3861 = -1200.0f;
COMPILER_STRIP_GATE(0x80D39D34, &lit_3861);
#pragma pop

/* 80D39978-80D39B68 0005F8 01F0+00 1/1 0/0 0/0 .text            execute__13daObjWPndlm_cFv */
int daObjWPndlm_c::execute() {
    // NONMATCHING
}

/* 80D39B68-80D39BCC 0007E8 0064+00 1/1 0/0 0/0 .text            draw__13daObjWPndlm_cFv */
int daObjWPndlm_c::draw() {
    // NONMATCHING
}

/* 80D39BCC-80D39C00 00084C 0034+00 1/1 0/0 0/0 .text            _delete__13daObjWPndlm_cFv */
int daObjWPndlm_c::_delete() {
    // NONMATCHING
}

/* 80D39C00-80D39C20 000880 0020+00 1/0 0/0 0/0 .text            daObjWPndlm_Draw__FP13daObjWPndlm_c
 */
static int daObjWPndlm_Draw(daObjWPndlm_c* i_this) {
    // NONMATCHING
}

/* 80D39C20-80D39C40 0008A0 0020+00 1/0 0/0 0/0 .text daObjWPndlm_Execute__FP13daObjWPndlm_c */
static int daObjWPndlm_Execute(daObjWPndlm_c* i_this) {
    // NONMATCHING
}

/* 80D39C40-80D39C60 0008C0 0020+00 1/0 0/0 0/0 .text daObjWPndlm_Delete__FP13daObjWPndlm_c */
static int daObjWPndlm_Delete(daObjWPndlm_c* i_this) {
    // NONMATCHING
}

/* 80D39C60-80D39C80 0008E0 0020+00 1/0 0/0 0/0 .text            daObjWPndlm_Create__FP10fopAc_ac_c
 */
static int daObjWPndlm_Create(fopAc_ac_c* i_this) {
    // NONMATCHING
}