lbl_8048F9B4:
/* 8048F9B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8048F9B8  7C 08 02 A6 */	mflr r0
/* 8048F9BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8048F9C0  38 80 FF FF */	li r4, -1
/* 8048F9C4  81 83 05 68 */	lwz r12, 0x568(r3)
/* 8048F9C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8048F9CC  7D 89 03 A6 */	mtctr r12
/* 8048F9D0  4E 80 04 21 */	bctrl 
/* 8048F9D4  38 60 00 01 */	li r3, 1
/* 8048F9D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8048F9DC  7C 08 03 A6 */	mtlr r0
/* 8048F9E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8048F9E4  4E 80 00 20 */	blr 
