lbl_800347E8:
/* 800347E8  38 A0 00 01 */	li r5, 1
/* 800347EC  54 80 06 FE */	clrlwi r0, r4, 0x1b
/* 800347F0  7C A5 00 30 */	slw r5, r5, r0
/* 800347F4  7C 80 2E 70 */	srawi r0, r4, 5
/* 800347F8  54 00 10 3A */	slwi r0, r0, 2
/* 800347FC  7C 03 00 2E */	lwzx r0, r3, r0
/* 80034800  7C A3 00 38 */	and r3, r5, r0
/* 80034804  30 03 FF FF */	addic r0, r3, -1
/* 80034808  7C 60 19 10 */	subfe r3, r0, r3
/* 8003480C  4E 80 00 20 */	blr 