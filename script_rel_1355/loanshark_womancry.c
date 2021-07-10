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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	vector3 vLocal_23[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_51[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<19> Local_70[3];
	struct<22> Local_128 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_150 = 3;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	struct<10> Local_153[4];
	var uLocal_194 = 4;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 4;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	struct<91> Local_212[7];
	struct<22> Local_850 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_872 = 3;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	bool bLocal_877 = false;
	vector3 vLocal_878 = { 0f, 0f, 0f };
	vector3 vLocal_881 = { 0f, 0f, 0f };
	vector3 vLocal_884 = { 0f, 0f, 0f };
	struct<22> Local_887 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_909 = 3;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	char[] cLocal_912[8] = 0;
	char* sLocal_913[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	var uLocal_957 = 0;
	vector3 vLocal_958 = { 0f, 0f, 0f };
	vector3 vLocal_961 = { 0f, 0f, 0f };
	vector3 vLocal_964[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_971[2] = { 0f, 0f };
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	var uLocal_979[2] = { 0, 0 };
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	struct<180> Local_992 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 1, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = -1082130432;
	var uLocal_1177 = -1082130432;
	var uLocal_1178 = 1103626240;
	var uLocal_1179 = -1067450368;
	var uLocal_1180 = 1097859072;
	var uLocal_1181 = 1073741824;
	var uLocal_1182 = 4000;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 1073741824;
	var uLocal_1205 = 0;
	struct<8> Local_1206 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_1214 = 2;
	var uLocal_1215 = 1;
	var uLocal_1216 = 1;
	var uLocal_1217 = 1;
	var uLocal_1218 = 0;
	var uLocal_1219 = 1;
	var uLocal_1220 = 2;
	var uLocal_1221 = 2;
	var uLocal_1222 = 3;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 3;
	var uLocal_1226 = 1;
	var uLocal_1227 = 3;
	var uLocal_1228 = 3;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	struct<19> Local_1231 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0 } ;
	var uLocal_1250 = 3;
	var uLocal_1251 = 1;
	var uLocal_1252 = 3;
	var uLocal_1253 = 3;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	int iLocal_1256 = 0;
	bool bLocal_1257 = false;
	bool bLocal_1258 = false;
	int iLocal_1259 = 0;
	int iLocal_1260 = 0;
	int iLocal_1261 = 0;
	var uLocal_1262 = 0;
	bool bLocal_1263 = false;
	int iLocal_1264 = 0;
	bool bLocal_1265 = false;
	bool bLocal_1266 = false;
	int iLocal_1267 = 0;
	struct<61> Local_1268[1];
	struct<17> Local_1330[2];
	struct<61> Local_1365[1];
	struct<17> Local_1427[1];
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 1097859072;
	var uLocal_1463 = 1000;
	var uLocal_1464 = 1067450368;
	var uLocal_1465 = 5000;
	var uLocal_1466 = 42;
	var uLocal_1467 = 1103626240;
	var uLocal_1468 = 1077936128;
	var uLocal_1469 = 1106247680;
	var uLocal_1470 = 1103101952;
	var uLocal_1471 = 1097859072;
	var uLocal_1472 = 1103626240;
	int iLocal_1473 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<2278> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 5;
	iLocal_21 = 5;
	iLocal_876 = 3;
	vLocal_878 = { 1456.76f, 368.45f, 87.99f };
	vLocal_881 = { 1439.79f, 366.67f, 87.95f };
	vLocal_884 = { 1433.33f, 355.64f, 88.06f };
	cLocal_912 = "script_proc@loansharking@emerald_ranch";
	iLocal_952 = -1;
	vLocal_958 = { 1444.36f, 375.16f, 89.39f };
	vLocal_961 = { 1444.34f, 374.46f, 88.94f };
	iLocal_974 = GET_HASH_KEY("CS_COOPER");
	iLocal_975 = GET_HASH_KEY("CS_LILLYMILLET");
	iLocal_976 = GET_HASH_KEY("A_M_M_FARMTRAVELERS_COOL_01");
	iLocal_1267 = -1;
	Var0.f_3.f_5 = 1065353216;
	Var0.f_3.f_6 = 1119092736;
	Var0.f_3.f_7 = 1092616192;
	Var0.f_3.f_8 = 1085276160;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_17.f_2 = 1106247680;
	Var0.f_17.f_3 = 1101004800;
	Var0.f_17.f_4 = 1099431936;
	Var0.f_17.f_5 = 1098907648;
	Var0.f_17.f_6 = 1082130432;
	Var0.f_32 = 1;
	Var0.f_32.f_13 = 17;
	Var0.f_32.f_218 = 1097859072;
	Var0.f_32.f_219 = 1101004800;
	Var0.f_32.f_246 = 4;
	Var0.f_352.f_3 = 17;
	Var0.f_352.f_3.f_1.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_225.f_15 = 1;
	Var0.f_352.f_241 = 30;
	Var0.f_352.f_241.f_1 = -1;
	Var0.f_352.f_241.f_1.f_2 = 1;
	Var0.f_352.f_241.f_1.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_782 = 8;
	Var0.f_352.f_1111 = 8;
	Var0.f_352.f_1111.f_1.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1288 = 11;
	Var0.f_352.f_1399 = 2;
	Var0.f_352.f_1434 = 2;
	Var0.f_352.f_1451 = -1;
	Var0.f_352.f_1454 = -1;
	Var0.f_352.f_1455 = -1082130432;
	Var0.f_352.f_1537 = 24;
	Var0.f_352.f_1661 = -1;
	Var0.f_2041 = 10;
	Var0.f_2052 = 11;
	Var0.f_2077.f_8 = -1;
	Var0.f_2077.f_17 = 1097859072;
	Var0.f_2077.f_18 = 1000;
	Var0.f_2077.f_19 = 1067450368;
	Var0.f_2077.f_20 = 5000;
	Var0.f_2077.f_21 = 42;
	Var0.f_2077.f_22 = 1103626240;
	Var0.f_2077.f_23 = 1077936128;
	Var0.f_2077.f_24 = 1106247680;
	Var0.f_2077.f_25 = 1103101952;
	Var0.f_2077.f_26 = 1097859072;
	Var0.f_2077.f_27 = 1103626240;
	Var0.f_2106 = 24;
	Var0.f_2204 = -1;
	Var0.f_2210 = 2;
	Var0.f_2213 = 2;
	Var0.f_2216.f_1 = -1;
	Var0.f_2216.f_3 = -1;
	Var0.f_2216.f_6 = -1;
	Var0.f_2216.f_12 = 1073741824;
	Var0.f_2216.f_16 = 1;
	Var0.f_2216.f_26 = 1106247680;
	Var0.f_2216.f_27 = 1067450368;
	Var0.f_2216.f_29 = 1092616192;
	Var0.f_2216.f_30 = 1112014848;
	Var0.f_2216.f_31 = 1106247680;
	Var0.f_2216.f_32 = 1101529088;
	Var0.f_2216.f_33 = 1101004800;
	Var0.f_2216.f_34 = 1084227584;
	Var0.f_2277 = 1;
	Var0.f_2277.f_1.f_2 = 570;
	Var0.f_2277.f_1.f_3 = 1065353216;
	Var0.f_2277.f_1.f_4 = -1082130432;
	Var0.f_2277.f_1.f_9 = 3;
	Var0 = uScriptParam_0;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&Var0);
	while (true)
	{
		func_3(&Var0);
		if (func_4(Var0.f_16, 12))
		{
			func_5(&Var0);
		}
		else
		{
			switch (Var0.f_1)
			{
				case 0:
					func_6(&Var0);
					break;
				case 1:
					func_7(&Var0);
					break;
				case 3:
					func_8(&Var0);
					break;
				case 2:
					func_11(&Var0, func_10(&Var0, func_9()));
					if (Var0.f_1 == 8 || Var0.f_1 == 9)
					{
						HUD::DISPLAY_HUD(true);
						MAP::DISPLAY_RADAR(true);
					}
					break;
				case 6:
					func_12(&Var0);
					break;
				case 7:
					func_13(&Var0);
					break;
				case 8:
					func_14(&Var0);
					break;
				case 9:
					func_15(&Var0);
					break;
				case 10:
					func_16(&Var0, 0);
					break;
				case 11:
					func_17(&Var0);
					break;
				case 12:
					func_18(&Var0);
					break;
				case 13:
					func_19(&Var0, 0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;

	if (Global_1879534 == 1)
	{
	}
	if (func_20(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_21(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_15(uParam0);
		}
		else
		{
			func_16(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_1 == 11)
	{
		func_22(uParam0);
	}
	func_23(uParam0);
}

void func_2(char[4] cParam0)
{
	func_24(&(cParam0->f_2077));
	func_25(&(cParam0->f_2077), 1);
	func_26(&(cParam0->f_2077), 1);
	func_27(&(cParam0->f_2077), 1);
	if (*cParam0 == func_28())
	{
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
		func_30(0, 0);
	}
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	func_31(cParam0);
	func_32(cParam0);
	func_11(cParam0, 0);
}

void func_3(char[4] cParam0)
{
	struct<4> Var0;

	if (func_4(cParam0->f_16, 12))
	{
		return;
	}
	if (func_33())
	{
		func_34(&(cParam0->f_16), 4);
		if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			func_35(cParam0, 8);
		}
		return;
	}
	else if (func_36())
	{
		func_34(&(cParam0->f_16), 8);
		if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			func_35(cParam0, 9);
		}
		return;
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 256);
	if (cParam0->f_1 != 12 && cParam0->f_1 != 11)
	{
		if (!func_4(cParam0->f_16, 1) && cParam0->f_1 <= 3)
		{
			if (func_38(cParam0))
			{
				func_39(cParam0);
				if (cParam0->f_15 == 2 || cParam0->f_15 == 6)
				{
					func_23(cParam0);
				}
				else
				{
					func_11(cParam0, 11);
				}
				return;
			}
			func_40(cParam0);
		}
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			if (func_4(cParam0->f_16, 128))
			{
				if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
				{
					Var0 = { func_41(0) };
					if (func_42(&Var0))
					{
						func_43(&(cParam0->f_16), 128);
					}
				}
				else
				{
					func_43(&(cParam0->f_16), 128);
				}
			}
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 2048))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_4(cParam0->f_16, 32))
			{
				func_44();
			}
			if (!func_4(cParam0->f_16, 64))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_4(cParam0->f_16, 256))
			{
				func_45(1, 0);
			}
			if (func_46(cParam0))
			{
				func_11(cParam0, 10);
				return;
			}
		}
		func_47(cParam0);
		func_48(cParam0);
	}
}

bool func_4(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_5(var uParam0)
{
	if (func_20(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		func_16(uParam0, 0);
	}
	else
	{
		if (!func_49(&(uParam0->f_2070)))
		{
			func_50(&(uParam0->f_2070), 0);
		}
		func_51(uParam0);
		if (func_52(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_1 == 11)
			{
				func_22(uParam0);
			}
			else
			{
				func_39(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_6(char[4] cParam0)
{
	if (!func_53(64))
	{
		return;
	}
	if (func_54())
	{
		return;
	}
	if (func_55(cParam0) && func_56(cParam0->f_12))
	{
		func_11(cParam0, 1);
	}
}

void func_7(char[4] cParam0)
{
	if (func_57(cParam0))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
		{
			func_58(cParam0);
			func_11(cParam0, 2);
		}
		else
		{
			func_59(cParam0);
			func_11(cParam0, 3);
		}
	}
}

void func_8(char[4] cParam0)
{
	if (func_60(cParam0))
	{
		func_61(cParam0);
	}
}

int func_9()
{
	return Global_1572864.f_9;
}

int func_10(char[4] cParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		if (PED::IS_PED_READY_TO_RENDER(uLocal_979[0]) && PED::IS_PED_READY_TO_RENDER(uLocal_979[1]))
		{
			iLocal_16 = 1;
			func_59(cParam0);
			func_62(1, 0);
			return 6;
		}
		else
		{
			if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[0]))
			{
			}
			if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[1]))
			{
			}
		}
	}
	else if (iVar0 == 1)
	{
		if (func_63(uLocal_979[0], 0) && func_63(uLocal_979[1], 0))
		{
			if (PED::IS_PED_READY_TO_RENDER(uLocal_979[0]) && PED::IS_PED_READY_TO_RENDER(uLocal_979[1]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
				func_64();
				func_65(67108864);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(uLocal_979[1], &uVar1));
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[1], 1425.229f, 382.8184f, 88.9811f, 257.4694f, true, false, true);
				func_66();
				func_67(0);
				func_62(1, 1);
				return 8;
			}
			else
			{
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[0]))
				{
				}
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[1]))
				{
				}
			}
		}
	}
	else if (iVar0 == 2)
	{
		if (func_63(uLocal_979[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
			func_64();
		}
		func_68();
		if (func_63(uLocal_979[1], 0) && !TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[1], 1427.44f, 383.25f, 88.86f, 248.0144f, true, false, true);
			TASK::TASK_KNOCKED_OUT(uLocal_979[1], 10f, true);
			func_69(uLocal_979[1], Local_992.f_74, 1, 0);
			func_65(256);
		}
		else if (TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			if ((PED::IS_PED_READY_TO_RENDER(uLocal_979[0]) && PED::IS_PED_READY_TO_RENDER(uLocal_979[1])) && TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
			{
				if (!func_49(&uLocal_946))
				{
					func_70(&uLocal_946);
				}
				else if (func_52(&uLocal_946) > 1000)
				{
					func_71(&uLocal_946);
					func_67(3);
					PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(uLocal_979[1], &uVar2));
					func_62(1, 1);
					return 8;
				}
			}
			else
			{
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[0]))
				{
				}
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[1]))
				{
				}
				if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
				{
				}
			}
		}
	}
	else if (iVar0 == 3)
	{
		if (func_63(uLocal_979[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
		}
		func_68();
		if (func_63(uLocal_979[1], 0) && !TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			func_65(256);
			func_72(Local_992.f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_73(uLocal_979[1], 1, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[1], 1427.44f, 383.25f, 88.86f, 248.0144f, true, false, true);
			TASK::TASK_KNOCKED_OUT(uLocal_979[1], 15f, false);
		}
		else if (TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
		{
			if ((PED::IS_PED_READY_TO_RENDER(uLocal_979[0]) && PED::IS_PED_READY_TO_RENDER(uLocal_979[1])) && TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
			{
				if (func_63(uLocal_979[0], 0))
				{
					func_74();
				}
				func_62(1, 1);
				return 9;
			}
			else
			{
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[0]))
				{
				}
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_979[1]))
				{
				}
				if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
				{
				}
			}
		}
	}
	return 2;
}

void func_11(char[4] cParam0, int iParam1)
{
	if (iParam1 != cParam0->f_1)
	{
		cParam0->f_2 = cParam0->f_1;
		cParam0->f_1 = iParam1;
	}
}

void func_12(char[4] cParam0)
{
	if (func_75(cParam0))
	{
		if (func_76(cParam0->f_346))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_77(&(cParam0->f_32), &(cParam0->f_352));
			func_78(cParam0);
		}
		else
		{
			func_79(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_80(0, 1, 1);
		}
		func_11(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;

	if (func_76(cParam0->f_346))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_78(cParam0))
			{
				func_81(cParam0, 1);
				iVar0 = func_82(cParam0);
				func_11(cParam0, iVar0);
			}
		}
	}
	else
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (func_83(cParam0))
		{
			func_84(cParam0);
			func_81(cParam0, 0);
			iVar0 = func_82(cParam0);
			func_11(cParam0, iVar0);
		}
		else
		{
			func_80(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), true);
			func_85(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_86(cParam0);
	if (iVar0 != 8)
	{
		func_11(cParam0, iVar0);
	}
}

void func_15(char[4] cParam0)
{
	bool bVar0;

	if (cParam0->f_1 != 9)
	{
		func_11(cParam0, 9);
	}
	func_35(cParam0, 0);
	func_87(*cParam0, 1, 1);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_88(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_89();
		func_90(0);
		func_91(&Global_1935630, 4);
	}
	if (func_92(*cParam0))
	{
		if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			func_94("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			func_94("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			func_94("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	func_43(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		func_95();
		func_96();
	}
	func_11(cParam0, 11);
}

void func_16(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (cParam0->f_1 != 10)
	{
		func_11(cParam0, 10);
	}
	func_35(cParam0, 1);
	if (bParam1 == 1)
	{
		func_95();
		func_96();
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_49(&(cParam0->f_2070)))
			{
				func_50(&(cParam0->f_2070), 0);
			}
			func_51(cParam0);
			bVar0 = CAM::IS_DEATH_FAIL_CAMERA_RUNNING();
			bVar1 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_4(cParam0->f_16, 16) && !bVar1)
			{
				if (!bVar0)
				{
					func_97(1, 1);
					func_98(&(Global_1347343.f_11), 131072);
					return;
				}
				else
				{
					func_34(&(cParam0->f_16), 16);
				}
			}
			if (bVar1)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			else if (func_52(&(cParam0->f_2070)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
		}
		iVar2 = 1;
		if (func_4(cParam0->f_16, 4))
		{
			iVar2 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_KO", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_DEAD", 16);
			}
		}
		else if (func_4(cParam0->f_16, 8))
		{
			iVar2 = 6;
			StringCopy(&(cParam0->f_2208), "PLAYER_ARRESTED", 16);
		}
		func_100(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), func_99(), 0, 0);
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_90(0);
		func_89();
		func_91(&Global_1935630, 4);
	}
	func_101(*cParam0);
	bParam1 = true;
	if (func_4(cParam0->f_16, 12))
	{
		bParam1 = true;
	}
	else
	{
		func_39(cParam0);
	}
	if (bParam1)
	{
		func_23(cParam0);
	}
	else
	{
		func_43(&(cParam0->f_16), 1);
		func_11(cParam0, 11);
	}
}

void func_17(char[4] cParam0)
{
	int iVar0;

	if (Global_1392626[*cParam0 /*32*/].f_9 & 4096 != 0)
	{
		func_102(*cParam0);
	}
	if (func_103(64, 1, 1))
	{
		iVar0 = func_104(0);
		if (func_105(iVar0))
		{
			func_22(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (func_106())
	{
		func_22(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!func_49(&(cParam0->f_2064)) || IntToFloat(func_52(&(cParam0->f_2064))) > func_107(cParam0))
	{
		func_50(&(cParam0->f_2064), 1);
		if (func_108(cParam0))
		{
			func_11(cParam0, 12);
		}
	}
}

void func_18(var uParam0)
{
	func_19(uParam0, 1);
	if (func_20(Global_1392626[*uParam0 /*32*/].f_9, 512))
	{
		func_95();
		func_96();
	}
}

void func_19(var uParam0, int iParam1)
{
	func_109(*uParam0, iParam1);
	func_23(uParam0);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_21(var uParam0, int iParam1)
{
}

void func_22(var uParam0)
{
}

void func_23(char[4] cParam0)
{
	func_110(cParam0);
	func_111(cParam0);
	func_112(cParam0);
	if ((cParam0->f_1 != 12 && func_113(cParam0) != 2) && !func_114(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_115(*cParam0);
	}
	func_112(cParam0);
	func_116(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_116(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (func_113(cParam0) == 0)
	{
		func_117(*cParam0);
	}
	func_118(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
	HUD::_TEXT_BLOCK_DELETE("LOAN");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_2205)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(cParam0->f_2205));
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_89();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0)
{
	func_119(uParam0, 0);
	func_27(uParam0, 0);
	func_120(uParam0, 1);
	func_121(uParam0, 1);
	func_122(uParam0, 0);
	func_123(uParam0, 1);
	func_124(uParam0, 1, 1, 1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 8);
	}
	else
	{
		func_126(&(uParam0->f_1), 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 2);
	}
	else
	{
		func_126(&(uParam0->f_1), 2);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 2048);
	}
	else
	{
		func_126(&(uParam0->f_1), 2048);
	}
}

int func_28()
{
	return func_128(func_127());
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_30(int iParam0, bool bParam1)
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

void func_31(var uParam0)
{
	func_129(uParam0, "LSWOMAU");
	func_130(&uLocal_1445, 1);
	func_122(&uLocal_1445, 0);
	func_131(&uLocal_1445, 0);
	func_132(&uLocal_1445, 1);
	func_121(&uLocal_1445, 0);
	func_133(&uLocal_1445, 1);
	func_123(&uLocal_1445, 1);
	func_134(&uLocal_1445, 0);
	func_135(uParam0, 2);
	func_136(uParam0, 2);
	func_137(&iLocal_984, 1429.981f, 380.7025f, 90.07715f, 0f, 0f, -13.17413f, 12.22747f, 14.6034f, 4f, "volCutsceneTrigger");
	func_137(&iLocal_985, 1405.467f, 321.6705f, 89.68785f, 0f, 0f, 0f, 102.7853f, 128.9887f, 19.83388f, "volBlocking");
	func_138(uParam0, Global_1392626[*uParam0 /*32*/].f_24, 0f, 0f, 0f, 5f, 5f, 5f);
	func_139(uParam0, &iLocal_984, 0);
	uParam0->f_347 = 8f;
	func_140(uParam0);
	func_141();
	HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_2205));
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_985, 224, 8192, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_985, 224, 8192, 0, -1, -1, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_142(iLocal_985, 0, 0);
		func_143(VOLUME::_GET_VOLUME_COORDS(iLocal_985), 150f, 0, 0);
	}
	if (*uParam0 == func_28())
	{
		func_144(GET_HASH_KEY("MONEY_LOANSHARK_LILLY_DEBT"), 1, 1, -142743235, 0);
	}
	func_145(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
}

void func_32(var uParam0)
{
	if (uParam0->f_12 == -1)
	{
		uParam0->f_12 = 5;
	}
	if (uParam0->f_12 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_12);
	}
}

bool func_33()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	else if (Global_1935630.f_12)
	{
		return true;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return true;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return true;
	}
	return false;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35(char[4] cParam0, int iParam1)
{
	if (cParam0->f_15 != iParam1)
	{
		cParam0->f_15 = iParam1;
	}
}

bool func_36()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return true;
	}
	return false;
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;

	if (cParam0->f_1 == 3)
	{
		if (func_146(cParam0))
		{
			func_147(*cParam0, 1024);
			func_35(cParam0, 5);
			return true;
		}
	}
	if (func_103(0, 1, 0))
	{
		iVar0 = func_104(0);
		if (func_105(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != func_104(0))
		{
			func_148(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (func_149(Global_1392626[*cParam0 /*32*/].f_12))
		{
			func_147(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!func_150(Global_1392626[*cParam0 /*32*/].f_22))
		{
			func_148(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 3);
			return true;
		}
	}
	if (func_151(*cParam0))
	{
		func_148(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		func_35(cParam0, 7);
		return true;
	}
	if (func_152(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_147(*cParam0, 16384);
		func_35(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!func_153(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			func_35(cParam0, 2);
			return true;
		}
	}
	else if (func_63(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!func_153(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_154(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				func_35(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (func_155(fVar1))
	{
		func_147(*cParam0, 8192);
		func_35(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_156(cParam0);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_89();
		func_157(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		func_158();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (func_113(cParam0) != 2 && !func_114(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_115(*cParam0);
	}
	func_112(cParam0);
	if (func_113(cParam0) == 0)
	{
		func_117(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_159();
	func_116(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_116(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	func_160(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!func_161(*cParam0, 4))
	{
		if (func_162(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				func_163(*cParam0);
			}
		}
		else if (cParam0->f_2204 != -1)
		{
			cParam0->f_2204 = -1;
		}
	}
}

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam0;
	if (iVar0 == 1 || iVar0 == 0)
	{
		Var1 = { 1429.529f, 381.9952f, 88.532f };
		Var1.f_3 = 84.4395f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1429.529f, 381.9952f, 88.532f };
		Var1.f_3 = 85.6777f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1427.761f, 382.037f, 88.6908f };
		Var1.f_3 = 13.3192f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_164(*uParam0, uParam0->f_3);
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_44()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_UNARMED_ASSAULT"), 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_TRAMPLE"), 4, 0, -1);
}

void func_45(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
			if (Global_1935689.f_1 || Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_165(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_47(char[4] cParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	if (!func_166(16384) && !func_166(8192))
	{
		if (ENTITY::_0x6BFBDC46139C45AB(vLocal_964[0 /*3*/]))
		{
			if (func_63(uLocal_979[0], 0) && func_63(uLocal_979[1], 0))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_70[1 /*19*/], true, false))
				{
					func_167();
				}
			}
		}
	}
	func_168(cParam0);
	if (cParam0->f_1 <= 3)
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("LOAN"))
		{
			if (!func_161(*cParam0, 4))
			{
				if (((BUILTIN::VDIST2(Global_36, Global_1392626[*cParam0 /*32*/].f_27) <= (75f * 75f) || func_169(Global_35, iLocal_986, 108, 1)) || func_169(Global_35, iLocal_987, 108, 1)) || func_169(Global_35, iLocal_988, 108, 1))
				{
					func_170();
					func_171(cParam0);
					if (HUD::TEXT_BLOCK_IS_LOADED(&(cParam0->f_2205)))
					{
						func_172(cParam0);
					}
				}
			}
			else
			{
				func_173(cParam0);
			}
		}
		if (func_166(8192))
		{
			func_174(cParam0);
		}
	}
}

void func_48(char[4] cParam0)
{
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
	{
		return;
	}
	if (func_175(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { func_176(*cParam0) };
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (cParam0->f_32.f_218 == 15f)
		{
			cParam0->f_32.f_218 = 50f;
		}
		if (cParam0->f_32.f_219 == 20f)
		{
			cParam0->f_32.f_219 = 75f;
		}
	}
	else
	{
		if (cParam0->f_32.f_218 > 15f)
		{
			cParam0->f_32.f_218 = 15f;
		}
		if (cParam0->f_32.f_219 > 20f)
		{
			cParam0->f_32.f_219 = 20f;
		}
	}
	if (cParam0->f_32.f_218 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= cParam0->f_32.f_218)
	{
	}
	if (func_76(cParam0->f_346))
	{
		if (func_177(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_178(cParam0);
				func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				func_179(cParam0);
			}
			if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
	}
	else if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
		{
			func_179(cParam0);
		}
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_49(var uParam0)
{
	return func_180(*uParam0, 1);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_70(uParam0);
	}
}

void func_51(char[4] cParam0)
{
}

int func_52(var uParam0)
{
	if (!func_49(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_181(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_182() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_53(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_54()
{
	return func_183(Global_1935630, 4096);
}

int func_55(var uParam0)
{
	func_184(&(uParam0->f_2041));
	func_185(&(uParam0->f_2052));
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2205));
	}
	if (((func_186(&(uParam0->f_2041)) && func_187(&(uParam0->f_2052))) && HUD::TEXT_BLOCK_IS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2205))))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_57(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_188(cParam0);
	iVar1 = func_189();
	func_171(cParam0);
	if (iVar0 && iVar1)
	{
		bVar2 = func_190(1, 0);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_986))
	{
		iLocal_986 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1447.252f, 278.7756f, 89.07455f, 0f, 0f, -4.041848f, 34.36525f, 26.62215f, 11.51713f, "Investigation allow vol 1");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_987))
	{
		iLocal_987 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1380.175f, 316.9712f, 89.07455f, 0f, 0f, -77.84428f, 34.36525f, 26.62215f, 11.51713f, "Investigation allow vol 2");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_988))
	{
		iLocal_988 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1476.477f, 404.1175f, 89.07455f, 0f, 0f, -139.8795f, 79.17475f, 42.50597f, 11.51713f, "Investigation allow vol 3");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_990))
	{
		iLocal_990 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1425.103f, 383.0199f, 89.44349f, 0f, 0f, -14.06964f, 2.114243f, 2.815163f, 1.883742f, "Bench scenario blocker");
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_1262))
	{
		uLocal_1262 = PED::_0x4C39C95AE5DB1329(iLocal_990, false, 15);
	}
	if ((((((iVar0 && iVar1) && bVar2) && VOLUME::DOES_VOLUME_EXIST(iLocal_986)) && VOLUME::DOES_VOLUME_EXIST(iLocal_987)) && VOLUME::DOES_VOLUME_EXIST(iLocal_988)) && PED::_0x91A5F9CBEBB9D936(uLocal_1262))
	{
		func_65(8192);
		func_191(cParam0);
		func_192(&(uLocal_979[0]));
		func_192(&(uLocal_979[1]));
		PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(uLocal_979[0], false, false), 25f, 1, 0);
		if (func_166(16384))
		{
			return true;
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!func_193(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!func_194(Global_1392626[*cParam0 /*32*/].f_3))
		{
			func_195(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		func_196(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		func_197(&Global_1935630, 4);
		func_198(4);
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_115(*cParam0);
	MISC::_0x1096603B519C905F(func_199(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_88(cParam0, 1, 0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	func_157(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_200(1);
	func_201(cParam0);
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			func_34(&(cParam0->f_16), 128);
		}
		func_202(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	switch (iLocal_16)
	{
		case 0:
			cParam0->f_346 = func_203();
			func_205(cParam0, 34734);
			func_207(cParam0, 34834);
			func_208(&(cParam0->f_32));
			func_209(cParam0, &iLocal_984);
			func_210(cParam0, Global_35, 0, 0, 0, 0);
			func_210(cParam0, uLocal_979[0], 0, 0, 0, 0);
			func_210(cParam0, uLocal_979[1], 0, 0, 0, 0);
			func_211(cParam0, func_176(*cParam0));
			func_212(&(cParam0->f_32), 1433.423f, 395.39f, 89.9713f, 130.7584f, 0);
			func_148(&(Global_1392626[*cParam0 /*32*/].f_8), 512);
			func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			break;
		case 1:
			cParam0->f_346 = func_203();
			func_207(cParam0, 34834);
			func_213(&(cParam0->f_32));
			func_210(cParam0, Global_35, 0, 0, 0, 0);
			func_210(cParam0, uLocal_979[0], 0, 0, 0, 0);
			func_210(cParam0, uLocal_979[1], 0, 0, 0, 0);
			func_211(cParam0, func_176(*cParam0));
			func_212(&(cParam0->f_32), 1433.423f, 395.39f, 89.9713f, 130.7584f, 1);
			func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			break;
	}
}

bool func_60(char[4] cParam0)
{
	if (!func_214(cParam0))
	{
		return false;
	}
	func_215(cParam0);
	if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_216(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_217(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (func_218(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (func_76(cParam0->f_346))
			{
				if (!func_175(cParam0->f_32.f_5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								func_111(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							func_111(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					func_111(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_219(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_220(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (func_221(&(cParam0->f_2216)))
					{
						func_112(cParam0);
						func_222(cParam0);
						func_111(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_223(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			func_111(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;

	func_58(cParam0);
	func_224(&(cParam0->f_2277), 0, 0, 1, 0);
	func_112(cParam0);
	func_34(&(cParam0->f_16), 1);
	func_225(cParam0);
	func_11(cParam0, func_226(cParam0));
	iVar0 = func_226(cParam0);
	if (iVar0 == 7)
	{
		func_12(cParam0);
		if (cParam0->f_1 != 7)
		{
			iVar0 = 6;
		}
	}
	else if (iVar0 == 8)
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
}

void func_62(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (iParam1 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

bool func_63(bool bParam0, int iParam1)
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
	if (func_227(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_227(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_227(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_227(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_64()
{
	if (func_63(uLocal_979[0], 0))
	{
		TASK::CLEAR_PED_TASKS(uLocal_979[0], true, false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_979[0], false);
		func_228(0, 1000f, -1056964608 /* Float: -8f */, 2, 1, 1);
		func_70(&uLocal_931);
		func_229();
		func_230(1);
	}
}

void func_65(int iParam0)
{
	func_231(&iLocal_949, iParam0);
}

void func_66()
{
	if (func_63(uLocal_979[1], 0))
	{
		if (!func_232(uLocal_979[1], 780511057))
		{
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_979[1], iLocal_989, 0, false, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 6, true);
			PED::_0x4F27603E44A8E4C0(uLocal_979[1], 10, 1);
			PED::_0xC163DAC52AC975D3(uLocal_979[1], 28);
			func_233(&iLocal_978, uLocal_979[1], GET_HASH_KEY("BLIP_STYLE_ENEMY"), "BLIP_COOP");
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_979[1], true, true);
			PED::_SET_PED_BRAWLING_STYLE(uLocal_979[1], GET_HASH_KEY("BS_AI_BARBRAWL"));
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(uLocal_979[1], Global_35, 0, 0, 0, 1, 1048576);
			PED::REGISTER_TARGET(uLocal_979[1], Global_35, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_979[1], true, 0f);
			PED::REGISTER_TARGET(uLocal_979[1], Global_35, 1);
			PED::_0x2E5B5D1F1453E08E(uLocal_979[1], 1);
			PED::SET_COMBAT_FLOAT(uLocal_979[1], 7, 1f);
			PED::_0x5BCF0B79D4F5DBA3(uLocal_979[1], 20f);
			PED::_0x29924EB8EE9DB926(uLocal_979[1], 20f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_979[1], false, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_979[1], 2, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_979[1], 0, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_979[1], 7, false);
			PED::SET_PED_LASSO_HOGTIE_FLAG(uLocal_979[1], 0, false);
			PED::SET_PED_MAX_HEALTH(uLocal_979[1], 145);
			ENTITY::SET_ENTITY_HEALTH(uLocal_979[1], 145, 0);
			PED::_0x57F35552E771BE9D(uLocal_979[1], 12);
			func_69(uLocal_979[1], Local_992.f_74, 1, 0);
			func_234(1);
		}
	}
}

void func_67(int iParam0)
{
	int iVar0;

	if (iParam0 == 5)
	{
		iVar0 = iLocal_15;
		iVar0++;
		iLocal_15 = iVar0;
		if (iLocal_15 == 5)
		{
			iLocal_15 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_15 = iParam0;
	}
	iLocal_14 = 0;
}

void func_68()
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1260))
		{
			STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_BENCHCH01X"), false);
			if (STREAMING::HAS_MODEL_LOADED(GET_HASH_KEY("P_BENCHCH01X")))
			{
				if (iLocal_1259 == 0)
				{
					iLocal_1259 = ENTITY::PIN_CLOSEST_MAP_ENTITY(GET_HASH_KEY("P_BENCHCH01X"), vLocal_961, 9);
				}
				else if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1259))
				{
					iLocal_1260 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1259));
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1260))
		{
			if (func_235(GET_HASH_KEY("PROP_HUMAN_SEAT_CHAIR_SAD"), 15, 0, 0))
			{
				iLocal_1261 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iLocal_1260, GET_HASH_KEY("PROP_HUMAN_SEAT_CHAIR_SAD"), -0.507656f, 0.030655f, 0.5f, 180f, 1f, 0f, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GET_HASH_KEY("P_BENCHCH01X"));
			}
		}
	}
}

void func_69(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar0 = func_236(bParam0);
		func_237(bParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(bParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(bParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_70(var uParam0)
{
	func_238(uParam0, 0f);
}

void func_71(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_72(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_239(iParam0, 0))
	{
		return false;
	}
	if (!func_240(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_241(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_242(iParam0, bParam2);
	iVar2 = 0;
	if (func_243(iParam0, 0, 0) == 0)
	{
		if (func_244(iParam0))
		{
			iVar5 = func_245(iParam0);
			iVar6 = func_246(iVar5);
			iVar7 = func_247(iVar6) + 1;
			func_248(iVar5);
			if (func_249(38))
			{
				func_250(483, 0);
			}
			else
			{
				func_250(482, 0);
			}
			if (iVar7 == func_251(iVar6))
			{
				func_72(func_252(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_253() && func_254(4))
				{
					if (func_253() && (func_255(38) || func_249(38)))
					{
						func_257(38, func_252(iVar6), 0, 0, func_256(), 0, -1, 0);
						func_258(2);
					}
					else
					{
						func_257(38, func_252(iVar6), 0, 0, func_256(), 0, -1, 0);
						func_258(1);
					}
				}
			}
			else if (func_253() && func_254(4))
			{
				if (func_253() && (func_255(38) || func_249(38)))
				{
					func_257(38, 0, 0, 0, func_256(), 0, -1, 0);
					func_258(2);
				}
				else
				{
					func_257(38, 0, 0, 0, func_256(), 0, -1, 0);
					func_258(1);
				}
			}
			if (func_253() && func_254(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_253() && (func_255(38) || func_249(38)))
					{
						func_259(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_259(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_260(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_261(iParam0, 866047851) && !func_261(iParam0, -1979000645)) && !func_261(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_262(iParam0, 8388608) && !func_263(28))
	{
		func_264(28);
	}
	if (!bVar3)
	{
		if (func_261(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_265(iParam0) == -1447088266)
			{
				iVar1 = func_267(func_266(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_268() == -1)
					{
						func_269(iVar1);
					}
					if (func_270(0) && func_271(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_272(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_268() == -1)
					{
						func_269(iParam0);
					}
					if (func_270(0) && func_271(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_272(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_260(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_273(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_260(iParam0) == GET_HASH_KEY("AMMO") && func_274(iParam0))
		{
			if (!func_275(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_261(iParam0, 866047851))
		{
			func_276(iParam0);
		}
		else if (func_261(iParam0, 2000026003))
		{
			func_277(iParam0);
		}
		else if (func_261(iParam0, -103750053))
		{
			func_279(func_278(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_279(func_280(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_261(iParam0, -121341956) && !func_261(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_281(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_250(498, 0);
				}
			}
			if (func_261(iParam0, -2017733358) || func_261(iParam0, -1369131378))
			{
				func_282(iParam0);
			}
		}
		else if (func_261(iParam0, -136654233))
		{
			if (func_261(iParam0, -1021472396))
			{
			}
		}
		else if (func_261(iParam0, -1466706512) && func_261(iParam0, 1147021565))
		{
			func_250(484, 0);
		}
		else if (func_261(iParam0, 1147021565) && func_261(iParam0, -524514947))
		{
		}
		else if (func_261(iParam0, 554195525))
		{
		}
		else if (func_261(iParam0, 589988438))
		{
			if (func_283())
			{
				func_284(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_261(iParam0, 787083290) && func_261(iParam0, 949916894))
		{
			func_285(iParam0);
		}
		else if (func_261(iParam0, -1718133314))
		{
			func_286(iParam0);
		}
		else if (func_261(iParam0, -1738650224))
		{
			func_287(iParam0);
		}
		else if (func_261(iParam0, -1112814642) && func_261(iParam0, 949916894))
		{
			func_288(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_261(iParam0, 1841149704))
		{
			func_289();
		}
		else if (func_261(iParam0, 606799272))
		{
			func_290(iParam0, iParam1);
			func_291(iParam0);
		}
		else if (func_261(iParam0, -1112814642) && func_261(iParam0, -1697809989))
		{
			func_292(iParam0, 0, 0, 0);
		}
		else if (func_261(iParam0, -2017733358) || func_261(iParam0, -1369131378))
		{
			func_282(iParam0);
		}
		else if (func_261(iParam0, -1921346699))
		{
			if (func_268() != -1)
			{
				return false;
			}
			func_293(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_261(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_294(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_72(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_294(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_72(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_294(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_72(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_294(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_72(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_294(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_72(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_294(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_72(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_261(iParam0, -839724752) && func_262(iParam0, 4))
		{
			if (!func_249(42))
			{
				func_295(iParam0);
			}
		}
		else if (func_261(iParam0, 1399091007))
		{
			func_296(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_261(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_LEGENDARY");
					break;
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_REMEDIES");
					break;
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_INGREDIENTS");
					break;
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_KIT");
					break;
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_PROVISIONS");
					break;
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_MATERIALS");
					break;
				case GET_HASH_KEY("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = GET_HASH_KEY("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_72(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case GET_HASH_KEY("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("ARROW_BUNDLE");
				break;
			case GET_HASH_KEY("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case GET_HASH_KEY("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("BAIT_CRICKETS");
				break;
			case GET_HASH_KEY("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("BAIT_WORMS");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_FANCY");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_FANCY");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_FANCY");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_FANCY");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_PLAIN");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_PLAIN");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_PLAIN");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_PLAIN");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_POOR");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_SML_POOR");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_POOR");
				break;
			case GET_HASH_KEY("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = GET_HASH_KEY("JBOX_LRG_POOR");
				break;
			case GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"):
				func_264(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_297(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_298(&iVar9, 0))
				{
					func_271(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_268() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_297(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_250(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_299();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_300();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_301();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_302();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_303();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_304(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_305(499813453, 0);
				func_306(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_304(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_305(499813453, 0);
				func_306(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_304(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_305(499813453, 0);
				func_306(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_304(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_305(666607663, 0);
				func_307(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_304(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_305(666607663, 0);
				func_307(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_304(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_305(666607663, 0);
				func_307(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_304(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_305(-220219788, 0);
				func_308(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_304(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_305(-220219788, 0);
				func_308(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_304(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_305(-220219788, 0);
				func_308(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_304(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_305(218622660, 0);
				func_309(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_304(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_305(218622660, 0);
				func_309(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_304(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_305(390004462, 0);
				func_310(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_304(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_305(390004462, 0);
				func_310(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_304(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_305(390004462, 0);
				func_310(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_304(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_305(6410548, 0);
				func_311(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_304(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_305(6410548, 0);
				func_311(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_304(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_305(6410548, 0);
				func_311(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_304(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_305(6410548, 0);
				func_311(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_313(242, func_312(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_313(240, func_312(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_313(241, func_312(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_314(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_POTENT_RESTORATIVE"):
			case GET_HASH_KEY("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case GET_HASH_KEY("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_314(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SNAKE_OIL"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_SNAKE_OIL"):
			case GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO"):
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_314(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_314(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_LAMB_HEART"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_PRIME_RIB"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_CONSOMME"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_LAMB_FRY"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_OYSTER_STEW"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_OATMEAL"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_314(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_314(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_250(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_250(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_250(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_72(func_315(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_72(func_316(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_263(1))
				{
					func_250(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_250(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_268() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_250(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_317(&iVar10);
		if (!func_318(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_270(0))
		{
			return true;
		}
		if (func_260(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_319(iParam0);
		}
		if (func_261(iParam0, -1979000645))
		{
			func_320(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_270(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_72(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_321(iVar2, 0);
		}
	}
	Var35 = { func_322(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_323(iParam0);
	if (fParam6 > 0f)
	{
		if (func_261(iParam0, -839724752))
		{
			func_324(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_325(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_73(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::GET_IS_ANIMAL(iParam0))
	{
		iVar0 = func_326(iParam0);
		func_327(iVar0, ENTITY::_GET_IS_BIRD(iParam0));
	}
	if (bParam1)
	{
		func_328(iParam0, 0);
	}
}

void func_74()
{
	if (((func_63(uLocal_979[0], 0) && !TASK::IS_PED_CUFFED(uLocal_979[0])) && iLocal_18 != 3) && TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
	{
		func_190(2, 0);
		func_329(5000);
		PED::_0x89F5E7ADECCCB49C(uLocal_979[0], "sad");
		TASK::TASK_USE_SCENARIO_POINT(uLocal_979[0], iLocal_1261, "", 0, true, false, 0, false, -1f, false);
		func_133(&uLocal_1445, 1);
		func_123(&uLocal_1445, 1);
		func_134(&uLocal_1445, 0);
		func_230(8);
		func_65(32);
	}
	else if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_1261))
	{
	}
}

bool func_75(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_217(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		func_80(1, 1, 1);
		func_330(cParam0);
		if (!func_331(cParam0))
		{
			return false;
		}
		if (func_332())
		{
			func_333(1);
			return false;
		}
	}
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_76(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_77(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_334(uParam1, 32768))
	{
		Var0 = { func_335(uParam0) };
		func_336(uParam0, &Var0);
		if (func_334(uParam1, 131072))
		{
			func_337(uParam0, 268435456);
			if (func_175(uParam0->f_289))
			{
				uParam0->f_289 = { func_338(uParam1, uParam1->f_1450) };
			}
			if (func_175(uParam0->f_286))
			{
				uParam0->f_286 = { func_338(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (func_334(uParam1, 268435456))
		{
			func_339(&(uParam0->f_284), 16384);
		}
	}
	else if (func_334(uParam1, 524288))
	{
		func_337(uParam0, 67108864);
		func_340(uParam1, 524288);
	}
	if (func_341(uParam1, 128))
	{
		func_337(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && func_342(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			func_339(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

int func_78(char[4] cParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_343(cVar0, &(cParam0->f_32), cParam0);
}

void func_79(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, -1f, -1f, -1f);
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1 && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	}
	if (iParam1 == 1)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_81(char[4] cParam0, bool bParam1)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(cParam0->f_32.f_228))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(cParam0->f_32.f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(cParam0->f_32.f_228, false))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(cParam0->f_32.f_228, false))
					{
						ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(cParam0->f_32.f_228);
					}
					else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(cParam0->f_32.f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_32.f_228);
					}
				}
			}
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
	if (func_76(cParam0->f_346))
	{
		func_344(&(cParam0->f_32));
	}
	else
	{
		func_345(cParam0);
	}
	func_346(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

int func_82(char[4] cParam0)
{
	var uVar0;

	func_347(iLocal_991);
	func_65(67108864);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(uLocal_979[1], &uVar0));
	return 8;
}

bool func_83(char[4] cParam0)
{
	return false;
}

void func_84(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_85(char[4] cParam0)
{
}

int func_86(char[4] cParam0)
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
	func_348();
	switch (iLocal_15)
	{
		case 0:
			func_349(cParam0);
			break;
		case 2:
			if (func_350(cParam0))
			{
				return 9;
			}
			break;
		case 1:
			if (func_351(cParam0))
			{
				return 9;
			}
			break;
		case 3:
			if (func_352(cParam0))
			{
				return 9;
			}
			break;
	}
	return 8;
}

void func_87(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_353(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_354(1))
	{
		func_355(1);
	}
	func_115(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_356();
		func_357(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_358(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_359(Global_1392626[iParam0 /*32*/].f_7);
	}
}

void func_88(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_360(0))
	{
		if (func_361(0))
		{
			func_362(0);
		}
	}
	if (func_360(1))
	{
		if (func_361(1))
		{
			func_362(1);
		}
	}
}

void func_89()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_90(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_268() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_363(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_364();
		Global_1898077.f_9 = func_365(Global_1894899.f_2);
		func_366(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_92(int iParam0)
{
	return func_93(Global_1392626[iParam0 /*32*/].f_8, 64);
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_94(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_367(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_368(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_367(sVar0, iParam1, 0, 0, 1, 1);
}

void func_95()
{
	int iVar0;

	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_96()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_369(0);
	func_370(0);
	func_371(0);
	func_372(0);
	func_373(0);
	func_374(1f);
}

void func_97(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
		return;
	}
	if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
		return;
	}
	if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		func_375(0);
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_TRIGGER_MISSION_FAILED_CAM();
	}
}

void func_98(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_99()
{
	return false;
}

void func_100(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_376(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_98(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_98(&(Global_1347343.f_11), 16384);
	}
	if (func_377() >= 2)
	{
		if (!func_376(Global_1347343.f_11, 16384))
		{
			func_98(&(Global_1347343.f_11), 8);
		}
		func_374(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_197(&Global_1935630, 2048);
	func_378(bParam5);
}

void func_101(int iParam0)
{
	if (!func_353(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	func_115(iParam0);
	func_148(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_356();
		func_357(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = func_356();
	func_357(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	func_379(Global_1392626[iParam0 /*32*/].f_3);
	func_380(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_102(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_161(iParam0, 4))
	{
		iVar0 = Global_1392626[iParam0 /*32*/];
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	else
	{
		iVar0 = Global_1392626[iParam0 /*32*/].f_1;
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 4096 == 0)
	{
		return;
	}
	if (func_161(iParam0, 4))
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_24);
	}
	else
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_27);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 8192 != 0)
	{
		if (fVar1 > 45f)
		{
			iVar2 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
			if (iVar2 != Global_1392626[iParam0 /*32*/].f_23)
			{
				UIFEED::_0x2F901291EF177B02(Global_1392626[iParam0 /*32*/].f_23, 0);
			}
			func_37(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
		}
	}
	else if (fVar1 <= 25f)
	{
		if (Global_1392626[iParam0 /*32*/].f_10 & 1024 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_ANTAGONIZE", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_381(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_381(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_381(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_381(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_381(sVar3, 10000, 0, 0, 0, 1);
		}
		func_29(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_103(int iParam0, bool bParam1, bool bParam2)
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
		if (func_382())
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
		iVar0 = func_383(Global_1898164.f_1[0 /*5*/]);
		if (func_384(iVar0) && func_385(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_105(Global_1898164.f_1[0 /*5*/]))
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

int func_104(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_105(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_106()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return false;
}

float func_107(var uParam0)
{
	return 0f;
}

bool func_108(var uParam0)
{
	int iVar0;

	iVar0 = func_113(uParam0);
	if (((((iVar0 == 4 || iVar0 == 1) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 2)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[1 /*19*/], false))
		{
			if (func_386())
			{
				func_387(1);
			}
		}
	}
	if (iVar0 == 0)
	{
		func_388(uParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
	{
		if ((!TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11) && !PED::IS_PED_FLEEING(uLocal_979[1])) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_979[1], -1))
		{
			TASK::TASK_FLEE_PED(uLocal_979[1], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(uLocal_979[0]) && !PED::IS_PED_FLEEING(uLocal_979[0])) && !PED::IS_PED_IN_COMBAT(uLocal_979[0], 0))
	{
		if (((((iVar0 == 4 || iVar0 == 1) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 2)
		{
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uLocal_979[0], -1))
			{
				TASK::TASK_FLEE_PED(uLocal_979[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
		else if (!bLocal_1265)
		{
			func_389();
			bLocal_1265 = true;
		}
		else if (!bLocal_1266)
		{
			if (!bLocal_1258)
			{
				if (func_390(Global_35, uLocal_979[0], 1, 1) <= 5f && !func_391())
				{
					if (func_392(&(uParam0->f_2106), "LS_EMR_GRIEF", 0))
					{
						bLocal_1258 = true;
					}
				}
			}
			if (((!ENTITY::IS_ENTITY_DEAD(bLocal_877) && AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_877)) || iLocal_875 <= 5) || func_391())
			{
				if (func_393(&(Local_1330[0 /*17*/]), 0, 0) || func_393(&(Local_1330[1 /*17*/]), 0, 0))
				{
					func_394();
				}
			}
			else if (!func_393(&(Local_1330[0 /*17*/]), 0, 0) || !func_393(&(Local_1330[1 /*17*/]), 0, 0))
			{
				func_395(&Local_1330, 1, 0);
			}
			iLocal_1267 = func_396(&(uLocal_979[0]), &(Local_1268[0 /*61*/]), 20f, &Local_1330, 0.25f, 3, 0, "", 3, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_1267 == 0)
			{
				if (func_392(&(uParam0->f_2106), "LS_EMR_POST_POS", 0))
				{
					func_394();
					TASK::_0xE7FA07624574B79A(uLocal_979[0], Global_35, 1, 2, 5000f, 1, 0, 0, 0);
					bLocal_1266 = true;
				}
			}
			else if (iLocal_1267 == 1)
			{
				if (func_392(&(uParam0->f_2106), "LS_EMR_POST_NEG", 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_979[0], Global_35, 1, 2, 5000f, 1, 0, 0, 0);
					func_394();
					bLocal_1266 = true;
				}
			}
		}
		else
		{
			func_396(&(uLocal_979[0]), &(Local_1268[0 /*61*/]), 20f, &Local_1330, 0.25f, 3, 0, "", 3, 0, 2, -1082130432 /* Float: -1f */);
		}
	}
	else if (bLocal_1265)
	{
		func_394();
		bLocal_1265 = false;
		bLocal_1266 = true;
	}
	if (iVar0 == 4)
	{
		if (func_397())
		{
			return true;
		}
		return false;
	}
	else if (iVar0 == 1)
	{
		func_398();
		return true;
	}
	else if (iVar0 == 5)
	{
		if (func_399(uLocal_979[1], -1f, 125f) && func_399(uLocal_979[0], -1f, 125f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_979[1], true, false);
				ENTITY::SET_ENTITY_COORDS(uLocal_979[1], 1454.951f, 319.6451f, 88.4759f, true, false, true, true);
			}
			return true;
		}
		return false;
	}
	if (!func_400(uParam0))
	{
		return false;
	}
	return true;
}

void func_109(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_193(Global_1392626[iParam0 /*32*/].f_3) || func_194(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_401(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_115(iParam0);
	}
}

void func_110(char[4] cParam0)
{
	int iVar0;

	func_402();
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_985))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_985);
		POPULATION::_0xA1CFB35069D23C23(iLocal_985);
		VOLUME::_DELETE_VOLUME(iLocal_985);
	}
	func_347(iLocal_991);
	func_347(iLocal_984);
	if (func_63(uLocal_979[0], 0))
	{
		PED::_0x4FD80C3DD84B817B(uLocal_979[0]);
		PED::_0x58F7DB5BD8FA2288(uLocal_979[0]);
	}
	if (iLocal_952 > 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_952);
	}
	if (func_403(1))
	{
		AUDIO::_0x9428447DED71FC7E("LSEMR_Scenes");
	}
	func_404(&(Local_1365[0 /*61*/]), uLocal_979[0]);
	func_405(&iLocal_977);
	AUDIO::TRIGGER_MUSIC_EVENT("LSER_STOP");
	func_347(iLocal_985);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_1262))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1262, false);
	}
	func_65(65536);
	func_406();
	if (func_407(594))
	{
		func_408(594);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_ACTIVE");
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_PRE");
	iVar0 = func_113(cParam0);
	if (iVar0 == 1)
	{
	}
	if (iLocal_1259 != 0 && ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1259))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_1259);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_986))
	{
		VOLUME::_DELETE_VOLUME(iLocal_986);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_987))
	{
		VOLUME::_DELETE_VOLUME(iLocal_987);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_988))
	{
		VOLUME::_DELETE_VOLUME(iLocal_988);
	}
	func_409();
	func_118(&bLocal_877, 1, 1, 1);
	func_118(&(uLocal_979[0]), 1, 0, 1);
	func_118(&(uLocal_979[1]), 1, 0, 1);
}

void func_111(char[4] cParam0)
{
	if (cParam0->f_17 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		MAP::DISPLAY_RADAR(true);
	}
	cParam0->f_17 = 0;
	cParam0->f_17.f_1 = 0;
	func_71(&(cParam0->f_17.f_12));
}

void func_112(char[4] cParam0)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (func_63(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			func_224(&(cParam0->f_2277), 0, 0, 1, 0);
			func_410(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

int func_113(char[4] cParam0)
{
	return cParam0->f_15;
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_115(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_411(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_411(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_116(var uParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

void func_117(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_412(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_412(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_413(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_118(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*bParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*bParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*bParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*bParam0);
		}
		PED::SET_PED_KEEP_TASK(*bParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(bParam0);
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 16384);
	}
	else
	{
		func_126(&(uParam0->f_1), 16384);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 256);
	}
	else
	{
		func_126(&(uParam0->f_1), 256);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 16);
	}
	else
	{
		func_125(uParam0, 67108864);
		func_125(uParam0, 16);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 128);
	}
	else
	{
		func_126(&(uParam0->f_1), 128);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 256);
	}
	else
	{
		func_125(uParam0, 256);
	}
}

void func_124(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_126(uParam0, 268435456);
	}
	else
	{
		func_125(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_126(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_125(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_126(uParam0, 536870912);
	}
	else
	{
		func_125(uParam0, 536870912);
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_127()
{
	return Global_1572864.f_8;
}

int func_128(int iParam0)
{
	if (func_414(iParam0) == 6)
	{
		if (func_383(iParam0) == 0)
		{
			return func_415(iParam0);
		}
	}
	return -1;
}

void func_129(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2205), sParam1, 24);
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_416(uParam0, 1);
		func_131(uParam0, 1);
		func_121(uParam0, 1);
		func_132(uParam0, 1);
		func_417(uParam0, 1);
		func_134(uParam0, 1);
		func_418(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_416(uParam0, 0);
		func_131(uParam0, 0);
		func_121(uParam0, 0);
		func_132(uParam0, 0);
		func_417(uParam0, 0);
		func_134(uParam0, 0);
		func_418(uParam0, 0);
	}
}

void func_131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 8);
	}
	else
	{
		func_125(uParam0, 8);
	}
}

void func_132(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 32);
	}
	else
	{
		func_125(uParam0, 32);
	}
}

void func_133(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 524288);
	}
	else
	{
		func_125(uParam0, 524288);
	}
}

void func_134(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 1024);
	}
	else
	{
		func_125(uParam0, 1024);
	}
}

void func_135(var uParam0, int iParam1)
{
	uParam0->f_12 = iParam1;
}

void func_136(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_137(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_138(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	uParam0->f_17.f_9 = { vParam7 };
	uParam0->f_17.f_5 = (vParam7.x + 2f);
	func_419(&(uParam0->f_17.f_8), vParam1, vParam4, uParam0->f_17.f_9, "LS CORE Dismount area");
}

void func_139(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	uParam0->f_2040 = *iParam1;
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_2040) };
	vVar3 = { VOLUME::_GET_VOLUME_ROTATION(uParam0->f_2040) };
	vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2040) };
	if (bParam2)
	{
		func_138(uParam0, vVar6, vVar3, vVar0);
	}
}

void func_140(var uParam0)
{
	func_420();
	func_421();
	func_422();
	func_423();
	func_424(uParam0);
}

void func_141()
{
	PED::ADD_RELATIONSHIP_GROUP("GroupCooper", &iLocal_982);
	PED::ADD_RELATIONSHIP_GROUP("GroupLilly", &iLocal_983);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_982, iLocal_983);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_983, iLocal_982);
}

void func_142(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_143(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_144(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_425(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_325(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_294(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_322(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_243(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_243(iParam0, 0, 0) - iParam1) < 0)
		{
			func_144(iParam0, func_243(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_260(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_426(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_427(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_270(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_325(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_428(iParam0, iParam1);
	return 1;
}

void func_145(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_429(uParam0, bParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(bParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(bParam1, bParam3);
			}
		}
	}
}

bool func_146(var uParam0)
{
	if (!func_63(uLocal_979[0], 0))
	{
		return true;
	}
	else if (!func_63(uLocal_979[1], 0))
	{
		return true;
	}
	else if ((iLocal_18 == 3 || iLocal_19 == 6) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_979[0], true, false), 5f, true))
	{
		if (func_386())
		{
			func_404(&(Local_1365[0 /*61*/]), uLocal_979[0]);
			return true;
		}
	}
	return false;
}

void func_147(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	func_430(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_430(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_148(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_149(int iParam0)
{
	if (!func_431(iParam0))
	{
		return false;
	}
	return func_432(iParam0, 33554432);
}

bool func_150(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_433(func_356());
	if (func_434(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_434(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_434(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_434(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_434(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_434(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_434(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_434(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_434(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_434(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_434(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_434(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_434(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_434(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_434(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_434(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_434(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_151(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_40.f_1094 - 1))
		{
			if (Global_40.f_450[iVar0] == 92)
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (iParam0 == 3)
	{
		if (func_435(21))
		{
			return true;
		}
	}
	return false;
}

bool func_152(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_436(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

bool func_153(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_128(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_154(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_437(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_438(bParam0, uParam2))
			{
				*iParam3 = 128;
				func_439(bParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_440(bParam0, uParam2))
				{
					*iParam3 = 8;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_441(bParam0, bParam1, uParam2))
				{
					*iParam3 = 8;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_442(bParam0, uParam2))
				{
					*iParam3 = 64;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_436(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_439(bParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_443(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_444(Global_35, bParam0, uParam2))
					{
						*iParam3 = 4;
						func_439(bParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_445(Global_35, bParam0, uParam2))
					{
						*iParam3 = 256;
						func_439(bParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_446(Global_35, bParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_446(Global_35, bParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_439(bParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_447(bParam0, uParam2))
				{
					*iParam3 = 32;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_448(&bParam0, uParam2))
				{
					*iParam3 = 4096;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_449(uParam2, 4000))
				{
					if ((func_450(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_451(uParam2, bParam0)) && func_452(uParam2, bParam0))
					{
						*iParam3 = 2;
						func_439(bParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_450(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_451(uParam2, bParam0)) && func_452(uParam2, bParam0))
				{
					*iParam3 = 2;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_453(bParam0, Global_1935630.f_41))
							{
								func_454();
								*iParam3 = 2;
								func_439(bParam0, uParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_453(bParam0, Global_1935630.f_41))
						{
							func_454();
							*iParam3 = 2;
							func_439(bParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_455(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_182() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_454();
						*iParam3 = 2;
						func_439(bParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_456())
					{
						if (func_453(bParam0, Global_1935630.f_42))
						{
							func_454();
							*iParam3 = 2;
							func_439(bParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_457(uParam2, bParam0))
			{
				*iParam3 = 1024;
				func_439(bParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_458(bParam0, bParam1, uParam2))
				{
					*iParam3 = 2048;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_459(bParam0, uParam2))
					{
						*iParam3 = 8192;
						func_439(bParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_460(bParam0, uParam2))
				{
					*iParam3 = 32768;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_461(uParam2, 4000))
				{
					if (func_462(&bParam0, uParam2))
					{
						*iParam3 = 512;
						func_439(bParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_463(bParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_439(bParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_464(uParam2, bParam0))
			{
				*iParam3 = 1;
				func_439(bParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_155(float fParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return true;
	}
	return false;
}

void func_156(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_113(cParam0);
	func_465(cParam0, 2);
	func_65(65536);
	func_466(0, 0, 1103626240 /* Float: 25f */);
	if (((((iVar0 == 4 || iVar0 == 1) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 2)
	{
		func_467(&(uLocal_979[1]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
		{
			func_328(uLocal_979[1], 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 186, false);
			if (iLocal_19 != 6)
			{
				func_468();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[0]))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_979[0], 186, false);
			if (iLocal_18 != 3)
			{
				func_387(1);
			}
		}
		if (iVar0 == 5)
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[1 /*19*/]);
			}
		}
		func_404(&(Local_1365[0 /*61*/]), uLocal_979[0]);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_PRE");
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_ACTIVE");
	}
}

void func_157(int iParam0)
{
	Global_36580 = iParam0;
}

void func_158()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_384(iVar0))
		{
			if (func_469(iVar0, 4))
			{
				if (func_469(iVar0, 16))
				{
					func_470(iVar0, 1);
				}
				if (func_469(iVar0, 8))
				{
					func_471(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_159()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_160(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (cParam0->f_14 == -1)
	{
		cParam0->f_14 = cParam0->f_13;
	}
	if (cParam0->f_14 >= 0)
	{
		iVar0 = cParam0->f_12;
		iVar1 = func_113(cParam0);
		if (iVar1 == 1 || iVar1 == 0)
		{
			iVar0 = cParam0->f_13;
		}
		if (cParam0->f_14 < iVar0)
		{
			iVar2 = (iVar0 - cParam0->f_14);
			PED::_0x7D4E70A67A651C71(iVar2);
			cParam0->f_13 = -1;
			cParam0->f_12 = -1;
		}
		if (cParam0->f_14 > 0)
		{
			PED::_0xED9582B3DA8F02B4(cParam0->f_14);
		}
	}
}

bool func_161(int iParam0, int iParam1)
{
	if (func_353(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_162(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_472(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_163(int iParam0)
{
	if (!func_161(iParam0, 8))
	{
		func_115(iParam0);
		func_473(iParam0);
		func_474(iParam0, 8);
	}
}

int func_164(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_475(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_476(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_477(0, 0);
		if (func_478(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_479(1, 0);
		}
	}
	else
	{
		func_479(1, 0);
	}
	func_370(0);
	func_480(0, vParam0, uParam3);
	return 1;
}

bool func_165(char[4] cParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	if (((!func_63(uLocal_979[0], 0) || !func_63(uLocal_979[1], 0)) || iLocal_18 == 3) || iLocal_19 == 6)
	{
		if (!func_166(256))
		{
			func_481(cParam0, "FAIL_EMERALD");
			return true;
		}
	}
	if (func_166(512))
	{
		func_481(cParam0, "FAIL_EMERALD");
		return true;
	}
	if (cParam0->f_1 == 8)
	{
		if (iLocal_15 >= 0)
		{
			if (func_482())
			{
				func_481(cParam0, "FAIL_EMERALD");
				return true;
			}
			if (func_483())
			{
				func_481(cParam0, "FAIL_EMERALD");
				return true;
			}
		}
		if (iLocal_15 == 3)
		{
			if (((((ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 0, Global_35) == 0 && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, uLocal_979[1], 2, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar2, uLocal_979[1], 1, Global_35) == 0) && !ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_979[1])) && !PED::_0x3AEC4A410ECAF30D(uLocal_979[1])) && func_390(Global_35, uLocal_979[1], 1, 1) > 1f)
			{
				func_481(cParam0, "FAIL_EMERALD");
				return true;
			}
		}
	}
	return false;
}

bool func_166(int iParam0)
{
	return func_227(iLocal_949, iParam0);
}

void func_167()
{
	func_484();
	func_485();
	func_65(16384);
}

void func_168(char[4] cParam0)
{
	if (!func_403(1))
	{
		if (AUDIO::_0x6339C1EA3979B5F7("Search_For_Milly", "LSEMR_Scenes"))
		{
			func_486(1);
		}
	}
	if ((cParam0->f_1 > 3 && iLocal_15 >= 0) && func_166(67108864))
	{
		if (!func_403(2))
		{
			if (AUDIO::_0xAC84686C06184B0D("Fight_Cooper", "LSEMR_Scenes"))
			{
				func_486(2);
			}
		}
	}
	if (iLocal_15 >= 3)
	{
		if (!func_403(4))
		{
			if (AUDIO::_0xAC84686C06184B0D("Retrieve_Debt", "LSEMR_Scenes"))
			{
				func_486(4);
			}
		}
	}
}

bool func_169(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_170()
{
	vector3 vVar0[24];

	if (!func_487(2))
	{
		if (!func_488(94, 0))
		{
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (func_354(1))
				{
					StringCopy(&cVar0, "OBJ_SEARCH_GREY", 24);
				}
				else
				{
					StringCopy(&cVar0, "OBJ_SEARCH_LIL", 24);
				}
				if (func_94(&cVar0, 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
				{
					func_489(2);
				}
			}
		}
	}
}

int func_171(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (!func_490(Global_1392626[0 /*32*/].f_12))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (!Local_212[iVar1 /*91*/].f_88)
		{
			iVar0 = 0;
			if (Local_212[iVar1 /*91*/] == -1)
			{
				Local_212[iVar1 /*91*/] = iVar1;
			}
			if (func_407(func_491(&(Local_212[iVar1 /*91*/]))))
			{
				if (func_492(func_491(&(Local_212[iVar1 /*91*/])), 0))
				{
					if (Local_212[iVar1 /*91*/] == 1)
					{
						if (func_488(94, 0) || func_493(94))
						{
							Local_212[iVar1 /*91*/].f_88 = 1;
						}
						else
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_212[iVar1 /*91*/].f_84))
							{
								Local_212[iVar1 /*91*/].f_84 = func_494(func_491(&(Local_212[iVar1 /*91*/])), 0, 0, 0, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_212[iVar1 /*91*/].f_84))
								{
									return 0;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_212[iVar1 /*91*/].f_84))
							{
								func_495(&(Local_212[iVar1 /*91*/]));
								func_496(&(Local_212[iVar1 /*91*/]));
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 225, false);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 130, true);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 297, true);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 317, true);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 277, false);
								PED::SET_PED_CONFIG_FLAG(Local_212[iVar1 /*91*/].f_84, 315, true);
								TASK::TASK_PERSISTENT_CHARACTER(Local_212[iVar1 /*91*/].f_84);
								MISC::_0xE98D55C5983F2509(Local_212[iVar1 /*91*/].f_84);
								func_145(&(cParam0->f_2106), Local_212[iVar1 /*91*/].f_84, func_497(&(Local_212[iVar1 /*91*/])), 0);
								if (Local_212[iVar1 /*91*/] == 0 || Local_212[iVar1 /*91*/] == 4)
								{
									Local_212[iVar1 /*91*/].f_89 = 1;
								}
								if (Local_212[iVar1 /*91*/] == 2)
								{
									AUDIO::SET_AMBIENT_VOICE_NAME(Local_212[iVar1 /*91*/].f_84, "0827_S_M_M_LiveryWorker_01_WHITE_03");
								}
								Local_212[iVar1 /*91*/].f_88 = 1;
							}
							else
							{
								func_408(func_491(&(Local_212[iVar1 /*91*/])));
							}
							Jump @545; //curOff = 481
							if (Local_212[iVar1 /*91*/] == 0 || Local_212[iVar1 /*91*/] == 4)
							{
								func_408(func_491(&(Local_212[iVar1 /*91*/])));
							}
							else
							{
								Local_212[iVar1 /*91*/].f_88 = 1;
								Local_212[iVar1 /*91*/].f_1 = 5;
							}
							iVar1++;
						}
						return iVar0;
					}
				}
			}
		}
	}
}

void func_172(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (func_161(*cParam0, 4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_212[iVar0 /*91*/].f_88)
		{
			if (Local_212[iVar0 /*91*/].f_1 >= 1)
			{
				if ((!func_49(&(Local_212[iVar0 /*91*/].f_81)) || func_498(&(Local_212[iVar0 /*91*/].f_81)) < 5f) && !ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84))
				{
					PED::SET_PED_RESET_FLAG(Local_212[iVar0 /*91*/].f_84, 49, true);
				}
			}
			if (PED::IS_PED_DEAD_OR_DYING(Local_212[iVar0 /*91*/].f_84, true) && Local_212[iVar0 /*91*/].f_1 != 5)
			{
				func_499(&(Local_212[iVar0 /*91*/]));
				func_70(&(Local_212[iVar0 /*91*/].f_81));
				Local_212[iVar0 /*91*/].f_1 = 5;
			}
			switch (Local_212[iVar0 /*91*/].f_1)
			{
				case 0:
					if (((!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && func_162(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1)) && !PED::IS_PED_FLEEING(Local_212[iVar0 /*91*/].f_84)) && !PED::IS_PED_IN_COMBAT(Local_212[iVar0 /*91*/].f_84, 0))
					{
						func_500(&(Local_212[iVar0 /*91*/]));
						Local_212[iVar0 /*91*/].f_1 = 1;
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && !func_162(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1))
					{
						func_499(&(Local_212[iVar0 /*91*/]));
						func_501(&(Local_212[iVar0 /*91*/].f_2), 0);
						Local_212[iVar0 /*91*/].f_1 = 0;
					}
					func_396(&(Local_212[iVar0 /*91*/].f_84), &(Local_212[iVar0 /*91*/].f_2), 8f, &(Local_212[iVar0 /*91*/].f_63), 5f, 3, 0, "", 2, 0, 2, -1082130432 /* Float: -1f */);
					if (func_221(&(Local_212[iVar0 /*91*/].f_2)))
					{
						func_502(&(Local_212[iVar0 /*91*/]));
						func_489(1);
						Local_212[iVar0 /*91*/].f_1 = 2;
					}
					break;
				case 2:
					if (!func_503("IN_EMR_PLAYR"))
					{
						if (func_392(&(cParam0->f_2106), "IN_EMR_PLAYR", 0))
						{
						}
					}
					else if (func_504("IN_EMR_PLAYR"))
					{
						IK::_0x66F9EB44342BB4C5(Local_212[iVar0 /*91*/].f_84, &Local_850);
						TASK::_0xE7FA07624574B79A(Local_212[iVar0 /*91*/].f_84, Global_35, 1, 1, 7500f, 1, 0, 0, 0);
						Local_212[iVar0 /*91*/].f_1 = 3;
					}
					break;
				case 3:
					if (!func_504("IN_EMR_PLAYR"))
					{
						if (((!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && !func_162(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1)) && !func_503(Local_212[iVar0 /*91*/].f_86)) && !func_503(Local_212[iVar0 /*91*/].f_87))
						{
							func_501(&(Local_212[iVar0 /*91*/].f_2), 0);
							Local_212[iVar0 /*91*/].f_1 = 0;
						}
						else if (Local_212[iVar0 /*91*/].f_85 < func_505(&(Local_212[iVar0 /*91*/])))
						{
							if (!func_503(Local_212[iVar0 /*91*/].f_86))
							{
								if (func_392(&(cParam0->f_2106), Local_212[iVar0 /*91*/].f_86, 0))
								{
								}
							}
							else if (func_504(Local_212[iVar0 /*91*/].f_86))
							{
								Local_212[iVar0 /*91*/].f_85++;
								Local_212[iVar0 /*91*/].f_1 = 4;
							}
						}
						else if (!func_503(Local_212[iVar0 /*91*/].f_87))
						{
							if (func_392(&(cParam0->f_2106), Local_212[iVar0 /*91*/].f_87, 0))
							{
							}
						}
						else if (func_504(Local_212[iVar0 /*91*/].f_87))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_212[iVar0 /*91*/].f_84, false);
							Local_212[iVar0 /*91*/].f_85++;
							func_499(&(Local_212[iVar0 /*91*/]));
							func_506(&(Local_212[iVar0 /*91*/]));
							func_70(&(Local_212[iVar0 /*91*/].f_81));
							Local_212[iVar0 /*91*/].f_1 = 5;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_212[iVar0 /*91*/].f_84) && !func_162(Local_212[iVar0 /*91*/].f_84, Global_36, 12f, 1, 1))
					{
						func_501(&(Local_212[iVar0 /*91*/].f_2), 0);
						Local_212[iVar0 /*91*/].f_1 = 0;
					}
					break;
				case 4:
					if (!func_504(Local_212[iVar0 /*91*/].f_86))
					{
						if (Local_212[iVar0 /*91*/].f_89)
						{
							func_507(0, 1419.59f, 379.1001f, 88.97112f, 15f);
							iVar1 = 0;
							while (iVar1 < 7)
							{
								if (Local_212[iVar1 /*91*/].f_88)
								{
									func_499(&(Local_212[iVar1 /*91*/]));
									func_506(&(Local_212[iVar1 /*91*/]));
								}
								iVar1++;
							}
							func_70(&(Local_212[iVar0 /*91*/].f_81));
							Local_212[iVar0 /*91*/].f_1 = 5;
						}
						else
						{
							func_501(&(Local_212[iVar0 /*91*/].f_2), 0);
							Local_212[iVar0 /*91*/].f_1 = 0;
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_212[iVar0 /*91*/].f_84, false);
					}
					break;
				case 5:
					if (PED::IS_PED_DEAD_OR_DYING(Local_212[iVar0 /*91*/].f_84, true))
					{
						if (!Local_212[iVar0 /*91*/].f_90)
						{
							func_499(&(Local_212[iVar0 /*91*/]));
							Local_212[iVar0 /*91*/].f_90 = 1;
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_173(char[4] cParam0)
{
	if (!func_487(4))
	{
		if (BUILTIN::VDIST2(Global_36, Global_1392626[*cParam0 /*32*/].f_24) <= (25f * 25f))
		{
			if ((!func_508() && !func_332()) && func_161(*cParam0, 4))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_70[1 /*19*/]) >= 83.3f)
				{
					func_94("OBJ_CONFRONT_LIL", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_489(4);
				}
			}
		}
	}
}

void func_174(char[4] cParam0)
{
	func_509(cParam0);
	func_510(cParam0);
	if (func_4(cParam0->f_16, 2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1392626[*cParam0 /*32*/].f_11))
		{
			if (func_162(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 20f, 1, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_979[0], -1, 0, 51, 0);
			}
			else if (!func_162(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 25f, 1, 1))
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
			}
		}
	}
}

bool func_175(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_176(int iParam0)
{
	if (!func_353(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_177(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
		uParam0->f_295++;
		if (uParam0->f_295 < 10)
		{
			return (func_511(uParam0, 256) && !func_511(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_512(uParam0, sParam1);
	if (!func_511(uParam0, 64))
	{
		if (!func_175(func_513(uParam0)))
		{
			func_337(uParam0, 64);
		}
		else
		{
			vVar0 = { func_514(uParam0) };
			if (!func_175(vVar0))
			{
				func_515(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_516(Global_35, func_513(uParam0), 1);
	if (func_511(uParam0, 128) || func_511(uParam0, 256))
	{
		if ((fVar3 >= func_517(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				func_518();
				uParam0->f_313 = 0;
			}
			func_519(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			func_344(uParam0);
			func_520(uParam0, 128, 1);
			func_520(uParam0, 256, 1);
			func_520(uParam0, 4096, 1);
			func_520(uParam0, 32768, 1);
			func_520(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_521(uParam0) || bParam2)
	{
		if (!func_511(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (func_521(uParam0) >= func_517(uParam0))
				{
				}
				Var4 = { func_522(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_208(uParam0);
				}
				Var4 = { func_522(uParam0) };
				iVar12 = 256;
				if (!func_511(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				func_523(uParam0, 0, 0, 0, 0);
				func_337(uParam0, 128);
			}
		}
	}
	if (func_511(uParam0, 128))
	{
		if (func_511(uParam0, 256) && !func_511(uParam0, 4194304))
		{
			return true;
		}
		func_524(uParam0);
		if (!uParam0->f_313)
		{
			if (func_525())
			{
				func_526(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { func_335(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_246[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_246[iVar14 /*9*/].f_8)
						{
							uParam0->f_246[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_511(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!func_511(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &Var15);
						}
						func_337(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_337(uParam0, 256);
			func_520(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_178(char[4] cParam0)
{
}

void func_179(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !func_175(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, func_527(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, false, 15);
		if (func_528(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

bool func_180(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_181(var uParam0)
{
	return func_180(*uParam0, 2);
}

int func_182()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_183(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_184(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

void func_185(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_186(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_187(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_188(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[0]))
	{
		return 1;
	}
	func_529();
	if (func_63(uLocal_979[0], 1))
	{
		Global_1392626[*uParam0 /*32*/].f_11 = uLocal_979[0];
		PLAYER::_0xA342495F93B7B838(PLAYER::PLAYER_ID(), uLocal_979[0]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_979[0], iLocal_983);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[0], true);
		ENTITY::SET_ENTITY_COORDS(uLocal_979[0], vLocal_964[0 /*3*/], true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_979[0], fLocal_971[0]);
		PED::_0x923583741DC87BCE(uLocal_979[0], "Lilly_Millet");
		PED::SET_PED_CONFIG_FLAG(uLocal_979[0], 315, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_979[0]);
		func_530(uLocal_979[0]);
		func_531(uLocal_979[0], 0);
		PED::_0xAAB050DA48B57978(uLocal_979[0], "Default_Nervous", Global_35, -1, 4);
		func_533(uLocal_979[0], func_532(GET_HASH_KEY("REWARD_PED_SMALL"), 0, -1));
		return 1;
	}
	return 0;
}

int func_189()
{
	if (func_407(594))
	{
		if (!func_490(Global_1392626[0 /*32*/].f_12))
		{
			return 0;
		}
		if (!func_534(594, 1))
		{
			return 0;
		}
	}
	if (func_63(uLocal_979[1], 0))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 38, true);
		PED::SET_LOOTING_FLAG(uLocal_979[1], 6, false);
		PED::SET_LOOTING_FLAG(uLocal_979[1], 4, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 315, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_979[1], true);
		func_535(uLocal_979[1], 0);
		func_530(uLocal_979[1]);
		func_536(uLocal_979[1]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_979[1], iLocal_982);
		ENTITY::SET_ENTITY_MAX_HEALTH(uLocal_979[1], 145);
		ENTITY::SET_ENTITY_HEALTH(uLocal_979[1], 145, 0);
		return 1;
	}
	else if (!func_537(0, &(uLocal_979[1]), iLocal_974, vLocal_964[1 /*3*/], fLocal_971[1], 1, 1, 0, 1, 1, 1, 1))
	{
		return 0;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)
{
	if (!Local_70[iParam0 /*19*/].f_17)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[iParam0 /*19*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_70[iParam0 /*19*/], true, false))
			{
				Local_70[iParam0 /*19*/].f_17 = 1;
				if (iParam0 == 2)
				{
					if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Local_70[iParam0 /*19*/], "Lilly", &(Local_70[iParam0 /*19*/].f_5), false, 0, 2))
					{
						vLocal_958 = { Local_70[iParam0 /*19*/].f_5 };
					}
				}
				return Local_70[iParam0 /*19*/].f_17;
			}
		}
		else
		{
			Local_70[iParam0 /*19*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_70[iParam0 /*19*/].f_1, iParam1, Local_70[iParam0 /*19*/].f_18, false, true);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[iParam0 /*19*/]))
			{
				func_538(iParam0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_70[iParam0 /*19*/]);
			}
		}
	}
	return Local_70[iParam0 /*19*/].f_17;
}

void func_191(char[4] cParam0)
{
	if (!func_166(16384))
	{
		if (ENTITY::_0x6BFBDC46139C45AB(vLocal_964[0 /*3*/]))
		{
			func_167();
		}
	}
	func_539(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]), vLocal_964[0 /*3*/], 0f, 0f, 0f, 12f, 12f, 12f, 0, 0, 1, 0, 0);
	func_145(&(cParam0->f_2106), Global_35, "ARTHUR", 0);
	func_145(&(cParam0->f_2106), uLocal_979[0], "LOAN_EMR_WOMAN", 0);
	func_145(&(cParam0->f_2106), uLocal_979[1], "LOAN_EMR_MAN", 0);
	func_540(GET_HASH_KEY("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
	func_145(&(Local_992.f_81), Global_35, "ARTHUR", 0);
	func_145(&(Local_992.f_81), uLocal_979[1], "LOAN_EMR_MAN", 0);
}

void func_192(var uParam0)
{
	PED::SET_PED_LASSO_HOGTIE_FLAG(*uParam0, 0, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 7, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 0, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 1, false);
}

bool func_193(int iParam0)
{
	int iVar0;

	iVar0 = func_541(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_194(int iParam0)
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
		iVar0 = func_542(iParam0);
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

void func_195(int iParam0, bool bParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	if (!func_543(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_544(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_414(iParam0), func_383(iParam0), func_415(iParam0), func_544(iParam0), Global_36);
		}
	}
	func_380(iParam0, 1);
	bParam1 = bParam1;
}

void func_196(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_105(iParam0))
	{
		return;
	}
	if (!func_194(iParam0))
	{
		return;
	}
	iVar0 = func_414(iParam0);
	if (bParam1)
	{
		if (func_544(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_545(func_383(iParam0));
			}
			if (func_268() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_544(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_544(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_546(iParam0);
	if (!func_105(func_104(0)))
	{
		func_380(iParam0, 3);
		func_547(bParam2);
		if (func_268() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_548(1);
		}
		func_549(iParam0, -1);
		if (bParam1 && !func_550(2))
		{
			func_551(&Global_0, 1024);
		}
		if (func_268() == -1)
		{
			func_552(&(Global_1347343.f_11), 536870912);
			func_553(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_554(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_555(0);
			}
		}
		if (func_268() == -1)
		{
			iVar1 = func_556(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_557();
				switch (iVar1)
				{
					case 0:
						func_558(0);
						break;
					case 1:
						func_558(1);
						break;
					case 2:
						func_558(2);
						break;
					case 3:
						func_558(3);
						break;
					case 4:
						func_558(4);
						break;
					case 5:
						func_558(5);
						break;
					case 6:
						func_558(5);
						break;
					case 7:
						func_558(7);
						break;
					case 8:
						func_558(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_383(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_558(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_383(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_558(11);
						break;
					default:
						iVar1 = func_557();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_559(0);
									break;
								case 1:
									func_559(1);
									break;
								case 2:
									func_559(2);
									break;
								case 3:
									func_559(3);
									break;
								case 4:
									func_559(4);
									break;
								case 5:
									func_559(5);
									break;
								case 6:
									func_559(5);
									break;
								case 7:
									func_559(7);
									break;
								case 8:
									func_559(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_560(1);
	}
	else
	{
		func_549(iParam0, -1);
		func_380(iParam0, 4);
	}
	func_561(iParam0, 0);
}

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_268() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_365(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	func_366(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSEMR";
		case 1:
			return "LSHNT";
		case 2:
			return "LSCFJ";
		case 3:
			return "LSUND";
		case 5:
			return "LSAM";
		case 6:
			return "LSAM2";
		case 4:
			return "LSSLD";
		case 7:
			return "LSHSC";
		case 8:
			return "LSHSS";
	}
	return "";
}

void func_200(bool bParam0)
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
	func_562(0f);
	Global_1935436.f_11 = 1;
	if (func_563())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_564();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_201(char[4] cParam0)
{
	int iVar0;

	if (cParam0->f_13 == -1)
	{
		cParam0->f_13 = 8;
	}
	if (cParam0->f_13 != -1)
	{
		if (cParam0->f_13 < cParam0->f_12)
		{
			iVar0 = (cParam0->f_12 - cParam0->f_13);
			PED::_0x7D4E70A67A651C71(iVar0);
			cParam0->f_12 = -1;
		}
		if (cParam0->f_13 > 0)
		{
			PED::_0xED9582B3DA8F02B4(cParam0->f_13);
		}
	}
}

void func_202(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_9() != iParam9)
	{
		func_369(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_565(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
}

char* func_203()
{
	return "LSEMR_MCS1";
}

void func_204(var uParam0)
{
	func_404(&(Local_1365[0 /*61*/]), uLocal_979[0]);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[1 /*19*/]);
	}
	WEAPON::_0xD53846B9C931C181(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), 45f);
	WEAPON::_0xD53846B9C931C181(uLocal_979[1], GET_HASH_KEY("WEAPON_UNARMED"), 45f);
}

void func_205(char[4] cParam0, int iParam1)
{
	func_566(&(cParam0->f_32), iParam1);
}

void func_206(var uParam0)
{
	if (func_567(uParam0, func_203()))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[1 /*19*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[1 /*19*/]);
			}
		}
		if (!func_166(1024))
		{
			if (func_568(uParam0) > 23000)
			{
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Face_Dirt", 1f, 1f);
				func_65(1024);
			}
		}
	}
	func_569(uParam0, 0);
	if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		if (!func_166(1024))
		{
			PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Face_Dirt", 1f, 1f);
			func_65(1024);
			iLocal_1256 = 1;
		}
	}
}

void func_207(char[4] cParam0, int iParam1)
{
	func_570(&(cParam0->f_32), iParam1);
}

void func_208(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_571() };
	func_572(uParam0, &Var0);
}

void func_209(char[4] cParam0, int iParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*iParam1))
	{
		cParam0->f_32.f_4 = *iParam1;
	}
}

void func_210(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_573(&(cParam0->f_32), iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_211(char[4] cParam0, vector3 vParam1)
{
	if (!func_175(vParam1))
	{
		cParam0->f_32.f_5 = { vParam1 };
	}
	else
	{
		cParam0->f_32.f_5 = { func_176(*cParam0) };
	}
}

void func_212(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_289 = { vParam1 };
	uParam0->f_292 = fParam4;
	if (func_175(vParam1))
	{
		func_520(uParam0, 2048, 1);
	}
	else
	{
		func_337(uParam0, 2048);
		if (bParam5)
		{
			func_337(uParam0, -2147483648);
		}
	}
}

void func_213(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_335(uParam0) };
	func_572(uParam0, &Var0);
}

bool func_214(char[4] cParam0)
{
	if (!func_53(64))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	else if (func_183(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_215(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1392626[*cParam0 /*32*/].f_24, true) > cParam0->f_17.f_5)
				{
					if (func_49(&(cParam0->f_17.f_12)))
					{
						func_71(&(cParam0->f_17.f_12));
					}
				}
				cParam0->f_17 = 1;
			}
			else
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 1:
			if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_574(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
			{
				cParam0->f_17 = 2;
				return;
			}
			else if (PED::IS_PED_ON_FOOT(Global_35))
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 2:
			if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !func_232(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !func_232(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_216(var uParam0, struct<4> Param1, int iParam5)
{
	switch (func_575(uParam0))
	{
		case 0:
			func_576(uParam0, Param1, iParam5);
			break;
		case 1:
			func_577(uParam0);
			break;
		case 2:
			func_578(uParam0);
			break;
	}
}

bool func_217(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_334(uParam0, 32768))
	{
		return true;
	}
	if (func_575(uParam0) >= 3)
	{
		uParam0->f_1662 = func_436(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1663 = PED::IS_PED_FULLY_ON_MOUNT(Global_35, true);
		uParam0->f_1665 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1663)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1664 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1664 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1665)
		{
			uParam0->f_1667 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1668 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_579(uParam0);
	}
	if (func_575(uParam0) < 10)
	{
		if (func_575(uParam0) == 3)
		{
			func_580(uParam0, iParam5, bParam6);
		}
		else if (func_575(uParam0) > 3)
		{
			if (func_581(uParam0) == 0)
			{
				if (!func_334(uParam0, 524288))
				{
					func_582(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_583(uParam0, 4);
					func_584(uParam0, 10);
					func_585(uParam0, iParam5);
					return true;
				}
			}
			if (!func_334(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_342(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_586(0);
			func_587();
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1450 >= 0)
			{
				if (!func_342(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_588(uParam0, uParam0->f_1450))
				{
					if (func_589(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_590(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_590(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_591(uParam0);
			}
		}
	}
	bVar0 = func_592(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_334(uParam0, 268435456) && bVar1) && !func_334(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668);
			if (uParam0->f_1450 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[uParam0->f_1450 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1668)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_593(uParam0, 131072);
				func_593(uParam0, 268435456);
			}
		}
		if (func_341(uParam0, 64) || (uParam0->f_1450 >= 0 && !func_342(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_581(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_575(uParam0) == 3 || func_334(uParam0, 131072))
	{
		func_594(uParam0);
		if (!func_334(uParam0, 262144))
		{
			if ((bVar0 && func_334(uParam0, 65536)) || func_334(uParam0, 131072))
			{
				func_593(uParam0, 32768);
				func_583(uParam0, 4);
				func_584(uParam0, 10);
				uParam0->f_1535 = 1;
				func_585(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_575(uParam0) >= 3)
	{
		func_595(uParam0, iParam5);
		func_596(uParam0);
		if (!func_597(uParam0, 1))
		{
			func_598(uParam0);
		}
		func_599(uParam0);
	}
	switch (func_575(uParam0))
	{
		case 0:
			func_576(uParam0, Param1, iParam5);
			break;
		case 1:
			func_577(uParam0);
			break;
		case 2:
			func_578(uParam0);
			break;
		case 3:
			if (func_218(uParam0))
			{
				func_600(2);
				func_590(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_70(&(uParam0->f_1638));
				func_583(uParam0, 1);
				func_601();
				func_584(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_334(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_575(uParam0) == 5)
			{
				if (func_602(uParam0))
				{
					func_583(uParam0, 2);
					func_584(uParam0, 6);
				}
			}
			if (func_575(uParam0) == 6)
			{
				if (func_603(uParam0))
				{
					func_583(uParam0, 3);
					func_584(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || func_498(&(uParam0->f_1638)) >= 15f)
			{
				if (func_604(uParam0, iParam5))
				{
					if (func_605(uParam0))
					{
						uParam0->f_1451 = func_606(uParam0);
						func_70(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_583(uParam0, 6);
						func_584(uParam0, 9);
					}
					else
					{
						func_583(uParam0, 4);
						func_584(uParam0, 10);
						func_585(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_604(uParam0, iParam5))
			{
				func_585(uParam0, iParam5);
				func_584(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_218(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

void func_219(char[4] cParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 20f;
	if (!func_4(cParam0->f_16, 2))
	{
		if (func_63(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			if (func_162(Global_1392626[*cParam0 /*32*/].f_11, Global_36, fVar0, 1, 1))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				if (func_607(vVar1))
				{
					func_34(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_1392626[*cParam0 /*32*/].f_11) && func_162(Global_1392626[*cParam0 /*32*/].f_11, Global_36, fVar0, 1, 1))
	{
	}
}

int func_220(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_608(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_609(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		func_610(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
			func_70(&(iParam1->f_13));
		}
		if (func_611(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_612(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_220(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_410(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_613(*uParam0, 1, 1);
						}
					}
					else if (func_614(iParam1, 22))
					{
						func_613(*uParam0, 0, 1);
					}
				}
				if (func_615(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_616(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_617(iParam8);
					func_618(iParam1, uParam3);
					if (func_619(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_620(uParam3);
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
					func_621(iParam1, uParam3, fVar8);
					if (func_622(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_224(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_615(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_623(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_619(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_616(uParam0, func_615(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_617(iParam8);
					func_618(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_224(uParam3, 0, 0, 1, 1);
					func_624(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_232(Global_35, 501393341) && !func_232(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_625(Global_35, *uParam0, 1f) == 3)
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
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_63(iParam1->f_28, 0)) && func_626(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_232(iParam1->f_28, 518218985)) && !func_232(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_232(Global_35, -828834893) && !func_232(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_625(Global_35, *uParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_627(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_628(iParam1)))
					{
					}
					else if (!func_629(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_70(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_395(uParam3, 0, 0);
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
				if (func_630(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_615(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_623(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_619(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_616(uParam0, func_615(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_617(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_224(uParam3, 0, 0, 1, 1);
					}
					func_624(iParam1, 1);
				}
				func_621(iParam1, uParam3, fVar8);
				if (func_630(uParam0, iParam1, fParam4, bVar6))
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
			func_631(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_221(var uParam0)
{
	if (uParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_222(char[4] cParam0)
{
	if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (func_63(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_223(char[4] cParam0)
{
	int iVar0;
	float fVar1;

	if (func_162(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
	{
		if (!func_632(169))
		{
			func_250(169, 0);
		}
		else if (!func_633(169) && !func_634(169))
		{
			func_635();
		}
	}
	switch (iLocal_17)
	{
		case 0:
			if (func_166(16384))
			{
				if (!VOLUME::DOES_VOLUME_EXIST(iLocal_989))
				{
					iLocal_989 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1429.055f, 381.8093f, 91.05302f, 0f, 0f, -13.12048f, 9.152395f, 13.39776f, 7.020107f, "ILO allow vol");
				}
				else if ((func_390(uLocal_979[0], Global_35, 1, 1) <= 25f && PED::_0x164CECC59E70DF86(uLocal_979[0], 80f)) && func_636(Global_35, uLocal_979[0], 0, 1114636288 /* Float: 60f */, 0))
				{
					iLocal_17 = 1;
				}
			}
			break;
		case 1:
			CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_979[0], 0f, 0f, 0f, true, 3500, 2000, 2000, 0);
			func_637(*cParam0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (Local_212[iVar0 /*91*/].f_88)
				{
					func_499(&(Local_212[iVar0 /*91*/]));
					func_638(Local_212[iVar0 /*91*/].f_84);
				}
				iVar0++;
			}
			func_639(1, "bIdletoArgue", 1);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uLocal_979[0], "LSEM_LEADIN", 0f, 0f, 0f, 0, "LSEM_PRE");
			iLocal_17 = 2;
			break;
		case 2:
			if (!bLocal_1263)
			{
				if (func_640())
				{
					bLocal_1263 = true;
				}
			}
			else
			{
				if (func_396(&(uLocal_979[0]), &(Local_1365[0 /*61*/]), 15f, &Local_1427, 0.25f, 3, 0, "", 4, iLocal_989, 2, -1082130432 /* Float: -1f */) > -1)
				{
					func_641(&(Local_1427[0 /*17*/]), 0, 0);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_PRE");
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uLocal_979[0], "LSEM_LEADIN_ACTIVE", 0f, 0f, 0f, uLocal_979[0], "LSEM_ACTIVE");
					iLocal_17 = 3;
				}
				if (iLocal_17 == 2)
				{
					fVar1 = func_390(uLocal_979[0], Global_35, 0, 1);
					if (fVar1 > 5f)
					{
						if (func_393(&(Local_1427[0 /*17*/]), 0, 0))
						{
							func_641(&(Local_1427[0 /*17*/]), 0, 0);
						}
					}
					else if (!func_393(&(Local_1427[0 /*17*/]), 0, 0))
					{
						func_641(&(Local_1427[0 /*17*/]), 1, 0);
					}
				}
			}
			break;
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_991))
			{
				iLocal_991 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLBOX"), 1422.077f, 387.7596f, 90.25286f, 0f, 0f, -14.70995f, 5.068347f, 13.97886f, 4.026019f);
			}
			func_610(&(uLocal_979[0]), &(Local_1365[0 /*61*/]), &Local_1427, 15f, -1082130432 /* Float: -1f */, 0);
			if (func_642())
			{
				if (func_392(&(cParam0->f_2106), "LS_EMR_MCS1_LI", 0))
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING("LS_EMR_IG2_P1"))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION("LS_EMR_IG2_P1", false, false);
					}
					iLocal_17 = 4;
				}
			}
			break;
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_991))
			{
				iLocal_991 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLBOX"), 1422.077f, 387.7596f, 90.25286f, 0f, 0f, -14.70995f, 5.068347f, 13.97886f, 4.026019f);
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			func_586(0);
			func_610(&(uLocal_979[0]), &(Local_1365[0 /*61*/]), &Local_1427, 15f, -1082130432 /* Float: -1f */, 0);
			if (func_476(Global_35, 1, 0, 0) != GET_HASH_KEY("WEAPON_UNARMED") || func_476(Global_35, 1, 1, 0) != GET_HASH_KEY("WEAPON_UNARMED"))
			{
				if (!func_232(Global_35, 716706914))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(Local_70[1 /*19*/]) || ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_70[1 /*19*/]) > 0.98f)
			{
				func_347(iLocal_991);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LSEM_ACTIVE");
				return true;
			}
			break;
	}
	return false;
}

void func_224(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_643((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_644(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_225(char[4] cParam0)
{
}

int func_226(char[4] cParam0)
{
	if (func_166(512))
	{
		return 8;
	}
	func_645(Global_35);
	return 6;
}

bool func_227(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_228(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_979[0], cLocal_912, vLocal_23[iParam0 /*3*/], 1))
	{
		if (bParam5)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_979[0], cLocal_912, vLocal_23[iParam0 /*3*/], Global_35, -1, fParam1, fParam2, iParam3, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			TASK::TASK_PLAY_ANIM(uLocal_979[0], cLocal_912, vLocal_23[iParam0 /*3*/], fParam1, fParam2, -1, iParam3, 0f, false, 0, false, 0, false);
		}
		if (bParam4)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_979[0], false, false);
		}
		func_646(iParam0);
		func_647(uLocal_979[1]);
		func_647(Global_35);
	}
}

void func_229()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!Local_153[iVar0 /*10*/].f_9)
		{
			Local_153[iVar0 /*10*/] = 0;
			Local_153[iVar0 /*10*/].f_9 = 0;
			Local_153[iVar0 /*10*/].f_1 = -1;
		}
		iVar0++;
	}
}

void func_230(int iParam0)
{
	iLocal_18 = iParam0;
}

void func_231(int iParam0, int iParam1)
{
	func_648(iParam0, iParam1);
}

bool func_232(bool bParam0, int iParam1)
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

void func_233(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*iParam0 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam3);
		}
	}
}

void func_234(int iParam0)
{
	iLocal_19 = iParam0;
}

bool func_235(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_REQUEST_SCENARIO_TYPE(iParam0, iParam1, iParam2, iParam3);
}

int func_236(bool bParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_237(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(bParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_238(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_649() - fParam1);
	func_650(uParam0, 1);
	func_651(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_239(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_240(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_268() == -1)
	{
		if (func_652(iParam0) && func_653(iParam0))
		{
			func_654(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == GET_HASH_KEY("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_241(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_655(iParam0, iParam1);
	Var0 = { func_656(iParam0, 0, 1) };
	iVar5 = func_657(iParam0, &Var0, 0, 0);
	iVar6 = func_658(iParam0, 0);
	if ((iVar5 > 1 && !func_659()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_261(iParam0, -2051813666))
		{
			func_250(583, 1);
		}
		else
		{
			func_250(582, 0);
		}
	}
	if (func_660(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_242(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_661(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_243(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_260(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_425(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_662(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_663(bParam2), iParam0, 0);
	return iVar2;
}

bool func_244(int iParam0)
{
	if (func_268() != -1)
	{
		return false;
	}
	return func_245(iParam0) != 0;
}

int func_245(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_664())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_665(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_246(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_664())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_246(iVar0))
		{
			if (func_294(func_665(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_248(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_666(48);
	func_667(0, -1);
}

bool func_249(int iParam0)
{
	if (func_268() != -1)
	{
		return false;
	}
	return func_281(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_250(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_668(iParam0, &iVar0, &iVar1);
	if (!func_669(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_670(iVar0, iVar1);
}

int func_251(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_252(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_253()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_254(int iParam0)
{
	if (func_268() != -1)
	{
		return false;
	}
	return func_281(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_255(int iParam0)
{
	if (func_268() != -1)
	{
		return false;
	}
	if (!func_384(iParam0))
	{
		return false;
	}
	return func_193(Global_1347702[iParam0 /*49*/].f_15);
}

int func_256()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_294(func_671(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_257(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_253() && (func_255(38) || func_249(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = GET_HASH_KEY("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = GET_HASH_KEY("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_253() && (func_255(39) || func_249(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = GET_HASH_KEY("BLIP_RC_DEBORAH");
				iVar13 = GET_HASH_KEY("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = GET_HASH_KEY("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = GET_HASH_KEY("DINO_BONES");
			break;
		case 43:
			if (iParam3 == GET_HASH_KEY("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == GET_HASH_KEY("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == GET_HASH_KEY("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == GET_HASH_KEY("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == GET_HASH_KEY("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_672(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_253() && (func_255(41) || func_249(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = GET_HASH_KEY("BLIP_RC_JEREMY_GILL");
			iVar13 = GET_HASH_KEY("COL_LF_INTRO");
			break;
		case 49:
			if (func_253() && (func_255(49) || func_249(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = GET_HASH_KEY("BLIP_SCM_FRANCES");
				iVar13 = GET_HASH_KEY("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = GET_HASH_KEY("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = GET_HASH_KEY("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_672(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_673(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_674(iParam0, iVar13, iVar14))
	{
	}
	if (func_675(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_676(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_677(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_678(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_679(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_258(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_253() && (func_255(38) || func_249(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = GET_HASH_KEY("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = GET_HASH_KEY("DINO_BONES");
			if (func_253() && (func_255(39) || func_249(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = GET_HASH_KEY("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = GET_HASH_KEY("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = GET_HASH_KEY("BLIP_RC_JEREMY_GILL");
			iVar6 = GET_HASH_KEY("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = GET_HASH_KEY("ROCK_CARVINGS");
			if (func_253() && (func_255(49) || func_249(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = GET_HASH_KEY("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = GET_HASH_KEY("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = GET_HASH_KEY("TAXIDERMY");
			iVar4 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar6 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_253() && (func_255(38) || func_249(38)))
		{
			iVar6 = GET_HASH_KEY("COL_CC_INTRO");
		}
		else
		{
			iVar6 = GET_HASH_KEY("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_681(func_252(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_253() && (func_255(39) || func_249(39)))
		{
			iVar6 = GET_HASH_KEY("COL_DB_INTRO");
		}
		else
		{
			iVar6 = GET_HASH_KEY("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_253() && (func_255(49) || func_249(49)))
		{
			iVar6 = GET_HASH_KEY("COL_RC_INTRO");
		}
		else
		{
			iVar6 = GET_HASH_KEY("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_680(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_260(int iParam0)
{
	vector3 vVar0;

	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_261(int iParam0, int iParam1)
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

bool func_262(int iParam0, int iParam1)
{
	if (!func_239(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_263(int iParam0)
{
	if (!func_683(iParam0))
	{
		return false;
	}
	return func_684(iParam0);
}

void func_264(int iParam0)
{
	if (!func_683(iParam0))
	{
		return;
	}
	func_685(iParam0);
	func_686(iParam0);
}

int func_265(int iParam0)
{
	struct<2> Var0;

	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_266(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("AMMO_THROWING_KNIVES"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case GET_HASH_KEY("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case GET_HASH_KEY("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case GET_HASH_KEY("AMMO_DYNAMITE"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_DYNAMITE");
			break;
		case GET_HASH_KEY("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_DYNAMITE");
			break;
		case GET_HASH_KEY("AMMO_MOLOTOV"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_MOLOTOV");
			break;
		case GET_HASH_KEY("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_MOLOTOV");
			break;
		case GET_HASH_KEY("AMMO_TOMAHAWK"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_TOMAHAWK");
			break;
		case GET_HASH_KEY("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case GET_HASH_KEY("AMMO_TOMAHAWK_HOMING"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_TOMAHAWK");
			break;
		case GET_HASH_KEY("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = GET_HASH_KEY("WEAPON_THROWN_TOMAHAWK");
			break;
		case GET_HASH_KEY("AMMO_HATCHET"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_HUNTER"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_ANCIENT"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_CLEAVER"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_CLEAVER");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_HEWING"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case GET_HASH_KEY("AMMO_HATCHET_VIKING"):
			iVar0 = GET_HASH_KEY("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_239(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_687(iVar0) || func_688(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_267(int iParam0, bool bParam1)
{
	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_268()
{
	return Global_1572887.f_12;
}

void func_269(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_478(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_270(bool bParam0)
{
	if (func_268() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_663(bParam0));
}

bool func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_656(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_689((398 + iVar28), 1);
			if (func_690(iParam0, &Var0, iVar5, 0))
			{
				if (func_691(iParam0, &Var6, iVar5))
				{
					Var29 = { func_692(iParam0, Var0, iVar5, 0) };
					func_693(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_270(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_272(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_694(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_272(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_274(iParam0))
	{
		return false;
	}
	if (!func_270(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_273(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_267(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_268() == -1)
		{
			func_269(iVar0);
			if (iParam1 == 1248274121)
			{
				func_695(iVar0);
			}
		}
		if (!func_660(iParam0, &uVar1, 1, 0, 0))
		{
			func_654(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_696(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_271(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_271(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_271(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_697())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_698(iVar0))
				{
					func_271(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_271(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_699(Global_35, 2, 0, 1);
				if ((((func_478(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_263(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_478(iVar7) && func_263(24))
				{
					if (!func_271(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_271(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_271(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_250(480, 1);
	}
	return true;
}

bool func_274(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_275(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_274(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_478(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_294(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_313(func_700(iParam0), func_312(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_268() == -1)
		{
			if (func_281(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_250(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_270(0))
	{
		if (func_272(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_318(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_276(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_701()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_702(Global_35, iParam0, &uVar0))
		{
			func_297(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_303();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_303();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_303();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_301();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_299();
			break;
	}
}

void func_277(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_299();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_300();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_301();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_302();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_303();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_703();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_704();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_278(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_279(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_280(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_281(int iParam0, bool bParam1)
{
	switch (func_541(iParam0))
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

void func_282(int iParam0)
{
	bool bVar0;

	bVar0 = func_261(iParam0, -2017733358);
	if (func_705() < 3)
	{
		if (bVar0)
		{
			if (func_707(func_706(iParam0), iParam0))
			{
				func_313(79, func_312(func_706(iParam0)), 1);
			}
			else
			{
				func_313(78, func_312(func_706(iParam0)), 1);
			}
		}
		else
		{
			func_313(80, func_312(func_708(iParam0)), 1);
		}
	}
}

bool func_283()
{
	if (((((func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_284(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_532(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_710(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_711(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_285(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_259(51, 0, 0, 0, 0, -1, 0);
			func_712(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_259(51, 0, 0, 0, 0, -1, 0);
			func_712(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_257(39, 0, 0, 0, 0, 0, 1, 0);
			func_259(39, 0, 0, 0, 0, -1, 0);
			func_713(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_257(41, 0, 0, 0, 0, 0, 1, 0);
			func_259(41, 0, 0, 0, 0, -1, 0);
			func_714(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_257(49, 0, 0, 0, 0, 0, 1, 0);
			func_259(49, 0, 0, 0, 0, -1, 0);
			func_715(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_257(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_716(1), 0, -1, 0);
			func_717(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_257(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_716(2), 0, -1, 0);
			func_717(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_257(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_716(4), 0, -1, 0);
			func_717(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_257(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_716(8), 0, -1, 0);
			func_717(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_257(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_716(16), 0, -1, 0);
			func_717(16);
			break;
	}
}

void func_286(int iParam0)
{
	if (func_718() == 1)
	{
		if (func_249(39))
		{
			func_250(342, 0);
		}
		else
		{
			func_250(343, 0);
			func_713(1);
		}
	}
	if (func_718() >= 30)
	{
		func_250(344, 0);
	}
	func_257(39, 0, 0, 0, 0, 0, -1, 0);
	func_259(39, 0, 0, func_718(), 30, 1, 0);
}

void func_287(int iParam0)
{
	if (func_719() == 1)
	{
		if (func_249(49))
		{
			func_250(409, 0);
		}
		else
		{
			func_250(410, 0);
			func_715(1);
		}
	}
	if (func_719() >= 10)
	{
		func_250(411, 0);
	}
	func_257(49, 0, 0, 0, 0, 0, -1, 0);
	func_259(49, 0, 0, func_719(), 10, 1, 0);
}

void func_288(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_250(437, 0);
			func_250(440, 0);
			func_720(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_259(51, 0, 0, sVar0, func_672(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_712(1);
			func_721(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_720(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_259(51, 0, 0, sVar0, func_672(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_712(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_720(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_259(51, 0, 0, sVar0, func_672(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_712(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_720(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_259(51, 0, 0, sVar0, func_672(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_712(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_250(438, 0);
			func_720(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_257(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_259(51, 0, 0, sVar0, func_672(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_712(32768);
			break;
		default:
			func_250(439, 0);
			break;
	}
}

void func_289()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_268() == -1)
	{
		if (!func_249(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_250(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_250(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_250(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_250(400, 0);
			}
		}
		else if (func_261(iParam0, 412399755))
		{
			func_722(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_723() == 0)
			{
				func_667(0, 10);
				iVar1 = func_724(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_725(iParam0) < func_726(iParam0))
					{
						func_257(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_259(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_249(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_250(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_250(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_250(401, 0);
			}
		}
		else if (func_261(iParam0, 709057512))
		{
			func_722(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_723() == 1)
			{
				func_667(0, 10);
				iVar1 = func_724(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_725(iParam0) < func_726(iParam0))
					{
						func_257(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_259(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_249(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_250(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_250(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_250(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_250(398, 0);
			}
		}
		else if (func_261(iParam0, -1478961327))
		{
			func_722(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_723() == 2)
			{
				func_667(0, 10);
				iVar1 = func_724(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_727(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_728(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_666(48);
					}
					if (func_725(iParam0) < func_726(iParam0))
					{
						func_257(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_259(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_725(iParam0) < func_726(iParam0))
					{
						func_257(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_259(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_249(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_250(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_250(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_250(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_250(406, 0);
			}
		}
		else if (func_261(iParam0, -1238404098))
		{
			func_722(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_723() == 3)
			{
				func_667(0, 10);
				iVar1 = func_724(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_725(iParam0) < func_726(iParam0))
					{
						func_257(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_259(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_249(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_250(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_250(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_250(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_250(403, 0);
			}
		}
		else if (func_261(iParam0, 1160548794))
		{
			func_722(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_723() == 4)
			{
				func_667(0, 10);
				iVar1 = func_724(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_725(iParam0) < func_726(iParam0))
					{
						func_257(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_259(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_291(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_727(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_728(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_666(48);
		}
	}
}

void func_292(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_294(func_729(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_730(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_731(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_293(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_268() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_284(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_284(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_284(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_284(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_284(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_284(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_284(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_284(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_284(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_284(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_284(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_284(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_284(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_732())
			{
				func_284(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_284(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_284(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_284(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_284(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_284(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_284(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_284(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_284(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_284(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_284(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_284(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_284(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_284(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_294(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_239(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_260(iParam0);
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
		if (!func_733(iParam0, 1))
		{
			return false;
		}
	}
	return func_243(iParam0, 0, bParam2) >= iParam1;
}

void func_295(int iParam0)
{
	if (func_249(41))
	{
		func_250(363, 0);
	}
	else
	{
		func_250(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_667(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_296(int iParam0, int iParam1)
{
	var uVar0;

	func_737(iParam0, iParam1, &uVar0);
}

int func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_656(iParam1, 1, 0) };
		iParam3 = func_738(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_740(iParam1, iParam2, func_739(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_741(1, (func_268() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_739(iParam3, 1) /*11*/])
			{
				func_742(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_743(32768) && iParam1 != Global_1946804.f_57[func_739(iParam3, 1) /*11*/])
			{
				func_744();
				func_742(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_742(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_745(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_742(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_526(0);
			func_746(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_742(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_298(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_699(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_699(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_747("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_748(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_749(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_299()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_300()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_301()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_302()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_303()
{
	func_750();
	func_751();
	func_752();
}

void func_304(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = GET_HASH_KEY("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = GET_HASH_KEY("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = GET_HASH_KEY("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = GET_HASH_KEY("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = GET_HASH_KEY("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = GET_HASH_KEY("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case GET_HASH_KEY("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_305(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = GET_HASH_KEY("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = GET_HASH_KEY("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = GET_HASH_KEY("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = GET_HASH_KEY("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = GET_HASH_KEY("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = GET_HASH_KEY("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_680(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_306(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_307(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_308(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_309(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_310(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_311(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_312(int iParam0)
{
	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_313(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_668(iParam0, &iVar0, &iVar1);
	if (!func_669(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_753(iParam0, 1024))
	{
		return;
	}
	func_670(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_314(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_668(iParam0, &iVar0, &iVar1);
	if (!func_669(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_753(iParam0, 1024))
	{
		return;
	}
	func_670(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_315()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_664())
	{
		return func_316();
	}
	iVar4 = (func_664() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_664())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_754(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_665(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_316()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_664());
	return func_665(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_317(int iParam0)
{
	switch (*iParam0)
	{
		case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX");
			break;
		case GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case GET_HASH_KEY("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

bool func_318(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_239(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_656(iParam0, 0, 1) };
	Var5 = { func_692(iParam0, Var0, Var0.f_4, 0) };
	return func_755(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_319(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_268() != -1)
	{
		return;
	}
	switch (func_265(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_756(81053684, 0) <= 0)
			{
				func_742(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_742(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_757(iParam0);
			if (func_758(iVar0))
			{
				func_759(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_742(30, iParam0, 0, 0, 0);
			}
			if (func_760() == -2125499975 || func_760() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_742(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_760() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_742(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_761(-525676072, 0))
			{
				if (func_762(-525676072, &iVar1))
				{
					func_742(33, iVar1, 0, 0, 0);
				}
			}
			func_742(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_763(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_297(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_264(24);
		if (func_298(&iVar2, 0))
		{
			func_271(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_320(int iParam0)
{
	if (func_261(iParam0, 943695443))
	{
		func_764(0, iParam0);
	}
	else if (func_261(iParam0, -2096528786))
	{
		func_764(1, iParam0);
	}
	else if (func_261(iParam0, -1094167013))
	{
		func_764(2, iParam0);
	}
	else if (func_261(iParam0, 1936654645))
	{
		func_764(3, iParam0);
	}
	else if (func_261(iParam0, 1306489306))
	{
		func_764(4, iParam0);
	}
	else if (func_261(iParam0, 435762317))
	{
		func_764(5, iParam0);
	}
	else if (func_261(iParam0, 1259363210))
	{
		func_764(6, iParam0);
	}
	else if (func_261(iParam0, 881398259))
	{
		func_764(7, iParam0);
	}
	else if (func_261(iParam0, -541549214))
	{
		func_764(8, iParam0);
	}
	else if (func_261(iParam0, 130796156))
	{
		func_764(-1, iParam0);
	}
}

int func_321(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_765(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_766(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_322(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_239(iParam0, 0))
	{
		return Var0;
	}
	if (func_261(iParam0, -305066475))
	{
		if (func_268() == -1)
		{
			if (func_261(iParam0, -537818634))
			{
				return func_767(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_767(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_261(iParam0, -537818634))
	{
		return func_767(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_261(iParam0, 2084895747))
	{
		return func_767(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_323(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_268() == -1)
			{
				if (func_281(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_250(109, 1);
				}
			}
			break;
	}
}

void func_324(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_769(func_768(0));
	func_771(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_770(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_325(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == GET_HASH_KEY("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_239(iParam0, 0))
	{
		return;
	}
	if (iParam0 == GET_HASH_KEY("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_772())
	{
		func_773(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_774(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_774(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_262(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_260(iParam0);
	iVar10 = 0;
	iVar11 = GET_HASH_KEY("INVENTORY");
	if ((iVar6 == GET_HASH_KEY("AMMO") && iParam0 != GET_HASH_KEY("AMMO_HATCHET")) && iParam0 != GET_HASH_KEY("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = GET_HASH_KEY("AMMO_TYPES");
		iVar11 = GET_HASH_KEY("AMMO_TYPES");
	}
	if (iVar6 == GET_HASH_KEY("WEAPON_MOD") || iVar6 == GET_HASH_KEY("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_775(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = GET_HASH_KEY("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = GET_HASH_KEY("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = GET_HASH_KEY("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = GET_HASH_KEY("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_776(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_312(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_261(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_312(iParam0));
	}
	func_771(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_326(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::GET_IS_ANIMAL(iParam0))
	{
		iVar0 = func_777(iParam0);
	}
	return iVar0;
}

void func_327(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12)
	{
		iVar0 = func_778(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_779(iParam0))
			{
				iVar1 = 463;
			}
			iVar2 = func_780(iParam0);
			func_313(iVar1, iVar2, 1);
		}
	}
}

void func_328(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

void func_329(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		Local_1206.f_3 = Global_35;
		Local_1206.f_7 = iParam0;
		IK::_0x66F9EB44342BB4C5(uLocal_979[0], &Local_1206);
	}
}

void func_330(char[4] cParam0)
{
}

bool func_331(char[4] cParam0)
{
	if (cParam0->f_2 == 3)
	{
		if (!func_781(cParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_332()
{
	return func_782(1);
}

void func_333(int iParam0)
{
	func_783(1, iParam0, 0);
}

bool func_334(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

struct<8> func_335(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_784(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_785() };
	}
	return Var0;
}

void func_336(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_246[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_230 };
			uParam0->f_246[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_572(uParam0, sParam1);
	func_520(uParam0, 2097152, 1);
	func_337(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_228, sParam1, true);
}

void func_337(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_338(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	switch (uParam0->f_782[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_782[iParam1 /*41*/].f_4 - uParam0->f_782[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_786(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_175(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_782[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_782[iParam1 /*41*/].f_7, true))
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
			if (uParam0->f_782[iParam1 /*41*/].f_13 < uParam0->f_782[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_782[iParam1 /*41*/].f_12 + (uParam0->f_782[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_782[iParam1 /*41*/].f_12 + uParam0->f_782[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_782[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_782[iParam1 /*41*/].f_11 + 5f))) };
			vVar0[0 /*3*/].f_2 = (vVar0[0 /*3*/].f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!func_175(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_339(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_340(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_341(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

bool func_342(var uParam0, int iParam1)
{
	return func_787(uParam0->f_27, iParam1);
}

int func_343(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;

	func_512(uParam4, &cParam0);
	if (func_511(uParam4, 2) && !func_511(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_788(uParam4) != 1)
	{
		func_789(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_788(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false))
				{
					func_790(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					func_791(uParam4, 4);
					return 0;
				}
				else if (func_792(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				func_791(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && func_511(uParam4, 134217728))
				{
				}
				else
				{
					func_213(uParam4);
				}
				func_70(&(uParam4->f_1));
				func_791(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_524(uParam4);
				if (!func_49(&(uParam4->f_1)))
				{
					func_50(&(uParam4->f_1), 0);
				}
				else if (func_793(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_791(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_177(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						func_791(uParam4, 4);
					}
					else if (!func_175(func_513(uParam4)) && !func_162(Global_35, func_513(uParam4), 100f, 1, 1))
					{
						func_794(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_513(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_793(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_791(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_795(1, 0);
					func_790(uParam4, &cParam0);
					func_791(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_793(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				func_791(uParam4, 4);
			}
			break;
		case 3:
			func_796(uParam4);
			if (func_792(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || func_511(uParam4, 512)))
			{
				if (!func_511(uParam4, 1024) && func_797(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_511(uParam4, 512))
				{
					func_70(&(uParam4->f_1));
					func_337(uParam4, 512);
					func_791(uParam4, 4);
				}
				else if (func_511(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_789(uParam4);
			}
			if (func_511(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_798(uParam4) - func_568(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_799(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_568(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_800(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				func_801(uParam4);
				func_802(uParam4);
				return 1;
			}
			else
			{
				if (func_511(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_228);
						}
						func_70(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_337(uParam4, 512);
						func_520(uParam4, 67108864, 1);
						func_791(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_511(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && func_568(uParam4) <= 5000) && func_568(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_511(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_803(&(uParam4->f_285), 0);
					func_337(uParam4, 536870912);
				}
				if (func_568(uParam4) >= 5000 && func_568(uParam4) <= (func_798(uParam4) - 5000))
				{
					func_804();
				}
			}
			break;
		case 6:
			if (func_800(uParam4))
			{
				func_801(uParam4);
				func_802(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_511(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						func_337(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_228))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_792(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_791(uParam4, 3);
					}
					else if (func_793(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_791(uParam4, 3);
					}
				}
				if (func_788(uParam4) == 3)
				{
					if (func_511(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_791(uParam4, 4);
			break;
	}
	return 0;
}

void func_344(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_511(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_805(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_511(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_520(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_520(uParam0, 16, 1);
}

void func_345(char[4] cParam0)
{
	struct<4> Var0;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
		{
			POPULATION::_0xA1CFB35069D23C23(cParam0->f_32.f_4);
			POPULATION::_0x74C2B3DC0B294102(cParam0->f_32.f_4);
			if (PED::_0x91A5F9CBEBB9D936(cParam0->f_2213[1]))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(cParam0->f_2213[1], false);
			}
			if (func_528(cParam0->f_32.f_4, &Var0))
			{
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 1, 1);
			}
		}
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 128))
	{
		if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
		{
			VOLUME::_DELETE_VOLUME(cParam0->f_32.f_4);
		}
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

void func_346(int* iParam0)
{
	struct<247> Var0;

	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

void func_347(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_348()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[iVar0 /*19*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[iVar0 /*19*/], false))
			{
				if (func_806(iVar0))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_70[iVar0 /*19*/]);
				}
			}
		}
		iVar0++;
	}
}

void func_349(char[4] cParam0)
{
	func_510(cParam0);
	func_509(cParam0);
	func_388(cParam0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_LOOTING"), 0, 0, -1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_ASSAULT"), 0, 0, -1);
	func_586(0);
	switch (iLocal_14)
	{
		case 0:
			func_807(cParam0);
			break;
		case 1:
			func_808();
			if (iLocal_1256 == 1)
			{
				func_94("OBJ_CONVINCE_EMERALD", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_489(8);
				iLocal_1256 = 0;
			}
			if (!func_166(33554432))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[0 /*19*/]))
				{
					if (((ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[0 /*19*/], false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_70[0 /*19*/]) >= 0.86f) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[0 /*19*/], false)) || func_806(Local_70[0 /*19*/]))
					{
						func_809();
						func_65(33554432);
					}
				}
				else
				{
					func_809();
					func_65(33554432);
				}
			}
			if (func_63(uLocal_979[1], 2) && !TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
			{
				if (!func_332())
				{
					if (!func_487(8))
					{
						if (func_810("OBJ_CONVINCE_EMERALD"))
						{
							func_489(8);
						}
						else if (func_390(Global_35, uLocal_979[1], 1, 1) > 10f)
						{
							func_94("OBJ_CONVINCE_EMERALD", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_489(8);
						}
					}
				}
				if (!func_169(uLocal_979[1], iLocal_989, 0, 1))
				{
					if (PED::_0xF3C873ED0C595109(uLocal_979[1]) != 4096)
					{
						PED::_0x789DABD18E9024DB(uLocal_979[1], 4096, 1);
					}
				}
				else if (PED::_0xF3C873ED0C595109(uLocal_979[1]) == 4096)
				{
					PED::_0xEAE3B5B019C8D23F(uLocal_979[1], 4096);
				}
				if (func_166(32768))
				{
					iLocal_14 = 2;
				}
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("LSER_STOP");
				if (!MISC::ARE_STRINGS_EQUAL(func_811(), "OBJ_LOOT"))
				{
					func_812(cParam0, "OBJ_LOOT", 0f, 0f, 0f);
				}
				if (func_813(2))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
					{
						ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_979[1], 2, false);
						ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_979[1], 0, false);
						ENTITY::_SET_ENTITY_CARRYING_FLAG(uLocal_979[1], 7, false);
						func_814(uLocal_979[1]);
						if (MAP::_DOES_ENTITY_HAVE_BLIP(uLocal_979[1]))
						{
							func_815(uLocal_979[1]);
						}
					}
					func_233(&iLocal_978, uLocal_979[1], 203020899, "PICKUP_DEBT");
					iLocal_14 = 2;
				}
			}
			break;
		case 2:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				func_816(cParam0);
				if (!func_166(16))
				{
					if (func_166(32768))
					{
						func_67(2);
					}
					else
					{
						func_67(3);
					}
				}
				else
				{
					func_67(5);
				}
			}
			break;
		case 3:
			break;
	}
}

bool func_350(char[4] cParam0)
{
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_LOOTING"), 0, 0, -1);
	func_510(cParam0);
	func_509(cParam0);
	func_388(cParam0);
	switch (iLocal_14)
	{
		case 0:
			func_817();
			break;
		case 1:
			func_818(cParam0);
			if (func_63(uLocal_979[1], 0))
			{
				if (iLocal_19 == 4)
				{
					iLocal_14 = 2;
				}
			}
			else
			{
				func_67(5);
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_351(char[4] cParam0)
{
	func_510(cParam0);
	func_509(cParam0);
	func_388(cParam0);
	switch (iLocal_14)
	{
		case 0:
			func_819(cParam0);
			break;
		case 1:
			if (!func_503("LS_EMR_SUR3"))
			{
				iLocal_14 = 2;
			}
			break;
		case 2:
			if (!AUDIO::_0xFE5C6177064BD390(1))
			{
				iLocal_14 = 0;
				UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
				func_333(0);
				func_405(&iLocal_978);
				return true;
			}
			break;
		case 3:
			break;
	}
	return false;
}

bool func_352(char[4] cParam0)
{
	var uVar0;

	func_510(cParam0);
	func_388(cParam0);
	switch (iLocal_14)
	{
		case 0:
			func_820(cParam0);
			break;
		case 1:
			func_818(cParam0);
			if ((ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && MISC::_0x7A76104CC2CC69E8(uLocal_979[1], 1, 1)) && PED::GET_PED_CONFIG_FLAG(uLocal_979[1], 11, true))
			{
				if (func_391() || func_392(&(cParam0->f_2106), "LS_EMR_KO_ATT", 0))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_979[1], 11, false);
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]) && PED::GET_MELEE_TARGET_FOR_PED(Global_35) == uLocal_979[1]) && !func_391())
			{
				if (func_392(&(cParam0->f_2106), "LS_EMR_KO_ATT", 0))
				{
				}
			}
			if (((func_390(Global_35, uLocal_979[0], 1, 1) <= 3.5f && !bLocal_1257) && !func_391()) && !ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_979[1]))
			{
				if (func_392(&(cParam0->f_2106), "LS_EMR_POCKETS", 0))
				{
					bLocal_1257 = true;
				}
			}
			else if (ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_979[1]))
			{
				bLocal_1257 = true;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
			{
			}
			else if (((!MAP::_DOES_ENTITY_HAVE_BLIP(uLocal_979[1]) && !func_821(uLocal_979[1])) && !ENTITY::_0x8E10DF0FFA63FB65(ENTITY::GET_ENTITY_COORDS(uLocal_979[1], false, false), 2f, 1)) && !func_294(GET_HASH_KEY("MONEY_LOANSHARK_LILLY_DEBT"), 1, 0))
			{
				func_233(&iLocal_978, uLocal_979[1], 203020899, "PICKUP_DEBT");
			}
			else if (!func_821(uLocal_979[1]))
			{
			}
			if (func_294(GET_HASH_KEY("MONEY_LOANSHARK_LILLY_DEBT"), 1, 0) && (func_821(uLocal_979[1]) || iLocal_1264 == 1))
			{
				func_409();
				if (func_813(2))
				{
					if (func_636(uLocal_979[0], Global_35, 1, 15f, 0))
					{
						if (func_63(uLocal_979[0], 0))
						{
							if (func_392(&(cParam0->f_2106), "LS_EMR_GRIEF", 0))
							{
								bLocal_1258 = true;
								iLocal_14 = 2;
							}
						}
						else
						{
							iLocal_14 = 2;
						}
					}
					else
					{
						iLocal_14 = 2;
					}
				}
			}
			else if ((((((((ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 0, Global_35) == 0 && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 2, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, uLocal_979[1], 1, Global_35) == 0) && !ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_979[1])) && !func_822(Global_35, 0)) && !func_822(Global_35, 2)) && !func_822(Global_35, 1)) && !PED::_0x3AEC4A410ECAF30D(uLocal_979[1])) && func_390(Global_35, uLocal_979[1], 1, 1) <= 1f)
			{
				func_72(GET_HASH_KEY("MONEY_LOANSHARK_LILLY_DEBT"), 1, 0, 0, 0, -897553835, 0, 0, 0, 0);
				func_73(uLocal_979[1], 1, 0);
				iLocal_1264 = 1;
			}
			break;
		case 2:
			if (!AUDIO::_0xD89504D9D7D5057D("LS_EMR_GRIEF") || func_166(1))
			{
				func_823(75, 1);
				func_824();
				return true;
			}
			break;
		case 3:
			break;
	}
	return false;
}

bool func_353(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_354(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_355(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

int func_356()
{
	return Global_1899515;
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_825(*iParam0);
	iVar1 = func_826(*iParam0);
	iVar2 = func_827(*iParam0);
	iVar3 = func_433(*iParam0);
	iVar4 = func_828(*iParam0);
	iVar5 = func_829(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_830(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_830(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_831(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_358(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_105(iParam0))
	{
		return;
	}
	if (func_541(iParam0) == 4)
	{
		func_832(iParam0, func_356());
		if (!func_542(iParam0) == 5 && !func_542(iParam0) == 6)
		{
			if (bParam3)
			{
				func_380(iParam0, 6);
			}
			else
			{
				func_380(iParam0, 5);
			}
			func_833(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_547(1);
	}
	iVar0 = func_414(iParam0);
	bVar1 = func_268() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_834(0, 2);
		if (!bVar1 && bParam1)
		{
			func_835();
		}
	}
	else
	{
		func_548(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_836(iParam0);
	}
	else
	{
		Var2 = { func_767(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_550(32768))
		{
			Var4 = { func_767(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_542(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_383(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_383(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_383(iParam0) != 95 && func_383(iParam0) != 82) && !func_385(Global_1347702[func_383(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_383(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_383(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_838(func_383(iParam0), iVar6, func_837());
	}
	else if (iVar0 == 8)
	{
		func_839(func_383(iParam0), iVar6, func_837(), func_563());
	}
	if (!func_542(iParam0) == 5 && !func_542(iParam0) == 6)
	{
		iVar9 = func_840(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_841(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_842(func_383(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_843((iVar10 - 20), 0, iVar10);
					iVar11 = func_843((iVar11 - 10), 0, iVar11);
				}
				func_844(1);
				func_845(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_845(45, 0, 1);
				break;
			case 8:
				iVar10 = func_846(func_383(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_843((iVar10 - 20), 0, iVar10);
					iVar11 = func_843((iVar11 - 10), 0, iVar11);
				}
				func_845(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_847(func_383(iParam0)))
				{
					func_848(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_845(120, 0, 1);
				break;
			case 2:
				func_845(120, 0, 1);
				break;
			case 6:
				func_845(func_849(func_415(iParam0)), 0, 1);
				break;
			case 5:
				func_845(120, 0, 1);
				break;
		}
	}
	func_561(iParam0, 1);
	func_832(iParam0, func_356());
	func_833(iParam0);
	if ((!func_542(iParam0) == 0 && bParam1) && func_268() == -1)
	{
		iVar12 = func_556(iParam0);
		if (iVar12 != -1)
		{
			func_90(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_557();
			if (iVar12 != -1)
			{
				func_90(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_383(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_384(func_383(iParam0)) && func_385(Global_1347702[func_383(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_383(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_659();
				}
				break;
			case 8:
				if (func_383(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_659();
				}
				break;
		}
	}
	if (!func_542(iParam0) == 5 && !func_542(iParam0) == 6)
	{
		if (bParam3)
		{
			func_380(iParam0, 6);
		}
		else
		{
			func_380(iParam0, 5);
		}
		func_833(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_383(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_850();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_72(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_72(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_851(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_72(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_852();
						func_853(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_854();
						func_855();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_856(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_72(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_250(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_250(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_857(304805134, 1, 1);
						if (!func_281(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_358(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						func_858();
						break;
					case 26:
						func_859();
						break;
					case 17:
						func_860(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_861())
						{
							func_862(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_863(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_356();
							func_357(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_864(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_861())
						{
							func_862(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_861())
						{
							func_862(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_865();
						break;
					case 37:
						func_866();
						if (func_701())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(GET_HASH_KEY("CABR01"), iVar14);
						}
						break;
					case 38:
						func_867();
						break;
					case 43:
						func_868();
						break;
					case 44:
						if (!func_281(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_358(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!func_281(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_358(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_869();
						break;
					case 59:
						func_870();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_871();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_872();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_250(451, 0);
						}
						if (!func_873(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_873(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_356();
								func_357(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_864(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_874(4))
						{
							if (!func_294(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_356();
								func_357(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_864(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_72(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_72(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_875(89200);
						func_875(2300);
						func_875(2300);
						break;
					case 68:
						func_876();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						func_877();
						func_875(-139100);
						break;
					case 69:
						if (func_281(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_875(-6000);
						}
						break;
					case 70:
						func_875(23400);
						func_875(1900);
						func_875(-15000);
						break;
					case 71:
						func_875(-5500);
						break;
				}
				break;
			case 8:
				switch (func_383(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						func_878();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_879();
						break;
					case 66:
						func_880();
						func_881();
						break;
					case 67:
						if (!func_882(6))
						{
							func_883(6);
						}
						if (!func_882(3))
						{
							func_883(3);
						}
						if (func_861())
						{
							func_862(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (func_281(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_884(0);
							func_875(40500);
						}
						else
						{
							func_884(0);
							func_875(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_383(iParam0))
				{
					case 0:
						switch (func_415(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_885(iParam0);
		func_886();
		switch (iVar0)
		{
			case 1:
				switch (func_383(iParam0))
				{
					case 4:
						func_887(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_887(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_887(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_887(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_887(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_887(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_887(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_888(iParam0);
						func_887(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_887(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_887(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_294(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_72(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_887(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_887(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_887(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_888(iParam0) == 0)
						{
							func_887(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_887(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_385(Global_1347702[func_383(iParam0) /*49*/].f_12, 536870912))
				{
					func_889(11, 1);
				}
				switch (func_383(iParam0))
				{
					case 109:
						func_887(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_889(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_887(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_887(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_887(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_887(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_890(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_887(iParam0, func_888(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_890(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_887(iParam0, func_891(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_890(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_887(iParam0, func_891(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_890(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_887(iParam0, func_891(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_890(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_887(iParam0, func_891(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_542(iParam0) == 0)
			{
				if (func_544(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_892(func_414(iParam0), func_544(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_383(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_894(func_893(Global_1879514.f_1));
						if (iVar0 == 8 && func_383(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_384(func_383(iParam0)) && func_385(Global_1347702[func_383(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_667(bParam2, iVar20);
		}
	}
	func_560(1);
	if ((bVar13 || func_659()) && (func_414(iParam0) == 1 || func_414(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_359(int iParam0)
{
	if (!func_353(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_115(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_541(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_401(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_360(int iParam0)
{
	iParam0 = func_895(iParam0);
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

bool func_361(int iParam0)
{
	int iVar0;

	iParam0 = func_895(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_360(iParam0))
	{
		return false;
	}
	iVar0 = func_896(iParam0);
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

void func_362(int iParam0)
{
	int iVar0;

	iParam0 = func_895(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_360(iParam0))
	{
		return;
	}
	iVar0 = func_896(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_363(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_364()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_366(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

var func_367(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_368(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_897(sParam1));
}

void func_369(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_370(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_371(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_373(1);
	}
}

void func_372(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_373(0);
	}
}

void func_373(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_374(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_375(bool bParam0)
{
	if (func_898())
	{
		Global_1357509 = 1;
	}
	if (func_899(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

bool func_376(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_377()
{
	return Global_1572864.f_12;
}

void func_378(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_900(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_901();
	Var1.f_3.f_3 = iVar0;
	if ((!func_902(Global_1347343.f_2) && !func_376(Global_1347343.f_11, 64)) || func_550(32768))
	{
		Var1.f_7 = func_903();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_376(Global_1347343.f_11, 1024) && !func_550(32768))
	{
		Var1.f_11 = func_904();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_376(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_905();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_906(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_907(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_98(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_98(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_379(int iParam0)
{
	int iVar0;

	if (!func_105(iParam0))
	{
		return;
	}
	if (iParam0 != func_104(0))
	{
		return;
	}
	if (func_544(iParam0) == 0)
	{
	}
	iVar0 = func_414(iParam0);
	if (func_542(iParam0) == 3)
	{
		if (func_544(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0)))
		{
			if (func_414(iParam0) != 1 && func_414(iParam0) != 8)
			{
				func_892(func_414(iParam0), func_544(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_833(iParam0);
	func_547(1);
	func_548(0);
	func_380(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_844(1);
			func_845(15, 0, 1);
			break;
		case 4:
			func_845(10, 0, 1);
			break;
		case 8:
			func_845(10, 0, 1);
			break;
		case 9:
			func_845(10, 0, 1);
			break;
		case 2:
			func_845(10, 0, 1);
			break;
		case 6:
			func_845(10, 0, 1);
			break;
		case 5:
			func_845(10, 0, 1);
			break;
	}
	func_560(1);
}

void func_380(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	func_908(iParam0, iParam1);
}

int func_381(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_382()
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

int func_383(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_910(func_909(iParam0));
}

bool func_384(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_385(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_386()
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[1 /*19*/], false))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_70[1 /*19*/], sLocal_913[7]))
		{
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_70[1 /*19*/], sLocal_913[7]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_70[1 /*19*/], sLocal_913[7]))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_70[1 /*19*/], sLocal_913[7], true);
			}
			else if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_70[1 /*19*/], sLocal_913[7]) && ANIMSCENE::_0x0DF57F86FE71DBE5(Local_70[1 /*19*/], sLocal_913[7]))
			{
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_387(bool bParam0)
{
	PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(uLocal_979[0], Global_36, 1);
	if (!func_232(uLocal_979[0], 518218985))
	{
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(uLocal_979[0], true, false);
		}
		TASK::TASK_SMART_FLEE_PED(uLocal_979[0], Global_35, 200f, -1, 0, 3f, 0);
	}
	func_230(3);
}

void func_388(char[4] cParam0)
{
	int iVar0;

	switch (iLocal_875)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(bLocal_877))
			{
				bLocal_877 = func_911(iLocal_976, vLocal_878, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(bLocal_877, 146, true);
				PED::SET_PED_CONFIG_FLAG(bLocal_877, 178, true);
				PED::SET_PED_CONFIG_FLAG(bLocal_877, 168, true);
				AUDIO::SET_AMBIENT_VOICE_NAME(bLocal_877, "0401_U_M_M_RhdGunsmith_01");
				STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_HUMAN_SMOKE"), 15, 0, 0);
				func_145(&(cParam0->f_2106), bLocal_877, "LSER_FightWatcher", 0);
				iLocal_875 = 1;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(bLocal_877))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(bLocal_877, vLocal_881, 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!func_232(bLocal_877, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bLocal_877, vLocal_881, 1.5f, 20000, 0.25f, 0, 58.6493f);
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1500, -1f, -1f, -1f);
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, GET_HASH_KEY("WORLD_HUMAN_SMOKE"), 0, true, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(bLocal_877, iVar0);
					IK::_0x66F9EB44342BB4C5(bLocal_877, &Local_887);
					iLocal_875 = 2;
				}
			}
			break;
		case 2:
			if (cParam0->f_1 == 8)
			{
				if (func_390(Global_35, bLocal_877, 1, 1) < 5f || func_390(uLocal_979[1], bLocal_877, 1, 1) < 5f)
				{
					PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bLocal_877, Global_36, 3);
					iLocal_875 = iLocal_876;
				}
			}
			else if (cParam0->f_1 == 9 || cParam0->f_1 == 11)
			{
				iLocal_875 = 5;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(bLocal_877))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(bLocal_877, vLocal_884, 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!func_232(bLocal_877, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bLocal_877, vLocal_884, 1.5f, 20000, 0.25f, 0, func_912(bLocal_877, Global_35, 1));
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1500, -1f, -1f, -1f);
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, GET_HASH_KEY("WORLD_HUMAN_SMOKE"), 0, true, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(bLocal_877, iVar0);
					IK::_0x66F9EB44342BB4C5(bLocal_877, &Local_887);
					iLocal_876 = 4;
					iLocal_875 = 2;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(bLocal_877))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(bLocal_877, vLocal_881, 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!func_232(bLocal_877, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(bLocal_877, vLocal_881, 1.5f, 20000, 0.25f, 0, func_912(bLocal_877, Global_35, 1));
					}
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1500, -1f, -1f, -1f);
					TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, GET_HASH_KEY("WORLD_HUMAN_SMOKE"), 0, true, 0, -1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(bLocal_877, iVar0);
					IK::_0x66F9EB44342BB4C5(bLocal_877, &Local_887);
					iLocal_876 = 3;
					iLocal_875 = 2;
				}
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(bLocal_877) && !AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_877))
			{
				if (!func_49(&uLocal_943))
				{
					func_70(&uLocal_943);
				}
				else if (func_52(&uLocal_943) > 2000)
				{
					if (func_913(bLocal_877, "STEAL_MULTIPLE_ITEM", -1050591818, Global_35, 1, "0401_U_M_M_RhdGunsmith_01", 2, 1))
					{
						iLocal_875 = 6;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(bLocal_877))
			{
				iLocal_875 = 7;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(bLocal_877))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_877))
				{
					if (LAW::_0xF0B67BAD53C35BD9(bLocal_877, Global_35, uLocal_979[1], Global_36, GET_HASH_KEY("CRIME_ROBBERY")) || LAW::_0x0EAF918F751F27BA(bLocal_877))
					{
						if (func_392(&(cParam0->f_2106), "LS_EMR_WANTED", 0))
						{
							func_118(&bLocal_877, 1, 1, 1);
							iLocal_875 = 7;
						}
					}
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(bLocal_877))
			{
				iLocal_875 = 7;
			}
			break;
		case 7:
			break;
	}
}

void func_389()
{
	var uVar0;

	func_914(&(Local_1330[0 /*17*/]), "INTERACT_ENCOURAGE", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_914(&(Local_1330[1 /*17*/]), "INTERACT_SCOLD", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(uLocal_979[0], &uVar0));
}

float func_390(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

bool func_391()
{
	return func_915(1);
}

bool func_392(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam1, 24);
	return func_916(uParam0, cVar0, 0, -1, bParam2, 0);
}

bool func_393(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_643(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_917(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_394()
{
	func_641(&(Local_1330[0 /*17*/]), 0, 0);
	func_641(&(Local_1330[1 /*17*/]), 0, 0);
}

void func_395(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_641(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_396(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_220(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, func_918(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

bool func_397()
{
	bool bVar0;

	bVar0 = false;
	if (func_63(uLocal_979[1], 0))
	{
		if (!func_232(uLocal_979[1], 518218985))
		{
			PED::SET_PED_KEEP_TASK(uLocal_979[1], true);
			TASK::TASK_SMART_FLEE_PED(uLocal_979[1], Global_35, 200f, -1, 0, 3f, 0);
		}
		if (!func_162(uLocal_979[1], Global_36, 60f, 1, 1))
		{
			bVar0 = true;
		}
	}
	if (func_63(uLocal_979[0], 0))
	{
		if (!func_232(uLocal_979[0], 518218985))
		{
			TASK::TASK_SMART_FLEE_PED(uLocal_979[0], Global_35, 200f, -1, 0, 3f, 0);
		}
		if (!func_162(uLocal_979[0], Global_36, 60f, 1, 1) && bVar0)
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_398()
{
	func_74();
	if (func_63(uLocal_979[1], 0))
	{
		PED::SET_PED_KEEP_TASK(uLocal_979[1], true);
	}
}

int func_399(bool bParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 1;
	}
	if (!PED::_0x5102307CE88798EB(bParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
		return 0;
	}
	else if (!PED::IS_TRACKED_PED_VISIBLE(bParam0))
	{
		if (fParam1 == -1f)
		{
			fParam1 = func_516(bParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_400(var uParam0)
{
	if (!func_63(uLocal_979[0], 0))
	{
		return true;
	}
	else
	{
		func_510(uParam0);
		func_509(uParam0);
		if (func_399(uLocal_979[1], -1f, 125f) && func_399(uLocal_979[0], -1f, 125f))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_979[1], true, false);
				ENTITY::SET_ENTITY_COORDS(uLocal_979[1], 1454.951f, 319.6451f, 88.4759f, true, false, true, true);
			}
			return true;
		}
	}
	return false;
}

void func_401(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_105(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_193(iParam0) && !func_194(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_544(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_193(iParam0))
	{
		iParam2 = -1;
	}
	if (func_542(iParam0) == 3 || (func_542(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_544(iParam0))))
	{
		func_892(func_414(iParam0), func_544(iParam0), iParam2);
		if ((!func_105(Global_1572864.f_8) && !func_103(0, 1, 0)) && !func_183(Global_1935630, 32768))
		{
			iVar0 = func_556(iParam0);
			if (iVar0 != -1)
			{
				func_90(0);
			}
			else if (func_414(iParam0) == 8)
			{
				iVar0 = func_557();
				if (iVar0 != -1)
				{
					func_90(0);
				}
			}
		}
	}
	func_380(iParam0, 0);
	if (func_104(0) == iParam0)
	{
		func_547(1);
		func_548(0);
		func_560(1);
	}
	func_561(iParam0, 1);
	func_833(iParam0);
}

void func_402()
{
	if (func_63(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
	}
}

bool func_403(int iParam0)
{
	return func_227(iLocal_951, iParam0);
}

void func_404(int* iParam0, bool bParam1)
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
	func_919(iParam0, &bParam1, 0);
	func_410(&bParam1);
	func_501(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_920(iParam0, 0);
	}
	func_921(iParam0);
	func_922(iParam0, bParam1);
	func_923(iParam0);
	func_924(iParam0);
}

void func_405(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_406()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_212[iVar0 /*91*/].f_84) && func_925(func_491(&(Local_212[iVar0 /*91*/])), 0))
		{
			func_506(&(Local_212[iVar0 /*91*/]));
			func_926(func_491(&(Local_212[iVar0 /*91*/])), 0, 1, 0, 0);
		}
		func_499(&(Local_212[iVar0 /*91*/]));
		iVar0++;
	}
}

bool func_407(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_408(int iParam0)
{
	if (!func_407(iParam0))
	{
		return 0;
	}
	if (!func_928(func_927(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_929(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_929(iParam0));
	return 1;
}

void func_409()
{
	func_405(&iLocal_978);
	func_930("OBJ_LOOT");
	func_89();
}

void func_410(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_411(var uParam0)
{
	*uParam0 = 0;
}

void func_412(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_931(vVar0, 0);
}

void func_413(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_932(vVar0, vVar3, 0f) };
	vVar9 = { func_933(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

int func_414(int iParam0)
{
	if (!func_105(iParam0))
	{
		return 0;
	}
	return func_934(func_909(iParam0));
}

int func_415(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_935(func_909(iParam0));
}

void func_416(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 4);
	}
	else
	{
		func_125(uParam0, 4);
	}
}

void func_417(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 64);
	}
	else
	{
		func_125(uParam0, 64);
	}
}

void func_418(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 1048576);
	}
	else
	{
		func_125(uParam0, 1048576);
	}
}

void func_419(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_420()
{
	StringCopy(&(Local_992.f_34), "LS_EMR_COOP_GIV", 64);
	Local_992.f_179 = 1;
	Local_992.f_74 = GET_HASH_KEY("MONEY_LOANSHARK_LILLY_DEBT");
	Local_992.f_78 = 0;
	Local_128.f_3 = Global_35;
	Local_128.f_4 = 21030;
	Local_128.f_8 = 4;
	Local_128.f_13 = 2;
	Local_128.f_19 = 4;
	Local_128.f_21 = 4;
	Local_850.f_3 = Global_35;
	Local_850.f_7 = 7500;
	Local_850.f_4 = 21030;
	Local_850.f_8 = 4;
	Local_850.f_13 = 2;
	Local_850.f_19 = 4;
	Local_850.f_21 = 4;
	Local_887.f_3 = Global_35;
	Local_887.f_7 = -1;
	Local_887.f_4 = 21030;
	Local_887.f_8 = 4;
	Local_887.f_13 = 2;
	Local_887.f_19 = 4;
	Local_887.f_21 = 4;
}

void func_421()
{
	vLocal_964[0 /*3*/] = { 1424.431f, 382.2698f, 89.48783f };
	fLocal_971[0] = 263.327f;
	vLocal_964[1 /*3*/] = { 1424.889f, 383.4419f, 89.48783f };
	fLocal_971[1] = 263.327f;
}

void func_422()
{
	Local_70[0 /*19*/] = { func_936("script@proc@loansharking@emerald@leadout@mcs1@leadout", 0) };
	Local_70[1 /*19*/] = { func_936("script@proc@loansharking@emerald@leadin@mcs1@intro", "PBL_Intro") };
	Local_70[2 /*19*/] = { func_936("script@proc@loansharking@emerald@LillySitBench", "Enter") };
	sLocal_913[0] = "Enter";
	sLocal_913[1] = "IDLE";
	sLocal_913[2] = "IKnew";
	sLocal_913[3] = "JustLeave";
	sLocal_913[4] = "WannaLeave";
	sLocal_913[5] = "WhatMore";
	sLocal_913[6] = "WillUPlease";
	sLocal_913[7] = "pl_exit";
	sLocal_913[8] = "pl_leadin_front";
}

void func_423()
{
	func_937();
}

void func_424(var uParam0)
{
	func_938(&(uParam0->f_2041), iLocal_974);
	func_938(&(uParam0->f_2041), iLocal_975);
	func_938(&(uParam0->f_2041), iLocal_976);
	func_939(&(uParam0->f_2052), cLocal_912);
}

int func_425(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_260(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_261(iParam0, 1399091007))
	{
		func_737(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_426(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_940(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_942(&Var0, func_941(0));
	}
	if (!func_943(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_748(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_693(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_749(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_239(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_656(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_944(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_692(iParam0, Var0, Var0.f_4, bParam4) };
	return func_693(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_428(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_261(iParam0, 606799272))
		{
			func_945(iParam0, iParam1);
		}
		if (func_261(iParam0, -1112814642) && func_261(iParam0, -1697809989))
		{
			func_292(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_429(var uParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = bParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_430(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_431(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_432(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_433(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_434(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_435(int iParam0)
{
	int iVar0;

	if (!func_946(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_436(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_947(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_437(var uParam0, bool bParam1, int iParam2)
{
	func_948(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = func_949(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_126(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_950(1))
						{
							func_126(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_950(1) || *uParam0 & 8192 != 0))
				{
					func_125(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_951(uParam0))
			{
				uParam0->f_15 = func_182();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_182() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_952(uParam0);
}

bool func_438(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case GET_HASH_KEY("EVENT_ACQUAINTANCE_PED_DEAD"):
		case GET_HASH_KEY("EVENT_PED_SEEN_DEAD_PED"):
		case GET_HASH_KEY("EVENT_SHOCKING_DEAD_BODY"):
		case GET_HASH_KEY("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_953(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_954(bParam0, iVar2) <= func_955(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_439(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_956(iParam2, 1, 1, 1, 0))
	{
		func_126(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_957(uParam1, 1);
	func_159();
}

bool func_440(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_958(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_959(uParam1);
			if (func_960(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_961(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_957(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_957(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_441(bool bParam0, bool bParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (bParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_962(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_959(uParam2);
		if (func_960(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_961(uParam2)
				{
					func_957(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_442(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_953(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_961(uParam1)
		{
			fVar3 = func_959(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_443(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_182();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_444(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_963(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == GET_HASH_KEY("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == GET_HASH_KEY("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_452(uParam2, bParam1))
			{
				func_957(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_445(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_964(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_452(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_957(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_446(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_965(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_957(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_957(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_966(bParam1, vVar0, vVar4))
					{
						func_957(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_957(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_966(bParam1, vVar0, vVar7))
					{
						func_957(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_447(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_953(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_967(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_968(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = bParam0;
						return true;
					}
				}
			}
			if (func_969(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_970(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_971(uParam1, bParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_448(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*bParam0, 0, 0);
	switch (iVar0)
	{
		case GET_HASH_KEY("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case GET_HASH_KEY("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return true;
	}
	return false;
}

bool func_449(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_182();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_450(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_972(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_973(iVar0, bParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_451(var uParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_452(var uParam0, bool bParam1)
{
	if (func_974(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return true;
	}
	return false;
}

bool func_453(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_390(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_454()
{
}

bool func_455(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_975(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_182();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_516(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_182();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_456()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_182() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_457(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return false;
	}
	fVar0 = func_955(uParam0);
	if (uParam0->f_12 > func_976(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_977(bParam1);
	iVar1 = func_978(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_458(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_979(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_459(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_980(bParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case GET_HASH_KEY("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case GET_HASH_KEY("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case GET_HASH_KEY("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case GET_HASH_KEY("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			return true;
		case GET_HASH_KEY("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_981(uParam1, bParam0))
					{
						if (func_516(bVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_460(bool bParam0, var uParam1)
{
	if (!func_982(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_461(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_182();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_462(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_463(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_182();
	}
	else if (func_182() - uParam1->f_4) > func_983(uParam1)
	{
		return func_984(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_464(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

void func_465(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

void func_466(int iParam0, bool bParam1, float fParam2)
{
	func_985(iParam0, bParam1, fParam2);
}

void func_467(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	func_986(*uParam0, bParam1);
	if (bParam1)
	{
		func_814(*uParam0);
	}
}

void func_468()
{
	func_234(6);
}

bool func_469(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_470(int iParam0, bool bParam1)
{
	if (!func_469(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_987(iParam0), func_988(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_987(iParam0), func_988(iParam0), 2, "");
		func_989(iParam0, 16);
	}
	else
	{
		if (func_469(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_987(iParam0), func_988(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_987(iParam0), func_988(iParam0), 0, "");
		}
		func_990(iParam0, 16);
	}
}

void func_471(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_469(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_987(iParam0), func_988(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_469(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_987(iParam0), func_988(iParam0), 1, "");
		}
		func_989(iParam0, 8);
	}
	else
	{
		if (func_469(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_987(iParam0), func_988(iParam0), 0, "");
		}
		func_990(iParam0, 8);
	}
}

float func_472(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_473(int iParam0)
{
	func_992(iParam0, func_991(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

void func_474(int iParam0, int iParam1)
{
	if (func_353(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_475(int iParam0, bool bParam1)
{
	if (func_268() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_550(32768))
	{
		return;
	}
	if (!func_550(32768))
	{
		func_993(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (func_550(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_356();
	}
}

int func_476(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, bParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_477(int iParam0, int iParam1)
{
	var uVar0;

	return func_994(&uVar0, iParam0, iParam1);
}

bool func_478(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_479(bool bParam0, bool bParam1)
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
			if (func_478(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
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
		func_995(1);
	}
}

void func_480(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_996(vParam1, 1);
}

void func_481(char[4] cParam0, char* sParam1)
{
	StringCopy(&(cParam0->f_2208), sParam1, 16);
}

bool func_482()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
	{
		if (func_516(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_979[1], false, false), 1) > 65f)
		{
			func_73(uLocal_979[1], 1, 0);
			return true;
		}
	}
	return false;
}

bool func_483()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(uLocal_979[1]))
		{
			return true;
		}
	}
	return false;
}

void func_484()
{
	if (func_63(uLocal_979[0], 0))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_70[1 /*19*/]);
		func_230(0);
	}
}

void func_485()
{
	if (func_63(uLocal_979[1], 0))
	{
		func_234(0);
	}
}

void func_486(int iParam0)
{
	func_231(&iLocal_951, iParam0);
}

bool func_487(int iParam0)
{
	return func_227(iLocal_950, iParam0);
}

bool func_488(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_268() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_489(int iParam0)
{
	func_231(&iLocal_950, iParam0);
}

bool func_490(int iParam0)
{
	if (!func_431(iParam0))
	{
		return false;
	}
	return func_432(iParam0, 8);
}

int func_491(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return 589;
		case 1:
			return 598;
		case 2:
			return 595;
		case 3:
			return 596;
		case 4:
			return 591;
		case 5:
			return 593;
		case 6:
			return 590;
	}
	return -1;
}

bool func_492(int iParam0, bool bParam1)
{
	if (func_268() != -1)
	{
		return false;
	}
	if (!func_407(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_929(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_997(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_929(iParam0));
}

bool func_493(int iParam0)
{
	if (func_268() != -1)
	{
		return false;
	}
	if (!func_384(iParam0))
	{
		return false;
	}
	return func_193(Global_1347702[iParam0 /*49*/].f_15);
}

int func_494(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_998(iParam0, 1))
	{
		return 0;
	}
	if (func_928(func_927(iParam0)))
	{
		iVar1 = func_929(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_999(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_1000(iParam0, 1);
	func_1001(iParam0);
	if (bParam3)
	{
		func_1000(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_495(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			uParam0->f_86 = "IN_EMR_FATHER";
			break;
		case 1:
			if (func_1002(94))
			{
				uParam0->f_86 = "IN_EMR_SON_KNW1";
			}
			else
			{
				uParam0->f_86 = "IN_EMR_SON";
			}
			break;
		case 2:
			uParam0->f_86 = "IN_EMR_FHAND2";
			break;
		case 3:
			uParam0->f_86 = "IN_EMR_FHAND3";
			break;
		case 4:
			uParam0->f_86 = "IN_EMR_GRDNR";
			break;
		case 5:
			uParam0->f_86 = "IN_EMR_HNDYMN";
			break;
		case 6:
			uParam0->f_86 = "IN_EMR_TRNWRKR";
			break;
	}
}

void func_496(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			uParam0->f_87 = "IN_EMR_FATHER";
			break;
		case 1:
			if (func_1002(94))
			{
				uParam0->f_87 = "IN_EMR_SON_KNW2";
			}
			else
			{
				uParam0->f_87 = "IN_EMR_SON_F";
			}
			break;
		case 2:
			uParam0->f_87 = "IN_EMR_FHAND2_F";
			break;
		case 3:
			uParam0->f_87 = "IN_EMR_FHAND3_F";
			break;
		case 4:
			uParam0->f_87 = "IN_EMR_GRDNR";
			break;
		case 5:
			uParam0->f_87 = "IN_EMR_HNDYMN_F";
			break;
		case 6:
			uParam0->f_87 = "IN_EMR_TRNWRKRF";
			break;
	}
}

char* func_497(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return "EMR_Father";
		case 1:
			return "EMR_Son1";
		case 2:
			return "EMR_Farmhand2";
		case 3:
			return "EMR_Farmhand3";
		case 4:
			return "EMR_Gardener";
		case 5:
			return "EMR_Handyman";
		case 6:
			return "EMR_TrainStationWorker";
	}
	return "!!Invalid investigation ped";
}

float func_498(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0f;
	}
	if (func_181(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_649() - uParam0->f_1);
}

void func_499(var uParam0)
{
	func_224(&(uParam0->f_63), 1, 1, 1, 0);
}

void func_500(var uParam0)
{
	func_914(&(uParam0->f_63[0 /*17*/]), "OBJ_INVESTI", " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_1003(&(uParam0->f_2), 17);
}

void func_501(int* iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_71(&(iParam0->f_18));
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
		func_71(&(iParam0->f_22));
		func_71(&(iParam0->f_37));
		func_71(&(iParam0->f_40));
		func_71(&(iParam0->f_43));
		func_71(&(iParam0->f_49));
		func_71(&(iParam0->f_52));
		func_923(iParam0);
		func_924(iParam0);
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_56));
		}
	}
}

void func_502(var uParam0)
{
	func_641(&(uParam0->f_63[0 /*17*/]), 0, 0);
}

bool func_503(char* sParam0)
{
	return func_1004(sParam0);
}

int func_504(char* sParam0)
{
	return func_1005(sParam0);
}

int func_505(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
			return 1;
	}
	return 2;
}

void func_506(var uParam0)
{
	if (uParam0->f_85 == 0)
	{
		func_638(uParam0->f_84);
	}
	else if (uParam0->f_85 >= 3)
	{
		func_1006(uParam0->f_84);
	}
	else if (*uParam0 == 1)
	{
		func_1006(uParam0->f_84);
	}
	else
	{
		func_1007(uParam0->f_84);
	}
}

void func_507(int iParam0, vector3 vParam1, float fParam4)
{
	func_405(&(Global_1392626[iParam0 /*32*/].f_1));
	func_405(&(Global_1392626[iParam0 /*32*/]));
	Global_1392626[iParam0 /*32*/].f_27 = { vParam1 };
	Global_1392626[iParam0 /*32*/].f_4 = fParam4;
	func_1008(iParam0, 2);
	func_992(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
}

bool func_508()
{
	return func_900(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

void func_509(char[4] cParam0)
{
	if (func_63(uLocal_979[1], 8))
	{
		func_1009();
		switch (iLocal_19)
		{
			case 0:
				func_1010();
				break;
			case 1:
				func_1011(cParam0);
				break;
			case 2:
				func_1012();
				break;
			case 3:
				func_1013();
				break;
			case 4:
				func_1014(cParam0);
				break;
			case 5:
				func_1015(cParam0);
				break;
			case 7:
				func_1016();
				break;
			case 8:
				func_1017(cParam0);
				break;
		}
	}
	else if (!TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11) && !PED::GET_PED_CONFIG_FLAG(uLocal_979[1], 11, true))
	{
		if (!func_166(128))
		{
			func_65(128);
			func_1018(16);
		}
	}
}

void func_510(char[4] cParam0)
{
	if (func_63(uLocal_979[0], 0))
	{
		switch (iLocal_18)
		{
			case 0:
				func_1019();
				break;
			case 1:
				func_1020(cParam0);
				break;
			case 2:
				func_1021();
				break;
			case 4:
				func_1022();
				break;
			case 7:
				func_1023();
				break;
			case 5:
				func_1024();
				break;
			case 8:
				func_1025(cParam0);
				func_1026();
				break;
			case 9:
				func_1027(cParam0);
				func_1026();
				break;
			case 10:
				func_1028();
				func_1026();
				break;
		}
	}
	else if (!func_166(1))
	{
		func_65(1);
	}
}

bool func_511(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_512(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_511(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {func_1029("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {func_1029("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_337(uParam0, 8192);
}

Vector3 func_513(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_514(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_1030(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_229, func_1031(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_229, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_229);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_515(var uParam0, vector3 vParam1)
{
	if (func_175(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_516(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_517(var uParam0)
{
	return uParam0->f_219;
}

void func_518()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_1032(Var0);
	}
}

void func_519(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/]));
		}
		uParam0->f_246[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_520(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

float func_521(var uParam0)
{
	return uParam0->f_218;
}

struct<8> func_522(var uParam0)
{
	return uParam0->f_230;
}

void func_523(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_511(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_1033(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1034());
		func_337(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1035(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_337(uParam0, 16);
	}
}

void func_524(var uParam0)
{
	if ((!func_511(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		func_1036(uParam0);
		func_1037(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		func_337(uParam0, 32768);
	}
}

bool func_525()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_526(int iParam0)
{
	struct<4> Var0;

	if (func_1038(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1032(Var0);
}

char* func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSM_WOMANCRY";
		case 1:
			return "LSM_HUNTER";
		case 2:
			return "LSM_CATFISH";
		case 3:
			return "LSM_UNDERTAKER";
		case 5:
			return "LSM_MINER_1";
		case 6:
			return "LSM_MINER_2";
		case 4:
			return "LSM_SOLDIER_1";
		case 7:
			return "LSM_HC_1";
		case 8:
			return "LSM_SELL_HORSE_1";
	}
	return "";
}

bool func_528(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar6 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return true;
}

void func_529()
{
	vector3 vVar0;

	vVar0 = { vLocal_964[0 /*3*/] };
	func_1039(vVar0, 10f, 1, 0, 0, 0, 0);
	func_537(0, &(uLocal_979[0]), iLocal_975, vVar0, fLocal_971[0], 1, 1, 2, 1, 1, 1, 1);
}

void func_530(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 0);
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 1);
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 2);
	}
	else
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
	}
}

void func_531(int iParam0, bool bParam1)
{
	func_328(iParam0, bParam1);
}

int func_532(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_294(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == GET_HASH_KEY("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_239(iVar25, 0) && func_261(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_533(bool bParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar0 = func_236(bParam0);
		return func_237(bParam0, GET_HASH_KEY("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(bParam0, "loot_money", iParam1);
}

bool func_534(int iParam0, bool bParam1)
{
	if (!func_407(iParam0))
	{
		return false;
	}
	if (!func_1040(iParam0, 2))
	{
		return false;
	}
	if (func_927(iParam0) == 0)
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_929(iParam0)))
	{
		return true;
	}
	if (func_1040(iParam0, 1) && !bParam1)
	{
		func_1000(iParam0, 128);
		return true;
	}
	func_1041(iParam0, 129);
	func_1042(iParam0);
	PERSCHAR::_0x7B204F88F6C3D287(func_929(iParam0));
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_929(iParam0));
	func_1043(iParam0, 0);
	return true;
}

void func_535(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_1044(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_536(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, GET_HASH_KEY("EMPTY"));
	}
}

bool func_537(int iParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!func_63(*uParam1, 0))
	{
		if (!func_20(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam1 = func_911(iParam2, vParam3, iParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (func_63(*uParam1, 0))
			{
				func_29(&(Global_1392626[iParam0 /*32*/].f_9), 256);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1045(iParam0);
			break;
		case 1:
			func_1046(iParam0);
			break;
		case 2:
			func_1047(iParam0);
			break;
	}
}

void func_539(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_1048(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_137(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_1049(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_1050(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, false, 15);
		}
	}
}

void func_540(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1051(iParam0, iParam1, bParam2, fParam3);
}

int func_541(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_542(iParam0);
}

int func_542(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_1052(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_543(int iParam0)
{
	return func_541(iParam0) == 0;
}

int func_544(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_545(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_946(iParam0))
	{
		return;
	}
	uVar0 = Global_1835011[iParam0 /*74*/].f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { Global_1835011[iParam0 /*74*/].f_18 };
	MemCopy(&Var5, {Global_1835011[iParam0 /*74*/].f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, Global_1835011[iParam0 /*74*/].f_26, GET_HASH_KEY("TOAST_LOG_BLIPS"));
}

void func_546(int iParam0)
{
	if (!func_105(iParam0))
	{
		return;
	}
	func_1054(iParam0, func_1053(iParam0) + 1);
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_91(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_197(&Global_1935630, 4194304);
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

int func_548(bool bParam0)
{
	if (!bParam0 && func_1055(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_549(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1056(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_1057(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_1058(iVar0, iParam1);
	return iParam1;
}

bool func_550(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_551(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_552(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_553(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_554(bool bParam0)
{
	func_1059(bParam0);
	func_1060(bParam0);
	func_1061(bParam0);
	func_1062(bParam0);
	func_1063(bParam0);
	func_1064(bParam0);
	func_1065(bParam0);
	func_1066(bParam0);
}

void func_555(bool bParam0)
{
	if (func_268() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_250(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_250(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_1067(1, bParam0, 1);
	func_303();
	Global_40.f_11095.f_43 = bParam0;
}

int func_556(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_414(iParam0))
	{
		case 1:
			iVar0 = func_383(iParam0);
			return func_1068(iVar0);
		case 8:
			iVar1 = func_383(iParam0);
			if (func_385(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_1069(iVar1);
			}
			break;
	}
	return -1;
}

int func_557()
{
	if (!func_281(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_281(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_281(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_281(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_281(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_281(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_281(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_558(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_268() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_1070(Global_1898077.f_7, Global_1898077.f_3);
}

void func_559(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_268() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_1071(Global_1898077.f_7, Global_1898077.f_4);
}

void func_560(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_561(int iParam0, bool bParam1)
{
	if (func_268() != -1)
	{
		return;
	}
	if (func_104(0) != iParam0)
	{
		return;
	}
	if (func_1072(iParam0))
	{
		if (bParam1)
		{
			func_1073(-525676072);
		}
		else
		{
			func_1074(-525676072);
		}
	}
}

void func_562(float fParam0)
{
	func_1075(10, fParam0);
}

bool func_563()
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

void func_564()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

void func_565(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_414(iParam0) == 1)
	{
		cVar0 = func_1077(func_1076(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_414(iParam0) == 8)
	{
		cVar0 = func_1079(func_1078(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_475(1, 1);
	func_480(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_371(0);
	func_372(0);
	func_374(1f);
}

void func_566(var uParam0, int iParam1)
{
	uParam0->f_220 = iParam1;
	func_1080(uParam0, 1);
}

bool func_567(var uParam0, char* sParam1)
{
	return MISC::_DOES_STRING_EXIST_IN_STRING(&(uParam0->f_224), sParam1);
}

int func_568(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_228, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_228) * 1000f));
}

void func_569(var uParam0, bool bParam1)
{
	func_190(0, 0);
	if (bParam1 || func_797(uParam0, 1))
	{
		if (!func_166(16777216))
		{
			func_65(16777216);
		}
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228) && ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_228)) || bParam1)
	{
		if (!func_166(4194304))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[0 /*19*/]))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_70[0 /*19*/]);
				func_65(4194304);
			}
		}
	}
	if (bParam1 || func_1081(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!func_166(2097152))
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_65(2097152);
		}
	}
	if (bParam1 || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_228, "LillyMillet"))
	{
		if (!func_166(8388608))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_979[0], 1430.1f, 371.26f, 88.08f, 29.054f, true, false, true);
			func_64();
			func_65(8388608);
		}
	}
}

void func_570(var uParam0, int iParam1)
{
	uParam0->f_221 = iParam1;
	func_1080(uParam0, 2);
}

struct<8> func_571()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_572(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_230), sParam1, 64);
}

void func_573(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1082(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1083(uParam0, iParam1);
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
		iVar1 = func_1084(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1085(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1086(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_1087(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_1088(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

bool func_574(bool bParam0, vector3 vParam1, var uParam4, var uParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	func_1089(bParam0, vParam1, 0, uParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar4 = func_516(bParam0, vParam1, 1);
	if (!func_49(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_50(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_71(uParam4);
	}
	if (func_49(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_793(uParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1090(bParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(bParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_1090(bParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(bParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(bParam0, 175, true);
		}
	}
	return false;
}

int func_575(var uParam0)
{
	return uParam0->f_1;
}

void func_576(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_1091(uParam0, 4);
	if (func_1092(uParam0, &uParam1, iParam5))
	{
		func_584(uParam0, 1);
	}
}

void func_577(var uParam0)
{
	if (!func_1093(uParam0))
	{
		return;
	}
	if (!func_334(uParam0, 4194304))
	{
		func_1094(uParam0);
		func_593(uParam0, 4194304);
	}
	if (func_1095(uParam0))
	{
		func_1096(uParam0);
		func_1097(uParam0);
		func_584(uParam0, 2);
	}
}

void func_578(var uParam0)
{
	uParam0->f_1451 = -1;
	func_583(uParam0, 0);
	func_584(uParam0, 3);
	func_1098(uParam0, 0);
	func_71(&(uParam0->f_1635));
	func_1099(uParam0);
	func_71(&(uParam0->f_1638));
}

void func_579(var uParam0)
{
	bool bVar0;

	if (!func_334(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1100(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1100(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_593(uParam0, 134217728);
		}
	}
}

void func_580(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!func_334(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!func_334(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!func_334(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_591(uParam0);
	func_1101(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_1102(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !func_162(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !func_334(uParam0, 33554432)) && !func_334(uParam0, 4))
		{
			func_1103(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!func_334(uParam0, 4))
	{
		if (func_1104(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				func_593(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1103(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_1105(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					func_593(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1455 == -1f || fVar0 <= uParam0->f_1455) || uParam0->f_1456 == uParam0->f_1454)
				{
					if (uParam0->f_1456 != uParam0->f_1454)
					{
					}
					uParam0->f_1454 = uParam0->f_1456;
					uParam0->f_1455 = fVar0;
					func_593(uParam0, 16);
					if (((!func_334(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_1106(uParam0);
						func_593(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				func_340(uParam0, 16);
			}
		}
		if (uParam0->f_1456 + 1 >= 8)
		{
			uParam0->f_1456 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1456 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_782[iVar2 /*41*/].f_29)
				{
					uParam0->f_1456 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1456 = 0;
			}
		}
		if (uParam0->f_1454 < 0)
		{
			return;
		}
		if (func_342(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (func_334(uParam0, 16))
	{
		fVar4 = func_516(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
		}
		fVar5 = func_1107(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_782[uParam0->f_1454 /*41*/].f_17 || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 + uParam0->f_782[uParam0->f_1454 /*41*/].f_10))
			{
				func_590(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1665 && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1667) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
			}
		}
		else if ((uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1664))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1664, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || func_334(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_1105(uParam0, uParam0->f_1454) < 10000f) && func_334(uParam0, 16)) || func_334(uParam0, 4))
		{
			if (!func_334(uParam0, 4))
			{
				func_593(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_588(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_1108(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				func_340(uParam0, 4);
			}
		}
	}
	else if (func_334(uParam0, 4))
	{
		func_340(uParam0, 4);
	}
}

int func_581(var uParam0)
{
	return *uParam0;
}

void func_582(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_334(uParam0, 512))
	{
		return;
	}
	if (func_498(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (func_1109(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_593(uParam0, 524288);
	}
}

void func_583(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

void func_584(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_585(var uParam0, int iParam1)
{
	int iVar0;

	if (func_341(uParam0, 4))
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
			if (func_1110())
			{
				if (!func_334(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_1110())
	{
		func_340(uParam0, 512);
		func_1111(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_1112(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_1113(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1114();
	func_1115(uParam0, 1, 0);
	func_1116(uParam0);
	if (func_334(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_1111(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (func_341(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1117()))
	{
		CAM::_0x798BE43C9393632B(func_1117());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), func_1117())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_334(uParam0, 524288) || iParam1 == 1)
	{
		func_1118();
	}
	if (func_341(uParam0, 16))
	{
		if (func_581(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
		}
	}
	func_1119();
	if (func_341(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!func_334(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
		}
	}
	func_598(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_586(bool bParam0)
{
	if (bParam0)
	{
		func_1120(4);
	}
	func_1120(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_587()
{
	Global_1905944.f_5695 = 1;
}

bool func_588(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_241[iVar0 /*18*/].f_17 == 1 && uParam0->f_241[iVar0 /*18*/].f_2 == 4) && uParam0->f_241[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_589(var uParam0)
{
	return uParam0->f_2;
}

void func_590(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_787(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_787(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && func_334(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_787(uParam1, 262144) && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_1121(&iVar1, uParam2);
	func_1122(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_334(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1123();
	func_1124(uParam0, 1);
}

void func_591(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;

	iVar0 = uParam0->f_1454;
	if (iVar0 >= 0 && !func_597(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), func_1125(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), func_1117(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1125(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1126(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1458)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1458.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1111[iVar0 /*22*/])
		{
			if (!func_1127(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!func_1127(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					func_1121(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					func_1128(&(uParam0->f_1670), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_782[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1111[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 17)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1111[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_1127(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1111[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668) || iVar26 != uParam0->f_1668))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
											func_1111(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_912(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1107(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = func_1127(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_1127(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_1127(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1129(0, 0);
								}
								bVar32 = true;
								func_1111(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1130(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1474.f_22 != bVar30);
								uParam0->f_1474.f_16 = iVar23;
								uParam0->f_1474.f_17 = { vVar20 };
								uParam0->f_1474.f_20 = fVar27;
								uParam0->f_1474.f_21 = fVar28;
								uParam0->f_1474.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1474 = { uParam0->f_1458 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1474));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1497.f_16 != iVar23);
								bVar32 = (bVar32 || !func_1130(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1497.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1497.f_21 != bVar30);
								uParam0->f_1497.f_16 = iVar23;
								uParam0->f_1497.f_17 = { vVar20 };
								uParam0->f_1497.f_20 = !bVar31;
								uParam0->f_1497.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1497 = { uParam0->f_1458 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1497));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
							}
							StringCopy(&(uParam0->f_1458), "", 64);
							StringCopy(&(uParam0->f_1458.f_8), "", 64);
							func_1131(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_592(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1132(uParam0, &iVar0))
	{
		func_1133(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_593(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_594(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_581(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1454;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_782[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_782[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_782[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_782[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1641) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_782[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_782[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_782[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668))
			{
				func_593(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				func_593(uParam0, 65536);
				return;
			}
		}
		func_340(uParam0, 65536);
	}
}

void func_595(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_575(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_1134(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = func_1135(uParam0, iVar0);
				if (bVar1)
				{
					func_1136(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_588(uParam0, uParam0->f_1450))
		{
			func_1137(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_1134(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = func_1135(uParam0, iVar0);
			if (bVar1)
			{
				func_1136(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1457 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1457 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_596(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1687);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1687);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_597(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_598(var uParam0)
{
	func_1138(&(uParam0->f_1670));
}

void func_599(var uParam0)
{
	uParam0->f_1431 = 0;
}

void func_600(int iParam0)
{
	int iVar0;

	if (func_268() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_63(func_1139(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1139(iVar0), func_1140(), 1))
			{
				func_1141(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_601()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_602(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_516(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_14 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_603(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_516(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_15 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_604(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_1451 < 0)
	{
		return true;
	}
	switch (uParam0->f_241[uParam0->f_1451 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (func_793(&(uParam0->f_1638)) >= 15f)
			{
				func_593(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (func_793(&(uParam0->f_1638)) >= 15f)
				{
					func_593(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_1142(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_1142(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_1142(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_1142(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_1142(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_793(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

bool func_605(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_606(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && func_1143(&(uParam0->f_241[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_607(vector3 vParam0)
{
	if (func_1144(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

void func_608(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_609(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

void func_610(var uParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_1145(iParam1, *uParam0, iParam1->f_56, 0);
	fVar0 = func_609(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
	func_1146(iParam1, fParam3);
	func_1147(uParam0, iParam1, uParam2, fVar0);
	func_1148(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_1149(iParam1, uParam2, uParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_627(iParam1, uParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_628(iParam1);
			}
		}
	}
}

bool func_611(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1150(iParam0, iParam1))
		{
			if (!func_434(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_224(uParam2, 0, 0, 1, 0);
				func_126(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_434(iParam1->f_10, 1))
		{
			func_1151(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_125(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_612(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_434(iParam4, 32);
		func_1152(iParam1, uParam2, 0);
		iVar5 = func_1153(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_224(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_434(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_434(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_434(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_434(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_434(iParam4, 8388608) || func_434(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_434(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_434(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_614(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_614(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_434(iParam4, 67108864))
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
				iParam6 = func_1154(uParam0);
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
			if (func_434(iParam4, 268435456))
			{
				iVar8 = func_1155(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1156(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_614(iParam1, 23))
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
			if (func_434(iParam4, 2) || func_434(iParam4, 16))
			{
				func_613(*uParam0, 1, 1);
			}
			else
			{
				func_613(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_613(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_614(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_615(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1157(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_616(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1158(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_434(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_617(int iParam0)
{
	if (func_434(iParam0, 4))
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
	if (func_434(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_434(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

int func_618(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"))) || func_1159()) || func_1160()) || func_1161())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_70(&(iParam0->f_46));
	}
	if (func_49(&(iParam0->f_46)) && !func_1162(&(iParam0->f_46), 0.25f))
	{
		func_1163(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_619(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_1164(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_1165(Global_35)) || func_1166(Global_35)) || func_1167(Global_35));
	fVar12 = -1f;
	if (func_49(&(iParam1->f_13)))
	{
		fVar12 = func_793(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_643((uParam4[iVar0 /*17*/])->f_6);
		func_1168(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1169(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1170(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_224(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_395(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_1152(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							func_1171(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_1149(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
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
							if (func_478(func_699(Global_35, 0, 1, 0)) || func_478(func_699(Global_35, 1, 1, 0)))
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
					if (func_1172(iParam1, fParam6, iParam1->f_9))
					{
						func_70(&(iParam1->f_18));
						if (bVar6)
						{
							func_395(uParam4, 0, 0);
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
		func_1173(iParam1, fParam2);
	}
	return bVar5;
}

void func_620(var uParam0)
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

void func_621(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1174(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_1173(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_622(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_1175(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1003(iParam1, 0);
				func_1152(iParam1, uParam2, func_614(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_623(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1168(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_624(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_625(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1176(iParam0, vVar0, fParam2);
}

bool func_626(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(bParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(bParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_627(int* iParam0, var uParam1)
{
	vector3 vVar0;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return true;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_232(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_1177(*uParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_1178(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_232(Global_35, -208384378))
	{
		if (func_1179(Global_35))
		{
			iParam0->f_60 = func_1180();
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

bool func_628(int* iParam0)
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
		if (func_478(func_699(Global_35, 0, 1, 0)) || func_478(func_699(Global_35, 1, 1, 0)))
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
		if (!func_478(func_699(Global_35, 0, 1, 0)) && !func_478(func_699(Global_35, 1, 1, 0)))
		{
			func_71(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_478(func_699(Global_35, 0, 1, 0)) || func_478(func_699(Global_35, 1, 1, 0))) && !func_232(Global_35, 716706914)) && !func_232(Global_35, 242628503))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_50(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_498(&(iParam0->f_52)) >= 1.5f;
		if ((!func_478(func_699(Global_35, 0, 1, 0)) && !func_478(func_699(Global_35, 1, 1, 0))) || bVar0)
		{
			func_71(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

bool func_629(int* iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_1181(&uVar0))
		{
			func_50(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1182())
			{
			}
		}
		else
		{
			func_50(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_498(&(iParam0->f_37)) >= 1.5f;
		if ((!func_1181(&uVar0) || func_1182()) || bVar1)
		{
			if (bVar1)
			{
				func_1183();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

bool func_630(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_70(&(iParam1->f_18));
			return false;
		}
		else if (func_49(&(iParam1->f_18)))
		{
			func_71(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_49(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_1184(&(iParam1->f_18), fParam2);
	return true;
}

void func_631(int* iParam0, var uParam1)
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
	func_404(iParam0, 0);
	func_1152(iParam0, uParam1, 1);
	func_224(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

bool func_632(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_268() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

bool func_633(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_668(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

bool func_634(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_635()
{
	if (!func_487(1))
	{
		if (!func_1185())
		{
			if (func_381("INVEST_HELP", 10000, 0, 0, 0, 1) != 0)
			{
				func_489(1);
			}
		}
	}
}

bool func_636(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1186(bParam0, bParam1, 0f))
		{
			return false;
		}
	}
	if (!func_626(bParam0, bParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(bParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(bParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(bParam0, bParam1, bParam2, false) == 1;
}

void func_637(int iParam0)
{
	if (!func_161(iParam0, 4))
	{
		func_474(iParam0, 4);
		func_1008(iParam0, 2);
	}
}

void func_638(int iParam0)
{
	func_1187(iParam0, 1088421888 /* Float: 7f */, 1, 0);
}

void func_639(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Local_70[iParam0 /*19*/], sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_70[iParam0 /*19*/], sParam1, bParam2, false);
	}
}

bool func_640()
{
	if (MAP::DOES_BLIP_EXIST(iLocal_977))
	{
		func_1188(&(Local_1365[0 /*61*/]), &Local_1427, 0, iLocal_977, 0, 5.5f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);
		func_914(&(Local_1427[0 /*17*/]), func_1189(27), " ", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_641(&(Local_1427[0 /*17*/]), 0, 0);
		return true;
	}
	else
	{
		iLocal_977 = MAP::_0x3E593DF9C2962EC6(-936216634);
		MAP::SET_BLIP_SPRITE(iLocal_977, GET_HASH_KEY("BLIP_AMBIENT_LOAN_SHARK"), true);
		if (!func_354(1))
		{
			MAP::BLIP_ADD_MODIFIER(iLocal_977, -401963276);
		}
	}
	return false;
}

void func_641(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1190(iParam0, 13))
	{
		func_1191(iParam0, 0);
	}
	else
	{
		func_1192(iParam0, 0);
	}
	if (func_643(iParam0->f_6))
	{
		if (bParam2)
		{
			func_644(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_642()
{
	if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_70[1 /*19*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_70[1 /*19*/], false)) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_70[1 /*19*/], sLocal_913[8]))
		{
			if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_70[1 /*19*/], sLocal_913[8]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_70[1 /*19*/], sLocal_913[8]))
			{
				if (func_1193())
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_70[1 /*19*/], sLocal_913[8], true);
				}
			}
			else if (ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_70[1 /*19*/], sLocal_913[8]) && ANIMSCENE::_0x0DF57F86FE71DBE5(Local_70[1 /*19*/], sLocal_913[8]))
			{
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_643(int iParam0)
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

void func_644(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_643(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1194(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1195(iVar0);
	*uParam0 = 0;
}

void func_645(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_646(int iParam0)
{
	iLocal_22 = iParam0;
}

void func_647(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
}

void func_648(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

float func_649()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_650(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_651(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_652(int iParam0)
{
	return func_260(iParam0) == GET_HASH_KEY("WEAPON");
}

bool func_653(int iParam0)
{
	var uVar0;

	if (func_268() != -1)
	{
		return false;
	}
	if (func_262(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_660(iParam0, &uVar0, 1, 0, 0);
	}
	return func_294(iParam0, 1, 0);
}

void func_654(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_260(iParam0) != GET_HASH_KEY("WEAPON"))
	{
		return;
	}
	iVar0 = func_267(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_688(iVar0))
	{
		if (func_268() == -1)
		{
			func_269(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_243(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_325(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_655(int iParam0, int iParam1)
{
	int iVar0;

	if (func_261(iParam0, 58855631))
	{
		func_1196(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_656(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_1197(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_260(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_692(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_941(bParam1) };
			if (bParam2 && func_1198(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_690(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_690(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_691(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_1199(bParam1) };
			switch (func_265(iParam0))
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
			if (func_1200(iParam0, -1823706425))
			{
				Var0 = { func_692(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_1200(iParam0, -1483207246))
			{
				Var0 = { func_692(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_1201(Var0, &Var27, bParam1, 0))
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

int func_657(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_239(iParam0, 0))
	{
		return 0;
	}
	if (!func_270(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_1202(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_663(bParam3), iParam0);
}

int func_658(int iParam0, bool bParam1)
{
	if (func_274(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_663(bParam1), iParam0, 0);
}

bool func_659()
{
	if (func_268() != -1)
	{
		return false;
	}
	if (!func_253())
	{
		return false;
	}
	if (!func_281(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_281(Global_1835011[2 /*74*/].f_1, 1) && func_281(Global_1347702[120 /*49*/].f_15, 1)) && !func_281(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_281(Global_1835011[37 /*74*/].f_1, 1) && !func_281(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_281(Global_1835011[57 /*74*/].f_1, 1) && !func_281(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_281(Global_1835011[26 /*74*/].f_1, 1) && !func_281(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_281(Global_1835011[62 /*74*/].f_1, 1) && func_281(Global_1835011[63 /*74*/].f_1, 1)) && !func_281(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_281(Global_1835011[75 /*74*/].f_1, 1) && !func_281(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_281(Global_1835011[76 /*74*/].f_1, 1) && !func_281(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_281(Global_1835011[40 /*74*/].f_1, 1) && func_281(Global_1835011[41 /*74*/].f_1, 1)) && !func_281(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_281(Global_1835011[62 /*74*/].f_1, 1) && func_281(Global_1835011[63 /*74*/].f_1, 1)) && !func_281(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_281(Global_1835011[65 /*74*/].f_1, 1) && func_281(Global_1835011[66 /*74*/].f_1, 1)) && !func_281(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_660(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1203(&iParam0);
	if (!func_239(iParam0, 0))
	{
		return false;
	}
	if (!func_270(0))
	{
		bParam3 = true;
	}
	if (func_652(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_941(0) };
			Var4.f_9 = -1591664384;
			if (!func_690(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_691(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_1198(iParam0, 1))
			{
				if (!func_690(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_691(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1204(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_657(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_1202(iParam0))
	{
		iVar28 = func_1205(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_663(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_661(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_662(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_940(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_942(&Var0, func_941(0));
	}
	if (!func_943(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_749(iVar14);
	return iVar15;
}

int func_663(bool bParam0)
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

int func_664()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_665(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_666(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_268() != -1)
	{
		return;
	}
	iVar0 = func_1206(iParam0);
	fVar1 = func_1207(iParam0);
	if ((Global_1347477.f_117 || !func_263(31)) || !func_1208(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1209(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1210(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_771(MISC::VAR_STRING(6, func_1211(iParam0), fVar1), "itemtype_textures", func_1212(iVar0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_667(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_D