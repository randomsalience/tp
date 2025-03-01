/**
 * @file d_a_obj_lp.cpp
 * 
*/

#include "d/actor/d_a_obj_lp.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" static void daObj_Lp_Draw__FP12obj_lp_class();
extern "C" static void s_ks_sub__FPvPv();
extern "C" static void hit_check__FP12obj_lp_classP5wd_ss();
extern "C" static void hasu_action__FP12obj_lp_classP5wd_ss();
extern "C" static void set_out_check__FP12obj_lp_classP4cXyz();
extern "C" static void daObj_Lp_Execute__FP12obj_lp_class();
extern "C" static bool daObj_Lp_IsDelete__FP12obj_lp_class();
extern "C" static void daObj_Lp_Delete__FP12obj_lp_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void set_pos_check__FP12obj_lp_classi();
extern "C" static void daObj_Lp_Create__FP10fopAc_ac_c();
extern "C" void __dt__5wd_ssFv();
extern "C" void __ct__5wd_ssFv();
extern "C" extern char const* const d_a_obj_lp__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void update__19mDoExt_3DlineMat0_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void dKy_Sound_get__Fv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C55AD8-80C55ADC 000000 0004+00 1/1 0/0 0/0 .data            l_color$3793 */
SECTION_DATA static u8 l_color[4] = {
    0x14,
    0x0A,
    0x0A,
    0xFF,
};

/* 80C54198-80C542FC 000078 0164+00 1/0 0/0 0/0 .text            daObj_Lp_Draw__FP12obj_lp_class */
static void daObj_Lp_Draw(obj_lp_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55B40-80C55B44 000000 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80C55B44-80C55B48 000004 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80C55B48-80C55B4C 000008 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80C55B4C-80C55B50 00000C 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80C55B50-80C55B54 000010 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80C55B54-80C55B58 000014 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80C55B58-80C55B5C 000018 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80C55B5C-80C55B60 00001C 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80C55B60-80C55B64 000020 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80C55B64-80C55B68 000024 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80C55B68-80C55B6C 000028 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80C55B6C-80C55B70 00002C 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80C55B70-80C55B74 000030 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80C55B74-80C55B78 000034 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80C55B78-80C55B7C 000038 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80C55B7C-80C55B80 00003C 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80C55B80-80C55B84 000040 0004+00 0/2 0/0 0/0 .bss             tandem */
#pragma push
#pragma force_active on
static u8 tandem[4];
#pragma pop

/* 80C55B84-80C55B88 000044 0004+00 0/2 0/0 0/0 .bss             demo_f */
#pragma push
#pragma force_active on
static u8 demo_f[4];
#pragma pop

/* 80C55B88-80C55BB0 000048 0028+00 1/3 0/0 0/0 .bss             target_info */
static u8 target_info[40];

/* 80C55BB0-80C55BB4 000070 0004+00 1/3 0/0 0/0 .bss             target_info_count */
static u8 target_info_count[4];

/* 80C542FC-80C54374 0001DC 0078+00 1/1 0/0 0/0 .text            s_ks_sub__FPvPv */
static void s_ks_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55A10-80C55A14 000000 0004+00 6/6 0/0 0/0 .rodata          @3916 */
SECTION_RODATA static f32 const lit_3916 = 50.0f;
COMPILER_STRIP_GATE(0x80C55A10, &lit_3916);

/* 80C55A14-80C55A18 000004 0004+00 0/1 0/0 0/0 .rodata          @3917 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3917 = -3.0f;
COMPILER_STRIP_GATE(0x80C55A14, &lit_3917);
#pragma pop

/* 80C55A18-80C55A1C 000008 0004+00 0/6 0/0 0/0 .rodata          @3918 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3918[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C55A18, &lit_3918);
#pragma pop

/* 80C55A1C-80C55A20 00000C 0004+00 0/3 0/0 0/0 .rodata          @3919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3919 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C55A1C, &lit_3919);
#pragma pop

/* 80C55A20-80C55A24 000010 0004+00 0/2 0/0 0/0 .rodata          @3920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3920 = 0.5f;
COMPILER_STRIP_GATE(0x80C55A20, &lit_3920);
#pragma pop

/* 80C55A24-80C55A28 000014 0004+00 0/2 0/0 0/0 .rodata          @3921 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3921 = 70.0f;
COMPILER_STRIP_GATE(0x80C55A24, &lit_3921);
#pragma pop

/* 80C55A28-80C55A2C 000018 0004+00 0/1 0/0 0/0 .rodata          @3922 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3922 = 2500.0f;
COMPILER_STRIP_GATE(0x80C55A28, &lit_3922);
#pragma pop

/* 80C55A2C-80C55A30 00001C 0004+00 0/2 0/0 0/0 .rodata          @3923 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3923 = 30.0f;
COMPILER_STRIP_GATE(0x80C55A2C, &lit_3923);
#pragma pop

/* 80C55A30-80C55A34 000020 0004+00 0/1 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3924 = -275.0f;
COMPILER_STRIP_GATE(0x80C55A30, &lit_3924);
#pragma pop

/* 80C55A34-80C55A38 000024 0004+00 0/1 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = 150.0f;
COMPILER_STRIP_GATE(0x80C55A34, &lit_3925);
#pragma pop

/* 80C55A38-80C55A3C 000028 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = -125.0f;
COMPILER_STRIP_GATE(0x80C55A38, &lit_3926);
#pragma pop

/* 80C55A3C-80C55A40 00002C 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 300.0f;
COMPILER_STRIP_GATE(0x80C55A3C, &lit_3927);
#pragma pop

/* 80C55A40-80C55A44 000030 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 75.0f;
COMPILER_STRIP_GATE(0x80C55A40, &lit_3928);
#pragma pop

/* 80C55A44-80C55A48 000034 0004+00 0/1 0/0 0/0 .rodata          @3929 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3929 = 0x3C5A6613;
COMPILER_STRIP_GATE(0x80C55A44, &lit_3929);
#pragma pop

/* 80C55A48-80C55A4C 000038 0004+00 0/1 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3930 = -0.5f;
COMPILER_STRIP_GATE(0x80C55A48, &lit_3930);
#pragma pop

/* 80C55A4C-80C55A50 00003C 0004+00 0/1 0/0 0/0 .rodata          @3931 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3931 = 3.0f;
COMPILER_STRIP_GATE(0x80C55A4C, &lit_3931);
#pragma pop

/* 80C54374-80C546D8 000254 0364+00 1/1 0/0 0/0 .text            hit_check__FP12obj_lp_classP5wd_ss
 */
static void hit_check(obj_lp_class* param_0, wd_ss* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55A50-80C55A54 000040 0004+00 0/2 0/0 0/0 .rodata          @4054 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4054 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C55A50, &lit_4054);
#pragma pop

/* 80C55A54-80C55A58 000044 0004+00 0/3 0/0 0/0 .rodata          @4055 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4055 = 1.0f;
COMPILER_STRIP_GATE(0x80C55A54, &lit_4055);
#pragma pop

/* 80C55A58-80C55A60 000048 0004+04 0/1 0/0 0/0 .rodata          @4056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4056[1 + 1 /* padding */] = {
    1.0f / 20.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C55A58, &lit_4056);
#pragma pop

/* 80C55A60-80C55A68 000050 0008+00 0/3 0/0 0/0 .rodata          @4057 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4057[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C55A60, &lit_4057);
#pragma pop

/* 80C55A68-80C55A70 000058 0008+00 0/3 0/0 0/0 .rodata          @4058 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4058[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C55A68, &lit_4058);
#pragma pop

/* 80C55A70-80C55A78 000060 0008+00 0/3 0/0 0/0 .rodata          @4059 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4059[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C55A70, &lit_4059);
#pragma pop

/* 80C55A78-80C55A7C 000068 0004+00 0/1 0/0 0/0 .rodata          @4060 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4060 = 2.0f;
COMPILER_STRIP_GATE(0x80C55A78, &lit_4060);
#pragma pop

/* 80C55A7C-80C55A80 00006C 0004+00 0/1 0/0 0/0 .rodata          @4061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4061 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x80C55A7C, &lit_4061);
#pragma pop

/* 80C55A80-80C55A84 000070 0004+00 0/1 0/0 0/0 .rodata          @4062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4062 = -200.0f;
COMPILER_STRIP_GATE(0x80C55A80, &lit_4062);
#pragma pop

/* 80C55A84-80C55A88 000074 0004+00 0/1 0/0 0/0 .rodata          @4063 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4063 = 0x3F7C28F6;
COMPILER_STRIP_GATE(0x80C55A84, &lit_4063);
#pragma pop

/* 80C55A88-80C55A8C 000078 0004+00 0/1 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4064 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C55A88, &lit_4064);
#pragma pop

/* 80C546D8-80C54B20 0005B8 0448+00 1/1 0/0 0/0 .text hasu_action__FP12obj_lp_classP5wd_ss */
static void hasu_action(obj_lp_class* param_0, wd_ss* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55A8C-80C55A90 00007C 0004+00 0/3 0/0 0/0 .rodata          @4128 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4128 = 100.0f;
COMPILER_STRIP_GATE(0x80C55A8C, &lit_4128);
#pragma pop

/* 80C55A90-80C55A98 000080 0008+00 0/2 0/0 0/0 .rodata          @4130 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4130[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C55A90, &lit_4130);
#pragma pop

/* 80C54B20-80C54D40 000A00 0220+00 1/1 0/0 0/0 .text set_out_check__FP12obj_lp_classP4cXyz */
static void set_out_check(obj_lp_class* param_0, cXyz* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55A98-80C55A9C 000088 0004+00 0/1 0/0 0/0 .rodata          @4218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4218 = 5000.0f;
COMPILER_STRIP_GATE(0x80C55A98, &lit_4218);
#pragma pop

/* 80C55A9C-80C55AA0 00008C 0004+00 0/2 0/0 0/0 .rodata          @4219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4219 = 10.0f;
COMPILER_STRIP_GATE(0x80C55A9C, &lit_4219);
#pragma pop

/* 80C55AA0-80C55AA8 000090 0008+00 0/1 0/0 0/0 .rodata          @4221 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4221[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C55AA0, &lit_4221);
#pragma pop

/* 80C55AC0-80C55AC0 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C55AC0 = "D_MN05";
#pragma pop

/* 80C54D40-80C550F0 000C20 03B0+00 2/1 0/0 0/0 .text            daObj_Lp_Execute__FP12obj_lp_class
 */
static void daObj_Lp_Execute(obj_lp_class* param_0) {
    // NONMATCHING
}

/* 80C550F0-80C550F8 000FD0 0008+00 1/0 0/0 0/0 .text            daObj_Lp_IsDelete__FP12obj_lp_class
 */
static bool daObj_Lp_IsDelete(obj_lp_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80C55AC0-80C55AC0 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C55AC7 = "Obj_lp";
#pragma pop

/* 80C550F8-80C5518C 000FD8 0094+00 1/0 0/0 0/0 .text            daObj_Lp_Delete__FP12obj_lp_class
 */
static void daObj_Lp_Delete(obj_lp_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55AA8-80C55AAC 000098 0004+00 1/1 0/0 0/0 .rodata          @4267 */
SECTION_RODATA static f32 const lit_4267 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C55AA8, &lit_4267);

/* 80C5518C-80C552C0 00106C 0134+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55AAC-80C55AB0 00009C 0004+00 0/1 0/0 0/0 .rodata          @4320 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4320 = 35.0f;
COMPILER_STRIP_GATE(0x80C55AAC, &lit_4320);
#pragma pop

/* 80C55AB0-80C55AB4 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4321 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4321 = 1.5f;
COMPILER_STRIP_GATE(0x80C55AB0, &lit_4321);
#pragma pop

/* 80C552C0-80C55488 0011A0 01C8+00 1/1 0/0 0/0 .text            set_pos_check__FP12obj_lp_classi */
static void set_pos_check(obj_lp_class* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C55AB4-80C55AB8 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4457 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4457 = -100.0f;
COMPILER_STRIP_GATE(0x80C55AB4, &lit_4457);
#pragma pop

/* 80C55AB8-80C55ABC 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4458 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4458 = 65536.0f;
COMPILER_STRIP_GATE(0x80C55AB8, &lit_4458);
#pragma pop

/* 80C55ABC-80C55AC0 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4459 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4459 = 200.0f;
COMPILER_STRIP_GATE(0x80C55ABC, &lit_4459);
#pragma pop

/* 80C55AC0-80C55AC0 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C55ACE = "F_SP127";
#pragma pop

/* 80C55ADC-80C55AFC -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Lp_Method */
static actor_method_class l_daObj_Lp_Method = {
    (process_method_func)daObj_Lp_Create__FP10fopAc_ac_c,
    (process_method_func)daObj_Lp_Delete__FP12obj_lp_class,
    (process_method_func)daObj_Lp_Execute__FP12obj_lp_class,
    (process_method_func)daObj_Lp_IsDelete__FP12obj_lp_class,
    (process_method_func)daObj_Lp_Draw__FP12obj_lp_class,
};

/* 80C55AFC-80C55B2C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_LP */
extern actor_process_profile_definition g_profile_OBJ_LP = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_OBJ_LP,            // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(obj_lp_class),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  708,                    // mPriority
  &l_daObj_Lp_Method,     // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C55B2C-80C55B40 000054 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 80C55488-80C559C8 001368 0540+00 1/0 0/0 0/0 .text            daObj_Lp_Create__FP10fopAc_ac_c */
static void daObj_Lp_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C559C8-80C55A04 0018A8 003C+00 1/1 0/0 0/0 .text            __dt__5wd_ssFv */
wd_ss::~wd_ss() {
    // NONMATCHING
}

/* 80C55A04-80C55A08 0018E4 0004+00 1/1 0/0 0/0 .text            __ct__5wd_ssFv */
wd_ss::wd_ss() {
    /* empty function */
}

/* ############################################################################################## */
/* 80C55BB4-80C55BB8 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80C55BB4[4];
#pragma pop

/* 80C55BB8-80C55BBC 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80C55BB8[4];
#pragma pop

/* 80C55BBC-80C55BC0 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C55BBC[4];
#pragma pop

/* 80C55BC0-80C55BC4 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C55BC0[4];
#pragma pop

/* 80C55BC4-80C55BC8 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C55BC4[4];
#pragma pop

/* 80C55BC8-80C55BCC 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C55BC8[4];
#pragma pop

/* 80C55BCC-80C55BD0 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80C55BCC[4];
#pragma pop

/* 80C55BD0-80C55BD4 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80C55BD0[4];
#pragma pop

/* 80C55BD4-80C55BD8 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80C55BD4[4];
#pragma pop

/* 80C55BD8-80C55BDC 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80C55BD8[4];
#pragma pop

/* 80C55BDC-80C55BE0 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C55BDC[4];
#pragma pop

/* 80C55BE0-80C55BE4 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C55BE0[4];
#pragma pop

/* 80C55BE4-80C55BE8 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80C55BE4[4];
#pragma pop

/* 80C55BE8-80C55BEC 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C55BE8[4];
#pragma pop

/* 80C55BEC-80C55BF0 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C55BEC[4];
#pragma pop

/* 80C55BF0-80C55BF4 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80C55BF0[4];
#pragma pop

/* 80C55BF4-80C55BF8 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80C55BF4[4];
#pragma pop

/* 80C55BF8-80C55BFC 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C55BF8[4];
#pragma pop

/* 80C55BFC-80C55C00 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80C55BFC[4];
#pragma pop

/* 80C55C00-80C55C04 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C55C00[4];
#pragma pop

/* 80C55C04-80C55C08 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80C55C04[4];
#pragma pop

/* 80C55C08-80C55C0C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C55C08[4];
#pragma pop

/* 80C55C0C-80C55C10 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C55C0C[4];
#pragma pop

/* 80C55C10-80C55C14 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C55C10[4];
#pragma pop

/* 80C55C14-80C55C18 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C55C14[4];
#pragma pop

/* 80C55AC0-80C55AC0 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
