lbl_809973BC:
/* 809973BC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 809973C0  7C 08 02 A6 */	mflr r0
/* 809973C4  90 01 00 44 */	stw r0, 0x44(r1)
/* 809973C8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 809973CC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 809973D0  7C 7E 1B 78 */	mr r30, r3
/* 809973D4  3C 80 80 9A */	lis r4, cNullVec__6Z2Calc@ha /* 0x80999AB0@ha */
/* 809973D8  3B E4 9A B0 */	addi r31, r4, cNullVec__6Z2Calc@l /* 0x80999AB0@l */
/* 809973DC  88 03 11 11 */	lbz r0, 0x1111(r3)
/* 809973E0  28 00 00 00 */	cmplwi r0, 0
/* 809973E4  41 82 00 D4 */	beq lbl_809974B8
/* 809973E8  80 9F 03 7C */	lwz r4, 0x37c(r31)
/* 809973EC  80 1F 03 80 */	lwz r0, 0x380(r31)
/* 809973F0  90 81 00 2C */	stw r4, 0x2c(r1)
/* 809973F4  90 01 00 30 */	stw r0, 0x30(r1)
/* 809973F8  80 1F 03 84 */	lwz r0, 0x384(r31)
/* 809973FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80997400  38 81 00 2C */	addi r4, r1, 0x2c
/* 80997404  48 00 08 BD */	bl chkAction__14daNpc_clerkB_cFM14daNpc_clerkB_cFPCvPvPv_i
/* 80997408  2C 03 00 00 */	cmpwi r3, 0
/* 8099740C  41 82 00 1C */	beq lbl_80997428
/* 80997410  7F C3 F3 78 */	mr r3, r30
/* 80997414  38 80 00 00 */	li r4, 0
/* 80997418  39 9E 10 EC */	addi r12, r30, 0x10ec
/* 8099741C  4B 9C AC 69 */	bl __ptmf_scall
/* 80997420  60 00 00 00 */	nop 
/* 80997424  48 00 01 58 */	b lbl_8099757C
lbl_80997428:
/* 80997428  38 00 00 00 */	li r0, 0
/* 8099742C  98 1E 0E 2E */	stb r0, 0xe2e(r30)
/* 80997430  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80997434  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80997438  88 83 4F B5 */	lbz r4, 0x4fb5(r3)
/* 8099743C  28 04 00 01 */	cmplwi r4, 1
/* 80997440  41 82 00 0C */	beq lbl_8099744C
/* 80997444  28 04 00 02 */	cmplwi r4, 2
/* 80997448  40 82 00 08 */	bne lbl_80997450
lbl_8099744C:
/* 8099744C  38 00 00 01 */	li r0, 1
lbl_80997450:
/* 80997450  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80997454  41 82 00 34 */	beq lbl_80997488
/* 80997458  38 63 4F F8 */	addi r3, r3, 0x4ff8
/* 8099745C  4B 6B 13 95 */	bl ChkPresentEnd__16dEvent_manager_cFv
/* 80997460  2C 03 00 00 */	cmpwi r3, 0
/* 80997464  40 82 00 0C */	bne lbl_80997470
/* 80997468  38 60 00 01 */	li r3, 1
/* 8099746C  48 00 01 14 */	b lbl_80997580
lbl_80997470:
/* 80997470  38 00 00 02 */	li r0, 2
/* 80997474  B0 1E 0E 30 */	sth r0, 0xe30(r30)
/* 80997478  7F C3 F3 78 */	mr r3, r30
/* 8099747C  4B 7B 2D A9 */	bl evtChange__8daNpcT_cFv
/* 80997480  38 60 00 01 */	li r3, 1
/* 80997484  48 00 00 FC */	b lbl_80997580
lbl_80997488:
/* 80997488  38 7E 0E 78 */	addi r3, r30, 0xe78
/* 8099748C  4B 7F E8 11 */	bl shop_cam_action_init__16ShopCam_action_cFv
/* 80997490  80 7F 03 88 */	lwz r3, 0x388(r31)
/* 80997494  80 1F 03 8C */	lwz r0, 0x38c(r31)
/* 80997498  90 61 00 20 */	stw r3, 0x20(r1)
/* 8099749C  90 01 00 24 */	stw r0, 0x24(r1)
/* 809974A0  80 1F 03 90 */	lwz r0, 0x390(r31)
/* 809974A4  90 01 00 28 */	stw r0, 0x28(r1)
/* 809974A8  7F C3 F3 78 */	mr r3, r30
/* 809974AC  38 81 00 20 */	addi r4, r1, 0x20
/* 809974B0  48 00 08 3D */	bl setAction__14daNpc_clerkB_cFM14daNpc_clerkB_cFPCvPvPv_i
/* 809974B4  48 00 00 C8 */	b lbl_8099757C
lbl_809974B8:
/* 809974B8  80 9F 03 94 */	lwz r4, 0x394(r31)
/* 809974BC  80 1F 03 98 */	lwz r0, 0x398(r31)
/* 809974C0  90 81 00 14 */	stw r4, 0x14(r1)
/* 809974C4  90 01 00 18 */	stw r0, 0x18(r1)
/* 809974C8  80 1F 03 9C */	lwz r0, 0x39c(r31)
/* 809974CC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 809974D0  38 81 00 14 */	addi r4, r1, 0x14
/* 809974D4  48 00 07 ED */	bl chkAction__14daNpc_clerkB_cFM14daNpc_clerkB_cFPCvPvPv_i
/* 809974D8  2C 03 00 00 */	cmpwi r3, 0
/* 809974DC  41 82 00 1C */	beq lbl_809974F8
/* 809974E0  7F C3 F3 78 */	mr r3, r30
/* 809974E4  38 80 00 00 */	li r4, 0
/* 809974E8  39 9E 10 EC */	addi r12, r30, 0x10ec
/* 809974EC  4B 9C AB 99 */	bl __ptmf_scall
/* 809974F0  60 00 00 00 */	nop 
/* 809974F4  48 00 00 88 */	b lbl_8099757C
lbl_809974F8:
/* 809974F8  38 00 00 00 */	li r0, 0
/* 809974FC  98 1E 0E 2E */	stb r0, 0xe2e(r30)
/* 80997500  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80997504  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80997508  88 83 4F B5 */	lbz r4, 0x4fb5(r3)
/* 8099750C  28 04 00 01 */	cmplwi r4, 1
/* 80997510  41 82 00 0C */	beq lbl_8099751C
/* 80997514  28 04 00 02 */	cmplwi r4, 2
/* 80997518  40 82 00 08 */	bne lbl_80997520
lbl_8099751C:
/* 8099751C  38 00 00 01 */	li r0, 1
lbl_80997520:
/* 80997520  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80997524  41 82 00 34 */	beq lbl_80997558
/* 80997528  38 63 4F F8 */	addi r3, r3, 0x4ff8
/* 8099752C  4B 6B 12 C5 */	bl ChkPresentEnd__16dEvent_manager_cFv
/* 80997530  2C 03 00 00 */	cmpwi r3, 0
/* 80997534  40 82 00 0C */	bne lbl_80997540
/* 80997538  38 60 00 01 */	li r3, 1
/* 8099753C  48 00 00 44 */	b lbl_80997580
lbl_80997540:
/* 80997540  38 00 00 02 */	li r0, 2
/* 80997544  B0 1E 0E 30 */	sth r0, 0xe30(r30)
/* 80997548  7F C3 F3 78 */	mr r3, r30
/* 8099754C  4B 7B 2C D9 */	bl evtChange__8daNpcT_cFv
/* 80997550  38 60 00 01 */	li r3, 1
/* 80997554  48 00 00 2C */	b lbl_80997580
lbl_80997558:
/* 80997558  80 7F 03 A0 */	lwz r3, 0x3a0(r31)
/* 8099755C  80 1F 03 A4 */	lwz r0, 0x3a4(r31)
/* 80997560  90 61 00 08 */	stw r3, 8(r1)
/* 80997564  90 01 00 0C */	stw r0, 0xc(r1)
/* 80997568  80 1F 03 A8 */	lwz r0, 0x3a8(r31)
/* 8099756C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80997570  7F C3 F3 78 */	mr r3, r30
/* 80997574  38 81 00 08 */	addi r4, r1, 8
/* 80997578  48 00 07 75 */	bl setAction__14daNpc_clerkB_cFM14daNpc_clerkB_cFPCvPvPv_i
lbl_8099757C:
/* 8099757C  38 60 00 01 */	li r3, 1
lbl_80997580:
/* 80997580  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80997584  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80997588  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8099758C  7C 08 03 A6 */	mtlr r0
/* 80997590  38 21 00 40 */	addi r1, r1, 0x40
/* 80997594  4E 80 00 20 */	blr 
