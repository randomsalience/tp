lbl_8078977C:
/* 8078977C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80789780  7C 08 02 A6 */	mflr r0
/* 80789784  90 01 00 14 */	stw r0, 0x14(r1)
/* 80789788  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8078978C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80789790  41 82 00 1C */	beq lbl_807897AC
/* 80789794  3C A0 80 79 */	lis r5, __vt__12daE_SF_HIO_c@ha /* 0x8078A01C@ha */
/* 80789798  38 05 A0 1C */	addi r0, r5, __vt__12daE_SF_HIO_c@l /* 0x8078A01C@l */
/* 8078979C  90 1F 00 00 */	stw r0, 0(r31)
/* 807897A0  7C 80 07 35 */	extsh. r0, r4
/* 807897A4  40 81 00 08 */	ble lbl_807897AC
/* 807897A8  4B B4 55 95 */	bl __dl__FPv
lbl_807897AC:
/* 807897AC  7F E3 FB 78 */	mr r3, r31
/* 807897B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807897B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807897B8  7C 08 03 A6 */	mtlr r0
/* 807897BC  38 21 00 10 */	addi r1, r1, 0x10
/* 807897C0  4E 80 00 20 */	blr 
