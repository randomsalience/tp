lbl_80255758:
/* 80255758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025575C  7C 08 02 A6 */	mflr r0
/* 80255760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80255764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80255768  93 C1 00 08 */	stw r30, 8(r1)
/* 8025576C  7C 7E 1B 78 */	mr r30, r3
/* 80255770  7C 9F 23 78 */	mr r31, r4
/* 80255774  88 03 00 19 */	lbz r0, 0x19(r3)
/* 80255778  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8025577C  41 82 00 24 */	beq lbl_802557A0
/* 80255780  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80255784  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80255788  80 7E 00 04 */	lwz r3, 4(r30)
/* 8025578C  48 0A 23 01 */	bl getFirstChildPane__7J2DPaneFv
/* 80255790  7C 64 1B 78 */	mr r4, r3
/* 80255794  7F C3 F3 78 */	mr r3, r30
/* 80255798  7F E5 FB 78 */	mr r5, r31
/* 8025579C  48 00 03 C1 */	bl childPaneSetAlpha__13CPaneMgrAlphaFP7J2DPaneUc
lbl_802557A0:
/* 802557A0  80 7E 00 04 */	lwz r3, 4(r30)
/* 802557A4  7F E4 FB 78 */	mr r4, r31
/* 802557A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802557AC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802557B0  7D 89 03 A6 */	mtctr r12
/* 802557B4  4E 80 04 21 */	bctrl 
/* 802557B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802557BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802557C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802557C4  7C 08 03 A6 */	mtlr r0
/* 802557C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802557CC  4E 80 00 20 */	blr 