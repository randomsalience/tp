lbl_80459840:
/* 80459840  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80459844  7C 08 02 A6 */	mflr r0
/* 80459848  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8045984C  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80459850  4B F0 89 8C */	b _savegpr_29
/* 80459854  7C 7D 1B 78 */	mr r29, r3
/* 80459858  90 83 00 18 */	stw r4, 0x18(r3)
/* 8045985C  88 04 00 04 */	lbz r0, 4(r4)
/* 80459860  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80459864  3B E0 00 00 */	li r31, 0
/* 80459868  3B C4 00 08 */	addi r30, r4, 8
/* 8045986C  48 00 00 60 */	b lbl_804598CC
lbl_80459870:
/* 80459870  38 61 00 48 */	addi r3, r1, 0x48
/* 80459874  7F C4 F3 78 */	mr r4, r30
/* 80459878  4B F0 F2 B4 */	b strcpy
/* 8045987C  7F C3 F3 78 */	mr r3, r30
/* 80459880  4B F0 F3 64 */	b strlen
/* 80459884  7F C3 F2 14 */	add r30, r3, r30
/* 80459888  8C 1E 00 01 */	lbzu r0, 1(r30)
/* 8045988C  28 00 00 00 */	cmplwi r0, 0
/* 80459890  41 82 00 24 */	beq lbl_804598B4
/* 80459894  38 61 00 08 */	addi r3, r1, 8
/* 80459898  7F C4 F3 78 */	mr r4, r30
/* 8045989C  4B F0 F2 90 */	b strcpy
/* 804598A0  7F C3 F3 78 */	mr r3, r30
/* 804598A4  4B F0 F3 40 */	b strlen
/* 804598A8  7F C3 F2 14 */	add r30, r3, r30
/* 804598AC  3B DE 00 01 */	addi r30, r30, 1
/* 804598B0  48 00 00 18 */	b lbl_804598C8
lbl_804598B4:
/* 804598B4  40 82 00 14 */	bne lbl_804598C8
/* 804598B8  88 1E 00 01 */	lbz r0, 1(r30)
/* 804598BC  28 00 00 01 */	cmplwi r0, 1
/* 804598C0  40 82 00 08 */	bne lbl_804598C8
/* 804598C4  3B DE 00 02 */	addi r30, r30, 2
lbl_804598C8:
/* 804598C8  3B FF 00 01 */	addi r31, r31, 1
lbl_804598CC:
/* 804598CC  88 1D 00 1C */	lbz r0, 0x1c(r29)
/* 804598D0  7C 1F 00 00 */	cmpw r31, r0
/* 804598D4  41 80 FF 9C */	blt lbl_80459870
/* 804598D8  7F C3 F3 78 */	mr r3, r30
/* 804598DC  39 61 00 A0 */	addi r11, r1, 0xa0
/* 804598E0  4B F0 89 48 */	b _restgpr_29
/* 804598E4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 804598E8  7C 08 03 A6 */	mtlr r0
/* 804598EC  38 21 00 A0 */	addi r1, r1, 0xa0
/* 804598F0  4E 80 00 20 */	blr 