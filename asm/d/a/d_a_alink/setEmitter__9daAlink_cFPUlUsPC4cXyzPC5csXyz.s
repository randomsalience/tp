lbl_80120580:
/* 80120580  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80120584  7C 08 02 A6 */	mflr r0
/* 80120588  90 01 00 34 */	stw r0, 0x34(r1)
/* 8012058C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80120590  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80120594  7C 6B 1B 78 */	mr r11, r3
/* 80120598  7C 9E 23 78 */	mr r30, r4
/* 8012059C  7C AA 2B 78 */	mr r10, r5
/* 801205A0  7C C8 33 78 */	mr r8, r6
/* 801205A4  7C E9 3B 78 */	mr r9, r7
/* 801205A8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801205AC  3B E3 61 C0 */	addi r31, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801205B0  80 7F 5D 3C */	lwz r3, 0x5d3c(r31)
/* 801205B4  38 00 00 FF */	li r0, 0xff
/* 801205B8  90 01 00 08 */	stw r0, 8(r1)
/* 801205BC  38 80 00 00 */	li r4, 0
/* 801205C0  90 81 00 0C */	stw r4, 0xc(r1)
/* 801205C4  38 00 FF FF */	li r0, -1
/* 801205C8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801205CC  90 81 00 14 */	stw r4, 0x14(r1)
/* 801205D0  90 81 00 18 */	stw r4, 0x18(r1)
/* 801205D4  90 81 00 1C */	stw r4, 0x1c(r1)
/* 801205D8  80 9E 00 00 */	lwz r4, 0(r30)
/* 801205DC  38 A0 00 00 */	li r5, 0
/* 801205E0  7D 46 53 78 */	mr r6, r10
/* 801205E4  7D 07 43 78 */	mr r7, r8
/* 801205E8  39 0B 01 0C */	addi r8, r11, 0x10c
/* 801205EC  39 40 00 00 */	li r10, 0
/* 801205F0  C0 22 92 B8 */	lfs f1, lit_6040(r2)
/* 801205F4  4B F2 CE D9 */	bl set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 801205F8  90 7E 00 00 */	stw r3, 0(r30)
/* 801205FC  80 7F 5D 3C */	lwz r3, 0x5d3c(r31)
/* 80120600  38 63 02 10 */	addi r3, r3, 0x210
/* 80120604  80 9E 00 00 */	lwz r4, 0(r30)
/* 80120608  4B F2 B2 AD */	bl forceOnEventMove__Q213dPa_control_c7level_cFUl
/* 8012060C  80 7F 5D 3C */	lwz r3, 0x5d3c(r31)
/* 80120610  38 63 02 10 */	addi r3, r3, 0x210
/* 80120614  80 9E 00 00 */	lwz r4, 0(r30)
/* 80120618  4B F2 B3 01 */	bl getEmitter__Q213dPa_control_c7level_cFUl
/* 8012061C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80120620  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80120624  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80120628  7C 08 03 A6 */	mtlr r0
/* 8012062C  38 21 00 30 */	addi r1, r1, 0x30
/* 80120630  4E 80 00 20 */	blr 
