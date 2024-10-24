/**
 * @file d_a_obj_smw_stone.cpp
 * 
*/

#include "d/actor/d_a_obj_smw_stone.h"
#include "dolphin/types.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" static void daSmWStone_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__12daSmWStone_cFv();
extern "C" void __dt__12daSmWStone_cFv();
extern "C" void create__12daSmWStone_cFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void execute__12daSmWStone_cFv();
extern "C" void draw__12daSmWStone_cFv();
extern "C" void Delete__12daSmWStone_cFv();
extern "C" void exeModeHowl__12daSmWStone_cFv();
extern "C" void setModelMtx__12daSmWStone_cFv();
extern "C" void createHeap__12daSmWStone_cFv();
extern "C" void init__12daSmWStone_cFv();
extern "C" void chkWlfInRange__12daSmWStone_cFv();
extern "C" static void daSmWStone_create__FP12daSmWStone_c();
extern "C" static void daSmWStone_Delete__FP12daSmWStone_c();
extern "C" static void daSmWStone_execute__FP12daSmWStone_c();
extern "C" static void daSmWStone_draw__FP12daSmWStone_c();
extern "C" static void func_80CDEEDC();
extern "C" static void func_80CDEEE4();
extern "C" extern char const* const d_a_obj_smw_stone__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__13cBgS_PolyInfoFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void startWindStoneSound__13Z2WolfHowlMgrFScP3Vec();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];

//
// Declarations:
//

/* 80CDE518-80CDE538 000078 0020+00 1/1 0/0 0/0 .text daSmWStone_c_createHeap__FP10fopAc_ac_c */
static void daSmWStone_c_createHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CDEF14-80CDEF14 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CDEF14 = "WStoneF";
#pragma pop

/* 80CDEF1C-80CDEF20 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_smw_stone__stringBase0;

/* 80CDEF20-80CDEF40 -00001 0020+00 1/0 0/0 0/0 .data            daSmWStone_METHODS */
static actor_method_class daSmWStone_METHODS = {
    (process_method_func)daSmWStone_create__FP12daSmWStone_c,
    (process_method_func)daSmWStone_Delete__FP12daSmWStone_c,
    (process_method_func)daSmWStone_execute__FP12daSmWStone_c,
    0,
    (process_method_func)daSmWStone_draw__FP12daSmWStone_c,
};

/* 80CDEF40-80CDEF70 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_SmWStone */
extern actor_process_profile_definition g_profile_Obj_SmWStone = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_Obj_SmWStone,     // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  sizeof(daSmWStone_c),  // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  735,                   // mPriority
  &daSmWStone_METHODS,   // sub_method
  0x00044100,            // mStatus
  fopAc_ENV_e,           // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 80CDEF70-80CDEF7C 000054 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80CDEF7C-80CDEFA0 000060 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CDEEE4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CDEEDC,
};

/* 80CDEFA0-80CDEFAC 000084 000C+00 2/2 0/0 0/0 .data            __vt__12daSmWStone_c */
SECTION_DATA extern void* __vt__12daSmWStone_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daSmWStone_cFv,
};

/* 80CDE538-80CDE588 000098 0050+00 2/2 0/0 0/0 .text            __ct__12daSmWStone_cFv */
daSmWStone_c::daSmWStone_c() {
    // NONMATCHING
}

/* 80CDE588-80CDE614 0000E8 008C+00 1/0 0/0 0/0 .text            __dt__12daSmWStone_cFv */
daSmWStone_c::~daSmWStone_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CDEEF4-80CDEF00 000000 000C+00 1/1 0/0 0/0 .rodata          @3776 */
SECTION_RODATA static u8 const lit_3776[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CDEEF4, &lit_3776);

/* 80CDEF00-80CDEF04 00000C 0004+00 1/2 0/0 0/0 .rodata          @4191 */
SECTION_RODATA static u8 const lit_4191[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CDEF00, &lit_4191);

/* 80CDEF04-80CDEF08 000010 0004+00 1/1 0/0 0/0 .rodata          @4192 */
SECTION_RODATA static f32 const lit_4192 = 10.0f;
COMPILER_STRIP_GATE(0x80CDEF04, &lit_4192);

/* 80CDE614-80CDE7F8 000174 01E4+00 1/1 0/0 0/0 .text            create__12daSmWStone_cFv */
void daSmWStone_c::create() {
    // NONMATCHING
}

/* 80CDE7F8-80CDE868 000358 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80CDE868-80CDE8D8 0003C8 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80CDE8D8-80CDE92C 000438 0054+00 1/1 0/0 0/0 .text            execute__12daSmWStone_cFv */
void daSmWStone_c::execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CDEF08-80CDEF0C 000014 0004+00 0/1 0/0 0/0 .rodata          @4238 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4238 = 500.0f;
COMPILER_STRIP_GATE(0x80CDEF08, &lit_4238);
#pragma pop

/* 80CDEF0C-80CDEF10 000018 0004+00 0/1 0/0 0/0 .rodata          @4239 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4239 = 1.0f;
COMPILER_STRIP_GATE(0x80CDEF0C, &lit_4239);
#pragma pop

/* 80CDE92C-80CDEA2C 00048C 0100+00 1/1 0/0 0/0 .text            draw__12daSmWStone_cFv */
void daSmWStone_c::draw() {
    // NONMATCHING
}

/* 80CDEA2C-80CDEAA4 00058C 0078+00 1/1 0/0 0/0 .text            Delete__12daSmWStone_cFv */
void daSmWStone_c::Delete() {
    // NONMATCHING
}

/* 80CDEAA4-80CDEBA0 000604 00FC+00 1/1 0/0 0/0 .text            exeModeHowl__12daSmWStone_cFv */
void daSmWStone_c::exeModeHowl() {
    // NONMATCHING
}

/* 80CDEBA0-80CDEC04 000700 0064+00 2/2 0/0 0/0 .text            setModelMtx__12daSmWStone_cFv */
void daSmWStone_c::setModelMtx() {
    // NONMATCHING
}

/* 80CDEC04-80CDED30 000764 012C+00 1/1 0/0 0/0 .text            createHeap__12daSmWStone_cFv */
void daSmWStone_c::createHeap() {
    // NONMATCHING
}

/* 80CDED30-80CDED9C 000890 006C+00 1/1 0/0 0/0 .text            init__12daSmWStone_cFv */
void daSmWStone_c::init() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CDEF10-80CDEF14 00001C 0004+00 1/1 0/0 0/0 .rodata          @4350 */
SECTION_RODATA static f32 const lit_4350 = 40000.0f;
COMPILER_STRIP_GATE(0x80CDEF10, &lit_4350);

/* 80CDED9C-80CDEE28 0008FC 008C+00 1/1 0/0 0/0 .text            chkWlfInRange__12daSmWStone_cFv */
void daSmWStone_c::chkWlfInRange() {
    // NONMATCHING
}

/* 80CDEE28-80CDEE7C 000988 0054+00 1/0 0/0 0/0 .text            daSmWStone_create__FP12daSmWStone_c
 */
static void daSmWStone_create(daSmWStone_c* param_0) {
    // NONMATCHING
}

/* 80CDEE7C-80CDEE9C 0009DC 0020+00 1/0 0/0 0/0 .text            daSmWStone_Delete__FP12daSmWStone_c
 */
static void daSmWStone_Delete(daSmWStone_c* param_0) {
    // NONMATCHING
}

/* 80CDEE9C-80CDEEBC 0009FC 0020+00 1/0 0/0 0/0 .text daSmWStone_execute__FP12daSmWStone_c */
static void daSmWStone_execute(daSmWStone_c* param_0) {
    // NONMATCHING
}

/* 80CDEEBC-80CDEEDC 000A1C 0020+00 1/0 0/0 0/0 .text            daSmWStone_draw__FP12daSmWStone_c
 */
static void daSmWStone_draw(daSmWStone_c* param_0) {
    // NONMATCHING
}

/* 80CDEEDC-80CDEEE4 000A3C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80CDEEDC() {
    // NONMATCHING
}

/* 80CDEEE4-80CDEEEC 000A44 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80CDEEE4() {
    // NONMATCHING
}

/* 80CDEF14-80CDEF14 000020 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */