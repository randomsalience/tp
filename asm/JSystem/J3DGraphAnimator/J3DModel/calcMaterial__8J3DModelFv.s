lbl_803276EC:
/* 803276EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803276F0  7C 08 02 A6 */	mflr r0
/* 803276F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803276F8  39 61 00 20 */	addi r11, r1, 0x20
/* 803276FC  48 03 AA D5 */	bl _savegpr_26
/* 80327700  7C 7D 1B 78 */	mr r29, r3
/* 80327704  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80327708  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 8032770C  93 A3 00 38 */	stw r29, 0x38(r3)
/* 80327710  80 1D 00 08 */	lwz r0, 8(r29)
/* 80327714  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80327718  41 82 00 14 */	beq lbl_8032772C
/* 8032771C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80327720  60 00 00 04 */	ori r0, r0, 4
/* 80327724  90 03 00 34 */	stw r0, 0x34(r3)
/* 80327728  48 00 00 10 */	b lbl_80327738
lbl_8032772C:
/* 8032772C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80327730  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80327734  90 03 00 34 */	stw r0, 0x34(r3)
lbl_80327738:
/* 80327738  80 1D 00 08 */	lwz r0, 8(r29)
/* 8032773C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80327740  41 82 00 1C */	beq lbl_8032775C
/* 80327744  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80327748  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 8032774C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80327750  60 00 00 08 */	ori r0, r0, 8
/* 80327754  90 03 00 34 */	stw r0, 0x34(r3)
/* 80327758  48 00 00 18 */	b lbl_80327770
lbl_8032775C:
/* 8032775C  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80327760  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 80327764  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80327768  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8032776C  90 03 00 34 */	stw r0, 0x34(r3)
lbl_80327770:
/* 80327770  80 7D 00 04 */	lwz r3, 4(r29)
/* 80327774  4B FF E9 85 */	bl syncJ3DSysFlags__12J3DModelDataCFv
/* 80327778  80 9D 00 04 */	lwz r4, 4(r29)
/* 8032777C  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 80327780  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80327784  3B E3 4A C8 */	addi r31, r3, j3dSys@l
/* 80327788  90 1F 00 58 */	stw r0, 0x58(r31)
/* 8032778C  A3 84 00 5C */	lhz r28, 0x5c(r4)
/* 80327790  3B C0 00 00 */	li r30, 0
/* 80327794  3F 60 C0 00 */	lis r27, 0xc000
/* 80327798  48 00 00 9C */	b lbl_80327834
lbl_8032779C:
/* 8032779C  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 803277A0  57 C0 32 B2 */	rlwinm r0, r30, 6, 0xa, 0x19
/* 803277A4  7C 03 02 14 */	add r0, r3, r0
/* 803277A8  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 803277AC  80 7D 00 04 */	lwz r3, 4(r29)
/* 803277B0  80 63 00 60 */	lwz r3, 0x60(r3)
/* 803277B4  57 C0 13 BA */	rlwinm r0, r30, 2, 0xe, 0x1d
/* 803277B8  7F 43 00 2E */	lwzx r26, r3, r0
/* 803277BC  80 7A 00 3C */	lwz r3, 0x3c(r26)
/* 803277C0  7C 03 D8 40 */	cmplw r3, r27
/* 803277C4  40 80 00 0C */	bge lbl_803277D0
/* 803277C8  7C 60 1B 78 */	mr r0, r3
/* 803277CC  48 00 00 08 */	b lbl_803277D4
lbl_803277D0:
/* 803277D0  38 00 00 00 */	li r0, 0
lbl_803277D4:
/* 803277D4  28 00 00 00 */	cmplwi r0, 0
/* 803277D8  41 82 00 2C */	beq lbl_80327804
/* 803277DC  3C 00 C0 00 */	lis r0, 0xc000
/* 803277E0  7C 03 00 40 */	cmplw r3, r0
/* 803277E4  40 80 00 08 */	bge lbl_803277EC
/* 803277E8  48 00 00 08 */	b lbl_803277F0
lbl_803277EC:
/* 803277EC  38 60 00 00 */	li r3, 0
lbl_803277F0:
/* 803277F0  7F 44 D3 78 */	mr r4, r26
/* 803277F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803277F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803277FC  7D 89 03 A6 */	mtctr r12
/* 80327800  4E 80 04 21 */	bctrl 
lbl_80327804:
/* 80327804  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 80327808  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8032780C  80 7D 00 84 */	lwz r3, 0x84(r29)
/* 80327810  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80327814  1C 00 00 30 */	mulli r0, r0, 0x30
/* 80327818  7C 83 02 14 */	add r4, r3, r0
/* 8032781C  7F 43 D3 78 */	mr r3, r26
/* 80327820  81 9A 00 00 */	lwz r12, 0(r26)
/* 80327824  81 8C 00 08 */	lwz r12, 8(r12)
/* 80327828  7D 89 03 A6 */	mtctr r12
/* 8032782C  4E 80 04 21 */	bctrl 
/* 80327830  3B DE 00 01 */	addi r30, r30, 1
lbl_80327834:
/* 80327834  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 80327838  7C 00 E0 40 */	cmplw r0, r28
/* 8032783C  41 80 FF 60 */	blt lbl_8032779C
/* 80327840  39 61 00 20 */	addi r11, r1, 0x20
/* 80327844  48 03 A9 D9 */	bl _restgpr_26
/* 80327848  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032784C  7C 08 03 A6 */	mtlr r0
/* 80327850  38 21 00 20 */	addi r1, r1, 0x20
/* 80327854  4E 80 00 20 */	blr 