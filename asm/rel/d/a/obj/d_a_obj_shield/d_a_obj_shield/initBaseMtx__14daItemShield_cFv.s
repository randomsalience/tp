lbl_80CD6D9C:
/* 80CD6D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CD6DA0  7C 08 02 A6 */	mflr r0
/* 80CD6DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CD6DA8  80 83 05 74 */	lwz r4, 0x574(r3)
/* 80CD6DAC  C0 03 04 EC */	lfs f0, 0x4ec(r3)
/* 80CD6DB0  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80CD6DB4  C0 03 04 F0 */	lfs f0, 0x4f0(r3)
/* 80CD6DB8  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80CD6DBC  C0 03 04 F4 */	lfs f0, 0x4f4(r3)
/* 80CD6DC0  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80CD6DC4  48 00 00 15 */	bl setBaseMtx__14daItemShield_cFv
/* 80CD6DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CD6DCC  7C 08 03 A6 */	mtlr r0
/* 80CD6DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80CD6DD4  4E 80 00 20 */	blr 
