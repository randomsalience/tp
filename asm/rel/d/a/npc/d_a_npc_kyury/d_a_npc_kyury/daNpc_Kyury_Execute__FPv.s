lbl_80A625B0:
/* 80A625B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A625B4  7C 08 02 A6 */	mflr r0
/* 80A625B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A625BC  4B FF E4 21 */	bl Execute__13daNpc_Kyury_cFv
/* 80A625C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A625C4  7C 08 03 A6 */	mtlr r0
/* 80A625C8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A625CC  4E 80 00 20 */	blr 
