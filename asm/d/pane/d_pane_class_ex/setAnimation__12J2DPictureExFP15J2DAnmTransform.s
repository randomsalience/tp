lbl_80256064:
/* 80256064  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80256068  7C 08 02 A6 */	mflr r0
/* 8025606C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80256070  48 0A 1F 55 */	bl setAnimation__7J2DPaneFP15J2DAnmTransform
/* 80256074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80256078  7C 08 03 A6 */	mtlr r0
/* 8025607C  38 21 00 10 */	addi r1, r1, 0x10
/* 80256080  4E 80 00 20 */	blr 
