lbl_80AB8BC4:
/* 80AB8BC4  80 83 0D BC */	lwz r4, 0xdbc(r3)
/* 80AB8BC8  2C 04 00 00 */	cmpwi r4, 0
/* 80AB8BCC  4D 82 00 20 */	beqlr 
/* 80AB8BD0  38 04 FF FF */	addi r0, r4, -1
/* 80AB8BD4  90 03 0D BC */	stw r0, 0xdbc(r3)
/* 80AB8BD8  4E 80 00 20 */	blr 
