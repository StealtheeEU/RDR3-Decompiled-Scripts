#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14[3] = { 0, 0, 0 };
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<17> Local_33[1];
	int iLocal_51 = 0;
	var uLocal_52 = -1;
	var uLocal_53 = 0;
	var uLocal_54 = -1;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = -1;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 1073741824;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 1;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 1106247680;
	var uLocal_78 = 1067450368;
	var uLocal_79 = 0;
	var uLocal_80 = 1092616192;
	var uLocal_81 = 1112014848;
	var uLocal_82 = 1106247680;
	var uLocal_83 = 1101529088;
	var uLocal_84 = 1101004800;
	var uLocal_85 = 1084227584;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	bool bLocal_126 = false;
	int iLocal_127[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2907> Local_156 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<4> Var1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_24 = GET_HASH_KEY("P_CS_BOOK02X");
	iLocal_25 = GET_HASH_KEY("P_KNITTINGNEEDLE01X");
	iLocal_26 = GET_HASH_KEY("P_KNITTINGSQUARE01X");
	iLocal_27 = GET_HASH_KEY("P_CHAIRFOLDING02X");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(Local_156))
		{
			func_2(&Global_1935630, 32768);
		}
		func_3(&Local_156, 1);
	}
	func_4(&uScriptParam_0, &Local_156);
	while (!func_5(&Local_156, 1))
	{
		if (func_6(&Local_156) != 10)
		{
			if ((func_6(&Local_156) == 3 || func_6(&Local_156) == 4) && (!func_7(&Local_156) || func_8(&(Local_156.f_958)) > 0))
			{
				func_9(&Local_156, func_5(&Local_156, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&Local_156)) && func_5(&Local_156, 65536))
			{
				func_9(&Local_156, 1);
			}
		}
		if (func_6(&Local_156) >= 3 && func_6(&Local_156) <= 7)
		{
			func_11(&Local_156);
		}
		if (((((func_6(&Local_156) >= 5 && func_6(&Local_156) <= 7) && !func_5(&Local_156, 4096)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_156.f_428.f_444)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_156.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_156.f_428.f_444))
		{
			MemCopy(&Var1, {func_12(Local_156)}, 4);
			func_13(Var1, &(Local_156.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (func_6(&Local_156))
		{
			case 8:
				if (func_14(&Local_156))
				{
					func_15(&Local_156);
					func_16(&Local_156);
					func_17(&Local_156, 0);
				}
				else if (!func_10(&Local_156))
				{
					if (!func_18(&(Local_156.f_2899)))
					{
						func_19(&(Local_156.f_2899), 0);
					}
					if (!func_20(&Local_156))
					{
						if (func_21(&(Local_156.f_2899)) >= 1f)
						{
							func_22(Local_156.f_2889, 2097152);
							func_23(&Local_156);
							func_24(&Local_156);
							func_17(&Local_156, 10);
						}
					}
					else
					{
						if (!func_5(&Local_156, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_156, 536870912);
						}
						func_26(&(Local_156.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&Local_156))
				{
					func_16(&Local_156);
				}
				if (!func_10(&Local_156) || func_5(&Local_156, 65536))
				{
					if (func_27(&Local_156))
					{
						func_17(&Local_156, 1);
					}
				}
				break;
			case 1:
				if (func_10(&Local_156))
				{
					func_16(&Local_156);
				}
				if (func_28(&Local_156))
				{
					func_17(&Local_156, 2);
				}
				break;
			case 2:
				if (func_10(&Local_156))
				{
					func_16(&Local_156);
				}
				if (func_29(&Local_156))
				{
					if (!func_7(&Local_156) || func_10(&Local_156))
					{
						if (!func_30(Local_156.f_2889))
						{
							Local_156.f_2889 = func_32(func_31(Local_156));
						}
						func_22(Local_156.f_2889, 4);
						func_25(&Local_156, 8192);
					}
					if (func_10(&Local_156))
					{
						func_33(&Local_156);
						func_17(&Local_156, 9);
					}
					else
					{
						func_17(&Local_156, 3);
					}
				}
				break;
			case 9:
				if (func_16(&Local_156))
				{
					func_34(&Local_156);
					func_15(&Local_156);
					func_35(&Local_156);
					if (!func_5(&Local_156, 256))
					{
						func_36(&Local_156);
						func_37(Local_156);
						func_38(&Local_156);
						func_17(&Local_156, 7);
					}
					else
					{
						func_17(&Local_156, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&Local_156, 8192))
				{
					if (func_8(&(Local_156.f_958)) != 3)
					{
					}
					else
					{
						func_22(Local_156.f_2889, 4);
						func_25(&Local_156, 8192);
					}
				}
				func_39(&Local_156);
				if (func_40(func_32(Global_1835011[Local_156 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_156) || func_42(&Local_156, 32768))
				{
					func_34(&Local_156);
					func_15(&Local_156);
					func_17(&Local_156, 4);
					func_19(&(Local_156.f_2890), 0);
				}
				else if (func_10(&Local_156) && !func_1(Local_156))
				{
					if (!func_18(&(Local_156.f_2899)))
					{
						func_19(&(Local_156.f_2899), 0);
					}
					if (!func_20(&Local_156))
					{
						if (func_21(&(Local_156.f_2899)) >= 1f)
						{
							func_22(Local_156.f_2889, 2097152);
							func_23(&Local_156);
							func_24(&Local_156);
							func_17(&Local_156, 10);
						}
					}
					else
					{
						if (!func_5(&Local_156, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_156, 536870912);
						}
						func_26(&(Local_156.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_156);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_156) || (func_42(&Local_156, 32768) && !func_5(&Local_156, 268435456)))
				{
					func_35(&Local_156);
					if (!func_5(&Local_156, 256))
					{
						func_36(&Local_156);
						func_38(&Local_156);
						if (!func_45(Global_1935630, 524288) || func_42(&Local_156, 524288))
						{
							func_37(Local_156);
							func_17(&Local_156, 7);
						}
						else
						{
							func_17(&Local_156, 6);
						}
					}
					else
					{
						func_37(Local_156);
						func_17(&Local_156, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_156);
				func_47(&Local_156);
				if (func_48(&(Local_156.f_2884)) >= func_49(&Local_156))
				{
					func_36(&Local_156);
					func_38(&Local_156);
					func_26(&(Local_156.f_2884));
					if (!func_42(&Local_156, 524288))
					{
						func_37(Local_156);
						func_17(&Local_156, 7);
					}
					else
					{
						func_17(&Local_156, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(Local_156.f_2906)))
				{
					func_19(&(Local_156.f_2906), 0);
				}
				if ((func_50(&(Local_156.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_156.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_156.f_428.f_444))
				{
					func_37(Local_156);
					func_17(&Local_156, 7);
				}
				else if (func_48(&(Local_156.f_2906)) >= 5f)
				{
					func_37(Local_156);
					func_17(&Local_156, 7);
				}
				break;
			case 7:
				func_51(&Local_156);
				if (func_52(&Local_156))
				{
					func_17(&Local_156, 10);
				}
				break;
			case 10:
				if (func_3(&Local_156, 0))
				{
					func_25(&Local_156, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return false;
	}
	return func_40(iVar0, 1024);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_56(iParam0);
	func_57(iParam0);
	func_58(iParam0);
	func_59(*iParam0);
	func_60(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630.f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (func_5(iParam0, 1024))
	{
		func_61(1);
		func_2(&Global_1935630, 32768);
	}
	else
	{
		func_62();
	}
	if (bParam1)
	{
		if (func_63(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		func_64(&(iParam0->f_958));
	}
	func_65(iParam0, 0);
	if (func_5(iParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		func_66(iParam0, 536870912);
	}
	if (bParam1)
	{
		func_67(1, 0, 0);
	}
	if (func_5(iParam0, -2147483648))
	{
		func_68();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_4(var uParam0, int iParam1)
{
	vector3 vVar0;

	*iParam1 = *uParam0;
	PED::_0xED9582B3DA8F02B4(10);
	iParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(iParam1);
	if (func_10(iParam1))
	{
		func_70(&(iParam1->f_428));
		func_71(iParam1);
		func_25(iParam1, 16777216);
		func_17(iParam1, 8);
	}
	else
	{
		func_17(iParam1, 0);
	}
	if (!func_5(iParam1, 1073741824 /* Float: 2f */))
	{
		func_72(*iParam1);
		func_73(*iParam1);
	}
	vVar0 = { func_12(*iParam1) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		func_25(iParam1, 134217728);
	}
	func_19(&(iParam1->f_2896), 0);
	return 1;
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0->f_2 && iParam1) != 0;
}

int func_6(int iParam0)
{
	return iParam0->f_1;
}

bool func_7(int iParam0)
{
	if (func_5(iParam0, 16))
	{
		return false;
	}
	return func_5(iParam0, 524288);
}

int func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, bool bParam1)
{
	vector3 vVar0[24];

	if (!CAM::IS_SCREEN_FADED_OUT() && !func_5(iParam0, 4))
	{
		if (func_48(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		func_26(&(iParam0->f_2896));
		if ((func_74(0, 0, 1) && !func_5(iParam0, 65536)) && !func_40(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (func_5(iParam0, 128))
	{
		return;
	}
	if (func_5(iParam0, 134217728))
	{
		if (!func_5(iParam0, 16777216))
		{
			func_75(iParam0, 16);
			if (func_7(iParam0))
			{
				func_76(iParam0);
			}
			func_25(iParam0, 16777216);
		}
		cVar0 = { func_12(*iParam0) };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!func_40(iParam0->f_2889, 128))
			{
				func_22(iParam0->f_2889, 128);
			}
		}
		else if (func_40(iParam0->f_2889, 128))
		{
			func_78(iParam0->f_2889, 128);
		}
	}
}

bool func_10(int iParam0)
{
	if (func_5(iParam0, 65536))
	{
		return true;
	}
	if (!func_79(&(Global_1835011[*iParam0 /*74*/])))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	int iVar0;

	if (!func_18(&(iParam0->f_2893)))
	{
		func_19(&(iParam0->f_2893), 0);
	}
	if (func_48(&(iParam0->f_2893)) >= 1f)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
		{
			iVar0 = func_80(7);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!func_5(iParam0, 512))
				{
					PED::_0xE9B168527B337BF0(iVar0, iParam0->f_425);
					func_25(iParam0, 512);
				}
			}
			else if (func_5(iParam0, 512))
			{
				func_66(iParam0, 512);
			}
		}
		func_26(&(iParam0->f_2893));
	}
}

Vector3 func_12(int iParam0)
{
	vector3 vVar0;

	if (!func_81(iParam0))
	{
		return vVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_9;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_82(uParam4, &uParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_50(uParam4) != 1)
	{
		func_84(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_50(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false))
				{
					func_85(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				func_86(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_70(uParam4);
				}
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_88(uParam4);
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), 0);
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (func_77(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
					{
						func_86(uParam4, 4);
					}
					else if (!func_90(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100f, 1, 1))
					{
						func_92(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_89(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_93(1, 0);
					func_85(uParam4, &uParam0);
					func_86(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				func_86(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (func_87(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444) || func_83(uParam4, 512)))
			{
				if (!func_83(uParam4, 1024) && func_95(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_83(uParam4, 512))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, 512);
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
			if (func_83(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_97(uParam4) - func_98(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_98(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_100(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, 1);
						func_86(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_83(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, 536870912);
				}
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= (func_97(uParam4) - 5000))
				{
					func_105();
				}
			}
			break;
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_83(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						func_96(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_87(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
				}
				if (func_50(uParam4) == 3)
				{
					if (func_83(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_86(uParam4, 4);
			break;
	}
	return 0;
}

bool func_14(int iParam0)
{
	func_25(iParam0, 262144);
	if (func_106(iParam0))
	{
		func_25(iParam0, 65536);
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_5(iParam0, 131072))
	{
		if (!func_5(iParam0, 2048) && !func_7(iParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
		}
		func_107(*iParam0);
		func_25(iParam0, 1024);
		func_108(0);
		func_109(&Global_1935630, 32768);
		func_110(2);
		func_111(iParam0);
		func_112(1);
		func_59(*iParam0);
		func_60(*iParam0);
		func_33(iParam0);
		if (!func_5(iParam0, -2147483648))
		{
			func_68();
		}
		func_58(iParam0);
		func_25(iParam0, 131072);
	}
}

bool func_16(int iParam0)
{
	return true;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(var uParam0)
{
	return func_113(*uParam0, 1);
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1 || !func_18(uParam0))
	{
		func_26(uParam0);
	}
}

bool func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_114(iVar1) && func_115(iVar1))
		{
			bVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(bVar2))
			{
				if (func_116(iVar1))
				{
					if (func_117(bVar2, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_21(var uParam0)
{
	if (!func_18(uParam0))
	{
		return 0f;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

void func_23(int iParam0)
{
	func_120(&(iParam0->f_428));
}

void func_24(int iParam0)
{
	func_121(&(iParam0->f_958), iParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		func_109(&Global_1935630, 32768);
		func_107(*iParam0);
	}
}

void func_26(var uParam0)
{
	func_122(uParam0, 0f);
}

bool func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_123(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_124(iParam0)))
	{
		vVar0 = { func_12(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { func_125(&(iParam0->f_428)) };
			if (!func_90(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_126(*iParam0), true) >= 10f)
				{
					func_127(iParam0, func_126(*iParam0));
				}
				else
				{
					func_127(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_129(iParam0);
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_132(iParam0);
	func_133(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, 1073741824 /* Float: 2f */) && !func_136(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	char cVar0[64];

	func_137(iParam0, 0, -129.8412f, -32.237f, 95.1768f, 38.316f);
	func_137(iParam0, 1, -130.7456f, -32.6771f, 95.1778f, 122.5874f);
	PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 301, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 297, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 130, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 315, true);
	func_138(&uLocal_115, 90f, 0);
	iLocal_20 = OBJECT::CREATE_OBJECT(iLocal_24, -131.5561f, -32.0045f, 95.1762f, true, true, false, false, true);
	iLocal_21 = OBJECT::CREATE_OBJECT(iLocal_25, -132.6446f, -31.6261f, 95.1753f, true, true, false, false, true);
	iLocal_22 = OBJECT::CREATE_OBJECT(iLocal_26, -130.4249f, -31.3687f, 95.1747f, true, true, false, false, true);
	iLocal_23 = OBJECT::CREATE_OBJECT(iLocal_27, -128.344f, -31.348f, 95.08f, true, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_23, 92.03f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_25);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_26);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	func_131(iParam0, Global_35, "Arthur", 0, 0, 1);
	func_131(iParam0, uLocal_14[0], "Dutch", 0, 0, 1);
	func_131(iParam0, uLocal_14[1], "MollyOshea", 0, 0, 1);
	func_139(iParam0, iLocal_20, "P_CS_BOOK02X", 0, 0, 1, 0);
	func_139(iParam0, iLocal_21, "P_KNITTINGNEEDLE01X", 0, 0, 1, 0);
	func_139(iParam0, iLocal_22, "P_KNITTINGSQUARE01X", 0, 0, 1, 0);
	func_139(iParam0, iLocal_23, "P_CHAIRFOLDING02X", 0, 0, 1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "DUTCH", uLocal_14[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "MollyOshea", uLocal_14[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "P_CS_BOOK02X", iLocal_20, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "P_KNITTINGNEEDLE01X", iLocal_21, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "P_KNITTINGSQUARE01X", iLocal_22, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_31, "P_CHAIRFOLDING02X", iLocal_23, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_31);
	func_25(iParam0, 16);
	func_25(iParam0, 2048);
	StringCopy(&cVar0, "NormalStart", 64);
	func_140(iParam0, cVar0);
	HUD::TEXT_BLOCK_REQUEST("SAL1AUD");
	func_141(iParam0, iLocal_20, 0);
	func_141(iParam0, iLocal_21, 0);
	func_141(iParam0, iLocal_22, 0);
	func_141(iParam0, iLocal_23, 0);
	iLocal_29 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLBOX"), -131.7849f, -31.63494f, 95.50788f, 0f, 0f, -3.000001f, 5.405106f, 4.4f, 4f);
	func_142(&(Local_33[0 /*17*/]), "INTERACT_GREET", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_144(&iLocal_51, &Local_33, 0, func_143(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_146(&(iParam0->f_428), 17841);
	iLocal_30 = func_147(-129.6812f, -31.85321f, 94.91963f, -121.6871f, -32.19176f, 97.01344f, 4.5f);
	return true;
}

bool func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_32(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_33(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {func_148(*iParam0)}, 3);
	SCRIPTS::REQUEST_SCRIPT(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(&Global_1935630, 32768);
	func_149(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_150())
	{
		func_151();
	}
	if (func_42(iParam0, 524288))
	{
		func_109(&Global_1935630, 524288);
	}
	else if (!func_42(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	func_152(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, 262144))
	{
		if (func_153(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(func_154(4), 0, 0);
		}
		else if (func_153(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(func_154(2), 0, 0);
		}
		else if (func_153(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(func_154(8), 0, 0);
		}
		else if (func_153(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(func_154(16), 0, 0);
		}
		else if (func_153(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(func_154(32), 0, 0);
		}
	}
}

void func_36(int iParam0)
{
	func_155(bLocal_19, 0);
	func_156(iLocal_31);
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_157(iParam0))
	{
		return;
	}
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 2048);
	Global_1835011[iParam0 /*74*/].f_71 = 0;
	uVar1 = func_158(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		HUD::SET_MISSION_NAME(true, &uVar1);
		MISC::_0x1096603B519C905F(&uVar1);
	}
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> Var3;

	vVar0 = { func_12(*iParam0) };
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(iParam0->f_958), 8))
		{
			if (!func_63(&(iParam0->f_958), 131072))
			{
				if (!func_63(&(iParam0->f_958), 32768))
				{
					if (!func_5(iParam0, 8))
					{
						func_159(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

void func_39(int iParam0)
{
	struct<23> Var0;

	if (func_157(15))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_14[0]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_14[0], 184, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_14[1]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_14[1], 184, true);
	}
	if (bLocal_121 && func_48(&uLocal_123) >= 60f)
	{
		bLocal_121 = false;
		func_160(&uLocal_123);
	}
	if (((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_greet", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_look_up", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_look_up_no_audio", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_idle_look", true))
	{
		if (!TASK::_0x508F5053E3F6F0C4(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false), 20f))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_14[0], -1, 2096, 41, 0);
			Var0.f_4 = -1;
			Var0.f_8 = 2;
			Var0.f_9 = 1;
			Var0.f_10 = 1;
			Var0.f_11 = 1;
			Var0.f_13 = 1;
			Var0.f_14 = 2;
			Var0.f_15 = 2;
			Var0.f_16 = 3;
			Var0.f_19 = 3;
			Var0.f_20 = 1;
			Var0.f_21 = 3;
			Var0.f_22 = 3;
			Var0.f_3 = uLocal_14[0];
			Var0.f_4 = 14283;
			Var0.f_14 = 3;
			Var0.f_15 = 3;
			IK::_0x66F9EB44342BB4C5(Global_35, &Var0);
			bLocal_122 = true;
		}
	}
	else if (bLocal_122)
	{
		func_161(Global_35);
		bLocal_122 = false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_14[0]))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_31, false))
		{
			if (func_162(Global_35, uLocal_14[0], 6.5f, 1))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_30, true, 0))
				{
					if (!bLocal_121)
					{
						if (func_163(iLocal_31, "pl_look_up"))
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_31, "pl_look_up", true);
							func_26(&uLocal_118);
							func_26(&uLocal_123);
							bLocal_121 = true;
						}
					}
					else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_idle_look", true) && func_21(&uLocal_118) >= 7f)
					{
						if (func_163(iLocal_31, "pl_look_down"))
						{
							func_164(uLocal_14[0], "PLAYER_HANGING_AROUND", 291934926, Global_35, 1, 0, 0, 1);
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_31, "pl_look_down", true);
							func_160(&uLocal_118);
						}
					}
				}
				else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_idle_look", true))
				{
					if (func_163(iLocal_31, "pl_look_down"))
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_31, "pl_look_down", true);
					}
				}
			}
			else if (!func_162(Global_35, uLocal_14[0], 7f, 1))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_idle_look", true))
				{
					if (func_163(iLocal_31, "pl_look_down"))
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_31, "pl_look_down", true);
					}
				}
			}
		}
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

bool func_41(int iParam0)
{
	int iVar0;

	if (func_157(15))
	{
		return false;
	}
	func_165(&(uLocal_14[0]), &iLocal_51, &Local_33, 5f, -1082130432 /* Float: -1f */, 0);
	iVar0 = func_166(&(uLocal_14[0]), &iLocal_51, 5f, &Local_33, 0f, 3, 0, 0, 8209, iLocal_30, 0, 2, -1082130432 /* Float: -1f */);
	if (func_163(iLocal_31, "pl_greet") && iVar0 != -1)
	{
		func_19(&uLocal_112, 1);
		if (func_167(Global_35))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
		func_168(&Local_33, 1, 1, 1, 0);
		func_169(&(uLocal_14[0]));
		MISC::_0xE98D55C5983F2509(uLocal_14[0]);
		MISC::_0xFC6ECB9170145ECE();
		func_170(&iLocal_32, 1);
		return true;
	}
	return false;
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

void func_43(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_14[0]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_14[0], 184, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_14[1]))
	{
		PED::SET_PED_RESET_FLAG(uLocal_14[1], 184, true);
	}
}

bool func_44(int iParam0)
{
	bool bVar0;

	func_165(&(uLocal_14[0]), &iLocal_51, &Local_33, 5f, -1082130432 /* Float: -1f */, 0);
	bLocal_18 = func_171(9, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	bLocal_19 = func_172(-115.3436f, -19.6149f, 95.8593f, 59.49f, 1, 1, 1, 1, 1);
	bVar0 = true;
	if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_31, "pl_greet"))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_31, "s_Look_up", true))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_31, "pl_greet", true);
		}
		bVar0 = false;
	}
	if (!func_173(iParam0, 9, &(uLocal_14[2]), 0, 1, -118.5537f, -41.3597f, 94.5495f, 0, -268604689, 0, 0, 0))
	{
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_18))
	{
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_19))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_31) >= 1f)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_174(&iLocal_51, uLocal_14[0]);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_19, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_18, true);
		func_175(bLocal_19, -115.3436f, -19.6149f, 95.8593f, 59.49f, 2, 1073741824 /* Float: 2f */);
		ENTITY::FREEZE_ENTITY_POSITION(bLocal_19, false);
		func_131(iParam0, bLocal_19, "Horse_01", 0, 0, 1);
		func_131(iParam0, bLocal_18, "Horse_01^1", 0, 0, 1);
		func_137(iParam0, 2, -118.5537f, -41.3597f, 94.5495f, 250.6218f);
		func_176(uLocal_14[2], GET_HASH_KEY("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_LENNY"));
		func_131(iParam0, uLocal_14[2], "Lenny", 0, 0, 1);
		return true;
	}
	return false;
}

bool func_45(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_46(int iParam0)
{
}

void func_47(int iParam0)
{
	if ((!func_5(iParam0, 33554432) && !func_42(iParam0, 524288)) && !func_42(iParam0, 32768))
	{
		if (func_177(&(iParam0->f_958)))
		{
			func_178(&(iParam0->f_958), 0, 0);
			func_25(iParam0, 33554432);
		}
	}
}

float func_48(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
}

float func_49(int iParam0)
{
	return iParam0->f_2887;
}

int func_50(var uParam0)
{
	return *uParam0;
}

void func_51(int iParam0)
{
}

bool func_52(int iParam0)
{
	vector3 vVar0;
	bool bVar3;

	vVar0 = { func_12(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (func_157(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = func_179();
	if (bVar3)
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_179())
		{
			func_25(iParam0, 32);
		}
		else if (func_48(&(iParam0->f_2884)) >= 60f)
		{
			return true;
		}
	}
	else
	{
		if (!func_179())
		{
			return true;
		}
		if (!func_5(iParam0, 4096))
		{
			if (func_157(*iParam0))
			{
				func_25(iParam0, 4096);
			}
			else
			{
				func_111(iParam0);
			}
		}
		else if (!func_157(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	func_180(iLocal_28);
	func_180(iLocal_29);
	PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 301, false);
	if (func_181(iLocal_32, 1))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	}
	func_155(bLocal_19, 0);
	func_182(bLocal_18, 9, 1, 0, 0);
	func_156(iLocal_31);
	return true;
}

void func_54(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		func_183(iParam0->f_426);
	}
}

void func_55(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		func_184(&(iParam0->f_427), iParam0->f_425, 0);
		if (PATHFIND::_0xDE0EA444735C1368(iParam0->f_425))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iParam0->f_425);
		}
		func_66(iParam0, 512);
		func_60(*iParam0);
		VOLUME::_DELETE_VOLUME(iParam0->f_425);
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar0 = func_40(iParam0->f_2889, 2097152);
	bVar1 = func_5(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_114(iVar3))
		{
		}
		else if (!func_115(iVar3))
		{
		}
		else if (!func_116(iVar3))
		{
		}
		else
		{
			bVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(bVar4))
			{
			}
			else
			{
				func_185(iParam0, iVar3, bVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(int iParam0)
{
	func_186(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_5))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_5));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	return 1;
}

void func_59(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_58 = 0;
	Global_1835011[iParam0 /*74*/].f_59 = 0;
	Global_1835011[iParam0 /*74*/].f_60 = 0;
}

void func_60(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_61 = 0;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938.f_865 = (Global_1945938.f_865 - Global_1945938.f_865 & 2);
	}
	else
	{
		Global_1945938.f_865 |= 2;
	}
	func_187(bParam0);
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_188())
	{
		return;
	}
	func_189();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_114(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (func_190(iVar2))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_1664 && iParam1) != 0;
}

void func_64(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false, true);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && !ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		iParam0->f_2888 = ITEMSET::CREATE_ITEMSET(true);
	}
	LAW::_0x522F74636DF10201(PLAYER::GET_PLAYER_INDEX(), iParam0->f_2888);
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		LAW::_0xDA1A9ADC4E3D4B16(iParam0->f_2888, 1, 0);
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_2888)));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 - (iParam0->f_2 && iParam1));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_68()
{
	int iVar0;

	if (func_191(Global_1898437) && func_192(Global_1898437) == 1)
	{
		iVar0 = func_193(Global_1898437);
		if ((func_81(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[iVar0 /*74*/].f_22), 1);
		}
	}
}

int func_69(int iParam0)
{
	return 1;
}

void func_70(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_194(uParam0) };
	func_195(uParam0, &Var0);
}

void func_71(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		StringCopy(&cVar0, func_196(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		iParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_197(*iParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_198(iParam0, iParam0->f_425, 0);
		func_199(*iParam0, iParam0->f_425);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		StringCopy(&cVar8, func_196(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		iParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_197(*iParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		func_200(iParam0, iParam0->f_426);
	}
}

void func_72(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_201(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_73(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_202(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_203())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_193(Global_1898164.f_1[0 /*5*/]);
		if (func_204(iVar0) && func_205(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_191(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

void func_75(int iParam0, int iParam1)
{
	func_96(&(iParam0->f_428), iParam1);
}

void func_76(int iParam0)
{
	func_206(&(iParam0->f_428), &(iParam0->f_958));
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_83(uParam0, 256) && !func_83(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_82(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_90(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			vVar0 = { func_125(uParam0) };
			if (!func_90(vVar0))
			{
				func_207(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_208(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_209(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_210();
				uParam0->f_529 = 0;
			}
			func_211(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_212(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, 4096, 1);
			func_103(uParam0, 32768, 1);
			func_103(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_213(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (func_213(uParam0) >= func_209(uParam0))
				{
				}
				Var4 = { func_214(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_215(uParam0);
				}
				Var4 = { func_214(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_216(uParam0, 0, 0, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
		{
			return true;
		}
		func_88(uParam0);
		if (!uParam0->f_529)
		{
			if (func_217())
			{
				func_218(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { func_194(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_462[iVar14 /*9*/].f_8)
						{
							uParam0->f_462[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_83(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &Var15))
				{
					if (!func_83(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_444, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &Var15);
						}
						func_96(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_96(uParam0, 256);
			func_103(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_78(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 - (Global_1898346[iParam0 /*6*/].f_1 && iParam1));
}

bool func_79(var uParam0)
{
	if (func_153(&(uParam0->f_29), 62))
	{
		switch (func_219())
		{
			case 1:
				if (!func_153(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_153(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_153(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_153(&(uParam0->f_29), 32))
				{
					if (func_153(&(uParam0->f_29), 2))
					{
						if (func_221(func_220()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_80(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

bool func_81(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_82(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_83(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_223("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_223("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_96(uParam0, 8192);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_84(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444)) || func_83(uParam0, 512))
	{
		if (!func_224(uParam0->f_501, 128))
		{
			func_225();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_226(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_226(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_224(uParam0->f_501, 128))
		{
			func_225();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_227(iVar1))
		{
			if (func_228(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_224(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_229(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_225();
	}
}

void func_85(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_50(uParam0) == 2 && (func_230(uParam0->f_500, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_194(uParam0) };
		func_231(uParam0, &Var0);
	}
	func_232(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_233(uParam0, 0);
	}
	if (func_234())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_235();
	}
	if (func_236())
	{
		func_237(1);
	}
	func_216(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_238(uParam0, cVar8);
	func_93(1, 0);
	func_211(uParam0);
	if (func_239() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_226(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_87(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	func_240(uParam0);
	func_241(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_439 && iParam1) != 0;
}

void func_88(var uParam0)
{
	if ((!func_83(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_242(uParam0);
		func_241(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		func_96(uParam0, 32768);
	}
}

Vector3 func_89(var uParam0)
{
	return uParam0->f_5;
}

bool func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_243(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_92(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_93(bool bParam0, int iParam1)
{
	if (func_244())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_245())
		{
			func_246(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_94(var uParam0)
{
	vector3 vVar0;

	if (!func_83(uParam0, 4))
	{
		if (func_230(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_247(uParam0) };
		if (!func_230(uParam0->f_500, 524288))
		{
			func_248(&(uParam0->f_512));
		}
		func_249(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_250(uParam0, 0f, 0f, 0f);
		func_251(uParam0);
		func_252(uParam0);
		func_253(uParam0, 0f, 0f, 0f, 0, 0);
		func_254(uParam0);
		func_96(uParam0, 4);
		func_255(uParam0, 0);
		func_256(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_513)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_513));
		}
	}
}

bool func_95(var uParam0, bool bParam1)
{
	if (func_83(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, "ExportCamera") || (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_444, "ExportCamera") && bParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444))
	{
		func_96(uParam0, 262144);
		func_255(uParam0, 1);
		return true;
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_97(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_444) * 1000f));
}

int func_98(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000f));
}

bool func_99(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_257(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_100(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_444, false))
	{
		if (func_83(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444) && func_83(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_101(var uParam0)
{
	if (((func_83(uParam0, 1073741824 /* Float: 2f */) && !func_83(uParam0, 524288)) && func_83(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_102(var uParam0)
{
	if (!func_83(uParam0, 536870912))
	{
		func_255(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_210();
		func_96(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_258(uParam0);
	func_86(uParam0, 1);
	func_212(uParam0);
	func_259(uParam0);
	func_260(uParam0);
	func_261(uParam0, 4);
	func_215(uParam0);
	func_233(uParam0, 1);
	func_211(uParam0);
	func_160(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	func_262(!func_224(uParam0->f_501, 128));
	if (!func_224(uParam0->f_501, 128))
	{
		func_225();
	}
}

void func_103(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_263(2000);
	Global_16 = 0;
	func_264();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_224(*uParam0, 8));
	if (!func_224(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_224(*uParam0, 2) || func_224(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_224(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_224(*uParam0, 32))
	{
		func_265(Global_35, GET_HASH_KEY("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_266(GET_HASH_KEY("KIT_BANDANA"), 0);
	}
	func_256(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_105()
{
	Global_1935630.f_52 = 1;
}

bool func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && func_5(iParam0, 1048576))
	{
		func_66(iParam0, 1048576);
		return false;
	}
	if (!func_5(iParam0, 8388608))
	{
		if (BUILTIN::VDIST2(func_197(*iParam0), Global_36) < (10f * 10f))
		{
			func_25(iParam0, 8388608);
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return false;
		}
	}
	if (!func_5(iParam0, 1048576))
	{
		if (bVar0)
		{
			func_25(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_197(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (func_267(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return true;
	}
	else if (BUILTIN::VDIST2(func_197(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
	}
	else if (!func_5(iParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_197(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, GET_HASH_KEY("MOTIONSTATE_WALK"), false, 1, false);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		func_25(iParam0, 2097152);
	}
	if (func_18(&(iParam0->f_2890)))
	{
		if (func_48(&(iParam0->f_2890)) >= 15f)
		{
			return true;
		}
	}
	return false;
}

void func_107(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 1024);
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_2(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_109(&Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(int iParam0)
{
	int iVar0;

	if (func_268() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_270(func_269(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_269(iVar0), func_271(), 1))
			{
				func_272(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_108(0);
		func_65(iParam0, 1);
	}
	func_273(1, 0, 1);
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0f;
	}
	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_274(0f);
	Global_1935436.f_11 = 1;
	if (func_275())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_276();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	return func_277(iParam0, 16, 1);
}

bool func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_117(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_208(bParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_118(var uParam0)
{
	return func_113(*uParam0, 2);
}

float func_119()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_120(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
}

void func_121(var uParam0, int iParam1)
{
	func_278(uParam0, 4);
	func_279(uParam0, 10);
	func_280(uParam0, iParam1);
}

void func_122(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_119() - fParam1);
	func_281(uParam0, 1);
	func_282(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!ITEMSET::IS_ITEMSET_VALID(iParam1) || !ITEMSET::IS_ITEMSET_VALID(iParam2)) || !ITEMSET::IS_ITEMSET_VALID(iParam3))
	{
		return;
	}
	if (!func_283(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_58 = iParam1;
	Global_1835011[iParam0 /*74*/].f_59 = iParam2;
	Global_1835011[iParam0 /*74*/].f_60 = iParam3;
}

Vector3 func_124(int iParam0)
{
	return func_89(&(iParam0->f_428));
}

Vector3 func_125(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_284(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_226(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

Vector3 func_126(int iParam0)
{
	return func_197(iParam0);
}

void func_127(int iParam0, vector3 vParam1)
{
	func_207(&(iParam0->f_428), vParam1);
}

bool func_128(int iParam0)
{
	bool bVar0;

	STREAMING::REQUEST_MODEL(iLocal_24, false);
	STREAMING::REQUEST_MODEL(iLocal_25, false);
	STREAMING::REQUEST_MODEL(iLocal_26, false);
	STREAMING::REQUEST_MODEL(iLocal_27, false);
	func_25(iParam0, 2);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_31))
	{
		iLocal_31 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@leadin@int@ilo", 2, "pl_base", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_31);
	}
	bVar0 = true;
	if (!func_173(iParam0, 0, &(uLocal_14[0]), 0, 1, 0, 0, 0, 0, -268604689, 0, 0, 0))
	{
		bVar0 = false;
	}
	if (!func_173(iParam0, 16, &(uLocal_14[1]), 0, 1, 0, 0, 0, 0, -268604689, 0, 0, 0))
	{
		bVar0 = false;
	}
	if (((((((bVar0 && STREAMING::HAS_MODEL_LOADED(iLocal_24)) && STREAMING::HAS_MODEL_LOADED(iLocal_25)) && STREAMING::HAS_MODEL_LOADED(iLocal_26)) && STREAMING::HAS_MODEL_LOADED(iLocal_27)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_31, true, false)) && func_285(0, uLocal_14[0], -268604689)) && func_285(16, uLocal_14[1], -268604689))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_28))
		{
			iLocal_28 = VOLUME::_CREATE_VOLUME_BOX(-116.875f, -22.49062f, 95.3235f, 0f, 0f, 0f, 9.760769f, 2.834532f, 10f);
			func_286(iParam0, iLocal_28);
		}
		func_287(16);
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	return 1;
}

void func_130(int iParam0)
{
	func_186(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_131(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_139(iParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_132(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_12(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, 16384))
	{
		func_25(iParam0, 16384);
		if (!func_288(&vVar0))
		{
			return;
		}
		func_289(iParam0, vVar0, 0);
		func_25(iParam0, 524288);
	}
}

void func_133(int iParam0)
{
	if (func_213(&(iParam0->f_428)) != 15f || func_209(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_290(&(iParam0->f_428), 50f);
			func_291(&(iParam0->f_428), 75f);
			break;
		case 34:
			func_290(&(iParam0->f_428), 35f);
			func_291(&(iParam0->f_428), 50f);
			break;
		case 62:
			func_290(&(iParam0->f_428), 25f);
			func_291(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

int func_134(int iParam0)
{
	return func_292(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

bool func_135(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_5(iParam0, 2))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	iVar0 = func_293(*iParam0);
	if (!func_114(iVar0))
	{
		return true;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_269(iVar0));
	return func_173(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_136(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	char cVar9[64];

	iVar0 = 1;
	MemCopy(&uVar1, {func_201(iParam0)}, 8);
	StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
	{
		if (!func_294(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_202(iParam0)}, 8);
		StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
		{
			if (!func_295(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_137(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_14[iParam1], true, true);
	func_175(uLocal_14[iParam1], vParam2, fParam5, 2, 1073741824 /* Float: 2f */);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_14[iParam1], true);
	WEAPON::SET_CURRENT_PED_WEAPON(uLocal_14[iParam1], GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
}

void func_138(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_18(uParam0))
	{
		func_122(uParam0, fParam1);
	}
}

void func_139(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_296(&(iParam0->f_428), bParam1, sParam2, iParam3, iParam4, bParam6);
	func_297(iParam0, bParam1, sParam2);
	if (bParam5)
	{
		func_298(iParam0, bParam1);
	}
}

void func_140(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8)
{
	func_195(&(iParam0->f_428), &cParam1);
	func_25(iParam0, 8);
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_43616))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_43616);
	}
	if (bParam2)
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, func_299(), true);
	}
}

void func_142(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_300(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_301(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_302(iParam0->f_6, iParam0->f_5, 0);
			}
			func_303(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_304(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_143(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_27;
}

void func_144(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	func_305(iParam0, iParam3, 0);
	func_306(uParam1, iParam2);
	func_307(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		func_308(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		func_309(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		func_309(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		func_309(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		func_309(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		func_309(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		func_309(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		func_309(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		func_309(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		func_309(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		func_309(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		func_309(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		func_309(iParam0, 19);
	}
}

void func_145(var uParam0)
{
	if (!bLocal_126)
	{
		func_155(bLocal_19, 0);
		bLocal_126 = true;
	}
	func_156(iLocal_31);
}

void func_146(var uParam0, int iParam1)
{
	uParam0->f_436 = iParam1;
	func_310(uParam0, 1);
}

int func_147(vector3 vParam0, vector3 vParam3, float fParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	vVar1 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
	vVar4 = { vParam3 - vParam0 };
	vVar4.f_2 = 0f;
	vVar7 = { func_311(vVar4) };
	fVar10 = (vParam3.z - vParam0.z);
	vVar11.x = BUILTIN::VMAG(vVar4);
	vVar11.f_1 = fParam6;
	vVar11.f_2 = MISC::ABSF(fVar10);
	iVar0 = VOLUME::_CREATE_VOLUME_BOX(vVar1, vVar7, vVar11);
	return iVar0;
}

struct<4> func_148(int iParam0)
{
	struct<4> Var0;

	if (!func_81(iParam0))
	{
		return Var0;
	}
	return Global_1835011[iParam0 /*74*/].f_3;
}

void func_149(int iParam0)
{
	struct<12> Var0;
	int iVar12;

	if (func_312(&(iParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_428.f_13[iVar12 /*12*/]))
		{
			Global_43619[iVar12 /*12*/] = { iParam0->f_428.f_13[iVar12 /*12*/] };
		}
		else
		{
			Global_43619[iVar12 /*12*/] = { Var0 };
		}
		iVar12++;
	}
}

bool func_150()
{
	return func_313(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_151()
{
	if (func_150())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_179())
		{
			func_61(1);
		}
	}
}

void func_152(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_63(uParam1, 32768))
	{
		Var0 = { func_194(uParam0) };
		func_231(uParam0, &Var0);
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_314(uParam1, uParam1->f_1684) };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_314(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (func_63(uParam1, 268435456))
		{
			func_315(&(uParam0->f_500), 16384);
		}
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_316(uParam1, 524288);
	}
	if (func_317(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_318(&(uParam1->f_1016[uParam1->f_1684 /*41*/]), 256))
		{
			func_315(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1692)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

bool func_153(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_154(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

void func_155(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (!func_319(bParam0))
	{
		return;
	}
	iVar0 = func_320(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_321(iVar0);
	func_322(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_323(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_324(iVar0))
		{
			return;
		}
	}
	func_325(iVar0);
	PED::SET_PED_KEEP_TASK(bParam0, true);
	if (bParam1 && func_268() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
		}
	}
}

void func_156(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

bool func_157(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_326(Global_1835011[iParam0 /*74*/].f_1);
}

var func_158(int iParam0)
{
	var uVar0;

	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_159(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
			{
				func_231(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

void func_160(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_161(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

bool func_162(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_163(int iParam0, char* sParam1)
{
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	if (ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		return false;
	}
	return false;
}

bool func_164(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_327(iParam0, &Var0);
}

void func_165(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_328(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = func_329(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	func_330(iParam1, fParam3);
	func_331(uParam0, iParam1, uParam2, fVar0);
	func_332(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_333(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_334(iParam1, uParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_335(iParam1);
			}
		}
	}
}

int func_166(var uParam0, int iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_336(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_329(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		func_165(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_26(&(iParam1->f_13));
		}
		if (func_337(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_338(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_166(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_169(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_339(*uParam0, 1, 1);
						}
					}
					else if (func_340(iParam1, 22))
					{
						func_339(*uParam0, 0, 1);
					}
				}
				if (func_341(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_342(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_343(iParam8);
					func_344(iParam1, uParam3);
					if (func_345(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_346(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_347(iParam1, uParam3, fVar8);
					if (func_348(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_168(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_341(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_349(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_345(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_342(uParam0, func_341(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_343(iParam8);
					func_344(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_168(uParam3, 0, 0, 1, 1);
					func_350(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_351(Global_35, 501393341) && !func_351(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_352(Global_35, *uParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_270(iParam1->f_28, 0)) && func_162(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_351(iParam1->f_28, 518218985)) && !func_351(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_351(Global_35, -828834893) && !func_351(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_352(Global_35, *uParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_334(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_335(iParam1)))
					{
					}
					else if (!func_353(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_26(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_354(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_355(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_341(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_349(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_345(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_342(uParam0, func_341(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_343(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_168(uParam3, 0, 0, 1, 1);
					}
					func_350(iParam1, 1);
				}
				func_347(iParam1, uParam3, fVar8);
				if (func_355(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_356(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_167(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_168(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_300((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_357(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_169(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_170(int iParam0, int iParam1)
{
	func_358(iParam0, iParam1);
}

int func_171(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;

	if (!func_359(iParam0))
	{
		return 0;
	}
	iVar1 = func_360(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_READY_TO_RENDER(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_172(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	struct<11> Var1;

	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = fParam3;
	return func_361(&uVar0, &Var1);
}

bool func_173(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;

	if (!func_114(iParam1))
	{
		return false;
	}
	if (func_362(iParam0, *uParam2))
	{
		if (*uParam2 != func_363(iParam1))
		{
		}
		return true;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (func_90(vVar0))
	{
		vVar0 = { func_126(*iParam0) };
	}
	if (!func_364(iParam1, 28, 1))
	{
		func_365(iParam1, 28, 1);
	}
	*uParam2 = func_366(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*uParam2))
		{
			return false;
		}
		func_298(iParam0, *uParam2);
		func_367(iParam0, *uParam2);
		func_368(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!func_351(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		func_139(iParam0, *uParam2, 0, 0, 0, 1, 0);
		func_369(iParam1, 0, 0, 1);
		func_370(iParam1);
		return true;
	}
	return false;
}

void func_174(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	func_371(iParam0, &bParam1, 0);
	func_169(&bParam1);
	func_372(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_373(iParam0, 0);
	}
	func_374(iParam0);
	func_375(iParam0, bParam1);
	func_376(iParam0);
	func_377(iParam0);
}

void func_175(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (bParam0 == func_378(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_379(bParam0))
	{
		if (func_380(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_181(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_175(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_175(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_181(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_181(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_181(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_181(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_181(iParam5, 129))
	{
		if (func_181(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_181(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_181(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_181(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_379(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_181(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_181(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_176(int iParam0, int iParam1)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam1))
	{
		return;
	}
	if (iParam1 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iParam1, true, -142743235);
	}
}

bool func_177(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 0 && uParam0->f_475[iVar0 /*18*/].f_2 == 9) && uParam0->f_475[iVar0 /*18*/].f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8;
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar1) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar2 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar2 /*13*/].f_2))
					{
						Var3 = { func_381(uParam0, uParam0->f_3[iVar2 /*13*/].f_2) };
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iVar1, &Var3))
						{
							if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[iVar2 /*13*/].f_2, iVar1) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[iVar2 /*13*/].f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_178(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (func_63(uParam0, 32768) && func_382(&(uParam0->f_1522[iVar0 /*10*/]), 128))
				{
					func_383(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_179()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_180(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_181(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_182(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_359(iParam1))
	{
		return;
	}
	iVar0 = func_384(iParam1);
	if (func_385(iParam1))
	{
		if (!func_386(iParam1))
		{
			return;
		}
	}
	func_387(iParam1, 39, 1);
	func_388(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_388(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_388(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_365(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_389(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_183(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_390(vVar0, 0);
}

void func_184(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_185(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	func_391(bParam2);
	if (bParam4)
	{
		func_392(iParam0, bParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(iParam0, 4194304))
		{
			bParam6 = func_393(&(Global_1835011[*iParam0 /*74*/]), 1024);
			bVar0 = func_393(&(Global_1835011[*iParam0 /*74*/]), 65536);
		}
	}
	func_394(iParam1, iParam3, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, bParam6, bVar0, 0, 0);
}

void func_186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_395(uParam0[iVar0 /*3*/]))
		{
			if (func_396((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				func_397(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_398(uParam1[iVar0 /*5*/]))
		{
			if (func_396((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				func_399(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_400(uParam2[iVar0 /*3*/]))
		{
			if (func_396((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				func_401(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_402(uParam3[iVar0 /*3*/]))
		{
			if (func_396((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				func_403(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_396(uParam4->f_1, iParam12))
	{
		func_404(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_405(uParam5[iVar0 /*67*/]))
		{
			if (func_396((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				func_406(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_405(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_407(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (func_396((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						func_408(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_409(uParam6[iVar0 /*4*/]))
		{
			if (func_396((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				func_410(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_411(uParam7[iVar0 /*5*/]))
		{
			if (func_396((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				func_412(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_413(uParam8[iVar0 /*3*/]))
		{
			if (func_396((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				func_414(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_415(uParam9[iVar0 /*3*/]))
		{
			if (func_396((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				func_416(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_417(uParam10[iVar0 /*4*/]))
		{
			if (func_396((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				func_418(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_419(uParam11[iVar0 /*3*/]))
		{
			if (func_396((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				func_420(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_187(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

bool func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_189()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Global_43806[iVar0 /*6*/], "pl_breakout", true);
		}
		iVar0++;
	}
}

bool func_190(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43806[iVar0 /*6*/], false)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, Global_43806[iVar0 /*6*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_191(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_192(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return func_422(func_421(iParam0));
}

int func_193(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_423(func_421(iParam0));
}

struct<8> func_194(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_424(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_425() };
	}
	return Var0;
}

void func_195(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_196()
{
	return "unnamed";
}

Vector3 func_197(int iParam0)
{
	if (func_426(iParam0))
	{
		return func_427(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_198(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	POPULATION::_0x18262CAFEBB5FBE1(iParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	func_66(iParam0, 512);
	iParam0->f_427 = func_428(iParam1, 0, 0, 0);
}

void func_199(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_283(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_61 = iParam1;
}

void func_200(int iParam0, int iParam1)
{
	char cVar0[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	func_429(iParam1);
	StringCopy(&cVar0, func_196(), 64);
	func_430(iParam1, &cVar0, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
}

struct<2> func_201(int iParam0)
{
	struct<2> Var0;

	MemCopy(&Var0, {func_158(iParam0)}, 2);
	return Var0;
}

struct<2> func_202(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_201(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

bool func_203()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_205(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_206(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[iVar0 /*41*/].f_30)))
		{
			func_431(uParam0, &(uParam1->f_1016[iVar0 /*41*/].f_30), 1);
		}
		iVar0++;
	}
}

void func_207(var uParam0, vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_208(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_209(var uParam0)
{
	return uParam0->f_435;
}

void func_210()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_432(Var0);
	}
}

void func_211(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]));
		}
		uParam0->f_462[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_212(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_433(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_83(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_103(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_103(uParam0, 16, 1);
}

float func_213(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_214(var uParam0)
{
	return uParam0->f_446;
}

void func_215(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_434() };
	func_195(uParam0, &Var0);
}

void func_216(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_435(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_196());
		func_96(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_436(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_96(uParam0, 16);
	}
}

bool func_217()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_218(int iParam0)
{
	struct<4> Var0;

	if (func_437(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_432(Var0);
}

int func_219()
{
	return Global_1899516;
}

int func_220()
{
	return Global_1899515;
}

int func_221(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_222(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> func_223(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_224(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_225()
{
	if (func_300(Global_43801))
	{
		func_357(&Global_43801, 0, 0);
	}
}

char* func_226(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == GET_HASH_KEY("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return func_438(iVar0);
}

bool func_227(int iParam0)
{
	int iVar0;

	if (func_439(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_228(int iParam0, bool bParam1)
{
	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	return !func_440(iParam0, 4);
}

bool func_229(bool bParam0, bool bParam1)
{
	if (!func_300(Global_43801))
	{
		Global_43801 = func_441("CUTSCENE_SKIP", GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, GET_HASH_KEY("LONG_TIMED_EVENT"), 0);
		Global_1945938[Global_43801 /*18*/].f_16 = Global_23[3];
		func_442(Global_43801, 0, 1);
		func_443(Global_43801, 6, 1);
		if (bParam1)
		{
			func_443(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_228(Global_43801, 0))
		{
			func_303(Global_43801, 1, 1);
		}
		if (func_444(Global_43801, 1) != 0f && bParam0)
		{
			func_442(Global_43801, 1, 1);
		}
		else
		{
			func_442(Global_43801, 0, 1);
		}
		return func_445(Global_43801, 1);
	}
	return false;
}

bool func_230(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_231(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_462[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_446 };
			uParam0->f_462[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_195(uParam0, sParam1);
	func_103(uParam0, 2097152, 1);
	func_96(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1, true);
}

void func_232(var uParam0, char* sParam1)
{
	if (((!func_83(uParam0, 32) || func_446(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_315(&(uParam0->f_500), 256);
	}
}

void func_233(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 10, bParam1);
	}
}

bool func_234()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DOC_PLAYER_JOURNAL")) > 0;
}

void func_235()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == GET_HASH_KEY("DOC_PLAYER_JOURNAL"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

bool func_236()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

void func_237(bool bParam0)
{
	if (func_236())
	{
		Global_1357509 = 1;
	}
	if (func_447(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

void func_238(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

bool func_239()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_240(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			func_448(uParam0, &(uParam0->f_462[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_434() };
	func_448(uParam0, &Var1);
	Var1 = { func_194(uParam0) };
	func_448(uParam0, &Var1);
}

void func_241(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_257(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (func_257(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_449(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !func_257(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						func_450(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_242(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_257(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_451(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

float func_243(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_244()
{
	return func_439(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_245()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_246(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

Vector3 func_247(var uParam0)
{
	return uParam0->f_502;
}

void func_248(var uParam0)
{
	int iVar0;

	if (func_452(&iVar0))
	{
		if (func_453(iVar0, 0))
		{
			if (func_454(iVar0) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, GET_HASH_KEY("MASKS_LARGE"), 0);
				func_265(Global_35, GET_HASH_KEY("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, GET_HASH_KEY("NECKWEAR"), 0);
			}
			if (!func_453(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_249(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_455(0, 0);
		func_456(-1);
	}
	func_92(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_230(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_230(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_230(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_230(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_230(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_230(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_230(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_230(*uParam0, 4) && !func_230(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_230(*uParam0, 2048))
	{
		func_457(0, 0);
	}
	if (func_230(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_230(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (func_230(*uParam0, 8192))
	{
		func_458();
	}
	if (!func_230(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_230(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_230(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_230(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_459() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_90(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_460(&vVar3, 50, 10, 0);
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_461(2);
						func_462(-1);
						func_463(vVar3);
						func_465(func_464());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_230(*uParam0, 4096))
	{
		func_450(Global_35);
	}
	if (!func_230(*uParam0, 1048576))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, 1, 0);
	}
	if (!func_230(*uParam0, 2097152))
	{
		if (func_466() || PED::_IS_PED_DRUNK(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_250(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

void func_251(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (func_83(uParam0, 2048) && !func_90(func_467(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		bVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(bVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(bVar1))
			{
				iVar2 |= 32;
			}
			func_175(bVar1, func_467(uParam0), func_468(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		bVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, bVar3, true))
		{
			func_175(bVar3, func_467(uParam0), func_468(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_252(var uParam0)
{
	bool bVar0;
	vector3 vVar1;

	if ((func_83(uParam0, 268435456) && !func_90(func_467(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			vVar1 = { func_467(uParam0) };
			func_175(bVar0, vVar1, func_469(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(bVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(bVar0, 0f);
		}
	}
}

void func_253(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 };
	uParam0->f_508 = iParam4;
	if (func_90(vParam1))
	{
		func_103(uParam0, 2048, 1);
	}
	else
	{
		func_96(uParam0, 2048);
		if (bParam5)
		{
			func_96(uParam0, -2147483648);
		}
	}
}

void func_254(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!func_257(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (func_471(func_470(iVar1, 0, 1, 0)))
						{
							if (!func_472(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (func_471(func_470(iVar1, 1, 1, 0)))
						{
							if (!func_472(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, GET_HASH_KEY("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_255(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::REMOVE_TAG_FROM_META_PED(Global_35, GET_HASH_KEY("HOLSTERS_LEFT"), 0);
			Global_17 = !bParam1;
		}
	}
}

void func_256(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_268() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_190);
			}
			func_473(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_474(bParam1, 29, bVar4, 1, 0);
			func_474(bParam1, 31, bVar4, 1, 0);
			func_474(bParam1, 30, bVar4, 1, 0);
			func_474(bParam1, 22, bVar4, 1, 0);
			func_474(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_475(32768) && func_476(1108822547, 8)) && func_477(10, iParam3))
	{
		func_478(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_479(iVar1, 1);
			if (func_476(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_477(iVar1, iParam3))
				{
				}
				else if ((func_476(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_476(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_474(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_480(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_474(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_476(iVar3, 1))
							{
								func_481(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(bParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_257(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_258(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	func_482(uParam0);
	func_207(uParam0, 0f, 0f, 0f);
	func_483(uParam0);
}

void func_259(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_260(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_261(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_484(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_262(bool bParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_225();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_263(int iParam0)
{
	func_485();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_264()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

int func_265(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_486(iParam1, 1, 0) };
		iParam3 = func_487(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_489(iParam1, iParam2, func_488(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_490(1, (func_268() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_488(iParam3, 1) /*11*/])
			{
				func_491(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_475(32768) && iParam1 != Global_1946804.f_57[func_488(iParam3, 1) /*11*/])
			{
				func_492();
				func_491(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_491(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_493(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_491(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_218(0);
			func_494(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_491(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_266(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_486(iParam0, 0, 0) };
	Var5 = { func_495(iParam0, Var0, Var0.f_4, 0) };
	if (func_496(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_497(0), &Var5, bParam1);
}

bool func_267(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(bParam0);
	if (bVar3)
	{
		bVar2 = PED::GET_MOUNT(bParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(bVar2) || ENTITY::IS_ENTITY_DEAD(bVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(bParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_181(*uParam1, 128))
	{
		if (!func_351(bParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(bParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_181(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_498(bVar2))
			{
				return false;
			}
			if (!func_351(bParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_499(bVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_181(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_500(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(bParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(bParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0)));
			func_170(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_181(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_181(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_498(bVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(bParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_500(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_500(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_500(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(bVar2, 0))
		{
			return false;
		}
		if (func_181(*uParam1, 2336))
		{
			if (!func_498(bVar2))
			{
			}
			if (func_501(bVar2, *uParam1))
			{
				func_502(uParam1, 32);
				func_502(uParam1, 256);
				func_502(uParam1, 2048);
				func_170(uParam1, 512);
				func_170(uParam1, 1024);
				func_170(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_181(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_SPRINT"), false);
			if (!func_498(bVar2))
			{
			}
			if (TASK::IS_PED_WALKING(bVar2))
			{
				return false;
			}
			else
			{
				func_502(uParam1, 64);
			}
		}
		if (func_500(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(bVar2) || (TASK::IS_PED_RUNNING(bVar2) && func_500(iParam2, 1024))) || func_500(iParam2, 8)) && !func_181(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 1, 0, 0);
			func_170(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(bVar2) && func_500(iParam2, 4096)) && !func_181(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 8, 0, 0);
			func_170(uParam1, 2048);
			func_170(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2) >= 1.001f) && func_500(iParam2, 32)) && !func_181(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 3, 0, 0);
			func_170(uParam1, 256);
			func_170(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(bVar2))
		{
			TASK::TASK_STAND_STILL(bVar2, -1);
			func_170(uParam1, 64);
		}
		else if (!func_500(iParam2, 1))
		{
			if (!func_500(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(bParam0, true, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_499(bVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_181(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2, 0f);
			func_170(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(bParam0, 1000);
			func_170(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_500(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(bParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_170(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_500(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(bParam0, 200);
		func_170(uParam1, 8);
	}
	return false;
}

int func_268()
{
	return Global_1572887.f_12;
}

bool func_269(int iParam0)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_270(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_181(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_181(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_181(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_181(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_181(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_181(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_181(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_181(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_271()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_272(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

void func_273(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x32A1E3B83D501096(iVar3)))
					{
						PERSCHAR::_0x7B204F88F6C3D287(PERSCHAR::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, false, false);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_274(float fParam0)
{
	func_503(10, fParam0);
}

bool func_275()
{
	if (func_268() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_276()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

bool func_277(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_359(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_278(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_279(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_280(var uParam0, int iParam1)
{
	int iVar0;

	if (func_317(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			HUD::_DISPLAY_HUD_COMPONENT(474191950);
			break;
		default:
			if (func_150())
			{
				if (!func_63(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_150())
	{
		func_316(uParam0, 512);
		func_504(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_505(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_506(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_151();
	func_178(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_504(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1875);
	}
	if (func_317(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_507()))
	{
		CAM::_0x798BE43C9393632B(func_507());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), func_507())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1345[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1345[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_63(uParam0, 524288) || iParam1 == 1)
	{
		func_225();
	}
	if (func_317(uParam0, 16))
	{
		if (func_508(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
		}
	}
	func_509();
	if (func_317(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
		}
	}
	func_510(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_283(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_511(Global_1835011[iParam0 /*74*/].f_1);
}

struct<4> func_284(var uParam0)
{
	return uParam0->f_440;
}

bool func_285(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !iLocal_127[iParam0])
	{
		func_512(iParam0, iParam1, iParam2);
		if (!func_513(iParam1))
		{
			return false;
		}
		func_514(iParam0, iParam2, 1);
		func_515(iParam0, iParam1, iParam2, 1);
		iLocal_127[iParam0] = 1;
		return false;
	}
	return true;
}

void func_286(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_198(iParam0, iParam1, 0);
	func_200(iParam0, iParam1);
	func_199(*iParam0, iParam1);
}

void func_287(int iParam0)
{
	switch (func_268())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 || iParam0);
			break;
	}
}

bool func_288(char* sParam0)
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
	{
		return true;
	}
	return false;
}

void func_289(int iParam0, vector3 vParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {vParam1}, 4);
	func_25(iParam0, 32768);
	func_516(&(iParam0->f_958), iParam4);
}

void func_290(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_291(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_292(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_395(uParam0[iVar1 /*3*/]))
		{
			if (func_396((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_517(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_398(uParam1[iVar1 /*5*/]))
		{
			if (func_396((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_518(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_400(uParam2[iVar1 /*3*/]))
		{
			if (func_396((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_519(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_402(uParam3[iVar1 /*3*/]))
		{
			if (func_396((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_403(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_396(uParam4->f_1, iParam12))
	{
		if (!func_404(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_405(uParam5[iVar1 /*67*/]))
		{
			if (func_396((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_520(uParam5[iVar1 /*67*/]))
				{
					if (!func_521(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_405(uParam5[iVar1 /*67*/]))
		{
			if (func_396((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_520(uParam5[iVar1 /*67*/]))
				{
					if (func_521(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_407(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!func_522(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_409(uParam6[iVar1 /*4*/]))
		{
			if (func_396((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_523(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_411(uParam7[iVar1 /*5*/]))
		{
			if (func_396((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_524(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_413(uParam8[iVar1 /*3*/]))
		{
			if (func_396((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_525(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_415(uParam9[iVar1 /*3*/]))
		{
			if (func_396((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_526(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_417(uParam10[iVar1 /*4*/]))
		{
			if (func_396((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_527(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_419(uParam11[iVar1 /*3*/]))
		{
			if (func_396((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_528(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_293(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_529(iParam0);
	return -1;
}

bool func_294(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_201(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_295(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_202(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

void func_296(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(bParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_530(bParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
		}
		return;
	}
	iVar0 = func_531(uParam0, bParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		bVar1 = func_532(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(bVar1) && bVar1 != bParam1)
		{
			func_533(uParam0, bVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_534(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = bParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_451(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_484(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_297(int iParam0, bool bParam1, char* sParam2)
{
	func_535(&(iParam0->f_958), bParam1, sParam2, 0);
}

void func_298(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(bParam1, iParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(bParam1, iParam0->f_5);
		if (ENTITY::IS_ENTITY_AN_OBJECT(bParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1), 1, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(bParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
			EVENT::_0xBB1E41DD3D3C6250(iVar0, "SpMissionTriggers", 0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				ANIMSCENE::_0x99B2A2E3655DEAF1(iVar0, "ClosestScenario");
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(bParam1, iParam0->f_6);
		}
	}
}

char* func_299()
{
	return "cutDeleteMe";
}

bool func_300(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}

void func_301(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_302(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	if (bParam1)
	{
		func_537(iParam0, 4);
		func_538(iVar0, 1);
		func_539(iVar0, 1);
	}
	else
	{
		func_540(iParam0, 4);
		func_539(iVar0, 0);
	}
}

void func_304(int* iParam0, char* sParam1)
{
	if (func_300(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_302(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_541(iParam0, 1);
}

void func_305(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		iParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
		{
			MISC::SET_BIT(&(iParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		iParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
}

void func_306(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (iVar0 == iParam1)
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
			{
				MISC::SET_BIT(uParam0[iVar0 /*17*/], 12);
			}
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
		{
			MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 12);
		}
		iVar0++;
	}
}

void func_307(int* iParam0, int iParam1)
{
	func_160(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

void func_308(int* iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
		MISC::SET_BIT(iParam0, 14);
	}
}

void func_309(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_310(var uParam0, int iParam1)
{
	uParam0->f_439 = (uParam0->f_439 || iParam1);
}

Vector3 func_311(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	vVar0 = { func_542(vParam0) };
	fVar3 = MISC::ATAN2(vVar0.y, vVar0.x);
	fVar4 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	return 0f, fVar4, fVar3;
}

int func_312(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar1 /*12*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_313(int iParam0)
{
	return Global_43884 == iParam0;
}

Vector3 func_314(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_542(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_90(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true))
				{
					return vVar0[1 /*3*/];
				}
				else
				{
					return vVar0[0 /*3*/];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + (uParam0->f_1016[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + uParam0->f_1016[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f))) };
			vVar0[0 /*3*/].f_2 = (vVar0[0 /*3*/].f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!func_90(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_315(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

bool func_317(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

bool func_318(var uParam0, int iParam1)
{
	return func_543(uParam0->f_27, iParam1);
}

bool func_319(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_320(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_320(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_321(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_544(iParam0, 32);
	func_545();
}

void func_322(int iParam0)
{
	int iVar0;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_323(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_325(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_325(iParam0);
	}
}

int func_323(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

bool func_324(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_325(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

bool func_326(int iParam0)
{
	int iVar0;

	iVar0 = func_546(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_327(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_328(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!func_270(bParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(bParam1, iParam2);
		MISC::SET_BIT(&(iParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(bParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(bParam1, iParam3);
		}
		MISC::SET_BIT(&(iParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17) && MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

float func_329(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_330(int iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
	}
}

void func_331(var uParam0, int iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	func_547(uParam0, iParam1);
	fVar0 = func_329(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		func_344(iParam1, uParam2);
		func_548(iParam1);
		func_549(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		func_550(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				func_551(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (func_352(Global_35, *uParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			func_552(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, func_329(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && func_270(iParam1->f_28, 0)) && func_162(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !func_351(iParam1->f_28, 518218985)) && !func_351(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_332(int iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (MISC::IS_BIT_SET(iParam0->f_21, 3))
		{
			func_373(iParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_19(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0f || func_553(&(iParam0->f_22), iParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (!MISC::IS_BIT_SET(iParam0->f_21, 4))
			{
				MISC::SET_BIT(&(iParam0->f_21), 4);
			}
		}
	}
}

void func_333(int* iParam0, var uParam1, var uParam2, bool bParam3, char* sParam4, float fParam5)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	fVar0 = func_329(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam2, true, false)));
	if ((fVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!func_351(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *uParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_554(iParam0, uParam1, uParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *uParam2, "ForcedILO", 0f, 0f, 0f, *uParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

bool func_334(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return true;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_351(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_555(*uParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_556(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_351(Global_35, -208384378))
	{
		if (func_557(Global_35))
		{
			iParam0->f_60 = func_459();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

bool func_335(int iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (func_471(func_470(Global_35, 0, 1, 0)) || func_471(func_470(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!func_471(func_470(Global_35, 0, 1, 0)) && !func_471(func_470(Global_35, 1, 1, 0)))
		{
			func_160(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_471(func_470(Global_35, 0, 1, 0)) || func_471(func_470(Global_35, 1, 1, 0))) && !func_351(Global_35, 716706914)) && !func_351(Global_35, 242628503))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_19(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_21(&(iParam0->f_52)) >= 1.5f;
		if ((!func_471(func_470(Global_35, 0, 1, 0)) && !func_471(func_470(Global_35, 1, 1, 0))) || bVar0)
		{
			func_160(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

void func_336(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_337(int iParam0, int iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_558(iParam0, iParam1))
		{
			if (!func_500(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_168(uParam2, 0, 0, 1, 0);
				func_559(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_500(iParam1->f_10, 1))
		{
			func_560(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_561(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_338(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_500(iParam4, 32);
		func_562(iParam1, uParam2, 0);
		iVar5 = func_563(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_168(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_500(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_500(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_500(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_500(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_500(iParam4, 8388608) || func_500(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_500(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_500(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_340(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_340(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_500(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_564(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_500(iParam4, 268435456))
			{
				iVar8 = func_565(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_566(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_340(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_500(iParam4, 2) || func_500(iParam4, 16))
			{
				func_339(*uParam0, 1, 1);
			}
			else
			{
				func_339(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_339(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_340(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_341(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_567(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_342(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_568(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_500(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_343(int iParam0)
{
	if (func_500(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_VEH_ATTACK2"), true);
	}
	if (func_500(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_500(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

int func_344(int iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"))) || func_569()) || func_570()) || func_571())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_26(&(iParam0->f_46));
	}
	if (func_18(&(iParam0->f_46)) && !func_553(&(iParam0->f_46), 0.25f))
	{
		func_572(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_345(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;

	iVar1 = func_573(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_574(Global_35)) || func_575(Global_35)) || func_576(Global_35));
	fVar12 = -1f;
	if (func_18(&(iParam1->f_13)))
	{
		fVar12 = func_48(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_300((uParam4[iVar0 /*17*/])->f_6);
		func_577(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_578(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_579(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_168(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_354(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_562(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_580(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_333(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (func_471(func_470(Global_35, 0, 1, 0)) || func_471(func_470(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_581(iParam1, fParam6, iParam1->f_9))
					{
						func_26(&(iParam1->f_18));
						if (bVar6)
						{
							func_354(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_582(iParam1, fParam2);
	}
	return bVar5;
}

void func_346(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_347(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_583(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_582(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_348(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_584(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_309(iParam1, 0);
				func_562(iParam1, uParam2, func_340(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_349(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_577(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_350(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_351(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_352(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_585(iParam0, vVar0, fParam2);
}

bool func_353(int iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_452(&uVar0))
		{
			func_19(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_586())
			{
			}
		}
		else
		{
			func_19(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_21(&(iParam0->f_37)) >= 1.5f;
		if ((!func_452(&uVar0) || func_586()) || bVar1)
		{
			if (bVar1)
			{
				func_587();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_354(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_588(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_355(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_26(&(iParam1->f_18));
			return 0;
		}
		else if (func_18(&(iParam1->f_18)))
		{
			func_160(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_18(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_589(&(iParam1->f_18), fParam2);
	return 1;
}

void func_356(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> Var1;
	struct<10> Var62;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_174(iParam0, 0);
	func_562(iParam0, uParam1, 1);
	func_168(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

void func_357(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_300(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_536(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_590(iVar0);
	*uParam0 = 0;
}

void func_358(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_359(int iParam0)
{
	return iParam0 > -1;
}

bool func_360(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	bool bVar0;

	if (!func_359(iParam1))
	{
		return false;
	}
	bVar0 = func_384(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(bVar0) || !func_270(bVar0, 0)) || (bParam3 && !func_386(iParam1)))
	{
		if (bParam2)
		{
			if (func_591(iParam1, 1) != 0)
			{
				bVar0 = func_592(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return false;
			}
		}
		else
		{
			*uParam0 = 1;
			return false;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0) && func_270(bVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_593(iParam1, bVar0);
		func_594(iParam1, bParam13, bParam14, 1);
		return bVar0;
	}
	else
	{
		*uParam0 = 0;
		return false;
	}
	return false;
}

bool func_361(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_222(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return false;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return false;
	}
	if (*uParam1)
	{
		if (func_90(uParam1->f_6))
		{
		}
	}
	bVar0 = func_595();
	if (*uParam1)
	{
		if (bVar0 && !func_596(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_597(5))
			{
				func_598(5);
				func_599(5);
				func_462(0);
				func_461(0);
			}
		}
	}
	if (func_600(Global_36) == 8)
	{
		*uParam0 = 1;
		return false;
	}
	if ((bVar0 && func_596(Global_1835011[37 /*74*/].f_1, 1)) && !func_596(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return false;
	}
	if ((bVar0 && func_596(Global_1835011[43 /*74*/].f_1, 1)) && !func_596(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_80(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_604(uParam1->f_10);
				*uParam0 = 0;
				return false;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_597(0) && func_597(1))
			{
				func_605(1, 0);
				*uParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_606())
			{
				func_607();
			}
			func_462(0);
			func_461(0);
			func_463(uParam1->f_6);
		}
	}
	if (!func_601(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_608(uParam1->f_10) == 0 || func_609(uParam1->f_10) == 0) || func_610(uParam1->f_10) == 0)
			{
				func_611(uParam1->f_10);
			}
			func_612(uParam1->f_10);
			func_613(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return false;
		}
		*uParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_80(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(bVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(bVar2, false);
			}
			if (!func_90(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(bVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(bVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bVar2, false);
			}
		}
	}
	if (func_614(uParam1->f_10))
	{
		*uParam0 = 0;
		return false;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return false;
			}
			*uParam0 = 1;
			return false;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return false;
			}
			*uParam0 = 1;
			return false;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(bVar2))
			{
				*uParam0 = 0;
				return false;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != bVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_615(uParam1->f_10) };
			Var10 = { func_616() };
			func_617(bVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, bVar2);
			PED::SET_PED_CONFIG_FLAG(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return bVar2;
	}
	if (!func_324(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar2, true, true);
		func_618(uParam1->f_10);
		if (uParam1->f_2 && !func_90(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(bVar2, false);
			PHYSICS::_0x0348469DAA17576C(bVar2);
			ENTITY::SET_ENTITY_COORDS(bVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(bVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bVar2, false);
		}
		*uParam0 = 2;
		return bVar2;
	}
	func_322(uParam1->f_10);
	if (func_324(uParam1->f_10))
	{
		iVar16 = func_323(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return false;
		}
	}
	*uParam0 = 2;
	return bVar2;
}

bool func_362(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_5);
}

int func_363(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_364(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_359(iParam0))
		{
			return false;
		}
	}
	func_619(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_365(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_359(iParam0))
		{
			return;
		}
	}
	func_619(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_366(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_114(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_364(iParam0, 2, 1))
			{
				func_387(iParam0, 2, 1);
			}
			if (func_277(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_365(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_394(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_270(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_270(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_620(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_365(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_621(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_365(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_621(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_364(iParam0, 44, 0))
			{
				func_365(iParam0, 44, 0);
			}
			if (func_622(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_621(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_387(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], GET_HASH_KEY("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_623(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_369(iParam0, 0, 0, 1);
			}
			func_387(iParam0, 33, 1);
			func_387(iParam0, 34, 1);
			func_387(iParam0, 29, 1);
			if (!func_90(vVar0) && bParam7)
			{
				func_621(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_621(iParam0, 4);
			}
			else
			{
				func_621(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_620(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_175(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_621(iParam0, 4);
			}
			else
			{
				func_621(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_624(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_514(iParam0, iParam13, 0);
						func_515(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_364(iParam0, 25, 0))
						{
							func_387(iParam0, 25, 0);
						}
						func_365(iParam0, 66, 0);
						func_621(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_621(iParam0, 5);
				}
				func_365(iParam0, 28, 1);
			}
			else
			{
				func_621(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_621(iParam0, 6);
			}
			break;
		case 6:
			if (func_270(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_625(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_626(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_621(iParam0, 7);
		case 7:
			func_623(iParam0, bParam9, bParam15, 0);
			func_627(iParam0, 4, bParam11);
			func_628(iParam0);
			if (bParam20)
			{
				if (func_629(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_630(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_621(iParam0, 0);
			func_631(iParam0, 16, 1);
			func_387(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_367(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_7))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_7);
	}
}

void func_368(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
	}
	if (bParam2 && (!func_179() || !ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Global_43800, func_226(bParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(bParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(bParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(bParam0, GET_HASH_KEY("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, GET_HASH_KEY("REL_GANG_DUTCHS"));
	ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	if (bParam3)
	{
		func_629(bParam0);
	}
}

void func_369(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_632(iParam0, bParam3);
	}
	else
	{
		func_633(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_634(iParam0, bParam3);
	}
	else
	{
		func_635(iParam0, bParam3);
	}
}

void func_370(int iParam0)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	bVar0 = func_269(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(bVar0, 0, 0f);
}

int func_371(int iParam0, bool bParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_60) || !func_270(*bParam1, 0))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (func_90(iParam0->f_57))
	{
		func_636(iParam0, bParam1);
	}
	func_556(iParam0->f_60, iParam0->f_57);
	iParam0->f_57 = { 0f, 0f, 0f };
	iParam0->f_60 = 0;
	return 0;
}

void func_372(int iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_160(&(iParam0->f_18));
	if (bParam1)
	{
		iParam0->f_21 = 0;
		iParam0->f_25 = 0f;
		iParam0->f_26 = 30f;
		iParam0->f_27 = 1.25f;
		iParam0->f_29 = 10f;
		iParam0->f_30 = 50f;
		iParam0->f_31 = 30f;
		iParam0->f_32 = 21f;
		iParam0->f_33 = 20f;
		iParam0->f_34 = 5f;
		iParam0->f_28 = 0;
		iParam0->f_60 = 0;
		iParam0->f_57 = { 0f, 0f, 0f };
		iParam0->f_55 = 0;
		func_160(&(iParam0->f_22));
		func_160(&(iParam0->f_37));
		func_160(&(iParam0->f_40));
		func_160(&(iParam0->f_43));
		func_160(&(iParam0->f_49));
		func_160(&(iParam0->f_52));
		func_376(iParam0);
		func_377(iParam0);
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_56));
		}
	}
}

void func_373(int iParam0, bool bParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (bParam1)
		{
			CAM::_0xC64ABC0676AF262B();
		}
		else
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 3);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 4))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 4);
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_374(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(iParam0->f_21), 5);
	}
	func_637();
}

void func_375(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_270(bParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			iVar0 = iParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(bParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(bParam1, iVar0);
	}
	if (iParam0->f_55 != 0)
	{
		iParam0->f_55 = 0;
	}
}

void func_376(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 2) && VOLUME::DOES_VOLUME_EXIST(iParam0->f_35))
	{
		func_638(iParam0->f_35);
		func_180(iParam0->f_35);
		MISC::CLEAR_BIT(&(iParam0->f_21), 2);
	}
}

void func_377(int iParam0)
{
	func_180(iParam0->f_36);
}

bool func_378(var uParam0)
{
	return uParam0;
}

bool func_379(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_380(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(bParam0, GET_HASH_KEY("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

struct<8> func_381(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, func_530(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = func_639(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_382(var uParam0, int iParam1)
{
	return (uParam0->f_9 && iParam1) != 0;
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (func_74(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43837 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]))
		{
			Global_43806[iVar0 /*6*/] = iParam0;
			Global_43806[iVar0 /*6*/].f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_43806[iVar0 /*6*/].f_3 = iParam1;
			Global_43806[iVar0 /*6*/].f_4 = iParam2;
			Global_43806[iVar0 /*6*/].f_5 = iParam3;
			Global_43837++;
			return;
		}
		iVar0++;
	}
}

bool func_384(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

bool func_385(int iParam0)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_386(int iParam0)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_387(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_359(iParam0))
		{
			return;
		}
	}
	func_619(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_388(int iParam0, int iParam1, bool bParam2)
{
	if (!func_359(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = (Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1);
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = (Global_1360165[iParam0 /*1157*/].f_70.f_1 - (Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1));
	}
}

int func_389(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_359(iParam0))
	{
		return 0;
	}
	bVar0 = func_384(iParam0);
	if (func_270(bVar0, 0))
	{
		if (func_270(PED::_GET_RIDER_OF_MOUNT(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_385(iParam0)) || func_386(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_640(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000f))
			{
				iVar1 = func_591(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_641(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_642(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_642(iParam0, 0));
					func_643(iParam0);
				}
			}
			else
			{
				if (func_277(iParam0, 32768, 1))
				{
					iVar2 = func_642(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_270(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_277(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_641(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_642(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_642(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_641(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_644(iParam0, 0);
	return 1;
}

void func_390(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_90(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_645(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_391(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_IN_GROUP(bParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(bParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(bParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
	}
}

void func_392(int iParam0, bool bParam1, char* sParam2)
{
	func_646(&(iParam0->f_428), bParam1, sParam2);
}

bool func_393(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_394(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_365(iParam0, 56, 1);
		func_19(&(Global_1359489.f_40), 1);
	}
	func_647(iParam0, 0);
	func_627(iParam0, 4, 0);
	func_648(iParam0);
	func_628(iParam0);
	func_387(iParam0, 37, 1);
	bVar0 = func_270(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_649(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_364(iParam0, 64, 1))
	{
		func_387(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_387(iParam0, 33, 1);
		func_387(iParam0, 34, 1);
		func_650(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_623(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_365(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_365(iParam0, 35, 1);
			if (bParam8)
			{
				func_365(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_651(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], GET_HASH_KEY("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_387(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_365(iParam0, 33, 1);
		func_623(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_19(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_160(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_365(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_652(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_364(iParam0, 45, 1))
	{
		func_387(iParam0, 45, 1);
	}
	func_653(iParam0, 16, 1);
	func_387(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_270(func_384(iParam0), 0))
		{
			func_182(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_395(var uParam0)
{
	return *uParam0 != 0;
}

bool func_396(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_654(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_397(var uParam0)
{
	if (!func_655(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_656(&(uParam0->f_1), 1);
	}
}

bool func_398(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_399(var uParam0)
{
	if (!func_655(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_656(&(uParam0->f_3), 1);
	}
}

bool func_400(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_401(var uParam0)
{
	if (!func_655(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_656(&(uParam0->f_1), 1);
	}
}

bool func_402(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

bool func_403(var uParam0)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_657(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_404(var uParam0)
{
	if (func_655(*uParam0, 2))
	{
		return true;
	}
	if (!func_655(*uParam0, 1))
	{
		func_658(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_656(uParam0, 2);
		return true;
	}
	return false;
}

bool func_405(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_406(var uParam0)
{
	char* sVar0;

	if (!func_655(uParam0->f_2, 1))
	{
		if (func_520(uParam0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				sVar0 = func_438(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_zero") && func_275())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_three") && func_659())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_656(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_407(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_408(var uParam0, int iParam1)
{
	if (!func_655(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
		{
			return;
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam1, *uParam0);
		func_656(&(uParam0->f_1), 1);
	}
}

bool func_409(var uParam0)
{
	return *uParam0 != 0;
}

void func_410(var uParam0)
{
	if (!func_655(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROP_SET(*uParam0);
		func_656(&(uParam0->f_2), 1);
	}
}

bool func_411(var uParam0)
{
	return *uParam0 != 0;
}

void func_412(var uParam0)
{
	if (!func_655(uParam0->f_3, 1))
	{
		WEAPON::_REQUEST_WEAPON_ASSET(*uParam0, uParam0->f_1, uParam0->f_2);
		func_656(&(uParam0->f_3), 1);
	}
}

bool func_413(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_414(var uParam0)
{
	if (!func_655(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_656(&(uParam0->f_1), 1);
	}
}

bool func_415(var uParam0)
{
	return func_660(*uParam0);
}

void func_416(var uParam0)
{
	if (!func_655(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_IPL_HASH(*uParam0);
		func_656(&(uParam0->f_1), 1);
	}
}

bool func_417(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_418(var uParam0)
{
	if (!func_655(uParam0->f_2, 1))
	{
		AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2);
		func_656(&(uParam0->f_2), 1);
	}
}

bool func_419(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_420(var uParam0)
{
	if (!func_655(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(*uParam0);
		func_656(&(uParam0->f_1), 1);
	}
}

int func_421(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_498[iParam0 /*2*/];
}

int func_422(int iParam0)
{
	return iParam0 & 31;
}

int func_423(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

struct<8> func_424(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_425()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_426(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_427(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

var func_428(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	func_661(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_429(int iParam0)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0, Global_1393237.f_11[iVar0 /*30*/].f_3))
		{
			func_662(iVar0, 4096, 0);
			func_662(iVar0, 131072, 0);
			func_663(iVar0, 1);
		}
		iVar0++;
	}
}

int func_430(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = func_664(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_431(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_665(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			if (!func_666(uParam0, sParam1) || func_83(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_462[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_96(uParam0, 4194304);
					}
				}
				else
				{
					func_96(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_432(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_667(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_667(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_668(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_473(8);
}

void func_433(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> func_434()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_435(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_436(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

bool func_437(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PLAYER_ZERO"):
			return "Arthur";
		case GET_HASH_KEY("CS_ABE"):
			return "Abe";
		case GET_HASH_KEY("CS_EDMUNDLOWRY"):
			return "EdmundLowry";
		case GET_HASH_KEY("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case GET_HASH_KEY("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case GET_HASH_KEY("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case GET_HASH_KEY("CS_ALBERTMASON"):
			return "AlbertMason";
		case GET_HASH_KEY("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case GET_HASH_KEY("CS_BAPTISTE"):
			return "Baptiste";
		case GET_HASH_KEY("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case GET_HASH_KEY("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case GET_HASH_KEY("CS_BEAUGRAY"):
			return "BeauGray";
		case GET_HASH_KEY("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case GET_HASH_KEY("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case GET_HASH_KEY("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case GET_HASH_KEY("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case GET_HASH_KEY("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case GET_HASH_KEY("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case GET_HASH_KEY("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case GET_HASH_KEY("CS_CLEET"):
			return "Cleet";
		case GET_HASH_KEY("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case GET_HASH_KEY("CS_CREOLEGUY"):
			return "CreoleGuy";
		case GET_HASH_KEY("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case GET_HASH_KEY("CS_DALEMARONEY"):
			return "DaleMaroney";
		case GET_HASH_KEY("CS_DUTCH"):
			return "Dutch";
		case GET_HASH_KEY("CS_EDITHDOWN"):
			return "EdithDown";
		case GET_HASH_KEY("CS_FUSSAR"):
			return "Fussar";
		case GET_HASH_KEY("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case GET_HASH_KEY("CS_BRONTE"):
			return "Bronte";
		case GET_HASH_KEY("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case GET_HASH_KEY("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case GET_HASH_KEY("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case GET_HASH_KEY("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case GET_HASH_KEY("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case GET_HASH_KEY("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case GET_HASH_KEY("CS_LEON"):
			return "Leon";
		case GET_HASH_KEY("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case GET_HASH_KEY("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case GET_HASH_KEY("CS_JACKMARSTON"):
			return "JackMarston";
		case GET_HASH_KEY("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case GET_HASH_KEY("CS_JAMIE"):
			return "Jamie";
		case GET_HASH_KEY("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case GET_HASH_KEY("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case GET_HASH_KEY("CS_JOE"):
			return "Joe";
		case GET_HASH_KEY("CS_JOHNMARSTON"):
			return "JohnMarston";
		case GET_HASH_KEY("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case GET_HASH_KEY("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case GET_HASH_KEY("CS_KAREN"):
			return "Karen";
		case GET_HASH_KEY("CS_MRSADLER"):
			return "MrsAdler";
		case GET_HASH_KEY("CS_KIERAN"):
			return "Kieran";
		case GET_HASH_KEY("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case GET_HASH_KEY("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case GET_HASH_KEY("CS_MARYBETH"):
			return "MaryBeth";
		case GET_HASH_KEY("CS_MARYLINTON"):
			return "MaryLinton";
		case GET_HASH_KEY("CS_MICAHBELL"):
			return "MicahBell";
		case GET_HASH_KEY("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case GET_HASH_KEY("CS_MRLINTON"):
			return "CS_MrLinton";
		case GET_HASH_KEY("CS_MRPEARSON"):
			return "MrPearson";
		case GET_HASH_KEY("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case GET_HASH_KEY("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case GET_HASH_KEY("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case GET_HASH_KEY("CS_REVSWANSON"):
			return "RevSwanson";
		case GET_HASH_KEY("CS_SAMARITAN"):
			return "CS_Samaritan";
		case GET_HASH_KEY("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case GET_HASH_KEY("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case GET_HASH_KEY("CS_STRSHERIFF_01"):
		case GET_HASH_KEY("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case GET_HASH_KEY("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case GET_HASH_KEY("CS_TAVISHGRAY"):
			return "TavishGray";
		case GET_HASH_KEY("CS_THEODORELEVIN"):
			return "TheodoreLevin";
		case GET_HASH_KEY("CS_THOMASDOWN"):
			return "ThomasDown";
		case GET_HASH_KEY("CS_TILLY"):
			return "Tilly";
		case GET_HASH_KEY("CS_UNCLE"):
			return "Uncle";
		case GET_HASH_KEY("G_M_M_UNICRIMINALS_01"):
			return "G_M_M_UniCriminals_01";
		case GET_HASH_KEY("G_M_M_UNIDUSTER_01"):
			return "G_M_M_UNIDUSTER_01";
		case GET_HASH_KEY("CS_VALSHERIFF"):
			return "CS_VALSHERIFF";
		case GET_HASH_KEY("S_M_M_MARSHALLSRURAL_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case GET_HASH_KEY("U_M_O_VHTEXOTICSHOPKEEPER_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case GET_HASH_KEY("CS_SEAN"):
			return "Sean";
		case GET_HASH_KEY("CS_LENNY"):
			return "Lenny";
		case GET_HASH_KEY("CS_HERCULE"):
			return "Hercule";
		case GET_HASH_KEY("CS_CREOLECAPTAIN"):
			return "CreoleCaptain";
		case GET_HASH_KEY("U_M_M_CREOLECAPTAIN_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case GET_HASH_KEY("CS_RINGMASTER"):
			return "RingMaster";
		case GET_HASH_KEY("U_M_M_VALBARTENDER_01"):
			return "U_M_M_VALBARTENDER_01";
		case GET_HASH_KEY("A_M_M_EMRFARMHAND_01"):
			return "A_M_M_EMRFARMHAND_01";
		case GET_HASH_KEY("A_M_M_GRISURVIVALIST_01"):
			return "A_M_M_GriSurvivalist_01";
		case GET_HASH_KEY("CS_LILLYMILLET"):
			return "LillyMillet";
		case GET_HASH_KEY("A_F_M_STRTOWNFOLK_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case GET_HASH_KEY("A_M_M_STRTOWNFOLK_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case GET_HASH_KEY("S_M_M_STRLUMBERJACK_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case GET_HASH_KEY("G_M_M_UNICRIMINALS_02"):
			return "G_M_M_UniCriminals_02";
		case GET_HASH_KEY("G_M_M_UNICORNWALLGOONS_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case GET_HASH_KEY("A_M_M_NBXUPPERCLASS_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case GET_HASH_KEY("A_F_M_NBXUPPERCLASS_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case GET_HASH_KEY("A_M_M_VALFARMER_01"):
			return "A_M_M_VALFARMER_01";
		case GET_HASH_KEY("A_M_M_VALTOWNFOLK_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case GET_HASH_KEY("A_M_M_VALTOWNFOLK_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case GET_HASH_KEY("A_F_M_VALTOWNFOLK_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case GET_HASH_KEY("U_M_M_NBXBARTENDER_01"):
			return "U_M_M_NBXBARTENDER_01";
		case GET_HASH_KEY("CS_NBXEXECUTED"):
			return "NBXExecuted";
		case GET_HASH_KEY("CS_RHODEPUTY_01"):
			return "RHODEPUTY_01";
		case GET_HASH_KEY("U_M_M_RHDSHERIFF_01"):
			return "RHDSHERIFF_01";
		case GET_HASH_KEY("CS_LEIGHGRAY"):
			return "LeighGray";
		case GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return "Horse_01";
		case GET_HASH_KEY("U_M_M_STRGENSTOREOWNER_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case GET_HASH_KEY("CS_TOMDICKENS"):
			return "TomDickens";
		case GET_HASH_KEY("CS_DAVIDGEDDES"):
			return "DavidGeddes";
		case GET_HASH_KEY("CS_ANSEL_ATHERTON"):
			return "ANSEL_ATHERTON";
		case GET_HASH_KEY("CS_WROBEL"):
			return "CS_Wrobel";
		case GET_HASH_KEY("A_C_COW"):
			return "COW";
		case GET_HASH_KEY("A_C_BULL_01"):
			return "BULL";
		case GET_HASH_KEY("CS_ALBERTCAKEESQUIRE"):
			return "ALBERTCAKEESQUIRE";
		case GET_HASH_KEY("U_M_O_BLWGENERALSTOREOWNER_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case GET_HASH_KEY("A_C_DOGCATAHOULACUR_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case GET_HASH_KEY("A_C_DOGRUFUS_01"):
			return "A_C_DOGRUFUS_01";
		case GET_HASH_KEY("A_C_DOGLION_01"):
			return "A_C_DOGLION_01";
		case GET_HASH_KEY("CS_TIGERHANDLER"):
			return "Handler";
		case GET_HASH_KEY("CS_VALAUCTIONBOSS_01"):
			return "VALAUCTIONBOSS_01";
		case GET_HASH_KEY("CS_NBXRECEPTIONIST_01"):
			return "NbxReceptionist_01";
		case GET_HASH_KEY("U_M_M_BIVFOREMAN_01"):
			return "U_M_M_BiVForeman_01";
		case GET_HASH_KEY("U_M_M_RACFOREMAN_01"):
			return "U_M_M_RACFOREMAN_01";
		case GET_HASH_KEY("CS_CHAINPRISONER_01"):
			return "CHAINPRISONER_01";
		case GET_HASH_KEY("CS_CHAINPRISONER_02"):
			return "CHAINPRISONER_02";
		case GET_HASH_KEY("U_M_M_VALPOKERPLAYER_01"):
			return "U_M_M_ValPokerPlayer_01";
		case GET_HASH_KEY("U_M_M_VALPOKERPLAYER_02"):
			return "U_M_M_ValPokerPlayer_02";
		case GET_HASH_KEY("CS_DUNCANGEDDES"):
			return "DUNCANGEDDES";
		case GET_HASH_KEY("CS_ANGUSGEDDES"):
			return "ANGUSGEDDES";
		case GET_HASH_KEY("CS_EVELYNMILLER"):
			return "EvelynMiller";
		case GET_HASH_KEY("CS_SISTERCALDERON"):
			return "SISTERCALDERON";
		case GET_HASH_KEY("CS_EDGARROSS"):
			return "EDGARROSS";
		case GET_HASH_KEY("CS_WINTONHOLMES"):
			return "U_M_M_GriSurvivalist_01";
		case GET_HASH_KEY("U_F_M_RKSHOMESTEADTENANT_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case GET_HASH_KEY("CS_ROCKYSEVEN_WIDOW"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case GET_HASH_KEY("U_M_M_BHT_STRAWBERRYDUEL"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case GET_HASH_KEY("U_M_M_RHDTRAINSTATIONWORKER_01"):
			return "StationWorker";
		case GET_HASH_KEY("CS_LEVISIMON"):
			return "LEVISIMON";
		case GET_HASH_KEY("S_M_M_FUSSARHENCHMAN_01"):
			return "S_M_M_GULFUSSARS_01";
		case GET_HASH_KEY("A_C_DONKEY_01"):
			return "A_C_DONKEY_01";
		case GET_HASH_KEY("A_M_M_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_01";
		case GET_HASH_KEY("A_M_O_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_02";
		case GET_HASH_KEY("U_M_O_VALBARTENDER_01"):
			return "U_M_O_ValBartender_01";
		case GET_HASH_KEY("U_M_M_NBXBARTENDER_02"):
			return "U_M_M_NBXBARTENDER_02";
		case GET_HASH_KEY("CS_UNIDUSTERJAIL_01"):
			return "CS_UNIDUSTERJAIL_01";
		case GET_HASH_KEY("A_M_M_RHDTOWNFOLK_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case GET_HASH_KEY("U_M_M_UNIBOUNTYHUNTER_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case GET_HASH_KEY("U_M_M_UNIBOUNTYHUNTER_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case GET_HASH_KEY("CS_BROTHERDORKINS"):
			return "BrotherDorkins";
		case GET_HASH_KEY("G_M_M_UNIBRAITHWAITES_01"):
			return "G_M_M_UniBraithwaites_01";
		case GET_HASH_KEY("A_M_M_GAMHIGHSOCIETY_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case GET_HASH_KEY("U_M_M_STRFREIGHTSTATIONOWNER_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case GET_HASH_KEY("CS_EAGLEFLIES"):
			return "EagleFlies";
		case GET_HASH_KEY("CS_RAINSFALL"):
			return "CS_RAINSFALL";
		case GET_HASH_KEY("A_M_M_WAPWARRIORS_01"):
			return "A_M_M_WapWarriors_01";
		case GET_HASH_KEY("A_M_Y_NBXSTREETKIDS_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case GET_HASH_KEY("U_M_M_BHT_SHACKESCAPE"):
			return "U_M_M_BHT_SHACKESCAPE";
		case GET_HASH_KEY("A_M_M_HTLROUGHTRAVELLERS_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case GET_HASH_KEY("CS_LEMIUXASSISTANT"):
			return "LemiuxAssistant";
		case GET_HASH_KEY("P_KEYS01X"):
			return "p_keys01x";
		case GET_HASH_KEY("CS_BALLOONOPERATOR"):
			return "CS_BALLOONOPERATOR";
		case GET_HASH_KEY("A_M_M_BIVWORKER_01"):
			return "Worker1";
		case GET_HASH_KEY("U_M_M_BHT_MINEFOREMAN"):
			return "U_M_M_BHT_MINEFOREMAN";
		case GET_HASH_KEY("A_M_M_NBXSLUMS_01"):
			return "A_M_M_NbxSlums_01";
		case GET_HASH_KEY("CS_SDPRIEST"):
			return "U_M_M_NBXPRIEST_01";
		case GET_HASH_KEY("A_C_BEAR_01"):
			return "A_C_BEAR_01";
		case GET_HASH_KEY("CS_MARSHALL_THURWELL"):
			return "MARSHALL_THURWELL";
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case GET_HASH_KEY("CS_SD_STREETKID_01"):
			return "cs_sd_streetkid_01";
		case GET_HASH_KEY("CS_SD_STREETKID_02"):
			return "cs_sd_streetkid_02";
		case GET_HASH_KEY("CS_OBEDIAHHINTON"):
			return "ObediahHinton";
		case GET_HASH_KEY("CS_POISONWELLSHAMAN"):
			return "PoisonWellShaman";
		case GET_HASH_KEY("CS_COOPER"):
			return "A_M_M_EMRFARMHAND_01";
		case GET_HASH_KEY("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return "u_m_m_bht_benedictallbright";
		case GET_HASH_KEY("CS_JULES"):
			return "Jules";
		case GET_HASH_KEY("CS_MRDEVON"):
			return "MRDEVON";
		case GET_HASH_KEY("CS_MRWAYNE"):
			return "MRWAYNE";
		case GET_HASH_KEY("CS_PAYTAH"):
			return "PAYTAH";
		case GET_HASH_KEY("CS_VALDEPUTY_01"):
			return "CS_VALDEPUTY_01";
		case GET_HASH_KEY("MES_SADIE5_MALES_01"):
			return "MES_SADIE5_MALES_01^1";
		case GET_HASH_KEY("A_M_M_NBXDOCKWORKERS_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case GET_HASH_KEY("U_M_M_VALSHERIFF_01"):
			return "U_M_M_VALSHERIFF_01";
		case GET_HASH_KEY("S_M_M_BANKCLERK_01"):
			return "S_M_M_BANKCLERK_01";
		case GET_HASH_KEY("U_M_M_NBXBRONTEASC_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case GET_HASH_KEY("P_C_HORSE_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_439(int iParam0)
{
	return iParam0 != 0;
}

bool func_440(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_441(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_440(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_669(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_442(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	func_538(iVar0, bParam1);
}

void func_443(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

float func_444(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return 0f;
	}
	iVar0 = func_536(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_445(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	iVar0 = func_536(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_446(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_214(uParam0) };
	Var8 = { func_194(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_447(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_670(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_448(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_214(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, sParam1);
	}
}

void func_449(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_450(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

void func_451(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

bool func_452(int iParam0)
{
	if (-1829635046 == func_671(81053684))
	{
		if (func_672(iParam0))
		{
			return true;
		}
	}
	else if (func_673(-525676072, iParam0))
	{
		if (func_672(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_453(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_454(int iParam0)
{
	struct<2> Var0;

	if (!func_453(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_455(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_456(int iParam0)
{
	int iVar0;

	if (func_268() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHARGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_457(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_471(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_674(1);
	}
}

void func_458()
{
	int iVar0;

	iVar0 = func_470(Global_35, 9, 1, 0);
	if (func_471(iVar0))
	{
		return;
	}
	iVar0 = func_470(Global_35, 7, 1, 0);
	if (func_471(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_470(Global_35, 0, 1, 0);
	if (func_471(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_470(Global_35, 1, 1, 0);
	if (func_471(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_470(Global_35, 18, 1, 0);
	if (func_471(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_675();
	if (func_471(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_676(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_677(6291456, 0);
	if (func_471(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_676(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_459()
{
	return Global_1900383.f_393;
}

int func_460(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_435(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_461(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_462(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_463(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_464()
{
	return Global_1899515;
}

void func_465(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_466()
{
	return (func_678() || func_679());
}

Vector3 func_467(var uParam0)
{
	return uParam0->f_505;
}

float func_468(var uParam0)
{
	return uParam0->f_508;
}

float func_469(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_470(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_471(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

bool func_472(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_473(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_474(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_479(iParam1, 1);
	if (!bParam2 && iVar2 == GET_HASH_KEY("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_680(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_475(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_476(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_488(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_477(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_478(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_476(1108822547, 6))
	{
		if (bParam2)
		{
			func_474(bParam0, iVar0, func_268() != -1, 0, 0);
			func_480(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_481(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

int func_479(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_EYES");
		case 3:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_480(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_488(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_488(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_481(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_488(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_488(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_488(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_482(var uParam0)
{
	struct<8> Var0;

	uParam0->f_454 = { Var0 };
}

void func_483(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_462[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_484(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_485()
{
	Global_1911774 = 1;
}

struct<5> func_486(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_681(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_682(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_495(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_683(bParam1) };
			if (bParam2 && func_684(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_685(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_685(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_686(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case GET_HASH_KEY("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case GET_HASH_KEY("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_687(bParam1) };
			switch (func_454(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case GET_HASH_KEY("UPGRADE"):
			if (func_688(iParam0, -1823706425))
			{
				Var0 = { func_495(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_688(iParam0, -1483207246))
			{
				Var0 = { func_495(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_689(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_487(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_479(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_488(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case GET_HASH_KEY("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_489(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_690();
	if (iParam2 == 39)
	{
		Var0 = { func_486(iParam0, 1, 0) };
		iParam2 = func_488(func_487(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_691(iParam0, 866047851) && func_692(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_475(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_693(func_479(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_694(iParam2);
	func_695(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_696(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_696(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_697(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_698(iParam0, iParam2, iParam1, func_268() != -1);
	if (bParam4)
	{
		func_699(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_699(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_481(func_479(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_490(bool bParam0, bool bParam1, bool bParam2)
{
	func_700(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_491(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_473(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_701(Var0);
}

void func_492()
{
	func_702(&(Global_1946804.f_2776));
	func_703(32768);
	func_481(1108822547, 8, 6);
}

int func_493(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_488(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/] || Global_1946804.f_1378.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_494(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_432(Var0);
}

struct<4> func_495(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_453(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_497(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_496(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_453(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_495(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_497(bParam6), &Var0, 0);
	return uVar4;
}

int func_497(bool bParam0)
{
	if (func_268() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_498(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(bParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 0f);
	if (func_351(bParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_499(bool bParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	return func_704(vVar0, vVar3, vParam1);
}

bool func_500(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_501(bool bParam0, int iParam1)
{
	float fVar0;

	if (!func_351(bParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(bParam0, 1041577989);
	if (func_181(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_181(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_181(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_502(var uParam0, int iParam1)
{
	func_705(uParam0, iParam1);
}

void func_503(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_706(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_707(1, bVar1, 1, sVar2);
		func_708(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_709(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_710();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_709(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_709(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_504(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

bool func_505(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_506(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_507()
{
	return "default_leadin_camera";
}

int func_508(var uParam0)
{
	return *uParam0;
}

void func_509()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(GET_HASH_KEY("BANDANA"));
	STREAMING::REMOVE_ANIM_DICT(func_711(1));
}

void func_510(var uParam0)
{
	func_712(&(uParam0->f_1904));
}

bool func_511(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_713(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_512(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!func_714(iParam2))
	{
		return 0;
	}
	iVar0 = func_715(iParam2, -1);
	if (!func_716(iParam1, iVar0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(iParam1, "metaped_outfit_request_name"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			func_717(iParam0, iParam1);
		}
	}
	iVar2 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(iParam1), iVar0);
	DECORATOR::DECOR_SET_INT(iParam1, "metaped_outfit_request", iVar2);
	DECORATOR::DECOR_SET_INT(iParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

bool func_513(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return true;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_716(iParam0, iVar0))
	{
		return true;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_514(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_624(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_365(iParam0, 25, 1);
	}
}

void func_515(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_714(iParam2))
		{
			iVar0 = func_715(iParam2, -1);
			if (func_716(iParam1, iVar0))
			{
				if (func_718(iParam1, iVar0))
				{
					if (func_719(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_720(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		func_721(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_365(iParam0, 66, 0);
		}
	}
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_517(var uParam0)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_397(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_518(var uParam0)
{
	if (func_655(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_3, 1))
	{
		func_399(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_656(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_656(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_519(var uParam0)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_401(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_520(var uParam0)
{
	vector3 vVar0;
	var uVar3;

	if (func_655(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
	{
		ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1, &vVar0, &uVar3, 2);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_521(var uParam0)
{
	if (func_655(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_2, 1))
	{
		func_406(uParam0);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		func_656(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_522(var uParam0, int iParam1)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
	{
		return false;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_408(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, *uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_523(var uParam0)
{
	if (func_655(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_2, 1))
	{
		func_410(uParam0);
	}
	if (PROPSET::_HAS_PROP_SET_LOADED(*uParam0))
	{
		func_656(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_524(var uParam0)
{
	if (func_655(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_3, 1))
	{
		func_412(uParam0);
	}
	if (WEAPON::_HAS_WEAPON_ASSET_LOADED(*uParam0))
	{
		func_656(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_525(var uParam0)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_414(uParam0);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_526(var uParam0)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_416(uParam0);
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(*uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_527(var uParam0)
{
	if (func_655(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_2, 1))
	{
		func_418(uParam0);
	}
	if (AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2))
	{
		func_656(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_528(var uParam0)
{
	if (func_655(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_655(uParam0->f_1, 1))
	{
		func_420(uParam0);
	}
	if (STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		func_656(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_529(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

char* func_530(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return func_226(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		return func_722(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		return func_723(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	return "";
}

int func_531(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_532(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_533(var uParam0, bool bParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (uParam0->f_13[iVar12 /*12*/] == bParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_534(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_535(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	func_724(uParam0);
	iVar0 = func_725(uParam0, bParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_530(bParam1);
		}
		iVar0 = func_726(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_727(uParam0);
		}
		else
		{
			Var1.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_727(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = bParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(bParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
	{
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	func_728(uParam0, 2);
}

int func_536(int iParam0)
{
	return iParam0;
}

void func_537(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_538(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_440(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_539(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_540(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

void func_541(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

Vector3 func_542(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_543(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_544(int iParam0, int iParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 - (Global_1900383[iParam0 /*45*/].f_24 && iParam1));
}

void func_545()
{
	if (func_601(0))
	{
		func_729(0);
	}
	if (func_601(1))
	{
		func_729(1);
	}
	if (func_601(5))
	{
		func_729(5);
	}
	if (func_601(6))
	{
		func_730(6);
	}
}

int func_546(int iParam0)
{
	if (!func_191(iParam0))
	{
		return -1;
	}
	return func_713(iParam0);
}

void func_547(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(*iParam1, 21))
	{
		func_377(iParam1);
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam1->f_36) || !func_270(*uParam0, 0))
	{
		return;
	}
	iParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(iParam1->f_36, 1);
}

int func_548(int iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 8))
	{
		return 1;
	}
	func_731(64);
	if (MISC::IS_BIT_SET(iParam0->f_21, 14))
	{
		if (func_471(func_470(Global_35, 0, 1, 0)) && func_470(Global_35, 0, 1, 0) == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 14);
			MISC::CLEAR_BIT(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		if (((func_471(func_470(Global_35, 0, 1, 0)) && func_470(Global_35, 0, 1, 0) == GET_HASH_KEY("WEAPON_KIT_CAMERA")) && !func_351(Global_35, 716706914)) && !func_351(Global_35, 242628503))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_19(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = func_21(&(iParam0->f_49)) >= 1.5f;
		if (!func_471(func_470(Global_35, 0, 1, 0)) || bVar0)
		{
			func_237(0);
			func_160(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_549(int iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"), false);
	if (MISC::IS_BIT_SET(iParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 12);
			MISC::CLEAR_BIT(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		if (Global_1357517)
		{
			Global_1357516 = 0;
		}
		func_19(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = func_21(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			func_160(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_550(bool bParam0)
{
	if (bParam0)
	{
		func_732(4);
	}
	func_732(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_551(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1, iParam2, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1, iParam2, 0, -1, -1, 2);
}

void func_552(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return;
	}
	if (func_435(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	fVar3 = func_208(bParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_733() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_734(bParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_734(bParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_553(var uParam0, float fParam1)
{
	if (!func_18(uParam0))
	{
		return false;
	}
	if (func_48(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_554(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*uParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!func_300((uParam1[iVar1 /*17*/])->f_6) || func_735((uParam1[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(func_735((uParam1[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

Vector3 func_555(int iParam0, int iParam1, float fParam2)
{
	return func_736(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam2);
}

void func_556(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

bool func_557(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_737(iVar9);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar7);
				if (iVar8 == GET_HASH_KEY("CARRIABLE_SADDLE") || iVar8 == GET_HASH_KEY("CARRIABLE_SADDLE_BUNDLE"))
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

bool func_558(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_738((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_559(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_560(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_583(uParam0[iVar0 /*17*/]))
		{
			func_739(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_561(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_562(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_357(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_372(iParam0, 0);
		}
	}
}

int func_563(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_740(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_300((uParam2[iVar0 /*17*/])->f_6))
		{
			func_739(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_564(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_741(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_565(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_566(int* iParam0, int* iParam1)
{
	if (!func_340(iParam0, 23))
	{
		if (iParam1->f_7 == GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_739(iParam1, 19);
			func_309(iParam0, 23);
			func_742(iParam1, 2);
		}
	}
}

bool func_567(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_743(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_744(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_568(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_740(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_569()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_570()
{
	return Global_1935689.f_1;
}

bool func_571()
{
	return Global_1357517;
}

void func_572(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_739(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

int func_573(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_574(int iParam0)
{
	return (func_745(iParam0, 4) || func_745(iParam0, 5));
}

int func_575(int iParam0)
{
	return func_745(iParam0, 7);
}

int func_576(int iParam0)
{
	return func_745(iParam0, 6);
}

void func_577(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_583(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_740(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_578(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_746(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_228(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_303(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_303(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_747(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_579(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_445(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_748(iParam1, 1))
	{
		func_749(iParam1, 1);
		return true;
	}
	return false;
}

void func_580(int* iParam0, var uParam1, bool bParam2, float fParam3, char* sParam4)
{
	func_168(uParam1, 1, 1, 1, 0);
	func_169(bParam2);
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam2, sParam4, fParam3, 0f, 8, 0f, 0f, 0, false, -1);
}

bool func_581(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_582(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_583(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_584(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case GET_HASH_KEY("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

int func_585(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_750(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_704(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_586()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_751())
	{
		return 0;
	}
	if (!func_672(&iVar0))
	{
		return 0;
	}
	if (!func_752(iVar0))
	{
		return 0;
	}
	iVar1 = func_753(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_170(&iVar2, 1);
	return func_754(iVar0, iVar2);
}

int func_587()
{
	int iVar0;
	int iVar1;

	if (!func_672(&iVar0))
	{
		return 0;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_753(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_755(Global_1946804.f_57[func_488(iVar1, 1) /*11*/], 8);
	func_491(26, 0, 0, 0, 0);
	return 1;
}

void func_588(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_756(iParam0, 13))
	{
		func_739(iParam0, 0);
	}
	else
	{
		func_541(iParam0, 0);
	}
	if (func_300(iParam0->f_6))
	{
		if (bParam2)
		{
			func_357(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_589(var uParam0, float fParam1)
{
	if (func_553(uParam0, fParam1))
	{
		func_160(uParam0);
		return 1;
	}
	return 0;
}

void func_590(int iParam0)
{
	if (!func_757(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

int func_591(int iParam0, bool bParam1)
{
	if (!func_359(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_758(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

int func_592(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;

	if (!func_359(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_642(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (func_270(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_644(iParam0, 3);
			}
			else
			{
				if (!func_759(iParam0) && func_760(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(func_591(iParam0, 1), &uVar4);
				}
				func_388(iParam0, 256, 0);
				func_644(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_761();
				}
				if (bParam2 && !func_90(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_762(iParam0, vVar0, fParam6, iParam10))
				{
					return func_761();
				}
				if (func_270(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_644(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_270(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_644(iParam0, 1);
				return func_761();
			}
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
			{
				func_644(iParam0, 3);
			}
			break;
		case 3:
			if (!func_270(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_644(iParam0, 1);
				return func_761();
			}
			if (bParam7)
			{
				if (!func_763(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_761();
				}
			}
			if ((bParam2 && !func_90(vVar0)) && !func_645(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_175(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (func_364(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_365(iParam0, 39, 1);
				func_388(iParam0, 8, 1);
				func_388(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_764(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = func_765(iParam0, func_659());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_591(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_387(iParam0, 40, 0);
			func_388(iParam0, 32, 0);
			func_644(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return func_761();
}

void func_593(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(bParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(bParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(bParam1, 16, iVar0);
}

void func_594(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_591(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_766(func_384(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_767(iParam0);
	}
	else
	{
		func_768(iParam0);
	}
	if (bParam2)
	{
		func_769(iParam0);
	}
	else
	{
		func_770(iParam0);
	}
}

bool func_595()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_596(int iParam0, bool bParam1)
{
	switch (func_546(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_597(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_610(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_598(int iParam0)
{
	bool bVar0;
	int iVar1;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	bVar0 = func_80(iParam0);
	func_771(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(bVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_772(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&bVar0);
	func_773(iParam0, 0);
	func_325(iParam0);
}

void func_599(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_774(&Var0);
	func_775(iParam0, Var0);
	func_776(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_777(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_778(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_779(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_780(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_781(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_782(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_783(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_784(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

int func_600(vector3 vParam0)
{
	return func_785(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_601(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

bool func_602(int iParam0)
{
	int iVar0;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_603(int iParam0)
{
	int iVar0;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_601(iParam0))
	{
		return false;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_604(int iParam0)
{
	int iVar0;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_605(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_730(iParam0);
	func_730(iParam0);
	func_786(iParam0, iParam1);
	func_787(iParam0, iParam1);
	func_788(iParam0, iParam1);
	bVar1 = func_80(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_789(bVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, bVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == bVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == bVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	bVar3 = func_80(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_789(bVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, bVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == bVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == bVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_545();
}

bool func_606()
{
	int iVar0;

	iVar0 = func_459();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_607()
{
	bool bVar0;

	bVar0 = func_459();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&bVar0);
	func_790(0);
}

int func_608(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_609(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_610(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_611(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_791(&uVar0, &uVar1, &uVar2);
	func_792(iParam0, uVar0);
	func_793(iParam0, uVar1);
	func_794(iParam0, uVar2);
	func_795(iParam0, 1);
	func_796(iParam0, 1);
}

void func_612(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_797(iParam0, 1);
}

void func_613(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_614(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_798(iParam0, 1);
}

struct<2> func_615(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_799(iParam0, &uVar2))
	{
	}
	if (!func_800(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_616()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_801(GET_HASH_KEY("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_801(GET_HASH_KEY("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_801(GET_HASH_KEY("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_801(GET_HASH_KEY("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_801(GET_HASH_KEY("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_801(GET_HASH_KEY("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_617(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return;
	}
	func_802(bParam0);
	func_803(bParam0, uParam1);
	func_804(bParam0);
	func_805(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_806(bParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, true);
}

void func_618(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_619(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_620(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_269(iParam0);
	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_621(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_622(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_807(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_511(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_326(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_807(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_808(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_809(iParam0, 0))
					{
						func_365(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_810(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				func_387(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_270(func_269(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_270(func_384(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_623(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_359(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_387(iParam0, 50, 1);
		func_387(iParam0, 48, 1);
		func_387(iParam0, 49, 1);
		func_387(iParam0, 51, 1);
		func_387(iParam0, 52, 1);
		func_387(iParam0, 54, 1);
		func_387(iParam0, 55, 1);
	}
	else
	{
		func_365(iParam0, 50, 1);
		func_365(iParam0, 48, 1);
		func_365(iParam0, 49, 1);
		func_365(iParam0, 51, 1);
		if (bParam3)
		{
			func_365(iParam0, 54, 1);
		}
		else
		{
			func_387(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_365(iParam0, 52, 1);
			if (bParam3)
			{
				func_365(iParam0, 55, 1);
			}
		}
		else
		{
			func_387(iParam0, 52, 1);
			if (!bParam3)
			{
				func_387(iParam0, 55, 1);
			}
		}
	}
}

bool func_624(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_811(iParam0, iParam1);
	return bVar0;
}

void func_625(int iParam0)
{
	func_812(iParam0);
	func_813(iParam0, 0);
}

void func_626(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, GET_HASH_KEY("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), GET_HASH_KEY("WEAPON_UNARMED"), 0);
			}
		}
	}
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	if (!func_359(iParam0))
	{
		return;
	}
	func_814(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_628(int iParam0)
{
	func_365(iParam0, 36, 1);
}

bool func_629(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(bParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_630(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_676(iParam1, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_676(iParam1, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_631(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_632(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	bVar0 = func_269(iParam0);
	func_815(bVar0);
	func_365(iParam0, 60, 1);
	if (bParam1)
	{
		func_767(iParam0);
	}
}

void func_633(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	bVar0 = func_269(iParam0);
	func_816(bVar0);
	func_387(iParam0, 60, 1);
	if (bParam1)
	{
		func_768(iParam0);
	}
}

void func_634(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	bVar0 = func_269(iParam0);
	func_817(bVar0);
	if (iParam0 == 14)
	{
		func_818(bVar0);
	}
	func_365(iParam0, 61, 1);
	if (bParam1)
	{
		func_769(iParam0);
	}
}

void func_635(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	bVar0 = func_269(iParam0);
	func_819(bVar0);
	func_387(iParam0, 61, 1);
	if (bParam1)
	{
		func_770(iParam0);
	}
}

void func_636(int iParam0, bool bParam1)
{
	if (!func_270(*bParam1, 0))
	{
		return;
	}
	iParam0->f_57 = { func_555(*bParam1, Global_35, iParam0->f_26) };
	iParam0->f_57 = { iParam0->f_57 + Global_36 };
	iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 10f);
}

void func_637()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_820();
}

void func_638(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam0);
	POPULATION::_0x74C2B3DC0B294102(iParam0);
}

int func_639(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*13*/].f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(iParam1) == ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar1 /*13*/].f_2))
				{
					iVar0++;
					if (iParam1 == uParam0->f_3[iVar1 /*13*/].f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

float func_640(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_243(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

void func_641(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_384(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(bVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(bVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&bVar3);
		}
		iVar2++;
	}
}

int func_642(int iParam0, bool bParam1)
{
	if (!func_359(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_821(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_643(int iParam0)
{
	int iVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_644(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

bool func_645(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_646(var uParam0, bool bParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!func_472(uParam0, bParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_822(uParam0, bParam1);
	}
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(bParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(bParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, bParam1);
		}
	}
}

void func_647(int iParam0, bool bParam1)
{
	if (!func_359(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_823(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_627(iParam0, 1, 0);
		}
	}
	func_627(iParam0, 16, bParam1);
}

void func_648(int iParam0)
{
	func_627(iParam0, 8, 0);
}

int func_649(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_824(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_650(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_114(iParam0))
	{
		bVar1 = func_269(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(bVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(bVar1);
			PED::SET_PED_CONFIG_FLAG(bVar1, 179, true);
			func_825(iParam0);
		}
	}
	if (func_364(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_269(iParam0), 137, true);
	}
}

void func_651(int iParam0, bool bParam1)
{
	if (!func_359(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_269(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_269(iParam0), 204, false);
	}
}

void func_652(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (!func_116(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_364(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_649(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_269(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_826(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(bVar1, true)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_365(iParam0, 2, 1);
	}
	else
	{
		func_827(iParam0);
		func_365(iParam0, 1, 1);
	}
}

void func_653(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

bool func_655(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_656(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_657(var uParam0)
{
	if (!func_655(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_656(&(uParam0->f_1), 1);
	}
}

void func_658(var uParam0)
{
	if (!func_655(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_656(uParam0, 1);
	}
}

bool func_659()
{
	if (func_268() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_660(int iParam0)
{
	return iParam0 != 0;
}

void func_661(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_662(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

void func_663(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

int func_664(vector3 vParam0, float fParam3, char[4] cParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_90(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_828(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_829(iVar0, bParam8);
	return iVar0;
}

bool func_665(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_666(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_194(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_667(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_668(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

void func_669(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	func_538(iParam0, 1);
	func_539(iParam0, 1);
	func_540(iParam0, 128);
}

void func_670(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { Var0 };
	Global_1934603.f_161 = (Global_1934603.f_161 - 1);
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

int func_671(int iParam0)
{
	int iVar0;

	iVar0 = func_488(func_830(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_672(int iParam0)
{
	if (func_673(81053684, iParam0))
	{
		return true;
	}
	if (func_673(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_673(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_488(func_830(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_454(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_674(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_675()
{
	if (!func_471(Global_1935630.f_45))
	{
		return GET_HASH_KEY("WEAPON_UNARMED");
	}
	return Global_1935630.f_45;
}

int func_676(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case GET_HASH_KEY("GROUP_SNIPER"):
		case GET_HASH_KEY("GROUP_REVOLVER"):
		case GET_HASH_KEY("GROUP_REPEATER"):
		case GET_HASH_KEY("GROUP_PISTOL"):
		case GET_HASH_KEY("GROUP_SHOTGUN"):
		case GET_HASH_KEY("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_471(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_471(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_268() == -1 && !func_831(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == GET_HASH_KEY("WEAPON_UNARMED") && iParam1 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case GET_HASH_KEY("GROUP_REVOLVER"):
			case GET_HASH_KEY("GROUP_PISTOL"):
				iVar0 = GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case GET_HASH_KEY("GROUP_SNIPER"):
			case GET_HASH_KEY("GROUP_REPEATER"):
			case GET_HASH_KEY("GROUP_SHOTGUN"):
			case GET_HASH_KEY("GROUP_RIFLE"):
				if (func_831(GET_HASH_KEY("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = GET_HASH_KEY("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_471(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != GET_HASH_KEY("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_832(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_833(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_834(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_677(int iParam0, int iParam1)
{
	var uVar0;

	return func_835(&uVar0, iParam0, iParam1);
}

bool func_678()
{
	return Global_1935436 == 1;
}

bool func_679()
{
	return Global_1935436 == 2;
}

int func_680(int iParam0)
{
	int iVar0;

	iVar0 = func_454(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return GET_HASH_KEY("HATS");
		case -525676072:
			return GET_HASH_KEY("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

struct<4> func_681(bool bParam0)
{
	return func_495(GET_HASH_KEY("CHARACTER"), func_836(), -1591664384, bParam0);
}

int func_682(int iParam0)
{
	vector3 vVar0;

	if (!func_453(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_683(bool bParam0)
{
	int iVar0;

	iVar0 = func_497(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_495(923904168, func_681(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_495(923904168, func_681(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_495(923904168, func_681(bParam0), -740156546, 0);
}

bool func_684(int iParam0, bool bParam1)
{
	if (func_454(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_837(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_685(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_496(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_686(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_838(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_687(bool bParam0)
{
	int iVar0;

	iVar0 = func_497(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_495(271701509, func_681(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_495(271701509, func_681(bParam0), 12999093, 0);
}

bool func_688(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_454(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_689(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_497(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_690()
{
	int iVar0;

	Global_1946804.f_1378 = Global_1946804.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_691(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_692(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_693(int iParam0)
{
	func_481(iParam0, 8, 6);
}

void func_694(int iParam0)
{
	func_839(&(Global_1946804.f_2589), iParam0);
}

void func_695(int iParam0, int iParam1)
{
	func_840(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_696(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_697(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_454(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_477(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_695(iVar1, iVar3);
		}
	}
	if (func_841(-1586649372) && func_477(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_695(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == GET_HASH_KEY("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
			}
			func_842(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_842(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == GET_HASH_KEY("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 525
				func_842(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == GET_HASH_KEY("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 656
				func_842(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1416; //curOff = 691
				func_842(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 787
				func_842(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1416; //curOff = 808
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_695(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_695(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_454(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_695(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_843(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_454(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_695(iVar1, iVar3);
						}
					}
				}
				Jump @1416; //curOff = 1131
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_691(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
				Jump @1416; //curOff = 1229
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_843(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_691(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_695(iVar1, iVar3);
					}
				}
			}
			switch (func_454(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_454(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_695(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_454(uParam0->f_1[iVar1 /*3*/]) || func_691(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_695(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_698(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_844(0);
	if (iParam2 != 0 && func_845(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_846(iParam0, func_479(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_699(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_268() != -1;
	iVar7 = func_844(0);
	if (func_475(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946804.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_479(iVar0, 1);
			if (func_476(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_476(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_847(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_848(uParam0);
				if (iVar3 > 0)
				{
					if (!func_475(524288))
					{
						func_473(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946804.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_479(iVar0, 1);
							if (func_476(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_476(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_847(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_695(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_703(524288);
				}
			}
		}
	}
}

void func_700(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_849(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_268() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_850(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_851(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_851(Global_40.f_7729);
				Global_1946804.f_1378 = func_851(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_852(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_853(0, 1);
	}
}

void func_701(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804.f_850 >= 25)
			{
				return;
			}
			if (func_667(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804.f_850)
				{
					iVar1 = ((Global_1946804.f_855 + iVar0) % 25);
					if ((Global_1946804.f_668[iVar1 /*4*/] == Param0 && Global_1946804.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946804.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_668(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_473(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804.f_851 >= 25)
			{
				return;
			}
			if (func_667(Param0))
			{
				return;
			}
			func_668(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_473(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_494(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_702(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_703(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_704(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_705(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_706(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_707(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_708(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_854(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

int func_709(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_710()
{
	func_855();
	func_856();
	func_857();
}

char* func_711(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_712(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
		{
			CAM::_0x798BE43C9393632B(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

int func_713(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_858(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_714(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_715(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return GET_HASH_KEY("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return GET_HASH_KEY("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return GET_HASH_KEY("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return GET_HASH_KEY("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return GET_HASH_KEY("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return GET_HASH_KEY("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_859(296923297, iParam1);
			return func_860(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_859(1237718549, iParam1);
			return func_860(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return GET_HASH_KEY("META_OUTFIT_DEFAULT");
	}
	return GET_HASH_KEY("META_OUTFIT_DEFAULT");
}

bool func_716(bool bParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

void func_717(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_861(bParam1);
	}
}

bool func_718(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_719(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!func_716(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_720(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

void func_721(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, GET_HASH_KEY("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, GET_HASH_KEY("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_716(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_716(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_716(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_716(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_716(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_716(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_716(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_716(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_716(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_716(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_716(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_716(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_716(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_716(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_716(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_716(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_716(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_716(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_716(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_716(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_716(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_716(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_716(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_716(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_716(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_716(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

char* func_722(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_862(iVar0);
}

char* func_723(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case GET_HASH_KEY("CANOE"):
			return "CANOE";
		case GET_HASH_KEY("WAGON02X"):
			return "WAGON02X";
		case GET_HASH_KEY("WAGON04X"):
			return "WAGON04X";
		case GET_HASH_KEY("WAGON05X"):
			return "WAGON05X";
		case GET_HASH_KEY("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case GET_HASH_KEY("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case GET_HASH_KEY("COACH2"):
			return "COACH2";
		case GET_HASH_KEY("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case GET_HASH_KEY("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case GET_HASH_KEY("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case GET_HASH_KEY("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case GET_HASH_KEY("UTILLIWAG"):
			return "UTILLIWAG";
		case GET_HASH_KEY("SKIFF"):
			return "SKIFF";
		case GET_HASH_KEY("HANDCART"):
			return "HANDCART";
		case GET_HASH_KEY("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case GET_HASH_KEY("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_724(var uParam0)
{
	int iVar0;
	struct<11> Var1;

	Var1.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9) && ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
		iVar0++;
	}
}

int func_725(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_726(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) && MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_727(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_728(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

void func_729(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	bVar0 = func_80(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bVar0))
	{
		return;
	}
	if (func_798(iParam0, 64))
	{
		func_730(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(bVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_837(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (bVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, bVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, GET_HASH_KEY("BLIP_SADDLE"), true);
				func_863(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == bVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_730(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = GET_HASH_KEY("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_864(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, bVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_865(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_798(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = func_866(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == bVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(bVar0, true, false) };
	fVar15 = func_867(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_868(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(bVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_869(Global_1900383[iParam0 /*45*/].f_26);
		func_870(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == bVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_380(bVar0) && !bVar9)
	{
		if (iVar5 == GET_HASH_KEY("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = func_864(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = GET_HASH_KEY("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(bVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(bVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(bVar0, iVar22);
	}
}

void func_730(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

void func_731(int iParam0)
{
	Global_1935496.f_29 = (Global_1935496.f_29 || iParam0);
}

void func_732(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

bool func_733()
{
	if (func_268() == -1 && func_74(0, 0, 1))
	{
		return (Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0);
	}
	return false;
}

bool func_734(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_735(int iParam0)
{
	int iVar0;

	iVar0 = func_536(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return Global_1945938[iVar0 /*18*/].f_3;
}

Vector3 func_736(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_542(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

int func_738(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_739(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_740(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_300(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_357(&(iParam1->f_6), 0, 1);
	}
	if (!func_300(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_583(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_871(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_300(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_747(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_872(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_873(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_301(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_872(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_303(iParam1->f_6, 0, 1);
				}
				else
				{
					func_303(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_741(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case GET_HASH_KEY("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case GET_HASH_KEY("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case GET_HASH_KEY("REL_GANG_ODRISCOLL"):
			return 0;
		case GET_HASH_KEY("REL_GANG_MURFREE_BROOD"):
			return 1;
		case GET_HASH_KEY("REL_GANG_LARAMIE_GANG"):
			return 4;
		case GET_HASH_KEY("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_742(int* iParam0, int iParam1)
{
	if (!func_756(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_739(iParam0, 14);
		}
	}
}

bool func_743(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_744(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_745(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_746(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_747(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_300(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	func_872(iParam0, 18, 0, 1);
	func_872(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_748(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return false;
	}
	iVar0 = func_536(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_749(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

float func_750(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_751()
{
	return Global_1946804.f_2792;
}

bool func_752(int iParam0)
{
	if (func_874())
	{
		return false;
	}
	if (!func_453(iParam0, 0))
	{
		return false;
	}
	if (!func_875(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_753(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_486(iParam0, 1, 0) };
	return func_487(Var0.f_4);
}

int func_754(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_876(iParam0);
	if (func_691(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_452(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_877();
			}
			else
			{
				iVar0 = func_878();
			}
		}
		else if (func_181(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_879();
		}
		else
		{
			iVar0 = func_880();
		}
	}
	else if (func_672(&iVar2))
	{
		if (func_691(iVar2, -1303648999))
		{
			iVar0 = func_877();
		}
		else
		{
			iVar0 = func_878();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_879();
	}
	else
	{
		iVar0 = func_880();
	}
	if (iVar0 != 0)
	{
		Global_1946804.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

void func_755(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = func_753(iParam0);
	iVar1 = func_488(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_881(iParam0) && func_882(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_475(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (func_881(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && func_882(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_454(iParam0))
		{
			case 81053684:
				if (func_673(-525676072, &uVar3))
				{
					iVar2 = func_488(func_830(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (func_475(32768))
						{
							func_693(func_479(iVar1, 1));
						}
						if (func_475(32768) || (func_673(-2061583405, &iVar4) && !func_882(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (func_673(81053684, &iVar4))
						{
							iVar2 = func_488(func_830(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							func_883(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_756(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_757(int iParam0)
{
	return func_440(iParam0, 2);
}

int func_758(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_359(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_359(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

bool func_759(int iParam0)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_2"):
		case GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_3"):
		case GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_1"):
		case GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_4"):
		case GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_5"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_760(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_761()
{
	return -1;
}

bool func_762(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;

	if (!func_359(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, 0);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x0CADC3A977997472(Global_1360165[iParam0 /*1157*/].f_126, 0);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(func_591(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_884(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!func_270(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		func_388(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_763(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_359(iParam0))
	{
		return false;
	}
	if (func_885(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_270(bParam1, iVar0))
	{
		return false;
	}
	PED::_SET_PED_BODY_COMPONENT(bParam1, func_886(iParam0));
	PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, false);
	func_388(iParam0, 256, 1);
	return true;
}

void func_764(bool bParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(bParam0, "HorseCompanion", true);
	func_888(bParam0, func_887(iParam1));
	if (func_885(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(bParam0, 2);
		PED::SET_PED_CONFIG_FLAG(bParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_269(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_269(iParam1), bParam0, false);
		PED::_0xED1C764997A86D5A(func_269(iParam1), bParam0);
		PED::SET_PED_CONFIG_FLAG(bParam0, 367, true);
	}
	else
	{
		func_365(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam0, GET_HASH_KEY("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, GET_HASH_KEY("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 442, true);
	if (func_885(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(bParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(bParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(bParam0, 302, true);
	}
	PED::SET_PED_LASSO_HOGTIE_FLAG(bParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(bParam0, 3, false);
	func_594(iParam1, func_885(iParam1, 8192), func_885(iParam1, 16384), 1);
}

char* func_765(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_766(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		fParam1 = func_889(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(bParam0, iVar0, 0);
	}
}

void func_767(int iParam0)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	if (func_591(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_384(iParam0);
	func_815(bVar0);
	func_388(iParam0, 8192, 1);
}

void func_768(int iParam0)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	if (func_591(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_384(iParam0);
	func_816(bVar0);
	func_388(iParam0, 8192, 0);
}

void func_769(int iParam0)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	if (func_591(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_384(iParam0);
	func_817(bVar0);
	func_388(iParam0, 16384, 1);
}

void func_770(int iParam0)
{
	bool bVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	if (func_591(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_384(iParam0);
	func_819(bVar0);
	func_388(iParam0, 16384, 0);
}

void func_771(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_890(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(bVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7) && !ENTITY::_0x88AD6CC10D8D35B2(bVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&bVar7);
			}
		}
		iVar6++;
	}
}

bool func_772(int iParam0)
{
	if (!func_891(iParam0))
	{
		return false;
	}
	if (!func_892())
	{
		return true;
	}
	return false;
}

void func_773(int iParam0, int iParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_774(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_775(int iParam0, struct<2> Param1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_893(iParam0, Param1))
	{
	}
	if (!func_894(iParam0, Param1.f_1))
	{
	}
}

void func_776(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_895(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_777(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_778(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_779(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_780(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_781(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_782(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_783(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_784(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_785(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("BAYOUNWA"):
			return 0;
		case GET_HASH_KEY("BIGVALLEY"):
			return 1;
		case GET_HASH_KEY("BLUEWATERMARSH"):
			return 2;
		case GET_HASH_KEY("CUMBERLAND"):
			return 3;
		case GET_HASH_KEY("GREATPLAINS"):
			return 4;
		case GET_HASH_KEY("GRIZZLIESEAST"):
			return 6;
		case GET_HASH_KEY("GRIZZLIESWEST"):
			return 7;
		case GET_HASH_KEY("GUARMAD"):
			return 8;
		case GET_HASH_KEY("HEARTLANDS"):
			return 9;
		case GET_HASH_KEY("ROANOKE"):
			return 10;
		case GET_HASH_KEY("SCARLETTMEADOWS"):
			return 11;
		case GET_HASH_KEY("TALLTREES"):
			return 12;
		case GET_HASH_KEY("GAPTOOTHRIDGE"):
			return 13;
		case GET_HASH_KEY("RIOBRAVO"):
			return 14;
		case GET_HASH_KEY("CHOLLASPRINGS"):
			return 15;
		case GET_HASH_KEY("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_786(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_787(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_788(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_896(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_896(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_897(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_898(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_899(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_789(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (func_900(bParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(bParam0, 0);
	PED::SET_PED_OWNS_ANIMAL(Global_35, bParam0, false);
	PED::_0xB8B6430EAD2D2437(bParam0, GET_HASH_KEY("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(bParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	POPULATION::_0xF74E134F40192884(bParam0, 1);
	PED::_0xFD6943B6DF77E449(bParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	FLOCK::_0xAEB97D84CDF3C00B(bParam0, 0);
	if (func_319(bParam0))
	{
		iVar3 = func_320(bParam0);
		if (func_901(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 24, false);
}

void func_790(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_791(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_595())
	{
		if (func_275())
		{
			bVar0 = false;
			if (!func_596(Global_1835011[15 /*74*/].f_1, 1) && !func_837(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_902();
				*iParam1 = func_903();
				*uParam2 = func_904();
				return 1;
			}
			else
			{
				*uParam0 = func_905();
				*iParam1 = func_906();
				*uParam2 = func_907();
				return 1;
			}
		}
		else if (func_659())
		{
			if (!func_596(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_908();
				*iParam1 = func_909();
				*uParam2 = func_910();
				return 1;
			}
			else
			{
				*uParam0 = func_911();
				*iParam1 = func_912();
				*uParam2 = func_913();
				return 1;
			}
		}
	}
	else if (func_275())
	{
		*uParam0 = func_914();
		*iParam1 = func_915();
		*uParam2 = func_916();
		return 1;
	}
	else if (func_659())
	{
		*uParam0 = func_917();
		*iParam1 = func_918();
		*uParam2 = func_919();
		return 1;
	}
	return 0;
}

void func_792(int iParam0, var uParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_793(int iParam0, var uParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_794(int iParam0, var uParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_795(int iParam0, int iParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_796(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_608(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_791(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_920(iParam1);
	iVar5 = func_80(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_797(int iParam0, int iParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 || iParam1);
}

bool func_798(int iParam0, int iParam1)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 && iParam1) != 0;
}

bool func_799(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_896(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_921(Var0, GET_HASH_KEY("SLOTID_HORSE_MANE"), 0);
	if (!func_453(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_800(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_896(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_921(Var0, GET_HASH_KEY("SLOTID_HORSE_TAIL"), 0);
	if (!func_453(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_801(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_922(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_923() };
	*uParam1 = func_921(Var0, iParam0, 0);
	if (!func_453(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_802(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_TAILS"), 0, false);
}

void func_803(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_924(bParam0, *uParam1);
	func_924(bParam0, uParam1->f_1);
}

void func_804(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_SADDLEBAGS"), 0, false);
}

void func_805(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_924(bParam0, *uParam1);
	func_924(bParam0, uParam1->f_1);
	func_924(bParam0, uParam1->f_2);
	func_924(bParam0, uParam1->f_3);
	func_924(bParam0, uParam1->f_4);
	func_924(bParam0, uParam1->f_5);
}

int func_806(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, true, true, true, true, false);
	}
	return 1;
}

int func_807(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_359(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_596(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_925(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_596(Global_1347702[63 /*49*/].f_15, 1) || func_326(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_925(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_596(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_277(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_925(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_596(Global_1347702[134 /*49*/].f_15, 1) || func_326(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_596(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_925(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_926(GET_HASH_KEY("CSTAG_FLOW_MAR8_POST"), 1) && !func_596(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_269(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_624(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_808(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_809(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_359(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_115(iParam0) || func_364(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == GET_HASH_KEY("SLEEP");
}

struct<7> func_810(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

bool func_811(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_359(iParam0))
	{
		return false;
	}
	func_927(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

void func_812(int iParam0)
{
	func_928(iParam0, 1);
	func_928(iParam0, 128);
	func_928(iParam0, 256);
	func_928(iParam0, 512);
	func_928(iParam0, 1024);
	func_928(iParam0, 2048);
	func_928(iParam0, 4096);
	func_928(iParam0, 65536);
	func_928(iParam0, 16384);
	func_928(iParam0, 262144);
	func_928(iParam0, 524288);
	func_928(iParam0, 1048576);
	func_928(iParam0, 2097152);
	func_928(iParam0, 32768);
	func_928(iParam0, 131072);
	func_928(iParam0, 134217728);
	func_928(iParam0, 1073741824 /* Float: 2f */);
}

void func_813(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_814(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_815(bool bParam0)
{
	if (func_929(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_816(bool bParam0)
{
	if (func_929(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_817(bool bParam0)
{
	if (func_929(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_818(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (func_115(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(bParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 909522);
}

void func_819(bool bParam0)
{
	if (func_929(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_820()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_821(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_359(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_591(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

char* func_822(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return func_930(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_823(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_824(int iParam0)
{
	int iVar0;

	if (!func_359(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_931(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

void func_825(int iParam0)
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_269(iParam0)))
		{
			func_631(iParam0, 67108864, 1);
			func_387(iParam0, 19, 1);
		}
	}
}

float func_826(int iParam0)
{
	if (!func_359(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_827(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_269(iParam0);
	iVar1 = func_649(iParam0, 0);
	func_717(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_828(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_829(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_830(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_487(iVar0);
}

bool func_831(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_832(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_486(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_932((398 + iVar28), 1);
			if (func_685(iParam0, &Var0, iVar5, 0))
			{
				if (func_686(iParam0, &Var6, iVar5))
				{
					Var29 = { func_495(iParam0, Var0, iVar5, 0) };
					func_933(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_934(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_935(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_936(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_833(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == GET_HASH_KEY("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == GET_HASH_KEY("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case GET_HASH_KEY("G_M_M_UNIDUSTER_03"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERHENCHMAN_03"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_04"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERHENCHMAN_02"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_02"):
		case GET_HASH_KEY("U_M_M_FATDUSTER_01"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERHENCHMAN_01"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_01"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_01"):
		case GET_HASH_KEY("G_F_M_UNIDUSTER_01"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERLEADER_01"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_03"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_05"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case GET_HASH_KEY("G_M_Y_UNIEXCONFEDS_02"):
		case GET_HASH_KEY("G_M_Y_UNIEXCONFEDS_01"):
		case GET_HASH_KEY("G_M_O_UNIEXCONFEDS_01"):
		case GET_HASH_KEY("CS_EXCONFEDSLEADER_01"):
		case GET_HASH_KEY("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case GET_HASH_KEY("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case GET_HASH_KEY("U_M_M_BHT_SKINNERSEARCH"):
		case GET_HASH_KEY("G_M_M_UNIMOUNTAINMEN_01"):
		case GET_HASH_KEY("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case GET_HASH_KEY("G_M_M_UNIRANCHERS_01"):
		case GET_HASH_KEY("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case GET_HASH_KEY("U_M_M_BHT_BANDITOSHACK"):
		case GET_HASH_KEY("U_M_M_BHT_BANDITOMINE"):
		case GET_HASH_KEY("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case GET_HASH_KEY("U_M_M_NBXBRONTEGOON_01"):
		case GET_HASH_KEY("U_M_M_NBXBRONTESECFORM_01"):
		case GET_HASH_KEY("U_M_M_NBXBRONTEASC_01"):
		case GET_HASH_KEY("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_834(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_835(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_937(iParam1, 128);
	if (func_938("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_939(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_471(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_937(iParam1, 512) && func_838(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || func_940(Var4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_937(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_937(iParam1, 4))) && (!func_940(Var4.f_4) || func_937(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(Var4.f_4) || !func_937(iParam1, 8388608))) && (!WEAPON::IS_WEAPON_RIFLE(Var4.f_4) || !func_937(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_941(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_937(iParam1, 512) && !func_937(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_835(uParam0, iParam1, iParam2);
	}
	else if (func_937(iParam1, 256))
	{
		iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	}
	return iVar0;
}

struct<4> func_836()
{
	struct<4> Var0;

	return Var0;
}

bool func_837(int iParam0)
{
	if (!func_942(iParam0))
	{
		return false;
	}
	return func_943(iParam0);
}

bool func_838(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_497(0);
	*uParam1 = { func_495(iParam0, func_683(0), iParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

void func_839(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_944(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_944(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_945(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Var4[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var4[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_840(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_946(uParam0, 1))
	{
		func_947(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_841(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_488(iParam0, 1) /*3*/] != Global_1946804.f_57[func_488(iParam0, 1) /*11*/];
}

void func_842(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = -1539589426;
			uParam0->f_1[iVar1 /*3*/].f_1 = GET_HASH_KEY("BASE");
		}
		if (bParam2)
		{
			func_695(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_695(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == GET_HASH_KEY("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = GET_HASH_KEY("BASE");
		if (bParam3)
		{
			func_695(iVar2, iVar0);
		}
	}
}

bool func_843(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_BOOT_022_2"):
			return true;
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_BOOT_022_3"):
			return true;
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_BOOT_022_4"):
			return true;
		default:
			break;
	}
	return false;
}

int func_844(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_948();
	}
	iVar0 = 0;
	if (iParam0 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_845(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_846(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = GET_HASH_KEY("BASE");
	return true;
}

int func_847(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_488(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_475(524288))
	{
		switch (iParam1)
		{
			case GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, GET_HASH_KEY("BASE"), iParam2, bParam3));
	return iVar0;
}

int func_848(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_849(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_268() == -1)
	{
		func_949(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_950(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_850(int iParam0, int iParam1)
{
	if (func_268() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

int func_851(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return GET_HASH_KEY("CLOTHING_FANCY_SUIT");
		case 6:
			return GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return GET_HASH_KEY("CLOTHING_WINTER_OUTFIT");
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return GET_HASH_KEY("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return GET_HASH_KEY("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return GET_HASH_KEY("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return GET_HASH_KEY("CLOTHING_POLICE_OUTFIT");
		case 0:
			return GET_HASH_KEY("CLOTHING_CUSTOM_ONE_OUTFIT");
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

void func_852(int iParam0, bool bParam1, int iParam2)
{
	func_951(&(Global_1946804.f_1378), iParam0);
	func_952(2, iParam0, 6);
	if (bParam1)
	{
		func_853(0, 1);
	}
}

void func_853(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_953(0);
	}
	if (bParam0)
	{
		func_473(8);
		func_473(512);
	}
	else
	{
		func_473(8);
		func_473(16);
	}
}

char* func_854(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_706(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_706(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_855()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_954())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_955(2);
	}
	if (Global_1347477.f_119)
	{
		return func_955(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_956();
	fVar2 = func_957();
	fVar3 = func_958();
	fVar4 = func_959();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_960()));
	fVar7 = (func_955(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_961(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_962(3, fVar9, fVar9 > 100f);
	return func_889(fVar7, -100f, 100f);
}

float func_856()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_954())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_955(1);
	}
	if (Global_1347477.f_119)
	{
		return func_955(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_956();
	fVar2 = func_957();
	fVar3 = func_958();
	fVar4 = func_959();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_960()));
	fVar7 = (func_955(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_961(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_962(2, fVar9, fVar9 > 100f);
	return func_889(fVar7, -100f, 100f);
}

float func_857()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_954())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_955(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_963())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_964())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_955(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_956();
	fVar2 = func_957();
	fVar3 = func_958();
	fVar4 = func_959();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_960()));
	fVar7 = (func_955(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_961(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_962(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_955(0);
	}
	return func_889(fVar7, -100f, 100f);
}

int func_858(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_859(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_624(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return GET_HASH_KEY("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return GET_HASH_KEY("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return GET_HASH_KEY("META_OUTFIT_DEFAULT");
}

void func_861(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

char* func_862(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case GET_HASH_KEY("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case GET_HASH_KEY("P_DOOR01X"):
			return "P_DOOR01X";
		case GET_HASH_KEY("P_DOOR03X"):
			return "P_DOOR03X";
		case GET_HASH_KEY("P_DOOR12X"):
			return "p_door12x";
		case GET_HASH_KEY("P_DOOR13X"):
			return "P_DOOR13X";
		case GET_HASH_KEY("P_DOOR45X"):
			return "p_door45x";
		case GET_HASH_KEY("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case GET_HASH_KEY("P_CRATE03X"):
			return "p_crate03x";
		case GET_HASH_KEY("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case GET_HASH_KEY("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case GET_HASH_KEY("P_DOOR37X"):
			return "P_DOOR37X";
		case GET_HASH_KEY("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case GET_HASH_KEY("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case GET_HASH_KEY("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case GET_HASH_KEY("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case GET_HASH_KEY("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case GET_HASH_KEY("P_DOORNBD39X"):
			return "p_doornbd39x";
		case GET_HASH_KEY("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case GET_HASH_KEY("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case GET_HASH_KEY("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case GET_HASH_KEY("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case GET_HASH_KEY("P_PEBBLE01X"):
			return "p_pebble01x";
		case GET_HASH_KEY("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case GET_HASH_KEY("P_CARDS01X"):
			return "P_CARDS01X";
		case GET_HASH_KEY("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case GET_HASH_KEY("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case GET_HASH_KEY("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case GET_HASH_KEY("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case GET_HASH_KEY("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case GET_HASH_KEY("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case GET_HASH_KEY("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case GET_HASH_KEY("P_RAG02X"):
			return "p_rag02x";
		case GET_HASH_KEY("P_MAGNETO02X"):
			return "p_magneto02x";
		case GET_HASH_KEY("P_MAGNETO01X"):
			return "p_magneto01x";
		case GET_HASH_KEY("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case GET_HASH_KEY("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case GET_HASH_KEY("P_PEN01X"):
			return "p_pen01x";
		case GET_HASH_KEY("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case GET_HASH_KEY("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case GET_HASH_KEY("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case GET_HASH_KEY("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case GET_HASH_KEY("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case GET_HASH_KEY("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case GET_HASH_KEY("P_STOOL01X"):
			return "p_stool01x";
		case GET_HASH_KEY("P_STOOL02X"):
			return "p_stool02x";
		case GET_HASH_KEY("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case GET_HASH_KEY("P_CHAIR02X"):
			return "p_chair02x";
		case GET_HASH_KEY("P_CHAIR04X"):
			return "p_chair04x";
		case GET_HASH_KEY("P_CRATE15X"):
			return "p_crate15x";
		case GET_HASH_KEY("P_CLEAVER01X"):
			return "p_cleaver01x";
		case GET_HASH_KEY("P_BOTTLE003X"):
			return "p_bottle003x";
		case GET_HASH_KEY("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case GET_HASH_KEY("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case GET_HASH_KEY("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case GET_HASH_KEY("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case GET_HASH_KEY("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case GET_HASH_KEY("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case GET_HASH_KEY("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case GET_HASH_KEY("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case GET_HASH_KEY("P_MATCHES01X"):
			return "P_MATCHES01X";
		case GET_HASH_KEY("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case GET_HASH_KEY("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case GET_HASH_KEY("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case GET_HASH_KEY("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case GET_HASH_KEY("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case GET_HASH_KEY("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case GET_HASH_KEY("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case GET_HASH_KEY("P_BOTTLE03X"):
			return "p_bottle03x";
		case GET_HASH_KEY("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case GET_HASH_KEY("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case GET_HASH_KEY("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case GET_HASH_KEY("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case GET_HASH_KEY("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case GET_HASH_KEY("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case GET_HASH_KEY("P_LAMP18X"):
			return "p_lamp18x";
		case GET_HASH_KEY("P_CLOCK06X"):
			return "p_clock06x";
		case GET_HASH_KEY("P_BOTTLE02X"):
			return "p_bottle02x";
		case GET_HASH_KEY("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case GET_HASH_KEY("P_WINEBOX01X"):
			return "p_wineBox01x";
		case GET_HASH_KEY("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case GET_HASH_KEY("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case GET_HASH_KEY("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case GET_HASH_KEY("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case GET_HASH_KEY("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case GET_HASH_KEY("P_PLATE01X"):
			return "P_PLATE01X";
		case GET_HASH_KEY("P_KNIFE01X"):
			return "P_KNIFE01X";
		case GET_HASH_KEY("P_KNIFE02X"):
			return "P_KNIFE02X";
		case GET_HASH_KEY("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case GET_HASH_KEY("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case GET_HASH_KEY("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case GET_HASH_KEY("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case GET_HASH_KEY("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case GET_HASH_KEY("P_FORK01X"):
			return "P_FORK01X";
		case GET_HASH_KEY("P_KNIFE04X"):
			return "P_KNIFE04X";
		case GET_HASH_KEY("P_KNIFE03X"):
			return "p_knife03x";
		case GET_HASH_KEY("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case GET_HASH_KEY("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case GET_HASH_KEY("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case GET_HASH_KEY("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case GET_HASH_KEY("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case GET_HASH_KEY("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case GET_HASH_KEY("P_BROOM02X"):
			return "p_broom02x";
		case GET_HASH_KEY("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case GET_HASH_KEY("P_CHAIR07X"):
			return "P_CHAIR07X";
		case GET_HASH_KEY("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case GET_HASH_KEY("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case GET_HASH_KEY("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case GET_HASH_KEY("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case GET_HASH_KEY("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case GET_HASH_KEY("P_DOOR04X"):
			return "p_door04x";
		case GET_HASH_KEY("P_DOOR11X"):
			return "p_door11x";
		case GET_HASH_KEY("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case GET_HASH_KEY("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case GET_HASH_KEY("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case GET_HASH_KEY("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case GET_HASH_KEY("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case GET_HASH_KEY("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case GET_HASH_KEY("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case GET_HASH_KEY("P_CHAIR19X"):
			return "P_CHAIR19X";
		case GET_HASH_KEY("P_CHAIR20X"):
			return "P_CHAIR20X";
		case GET_HASH_KEY("P_CHAIR05X"):
			return "P_CHAIR05X";
		case GET_HASH_KEY("P_CHAIR22X"):
			return "p_chair22x";
		case GET_HASH_KEY("P_GLASS01X"):
			return "p_glass01x";
		case GET_HASH_KEY("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case GET_HASH_KEY("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case GET_HASH_KEY("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case GET_HASH_KEY("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case GET_HASH_KEY("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case GET_HASH_KEY("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case GET_HASH_KEY("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case GET_HASH_KEY("P_AXE01X"):
			return "P_AXE01X";
		case GET_HASH_KEY("P_HOE01X"):
			return "P_HOE01X";
		case GET_HASH_KEY("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case GET_HASH_KEY("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case GET_HASH_KEY("P_BROOM01X"):
			return "P_BROOM01X";
		case GET_HASH_KEY("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case GET_HASH_KEY("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case GET_HASH_KEY("P_SKIFF02X"):
			return "P_SKIFF02x";
		case GET_HASH_KEY("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case GET_HASH_KEY("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case GET_HASH_KEY("P_CS_CAMERA"):
			return "p_cs_camera";
		case GET_HASH_KEY("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case GET_HASH_KEY("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case GET_HASH_KEY("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case GET_HASH_KEY("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case GET_HASH_KEY("ROWBOATSWAMP"):
			return "rowboatswamp";
		case GET_HASH_KEY("P_CHAIR25X"):
			return "P_CHAIR25X";
		case GET_HASH_KEY("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case GET_HASH_KEY("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case GET_HASH_KEY("P_HAMMER03X"):
			return "p_hammer03x";
		case GET_HASH_KEY("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case GET_HASH_KEY("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case GET_HASH_KEY("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case GET_HASH_KEY("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case GET_HASH_KEY("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case GET_HASH_KEY("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case GET_HASH_KEY("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case GET_HASH_KEY("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case GET_HASH_KEY("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case GET_HASH_KEY("P_BOILER01X"):
			return "p_boiler01x";
		case GET_HASH_KEY("P_BOILER02X"):
			return "p_boiler02x";
		case GET_HASH_KEY("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case GET_HASH_KEY("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case GET_HASH_KEY("P_PITCHER02X"):
			return "p_pitcher02x";
		case GET_HASH_KEY("P_TRAY03X"):
			return "p_tray03x";
		case GET_HASH_KEY("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case GET_HASH_KEY("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case GET_HASH_KEY("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case GET_HASH_KEY("P_LADLE02X"):
			return "P_LADLE02X";
		case GET_HASH_KEY("P_CS_POT01X"):
			return "P_CS_POT01X";
		case GET_HASH_KEY("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case GET_HASH_KEY("P_SPOON01X"):
			return "P_SPOON01X";
		case GET_HASH_KEY("P_BOWL03X"):
			return "P_BOWL03X";
		case GET_HASH_KEY("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case GET_HASH_KEY("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case GET_HASH_KEY("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case GET_HASH_KEY("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case GET_HASH_KEY("P_OAR03X"):
			return "P_OAR03X";
		case GET_HASH_KEY("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case GET_HASH_KEY("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case GET_HASH_KEY("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case GET_HASH_KEY("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case GET_HASH_KEY("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case GET_HASH_KEY("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case GET_HASH_KEY("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case GET_HASH_KEY("P_CS_LOG01X"):
			return "p_cs_log01x";
		case GET_HASH_KEY("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case GET_HASH_KEY("P_GLASS06X"):
			return "p_glass06x";
		case GET_HASH_KEY("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case GET_HASH_KEY("P_INKWELL01X"):
			return "p_inkwell01x";
		case GET_HASH_KEY("P_CIGAR02X"):
			return "p_cigar02x";
		case GET_HASH_KEY("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case GET_HASH_KEY("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case GET_HASH_KEY("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case GET_HASH_KEY("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case GET_HASH_KEY("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case GET_HASH_KEY("P_BELL05X"):
			return "p_bell05x";
		case GET_HASH_KEY("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case GET_HASH_KEY("P_CHAIR06X"):
			return "p_chair06x";
		case GET_HASH_KEY("P_JUG01X"):
			return "p_jug01x";
		case GET_HASH_KEY("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case GET_HASH_KEY("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case GET_HASH_KEY("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case GET_HASH_KEY("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case GET_HASH_KEY("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case GET_HASH_KEY("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case GET_HASH_KEY("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case GET_HASH_KEY("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case GET_HASH_KEY("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case GET_HASH_KEY("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case GET_HASH_KEY("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case GET_HASH_KEY("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case GET_HASH_KEY("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case GET_HASH_KEY("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case GET_HASH_KEY("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case GET_HASH_KEY("P_STICK02X"):
			return "P_STICK02X";
		case GET_HASH_KEY("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case GET_HASH_KEY("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case GET_HASH_KEY("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case GET_HASH_KEY("P_CAN10X"):
			return "p_can10x";
		case GET_HASH_KEY("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case GET_HASH_KEY("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case GET_HASH_KEY("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case GET_HASH_KEY("P_KETTLE03X"):
			return "p_kettle03x";
		case GET_HASH_KEY("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case GET_HASH_KEY("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case GET_HASH_KEY("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case GET_HASH_KEY("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case GET_HASH_KEY("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case GET_HASH_KEY("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case GET_HASH_KEY("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case GET_HASH_KEY("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case GET_HASH_KEY("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case GET_HASH_KEY("P_CAN05X"):
			return "p_can05x";
		case GET_HASH_KEY("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case GET_HASH_KEY("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case GET_HASH_KEY("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case GET_HASH_KEY("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case GET_HASH_KEY("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case GET_HASH_KEY("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case GET_HASH_KEY("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case GET_HASH_KEY("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case GET_HASH_KEY("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case GET_HASH_KEY("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case GET_HASH_KEY("P_TABLE42_CS"):
			return "p_table42_cs";
		case GET_HASH_KEY("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case GET_HASH_KEY("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case GET_HASH_KEY("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case GET_HASH_KEY("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case GET_HASH_KEY("P_SPITTOON01X"):
			return "p_spittoon01x";
		case GET_HASH_KEY("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case GET_HASH_KEY("P_PENCIL01X"):
			return "p_pencil01x";
		case GET_HASH_KEY("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case GET_HASH_KEY("P_PAN01X"):
			return "P_PAN01X";
		case GET_HASH_KEY("P_PIPE01X"):
			return "P_Pipe01x";
		case GET_HASH_KEY("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case GET_HASH_KEY("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case GET_HASH_KEY("P_TREESTUMP02X"):
			return "p_treestump02x";
		case GET_HASH_KEY("P_PLATE17X"):
			return "p_plate17x";
		case GET_HASH_KEY("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case GET_HASH_KEY("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case GET_HASH_KEY("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case GET_HASH_KEY("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case GET_HASH_KEY("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
		case GET_HASH_KEY("P_CS_BOOKHARDCV08X"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

void func_863(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_966(func_965(255), GET_HASH_KEY("COLOR_PURE_WHITE")));
	}
	else if (func_275())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_659();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_864(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_865(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_966(func_965(255), GET_HASH_KEY("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_275())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_659())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_866(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_867(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_868(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_608(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_864(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_864(iParam0) + 1;
	fVar6 = func_967(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_968(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_869(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_870(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

int func_871(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_440(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_669(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_872(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_873(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_300(iParam0))
	{
		return;
	}
	iVar0 = func_536(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_874()
{
	if (Global_1946804.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804.f_2791)) < 1250)
	{
		return true;
	}
	if (func_969())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_875(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_453(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == GET_HASH_KEY("AMMO"))
	{
		if (!func_970(iParam0, 1))
		{
			return false;
		}
	}
	return func_971(iParam0, 0, bParam2) >= iParam1;
}

int func_876(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_672(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_877()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("MASK_OFF_LEFT_HAND");
	switch (func_972())
	{
		case 0:
			iVar0 = GET_HASH_KEY("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_878()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("BANDANA_OFF_LEFT_HAND");
	switch (func_972())
	{
		case 0:
			iVar0 = GET_HASH_KEY("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_879()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("MASK_ON_LEFT_HAND");
	switch (func_972())
	{
		case 0:
			iVar0 = GET_HASH_KEY("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_880()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("BANDANA_ON_LEFT_HAND");
	switch (func_972())
	{
		case 0:
			iVar0 = GET_HASH_KEY("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_881(int iParam0)
{
	switch (func_454(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

int func_882(int iParam0)
{
	var uVar0;

	return func_973(iParam0, &uVar0);
}

void func_883(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_2377[func_488(iParam0, 1) /*2*/].f_1 = (Global_1946804.f_2377[func_488(iParam0, 1) /*2*/].f_1 || iParam1);
}

bool func_884(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_974(bVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_885(int iParam0, int iParam1)
{
	if (!func_359(iParam0))
	{
		return false;
	}
	return (Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1) != 0;
}

int func_886(int iParam0)
{
	return GET_HASH_KEY("META_HORSE_SADDLE_ONLY");
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_837(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_837(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_888(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 1f);
	}
}

float func_889(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_890(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_891(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case GET_HASH_KEY("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case GET_HASH_KEY("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_892()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_893(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_896(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_495(iParam1, Var0, GET_HASH_KEY("SLOTID_HORSE_MANE"), 0) };
	return func_975(Var29, 1);
}

bool func_894(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_896(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_495(iParam1, Var0, GET_HASH_KEY("SLOTID_HORSE_TAIL"), 0) };
	return func_975(Var29, 1);
}

void func_895(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_896(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_976(iParam0))
	{
		return false;
	}
	iVar0 = func_897(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_681(0) };
	if (!func_977(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_978(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_898(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_934(bParam10))
	{
		return func_979(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_689(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_980(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_497(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_975(Var14, 1))
		{
		}
	}
	return true;
}

bool func_899(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_934(bParam9))
	{
		return func_981(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	if (func_980(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_689(Param0, &Var0, bParam9, 1) || !func_689(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_980(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_497(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_900(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (func_982(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_901(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_902()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_903()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_904()
{
	return 1;
}

int func_905()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_906()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_907()
{
	return 1;
}

int func_908()
{
	return GET_HASH_KEY("BREED_JOHN_ENDLESSSUMMER");
}

int func_909()
{
	return GET_HASH_KEY("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_910()
{
	return 2;
}

int func_911()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_912()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_913()
{
	return 1;
}

int func_914()
{
	return GET_HASH_KEY("BREED_MORGAN_BAY");
}

int func_915()
{
	return GET_HASH_KEY("A_C_HORSE_MORGAN_BAY");
}

int func_916()
{
	return 1;
}

int func_917()
{
	return GET_HASH_KEY("BREED_KENTUCKYSADDLE_GREY");
}

int func_918()
{
	return GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_919()
{
	return 1;
}

void func_920(int iParam0)
{
	if (func_983() < iParam0)
	{
		func_984(iParam0);
	}
}

int func_921(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_985(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_922(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_454(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_986(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_923()
{
	struct<4> Var0;

	Var0 = { func_681(0) };
	return func_495(856287005, Var0, -218846335, 0);
}

void func_924(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(bParam0, iVar0, false, false, false);
}

bool func_925(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_926(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_987(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_927(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_988(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_928(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 - (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1));
}

bool func_929(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

var func_930(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return GET_HASH_KEY("PERSCHAR_COMP_JOHN");
		case 0:
			return GET_HASH_KEY("PERSCHAR_COMP_DUTCH");
		case 6:
			return GET_HASH_KEY("PERSCHAR_COMP_MICAH");
		case 3:
			return GET_HASH_KEY("PERSCHAR_COMP_BILL");
		case 7:
			return GET_HASH_KEY("PERSCHAR_COMP_CHARLES");
		case 4:
			return GET_HASH_KEY("PERSCHAR_COMP_UNCLE");
		case 2:
			return GET_HASH_KEY("PERSCHAR_COMP_JAVIER");
		case 5:
			return GET_HASH_KEY("PERSCHAR_COMP_HOSEA");
		case 8:
			return GET_HASH_KEY("PERSCHAR_COMP_SEAN");
		case 9:
			return GET_HASH_KEY("PERSCHAR_COMP_LENNY");
		case 13:
			return GET_HASH_KEY("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return GET_HASH_KEY("PERSCHAR_COMP_JACK");
		case 15:
			return GET_HASH_KEY("PERSCHAR_COMP_MARYBETH");
		case 16:
			return GET_HASH_KEY("PERSCHAR_COMP_MOLLY");
		case 17:
			return GET_HASH_KEY("PERSCHAR_COMP_PEARSON");
		case 18:
			return GET_HASH_KEY("PERSCHAR_COMP_STRAUSS");
		case 19:
			return GET_HASH_KEY("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return GET_HASH_KEY("PERSCHAR_COMP_KAREN");
		case 21:
			return GET_HASH_KEY("PERSCHAR_COMP_SWANSON");
		case 22:
			return GET_HASH_KEY("PERSCHAR_COMP_TILLY");
		case 23:
			return GET_HASH_KEY("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return GET_HASH_KEY("PERSCHAR_COMP_KIERAN");
		case 24:
			return GET_HASH_KEY("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return GET_HASH_KEY("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return GET_HASH_KEY("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return GET_HASH_KEY("PERSCHAR_COMP_SADIE");
		case 12:
			return GET_HASH_KEY("PERSCHAR_COMP_DOG");
	}
	return 0;
}

int func_932(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return -1783281882;
		case 2:
			return 1704602624;
		case 3:
			return 1214181762;
		case 4:
			return 1520605650;
		case 5:
			return 551482925;
		case 6:
			return 843929315;
		case 7:
			return 1974334822;
		case 8:
			return -1963435638;
		case 9:
			return -430578371;
		case 10:
			return -730381952;
		case 11:
			return -1500304973;
		case 12:
			return -253503777;
		case 13:
			return 1352275534;
		case 14:
			return 1666399168;
		case 15:
			return -1911121386;
		case 16:
			return 1756656691;
		case 17:
			return -1774867076;
		case 18:
			return -421952220;
		case 19:
			return -1087003323;
		case 20:
			return 1231618917;
		case 21:
			return -1183777174;
		case 22:
			return -841767082;
		case 23:
			return 1043717005;
		case 24:
			return 142663787;
		case 25:
			return 1718143051;
		case 26:
			return -6605744;
		case 27:
			return 953047564;
		case 28:
			return 769706682;
		case 29:
			return 1635590003;
		case 30:
			return -2047978619;
		case 31:
			return -586319254;
		case 32:
			return 249896112;
		case 33:
			return -1060513333;
		case 34:
			return 1317351007;
		case 35:
			return -500478573;
		case 36:
			return -806573802;
		case 37:
			return -1109949204;
		case 38:
			return -740156546;
		case 39:
			return -684532710;
		case 40:
			return 1158805436;
		case 41:
			return -559473670;
		case 42:
			return -797147251;
		case 43:
			return -382216265;
		case 44:
			return 1419177114;
		case 45:
			return 1704297235;
		case 46:
			return -1139016418;
		case 47:
			return 897705377;
		case 48:
			return 17961769;
		case 49:
			return 205582207;
		case 50:
			return 900740963;
		case 51:
			return -1369589344;
		case 52:
			return -1695823795;
		case 53:
			return -41453074;
		case 54:
			return 539767227;
		case 55:
			return 1210490314;
		case 56:
			return -399684751;
		case 57:
			return 2138893455;
		case 58:
			return -1617010487;
		case 59:
			return -832377028;
		case 60:
			return -428040245;
		case 61:
			return 1279288897;
		case 62:
			return -594897905;
		case 63:
			return -1360459240;
		case 64:
			return 1838428396;
		case 65:
			return -1467846997;
		case 66:
			return -490610263;
		case 67:
			return -1885413079;
		case 68:
			return 708884155;
		case 69:
			return -134459952;
		case 70:
			return -1912136700;
		case 71:
			return -1268031552;
		case 72:
			return 1177953227;
		case 73:
			return 2130805296;
		case 74:
			return 38093490;
		case 75:
			return -269153218;
		case 76:
			return -1995068011;
		case 77:
			return -164284834;
		case 78:
			return 1446463345;
		case 79:
			return 1501315823;
		case 80:
			return -750379482;
		case 81:
			return -929560937;
		case 82:
			return 608323241;
		case 83:
			return 1030796013;
		case 84:
			return 1915057434;
		case 85:
			return -1582276476;
		case 86:
			return 692059311;
		case 87:
			return 2062839241;
		case 88:
			return -1884531872;
		case 89:
			return -866434534;
		case 90:
			return -1252192421;
		case 91:
			return 1243288963;
		case 92:
			return -1953772189;
		case 93:
			return 754411745;
		case 94:
			return 545309006;
		case 95:
			return -1089810811;
		case 96:
			return 1957869400;
		case 97:
			return -241412332;
		case 98:
			return -1548010959;
		case 99:
			return 550150488;
		case 100:
			return 946565453;
		case 101:
			return 434443248;
		case 102:
			return -1709914938;
		case 103:
			return 366686112;
		case 104:
			return -1370063350;
		case 105:
			return 2126829550;
		case 106:
			return 226552910;
		case 107:
			return 721193431;
		case 108:
			return -315672460;
		case 109:
			return 623544501;
		case 110:
			return 259556714;
		case 111:
			return -2125361825;
		case 112:
			return 1078230356;
		case 113:
			return 1885364811;
		case 114:
			return 1630382737;
		case 115:
			return 1738245512;
		case 116:
			return 1540262216;
		case 117:
			return 1016871472;
		case 118:
			return 13829069;
		case 119:
			return 737051352;
		case 120:
			return 1734614610;
		case 121:
			return -208715295;
		case 122:
			return 1435062936;
		case 123:
			return 1483055553;
		case 124:
			return 380335002;
		case 125:
			return -1079385677;
		case 126:
			return 676610411;
		case 127:
			return 2145419552;
		case 128:
			return 657238733;
		case 129:
			return 1850579281;
		case 130:
			return -1923957384;
		case 131:
			return -1142828108;
		case 132:
			return -1400618531;
		case 133:
			return -1433857135;
		case 134:
			return 209987206;
		case 135:
			return 1686943047;
		case 136:
			return -1276976212;
		case 137:
			return -59178517;
		case 138:
			return 2134884601;
		case 139:
			return 651707517;
		case 140:
			return -633788535;
		case 141:
			return 116394463;
		case 142:
			return -1196973875;
		case 143:
			return 801752086;
		case 144:
			return 184475332;
		case 145:
			return -1880922659;
		case 146:
			return -898138634;
		case 147:
			return -2107418444;
		case 148:
			return -679970099;
		case 149:
			return -1531392549;
		case 150:
			return 1612483376;
		case 151:
			return 463930900;
		case 152:
			return -632148238;
		case 153:
			return 55303249;
		case 154:
			return 2108322089;
		case 155:
			return -1358896714;
		case 156:
			return 74475632;
		case 157:
			return -28710953;
		case 158:
			return -1791599168;
		case 159:
			return 1605938169;
		case 160:
			return 1255242276;
		case 161:
			return 636467727;
		case 162:
			return -1567688525;
		case 163:
			return -77886679;
		case 164:
			return -1057900679;
		case 165:
			return -1960888134;
		case 166:
			return -1719717295;
		case 167:
			return -1779244911;
		case 168:
			return -670540863;
		case 169:
			return 223362311;
		case 170:
			return 1150824567;
		case 171:
			return 974471191;
		case 172:
			return 1989683968;
		case 173:
			return 254804477;
		case 174:
			return 192057609;
		case 175:
			return 1553957817;
		case 176:
			return 2099829015;
		case 177:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 178:
			return -1948423372;
		case 179:
			return 981083654;
		case 180:
			return 1283289876;
		case 181:
			return -606884489;
		case 182:
			return -100418572;
		case 183:
			return 663645231;
		case 184:
			return 1442217033;
		case 185:
			return 1410986244;
		case 186:
			return 847409839;
		case 187:
			return 923926911;
		case 188:
			return 109995826;
		case 189:
			return -747412737;
		case 190:
			return 1114341727;
		case 191:
			return -539456939;
		case 192:
			return 45887121;
		case 193:
			return 913271624;
		case 194:
			return -1652812715;
		case 195:
			return -1791365775;
		case 196:
			return -979299941;
		case 197:
			return 713062001;
		case 198:
			return -575045963;
		case 199:
			return 1852965262;
		case 200:
			return -1398836354;
		case 201:
			return -1829885298;
		case 202:
			return -1773850357;
		case 203:
			return -564258009;
		case 204:
			return 2016532685;
		case 205:
			return -1070563798;
		case 206:
			return -1619221343;
		case 207:
			return -345571691;
		case 208:
			return 544288390;
		case 209:
			return 159578294;
		case 210:
			return -76852849;
		case 211:
			return 1110295244;
		case 212:
			return 2104563477;
		case 213:
			return 1947827651;
		case 214:
			return -933072766;
		case 215:
			return 2104388648;
		case 216:
			return -1677140601;
		case 217:
			return -2133097881;
		case 218:
			return -826678792;
		case 219:
			return -513522325;
		case 220:
			return 1970588249;
		case 221:
			return -2080032591;
		case 222:
			return 1758847745;
		case 223:
			return 895010282;
		case 224:
			return -511891179;
		case 225:
			return -1207567168;
		case 226:
			return -1315407613;
		case 227:
			return 1786352060;
		case 228:
			return -833319691;
		case 229:
			return 1591329969;
		case 230:
			return 2123222014;
		case 231:
			return -1578397674;
		case 232:
			return 1473261684;
		case 233:
			return -241855024;
		case 234:
			return 12999093;
		case 235:
			return -6796437;
		case 236:
			return -268116367;
		case 237:
			return -636470867;
		case 238:
			return 1737668280;
		case 239:
			return 892807236;
		case 240:
			return -733247890;
		case 241:
			return 24047176;
		case 242:
			return -1561999014;
		case 243:
			return -2052774042;
		case 244:
			return GET_HASH_KEY("SLOTID_HORSE_BEDROLL");
		case 245:
			return GET_HASH_KEY("SLOTID_HORSE_BLANKET");
		case 246:
			return GET_HASH_KEY("SLOTID_HORSE_CANTLE");
		case 247:
			return GET_HASH_KEY("SLOTID_HORSE_FENDER");
		case 248:
			return GET_HASH_KEY("SLOTID_HORSE_HORN");
		case 249:
			return GET_HASH_KEY("SLOTID_HORSE_INSURANCE");
		case 250:
			return 802754820;
		case 251:
			return GET_HASH_KEY("SLOTID_HORSE_MANE");
		case 252:
			return -1886147520;
		case 253:
			return -1142966831;
		case 254:
			return GET_HASH_KEY("SLOTID_HORSE_REINS");
		case 255:
			return GET_HASH_KEY("SLOTID_HORSE_SADDLE");
		case 256:
			return 1221327846;
		case 257:
			return 923162715;
		case 258:
			return 625423581;
		case 259:
			return 326668608;
		case 260:
			return 669530755;
		case 261:
			return 429759982;
		case 262:
			return -2111934838;
		case 263:
			return 1886178087;
		case 264:
			return 1587783573;
		case 265:
			return -279722001;
		case 266:
			return GET_HASH_KEY("SLOTID_HORSE_SADDLEBAG");
		case 267:
			return 724026534;
		case 268:
			return GET_HASH_KEY("SLOTID_HORSE_SEAT");
		case 269:
			return GET_HASH_KEY("SLOTID_HORSE_SEX");
		case 270:
			return GET_HASH_KEY("SLOTID_HORSE_SKIRT");
		case 271:
			return -1824203570;
		case 272:
			return -1654197998;
		case 273:
			return 798987653;
		case 274:
			return 976923323;
		case 275:
			return 1167442289;
		case 276:
			return GET_HASH_KEY("SLOTID_HORSE_STIRRUP");
		case 277:
			return GET_HASH_KEY("SLOTID_HORSE_TAIL");
		case 278:
			return -2015960939;
		case 279:
			return 1132377945;
		case 280:
			return 739936401;
		case 281:
			return 1201880974;
		case 282:
			return 819728896;
		case 283:
			return 1746010219;
		case 284:
			return 1433393959;
		case 285:
			return -1287636759;
		case 286:
			return -706917073;
		case 287:
			return -2166805;
		case 288:
			return -1391602433;
		case 289:
			return 1782075221;
		case 290:
			return 1282544585;
		case 291:
			return 1732594027;
		case 292:
			return -1058817012;
		case 293:
			return 1090546265;
		case 294:
			return 1460218602;
		case 295:
			return -1783120823;
		case 296:
			return -1535745896;
		case 297:
			return -2086922122;
		case 298:
			return -1675198649;
		case 299:
			return 1189497682;
		case 300:
			return -1565675519;
		case 301:
			return -268973591;
		case 302:
			return 1039159916;
		case 303:
			return 1111816631;
		case 304:
			return 405591388;
		case 305:
			return 897456793;
		case 306:
			return 104187473;
		case 307:
			return 773808542;
		case 308:
			return -1120669954;
		case 309:
			return -1389278274;
		case 310:
			return 552979403;
		case 311:
			return -1571578784;
		case 312:
			return -708312114;
		case 313:
			return 688823508;
		case 314:
			return -1622147240;
		case 315:
			return 830292162;
		case 316:
			return 226276782;
		case 317:
			return -678416628;
		case 318:
			return -1098528034;
		case 319:
			return -629387103;
		case 320:
			return 316207340;
		case 321:
			return -1909200748;
		case 322:
			return -939652363;
		case 323:
			return GET_HASH_KEY("SLOTID_PROGRESSION");
		case 324:
			return 2011227407;
		case 325:
			return -375447933;
		case 326:
			return 537014919;
		case 327:
			return 1784584921;
		case 328:
			return -140655024;
		case 329:
			return 1084182731;
		case 330:
			return -1045471300;
		case 331:
			return 1617414719;
		case 332:
			return -787761753;
		case 333:
			return -490616606;
		case 334:
			return 1491346514;
		case 335:
			return -1360128126;
		case 336:
			return -1311702610;
		case 337:
			return -904250715;
		case 338:
			return 1034665895;
		case 339:
			return -101524555;
		case 340:
			return 1419152594;
		case 341:
			return -451359317;
		case 342:
			return -1915385310;
		case 343:
			return 1315162488;
		case 344:
			return -361152079;
		case 345:
			return -2041626192;
		case 346:
			return -2077812539;
		case 347:
			return -1371514637;
		case 348:
			return 1730017037;
		case 349:
			return 892816668;
		case 350:
			return -1994943603;
		case 351:
			return 603133554;
		case 352:
			return -30160144;
		case 353:
			return -1248299493;
		case 354:
			return 727393558;
		case 355:
			return 755611221;
		case 356:
			return -170255458;
		case 357:
			return 1011151573;
		case 358:
			return 1122339631;
		case 359:
			return 454815308;
		case 360:
			return 990701735;
		case 361:
			return -246340825;
		case 362:
			return -1410671073;
		case 363:
			return 1547608292;
		case 364:
			return -714132970;
		case 365:
			return 732290690;
		case 366:
			return 971340545;
		case 367:
			return -234132662;
		case 368:
			return -2143057988;
		case 369:
			return -993947465;
		case 370:
			return -486552269;
		case 371:
			return -1156317860;
		case 372:
			return 1229625803;
		case 373:
			return -388596167;
		case 374:
			return -1204639465;
		case 375:
			return -1384685096;
		case 376:
			return -2026728113;
		case 377:
			return -1228057307;
		case 378:
			return 1835126290;
		case 379:
			return 1890833594;
		case 380:
			return -751549960;
		case 381:
			return -1682270750;
		case 382:
			return -1839865333;
		case 383:
			return -1990383629;
		case 384:
			return 1712094016;
		case 385:
			return 1532953697;
		case 386:
			return 1620318083;
		case 387:
			return -307230331;
		case 388:
			return -1034549620;
		case 389:
			return -1293064293;
		case 390:
			return -1540142553;
		case 391:
			return -1769886012;
		case 392:
			return -1983081126;
		case 393:
			return -1106117124;
		case 394:
			return -1873108338;
		case 395:
			return -2097543219;
		case 396:
			return 155413195;
		case 397:
			return -1162387149;
		case 398:
			return 1728382685 /* GXTEntry: "Right" */;
		case 399:
			return -649335959 /* GXTEntry: "Left" */;
		case 400:
			return -1876502240;
		case 401:
			return -2107032155;
		case 402:
			return 1570861011;
		case 403:
			return 1075981185;
		case 404:
			return 960195961;
		case 405:
			return 1150460649;
		case 406:
			return 1689424794;
		case 407:
			return 619103418;
		case 408:
			return 1355448197;
		case 409:
			return 1681762005;
		case 410:
			return 1026887814;
		case 411:
			return 354352628;
		case 412:
			return 1519366642;
		case 413:
			return -82757515;
		case 414:
			return 386306655;
		case 415:
			return 1243962119;
		case 416:
			return 756214903;
		case 417:
			return -718417579;
		case 418:
			return -1445516411;
		case 419:
			return 1232060796;
		case 420:
			return -672392892;
		case 421:
			return 1465341584;
		case 422:
			return -427758369;
		case 423:
			return -735647142;
		case 424:
			return 1535838048;
		case 425:
			return -602272282;
		case 426:
			return 2051264661;
		case 427:
			return 487172188;
		case 428:
			return 282270687;
		case 429:
			return 1607708943;
		case 430:
			return 1686264939;
		case 431:
			return 314786149;
		case 432:
			return 1402841185;
		case 433:
			return 1099170772;
		case 434:
			return 2125676786;
		case 435:
			return -363896735;
		case 436:
			return -468790222;
		case 437:
			return -1779133048;
		case 438:
			return 1732537631;
		case 439:
			return 1755095401;
		case 440:
			return 835771095;
		case 441:
			return 1963317232;
		case 442:
			return 259627919;
		case 443:
			return 1299075397;
		case 444:
			return -1509094230;
		case 445:
			return 61132362;
		case 446:
			return 1549741908;
		case 447:
			return 288484254;
		case 448:
			return -1877032947;
		case 449:
			return -1395676456;
		case 450:
			return 1136146715;
		case 451:
			return 468034421;
		case 452:
			return 1079459546;
		case 453:
			return -140369351;
		case 454:
			return 1822341990;
		case 455:
			return 1219701681;
		case 456:
			return 1601295268;
		case 457:
			return -1692460667;
		case 458:
			return 1471419228;
		case 459:
			return 907446160;
		case 460:
			return -1126482585;
		case 461:
			return 1911050315;
		case 462:
			return -1343525599;
		case 463:
			return 1261891225;
		case 464:
			return 763162704;
		case 465:
			return 1335861197;
		case 466:
			return 526744654;
		case 467:
			return -1177461517;
		case 468:
			return -241638635;
		case 469:
			return 1024262875;
		case 470:
			return 853355463;
		case 471:
			return -337288221;
		case 472:
			return 361381308;
		case 473:
			return -1264898804;
		case 474:
			return -585289073;
		case 475:
			return 1423542233;
		case 476:
			return -948489286;
		case 477:
			return 2063859257;
		case 478:
			return -1652627327;
		case 479:
			return -1959697839;
		case 480:
			return -1532267859;
		case 481:
			return -1410062763;
		case 482:
			return -901428716;
		case 483:
			return -1628873469;
		case 484:
			return 144855571;
		case 485:
			return -617589883;
		case 486:
			return -1306457086;
		case 487:
			return 1713542477;
		case 488:
			return -305542365;
		case 489:
			return 1985390213;
		case 490:
			return -2145069367;
		case 491:
			return -1674390752;
		case 492:
			return -2117214398;
		case 493:
			return 1880805647;
		case 494:
			return -62390436;
		case 495:
			return 1815288415;
		case 496:
			return 196214097;
		case 497:
			return -201958220;
		case 498:
			return 244353594;
		case 499:
			return 302954672;
		case 500:
			return -1870144662;
		case 501:
			return 257892944;
		case 502:
			return -607182722;
		case 503:
			return -13254502;
		case 504:
			return 1400281261;
		case 505:
			return 1601515402;
		case 506:
			return -940704970;
		case 507:
			return -548371721;
		case 508:
			return -1022384613;
		case 509:
			return -357406394;
		case 510:
			return 1077068189;
		case 511:
			return -782241404;
		case 512:
			return 1669853467;
		case 513:
			return 1592019450;
		case 514:
			return 635273153;
		case 515:
			return -1559225678;
		case 516:
			return -266425508;
		case 517:
			return 1117400455;
		case 518:
			return 454332195;
		case 519:
			return -1328061889;
		case 520:
			return 561650932;
		case 521:
			return 256105670;
		case 522:
			return 1976779618;
		case 523:
			return -269095126;
		case 524:
			return 2145617267;
		case 525:
			return 1150213537;
		case 526:
			return 1598825281;
		case 527:
			return -712527121;
		case 528:
			return 1308553072;
		case 529:
			return 852866398;
		case 530:
			return -1794417972;
		case 531:
			return 293062146;
		case 532:
			return 95360094;
		case 533:
			return 807631773;
		case 534:
			return 1603958275;
		case 535:
			return 860052020;
		case 536:
			return -1885979781;
		case 537:
			return 746147970;
		case 538:
			return 666663006;
		case 539:
			return -2096186453;
		case 540:
			return 859409444;
		case 541:
			return -671427187;
		case 542:
			return 100192478;
		case 543:
			return 307812616;
		case 544:
			return 1670843243;
		case 545:
			return 899615863;
		case 546:
			return -298901850;
		case 547:
			return 1379186917;
		case 548:
			return -817206030;
		case 549:
			return -1150323212;
		case 550:
			return -247466821;
		case 551:
			return 427124242;
		case 552:
			return 855418120;
		case 553:
			return -777015093;
		case 554:
			return -722462870;
		case 555:
			return -937454324;
		case 556:
			return -339438116;
		case 557:
			return 2135639035;
		case 558:
			return 1254273765;
		case 559:
			return -792172668;
		case 560:
			return 1905987493;
		case 561:
			return 495693044;
		case 562:
			return -1693422950;
		case 563:
			return -205873076;
		case 564:
			return -2143114654;
		case 565:
			return -1420574021;
		case 566:
			return -1959250381;
		case 567:
			return -1088328663;
		case 568:
			return 513602003;
		case 569:
			return 359221401;
		case 570:
			return 1005272;
		case 571:
			return 1583044470;
		case 572:
			return 348853959;
		case 573:
			return 1045621973;
		case 574:
			return 1084576580;
		case 575:
			return 1651573695;
		case 576:
			return 1463321587;
		case 577:
			return -997505963;
		case 578:
			return -1649851713;
		case 579:
			return -386012962;
		case 580:
			return 1386101789;
		case 581:
			return 1227915917;
		case 582:
			return -218846335;
		case 583:
			return -352578118;
		case 584:
			return 1426626782;
		case 585:
			return -714081520;
		case 586:
			return 74547781;
		case 587:
			return 1271463052;
		case 588:
			return 1983140194;
		case 589:
			return 677262775;
		case 590:
			return -832337898;
		case 591:
			return -319249747;
		case 592:
			return -16955722;
		case 593:
			return -1535425646;
		case 594:
			return -1063641743;
		case 595:
			return -1041133401;
		case 596:
			return 1380479304;
		case 597:
			return 600890828;
		case 598:
			return 733333190;
		case 599:
			return 1843035435;
		case 600:
			return -304127320;
		case 601:
			return 122470371;
		case 602:
			return 0;
		case 603:
			return -1591664384;
		case 604:
			return -673000374;
		case 605:
			return -1150938404;
		case 606:
			return -1756997214;
		case 607:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_933(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_989(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_689(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_934(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_497(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_934(bool bParam0)
{
	if (func_268() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_497(bParam0));
}

int func_935(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_990(iParam0))
	{
		return 0;
	}
	if (!func_934(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_936(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_991(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_937(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_938(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_497(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_939(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_940(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_941(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_942(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_944(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_945(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_946(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_947(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_948()
{
	return Global_1946804.f_1;
}

void func_949(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_950(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_951(var uParam0, int iParam1)
{
	int iVar0;

	if (func_268() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_949(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_950(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_952(int iParam0, int iParam1, int iParam2)
{
	if (func_268() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] = (Global_26796.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_953(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

bool func_954()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_955(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_956()
{
	float fVar0;
	int iVar1;

	fVar0 = func_992(13);
	iVar1 = func_993(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_957()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_958()
{
	if (func_994())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_959()
{
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_960()
{
	return Global_1955565.f_3;
}

void func_961(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_854(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_962(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_854(iParam0, 2, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], GET_HASH_KEY("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], GET_HASH_KEY("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

bool func_963()
{
	return func_992(12) <= -99f;
}

bool func_964()
{
	return func_992(12) >= 99f;
}

char* func_965(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_995(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1225639.f_21[iParam0])
	{
		return sVar0;
	}
	if (func_995(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108178[iParam0 /*37*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108178[iParam0 /*37*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1225639.f_120[iParam0]);
}

char* func_966(char* sParam0, int iParam1)
{
	if (iParam1 == GET_HASH_KEY("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_996(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_967(int iParam0)
{
	iParam0 = func_222(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_968(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_969()
{
	int iVar0;

	iVar0 = Global_1946804.f_529[9];
	iVar0 = (iVar0 + Global_1946804.f_529[4]);
	iVar0 = (iVar0 + Global_1946804.f_529[10]);
	iVar0 = (iVar0 + Global_1946804.f_529[1]);
	iVar0 = (iVar0 + Global_1946804.f_529[2]);
	iVar0 = (iVar0 + Global_1946804.f_529[6]);
	iVar0 = (iVar0 + Global_1946804.f_529[29]);
	iVar0 = (iVar0 + Global_1946804.f_529[26]);
	iVar0 = (iVar0 + Global_1946804.f_529[18]);
	iVar0 = (iVar0 + Global_1946804.f_529[19]);
	return iVar0 > 0;
}

bool func_970(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_453(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_997(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_938("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_939(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_471(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_941(iVar1);
				return true;
			}
			iVar3++;
		}
		func_941(iVar1);
	}
	return false;
}

int func_971(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_453(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_997(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_998(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_497(bParam2), iParam0, 0);
	return iVar2;
}

int func_972()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		if (iVar0 == GET_HASH_KEY("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_940(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_940(iVar0)) || iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_973(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804.f_2657.f_19)
	{
		if (iParam0 == Global_1946804.f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_974(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_999(iParam1))
		{
			func_1000(bParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(bParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(bParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(bParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(bParam0) && !bParam3)
		{
			func_1001(bParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(bParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1002(bParam0, 0);
			bVar0 = true;
		}
		func_888(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

bool func_975(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_934(0))
	{
		return func_1003(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_689(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_497(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_976(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_897(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_681(0) };
	if (func_1004(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_977(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_497(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_978(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_497(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_979(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<17> Var16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_689(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_980(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_496(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1005(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar33 = func_1006(1168099063, &Var16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_980(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_981(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<17> Var28;
	struct<17> Var45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	if (func_980(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_689(Param0, &Var0, 1, 0) || !func_689(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_980(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1005(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var45 = { func_1005(&Var14) };
	Var45.f_4 = { Var0.f_5 };
	Var45.f_11 = Var0.f_9;
	Var45.f_10 = (Var0.f_10 || iParam8);
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, GET_HASH_KEY("BASKET"), 1168099063))
		{
			if (func_1007(iVar62, 1168099063, &Var28) && func_1007(iVar62, 1168099063, &Var45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_1008(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_1006(1168099063, &Var28, 0);
		iVar62 = func_1006(1168099063, &Var45, 0);
	}
	return iVar62;
}

bool func_982(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("A_C_HORSE_GANG_BILL"):
		case GET_HASH_KEY("A_C_HORSE_GANG_SEAN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_JOHN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_KAREN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_DUTCH"):
		case GET_HASH_KEY("A_C_HORSE_EAGLEFLIES"):
		case GET_HASH_KEY("A_C_HORSE_GANG_JAVIER"):
		case GET_HASH_KEY("A_C_HORSE_GANG_SADIE"):
		case GET_HASH_KEY("A_C_HORSE_GANG_LENNY"):
		case GET_HASH_KEY("A_C_HORSE_GANG_MICAH"):
		case GET_HASH_KEY("A_C_HORSE_GANG_HOSEA"):
		case GET_HASH_KEY("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case GET_HASH_KEY("A_C_HORSE_GANG_CHARLES"):
		case GET_HASH_KEY("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case GET_HASH_KEY("A_C_HORSE_GANG_TRELAWNEY"):
		case GET_HASH_KEY("A_C_HORSE_GANG_KIERAN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_UNCLE"):
		case GET_HASH_KEY("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

int func_983()
{
	return Global_40.f_1095.f_3135;
}

void func_984(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_985(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_497(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_689(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_986(int iParam0)
{
	int iVar0;

	if (!func_453(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_454(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_987(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1009(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_988(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_989(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_990(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_991(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_992(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_993(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_994()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_995(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1010(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_1011())
	{
		return func_1010(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_1010(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_996(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_997(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_453(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_691(iParam0, 1399091007))
	{
		func_1012(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_998(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1013(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1014(&Var0, func_683(0));
	}
	if (!func_1015(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_941(iVar14);
	return iVar15;
}

bool func_999(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("CS_SISTERCALDERON"):
		case GET_HASH_KEY("CS_STRSHERIFF_01"):
		case GET_HASH_KEY("CS_MUD2BIGGUY"):
		case GET_HASH_KEY("CS_RAINSFALL"):
		case GET_HASH_KEY("CS_PENELOPEBRAITHWAITE"):
		case GET_HASH_KEY("CS_SWAMPWEIRDOSONNY"):
		case GET_HASH_KEY("CS_UNIDUSTERJAIL_01"):
		case GET_HASH_KEY("CS_IANGRAY"):
		case GET_HASH_KEY("CS_TINYHERMIT"):
		case GET_HASH_KEY("CS_TIMOTHYDONAHUE"):
		case GET_HASH_KEY("CS_PRINCESSISABEAU"):
		case GET_HASH_KEY("CS_LEVITICUSCORNWALL"):
		case GET_HASH_KEY("CS_DIDSBURY"):
		case GET_HASH_KEY("CS_FEATHERSTONCHAMBERS"):
		case GET_HASH_KEY("CS_FEATSOFSTRENGTH"):
		case GET_HASH_KEY("CS_BANDPIANIST"):
		case GET_HASH_KEY("CS_ESCAPEARTISTASSISTANT"):
		case GET_HASH_KEY("CS_GARETHBRAITHWAITE"):
		case GET_HASH_KEY("CS_CREOLEGUY"):
		case GET_HASH_KEY("CS_LEIGHGRAY"):
		case GET_HASH_KEY("CS_STRAWBERRYOUTLAW_02"):
		case GET_HASH_KEY("CS_GLORIA"):
		case GET_HASH_KEY("CS_WARVET"):
		case GET_HASH_KEY("CS_JOCKGRAY"):
		case GET_HASH_KEY("CS_DAVIDGEDDES"):
		case GET_HASH_KEY("CS_GUIDOMARTELLI"):
		case GET_HASH_KEY("CS_DUNCANGEDDES"):
		case GET_HASH_KEY("CS_DUSTERINFORMANT_01"):
		case GET_HASH_KEY("CS_PINKERTONGOON"):
		case GET_HASH_KEY("CS_MICKEY"):
		case GET_HASH_KEY("CS_TWINBROTHER_02"):
		case GET_HASH_KEY("CS_HESTONJAMESON"):
		case GET_HASH_KEY("CS_STRDEPUTY_01"):
		case GET_HASH_KEY("CS_ABE"):
		case GET_HASH_KEY("CS_ODDFELLOWSPINHEAD"):
		case GET_HASH_KEY("CS_SWAMPFREAK"):
		case GET_HASH_KEY("CS_MRADLER"):
		case GET_HASH_KEY("CS_ABERDEENPIGFARMER"):
		case GET_HASH_KEY("CS_HOBARTCRAWLEY"):
		case GET_HASH_KEY("CS_FORMYARTBIGWOMAN"):
		case GET_HASH_KEY("CS_NORRISFORSYTHE"):
		case GET_HASH_KEY("CS_JULES"):
		case GET_HASH_KEY("CS_TOMDICKENS"):
		case GET_HASH_KEY("CS_GERALDBRAITHWAITE"):
		case GET_HASH_KEY("CS_PAYTAH"):
		case GET_HASH_KEY("CS_CANCAN_03"):
		case GET_HASH_KEY("CS_GRIZZLEDJON"):
		case GET_HASH_KEY("CS_WROBEL"):
		case GET_HASH_KEY("CS_MEREDITH"):
		case GET_HASH_KEY("CS_CREEPYOLDLADY"):
		case GET_HASH_KEY("CS_NBXRECEPTIONIST_01"):
		case GET_HASH_KEY("CS_NBXPOLICECHIEFFORMAL"):
		case GET_HASH_KEY("CS_CORNWALLTRAINCONDUCTOR"):
		case GET_HASH_KEY("CS_RHODEPUTY_01"):
		case GET_HASH_KEY("CS_DRMALCOLMMACINTOSH"):
		case GET_HASH_KEY("CS_LEON"):
		case GET_HASH_KEY("CS_SHERIFFOWENS"):
		case GET_HASH_KEY("CS_SDDOCTOR_01"):
		case GET_HASH_KEY("CS_SCOTTGRAY"):
		case GET_HASH_KEY("CS_CANCAN_01"):
		case GET_HASH_KEY("CS_CREOLECAPTAIN"):
		case GET_HASH_KEY("CS_BRONTESBUTLER"):
		case GET_HASH_KEY("CS_JANSON"):
		case GET_HASH_KEY("CS_FORGIVENWIFE_01"):
		case GET_HASH_KEY("CS_TIGERHANDLER"):
		case GET_HASH_KEY("CS_FRENCHARTIST"):
		case GET_HASH_KEY("CS_GENSTORYMALE"):
		case GET_HASH_KEY("CS_CLAY"):
		case GET_HASH_KEY("CS_STRDEPUTY_02"):
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_03"):
		case GET_HASH_KEY("CS_BIVCOACHDRIVER"):
		case GET_HASH_KEY("CS_BRAITHWAITEBUTLER"):
		case GET_HASH_KEY("CS_CLEET"):
		case GET_HASH_KEY("CS_JOE"):
		case GET_HASH_KEY("CS_SLAVECATCHER"):
		case GET_HASH_KEY("CS_BRAITHWAITEMAID"):
		case GET_HASH_KEY("CS_TWINGROUPIE_02"):
		case GET_HASH_KEY("CS_MRSGEDDES"):
		case GET_HASH_KEY("CS_SAMARITAN"):
		case GET_HASH_KEY("CS_EXCONFEDINFORMANT"):
		case GET_HASH_KEY("CS_FRENCHMAN_01"):
		case GET_HASH_KEY("CS_BANDSINGER"):
		case GET_HASH_KEY("CS_BAPTISTE"):
		case GET_HASH_KEY("CS_ANGUSGEDDES"):
		case GET_HASH_KEY("CS_MYSTERIOUSSTRANGER"):
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_01"):
		case GET_HASH_KEY("CS_BARTHOLOMEWBRAITHWAITE"):
		case GET_HASH_KEY("CS_MIXEDRACEKID"):
		case GET_HASH_KEY("CS_BEATENUPCAPTAIN"):
		case GET_HASH_KEY("CS_EDGARROSS"):
		case GET_HASH_KEY("CS_TWINGROUPIE_01"):
		case GET_HASH_KEY("CS_MRSWEATHERS"):
		case GET_HASH_KEY("CS_JAMIE"):
		case GET_HASH_KEY("CS_KARENSJOHN_01"):
		case GET_HASH_KEY("CS_THOMASDOWN"):
		case GET_HASH_KEY("CS_OBEDIAHHINTON"):
		case GET_HASH_KEY("CS_AGNESDOWD"):
		case GET_HASH_KEY("CS_CAVEHERMIT"):
		case GET_HASH_KEY("CS_BRYNNTILDON"):
		case GET_HASH_KEY("CS_GERMANSON"):
		case GET_HASH_KEY("CS_BRENDACRAWLEY"):
		case GET_HASH_KEY("CS_COLFAVOURS"):
		case GET_HASH_KEY("CS_RHODESKIDNAPVICTIM"):
		case GET_HASH_KEY("CS_EXCONFEDSLEADER_01"):
		case GET_HASH_KEY("CS_CANCAN_04"):
		case GET_HASH_KEY("CS_TOWNCRIER"):
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_04"):
		case GET_HASH_KEY("CS_DALEMARONEY"):
		case GET_HASH_KEY("CS_ANGRYHUSBAND"):
		case GET_HASH_KEY("CS_LILLIANPOWELL"):
		case GET_HASH_KEY("CS_ANDERSHELGERSON"):
		case GET_HASH_KEY("CS_POORJOE"):
		case GET_HASH_KEY("CS_BRAITHWAITESERVANT"):
		case GET_HASH_KEY("CS_BROTHERDORKINS"):
		case GET_HASH_KEY("CS_ALBERTMASON"):
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_05"):
		case GET_HASH_KEY("CS_BALLOONOPERATOR"):
		case GET_HASH_KEY("CS_ALBERTCAKEESQUIRE"):
		case GET_HASH_KEY("CS_MRSFELLOWS"):
		case GET_HASH_KEY("CS_CANCANMAN_01"):
		case GET_HASH_KEY("CS_POISONWELLSHAMAN"):
		case GET_HASH_KEY("CS_CANCAN_02"):
		case GET_HASH_KEY("CS_MEREDITHSMOTHER"):
		case GET_HASH_KEY("CS_ANGEL"):
		case GET_HASH_KEY("CS_ARCHERFORDHAM"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_01"):
		case GET_HASH_KEY("CS_CHELONIANMASTER"):
		case GET_HASH_KEY("CS_TWINBROTHER_01"):
		case GET_HASH_KEY("CS_GERMANDAUGHTER"):
		case GET_HASH_KEY("CS_LEMIUXASSISTANT"):
		case GET_HASH_KEY("CS_CREOLEDOCTOR"):
		case GET_HASH_KEY("CS_CRACKPOTROBOT"):
		case GET_HASH_KEY("CS_BANDBASSIST"):
		case GET_HASH_KEY("CS_GENSTORYFEMALE"):
		case GET_HASH_KEY("CS_MARYLINTON"):
		case GET_HASH_KEY("CS_VALPRAYINGMAN"):
		case GET_HASH_KEY("CS_JOHNTHEBAPTISINGMADMAN"):
		case GET_HASH_KEY("CS_MRS_CALHOUN"):
		case GET_HASH_KEY("CS_THEODORELEVIN"):
		case GET_HASH_KEY("CS_NICHOLASTIMMINS"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_03"):
		case GET_HASH_KEY("CS_DINOBONESLADY"):
		case GET_HASH_KEY("CS_BEAUGRAY"):
		case GET_HASH_KEY("CS_STRAWBERRYOUTLAW_01"):
		case GET_HASH_KEY("CS_CRACKPOTINVENTOR"):
		case GET_HASH_KEY("CS_HERCULE"):
		case GET_HASH_KEY("CS_GAVIN"):
		case GET_HASH_KEY("CS_LEVISIMON"):
		case GET_HASH_KEY("CS_LONDONDERRYSON"):
		case GET_HASH_KEY("CS_CAPTAINMONROE"):
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_02"):
		case GET_HASH_KEY("CS_MRSLONDONDERRY"):
		case GET_HASH_KEY("CS_SOOTHSAYER"):
		case GET_HASH_KEY("CS_TAVISHGRAY"):
		case GET_HASH_KEY("CS_JOEBUTLER"):
		case GET_HASH_KEY("CS_BANDDRUMMER"):
		case GET_HASH_KEY("CS_LILLYMILLET"):
		case GET_HASH_KEY("CS_ANSEL_ATHERTON"):
		case GET_HASH_KEY("CS_RHODEPUTY_02"):
		case GET_HASH_KEY("CS_EDMUNDLOWRY"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_02"):
		case GET_HASH_KEY("CS_MAGNIFICO"):
		case GET_HASH_KEY("CS_ARTAPPRAISER"):
		case GET_HASH_KEY("CS_FORGIVENHUSBAND_01"):
		case GET_HASH_KEY("CS_REVERENDFORTHERINGHAM"):
		case GET_HASH_KEY("CS_DAVEYCALLENDER"):
		case GET_HASH_KEY("CS_DESMOND"):
		case GET_HASH_KEY("CS_ADAMGRAY"):
		case GET_HASH_KEY("CS_JIMCALLOWAY"):
		case GET_HASH_KEY("CS_SDSALOONDRUNK_01"):
		case GET_HASH_KEY("CS_NBXDRUNK"):
		case GET_HASH_KEY("CS_GERMANMOTHER"):
		case GET_HASH_KEY("CS_RINGMASTER"):
		case GET_HASH_KEY("CS_LUCANAPOLI"):
		case GET_HASH_KEY("CS_RHODESASSISTANT"):
		case GET_HASH_KEY("CS_ABERDEENSISTER"):
		case GET_HASH_KEY("CS_NBXEXECUTED"):
		case GET_HASH_KEY("CS_FAMOUSGUNSLINGER_06"):
		case GET_HASH_KEY("CS_JOHNWEATHERS"):
		case GET_HASH_KEY("CS_PROFESSORBELL"):
		case GET_HASH_KEY("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_1000(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_716(bParam0, iParam1))
		{
			if (func_718(bParam0, iParam1))
			{
				if (func_719(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_720(bParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_1001(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(bParam0, GET_HASH_KEY("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_1002(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, GET_HASH_KEY("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

int func_1003(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<29> Var16;
	struct<18> Var45;
	struct<17> Var63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_689(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_682(Var1.f_4);
	if (iVar15 == GET_HASH_KEY("HORSE"))
	{
		Var16 = { func_1016(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1017(GET_HASH_KEY("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == GET_HASH_KEY("CLOTHING"))
	{
		Var45 = { func_1018(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_1019(GET_HASH_KEY("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_1005(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_1006(GET_HASH_KEY("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1004(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_497(bParam2), uParam0, iParam1);
}

struct<17> func_1005(var uParam0)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1006(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_1007(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1008(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1008(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1008(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_1007(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1008(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1020(iParam0, iParam1);
}

int func_1009(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1021(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1010(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1011()
{
	return Global_1109400.f_245;
}

void func_1012(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER");
			break;
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER");
			break;
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = GET_HASH_KEY("SHOTGUN_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_SHOTGUN");
			break;
		case GET_HASH_KEY("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = GET_HASH_KEY("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_SHOTGUN");
			break;
		case GET_HASH_KEY("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = GET_HASH_KEY("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = GET_HASH_KEY("AMMO_SHOTGUN_SLUG");
			break;
		case GET_HASH_KEY("AMMO_22_AMMOBOX"):
			*uParam1 = GET_HASH_KEY("22_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_22");
			break;
	}
}

struct<14> func_1013(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1014(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1015(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_497(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<29> func_1016(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_497(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1005(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1017(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_1022(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1008(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1008(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1008(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_1018(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_497(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1005(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1019(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_1023(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1008(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1008(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1008(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1020(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1224227 < 20)
	{
		Global_1224227++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224227.f_1[iVar0 /*9*/] = { Global_1224227.f_1[iVar0 + 1 /*9*/] };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Global_1224227.f_1[(Global_1224227 - 1) /*9*/] = { Var1 };
}

int func_1021(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case GET_HASH_KEY("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case GET_HASH_KEY("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case GET_HASH_KEY("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case GET_HASH_KEY("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case GET_HASH_KEY("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case GET_HASH_KEY("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case GET_HASH_KEY("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case GET_HASH_KEY("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case GET_HASH_KEY("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case GET_HASH_KEY("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case GET_HASH_KEY("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case GET_HASH_KEY("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case GET_HASH_KEY("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case GET_HASH_KEY("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case GET_HASH_KEY("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case GET_HASH_KEY("CSTAG_BCH_BASE"):
			return 10;
		case GET_HASH_KEY("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case GET_HASH_KEY("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case GET_HASH_KEY("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case GET_HASH_KEY("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case GET_HASH_KEY("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case GET_HASH_KEY("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case GET_HASH_KEY("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case GET_HASH_KEY("CSTAG_FLOW_IND3_POST"):
			return 422;
		case GET_HASH_KEY("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case GET_HASH_KEY("CSTAG_HONOR_LOW"):
			return 338;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case GET_HASH_KEY("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case GET_HASH_KEY("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case GET_HASH_KEY("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case GET_HASH_KEY("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case GET_HASH_KEY("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case GET_HASH_KEY("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case GET_HASH_KEY("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case GET_HASH_KEY("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case GET_HASH_KEY("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case GET_HASH_KEY("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case GET_HASH_KEY("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case GET_HASH_KEY("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case GET_HASH_KEY("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case GET_HASH_KEY("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case GET_HASH_KEY("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case GET_HASH_KEY("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case GET_HASH_KEY("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case GET_HASH_KEY("CSTAG_PRG_BASE"):
			return 9;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case GET_HASH_KEY("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case GET_HASH_KEY("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case GET_HASH_KEY("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case GET_HASH_KEY("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case GET_HASH_KEY("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case GET_HASH_KEY("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case GET_HASH_KEY("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case GET_HASH_KEY("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case GET_HASH_KEY("CSTAG_COL_BASE"):
			return 2;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case GET_HASH_KEY("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case GET_HASH_KEY("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case GET_HASH_KEY("CSTAG_HSO_BASE"):
			return 3;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case GET_HASH_KEY("CSTAG_FLOW_DST1_POST"):
			return 372;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case GET_HASH_KEY("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case GET_HASH_KEY("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case GET_HASH_KEY("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case GET_HASH_KEY("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case GET_HASH_KEY("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case GET_HASH_KEY("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case GET_HASH_KEY("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case GET_HASH_KEY("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case GET_HASH_KEY("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case GET_HASH_KEY("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case GET_HASH_KEY("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case GET_HASH_KEY("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case GET_HASH_KEY("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case GET_HASH_KEY("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case GET_HASH_KEY("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case GET_HASH_KEY("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case GET_HASH_KEY("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case GET_HASH_KEY("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case GET_HASH_KEY("CSTAG_FLOW_AB21_POST"):
			return 469;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case GET_HASH_KEY("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case GET_HASH_KEY("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case GET_HASH_KEY("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case GET_HASH_KEY("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case GET_HASH_KEY("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case GET_HASH_KEY("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case GET_HASH_KEY("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case GET_HASH_KEY("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case GET_HASH_KEY("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case GET_HASH_KEY("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case GET_HASH_KEY("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case GET_HASH_KEY("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case GET_HASH_KEY("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case GET_HASH_KEY("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case GET_HASH_KEY("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case GET_HASH_KEY("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case GET_HASH_KEY("CSTAG_SUPPLY_HIGH"):
			return 34;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case GET_HASH_KEY("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case GET_HASH_KEY("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case GET_HASH_KEY("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case GET_HASH_KEY("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case GET_HASH_KEY("CSTAG_VIG_CLM_BASE"):
			return 361;
		case GET_HASH_KEY("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case GET_HASH_KEY("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case GET_HASH_KEY("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case GET_HASH_KEY("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case GET_HASH_KEY("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case GET_HASH_KEY("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case GET_HASH_KEY("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case GET_HASH_KEY("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case GET_HASH_KEY("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case GET_HASH_KEY("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case GET_HASH_KEY("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case GET_HASH_KEY("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case GET_HASH_KEY("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case GET_HASH_KEY("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case GET_HASH_KEY("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case GET_HASH_KEY("CSTAG_FLOW_BE22_POST"):
			return 477;
		case GET_HASH_KEY("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case GET_HASH_KEY("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case GET_HASH_KEY("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case GET_HASH_KEY("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case GET_HASH_KEY("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case GET_HASH_KEY("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case GET_HASH_KEY("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case GET_HASH_KEY("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case GET_HASH_KEY("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case GET_HASH_KEY("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case GET_HASH_KEY("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case GET_HASH_KEY("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case GET_HASH_KEY("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case GET_HASH_KEY("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case GET_HASH_KEY("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case GET_HASH_KEY("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case GET_HASH_KEY("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case GET_HASH_KEY("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case GET_HASH_KEY("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case GET_HASH_KEY("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case GET_HASH_KEY("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case GET_HASH_KEY("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case GET_HASH_KEY("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case GET_HASH_KEY("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case GET_HASH_KEY("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case GET_HASH_KEY("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case GET_HASH_KEY("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case GET_HASH_KEY("CSTAG_BVH_BASE"):
			return 8;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case GET_HASH_KEY("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case GET_HASH_KEY("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case GET_HASH_KEY("CSTAG_VIG_BVH_BASE"):
			return 365;
		case GET_HASH_KEY("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case GET_HASH_KEY("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case GET_HASH_KEY("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case GET_HASH_KEY("CSTAG_LOITERING"):
			return 336;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case GET_HASH_KEY("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case GET_HASH_KEY("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case GET_HASH_KEY("CSTAG_FLOW_DST3_POST"):
			return 407;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case GET_HASH_KEY("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case GET_HASH_KEY("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case GET_HASH_KEY("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case GET_HASH_KEY("CSTAG_VIG_HSO_BASE"):
			return 356;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case GET_HASH_KEY("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case GET_HASH_KEY("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case GET_HASH_KEY("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case GET_HASH_KEY("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case GET_HASH_KEY("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case GET_HASH_KEY("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case GET_HASH_KEY("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case GET_HASH_KEY("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case GET_HASH_KEY("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case GET_HASH_KEY("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case GET_HASH_KEY("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case GET_HASH_KEY("CSTAG_VIG_SDB_BASE"):
			return 363;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case GET_HASH_KEY("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case GET_HASH_KEY("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case GET_HASH_KEY("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case GET_HASH_KEY("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case GET_HASH_KEY("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case GET_HASH_KEY("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case GET_HASH_KEY("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case GET_HASH_KEY("CSTAG_GUA_BASE"):
			return 6;
		case GET_HASH_KEY("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case GET_HASH_KEY("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case GET_HASH_KEY("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case GET_HASH_KEY("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case GET_HASH_KEY("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case GET_HASH_KEY("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case GET_HASH_KEY("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case GET_HASH_KEY("CSTAG_FLOW_IND1_POST"):
			return 421;
		case GET_HASH_KEY("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case GET_HASH_KEY("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case GET_HASH_KEY("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case GET_HASH_KEY("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case GET_HASH_KEY("CSTAG_PLAYER_DIRTY"):
			return 339;
		case GET_HASH_KEY("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case GET_HASH_KEY("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case GET_HASH_KEY("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case GET_HASH_KEY("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case GET_HASH_KEY("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case GET_HASH_KEY("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case GET_HASH_KEY("CSTAG_PLAYER_AWAY"):
			return 340;
		case GET_HASH_KEY("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case GET_HASH_KEY("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case GET_HASH_KEY("CSTAG_FLOW_REV1_POST"):
			return 390;
		case GET_HASH_KEY("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case GET_HASH_KEY("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case GET_HASH_KEY("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case GET_HASH_KEY("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case GET_HASH_KEY("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case GET_HASH_KEY("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case GET_HASH_KEY("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case GET_HASH_KEY("CSTAG_FLOW_MR52_POST"):
			return 475;
		case GET_HASH_KEY("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case GET_HASH_KEY("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case GET_HASH_KEY("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case GET_HASH_KEY("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case GET_HASH_KEY("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case GET_HASH_KEY("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case GET_HASH_KEY("CSTAG_SDB_BASE"):
			return 5;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case GET_HASH_KEY("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case GET_HASH_KEY("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case GET_HASH_KEY("CSTAG_FLOW_TRN2_POST"):
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1022(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_1023(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

