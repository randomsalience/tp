/**
 * @file d_a_obj_sakuita.cpp
 * 
*/

#include "d/actor/d_a_obj_sakuita.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void create_init__14daObjSakuita_cFv();
extern "C" void initBaseMtx__14daObjSakuita_cFv();
extern "C" void setBaseMtx__14daObjSakuita_cFv();
extern "C" void setPlatePos__14daObjSakuita_cFv();
extern "C" void calcAngle__14daObjSakuita_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjSakuita_Draw__FP14daObjSakuita_c();
extern "C" static void daObjSakuita_Execute__FP14daObjSakuita_c();
extern "C" static bool daObjSakuita_IsDelete__FP14daObjSakuita_c();
extern "C" static void daObjSakuita_Delete__FP14daObjSakuita_c();
extern "C" void __dt__14daObjSakuita_cFv();
extern "C" static void daObjSakuita_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" u8 const M_attr__14daObjSakuita_c[44];
extern "C" extern char const* const d_a_obj_sakuita__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CC50B4-80CC50E0 000000 002C+00 3/3 0/0 0/0 .rodata          M_attr__14daObjSakuita_c */
SECTION_RODATA u8 const daObjSakuita_c::M_attr[44] = {
    0x41, 0xA0, 0x00, 0x00, 0x41, 0x40, 0x00, 0x00, 0x42, 0x8C, 0x00, 0x00, 0xC2, 0x48, 0x00,
    0x00, 0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x44, 0x61,
    0x00, 0x00, 0x46, 0x9C, 0x40, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x14, 0x00, 0x14, 0x00,
};
COMPILER_STRIP_GATE(0x80CC50B4, &daObjSakuita_c::M_attr);

/* 80CC50E0-80CC50E4 00002C 0004+00 0/1 0/0 0/0 .rodata          @3658 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3658 = -30.0f;
COMPILER_STRIP_GATE(0x80CC50E0, &lit_3658);
#pragma pop

/* 80CC50E4-80CC50E8 000030 0004+00 0/1 0/0 0/0 .rodata          @3659 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3659 = -90.0f;
COMPILER_STRIP_GATE(0x80CC50E4, &lit_3659);
#pragma pop

/* 80CC50E8-80CC50EC 000034 0004+00 0/1 0/0 0/0 .rodata          @3660 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3660 = -10.0f;
COMPILER_STRIP_GATE(0x80CC50E8, &lit_3660);
#pragma pop

/* 80CC50EC-80CC50F0 000038 0004+00 0/1 0/0 0/0 .rodata          @3661 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3661 = 30.0f;
COMPILER_STRIP_GATE(0x80CC50EC, &lit_3661);
#pragma pop

/* 80CC50F0-80CC50F4 00003C 0004+00 0/1 0/0 0/0 .rodata          @3662 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3662 = 20.0f;
COMPILER_STRIP_GATE(0x80CC50F0, &lit_3662);
#pragma pop

/* 80CC50F4-80CC50F8 000040 0004+00 0/1 0/0 0/0 .rodata          @3663 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3663 = 10.0f;
COMPILER_STRIP_GATE(0x80CC50F4, &lit_3663);
#pragma pop

/* 80CC5114-80CC5114 000060 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CC5114 = "A_Sakuita";
SECTION_DEAD static char const* const stringBase_80CC511E = "A_Sakuita.bmd";
#pragma pop

/* 80CC512C-80CC5130 -00001 0004+00 4/4 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_sakuita__stringBase0;

/* 80CC46F8-80CC47F8 000078 0100+00 1/1 0/0 0/0 .text            create_init__14daObjSakuita_cFv */
void daObjSakuita_c::create_init() {
    // NONMATCHING
}

/* 80CC47F8-80CC4818 000178 0020+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjSakuita_cFv */
void daObjSakuita_c::initBaseMtx() {
    // NONMATCHING
}

/* 80CC4818-80CC489C 000198 0084+00 2/2 0/0 0/0 .text            setBaseMtx__14daObjSakuita_cFv */
void daObjSakuita_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC50F8-80CC50FC 000044 0004+00 0/0 0/0 0/0 .rodata          @3704 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3704 = 0.5f;
COMPILER_STRIP_GATE(0x80CC50F8, &lit_3704);
#pragma pop

/* 80CC50FC-80CC5100 000048 0004+00 0/1 0/0 0/0 .rodata          @3761 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3761 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CC50FC, &lit_3761);
#pragma pop

/* 80CC5100-80CC5104 00004C 0004+00 0/1 0/0 0/0 .rodata          @3762 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3762[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CC5100, &lit_3762);
#pragma pop

/* 80CC5104-80CC5108 000050 0004+00 0/1 0/0 0/0 .rodata          @3763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3763 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80CC5104, &lit_3763);
#pragma pop

/* 80CC5108-80CC510C 000054 0004+00 0/1 0/0 0/0 .rodata          @3764 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3764 = 8192.0f;
COMPILER_STRIP_GATE(0x80CC5108, &lit_3764);
#pragma pop

/* 80CC489C-80CC4A98 00021C 01FC+00 1/1 0/0 0/0 .text            setPlatePos__14daObjSakuita_cFv */
void daObjSakuita_c::setPlatePos() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC510C-80CC5114 000058 0008+00 1/1 0/0 0/0 .rodata          @3781 */
SECTION_RODATA static u8 const lit_3781[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CC510C, &lit_3781);

/* 80CC4A98-80CC4B5C 000418 00C4+00 1/1 0/0 0/0 .text            calcAngle__14daObjSakuita_cFv */
void daObjSakuita_c::calcAngle() {
    // NONMATCHING
}

/* 80CC4B5C-80CC4BD4 0004DC 0078+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static void createSolidHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80CC4BD4-80CC4C14 000554 0040+00 1/0 0/0 0/0 .text daObjSakuita_Draw__FP14daObjSakuita_c */
static void daObjSakuita_Draw(daObjSakuita_c* param_0) {
    // NONMATCHING
}

/* 80CC4C14-80CC4C6C 000594 0058+00 1/0 0/0 0/0 .text daObjSakuita_Execute__FP14daObjSakuita_c */
static void daObjSakuita_Execute(daObjSakuita_c* param_0) {
    // NONMATCHING
}

/* 80CC4C6C-80CC4C74 0005EC 0008+00 1/0 0/0 0/0 .text daObjSakuita_IsDelete__FP14daObjSakuita_c */
static bool daObjSakuita_IsDelete(daObjSakuita_c* param_0) {
    return true;
}

/* 80CC4C74-80CC4C9C 0005F4 0028+00 1/0 0/0 0/0 .text daObjSakuita_Delete__FP14daObjSakuita_c */
static void daObjSakuita_Delete(daObjSakuita_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC5130-80CC5150 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjSakuita_Method */
static actor_method_class l_daObjSakuita_Method = {
    (process_method_func)daObjSakuita_Create__FP10fopAc_ac_c,
    (process_method_func)daObjSakuita_Delete__FP14daObjSakuita_c,
    (process_method_func)daObjSakuita_Execute__FP14daObjSakuita_c,
    (process_method_func)daObjSakuita_IsDelete__FP14daObjSakuita_c,
    (process_method_func)daObjSakuita_Draw__FP14daObjSakuita_c,
};

/* 80CC5150-80CC5180 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Sakuita */
extern actor_process_profile_definition g_profile_Obj_Sakuita = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Sakuita,       // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjSakuita_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  36,                     // mPriority
  &l_daObjSakuita_Method, // sub_method
  0x00040180,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80CC5180-80CC518C 000054 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CC518C-80CC5198 000060 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CC5198-80CC51A4 00006C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CC51A4-80CC51B0 000078 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CC4C9C-80CC4E40 00061C 01A4+00 1/1 0/0 0/0 .text            __dt__14daObjSakuita_cFv */
daObjSakuita_c::~daObjSakuita_c() {
    // NONMATCHING
}

/* 80CC4E40-80CC4F78 0007C0 0138+00 1/0 0/0 0/0 .text            daObjSakuita_Create__FP10fopAc_ac_c
 */
static void daObjSakuita_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80CC4F78-80CC4FC0 0008F8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80CC4FC0-80CC5008 000940 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80CC5008-80CC5064 000988 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80CC5064-80CC50AC 0009E4 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80CC5114-80CC5114 000060 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
