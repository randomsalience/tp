lbl_80A93560:
/* 80A93560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A93564  7C 08 02 A6 */	mflr r0
/* 80A93568  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A9356C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A93570  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A93574  41 82 00 10 */	beq lbl_80A93584
/* 80A93578  7C 80 07 35 */	extsh. r0, r4
/* 80A9357C  40 81 00 08 */	ble lbl_80A93584
/* 80A93580  4B 83 B7 BC */	b __dl__FPv
lbl_80A93584:
/* 80A93584  7F E3 FB 78 */	mr r3, r31
/* 80A93588  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A9358C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A93590  7C 08 03 A6 */	mtlr r0
/* 80A93594  38 21 00 10 */	addi r1, r1, 0x10
/* 80A93598  4E 80 00 20 */	blr 