lbl_803660D8:
/* 803660D8  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 803660DC  7C 63 2A 14 */	add r3, r3, r5
/* 803660E0  38 A5 00 01 */	addi r5, r5, 1
/* 803660E4  48 00 00 10 */	b lbl_803660F4
lbl_803660E8:
/* 803660E8  8C 03 FF FF */	lbzu r0, -1(r3)
/* 803660EC  7C 00 20 40 */	cmplw r0, r4
/* 803660F0  4D 82 00 20 */	beqlr 
lbl_803660F4:
/* 803660F4  34 A5 FF FF */	addic. r5, r5, -1
/* 803660F8  40 82 FF F0 */	bne lbl_803660E8
/* 803660FC  38 60 00 00 */	li r3, 0
/* 80366100  4E 80 00 20 */	blr 