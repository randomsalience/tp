lbl_80849078:
/* 80849078  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8084907C  7C 08 02 A6 */	mflr r0
/* 80849080  90 01 00 14 */	stw r0, 0x14(r1)
/* 80849084  4B A1 A0 0C */	b ModuleUnresolved
/* 80849088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8084908C  7C 08 03 A6 */	mtlr r0
/* 80849090  38 21 00 10 */	addi r1, r1, 0x10
/* 80849094  4E 80 00 20 */	blr 