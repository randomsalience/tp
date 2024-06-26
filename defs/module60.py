#
# Generate By: dol2asm
# Module: 60
#

# Libraries
LIBRARIES = [
	"d/a/d_a_bd",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_bd",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x804D6B60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6B8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6BB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6BD8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6BF4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6C4C,'size':88,'pad':0,'label':"__ct__10daBd_HIO_cFv",'name':"__ct__10daBd_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6CA4,'size':176,'pad':0,'label':"anm_init__FP8bd_classifUcf",'name':"anm_init__FP8bd_classifUcf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6D54,'size':132,'pad':0,'label':"daBd_Draw__FP8bd_class",'name':"daBd_Draw__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6DD8,'size':252,'pad':0,'label':"way_bg_check__FP8bd_class",'name':"way_bg_check__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6ED4,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D6F10,'size':768,'pad':0,'label':"s_a_sub__FPvPv",'name':"s_a_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D7210,'size':776,'pad':0,'label':"pl_check__FP8bd_class",'name':"pl_check__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D7518,'size':184,'pad':0,'label':"pointBgCheck__FP4cXyzP4cXyz",'name':"pointBgCheck__FP4cXyzP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D75D0,'size':652,'pad':0,'label':"land_check__FP8bd_class",'name':"land_check__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D785C,'size':52,'pad':0,'label':"drop_check__FP8bd_class",'name':"drop_check__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D7890,'size':108,'pad':0,'label':"turn_set__FP8bd_class",'name':"turn_set__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D78FC,'size':1272,'pad':0,'label':"bd_ground__FP8bd_class",'name':"bd_ground__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D7DF4,'size':1264,'pad':0,'label':"bd_fly__FP8bd_class",'name':"bd_fly__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D82E4,'size':868,'pad':0,'label':"bd_landing__FP8bd_class",'name':"bd_landing__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D8648,'size':336,'pad':0,'label':"bd_landing2__FP8bd_class",'name':"bd_landing2__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D8798,'size':668,'pad':0,'label':"bd_landing3__FP8bd_class",'name':"bd_landing3__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D8A34,'size':532,'pad':0,'label':"bd_rope__FP8bd_class",'name':"bd_rope__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D8C48,'size':472,'pad':0,'label':"bd_kkri__FP8bd_class",'name':"bd_kkri__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D8E20,'size':152,'pad':0,'label':"bd_drop__FP8bd_class",'name':"bd_drop__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D8EB8,'size':832,'pad':0,'label':"action__FP8bd_class",'name':"action__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D91F8,'size':932,'pad':0,'label':"daBd_Execute__FP8bd_class",'name':"daBd_Execute__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D959C,'size':8,'pad':0,'label':"daBd_IsDelete__FP8bd_class",'name':"daBd_IsDelete__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x804D95A4,'size':104,'pad':0,'label':"daBd_Delete__FP8bd_class",'name':"daBd_Delete__FP8bd_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D960C,'size':456,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D97D4,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D981C,'size':924,'pad':0,'label':"daBd_Create__FP10fopAc_ac_c",'name':"daBd_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9BB8,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9C00,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9C48,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9CB8,'size':72,'pad':0,'label':"__dt__10daBd_HIO_cFv",'name':"__dt__10daBd_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9D00,'size':320,'pad':0,'label':"__sinit_d_a_bd_cpp",'name':"__sinit_d_a_bd_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x804D9E40,'size':8,'pad':0,'label':"func_804D9E40",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9E48,'size':8,'pad':0,'label':"func_804D9E48",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804D9E50,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x804D9E58,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x804D9E64,'size':4,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[16,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E68,'size':4,'pad':0,'label':"lit_3943",'name':"@3943",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E6C,'size':4,'pad':0,'label':"lit_3944",'name':"@3944",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E70,'size':4,'pad':0,'label':"lit_3945",'name':"@3945",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E74,'size':4,'pad':0,'label':"lit_3963",'name':"@3963",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804D9E78,'size':4,'pad':0,'label':"lit_3964",'name':"@3964",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E7C,'size':4,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E80,'size':4,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9E84,'size':8,'pad':0,'label':"lit_4105",'name':"@4105",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804D9E8C,'size':8,'pad':0,'label':"lit_4106",'name':"@4106",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804D9E94,'size':8,'pad':0,'label':"lit_4107",'name':"@4107",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804D9E9C,'size':4,'pad':0,'label':"lit_4108",'name':"@4108",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EA0,'size':4,'pad':0,'label':"lit_4169",'name':"@4169",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EA4,'size':4,'pad':0,'label':"lit_4170",'name':"@4170",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EA8,'size':4,'pad':0,'label':"lit_4171",'name':"@4171",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EAC,'size':4,'pad':4,'label':"lit_4172",'name':"@4172",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EB4,'size':8,'pad':0,'label':"lit_4174",'name':"@4174",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804D9EBC,'size':4,'pad':0,'label':"lit_4272",'name':"@4272",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EC0,'size':4,'pad':0,'label':"lit_4273",'name':"@4273",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EC4,'size':4,'pad':0,'label':"lit_4274",'name':"@4274",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EC8,'size':4,'pad':0,'label':"lit_4275",'name':"@4275",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9ECC,'size':4,'pad':0,'label':"lit_4282",'name':"@4282",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9ED0,'size':6,'pad':2,'label':"lit_4286",'name':"@4286",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804D9ED8,'size':4,'pad':0,'label':"lit_4288",'name':"@4288",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804D9EDC,'size':4,'pad':0,'label':"lit_4358",'name':"@4358",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EE0,'size':4,'pad':0,'label':"lit_4359",'name':"@4359",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EE4,'size':4,'pad':0,'label':"lit_4360",'name':"@4360",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EE8,'size':4,'pad':0,'label':"lit_4361",'name':"@4361",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EEC,'size':4,'pad':0,'label':"lit_4362",'name':"@4362",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EF0,'size':4,'pad':0,'label':"lit_4363",'name':"@4363",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EF4,'size':4,'pad':0,'label':"lit_4452",'name':"@4452",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EF8,'size':4,'pad':0,'label':"lit_4453",'name':"@4453",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9EFC,'size':4,'pad':0,'label':"lit_4454",'name':"@4454",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F00,'size':4,'pad':0,'label':"lit_4455",'name':"@4455",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F04,'size':4,'pad':0,'label':"lit_4456",'name':"@4456",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F08,'size':4,'pad':0,'label':"lit_4457",'name':"@4457",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F0C,'size':4,'pad':0,'label':"lit_4458",'name':"@4458",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F10,'size':4,'pad':0,'label':"lit_4526",'name':"@4526",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F14,'size':4,'pad':0,'label':"lit_4624",'name':"@4624",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F18,'size':4,'pad':0,'label':"lit_4625",'name':"@4625",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F1C,'size':4,'pad':0,'label':"lit_4659",'name':"@4659",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804D9F20,'size':4,'pad':0,'label':"lit_4758",'name':"@4758",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F24,'size':4,'pad':0,'label':"lit_4759",'name':"@4759",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F28,'size':4,'pad':0,'label':"lit_4760",'name':"@4760",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F2C,'size':4,'pad':0,'label':"lit_4872",'name':"@4872",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F30,'size':4,'pad':0,'label':"lit_4873",'name':"@4873",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F34,'size':4,'pad':0,'label':"lit_4874",'name':"@4874",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F38,'size':4,'pad':0,'label':"lit_5073",'name':"@5073",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804D9F3C,'size':4,'pad':0,'label':"lit_5191",'name':"@5191",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F40,'size':4,'pad':0,'label':"lit_5192",'name':"@5192",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F44,'size':4,'pad':0,'label':"lit_5193",'name':"@5193",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F48,'size':4,'pad':0,'label':"lit_5194",'name':"@5194",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F4C,'size':4,'pad':0,'label':"lit_5195",'name':"@5195",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F50,'size':4,'pad':0,'label':"lit_5196",'name':"@5196",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F54,'size':4,'pad':0,'label':"lit_5197",'name':"@5197",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F58,'size':4,'pad':0,'label':"lit_5198",'name':"@5198",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F5C,'size':4,'pad':0,'label':"lit_5199",'name':"@5199",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F60,'size':4,'pad':0,'label':"lit_5200",'name':"@5200",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F64,'size':4,'pad':0,'label':"lit_5201",'name':"@5201",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F68,'size':4,'pad':0,'label':"lit_5202",'name':"@5202",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804D9F6C,'size':27,'pad':0,'label':"d_a_bd__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x804D9F88,'size':320,'pad':0,'label':"land_pos103",'name':"land_pos103",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA0C8,'size':320,'pad':0,'label':"land_pos127",'name':"land_pos127",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA208,'size':12,'pad':0,'label':"wait_bck",'name':"wait_bck",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA214,'size':32,'pad':0,'label':"lit_4761",'name':"@4761",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804DA234,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4956",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA274,'size':32,'pad':0,'label':"l_daBd_Method",'name':"l_daBd_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804DA294,'size':48,'pad':0,'label':"g_profile_BD",'name':"g_profile_BD",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804DA2C4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DA2D0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DA2DC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DA300,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DA30C,'size':12,'pad':0,'label':"__vt__10daBd_HIO_c",'name':"__vt__10daBd_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DA318,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA320,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA324,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA328,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA32C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA330,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA334,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA338,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA33C,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA340,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA344,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA348,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA34C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA350,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA354,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA358,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA35C,'size':4,'pad':0,'label':"struct_804DA35C",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x804DA360,'size':12,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA36C,'size':32,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA38C,'size':12,'pad':0,'label':"lit_3946",'name':"@3946",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA398,'size':12,'pad':0,'label':"lit_3947",'name':"@3947",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3A4,'size':12,'pad':0,'label':"lit_3948",'name':"@3948",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3B0,'size':12,'pad':0,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3BC,'size':48,'pad':0,'label':"land_sp_pos",'name':"land_sp_pos",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3EC,'size':4,'pad':0,'label':"rope_pt",'name':"rope_pt",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3F0,'size':4,'pad':0,'label':"data_804DA3F0",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3F4,'size':4,'pad':0,'label':"data_804DA3F4",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3F8,'size':4,'pad':0,'label':"data_804DA3F8",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA3FC,'size':4,'pad':0,'label':"data_804DA3FC",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA400,'size':4,'pad':0,'label':"data_804DA400",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA404,'size':4,'pad':0,'label':"data_804DA404",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA408,'size':4,'pad':0,'label':"data_804DA408",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA40C,'size':4,'pad':0,'label':"data_804DA40C",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA410,'size':4,'pad':0,'label':"data_804DA410",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA414,'size':4,'pad':0,'label':"data_804DA414",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA418,'size':4,'pad':0,'label':"data_804DA418",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA41C,'size':4,'pad':0,'label':"data_804DA41C",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA420,'size':4,'pad':0,'label':"data_804DA420",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA424,'size':4,'pad':0,'label':"data_804DA424",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA428,'size':4,'pad':0,'label':"data_804DA428",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA42C,'size':4,'pad':0,'label':"data_804DA42C",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA430,'size':4,'pad':0,'label':"data_804DA430",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA434,'size':4,'pad':0,'label':"data_804DA434",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA438,'size':4,'pad':0,'label':"data_804DA438",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA43C,'size':4,'pad':0,'label':"data_804DA43C",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA440,'size':4,'pad':0,'label':"data_804DA440",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA444,'size':4,'pad':0,'label':"data_804DA444",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA448,'size':4,'pad':0,'label':"data_804DA448",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA44C,'size':4,'pad':0,'label':"data_804DA44C",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DA450,'size':4,'pad':0,'label':"data_804DA450",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__10daBd_HIO_cFv":5,
	"anm_init__FP8bd_classifUcf":6,
	"daBd_Draw__FP8bd_class":7,
	"way_bg_check__FP8bd_class":8,
	"__dt__4cXyzFv":9,
	"s_a_sub__FPvPv":10,
	"pl_check__FP8bd_class":11,
	"pointBgCheck__FP4cXyzP4cXyz":12,
	"land_check__FP8bd_class":13,
	"drop_check__FP8bd_class":14,
	"turn_set__FP8bd_class":15,
	"bd_ground__FP8bd_class":16,
	"bd_fly__FP8bd_class":17,
	"bd_landing__FP8bd_class":18,
	"bd_landing2__FP8bd_class":19,
	"bd_landing3__FP8bd_class":20,
	"bd_rope__FP8bd_class":21,
	"bd_kkri__FP8bd_class":22,
	"bd_drop__FP8bd_class":23,
	"action__FP8bd_class":24,
	"daBd_Execute__FP8bd_class":25,
	"daBd_IsDelete__FP8bd_class":26,
	"daBd_Delete__FP8bd_class":27,
	"useHeapInit__FP10fopAc_ac_c":28,
	"__dt__12J3DFrameCtrlFv":29,
	"daBd_Create__FP10fopAc_ac_c":30,
	"__dt__8cM3dGSphFv":31,
	"__dt__8cM3dGAabFv":32,
	"__dt__12dBgS_ObjAcchFv":33,
	"__dt__10daBd_HIO_cFv":34,
	"__sinit_d_a_bd_cpp":35,
	"func_804D9E40":36,
	"func_804D9E48":37,
	"_ctors":38,
	"_dtors":39,
	"lit_3942":40,
	"lit_3943":41,
	"lit_3944":42,
	"lit_3945":43,
	"lit_3963":44,
	"lit_3964":45,
	"lit_4012":46,
	"lit_4013":47,
	"lit_4105":48,
	"lit_4106":49,
	"lit_4107":50,
	"lit_4108":51,
	"lit_4169":52,
	"lit_4170":53,
	"lit_4171":54,
	"lit_4172":55,
	"lit_4174":56,
	"lit_4272":57,
	"lit_4273":58,
	"lit_4274":59,
	"lit_4275":60,
	"lit_4282":61,
	"lit_4286":62,
	"lit_4288":63,
	"lit_4358":64,
	"lit_4359":65,
	"lit_4360":66,
	"lit_4361":67,
	"lit_4362":68,
	"lit_4363":69,
	"lit_4452":70,
	"lit_4453":71,
	"lit_4454":72,
	"lit_4455":73,
	"lit_4456":74,
	"lit_4457":75,
	"lit_4458":76,
	"lit_4526":77,
	"lit_4624":78,
	"lit_4625":79,
	"lit_4659":80,
	"lit_4758":81,
	"lit_4759":82,
	"lit_4760":83,
	"lit_4872":84,
	"lit_4873":85,
	"lit_4874":86,
	"lit_5073":87,
	"lit_5191":88,
	"lit_5192":89,
	"lit_5193":90,
	"lit_5194":91,
	"lit_5195":92,
	"lit_5196":93,
	"lit_5197":94,
	"lit_5198":95,
	"lit_5199":96,
	"lit_5200":97,
	"lit_5201":98,
	"lit_5202":99,
	"d_a_bd__stringBase0":100,
	"land_pos103":101,
	"land_pos127":102,
	"wait_bck":103,
	"lit_4761":104,
	"cc_sph_src":105,
	"l_daBd_Method":106,
	"g_profile_BD":107,
	"__vt__8cM3dGSph":108,
	"__vt__8cM3dGAab":109,
	"__vt__12dBgS_ObjAcch":110,
	"__vt__12J3DFrameCtrl":111,
	"__vt__10daBd_HIO_c":112,
	"__global_destructor_chain":113,
	"lit_1109":114,
	"lit_1107":115,
	"lit_1105":116,
	"lit_1104":117,
	"lit_1099":118,
	"lit_1097":119,
	"lit_1095":120,
	"lit_1094":121,
	"lit_1057":122,
	"lit_1055":123,
	"lit_1053":124,
	"lit_1052":125,
	"lit_1014":126,
	"lit_1012":127,
	"lit_1010":128,
	"struct_804DA35C":129,
	"lit_3937":130,
	"l_HIO":131,
	"lit_3946":132,
	"lit_3947":133,
	"lit_3948":134,
	"lit_3949":135,
	"land_sp_pos":136,
	"rope_pt":137,
	"data_804DA3F0":138,
	"data_804DA3F4":139,
	"data_804DA3F8":140,
	"data_804DA3FC":141,
	"data_804DA400":142,
	"data_804DA404":143,
	"data_804DA408":144,
	"data_804DA40C":145,
	"data_804DA410":146,
	"data_804DA414":147,
	"data_804DA418":148,
	"data_804DA41C":149,
	"data_804DA420":150,
	"data_804DA424":151,
	"data_804DA428":152,
	"data_804DA42C":153,
	"data_804DA430":154,
	"data_804DA434":155,
	"data_804DA438":156,
	"data_804DA43C":157,
	"data_804DA440":158,
	"data_804DA444":159,
	"data_804DA448":160,
	"data_804DA44C":161,
	"data_804DA450":162,
}

