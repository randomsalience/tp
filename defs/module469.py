#
# Generate By: dol2asm
# Module: 469
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_h_saku",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_h_saku",
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
	{'addr':0x80C15440,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1546C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15498,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C154B8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C154D4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1552C,'size':680,'pad':0,'label':"BreakSet__13daObjH_Saku_cFv",'name':"BreakSet__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C157D4,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15810,'size':572,'pad':0,'label':"SpeedSet__13daObjH_Saku_cFP4cXyzP4cXyzf",'name':"SpeedSet__13daObjH_Saku_cFP4cXyzP4cXyzf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15A4C,'size':948,'pad':0,'label':"Action__13daObjH_Saku_cFv",'name':"Action__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15E00,'size':68,'pad':0,'label':"initBaseMtx__13daObjH_Saku_cFv",'name':"initBaseMtx__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15E44,'size':264,'pad':0,'label':"setBaseMtx__13daObjH_Saku_cFv",'name':"setBaseMtx__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15F4C,'size':44,'pad':0,'label':"daObjH_Saku_Draw__FP13daObjH_Saku_c",'name':"daObjH_Saku_Draw__FP13daObjH_Saku_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15F78,'size':32,'pad':0,'label':"daObjH_Saku_Execute__FP13daObjH_Saku_c",'name':"daObjH_Saku_Execute__FP13daObjH_Saku_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15F98,'size':8,'pad':0,'label':"daObjH_Saku_IsDelete__FP13daObjH_Saku_c",'name':"daObjH_Saku_IsDelete__FP13daObjH_Saku_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C15FA0,'size':36,'pad':0,'label':"daObjH_Saku_Delete__FP13daObjH_Saku_c",'name':"daObjH_Saku_Delete__FP13daObjH_Saku_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C15FC4,'size':436,'pad':0,'label':"daObjH_Saku_Create__FP10fopAc_ac_c",'name':"daObjH_Saku_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C16178,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C161E8,'size':180,'pad':0,'label':"CreateHeap__13daObjH_Saku_cFv",'name':"CreateHeap__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1629C,'size':88,'pad':0,'label':"Create__13daObjH_Saku_cFv",'name':"Create__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C162F4,'size':76,'pad':0,'label':"Execute__13daObjH_Saku_cFPPA3_A4_f",'name':"Execute__13daObjH_Saku_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C16340,'size':220,'pad':0,'label':"Draw__13daObjH_Saku_cFv",'name':"Draw__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1641C,'size':52,'pad':0,'label':"Delete__13daObjH_Saku_cFv",'name':"Delete__13daObjH_Saku_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C16450,'size':84,'pad':0,'label':"__sinit_d_a_obj_h_saku_cpp",'name':"__sinit_d_a_obj_h_saku_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C164A4,'size':8,'pad':0,'label':"func_80C164A4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C164AC,'size':8,'pad':0,'label':"func_80C164AC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C164B4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C164BC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C164C8,'size':4,'pad':0,'label':"lit_3703",'name':"@3703",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164CC,'size':4,'pad':0,'label':"lit_3704",'name':"@3704",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C164D0,'size':4,'pad':0,'label':"lit_3705",'name':"@3705",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164D4,'size':4,'pad':0,'label':"lit_3706",'name':"@3706",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164D8,'size':4,'pad':0,'label':"lit_3707",'name':"@3707",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164DC,'size':4,'pad':0,'label':"lit_3708",'name':"@3708",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164E0,'size':4,'pad':0,'label':"lit_3709",'name':"@3709",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164E4,'size':4,'pad':0,'label':"lit_3710",'name':"@3710",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164E8,'size':4,'pad':0,'label':"lit_3711",'name':"@3711",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164EC,'size':4,'pad':0,'label':"lit_3712",'name':"@3712",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164F0,'size':4,'pad':0,'label':"lit_3713",'name':"@3713",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164F4,'size':4,'pad':0,'label':"lit_3765",'name':"@3765",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164F8,'size':4,'pad':0,'label':"lit_3809",'name':"@3809",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C164FC,'size':4,'pad':0,'label':"lit_3810",'name':"@3810",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C16500,'size':8,'pad':0,'label':"lit_3812",'name':"@3812",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16508,'size':4,'pad':0,'label':"lit_3856",'name':"@3856",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C1650C,'size':4,'pad':0,'label':"lit_3930",'name':"@3930",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C16510,'size':4,'pad':0,'label':"lit_3931",'name':"@3931",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C16514,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C16518,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C1651C,'size':4,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C16520,'size':29,'pad':0,'label':"d_a_obj_h_saku__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C16540,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C16544,'size':32,'pad':0,'label':"l_daObjH_Saku_Method",'name':"l_daObjH_Saku_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C16564,'size':48,'pad':0,'label':"g_profile_Obj_H_Saku",'name':"g_profile_Obj_H_Saku",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C16594,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C165B8,'size':40,'pad':0,'label':"__vt__13daObjH_Saku_c",'name':"__vt__13daObjH_Saku_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C165E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C165E8,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C165EC,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C165F0,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C165F4,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C165F8,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C165FC,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16600,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16604,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16608,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1660C,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16610,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16614,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16618,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1661C,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16620,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16624,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16628,'size':12,'pad':0,'label':"lit_3639",'name':"@3639",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16634,'size':12,'pad':0,'label':"data_80C16634",'name':"s_pos_l__28@unnamed@d_a_obj_h_saku_cpp@",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16640,'size':12,'pad':0,'label':"lit_3640",'name':"@3640",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1664C,'size':12,'pad':0,'label':"data_80C1664C",'name':"s_pos_r__28@unnamed@d_a_obj_h_saku_cpp@",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16658,'size':4,'pad':0,'label':"data_80C16658",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1665C,'size':4,'pad':0,'label':"data_80C1665C",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16660,'size':4,'pad':0,'label':"data_80C16660",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16664,'size':4,'pad':0,'label':"data_80C16664",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16668,'size':4,'pad':0,'label':"data_80C16668",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1666C,'size':4,'pad':0,'label':"data_80C1666C",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16670,'size':4,'pad':0,'label':"data_80C16670",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16674,'size':4,'pad':0,'label':"data_80C16674",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16678,'size':4,'pad':0,'label':"data_80C16678",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1667C,'size':4,'pad':0,'label':"data_80C1667C",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16680,'size':4,'pad':0,'label':"data_80C16680",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16684,'size':4,'pad':0,'label':"data_80C16684",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16688,'size':4,'pad':0,'label':"data_80C16688",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1668C,'size':4,'pad':0,'label':"data_80C1668C",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16690,'size':4,'pad':0,'label':"data_80C16690",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16694,'size':4,'pad':0,'label':"data_80C16694",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C16698,'size':4,'pad':0,'label':"data_80C16698",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1669C,'size':4,'pad':0,'label':"data_80C1669C",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166A0,'size':4,'pad':0,'label':"data_80C166A0",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166A4,'size':4,'pad':0,'label':"data_80C166A4",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166A8,'size':4,'pad':0,'label':"data_80C166A8",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166AC,'size':4,'pad':0,'label':"data_80C166AC",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166B0,'size':4,'pad':0,'label':"data_80C166B0",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166B4,'size':4,'pad':0,'label':"data_80C166B4",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C166B8,'size':4,'pad':0,'label':"data_80C166B8",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"BreakSet__13daObjH_Saku_cFv":5,
	"__dt__4cXyzFv":6,
	"SpeedSet__13daObjH_Saku_cFP4cXyzP4cXyzf":7,
	"Action__13daObjH_Saku_cFv":8,
	"initBaseMtx__13daObjH_Saku_cFv":9,
	"setBaseMtx__13daObjH_Saku_cFv":10,
	"daObjH_Saku_Draw__FP13daObjH_Saku_c":11,
	"daObjH_Saku_Execute__FP13daObjH_Saku_c":12,
	"daObjH_Saku_IsDelete__FP13daObjH_Saku_c":13,
	"daObjH_Saku_Delete__FP13daObjH_Saku_c":14,
	"daObjH_Saku_Create__FP10fopAc_ac_c":15,
	"__dt__12dBgS_ObjAcchFv":16,
	"CreateHeap__13daObjH_Saku_cFv":17,
	"Create__13daObjH_Saku_cFv":18,
	"Execute__13daObjH_Saku_cFPPA3_A4_f":19,
	"Draw__13daObjH_Saku_cFv":20,
	"Delete__13daObjH_Saku_cFv":21,
	"__sinit_d_a_obj_h_saku_cpp":22,
	"func_80C164A4":23,
	"func_80C164AC":24,
	"_ctors":25,
	"_dtors":26,
	"lit_3703":27,
	"lit_3704":28,
	"lit_3705":29,
	"lit_3706":30,
	"lit_3707":31,
	"lit_3708":32,
	"lit_3709":33,
	"lit_3710":34,
	"lit_3711":35,
	"lit_3712":36,
	"lit_3713":37,
	"lit_3765":38,
	"lit_3809":39,
	"lit_3810":40,
	"lit_3812":41,
	"lit_3856":42,
	"lit_3930":43,
	"lit_3931":44,
	"lit_3965":45,
	"lit_3966":46,
	"lit_3967":47,
	"d_a_obj_h_saku__stringBase0":48,
	"l_arcName":49,
	"l_daObjH_Saku_Method":50,
	"g_profile_Obj_H_Saku":51,
	"__vt__12dBgS_ObjAcch":52,
	"__vt__13daObjH_Saku_c":53,
	"__global_destructor_chain":54,
	"lit_1109":55,
	"lit_1107":56,
	"lit_1105":57,
	"lit_1104":58,
	"lit_1099":59,
	"lit_1097":60,
	"lit_1095":61,
	"lit_1094":62,
	"lit_1057":63,
	"lit_1055":64,
	"lit_1053":65,
	"lit_1052":66,
	"lit_1014":67,
	"lit_1012":68,
	"lit_1010":69,
	"lit_1009":70,
	"lit_3639":71,
	"data_80C16634":72,
	"lit_3640":73,
	"data_80C1664C":74,
	"data_80C16658":75,
	"data_80C1665C":76,
	"data_80C16660":77,
	"data_80C16664":78,
	"data_80C16668":79,
	"data_80C1666C":80,
	"data_80C16670":81,
	"data_80C16674":82,
	"data_80C16678":83,
	"data_80C1667C":84,
	"data_80C16680":85,
	"data_80C16684":86,
	"data_80C16688":87,
	"data_80C1668C":88,
	"data_80C16690":89,
	"data_80C16694":90,
	"data_80C16698":91,
	"data_80C1669C":92,
	"data_80C166A0":93,
	"data_80C166A4":94,
	"data_80C166A8":95,
	"data_80C166AC":96,
	"data_80C166B0":97,
	"data_80C166B4":98,
	"data_80C166B8":99,
}

