lbl_80B767F0:
/* 80B767F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B767F4  7C 08 02 A6 */	mflr r0
/* 80B767F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B767FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B76800  93 C1 00 08 */	stw r30, 8(r1)
/* 80B76804  7C 7E 1B 78 */	mr r30, r3
/* 80B76808  7C 9F 23 78 */	mr r31, r4
/* 80B7680C  38 00 00 03 */	li r0, 3
/* 80B76810  B0 03 0E 22 */	sth r0, 0xe22(r3)
/* 80B76814  38 7E 0F 90 */	addi r3, r30, 0xf90
/* 80B76818  4B 7E B8 01 */	bl __ptmf_test
/* 80B7681C  2C 03 00 00 */	cmpwi r3, 0
/* 80B76820  41 82 00 18 */	beq lbl_80B76838
/* 80B76824  7F C3 F3 78 */	mr r3, r30
/* 80B76828  38 80 00 00 */	li r4, 0
/* 80B7682C  39 9E 0F 90 */	addi r12, r30, 0xf90
/* 80B76830  4B 7E B8 55 */	bl __ptmf_scall
/* 80B76834  60 00 00 00 */	nop 
lbl_80B76838:
/* 80B76838  38 00 00 00 */	li r0, 0
/* 80B7683C  B0 1E 0E 22 */	sth r0, 0xe22(r30)
/* 80B76840  80 7F 00 00 */	lwz r3, 0(r31)
/* 80B76844  80 1F 00 04 */	lwz r0, 4(r31)
/* 80B76848  90 7E 0F 90 */	stw r3, 0xf90(r30)
/* 80B7684C  90 1E 0F 94 */	stw r0, 0xf94(r30)
/* 80B76850  80 1F 00 08 */	lwz r0, 8(r31)
/* 80B76854  90 1E 0F 98 */	stw r0, 0xf98(r30)
/* 80B76858  38 7E 0F 90 */	addi r3, r30, 0xf90
/* 80B7685C  4B 7E B7 BD */	bl __ptmf_test
/* 80B76860  2C 03 00 00 */	cmpwi r3, 0
/* 80B76864  41 82 00 18 */	beq lbl_80B7687C
/* 80B76868  7F C3 F3 78 */	mr r3, r30
/* 80B7686C  38 80 00 00 */	li r4, 0
/* 80B76870  39 9E 0F 90 */	addi r12, r30, 0xf90
/* 80B76874  4B 7E B8 11 */	bl __ptmf_scall
/* 80B76878  60 00 00 00 */	nop 
lbl_80B7687C:
/* 80B7687C  38 60 00 01 */	li r3, 1
/* 80B76880  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B76884  83 C1 00 08 */	lwz r30, 8(r1)
/* 80B76888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B7688C  7C 08 03 A6 */	mtlr r0
/* 80B76890  38 21 00 10 */	addi r1, r1, 0x10
/* 80B76894  4E 80 00 20 */	blr 
