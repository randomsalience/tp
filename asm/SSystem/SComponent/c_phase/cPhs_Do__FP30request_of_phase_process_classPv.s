lbl_802666D8:
/* 802666D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802666DC  7C 08 02 A6 */	mflr r0
/* 802666E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802666E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802666E8  7C 7F 1B 78 */	mr r31, r3
/* 802666EC  80 A3 00 00 */	lwz r5, 0(r3)
/* 802666F0  28 05 00 00 */	cmplwi r5, 0
/* 802666F4  41 82 00 A0 */	beq lbl_80266794
/* 802666F8  80 1F 00 04 */	lwz r0, 4(r31)
/* 802666FC  54 00 10 3A */	slwi r0, r0, 2
/* 80266700  7C 83 23 78 */	mr r3, r4
/* 80266704  7D 85 00 2E */	lwzx r12, r5, r0
/* 80266708  7D 89 03 A6 */	mtctr r12
/* 8026670C  4E 80 04 21 */	bctrl 
/* 80266710  2C 03 00 03 */	cmpwi r3, 3
/* 80266714  41 82 00 5C */	beq lbl_80266770
/* 80266718  40 80 00 14 */	bge lbl_8026672C
/* 8026671C  2C 03 00 01 */	cmpwi r3, 1
/* 80266720  41 82 00 1C */	beq lbl_8026673C
/* 80266724  40 80 00 24 */	bge lbl_80266748
/* 80266728  48 00 00 70 */	b lbl_80266798
lbl_8026672C:
/* 8026672C  2C 03 00 05 */	cmpwi r3, 5
/* 80266730  41 82 00 50 */	beq lbl_80266780
/* 80266734  40 80 00 64 */	bge lbl_80266798
/* 80266738  48 00 00 2C */	b lbl_80266764
lbl_8026673C:
/* 8026673C  7F E3 FB 78 */	mr r3, r31
/* 80266740  4B FF FF 39 */	bl cPhs_Next__FP30request_of_phase_process_class
/* 80266744  48 00 00 54 */	b lbl_80266798
lbl_80266748:
/* 80266748  7F E3 FB 78 */	mr r3, r31
/* 8026674C  4B FF FF 2D */	bl cPhs_Next__FP30request_of_phase_process_class
/* 80266750  2C 03 00 01 */	cmpwi r3, 1
/* 80266754  38 60 00 04 */	li r3, 4
/* 80266758  40 82 00 40 */	bne lbl_80266798
/* 8026675C  38 60 00 02 */	li r3, 2
/* 80266760  48 00 00 38 */	b lbl_80266798
lbl_80266764:
/* 80266764  7F E3 FB 78 */	mr r3, r31
/* 80266768  4B FF FF 01 */	bl cPhs_Compleate__FP30request_of_phase_process_class
/* 8026676C  48 00 00 2C */	b lbl_80266798
lbl_80266770:
/* 80266770  7F E3 FB 78 */	mr r3, r31
/* 80266774  4B FF FE CD */	bl cPhs_UnCompleate__FP30request_of_phase_process_class
/* 80266778  38 60 00 03 */	li r3, 3
/* 8026677C  48 00 00 1C */	b lbl_80266798
lbl_80266780:
/* 80266780  7F E3 FB 78 */	mr r3, r31
/* 80266784  4B FF FE BD */	bl cPhs_UnCompleate__FP30request_of_phase_process_class
/* 80266788  38 60 00 05 */	li r3, 5
/* 8026678C  48 00 00 0C */	b lbl_80266798
/* 80266790  48 00 00 08 */	b lbl_80266798
lbl_80266794:
/* 80266794  4B FF FE D5 */	bl cPhs_Compleate__FP30request_of_phase_process_class
lbl_80266798:
/* 80266798  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026679C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802667A0  7C 08 03 A6 */	mtlr r0
/* 802667A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802667A8  4E 80 00 20 */	blr 