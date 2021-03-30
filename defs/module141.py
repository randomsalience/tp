#
# Generate By: dol2asm
# Module: 141
#

# Libraries
LIBRARIES = [
	"d/a/b/d_a_b_dre",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_b_dre",
	"global_destructor_chain",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".rodata",
	".data",
	".bss",
	".dtors",
]

# Symbols
SYMBOLS = [
	{'addr':0x805C7A40,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7A6C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7A98,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7AB8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7AD4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7B2C,'size':576,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7D6C,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7DB4,'size':32,'pad':0,'label':"daB_DRE_Create__FP10fopAc_ac_c",'name':"daB_DRE_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7DD4,'size':180,'pad':0,'label':"SetAnm__9daB_DRE_cFP16mDoExt_McaMorfSOiiff",'name':"SetAnm__9daB_DRE_cFP16mDoExt_McaMorfSOiiff",'lib':-1,'tu':2,'section':0,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7E88,'size':36,'pad':0,'label':"daB_DRE_Delete__FP9daB_DRE_c",'name':"daB_DRE_Delete__FP9daB_DRE_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7EAC,'size':288,'pad':0,'label':"CameraSet__9daB_DRE_cFv",'name':"CameraSet__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C7FCC,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8008,'size':132,'pad':0,'label':"SetStopingCam__9daB_DRE_cFv",'name':"SetStopingCam__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C808C,'size':300,'pad':0,'label':"SetStopCam__9daB_DRE_cF4cXyzffs",'name':"SetStopCam__9daB_DRE_cF4cXyzffs",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C81B8,'size':80,'pad':0,'label':"SetCMoveCam__9daB_DRE_cF4cXyzf",'name':"SetCMoveCam__9daB_DRE_cF4cXyzf",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8208,'size':68,'pad':0,'label':"SetCMoveCam__9daB_DRE_cF4cXyzff",'name':"SetCMoveCam__9daB_DRE_cF4cXyzff",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C824C,'size':252,'pad':0,'label':"SetEyeMoveCam__9daB_DRE_cF4cXyzffsf",'name':"SetEyeMoveCam__9daB_DRE_cF4cXyzffsf",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8348,'size':272,'pad':0,'label':"SetEyeMoveCam__9daB_DRE_cF4cXyzffsff",'name':"SetEyeMoveCam__9daB_DRE_cF4cXyzffsff",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8458,'size':236,'pad':0,'label':"SetMoveCam__9daB_DRE_cFff",'name':"SetMoveCam__9daB_DRE_cFff",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8544,'size':164,'pad':0,'label':"SetReleaseCam__9daB_DRE_cFv",'name':"SetReleaseCam__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C85E8,'size':1552,'pad':0,'label':"CamAction2__9daB_DRE_cFv",'name':"CamAction2__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8BF8,'size':740,'pad':0,'label':"DrAction2__9daB_DRE_cFv",'name':"DrAction2__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C8EDC,'size':1084,'pad':0,'label':"CamAction__9daB_DRE_cFv",'name':"CamAction__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C9318,'size':96,'pad':0,'label':"Action__9daB_DRE_cFv",'name':"Action__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C9378,'size':1992,'pad':0,'label':"DrAction__9daB_DRE_cFv",'name':"DrAction__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805C9B40,'size':1560,'pad':0,'label':"SoundChk__9daB_DRE_cFv",'name':"SoundChk__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA158,'size':836,'pad':0,'label':"Execute__9daB_DRE_cFv",'name':"Execute__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA49C,'size':96,'pad':0,'label':"SpeedSet__9daB_DRE_cFv",'name':"SpeedSet__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA4FC,'size':372,'pad':0,'label':"BreathSet__9daB_DRE_cFv",'name':"BreathSet__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA670,'size':80,'pad':0,'label':"Delete__9daB_DRE_cFv",'name':"Delete__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA6C0,'size':192,'pad':0,'label':"setBaseMtx__9daB_DRE_cFv",'name':"setBaseMtx__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA780,'size':420,'pad':0,'label':"daB_DRE_Draw__FP9daB_DRE_c",'name':"daB_DRE_Draw__FP9daB_DRE_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA924,'size':32,'pad':0,'label':"daB_DRE_Execute__FP9daB_DRE_c",'name':"daB_DRE_Execute__FP9daB_DRE_c",'lib':-1,'tu':2,'section':0,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CA944,'size':760,'pad':0,'label':"create__9daB_DRE_cFv",'name':"create__9daB_DRE_cFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CAC3C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CACAC,'size':8,'pad':0,'label':"daB_DRE_IsDelete__FP9daB_DRE_c",'name':"daB_DRE_IsDelete__FP9daB_DRE_c",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805CACB4,'size':104,'pad':0,'label':"__sinit_d_a_b_dre_cpp",'name':"__sinit_d_a_b_dre_cpp",'lib':-1,'tu':2,'section':0,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CAD1C,'size':8,'pad':0,'label':"func_805CAD1C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CAD24,'size':8,'pad':0,'label':"func_805CAD24",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CAD2C,'size':28,'pad':0,'label':"setCurrentPos__16obj_ystone_classF4cXyz",'name':"setCurrentPos__16obj_ystone_classF4cXyz",'lib':-1,'tu':2,'section':0,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805CAD48,'size':8,'pad':0,'label':"data_805CAD48",'name':None,'lib':-1,'tu':1,'section':1,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAD50,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAD54,'size':8,'pad':0,'label':"pad_805CAD54",'name':None,'lib':1,'tu':3,'section':5,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAD5C,'size':4,'pad':0,'label':"lit_3844",'name':"@3844",'lib':-1,'tu':2,'section':2,'r':[10,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD60,'size':4,'pad':0,'label':"lit_3862",'name':"@3862",'lib':-1,'tu':2,'section':2,'r':[11,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CAD64,'size':4,'pad':0,'label':"lit_3863",'name':"@3863",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD68,'size':4,'pad':0,'label':"lit_4209",'name':"@4209",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD6C,'size':4,'pad':0,'label':"lit_4210",'name':"@4210",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD70,'size':4,'pad':0,'label':"lit_4211",'name':"@4211",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD74,'size':4,'pad':0,'label':"lit_4212",'name':"@4212",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD78,'size':4,'pad':0,'label':"lit_4213",'name':"@4213",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD7C,'size':4,'pad':0,'label':"lit_4214",'name':"@4214",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD80,'size':4,'pad':0,'label':"lit_4215",'name':"@4215",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD84,'size':4,'pad':0,'label':"lit_4216",'name':"@4216",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD88,'size':4,'pad':0,'label':"lit_4217",'name':"@4217",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD8C,'size':4,'pad':0,'label':"lit_4218",'name':"@4218",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD90,'size':4,'pad':0,'label':"lit_4219",'name':"@4219",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD94,'size':4,'pad':0,'label':"lit_4220",'name':"@4220",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD98,'size':4,'pad':0,'label':"lit_4221",'name':"@4221",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAD9C,'size':4,'pad':0,'label':"lit_4222",'name':"@4222",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADA0,'size':4,'pad':0,'label':"lit_4223",'name':"@4223",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADA4,'size':4,'pad':0,'label':"lit_4224",'name':"@4224",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADA8,'size':4,'pad':0,'label':"lit_4225",'name':"@4225",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADAC,'size':4,'pad':0,'label':"lit_4226",'name':"@4226",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADB0,'size':4,'pad':0,'label':"lit_4227",'name':"@4227",'lib':-1,'tu':2,'section':2,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADB4,'size':4,'pad':0,'label':"lit_4228",'name':"@4228",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADB8,'size':4,'pad':0,'label':"lit_4229",'name':"@4229",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADBC,'size':8,'pad':0,'label':"lit_4231",'name':"@4231",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CADC4,'size':4,'pad':0,'label':"lit_4309",'name':"@4309",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADC8,'size':4,'pad':0,'label':"lit_4310",'name':"@4310",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADCC,'size':4,'pad':0,'label':"lit_4311",'name':"@4311",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADD0,'size':4,'pad':0,'label':"lit_4312",'name':"@4312",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADD4,'size':4,'pad':0,'label':"lit_4313",'name':"@4313",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADD8,'size':4,'pad':0,'label':"lit_4408",'name':"@4408",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADDC,'size':4,'pad':0,'label':"lit_4409",'name':"@4409",'lib':-1,'tu':2,'section':2,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADE0,'size':4,'pad':0,'label':"lit_4410",'name':"@4410",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADE4,'size':4,'pad':0,'label':"lit_4411",'name':"@4411",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADE8,'size':4,'pad':0,'label':"lit_4412",'name':"@4412",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADEC,'size':4,'pad':0,'label':"lit_4413",'name':"@4413",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADF0,'size':4,'pad':0,'label':"lit_4414",'name':"@4414",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADF4,'size':4,'pad':0,'label':"lit_4415",'name':"@4415",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADF8,'size':4,'pad':0,'label':"lit_4606",'name':"@4606",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CADFC,'size':4,'pad':0,'label':"lit_4607",'name':"@4607",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE00,'size':4,'pad':0,'label':"lit_4608",'name':"@4608",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE04,'size':4,'pad':0,'label':"lit_4609",'name':"@4609",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE08,'size':4,'pad':0,'label':"lit_4610",'name':"@4610",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE0C,'size':4,'pad':0,'label':"lit_4611",'name':"@4611",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE10,'size':4,'pad':0,'label':"lit_4612",'name':"@4612",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE14,'size':4,'pad':0,'label':"lit_4613",'name':"@4613",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE18,'size':4,'pad':0,'label':"lit_4614",'name':"@4614",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE1C,'size':4,'pad':0,'label':"lit_4615",'name':"@4615",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE20,'size':4,'pad':0,'label':"lit_4616",'name':"@4616",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE24,'size':4,'pad':0,'label':"lit_4617",'name':"@4617",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE28,'size':4,'pad':0,'label':"lit_4618",'name':"@4618",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE2C,'size':4,'pad':0,'label':"lit_4619",'name':"@4619",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE30,'size':4,'pad':0,'label':"lit_4620",'name':"@4620",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE34,'size':4,'pad':0,'label':"lit_4758",'name':"@4758",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE38,'size':4,'pad':0,'label':"lit_4759",'name':"@4759",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE3C,'size':4,'pad':0,'label':"lit_4760",'name':"@4760",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE40,'size':4,'pad':0,'label':"lit_4761",'name':"@4761",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE44,'size':4,'pad':0,'label':"lit_4762",'name':"@4762",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE48,'size':4,'pad':0,'label':"lit_4763",'name':"@4763",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE4C,'size':4,'pad':0,'label':"lit_4764",'name':"@4764",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE50,'size':4,'pad':0,'label':"lit_4765",'name':"@4765",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE54,'size':4,'pad':0,'label':"lit_4766",'name':"@4766",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE58,'size':4,'pad':0,'label':"lit_4767",'name':"@4767",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE5C,'size':4,'pad':0,'label':"lit_4768",'name':"@4768",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE60,'size':4,'pad':0,'label':"lit_4769",'name':"@4769",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE64,'size':4,'pad':0,'label':"lit_4770",'name':"@4770",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE68,'size':4,'pad':0,'label':"lit_4771",'name':"@4771",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE6C,'size':4,'pad':0,'label':"lit_4772",'name':"@4772",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE70,'size':4,'pad':0,'label':"lit_4773",'name':"@4773",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE74,'size':4,'pad':0,'label':"lit_4774",'name':"@4774",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE78,'size':4,'pad':0,'label':"lit_4775",'name':"@4775",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE7C,'size':4,'pad':0,'label':"lit_4776",'name':"@4776",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE80,'size':4,'pad':0,'label':"lit_4777",'name':"@4777",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE84,'size':4,'pad':0,'label':"lit_4778",'name':"@4778",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE88,'size':4,'pad':0,'label':"lit_4779",'name':"@4779",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE8C,'size':4,'pad':0,'label':"lit_4780",'name':"@4780",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE90,'size':4,'pad':0,'label':"lit_4781",'name':"@4781",'lib':-1,'tu':2,'section':2,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAE94,'size':8,'pad':0,'label':"lit_4874",'name':"@4874",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CAE9C,'size':8,'pad':0,'label':"lit_4875",'name':"@4875",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CAEA4,'size':8,'pad':0,'label':"lit_4876",'name':"@4876",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CAEAC,'size':4,'pad':0,'label':"lit_4942",'name':"@4942",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEB0,'size':4,'pad':0,'label':"lit_4943",'name':"@4943",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEB4,'size':4,'pad':0,'label':"lit_5006",'name':"@5006",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEB8,'size':4,'pad':0,'label':"lit_5084",'name':"@5084",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEBC,'size':4,'pad':0,'label':"lit_5227",'name':"@5227",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEC0,'size':4,'pad':0,'label':"lit_5228",'name':"@5228",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEC4,'size':4,'pad':0,'label':"lit_5229",'name':"@5229",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAEC8,'size':4,'pad':0,'label':"lit_5230",'name':"@5230",'lib':-1,'tu':2,'section':2,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805CAECC,'size':5,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x805CAED4,'size':40,'pad':0,'label':"lit_4416",'name':"@4416",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAEFC,'size':40,'pad':0,'label':"lit_4621",'name':"@4621",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAF24,'size':136,'pad':0,'label':"lit_4782",'name':"@4782",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAFAC,'size':8,'pad':0,'label':"effId",'name':"effId$4884",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CAFB4,'size':32,'pad':0,'label':"l_daB_DRE_Method",'name':"l_daB_DRE_Method",'lib':-1,'tu':2,'section':3,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CAFD4,'size':48,'pad':0,'label':"g_profile_B_DRE",'name':"g_profile_B_DRE",'lib':-1,'tu':2,'section':3,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CB004,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CB028,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805CB038,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB040,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB044,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB048,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB04C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB050,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB054,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB058,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB05C,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB060,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB064,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB068,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB06C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB070,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB074,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB078,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB07C,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB080,'size':4,'pad':0,'label':"data_805CB080",'name':"s_dis__23@unnamed@d_a_b_dre_cpp@",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB084,'size':4,'pad':0,'label':"data_805CB084",'name':"s_LinkPos__23@unnamed@d_a_b_dre_cpp@",'lib':-1,'tu':2,'section':4,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB088,'size':2,'pad':2,'label':"data_805CB088",'name':"s_TargetAngle__23@unnamed@d_a_b_dre_cpp@",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB08C,'size':12,'pad':0,'label':"lit_3768",'name':"@3768",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB098,'size':12,'pad':0,'label':"data_805CB098",'name':"s_HeadPos__23@unnamed@d_a_b_dre_cpp@",'lib':-1,'tu':2,'section':4,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0A4,'size':12,'pad':0,'label':"lit_3769",'name':"@3769",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0B0,'size':12,'pad':0,'label':"data_805CB0B0",'name':"s_BodyPos__23@unnamed@d_a_b_dre_cpp@",'lib':-1,'tu':2,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0BC,'size':12,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0C8,'size':12,'pad':0,'label':"data_805CB0C8",'name':"s_TalePos__23@unnamed@d_a_b_dre_cpp@",'lib':-1,'tu':2,'section':4,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0D4,'size':4,'pad':0,'label':"data_805CB0D4",'name':None,'lib':-1,'tu':2,'section':4,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0D8,'size':4,'pad':0,'label':"data_805CB0D8",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0DC,'size':4,'pad':0,'label':"data_805CB0DC",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0E0,'size':4,'pad':0,'label':"data_805CB0E0",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0E4,'size':4,'pad':0,'label':"data_805CB0E4",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0E8,'size':4,'pad':0,'label':"data_805CB0E8",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0EC,'size':4,'pad':0,'label':"data_805CB0EC",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0F0,'size':4,'pad':0,'label':"data_805CB0F0",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0F4,'size':4,'pad':0,'label':"data_805CB0F4",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0F8,'size':4,'pad':0,'label':"data_805CB0F8",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB0FC,'size':4,'pad':0,'label':"data_805CB0FC",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB100,'size':4,'pad':0,'label':"data_805CB100",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB104,'size':4,'pad':0,'label':"data_805CB104",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB108,'size':4,'pad':0,'label':"data_805CB108",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB10C,'size':4,'pad':0,'label':"data_805CB10C",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB110,'size':4,'pad':0,'label':"data_805CB110",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB114,'size':4,'pad':0,'label':"data_805CB114",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB118,'size':4,'pad':0,'label':"data_805CB118",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB11C,'size':4,'pad':0,'label':"data_805CB11C",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB120,'size':4,'pad':0,'label':"data_805CB120",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB124,'size':4,'pad':0,'label':"data_805CB124",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB128,'size':4,'pad':0,'label':"data_805CB128",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB12C,'size':4,'pad':0,'label':"data_805CB12C",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB130,'size':4,'pad':0,'label':"data_805CB130",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB134,'size':4,'pad':0,'label':"data_805CB134",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805CB138,'size':4,'pad':0,'label':"data_805CB138",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"useHeapInit__FP10fopAc_ac_c":5,
	"__dt__12J3DFrameCtrlFv":6,
	"daB_DRE_Create__FP10fopAc_ac_c":7,
	"SetAnm__9daB_DRE_cFP16mDoExt_McaMorfSOiiff":8,
	"daB_DRE_Delete__FP9daB_DRE_c":9,
	"CameraSet__9daB_DRE_cFv":10,
	"__dt__4cXyzFv":11,
	"SetStopingCam__9daB_DRE_cFv":12,
	"SetStopCam__9daB_DRE_cF4cXyzffs":13,
	"SetCMoveCam__9daB_DRE_cF4cXyzf":14,
	"SetCMoveCam__9daB_DRE_cF4cXyzff":15,
	"SetEyeMoveCam__9daB_DRE_cF4cXyzffsf":16,
	"SetEyeMoveCam__9daB_DRE_cF4cXyzffsff":17,
	"SetMoveCam__9daB_DRE_cFff":18,
	"SetReleaseCam__9daB_DRE_cFv":19,
	"CamAction2__9daB_DRE_cFv":20,
	"DrAction2__9daB_DRE_cFv":21,
	"CamAction__9daB_DRE_cFv":22,
	"Action__9daB_DRE_cFv":23,
	"DrAction__9daB_DRE_cFv":24,
	"SoundChk__9daB_DRE_cFv":25,
	"Execute__9daB_DRE_cFv":26,
	"SpeedSet__9daB_DRE_cFv":27,
	"BreathSet__9daB_DRE_cFv":28,
	"Delete__9daB_DRE_cFv":29,
	"setBaseMtx__9daB_DRE_cFv":30,
	"daB_DRE_Draw__FP9daB_DRE_c":31,
	"daB_DRE_Execute__FP9daB_DRE_c":32,
	"create__9daB_DRE_cFv":33,
	"__dt__12dBgS_ObjAcchFv":34,
	"daB_DRE_IsDelete__FP9daB_DRE_c":35,
	"__sinit_d_a_b_dre_cpp":36,
	"func_805CAD1C":37,
	"func_805CAD24":38,
	"setCurrentPos__16obj_ystone_classF4cXyz":39,
	"data_805CAD48":40,
	"__destroy_global_chain_reference":41,
	"pad_805CAD54":42,
	"lit_3844":43,
	"lit_3862":44,
	"lit_3863":45,
	"lit_4209":46,
	"lit_4210":47,
	"lit_4211":48,
	"lit_4212":49,
	"lit_4213":50,
	"lit_4214":51,
	"lit_4215":52,
	"lit_4216":53,
	"lit_4217":54,
	"lit_4218":55,
	"lit_4219":56,
	"lit_4220":57,
	"lit_4221":58,
	"lit_4222":59,
	"lit_4223":60,
	"lit_4224":61,
	"lit_4225":62,
	"lit_4226":63,
	"lit_4227":64,
	"lit_4228":65,
	"lit_4229":66,
	"lit_4231":67,
	"lit_4309":68,
	"lit_4310":69,
	"lit_4311":70,
	"lit_4312":71,
	"lit_4313":72,
	"lit_4408":73,
	"lit_4409":74,
	"lit_4410":75,
	"lit_4411":76,
	"lit_4412":77,
	"lit_4413":78,
	"lit_4414":79,
	"lit_4415":80,
	"lit_4606":81,
	"lit_4607":82,
	"lit_4608":83,
	"lit_4609":84,
	"lit_4610":85,
	"lit_4611":86,
	"lit_4612":87,
	"lit_4613":88,
	"lit_4614":89,
	"lit_4615":90,
	"lit_4616":91,
	"lit_4617":92,
	"lit_4618":93,
	"lit_4619":94,
	"lit_4620":95,
	"lit_4758":96,
	"lit_4759":97,
	"lit_4760":98,
	"lit_4761":99,
	"lit_4762":100,
	"lit_4763":101,
	"lit_4764":102,
	"lit_4765":103,
	"lit_4766":104,
	"lit_4767":105,
	"lit_4768":106,
	"lit_4769":107,
	"lit_4770":108,
	"lit_4771":109,
	"lit_4772":110,
	"lit_4773":111,
	"lit_4774":112,
	"lit_4775":113,
	"lit_4776":114,
	"lit_4777":115,
	"lit_4778":116,
	"lit_4779":117,
	"lit_4780":118,
	"lit_4781":119,
	"lit_4874":120,
	"lit_4875":121,
	"lit_4876":122,
	"lit_4942":123,
	"lit_4943":124,
	"lit_5006":125,
	"lit_5084":126,
	"lit_5227":127,
	"lit_5228":128,
	"lit_5229":129,
	"lit_5230":130,
	"stringBase0":131,
	"lit_4416":132,
	"lit_4621":133,
	"lit_4782":134,
	"effId":135,
	"l_daB_DRE_Method":136,
	"g_profile_B_DRE":137,
	"__vt__12dBgS_ObjAcch":138,
	"__vt__12J3DFrameCtrl":139,
	"__global_destructor_chain":140,
	"lit_1109":141,
	"lit_1107":142,
	"lit_1105":143,
	"lit_1104":144,
	"lit_1099":145,
	"lit_1097":146,
	"lit_1095":147,
	"lit_1094":148,
	"lit_1057":149,
	"lit_1055":150,
	"lit_1053":151,
	"lit_1052":152,
	"lit_1014":153,
	"lit_1012":154,
	"lit_1010":155,
	"lit_1009":156,
	"data_805CB080":157,
	"data_805CB084":158,
	"data_805CB088":159,
	"lit_3768":160,
	"data_805CB098":161,
	"lit_3769":162,
	"data_805CB0B0":163,
	"lit_3770":164,
	"data_805CB0C8":165,
	"data_805CB0D4":166,
	"data_805CB0D8":167,
	"data_805CB0DC":168,
	"data_805CB0E0":169,
	"data_805CB0E4":170,
	"data_805CB0E8":171,
	"data_805CB0EC":172,
	"data_805CB0F0":173,
	"data_805CB0F4":174,
	"data_805CB0F8":175,
	"data_805CB0FC":176,
	"data_805CB100":177,
	"data_805CB104":178,
	"data_805CB108":179,
	"data_805CB10C":180,
	"data_805CB110":181,
	"data_805CB114":182,
	"data_805CB118":183,
	"data_805CB11C":184,
	"data_805CB120":185,
	"data_805CB124":186,
	"data_805CB128":187,
	"data_805CB12C":188,
	"data_805CB130":189,
	"data_805CB134":190,
	"data_805CB138":191,
}
