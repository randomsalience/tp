/**
 * @file d_a_kytag12.cpp
 * 
*/

#include "d/actor/d_a_kytag12.h"
#include "SSystem/SComponent/c_math.h"
#include "d/actor/d_a_player.h"
#include "d/d_com_inf_game.h"
#include "d/d_kankyo_rain.h"
#include "d/d_kankyo_wether.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void d_kytag12_cut_turn_check__Fv();
extern "C" static void d_kytag12_cut_normal_check__Fv();
extern "C" static bool daKytag12_Draw__FP13kytag12_class();
extern "C" static void daKytag12_light_swprd_proc__FP13kytag12_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void daKytag12_Execute_standard__FP13kytag12_class();
extern "C" static void daKytag12_Execute_arrival__FP13kytag12_class();
extern "C" static void daKytag12_Execute_R00__FP13kytag12_class();
extern "C" static void daKytag12_Execute__FP13kytag12_class();
extern "C" static bool daKytag12_IsDelete__FP13kytag12_class();
extern "C" static void daKytag12_Delete__FP13kytag12_class();
extern "C" static void daKytag12_Create__FP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" extern char const* const d_a_kytag12__stringBase0;

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void dKyw_plight_collision_set__FP4cXyzssfffff();
extern "C" void dKyw_pntlight_collision_get_info__FP4cXyzP4cXyzPf();
extern "C" void dKyr_evil_init__Fv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_14();
extern "C" void _savegpr_18();
extern "C" void _restgpr_14();
extern "C" void _restgpr_18();
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 8085BB38-8085BB80 000078 0048+00 2/2 0/0 0/0 .text            d_kytag12_cut_turn_check__Fv */
static BOOL d_kytag12_cut_turn_check() {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    BOOL var_r3 = false;
    if (player != NULL && (player->getCutType() == daPy_py_c::CUT_TYPE_TURN_RIGHT ||
                           player->getCutType() == daPy_py_c::CUT_TYPE_TURN_LEFT ||
                           player->getCutType() == daPy_py_c::CUT_TYPE_LARGE_TURN_LEFT ||
                           player->getCutType() == daPy_py_c::CUT_TYPE_LARGE_TURN_RIGHT))
    {
        var_r3 = true;
    }

    return var_r3;
}

/* 8085BB80-8085BBB8 0000C0 0038+00 1/1 0/0 0/0 .text            d_kytag12_cut_normal_check__Fv */
static BOOL d_kytag12_cut_normal_check() {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    BOOL var_r3 = true;
    if (player != NULL &&
        (player->getCutType() == 0x28 || player->getCutType() == daPy_py_c::CUT_TYPE_GUARD_ATTACK))
    {
        var_r3 = false;
    }

    return var_r3;
}

/* 8085BBB8-8085BBC0 0000F8 0008+00 1/0 0/0 0/0 .text            daKytag12_Draw__FP13kytag12_class
 */
static int daKytag12_Draw(kytag12_class* param_0) {
    return 1;
}

/* ############################################################################################## */
/* 8085EF00-8085EF04 000000 0004+00 4/4 0/0 0/0 .rodata          @3836 */
SECTION_RODATA static f32 const lit_3836 = 100.0f;
COMPILER_STRIP_GATE(0x8085EF00, &lit_3836);

/* 8085EF04-8085EF08 000004 0004+00 0/1 0/0 0/0 .rodata          @3837 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3837 = 500.0f;
COMPILER_STRIP_GATE(0x8085EF04, &lit_3837);
#pragma pop

/* 8085EF08-8085EF0C 000008 0004+00 0/1 0/0 0/0 .rodata          @3838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3838 = 2000.0f;
COMPILER_STRIP_GATE(0x8085EF08, &lit_3838);
#pragma pop

/* 8085EF0C-8085EF10 00000C 0004+00 0/3 0/0 0/0 .rodata          @3839 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3839 = 1.0f;
COMPILER_STRIP_GATE(0x8085EF0C, &lit_3839);
#pragma pop

/* 8085EF10-8085EF14 000010 0004+00 0/4 0/0 0/0 .rodata          @3840 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3840[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8085EF10, &lit_3840);
#pragma pop

/* 8085EF14-8085EF18 000014 0004+00 0/1 0/0 0/0 .rodata          @3841 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3841 = 0x3C75C28F;
COMPILER_STRIP_GATE(0x8085EF14, &lit_3841);
#pragma pop

/* 8085EF18-8085EF1C 000018 0004+00 0/1 0/0 0/0 .rodata          @3842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3842 = 300.0f;
COMPILER_STRIP_GATE(0x8085EF18, &lit_3842);
#pragma pop

/* 8085EF1C-8085EF20 00001C 0004+00 0/2 0/0 0/0 .rodata          @3843 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3843 = 150.0f;
COMPILER_STRIP_GATE(0x8085EF1C, &lit_3843);
#pragma pop

/* 8085EF20-8085EF24 000020 0004+00 0/1 0/0 0/0 .rodata          @3844 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3844 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8085EF20, &lit_3844);
#pragma pop

/* 8085BBC0-8085BCD0 000100 0110+00 3/3 0/0 0/0 .text
 * daKytag12_light_swprd_proc__FP13kytag12_class                */
static void daKytag12_light_swprd_proc(kytag12_class* i_this) {
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);

    if (dComIfGs_getSelectEquipSword() == LIGHT_SWORD) {
        if (player->getCutType() != 0) {
            if (i_this->field_0x576 == 0) {
                cXyz sp28(player->current.pos);
                sp28.y -= 100.0f;

                i_this->field_0x576 = 25;

                if (d_kytag12_cut_turn_check()) {
                    dKyw_plight_collision_set(&sp28, 0, player->current.angle.y, 500.0f, 2000.0f,
                                              1.0f, 0.0f, 0.015f);
                } else if (d_kytag12_cut_normal_check()) {
                    dKyw_plight_collision_set(&sp28, 1800, player->current.angle.y, 500.0f, 300.0f,
                                              1.0f, 150.0f, 0.3f);
                }
            } else if (i_this->field_0x576 != 0) {
                i_this->field_0x576--;
            }
        } else {
            i_this->field_0x576 = 0;
        }
    }
}


/* 8085BCD0-8085BD0C 000210 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8085EF24-8085EF28 000024 0004+00 0/0 0/0 0/0 .rodata          @4471 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4471 = -5200.0f;
COMPILER_STRIP_GATE(0x8085EF24, &lit_4471);
#pragma pop

/* 8085EF28-8085EF2C 000028 0004+00 0/0 0/0 0/0 .rodata          @4472 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4472 = 30.0f;
COMPILER_STRIP_GATE(0x8085EF28, &lit_4472);
#pragma pop

/* 8085EF2C-8085EF30 00002C 0004+00 0/0 0/0 0/0 .rodata          @4473 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4473 = -700.0f;
COMPILER_STRIP_GATE(0x8085EF2C, &lit_4473);
#pragma pop

/* 8085EF30-8085EF34 000030 0004+00 0/0 0/0 0/0 .rodata          @4474 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4474 = 2100.0f;
COMPILER_STRIP_GATE(0x8085EF30, &lit_4474);
#pragma pop

/* 8085EF34-8085EF38 000034 0004+00 0/0 0/0 0/0 .rodata          @4475 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4475 = 5400.0f;
COMPILER_STRIP_GATE(0x8085EF34, &lit_4475);
#pragma pop

/* 8085EF38-8085EF3C 000038 0004+00 0/1 0/0 0/0 .rodata          @4476 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4476 = 200.0f;
COMPILER_STRIP_GATE(0x8085EF38, &lit_4476);
#pragma pop

/* 8085EF3C-8085EF40 00003C 0004+00 0/2 0/0 0/0 .rodata          @4477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4477 = 50.0f;
COMPILER_STRIP_GATE(0x8085EF3C, &lit_4477);
#pragma pop

/* 8085EF40-8085EF44 000040 0004+00 0/0 0/0 0/0 .rodata          @4478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4478 = -2700.0f;
COMPILER_STRIP_GATE(0x8085EF40, &lit_4478);
#pragma pop

/* 8085EF44-8085EF48 000044 0004+00 0/1 0/0 0/0 .rodata          @4479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4479 = -1100.0f;
COMPILER_STRIP_GATE(0x8085EF44, &lit_4479);
#pragma pop

/* 8085EF48-8085EF4C 000048 0004+00 0/1 0/0 0/0 .rodata          @4480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4480 = 3200.0f;
COMPILER_STRIP_GATE(0x8085EF48, &lit_4480);
#pragma pop

/* 8085EF4C-8085EF50 00004C 0004+00 0/2 0/0 0/0 .rodata          @4481 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4481 = 1000.0f;
COMPILER_STRIP_GATE(0x8085EF4C, &lit_4481);
#pragma pop

/* 8085EF50-8085EF54 000050 0004+00 0/0 0/0 0/0 .rodata          @4482 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4482 = -500.0f;
COMPILER_STRIP_GATE(0x8085EF50, &lit_4482);
#pragma pop

/* 8085EF54-8085EF58 000054 0004+00 0/0 0/0 0/0 .rodata          @4483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4483 = 6700.0f;
COMPILER_STRIP_GATE(0x8085EF54, &lit_4483);
#pragma pop

/* 8085EF58-8085EF5C 000058 0004+00 0/0 0/0 0/0 .rodata          @4484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4484 = -2828.0f;
COMPILER_STRIP_GATE(0x8085EF58, &lit_4484);
#pragma pop

/* 8085EF5C-8085EF60 00005C 0004+00 0/2 0/0 0/0 .rodata          @4485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4485 = 10.0f;
COMPILER_STRIP_GATE(0x8085EF5C, &lit_4485);
#pragma pop

/* 8085EF60-8085EF64 000060 0004+00 0/0 0/0 0/0 .rodata          @4486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4486 = -23.0f / 10.0f;
COMPILER_STRIP_GATE(0x8085EF60, &lit_4486);
#pragma pop

/* 8085EF64-8085EF68 000064 0004+00 0/0 0/0 0/0 .rodata          @4487 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4487 = -0.5f;
COMPILER_STRIP_GATE(0x8085EF64, &lit_4487);
#pragma pop

/* 8085EF68-8085EF6C 000068 0004+00 0/0 0/0 0/0 .rodata          @4488 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4488 = 90.0f;
COMPILER_STRIP_GATE(0x8085EF68, &lit_4488);
#pragma pop

/* 8085EF6C-8085EF70 00006C 0004+00 0/0 0/0 0/0 .rodata          @4489 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4489 = -7.0f / 10.0f;
COMPILER_STRIP_GATE(0x8085EF6C, &lit_4489);
#pragma pop

/* 8085EF70-8085EF74 000070 0004+00 0/0 0/0 0/0 .rodata          @4490 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4490 = -2.0f;
COMPILER_STRIP_GATE(0x8085EF70, &lit_4490);
#pragma pop

/* 8085EF74-8085EF78 000074 0004+00 0/2 0/0 0/0 .rodata          @4491 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4491 = -1.0f;
COMPILER_STRIP_GATE(0x8085EF74, &lit_4491);
#pragma pop

/* 8085EF78-8085EF80 000078 0004+04 0/0 0/0 0/0 .rodata          @4492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4492[1 + 1 /* padding */] = {
    -11.0f / 10.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8085EF78, &lit_4492);
#pragma pop

/* 8085EF80-8085EF88 000080 0008+00 0/2 0/0 0/0 .rodata          @4493 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4493[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085EF80, &lit_4493);
#pragma pop

/* 8085EF88-8085EF8C 000088 0004+00 0/0 0/0 0/0 .rodata          @4494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4494 = 630.0f;
COMPILER_STRIP_GATE(0x8085EF88, &lit_4494);
#pragma pop

/* 8085EF8C-8085EF90 00008C 0004+00 0/0 0/0 0/0 .rodata          @4495 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4495 = 34.0f / 5.0f;
COMPILER_STRIP_GATE(0x8085EF8C, &lit_4495);
#pragma pop

/* 8085EF90-8085EF98 000090 0008+00 0/0 0/0 0/0 .rodata          @4496 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4496[8] = {
    0x40, 0x81, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085EF90, &lit_4496);
#pragma pop

/* 8085EF98-8085EFA0 000098 0008+00 0/0 0/0 0/0 .rodata          @4497 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4497[8] = {
    0x40, 0x13, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
};
COMPILER_STRIP_GATE(0x8085EF98, &lit_4497);
#pragma pop

/* 8085EFA0-8085EFA4 0000A0 0004+00 0/0 0/0 0/0 .rodata          @4498 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4498 = 13.0f;
COMPILER_STRIP_GATE(0x8085EFA0, &lit_4498);
#pragma pop

/* 8085EFA4-8085EFA8 0000A4 0004+00 0/0 0/0 0/0 .rodata          @4499 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4499 = 9.0f;
COMPILER_STRIP_GATE(0x8085EFA4, &lit_4499);
#pragma pop

/* 8085EFA8-8085EFAC 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4500 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4500 = 9000.0f;
COMPILER_STRIP_GATE(0x8085EFA8, &lit_4500);
#pragma pop

/* 8085EFAC-8085EFB0 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4501 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4501 = 85.0f;
COMPILER_STRIP_GATE(0x8085EFAC, &lit_4501);
#pragma pop

/* 8085EFB0-8085EFB4 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4502 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4502 = 1.5f;
COMPILER_STRIP_GATE(0x8085EFB0, &lit_4502);
#pragma pop

/* 8085EFB4-8085EFB8 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4503 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4503 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x8085EFB4, &lit_4503);
#pragma pop

/* 8085EFB8-8085EFBC 0000B8 0004+00 0/2 0/0 0/0 .rodata          @4504 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4504 = 0.5f;
COMPILER_STRIP_GATE(0x8085EFB8, &lit_4504);
#pragma pop

/* 8085EFBC-8085EFC0 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4505 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4505 = 25.0f;
COMPILER_STRIP_GATE(0x8085EFBC, &lit_4505);
#pragma pop

/* 8085EFC0-8085EFC4 0000C0 0004+00 0/2 0/0 0/0 .rodata          @4506 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4506 = 4.0f;
COMPILER_STRIP_GATE(0x8085EFC0, &lit_4506);
#pragma pop

/* 8085EFC4-8085EFC8 0000C4 0004+00 0/0 0/0 0/0 .rodata          @4507 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4507 = -8.0f;
COMPILER_STRIP_GATE(0x8085EFC4, &lit_4507);
#pragma pop

/* 8085EFC8-8085EFCC 0000C8 0004+00 0/0 0/0 0/0 .rodata          @4508 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4508 = -1200.0f;
COMPILER_STRIP_GATE(0x8085EFC8, &lit_4508);
#pragma pop

/* 8085EFCC-8085EFD0 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4509 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4509 = 900.0f;
COMPILER_STRIP_GATE(0x8085EFCC, &lit_4509);
#pragma pop

/* 8085EFD0-8085EFD4 0000D0 0004+00 0/0 0/0 0/0 .rodata          @4510 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4510 = -780.0f;
COMPILER_STRIP_GATE(0x8085EFD0, &lit_4510);
#pragma pop

/* 8085EFD4-8085EFD8 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4511 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4511 = 1400.0f;
COMPILER_STRIP_GATE(0x8085EFD4, &lit_4511);
#pragma pop

/* 8085EFD8-8085EFDC 0000D8 0004+00 0/0 0/0 0/0 .rodata          @4512 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4512 = -10.0f;
COMPILER_STRIP_GATE(0x8085EFD8, &lit_4512);
#pragma pop

/* 8085EFDC-8085EFE0 0000DC 0004+00 0/0 0/0 0/0 .rodata          @4513 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4513 = -5.0f;
COMPILER_STRIP_GATE(0x8085EFDC, &lit_4513);
#pragma pop

/* 8085EFE0-8085EFE8 0000E0 0004+04 0/0 0/0 0/0 .rodata          @4514 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4514[1 + 1 /* padding */] = {
    6200.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8085EFE0, &lit_4514);
#pragma pop

/* 8085EFE8-8085EFF0 0000E8 0008+00 0/2 0/0 0/0 .rodata          @4515 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4515[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085EFE8, &lit_4515);
#pragma pop

/* 8085EFF0-8085EFF8 0000F0 0008+00 0/2 0/0 0/0 .rodata          @4516 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4516[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085EFF0, &lit_4516);
#pragma pop

/* 8085EFF8-8085EFFC 0000F8 0004+00 0/2 0/0 0/0 .rodata          @4517 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4517 = 250.0f;
COMPILER_STRIP_GATE(0x8085EFF8, &lit_4517);
#pragma pop

/* 8085EFFC-8085F000 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4518 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4518 = 190.0f;
COMPILER_STRIP_GATE(0x8085EFFC, &lit_4518);
#pragma pop

/* 8085F000-8085F004 000100 0004+00 0/2 0/0 0/0 .rodata          @4519 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4519 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8085F000, &lit_4519);
#pragma pop

/* 8085F004-8085F008 000104 0004+00 0/0 0/0 0/0 .rodata          @4520 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4520 = 165.0f;
COMPILER_STRIP_GATE(0x8085F004, &lit_4520);
#pragma pop

/* 8085F008-8085F00C 000108 0004+00 0/2 0/0 0/0 .rodata          @4521 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4521 = 19.0f / 20.0f;
COMPILER_STRIP_GATE(0x8085F008, &lit_4521);
#pragma pop

/* 8085F0EC-8085F0EC 0001EC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8085F0EC = "D_MN08";
#pragma pop

/* 8085F0F4-8085F118 -00001 0024+00 1/1 0/0 0/0 .data            @4529 */
SECTION_DATA static void* lit_4529[9] = {
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x458),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x458),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x408),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x458),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x418),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x428),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x458),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x438),
    (void*)(((char*)daKytag12_Execute_standard__FP13kytag12_class) + 0x448),
};

/* 8085BD0C-8085D1DC 00024C 14D0+00 2/1 0/0 0/0 .text
 * daKytag12_Execute_standard__FP13kytag12_class                */
// minor regalloc
#ifdef NONMATCHING
static int daKytag12_Execute_standard(kytag12_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    dKankyo_evil_Packet* temp_r25 = dKy_getEnvlight()->mpEvilPacket;
    cXyz spB8;
    cXyz spC4;

    f32 var_f30;
    f32 var_f25;
    f32 var_f29;
    f32 var_f28;

    int var_r24 = 0;
    int var_r23 = 0;
    int var_r22 = 0;
    int var_r21 = 0;
    int var_r20 = 0;
    int var_r19 = 0;
    int spEC = 0;
    int spE8 = 0;

    if (temp_r25 == NULL) {
        return 1;
    }

    cXyz spD0;
    cXyz spDC;
    cXyz spA8;

    for (int i = 0; i < g_env_light.field_0x1054; i++) {
        EF_EVIL_EFF* effect_p = &temp_r25->mEffect[i];
        var_f29 = 1.0f;

        switch (effect_p->mStatus) {
        case 0:
            if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 && a_this->home.roomNo == 1 &&
                i < 400)
            {
                effect_p->mBasePos.x = cM_rndFX(30.0f) + -5200.0f;
                effect_p->mBasePos.y = cM_rndF(2100.0f) + -700.0f;
                effect_p->mBasePos.z = cM_rndFX(200.0f) + 5400.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f30) * 50.0f + 100.0f;
            } else if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 &&
                       a_this->home.roomNo == 1 && i >= 400 && i < 800)
            {
                effect_p->mBasePos.x = cM_rndFX(30.0f) + -2700.0f;
                effect_p->mBasePos.y = cM_rndF(2100.0f) + -700.0f;
                effect_p->mBasePos.z = cM_rndFX(200.0f) + 5400.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f30) * 50.0f + 100.0f;
            } else if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 &&
                       a_this->home.roomNo == 1 && i >= 800 && i < 1200)
            {
                effect_p->mBasePos.x = cM_rndFX(30.0f) + -2700.0f;
                effect_p->mBasePos.y = cM_rndF(2100.0f) + -1100.0f;
                effect_p->mBasePos.z = cM_rndFX(200.0f) + 3200.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f30) * 50.0f + 100.0f;
            } else if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 &&
                       a_this->home.roomNo == 1 && i >= 1200 && i < 1600)
            {
                effect_p->mBasePos.x = cM_rndFX(30.0f) + -5200.0f;
                effect_p->mBasePos.y = cM_rndF(2100.0f) + -1100.0f;
                effect_p->mBasePos.z = cM_rndFX(200.0f) + 3200.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f30) * 50.0f + 100.0f;
            } else if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 &&
                       a_this->home.roomNo == 11)
            {
                effect_p->mBasePos.x = cM_rndFX(1000.0f);
                effect_p->mBasePos.y = cM_rndF(6700.0f) + -500.0f;
                effect_p->mBasePos.z = cM_rndFX(10.0f) + -2828.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f30) * 50.0f + 100.0f;
            } else {
                f32 temp_f2;
                switch (a_this->home.roomNo) {
                case 2:
                    temp_f2 = -2.3f;
                    var_f28 = -0.5f;
                    var_f25 = 90.0f;
                    break;
                case 4:
                    temp_f2 = -0.7f;
                    var_f28 = -2.0f;
                    var_f25 = 90.0f;
                    break;
                case 5:
                    temp_f2 = -1.0f;
                    var_f28 = -1.0f;
                    var_f25 = 90.0f;
                    break;
                case 7:
                    temp_f2 = -1.1f;
                    var_f28 = -0.0f;
                    var_f25 = 90.0f;
                    break;
                case 8:
                    temp_f2 = 0.0f;
                    var_f28 = -2.3f;
                    var_f25 = 90.0f;
                    break;
                default:
                    temp_f2 = 0.0f;
                    var_f28 = 0.0f;
                    var_f25 = 90.0f;
                    break;
                }

                effect_p->mBasePos.x =
                    a_this->current.pos.x + cM_rndFX((a_this->scale.x + temp_f2) * 100.0f);
                effect_p->mBasePos.y =
                    a_this->current.pos.y + cM_rndF(a_this->scale.y * 100.0f) + var_f25;
                effect_p->mBasePos.z =
                    a_this->current.pos.z + cM_rndFX((a_this->scale.z + var_f28) * 100.0f);

                effect_p->field_0x24 = 1.0f;
                a_this->current.pos.abs(effect_p->mBasePos);
                effect_p->field_0x38 = fabsf(var_f30) * 50.0f + 100.0f;
            }

            effect_p->field_0x2c = 0.0f;
            effect_p->field_0x40 = 0;
            effect_p->field_0x42 = 0;
            effect_p->mStatus++;
            /* fallthrough */
        case 1:
            var_f30 = cM_ssin(effect_p->field_0x3c);
            effect_p->field_0x3c += (((f32)(i & 31) * 6.8f) + 630.0f);

            f32 temp_f7 = cM_ssin(effect_p->field_0x3e);
            effect_p->field_0x3e += (((f32)(i & 51) * 4.8) + 562.0);

            effect_p->mPosition.x = temp_f7 * 10.0f;
            effect_p->mPosition.y = (var_f30 + 1.0f) * 13.0f;
            effect_p->mPosition.z = temp_f7 * 9.0f;

            if (effect_p->field_0x38 < 9000.0f) {
                if (g_env_light.field_0x1054 <= 500) {
                    effect_p->field_0x38 = temp_f7 * 10.0f + 85.0f;
                } else if (a_this->home.roomNo == 11) {
                    effect_p->field_0x38 = (temp_f7 * 10.0f + 85.0f) * 1.5f;
                } else {
                    effect_p->field_0x38 = (temp_f7 * 10.0f + 85.0f) * 0.6f;
                }
            }
            break;
        case 2:
            spB8 = effect_p->mBasePos + effect_p->mPosition;
            var_f29 = 0.0f;

            spC4.x = cM_rndFX(0.5f);
            spC4.z = cM_rndFX(0.5f);
            spC4.y = 1.0f;

            effect_p->mPosition.x += spC4.x * 25.0f;
            effect_p->mPosition.y += spC4.y * 25.0f;
            effect_p->mPosition.z += spC4.z * 25.0f;

            if (effect_p->field_0x38 > 4.0f) {
                effect_p->field_0x38 -= 4.0f;
            }

            if (effect_p->field_0x24 <= 0.0f) {
                effect_p->mStatus = 1;
            }
            break;
        }

        if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 && a_this->home.roomNo == 1 &&
            i < 1600)
        {
            effect_p->mBasePos.y += -8.0f;

            if (i >= 800) {
                if (effect_p->mBasePos.y < -1200.0f) {
                    effect_p->mBasePos.y = 900.0f;
                    effect_p->mStatus = 1;
                    effect_p->field_0x24 = 1.0f;
                }
            } else if (effect_p->mBasePos.y < -780.0f) {
                effect_p->mBasePos.y = 1400.0f;
                effect_p->mStatus = 1;
                effect_p->field_0x24 = 1.0f;
            }
        } else if (a_this->home.roomNo == 11) {
            effect_p->mBasePos.y += cM_rndF(-5.0f) + -10.0f;

            if (effect_p->mBasePos.y < -500.0f) {
                effect_p->mBasePos.y = 6200.0f;
                effect_p->mStatus = 1;
                effect_p->field_0x24 = 1.0f;
            }
        }

        for (int j = 0; j < 10; j++) {
            if (g_env_light.mDalkmistInf[j] != NULL &&
                g_env_light.mDalkmistInf[j]->mPos.abs(effect_p->mBasePos) <
                    g_env_light.mDalkmistInf[j]->field_0xc + 100.0f)
            {
                if (effect_p->mStatus != 2 && effect_p->field_0x40 == 0 && var_r23 < 1) {
                    cXyz spF4;
                    spF4 = effect_p->mBasePos;

                    mDoAud_seStart(Z2SE_OBJ_L8_B_FOG_FLY, &spF4, 0, 0);
                    var_r23++;
                }

                effect_p->mStatus = 2;
                effect_p->field_0x40 = 180;
                break;
            }
        }

        spB8 = effect_p->mBasePos + effect_p->mPosition;

        if (player->current.pos.y - 100.0f < spB8.y && player->current.pos.y + 250.0f > spB8.y) {
            spB8.y = player->current.pos.y;

            if (player->current.pos.abs(spB8) < 190.0f && var_f29 > 0.0f &&
                effect_p->field_0x40 == 0)
            {
                var_r22++;
            }
        }

        if (!daPy_py_c::i_checkNowWolf()) {
            if (effect_p->field_0x38 >= 9000.0f) {
                var_f29 = 0.0f;
            }

            spB8 = effect_p->mBasePos + effect_p->mPosition;
            spB8.y -= 100.0f;

            f32 sp34;
            dKyw_pntlight_collision_get_info(&spB8, &spDC, &sp34);

            if (sp34 > 0.2f) {
                if (effect_p->mStatus != 2 && effect_p->field_0x40 == 0 && var_r23 < 1) {
                    cXyz sp100;
                    sp100 = effect_p->mBasePos;

                    mDoAud_seStart(Z2SE_OBJ_L8_B_FOG_FLY, &sp100, 0, 0);
                    var_r23++;
                }

                effect_p->mStatus = 2;
                effect_p->field_0x40 = 360;
            }

            spB8 = effect_p->mBasePos + effect_p->mPosition;

            if (player->current.pos.y < spB8.y + 100.0f &&
                player->current.pos.y > spB8.y - 200.0f && effect_p->mStatus != 2)
            {
                spB8.y = player->current.pos.y;

                if (player->current.pos.abs(spB8) < 165.0f && var_f29 > 0.0f &&
                    effect_p->field_0x24 >= 0.95f)
                {
                    var_r24++;
                }
            }
        }

        if (var_f29 <= 0.0f || effect_p->field_0x40 == 0) {
            if (var_f29 <= 0.0f) {
                cLib_addCalc(&effect_p->field_0x24, var_f29, 0.25f, 0.07f, 0.0001f);
            } else if (temp_r25->mEffect[0].field_0x42 != 0) {
                cLib_addCalc(&effect_p->field_0x24, 0.04f, 0.5f, 0.5f, 0.1f);
            } else {
                cLib_addCalc(&effect_p->field_0x24, var_f29, 0.1f, 0.01f, 0.001f);
            }
        }

        if (!dComIfGp_event_runCheck() && effect_p->field_0x40 != 0) {
            effect_p->field_0x40--;
        }

        if (effect_p->field_0x24 > 0.95f) {
            if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 && a_this->home.roomNo == 1 &&
                i < 1600)
            {
                if (i < 400) {
                    var_r20++;
                } else if (i >= 400 && i < 800) {
                    var_r19++;
                } else if (i >= 800 && i < 1200) {
                    spEC++;
                } else if (i >= 1200 && i < 1600) {
                    spE8++;
                }
            } else {
                var_r21++;
            }
        }
    }

    if (var_r24 != 0 && i_this->field_0x578 == 0) {
        if (dComIfGp_roomControl_getStayNo() == 11 || dComIfGp_roomControl_getStayNo() == 1) {
            i_this->field_0x578 = 60;
        } else {
            i_this->field_0x578 = 80;
        }
    }

    if (i_this->field_0x578 != 0 && i_this->field_0x578 <= 60) {
        if (!daPy_py_c::i_checkNowWolf()) {
            temp_r25->mEffect[0].field_0x42 = 45;
        }

        if (player->checkMetamorphose()) {
            i_this->field_0x578 = 0;
        } else {
            player->onForceWolfChange();
        }
    }

    if (i_this->field_0x578 != 0) {
        i_this->field_0x578--;
    }

    if (temp_r25->mEffect[0].field_0x42 != 0) {
        temp_r25->mEffect[0].field_0x42--;
    }

    daKytag12_light_swprd_proc(i_this);

    g_env_light.mEvilInitialized &= 0x7F;

    if (daPy_py_c::i_checkNowWolf() && var_r22 > 0) {
        g_env_light.mEvilInitialized |= 0x80;
    }

    if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 && a_this->home.roomNo == 1) {
        f32 temp = (f32)var_r20 / (f32)(g_env_light.field_0x1054 / 5);
        i_this->field_0x57c[0].x = -5200.0f;
        i_this->field_0x57c[0].y = player->current.pos.y;
        i_this->field_0x57c[0].z = 5400.0f;
        mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &i_this->field_0x57c[0], temp * 100.0f, 0);

        f32 temp2 = (f32)var_r19 / (f32)(g_env_light.field_0x1054 / 5);
        i_this->field_0x57c[1].x = -2700.0f;
        i_this->field_0x57c[1].y = player->current.pos.y;
        i_this->field_0x57c[1].z = 5400.0f;
        mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &i_this->field_0x57c[1], temp2 * 100.0f, 0);

        f32 temp3 = ((f32)spEC / (f32)(g_env_light.field_0x1054 / 5));
        i_this->field_0x57c[2].x = -2700.0f;
        i_this->field_0x57c[2].y = player->current.pos.y;
        i_this->field_0x57c[2].z = 3200.0f;
        mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &i_this->field_0x57c[2], temp3 * 100.0f, 0);

        f32 temp4 = ((f32)spE8 / (f32)(g_env_light.field_0x1054 / 5));
        i_this->field_0x57c[3].x = -5200.0f;
        i_this->field_0x57c[3].y = player->current.pos.y;
        i_this->field_0x57c[3].z = 3200.0f;
        mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &i_this->field_0x57c[3], temp4 * 100.0f, 0);
    }

    if (a_this->home.roomNo != 11) {
        f32 var_f1_4;
        if (a_this->home.roomNo == 1) {
            var_f1_4 = ((f32)var_r21 / (f32)(g_env_light.field_0x1054 / 5));
        } else {
            var_f1_4 = ((f32)var_r21 / (f32)g_env_light.field_0x1054);
        }

        mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FOG_STAY, &a_this->current.pos, var_f1_4 * 100.0f, 0);
    } else {
        f32 temp = ((f32)var_r21 / (f32)g_env_light.field_0x1054);
        i_this->field_0x57c[0].x = 0.0f;
        i_this->field_0x57c[0].y = player->current.pos.y;
        i_this->field_0x57c[0].z = -2828.0f;
        mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &i_this->field_0x57c[0], temp * 100.0f, 0);
    }

    return 1;
}
#else
static void daKytag12_Execute_standard(kytag12_class* param_0) {
    // NONMATCHING
}
#endif

/* ############################################################################################## */
/* 8085F00C-8085F010 00010C 0004+00 0/2 0/0 0/0 .rodata          @4522 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4522 = 0.25f;
COMPILER_STRIP_GATE(0x8085F00C, &lit_4522);
#pragma pop

/* 8085F010-8085F014 000110 0004+00 0/2 0/0 0/0 .rodata          @4523 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4523 = 7.0f / 100.0f;
COMPILER_STRIP_GATE(0x8085F010, &lit_4523);
#pragma pop

/* 8085F014-8085F018 000114 0004+00 0/2 0/0 0/0 .rodata          @4524 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4524 = 0x38D1B717;
COMPILER_STRIP_GATE(0x8085F014, &lit_4524);
#pragma pop

/* 8085F018-8085F01C 000118 0004+00 0/0 0/0 0/0 .rodata          @4525 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4525 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x8085F018, &lit_4525);
#pragma pop

/* 8085F01C-8085F020 00011C 0004+00 0/2 0/0 0/0 .rodata          @4526 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4526 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x8085F01C, &lit_4526);
#pragma pop

/* 8085F020-8085F024 000120 0004+00 0/1 0/0 0/0 .rodata          @4527 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4527 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x8085F020, &lit_4527);
#pragma pop

/* 8085F024-8085F028 000124 0004+00 0/1 0/0 0/0 .rodata          @4528 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4528 = 0x3A83126F;
COMPILER_STRIP_GATE(0x8085F024, &lit_4528);
#pragma pop

/* 8085F028-8085F030 000128 0008+00 0/2 0/0 0/0 .rodata          @4531 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4531[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085F028, &lit_4531);
#pragma pop

/* 8085F030-8085F038 000130 0008+00 0/2 0/0 0/0 .rodata          @4533 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4533[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8085F030, &lit_4533);
#pragma pop

/* 8085F038-8085F040 000138 0004+04 0/2 0/0 0/0 .rodata          @4961 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4961[1 + 1 /* padding */] = {
    24.0f / 5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x8085F038, &lit_4961);
#pragma pop

/* 8085F040-8085F048 000140 0008+00 0/2 0/0 0/0 .rodata          @4962 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4962[8] = {
    0x40, 0x0E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
};
COMPILER_STRIP_GATE(0x8085F040, &lit_4962);
#pragma pop

/* 8085F048-8085F04C 000148 0004+00 0/1 0/0 0/0 .rodata          @4963 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4963 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x8085F048, &lit_4963);
#pragma pop

/* 8085F04C-8085F050 00014C 0004+00 0/1 0/0 0/0 .rodata          @4964 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4964 = 65536.0f;
COMPILER_STRIP_GATE(0x8085F04C, &lit_4964);
#pragma pop

/* 8085F050-8085F054 000150 0004+00 0/1 0/0 0/0 .rodata          @4965 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4965 = 35.0f;
COMPILER_STRIP_GATE(0x8085F050, &lit_4965);
#pragma pop

/* 8085F054-8085F058 000154 0004+00 0/2 0/0 0/0 .rodata          @4966 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4966 = 20.0f;
COMPILER_STRIP_GATE(0x8085F054, &lit_4966);
#pragma pop

/* 8085F058-8085F05C 000158 0004+00 0/1 0/0 0/0 .rodata          @4967 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4967 = 32.0f;
COMPILER_STRIP_GATE(0x8085F058, &lit_4967);
#pragma pop

/* 8085F05C-8085F060 00015C 0004+00 0/1 0/0 0/0 .rodata          @4968 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4968 = -4.0f;
COMPILER_STRIP_GATE(0x8085F05C, &lit_4968);
#pragma pop

/* 8085F060-8085F064 000160 0004+00 0/2 0/0 0/0 .rodata          @4969 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4969 = -680.0f;
COMPILER_STRIP_GATE(0x8085F060, &lit_4969);
#pragma pop

/* 8085F064-8085F068 000164 0004+00 0/2 0/0 0/0 .rodata          @4970 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4970 = 40.0f;
COMPILER_STRIP_GATE(0x8085F064, &lit_4970);
#pragma pop

/* 8085D1DC-8085DFF0 00171C 0E14+00 1/1 0/0 0/0 .text daKytag12_Execute_arrival__FP13kytag12_class
 */
// minor regalloc
#ifdef NONMATCHING
static int daKytag12_Execute_arrival(kytag12_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    dKankyo_evil_Packet* temp_r25 = dKy_getEnvlight()->mpEvilPacket;

    f32 var_f27;
    f32 var_f22;
    f32 var_f21;

    int var_r22 = 0;
    int var_r21 = 0;
    int var_r20 = 0;
    int var_r19 = 0;

    if (temp_r25 == NULL) {
        return 1;
    }

    cXyz sp80;
    cXyz sp8C;

    for (int i = 0; i < g_env_light.field_0x1054; i++) {
        EF_EVIL_EFF* effect_p = &temp_r25->mEffect[i];
        var_f27 = 1.0f;

        var_f22 = cM_ssin(effect_p->field_0x3c);
        effect_p->field_0x3c += ((f32)(i & 240) * 4.8f);

        var_f21 = cM_ssin(effect_p->field_0x3e);
        effect_p->field_0x3e += ((f32)(i & 240) * 3.8);

        if (effect_p->field_0x38 < 9000.0f) {
            if (a_this->home.roomNo == 2) {
                effect_p->field_0x38 = (var_f21 * 10.0f + 85.0f) * 0.8f;
            } else {
                effect_p->field_0x38 = (var_f21 * 10.0f + 85.0f) * 0.6f;
            }
        }

        switch (effect_p->mStatus) {
        case 0:
            s16 temp_r3 = cM_rndF(0x10000);

            sp80.x = cM_rndFX(cM_ssin(temp_r3) * 1000.0f);
            sp80.y = cM_rndF(100.0f);
            sp80.z = cM_rndFX(cM_scos(temp_r3) * 1000.0f);

            effect_p->mBasePos.x = a_this->current.pos.x + sp80.x;
            effect_p->mBasePos.y = a_this->current.pos.y + sp80.y + 35.0f;
            effect_p->mBasePos.z = a_this->current.pos.z + sp80.z;

            effect_p->field_0x24 = 1.0f;
            effect_p->field_0x38 = fabsf(var_f22) * 50.0f + 100.0f;

            effect_p->field_0x40 = 0;
            effect_p->field_0x42 = 0;
            effect_p->field_0x2c = 0.0f;
            effect_p->mPosition.x = -sp80.x;
            effect_p->mPosition.y = -sp80.y;
            effect_p->mPosition.z = -sp80.z;
            effect_p->mStatus++;
            break;
        case 1:
            sp80.x = 0.0f;
            sp80.y = effect_p->mPosition.y;
            sp80.z = 0.0f;

            f32 var_f20 = effect_p->mPosition.abs(sp80);
            if (var_f20 >= 20.0f) {
                var_f20 -= 20.0f;
            } else {
                var_f20 = 0.0f;
            }

            cLib_addCalc(&effect_p->mPosition.x, var_f21 * 20.0f, 0.1f, 20.0f, 0.01f);
            cLib_addCalc(&effect_p->mPosition.y,
                         (var_f22 + 1.0f) * 20.0f + (var_f20 / 1000.0f) * 1000.0f, 0.5f, 32.0f,
                         0.01f);
            cLib_addCalc(&effect_p->mPosition.z, var_f21 * 20.0f, 0.1f, 10.0f, 0.01f);
            break;
        case 2:
            effect_p->mPosition.x = var_f21 * 20.0f;
            effect_p->mPosition.y = (var_f22 + 1.0f) * 20.0f;
            effect_p->mPosition.z = var_f21 * 20.0f;

            if (strcmp(dComIfGp_getStartStageName(), "D_MN08") == 0 && a_this->home.roomNo == 1 &&
                i < 1600)
            {
                effect_p->mBasePos.y += cM_rndF(-4.0f) + -4.0f;

                if (i >= 800) {
                    if (effect_p->mBasePos.y < -1100.0f) {
                        effect_p->mBasePos.y = 900.0f;
                    }
                } else if (effect_p->mBasePos.y < -680.0f) {
                    effect_p->mBasePos.y = 1400.0f;
                }
            }
            break;
        case 3:
            sp80 = effect_p->mBasePos + effect_p->mPosition;
            var_f27 = 0.0f;

            sp8C.x = cM_rndFX(0.5f);
            sp8C.z = cM_rndFX(0.5f);
            sp8C.y = 1.0f;

            effect_p->mPosition.x += sp8C.x * 25.0f;
            effect_p->mPosition.y += sp8C.y * 25.0f;
            effect_p->mPosition.z += sp8C.z * 25.0f;

            if (effect_p->field_0x38 > 4.0f) {
                effect_p->field_0x38 -= 4.0f;
            }

            if (effect_p->field_0x24 <= 0.0f) {
                effect_p->mStatus = 2;
            }
            break;
        }

        for (int j = 0; j < 10; j++) {
            if (g_env_light.mDalkmistInf[j] != NULL &&
                g_env_light.mDalkmistInf[j]->mPos.abs(effect_p->mBasePos) <
                    g_env_light.mDalkmistInf[j]->field_0xc + 100.0f)
            {
                if (effect_p->mStatus != 3 && effect_p->field_0x40 == 0 && var_r21 < 1) {
                    sp80 = effect_p->mBasePos;

                    mDoAud_seStart(Z2SE_OBJ_L8_B_FOG_FLY, &sp80, 0, 0);
                    var_r21++;
                }

                effect_p->mStatus = 3;
                effect_p->field_0x40 = 180;
                break;
            }
        }

        sp80 = effect_p->mBasePos + effect_p->mPosition;

        if (player->current.pos.y - 100.0f < sp80.y && player->current.pos.y + 250.0f > sp80.y) {
            sp80.y = player->current.pos.y;

            if (player->current.pos.abs(sp80) < 190.0f && var_f27 > 0.0f &&
                effect_p->field_0x24 >= 0.95f)
            {
                var_r20++;
            }
        }

        if (!daPy_py_c::i_checkNowWolf()) {
            if (effect_p->field_0x38 >= 9000.0f) {
                var_f27 = 0.0f;
            }

            sp80 = effect_p->mBasePos + effect_p->mPosition;
            cXyz sp98;
            sp80.y -= 100.0f;

            f32 sp34;
            dKyw_pntlight_collision_get_info(&sp80, &sp98, &sp34);

            if (sp34 > 0.2f) {
                if (effect_p->mStatus != 3 && effect_p->field_0x40 == 0 && var_r21 < 1) {
                    cXyz spA4;
                    spA4 = effect_p->mBasePos;

                    mDoAud_seStart(Z2SE_OBJ_L8_B_FOG_FLY, &spA4, 0, 0);
                    var_r21++;
                }

                effect_p->mStatus = 3;
                effect_p->field_0x40 = 360;
            }

            sp80 = effect_p->mBasePos + effect_p->mPosition;

            if (player->current.pos.y - 100.0f < sp80.y && player->current.pos.y + 250.0f > sp80.y)
            {
                sp80.y = player->current.pos.y;

                if (player->current.pos.abs(sp80) < 40.0f && var_f27 > 0.0f &&
                    effect_p->field_0x24 >= 0.95f && effect_p->mStatus != 3)
                {
                    var_r22++;
                }
            }
        }

        if (var_f27 <= 0.0f || effect_p->field_0x40 == 0) {
            if (var_f27 <= 0.0f) {
                cLib_addCalc(&effect_p->field_0x24, var_f27, 0.25f, 0.07f, 0.0001f);
            } else {
                cLib_addCalc(&effect_p->field_0x24, var_f27, 0.1f, 0.01f, 0.001f);
            }
        }

        if (!dComIfGp_event_runCheck() && effect_p->field_0x40 != 0) {
            effect_p->field_0x40--;
        }

        if (effect_p->field_0x24 > 0.95f) {
            var_r19++;
        }
    }

    if (var_r22 != 0) {
        if (dComIfGp_roomControl_getStayNo() == 11) {
            i_this->field_0x578 = 60;
        } else if (i_this->field_0x578 < 40) {
            i_this->field_0x578++;
        }
    } else {
        if (i_this->field_0x578 != 0) {
            i_this->field_0x578--;
        }
    }

    if (i_this->field_0x578 >= 20 && !player->checkMetamorphose()) {
        player->onForceWolfChange();
    }

    daKytag12_light_swprd_proc(i_this);

    g_env_light.mEvilInitialized &= 0x7F;

    if (daPy_py_c::i_checkNowWolf() && var_r20 > 0) {
        g_env_light.mEvilInitialized |= 0x80;
    }

    f32 temp = ((f32)var_r19 / (f32)g_env_light.field_0x1054);
    mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &i_this->current.pos, temp * 100.0f, 0);
    return 1;
}
#else
static void daKytag12_Execute_arrival(kytag12_class* param_0) {
    // NONMATCHING
}
#endif

/* ############################################################################################## */
/* 8085F068-8085F06C 000168 0004+00 0/1 0/0 0/0 .rodata          @5266 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5266 = 550.0f;
COMPILER_STRIP_GATE(0x8085F068, &lit_5266);
#pragma pop

/* 8085F06C-8085F070 00016C 0004+00 0/1 0/0 0/0 .rodata          @5267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5267 = -3000.0f;
COMPILER_STRIP_GATE(0x8085F06C, &lit_5267);
#pragma pop

/* 8085F070-8085F074 000170 0004+00 0/1 0/0 0/0 .rodata          @5268 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5268 = 5900.0f;
COMPILER_STRIP_GATE(0x8085F070, &lit_5268);
#pragma pop

/* 8085F074-8085F078 000174 0004+00 0/1 0/0 0/0 .rodata          @5269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5269 = 80.0f;
COMPILER_STRIP_GATE(0x8085F074, &lit_5269);
#pragma pop

/* 8085F078-8085F07C 000178 0004+00 0/1 0/0 0/0 .rodata          @5270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5270 = 244.0f;
COMPILER_STRIP_GATE(0x8085F078, &lit_5270);
#pragma pop

/* 8085F07C-8085F080 00017C 0004+00 0/1 0/0 0/0 .rodata          @5271 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5271 = 2951.0f;
COMPILER_STRIP_GATE(0x8085F07C, &lit_5271);
#pragma pop

/* 8085F080-8085F084 000180 0004+00 0/1 0/0 0/0 .rodata          @5272 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5272 = 4100.0f;
COMPILER_STRIP_GATE(0x8085F080, &lit_5272);
#pragma pop

/* 8085F084-8085F088 000184 0004+00 0/1 0/0 0/0 .rodata          @5273 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5273 = 2206.0f;
COMPILER_STRIP_GATE(0x8085F084, &lit_5273);
#pragma pop

/* 8085F088-8085F08C 000188 0004+00 0/1 0/0 0/0 .rodata          @5274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5274 = -3200.0f;
COMPILER_STRIP_GATE(0x8085F088, &lit_5274);
#pragma pop

/* 8085F08C-8085F090 00018C 0004+00 0/1 0/0 0/0 .rodata          @5275 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5275 = 6800.0f;
COMPILER_STRIP_GATE(0x8085F08C, &lit_5275);
#pragma pop

/* 8085F090-8085F094 000190 0004+00 0/1 0/0 0/0 .rodata          @5276 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5276 = 5350.0f;
COMPILER_STRIP_GATE(0x8085F090, &lit_5276);
#pragma pop

/* 8085F094-8085F098 000194 0004+00 0/1 0/0 0/0 .rodata          @5277 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5277 = 480.0f;
COMPILER_STRIP_GATE(0x8085F094, &lit_5277);
#pragma pop

/* 8085F098-8085F09C 000198 0004+00 0/1 0/0 0/0 .rodata          @5278 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5278 = -200.0f;
COMPILER_STRIP_GATE(0x8085F098, &lit_5278);
#pragma pop

/* 8085F09C-8085F0A0 00019C 0004+00 0/1 0/0 0/0 .rodata          @5279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5279 = 5300.0f;
COMPILER_STRIP_GATE(0x8085F09C, &lit_5279);
#pragma pop

/* 8085F0A0-8085F0A4 0001A0 0004+00 0/1 0/0 0/0 .rodata          @5280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5280 = 510.0f;
COMPILER_STRIP_GATE(0x8085F0A0, &lit_5280);
#pragma pop

/* 8085F0A4-8085F0A8 0001A4 0004+00 0/1 0/0 0/0 .rodata          @5281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5281 = 3400.0f;
COMPILER_STRIP_GATE(0x8085F0A4, &lit_5281);
#pragma pop

/* 8085F0A8-8085F0AC 0001A8 0004+00 0/1 0/0 0/0 .rodata          @5282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5282 = 650.0f;
COMPILER_STRIP_GATE(0x8085F0A8, &lit_5282);
#pragma pop

/* 8085F0AC-8085F0B0 0001AC 0004+00 0/1 0/0 0/0 .rodata          @5283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5283 = 3000.0f;
COMPILER_STRIP_GATE(0x8085F0AC, &lit_5283);
#pragma pop

/* 8085F0B0-8085F0B4 0001B0 0004+00 0/1 0/0 0/0 .rodata          @5284 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5284 = 15.0f;
COMPILER_STRIP_GATE(0x8085F0B0, &lit_5284);
#pragma pop

/* 8085F0B4-8085F0B8 0001B4 0004+00 0/1 0/0 0/0 .rodata          @5285 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5285 = 2900.0f;
COMPILER_STRIP_GATE(0x8085F0B4, &lit_5285);
#pragma pop

/* 8085F0B8-8085F0BC 0001B8 0004+00 0/1 0/0 0/0 .rodata          @5286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5286 = 7000.0f;
COMPILER_STRIP_GATE(0x8085F0B8, &lit_5286);
#pragma pop

/* 8085F0BC-8085F0C0 0001BC 0004+00 0/1 0/0 0/0 .rodata          @5287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5287 = -3800.0f;
COMPILER_STRIP_GATE(0x8085F0BC, &lit_5287);
#pragma pop

/* 8085F0C0-8085F0C4 0001C0 0004+00 0/1 0/0 0/0 .rodata          @5288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5288 = 2800.0f;
COMPILER_STRIP_GATE(0x8085F0C0, &lit_5288);
#pragma pop

/* 8085F0C4-8085F0C8 0001C4 0004+00 0/1 0/0 0/0 .rodata          @5289 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5289 = -2250.0f;
COMPILER_STRIP_GATE(0x8085F0C4, &lit_5289);
#pragma pop

/* 8085F0C8-8085F0CC 0001C8 0004+00 0/1 0/0 0/0 .rodata          @5290 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5290 = -20.0f;
COMPILER_STRIP_GATE(0x8085F0C8, &lit_5290);
#pragma pop

/* 8085F0CC-8085F0D0 0001CC 0004+00 0/1 0/0 0/0 .rodata          @5291 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5291 = -1160.0f;
COMPILER_STRIP_GATE(0x8085F0CC, &lit_5291);
#pragma pop

/* 8085F0D0-8085F0D4 0001D0 0004+00 0/1 0/0 0/0 .rodata          @5292 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5292 = -380.0f;
COMPILER_STRIP_GATE(0x8085F0D0, &lit_5292);
#pragma pop

/* 8085F0D4-8085F0D8 0001D4 0004+00 0/1 0/0 0/0 .rodata          @5293 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5293 = 2700.0f;
COMPILER_STRIP_GATE(0x8085F0D4, &lit_5293);
#pragma pop

/* 8085F0D8-8085F0DC 0001D8 0004+00 0/1 0/0 0/0 .rodata          @5294 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5294 = -800.0f;
COMPILER_STRIP_GATE(0x8085F0D8, &lit_5294);
#pragma pop

/* 8085F0DC-8085F0E0 0001DC 0004+00 0/1 0/0 0/0 .rodata          @5295 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5295 = -1060.0f;
COMPILER_STRIP_GATE(0x8085F0DC, &lit_5295);
#pragma pop

/* 8085F0E0-8085F0E4 0001E0 0004+00 0/1 0/0 0/0 .rodata          @5296 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5296 = 2600.0f;
COMPILER_STRIP_GATE(0x8085F0E0, &lit_5296);
#pragma pop

/* 8085F0E4-8085F0E8 0001E4 0004+00 0/1 0/0 0/0 .rodata          @5297 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5297 = 2650.0f;
COMPILER_STRIP_GATE(0x8085F0E4, &lit_5297);
#pragma pop

/* 8085F0E8-8085F0EC 0001E8 0004+00 0/1 0/0 0/0 .rodata          @5298 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5298 = 600.0f;
COMPILER_STRIP_GATE(0x8085F0E8, &lit_5298);
#pragma pop

/* 8085DFF0-8085ED48 002530 0D58+00 1/1 0/0 0/0 .text daKytag12_Execute_R00__FP13kytag12_class */
static int daKytag12_Execute_R00(kytag12_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;
    daPy_py_c* player = (daPy_py_c*)dComIfGp_getPlayer(0);
    dKankyo_evil_Packet* temp_r25 = dKy_getEnvlight()->mpEvilPacket;

    f32 var_f26;
    f32 var_f25;

    int var_r24 = 0;

    if (temp_r25 == NULL) {
        return 1;
    }

    cXyz sp80;
    cXyz sp8C;
    cXyz sp98;

    for (int i = 0; i < g_env_light.field_0x1054; i++) {
        EF_EVIL_EFF* effect_p = &temp_r25->mEffect[i];
        var_f25 = 1.0f;

        switch (effect_p->mStatus) {
        case 0:
            if (i < 500) {
                effect_p->mBasePos.x = a_this->current.pos.x + cM_rndFX(550.0f);
                effect_p->mBasePos.y = cM_rndF(5900.0f) + -3000.0f;
                effect_p->mBasePos.z = a_this->current.pos.z + cM_rndFX(80.0f);

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f26) * 50.0f + 100.0f;
            } else if (i >= 500 && i < 1000) {
                effect_p->mBasePos.x = cM_rndFX(250.0f) + 244.0f;
                effect_p->mBasePos.y = cM_rndF(4100.0f) + 2951.0f;
                effect_p->mBasePos.z = cM_rndFX(50.0f) + 2206.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f26) * 50.0f + 100.0f;
            } else if (i >= 1000 && i < 1500) {
                effect_p->mBasePos.y = cM_rndFX(6800.0f) + -3200.0f;
                effect_p->mBasePos.z = cM_rndF(480.0f) + 5350.0f;

                f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
                temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
                effect_p->mBasePos.x = temp_f2 * -200.0f + -3000.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f26) * 50.0f + 100.0f;
            } else if (i >= 1500 && i < 2000) {
                effect_p->mBasePos.y = cM_rndFX(6800.0f) + -3200.0f;
                effect_p->mBasePos.z = cM_rndF(510.0f) + 5300.0f;

                f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
                temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
                effect_p->mBasePos.x = temp_f2 * -200.0f + -3400.0f;

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f26) * 50.0f + 100.0f;
            } else {
                effect_p->mBasePos.x = cM_rndFX(650.0f);
                effect_p->mBasePos.y = cM_rndF(3000.0f);
                effect_p->mBasePos.z = cM_rndFX(100.0f);

                effect_p->field_0x24 = 1.0f;
                effect_p->field_0x38 = fabsf(var_f26) * 50.0f + 100.0f;
            }

            effect_p->field_0x40 = 0;
            effect_p->field_0x2c = 0.0f;
            effect_p->mStatus++;
            /* fallthrough */
        case 1:
            var_f26 = cM_ssin(effect_p->field_0x3c);
            effect_p->field_0x3c += ((f32)(i & 240) * 4.8f);

            f32 temp_f7 = cM_ssin(effect_p->field_0x3e);
            effect_p->field_0x3e += ((f32)(i & 240) * 3.8);

            effect_p->mPosition.x = temp_f7 * 20.0f;
            effect_p->mPosition.y = (var_f26 + 1.0f) * 20.0f;
            effect_p->mPosition.z = temp_f7 * 20.0f;

            if (effect_p->field_0x38 < 9000.0f) {
                effect_p->field_0x38 = (temp_f7 * 10.0f + 85.0f) * 1.5f;
            }
            break;
        case 2:
            sp80 = effect_p->mBasePos + effect_p->mPosition;
            var_f25 = 0.0f;

            sp8C.x = cM_rndFX(0.5f);
            sp8C.z = cM_rndFX(0.5f);
            sp8C.y = 1.0f;

            effect_p->mPosition.x += sp8C.x * 40.0f;
            effect_p->mPosition.y += sp8C.y * 40.0f;
            effect_p->mPosition.z += sp8C.z * 40.0f;

            if (effect_p->field_0x38 > 4.0f) {
                effect_p->field_0x38 -= 4.0f;
            }

            if (effect_p->field_0x24 <= 0.0f && effect_p->field_0x40 == 0) {
                effect_p->mStatus = 1;
            }
            break;
        }

        effect_p->mBasePos.y -= ((f32)i / (f32)g_env_light.field_0x1054) * 10.0f + 15.0f;

        if (i < 500) {
            if (effect_p->mBasePos.y < -3000.0f) {
                effect_p->mBasePos.y = 2900.0f;
                effect_p->field_0x24 = 0.0f;
                effect_p->mStatus = 1;
            }
        } else if (i >= 500 && i < 1000) {
            if (effect_p->mBasePos.y < 2951.0f) {
                effect_p->mBasePos.y = 7000.0f;
                effect_p->field_0x24 = 0.0f;
                effect_p->mStatus = 1;
            }
        } else if (i >= 1000 && i < 1500) {
            if (effect_p->mBasePos.y < -3800.0f) {
                effect_p->mBasePos.y = 2800.0f;
                effect_p->field_0x24 = 0.0f;
                effect_p->mStatus = 1;
            }

            f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
            temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
            effect_p->mBasePos.x = temp_f2 * -200.0f + -3000.0f;

            if (effect_p->mBasePos.y < -680.0f) {
                f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
                temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
                effect_p->mBasePos.x = temp_f2 * -20.0f + -2250.0f;
            } else if (effect_p->mBasePos.y < 0.0f) {
                f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
                temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
                effect_p->mBasePos.x = temp_f2 * -1160.0f + -3000.0f;
                effect_p->mBasePos.y += 10.0f;
            }
        } else if (i >= 1500 && i < 2000) {
            if (effect_p->mBasePos.y < -3800.0f) {
                effect_p->mBasePos.y = 2800.0f;
                effect_p->field_0x24 = 0.0f;
                effect_p->mStatus = 1;
            }

            f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
            temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
            effect_p->mBasePos.x = temp_f2 * 200.0f + 3400.0f;

            if (effect_p->mBasePos.y < -380.0f) {
                f32 temp_f2 = (effect_p->mBasePos.y / 1000.0f);
                temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
                effect_p->mBasePos.x = temp_f2 * -20.0f + 2700.0f;
            } else if (effect_p->mBasePos.y < 200.0f) {
                f32 temp_f2 = (effect_p->mBasePos.y / -800.0f);
                temp_f2 = temp_f2;  // fake match? idk how else to fix instruction order
                effect_p->mBasePos.x = temp_f2 * -1060.0f + 3200.0f;
                effect_p->mBasePos.y += 10.0f;
            }
        }

        if (i_this->field_0x575 == 0 && player->current.pos.z < 2700.0f &&
            player->current.pos.z > 2600.0f)
        {
            player->current.pos.z = 2650.0f;
        }

        sp80 = effect_p->mBasePos + effect_p->mPosition;
        sp80.y = player->current.pos.y;

        if (player->current.pos.abs(sp80) < 600.0f &&
            dComIfGs_getSelectEquipSword() == LIGHT_SWORD && player->getCutType() != 0 &&
            d_kytag12_cut_turn_check())
        {
            i_this->field_0x575 = 1;
        }

        if (i_this->field_0x575 == 1) {
            mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_S, &sp80, 0, 0);
            i_this->field_0x575 = 2;
            effect_p->mStatus = 2;
            effect_p->field_0x40 = 360;
        }

        for (int j = 0; j < 10; j++) {
            if (g_env_light.mDalkmistInf[j] != NULL &&
                g_env_light.mDalkmistInf[j]->mPos.abs(effect_p->mBasePos) <
                    g_env_light.mDalkmistInf[j]->field_0xc + 100.0f)
            {
                if (effect_p->mStatus != 2 && effect_p->field_0x40 == 0 && var_r24 < 1) {
                    cXyz spA4;
                    spA4 = effect_p->mBasePos;

                    var_r24++;
                }

                effect_p->mStatus = 2;
                effect_p->field_0x40 = 180;
                break;
            }
        }

        if (!daPy_py_c::i_checkNowWolf()) {
            if (effect_p->field_0x38 >= 9000.0f) {
                var_f25 = 0.0f;
            }

            sp80 = effect_p->mBasePos + effect_p->mPosition;
            cXyz spB0;
            sp80.y -= 100.0f;

            f32 sp34;
            dKyw_pntlight_collision_get_info(&sp80, &spB0, &sp34);

            if (sp34 > 0.2f) {
                if (effect_p->mStatus != 2 && effect_p->field_0x40 == 0 && var_r24 < 1) {
                    cXyz spBC;
                    spBC = effect_p->mBasePos;

                    mDoAud_seStart(Z2SE_OBJ_L8_B_FOG_FLY, &spBC, 0, 0);
                    var_r24++;
                }

                effect_p->mStatus = 2;
                effect_p->field_0x40 = 360;
            }
        }

        if (var_f25 <= 0.0f) {
            cLib_addCalc(&effect_p->field_0x24, var_f25, 0.25f, 0.07f, 0.0001f);
        } else {
            cLib_addCalc(&effect_p->field_0x24, var_f25, 0.25f, 0.1f, 0.0001f);
        }

        if (effect_p->field_0x40 != 0) {
            effect_p->field_0x40--;

            if (effect_p->field_0x40 == 0) {
                i_this->field_0x575 = 0;
            }
        }
    }

    i_this->field_0x578 = 0;

    daKytag12_light_swprd_proc(i_this);

    i_this->field_0x57c[0].y = player->current.pos.y;
    i_this->field_0x57c[1].y = player->current.pos.y;
    i_this->field_0x57c[2].y = player->current.pos.y;
    i_this->field_0x57c[0].x = a_this->current.pos.x;
    i_this->field_0x57c[0].z = a_this->current.pos.z;

    mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_L, &i_this->field_0x57c[0], 100, 0);

    i_this->field_0x57c[1].x = -3000.0f;
    i_this->field_0x57c[1].z = 5350.0f;
    mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_L, &i_this->field_0x57c[1], 100, 0);

    i_this->field_0x57c[2].x = 3400.0f;
    i_this->field_0x57c[2].z = 5300.0f;
    mDoAud_seStartLevel(Z2SE_OBJ_L8_B_FALL_L, &i_this->field_0x57c[2], 100, 0);
    return 1;
}


/* 8085ED48-8085EE28 003288 00E0+00 1/0 0/0 0/0 .text daKytag12_Execute__FP13kytag12_class */
static int daKytag12_Execute(kytag12_class* i_this) {
    fopAc_ac_c* a_this = (fopAc_ac_c*)i_this;

    if (g_env_light.field_0x1051 != a_this->home.roomNo) {
        return 0;
    }

    switch (a_this->home.roomNo) {
    case 0:
    case 1:
        g_env_light.field_0x1054 = 2000;
        break;
    case 2:
        g_env_light.field_0x1054 = 500;
        break;
    case 11:
    case 0x33:
    case 0x34:
        g_env_light.field_0x1054 = 1000;
        break;
    default:
        g_env_light.field_0x1054 = 500;
        break;
    }

    if (i_this->field_0x574 == 1) {
        daKytag12_Execute_arrival(i_this);
    } else if (i_this->field_0x574 == 2) {
        daKytag12_Execute_R00(i_this);
    } else {
        daKytag12_Execute_standard(i_this);
    }

    return 1;
}

/* 8085EE28-8085EE30 003368 0008+00 1/0 0/0 0/0 .text daKytag12_IsDelete__FP13kytag12_class */
static int daKytag12_IsDelete(kytag12_class* i_this) {
    return 1;
}

/* 8085EE30-8085EE48 003370 0018+00 1/0 0/0 0/0 .text            daKytag12_Delete__FP13kytag12_class
 */
static int daKytag12_Delete(kytag12_class* i_this) {
    g_env_light.field_0x1054 = 0;
    return 1;
}

/* 8085EE48-8085EEF4 003388 00AC+00 1/0 0/0 0/0 .text            daKytag12_Create__FP10fopAc_ac_c */
static int daKytag12_Create(fopAc_ac_c* i_this) {
    kytag12_class* a_this = (kytag12_class*)i_this;
    fopAcM_SetupActor(a_this, kytag12_class);

    a_this->field_0x574 = fopAcM_GetParam(i_this);
    a_this->field_0x576 = 0;
    a_this->field_0x578 = 0;
    a_this->field_0x575 = 0;

    g_env_light.field_0x1054 = 0;
    g_env_light.field_0x1051 = i_this->home.roomNo;
    dKyr_evil_init();
    return cPhs_COMPLEATE_e;
}


/* 8085EEF4-8085EEF8 003434 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* ############################################################################################## */
/* 8085F118-8085F138 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag12_Method */
static actor_method_class l_daKytag12_Method = {
    (process_method_func)daKytag12_Create__FP10fopAc_ac_c,
    (process_method_func)daKytag12_Delete__FP13kytag12_class,
    (process_method_func)daKytag12_Execute__FP13kytag12_class,
    (process_method_func)daKytag12_IsDelete__FP13kytag12_class,
    (process_method_func)daKytag12_Draw__FP13kytag12_class,
};

/* 8085F138-8085F168 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG12 */
extern actor_process_profile_definition g_profile_KYTAG12 = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_KYTAG12,          // mProcName
  &g_fpcLf_Method.mBase, // sub_method
  sizeof(kytag12_class), // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  106,                   // mPriority
  &l_daKytag12_Method,   // sub_method
  0x00044000,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};