lbl_8083750C:
/* 8083750C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80837510  7C 08 02 A6 */	mflr r0
/* 80837514  90 01 00 34 */	stw r0, 0x34(r1)
/* 80837518  39 61 00 30 */	addi r11, r1, 0x30
/* 8083751C  4B B2 AC B8 */	b _savegpr_27
/* 80837520  7C 7E 1B 78 */	mr r30, r3
/* 80837524  3C 80 80 83 */	lis r4, lit_4802@ha
/* 80837528  C0 24 79 28 */	lfs f1, lit_4802@l(r4)
/* 8083752C  FC 40 08 90 */	fmr f2, f1
/* 80837530  FC 60 08 90 */	fmr f3, f1
/* 80837534  3C 80 80 83 */	lis r4, lit_3979@ha
/* 80837538  C0 84 78 C0 */	lfs f4, lit_3979@l(r4)
/* 8083753C  FC A0 20 90 */	fmr f5, f4
/* 80837540  FC C0 20 90 */	fmr f6, f4
/* 80837544  4B 7E 30 04 */	b fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff
/* 80837548  A8 1E 04 E4 */	lha r0, 0x4e4(r30)
/* 8083754C  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80837550  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80837554  7C 04 07 74 */	extsb r4, r0
/* 80837558  4B 81 A2 94 */	b dPath_GetRoomPath__Fii
/* 8083755C  90 7E 05 70 */	stw r3, 0x570(r30)
/* 80837560  38 60 00 00 */	li r3, 0
/* 80837564  90 7E 05 80 */	stw r3, 0x580(r30)
/* 80837568  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 8083756C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80837570  90 1E 05 84 */	stw r0, 0x584(r30)
/* 80837574  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80837578  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8083757C  90 1E 05 88 */	stw r0, 0x588(r30)
/* 80837580  90 7E 05 68 */	stw r3, 0x568(r30)
/* 80837584  83 BE 05 88 */	lwz r29, 0x588(r30)
/* 80837588  57 A3 28 34 */	slwi r3, r29, 5
/* 8083758C  38 63 00 10 */	addi r3, r3, 0x10
/* 80837590  4B A9 77 34 */	b __nwa__FUl
/* 80837594  3C 80 80 83 */	lis r4, __ct__8FmtPos_cFv@ha
/* 80837598  38 84 6C 60 */	addi r4, r4, __ct__8FmtPos_cFv@l
/* 8083759C  3C A0 80 83 */	lis r5, __dt__8FmtPos_cFv@ha
/* 808375A0  38 A5 6C 24 */	addi r5, r5, __dt__8FmtPos_cFv@l
/* 808375A4  38 C0 00 20 */	li r6, 0x20
/* 808375A8  7F A7 EB 78 */	mr r7, r29
/* 808375AC  4B B2 A9 68 */	b __construct_new_array
/* 808375B0  90 7E 05 68 */	stw r3, 0x568(r30)
/* 808375B4  38 00 00 00 */	li r0, 0
/* 808375B8  90 1E 05 6C */	stw r0, 0x56c(r30)
/* 808375BC  80 7E 05 84 */	lwz r3, 0x584(r30)
/* 808375C0  80 1E 05 88 */	lwz r0, 0x588(r30)
/* 808375C4  7F A3 01 D6 */	mullw r29, r3, r0
/* 808375C8  57 A3 28 34 */	slwi r3, r29, 5
/* 808375CC  38 63 00 10 */	addi r3, r3, 0x10
/* 808375D0  4B A9 76 F4 */	b __nwa__FUl
/* 808375D4  3C 80 80 83 */	lis r4, __ct__11FmtMember_cFv@ha
/* 808375D8  38 84 77 98 */	addi r4, r4, __ct__11FmtMember_cFv@l
/* 808375DC  3C A0 80 83 */	lis r5, __dt__11FmtMember_cFv@ha
/* 808375E0  38 A5 74 58 */	addi r5, r5, __dt__11FmtMember_cFv@l
/* 808375E4  38 C0 00 20 */	li r6, 0x20
/* 808375E8  7F A7 EB 78 */	mr r7, r29
/* 808375EC  4B B2 A9 28 */	b __construct_new_array
/* 808375F0  90 7E 05 6C */	stw r3, 0x56c(r30)
/* 808375F4  80 BE 05 6C */	lwz r5, 0x56c(r30)
/* 808375F8  38 C0 00 00 */	li r6, 0
/* 808375FC  38 80 FF FF */	li r4, -1
/* 80837600  48 00 00 10 */	b lbl_80837610
lbl_80837604:
/* 80837604  90 85 00 00 */	stw r4, 0(r5)
/* 80837608  38 C6 00 01 */	addi r6, r6, 1
/* 8083760C  38 A5 00 20 */	addi r5, r5, 0x20
lbl_80837610:
/* 80837610  80 7E 05 84 */	lwz r3, 0x584(r30)
/* 80837614  80 1E 05 88 */	lwz r0, 0x588(r30)
/* 80837618  7C 03 01 D6 */	mullw r0, r3, r0
/* 8083761C  7C 06 00 00 */	cmpw r6, r0
/* 80837620  41 80 FF E4 */	blt lbl_80837604
/* 80837624  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80837628  54 05 86 3E */	rlwinm r5, r0, 0x10, 0x18, 0x1f
/* 8083762C  38 80 00 0A */	li r4, 0xa
/* 80837630  7C 05 23 D6 */	divw r0, r5, r4
/* 80837634  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 80837638  7C 00 21 D6 */	mullw r0, r0, r4
/* 8083763C  7C 00 28 50 */	subf r0, r0, r5
/* 80837640  1C 00 00 0A */	mulli r0, r0, 0xa
/* 80837644  7C 03 02 14 */	add r0, r3, r0
/* 80837648  90 1E 05 8C */	stw r0, 0x58c(r30)
/* 8083764C  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80837650  54 05 46 3E */	srwi r5, r0, 0x18
/* 80837654  7C 05 23 D6 */	divw r0, r5, r4
/* 80837658  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8083765C  7C 00 21 D6 */	mullw r0, r0, r4
/* 80837660  7C 00 28 50 */	subf r0, r0, r5
/* 80837664  1C 00 00 0A */	mulli r0, r0, 0xa
/* 80837668  7C 03 02 14 */	add r0, r3, r0
/* 8083766C  90 1E 05 90 */	stw r0, 0x590(r30)
/* 80837670  7F C3 F3 78 */	mr r3, r30
/* 80837674  4B FF DF B1 */	bl initMemberPos__10daFmtMng_cFv
/* 80837678  3B E0 00 00 */	li r31, 0
/* 8083767C  4B 97 4F 00 */	b dKy_darkworld_check__Fv
/* 80837680  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80837684  41 82 00 10 */	beq lbl_80837694
/* 80837688  4B 96 84 A8 */	b dKy_getDarktime_minute__Fv
/* 8083768C  7C 7D 1B 78 */	mr r29, r3
/* 80837690  48 00 00 0C */	b lbl_8083769C
lbl_80837694:
/* 80837694  4B 96 83 A8 */	b dKy_getdaytime_minute__Fv
/* 80837698  7C 7D 1B 78 */	mr r29, r3
lbl_8083769C:
/* 8083769C  4B 97 4E E0 */	b dKy_darkworld_check__Fv
/* 808376A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 808376A4  41 82 00 0C */	beq lbl_808376B0
/* 808376A8  4B 96 84 4C */	b dKy_getDarktime_hour__Fv
/* 808376AC  48 00 00 08 */	b lbl_808376B4
lbl_808376B0:
/* 808376B0  4B 96 83 60 */	b dKy_getdaytime_hour__Fv
lbl_808376B4:
/* 808376B4  1C 03 00 3C */	mulli r0, r3, 0x3c
/* 808376B8  7C 7D 02 14 */	add r3, r29, r0
/* 808376BC  80 1E 05 8C */	lwz r0, 0x58c(r30)
/* 808376C0  7C 03 00 00 */	cmpw r3, r0
/* 808376C4  40 81 00 20 */	ble lbl_808376E4
/* 808376C8  80 1E 05 90 */	lwz r0, 0x590(r30)
/* 808376CC  7C 03 00 00 */	cmpw r3, r0
/* 808376D0  40 80 00 14 */	bge lbl_808376E4
/* 808376D4  38 00 00 01 */	li r0, 1
/* 808376D8  90 1E 05 78 */	stw r0, 0x578(r30)
/* 808376DC  3B E0 00 01 */	li r31, 1
/* 808376E0  48 00 00 0C */	b lbl_808376EC
lbl_808376E4:
/* 808376E4  38 00 00 00 */	li r0, 0
/* 808376E8  90 1E 05 78 */	stw r0, 0x578(r30)
lbl_808376EC:
/* 808376EC  80 1E 05 78 */	lwz r0, 0x578(r30)
/* 808376F0  90 1E 05 7C */	stw r0, 0x57c(r30)
/* 808376F4  80 1E 05 78 */	lwz r0, 0x578(r30)
/* 808376F8  1C 80 00 18 */	mulli r4, r0, 0x18
/* 808376FC  3C 60 80 83 */	lis r3, ActionTable__10daFmtMng_c@ha
/* 80837700  38 03 79 C4 */	addi r0, r3, ActionTable__10daFmtMng_c@l
/* 80837704  7C 00 22 14 */	add r0, r0, r4
/* 80837708  90 1E 05 74 */	stw r0, 0x574(r30)
/* 8083770C  83 9E 05 6C */	lwz r28, 0x56c(r30)
/* 80837710  3B 60 00 00 */	li r27, 0
/* 80837714  57 E0 82 1E */	rlwinm r0, r31, 0x10, 8, 0xf
/* 80837718  60 1D 02 00 */	ori r29, r0, 0x200
/* 8083771C  48 00 00 50 */	b lbl_8083776C
lbl_80837720:
/* 80837720  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 80837724  7C 07 07 74 */	extsb r7, r0
/* 80837728  38 00 00 00 */	li r0, 0
/* 8083772C  90 01 00 08 */	stw r0, 8(r1)
/* 80837730  38 60 02 94 */	li r3, 0x294
/* 80837734  28 1E 00 00 */	cmplwi r30, 0
/* 80837738  41 82 00 0C */	beq lbl_80837744
/* 8083773C  80 9E 00 04 */	lwz r4, 4(r30)
/* 80837740  48 00 00 08 */	b lbl_80837748
lbl_80837744:
/* 80837744  38 80 FF FF */	li r4, -1
lbl_80837748:
/* 80837748  7F A5 EB 78 */	mr r5, r29
/* 8083774C  38 DC 00 04 */	addi r6, r28, 4
/* 80837750  39 1E 04 B4 */	addi r8, r30, 0x4b4
/* 80837754  39 20 00 00 */	li r9, 0
/* 80837758  39 40 FF FF */	li r10, -1
/* 8083775C  4B 7E 27 94 */	b fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i
/* 80837760  90 7C 00 00 */	stw r3, 0(r28)
/* 80837764  3B 7B 00 01 */	addi r27, r27, 1
/* 80837768  3B 9C 00 20 */	addi r28, r28, 0x20
lbl_8083776C:
/* 8083776C  80 7E 05 84 */	lwz r3, 0x584(r30)
/* 80837770  80 1E 05 88 */	lwz r0, 0x588(r30)
/* 80837774  7C 03 01 D6 */	mullw r0, r3, r0
/* 80837778  7C 1B 00 00 */	cmpw r27, r0
/* 8083777C  41 80 FF A4 */	blt lbl_80837720
/* 80837780  39 61 00 30 */	addi r11, r1, 0x30
/* 80837784  4B B2 AA 9C */	b _restgpr_27
/* 80837788  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8083778C  7C 08 03 A6 */	mtlr r0
/* 80837790  38 21 00 30 */	addi r1, r1, 0x30
/* 80837794  4E 80 00 20 */	blr 