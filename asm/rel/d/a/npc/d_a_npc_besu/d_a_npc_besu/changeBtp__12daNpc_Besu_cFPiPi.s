lbl_805398DC:
/* 805398DC  88 03 10 C4 */	lbz r0, 0x10c4(r3)
/* 805398E0  28 00 00 11 */	cmplwi r0, 0x11
/* 805398E4  4C 82 00 20 */	bnelr 
/* 805398E8  80 04 00 00 */	lwz r0, 0(r4)
/* 805398EC  2C 00 00 16 */	cmpwi r0, 0x16
/* 805398F0  41 82 00 64 */	beq lbl_80539954
/* 805398F4  40 80 00 10 */	bge lbl_80539904
/* 805398F8  2C 00 00 12 */	cmpwi r0, 0x12
/* 805398FC  41 82 00 30 */	beq lbl_8053992C
/* 80539900  4E 80 00 20 */	blr 
lbl_80539904:
/* 80539904  2C 00 00 1A */	cmpwi r0, 0x1a
/* 80539908  41 82 00 38 */	beq lbl_80539940
/* 8053990C  4C 80 00 20 */	bgelr 
/* 80539910  2C 00 00 19 */	cmpwi r0, 0x19
/* 80539914  4D 80 00 20 */	bltlr 
/* 80539918  38 00 00 13 */	li r0, 0x13
/* 8053991C  90 04 00 00 */	stw r0, 0(r4)
/* 80539920  38 00 00 07 */	li r0, 7
/* 80539924  90 05 00 00 */	stw r0, 0(r5)
/* 80539928  4E 80 00 20 */	blr 
lbl_8053992C:
/* 8053992C  38 00 00 14 */	li r0, 0x14
/* 80539930  90 04 00 00 */	stw r0, 0(r4)
/* 80539934  38 00 00 07 */	li r0, 7
/* 80539938  90 05 00 00 */	stw r0, 0(r5)
/* 8053993C  4E 80 00 20 */	blr 
lbl_80539940:
/* 80539940  38 00 00 15 */	li r0, 0x15
/* 80539944  90 04 00 00 */	stw r0, 0(r4)
/* 80539948  38 00 00 07 */	li r0, 7
/* 8053994C  90 05 00 00 */	stw r0, 0(r5)
/* 80539950  4E 80 00 20 */	blr 
lbl_80539954:
/* 80539954  38 00 00 16 */	li r0, 0x16
/* 80539958  90 04 00 00 */	stw r0, 0(r4)
/* 8053995C  38 00 00 07 */	li r0, 7
/* 80539960  90 05 00 00 */	stw r0, 0(r5)
/* 80539964  4E 80 00 20 */	blr 