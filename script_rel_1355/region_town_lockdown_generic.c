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
	var uLocal_14 = 0;
	var uLocal_15 = 3;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<5> Local_44[4];
	struct<6> Local_65[13];
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	bool bLocal_148 = false;
	vector3 vLocal_149 = { 0f, 0f, 0f };
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_41 = ScriptParam_0;
	bLocal_148 = ScriptParam_0.f_3;
	if (!bLocal_148)
	{
	}
	LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		LAW::_0x29CD4896ECB66C12();
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_41))
	{
		func_4();
		func_5();
		BUILTIN::WAIT(0);
	}
	if (!func_7(func_6()))
	{
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), 0);
	}
	LAW::_0x29CD4896ECB66C12();
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	EVENT::REMOVE_SHOCKING_EVENT(iLocal_147);
	AUDIO::_0xCBF2BEBB468A34F3(0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (func_8(Local_44[iVar0 /*5*/][iVar1], 0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_44[iVar0 /*5*/][iVar1], 0);
				PED::RELEASE_PED_VISIBILITY_TRACKING(Local_44[iVar0 /*5*/][iVar1]);
				if (bParam0)
				{
					func_9(&(Local_44[iVar0 /*5*/][iVar1]), 1, 0, 1);
				}
			}
			iVar1++;
		}
		if (PED::DOES_GROUP_EXIST(Local_44[iVar0 /*5*/].f_4))
		{
			PED::REMOVE_GROUP(Local_44[iVar0 /*5*/].f_4);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 13)
	{
		if (func_8(Local_65[iVar2 /*6*/].f_5, 0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_65[iVar2 /*6*/].f_5, 0);
			PED::RELEASE_PED_VISIBILITY_TRACKING(Local_65[iVar2 /*6*/].f_5);
			if (bParam0)
			{
				func_9(&(Local_65[iVar2 /*6*/].f_5), 1, 0, 1);
			}
		}
		iVar2++;
	}
}

void func_2()
{
	iLocal_42 = 1;
	iLocal_146 = 4;
	if (iLocal_41 == 76)
	{
		Local_65[0 /*6*/] = { -315.9697f, 730.205f, 119.6211f };
		Local_65[0 /*6*/].f_3 = 112.8886f;
		Local_65[1 /*6*/] = { -280.0835f, 650.7783f, 112.3533f };
		Local_65[1 /*6*/].f_3 = 106.2955f;
		Local_65[2 /*6*/] = { -179.4088f, 618.418f, 113.0321f };
		Local_65[2 /*6*/].f_3 = 238.633f;
		Local_65[3 /*6*/] = { -188.5282f, 633.502f, 113.0321f };
		Local_65[3 /*6*/].f_3 = 32.4418f;
		Local_65[4 /*6*/] = { -247.1752f, 732.9976f, 115.5597f };
		Local_65[4 /*6*/].f_3 = 247.7911f;
		Local_65[5 /*6*/] = { -290.4395f, 854.7539f, 119.1824f };
		Local_65[5 /*6*/].f_3 = 248.8751f;
	}
	else if (iLocal_41 == 105)
	{
		Local_65[0 /*6*/] = { 1233.016f, -1257.087f, 73.0134f };
		Local_65[0 /*6*/].f_3 = 45.548f;
		Local_65[1 /*6*/] = { 1241.922f, -1289.397f, 75.9255f };
		Local_65[1 /*6*/].f_3 = 302.9735f;
		Local_65[2 /*6*/] = { 1299.177f, -1298.264f, 76.0373f };
		Local_65[2 /*6*/].f_3 = 311.7982f;
		Local_65[3 /*6*/] = { 1366.771f, -1384.501f, 78.0832f };
		Local_65[3 /*6*/].f_3 = 241.6411f;
		if (!func_10())
		{
			Local_65[4 /*6*/] = { 1237.376f, -1253.622f, 72.8261f };
			Local_65[4 /*6*/].f_3 = 40.1294f;
			Local_65[5 /*6*/] = { 1397.672f, -1309.186f, 76.6507f };
			Local_65[5 /*6*/].f_3 = 233.5066f;
			Local_65[6 /*6*/] = { 1315.306f, -1227.236f, 78.2259f };
			Local_65[6 /*6*/].f_3 = 290.243f;
		}
		if (!func_10())
		{
			iLocal_146 = 2;
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	else if (iLocal_41 == 26)
	{
		Local_65[0 /*6*/] = { -1733.893f, -409.9799f, 154.4572f };
		Local_65[0 /*6*/].f_3 = 219.0199f;
		Local_65[1 /*6*/] = { -1791.323f, -399.5062f, 159.2381f };
		Local_65[1 /*6*/].f_3 = 212.9633f;
		Local_65[2 /*6*/] = { -1777.439f, -422.8475f, 154.1486f };
		Local_65[2 /*6*/].f_3 = 62.4417f;
		Local_65[3 /*6*/] = { -1836.929f, -420.9853f, 159.9767f };
		Local_65[3 /*6*/].f_3 = 175.3828f;
		Local_65[4 /*6*/] = { -1816.793f, -400.6095f, 160.5686f };
		Local_65[4 /*6*/].f_3 = 260.9312f;
		Local_65[5 /*6*/] = { -1816.323f, -270.1976f, 176.8509f };
		Local_65[5 /*6*/].f_3 = 1.7588f;
		iLocal_146 = 1;
	}
	else if (iLocal_41 == 38)
	{
		Local_65[0 /*6*/] = { -740.3712f, -1221.114f, 43.6817f };
		Local_65[0 /*6*/].f_3 = 53.1936f;
		Local_65[1 /*6*/] = { -851f, -1191.6f, 42.5509f };
		Local_65[1 /*6*/].f_3 = 190f;
		Local_65[2 /*6*/] = { -861.8897f, -1227.788f, 42.2753f };
		Local_65[2 /*6*/].f_3 = 65.2773f;
		Local_65[3 /*6*/] = { -841.9166f, -1234.872f, 42.5675f };
		Local_65[3 /*6*/].f_3 = 256.8999f;
		Local_65[4 /*6*/] = { -915.2818f, -1361.665f, 44.0777f };
		Local_65[4 /*6*/].f_3 = 79.3949f;
		Local_65[5 /*6*/] = { -865.3668f, -1397.431f, 42.5964f };
		Local_65[5 /*6*/].f_3 = 183.7478f;
		Local_65[6 /*6*/] = { -774.5f, -1379.2f, 43.4207f };
		Local_65[6 /*6*/].f_3 = 210.8791f;
		Local_65[7 /*6*/] = { -823.8338f, -1331.073f, 42.6664f };
		Local_65[7 /*6*/].f_3 = 122.9285f;
		Local_65[8 /*6*/] = { -806.4053f, -1261.322f, 42.6713f };
		Local_65[8 /*6*/].f_3 = 328.6115f;
		Local_65[9 /*6*/] = { -806.9378f, -1343.487f, 42.6736f };
		Local_65[9 /*6*/].f_3 = 265.7803f;
		Local_65[10 /*6*/] = { -682.9378f, -1243.5f, 42.6736f };
		Local_65[10 /*6*/].f_3 = 270f;
		Local_65[11 /*6*/] = { -723.1f, -1273.4f, 42.6736f };
		Local_65[11 /*6*/].f_3 = 265.7803f;
		Local_65[12 /*6*/] = { -735.5f, -1373.1f, 44.3f };
		Local_65[12 /*6*/].f_3 = 300f;
	}
	else if (iLocal_41 == 57)
	{
		Local_65[0 /*6*/] = { 1437.581f, -7118.745f, 73.8276f };
		Local_65[0 /*6*/].f_3 = 304.4214f;
		Local_65[1 /*6*/] = { 1501.077f, -7096.875f, 75.3257f };
		Local_65[1 /*6*/].f_3 = 132.8023f;
		Local_65[2 /*6*/] = { 1455.17f, -7087.646f, 74.8994f };
		Local_65[2 /*6*/].f_3 = 17.1023f;
		Local_65[3 /*6*/] = { 1482.781f, -7074.065f, 73.0206f };
		Local_65[3 /*6*/].f_3 = 87.7416f;
		Local_65[4 /*6*/] = { 1455.889f, -7126.713f, 76.3761f };
		Local_65[4 /*6*/].f_3 = 171.7569f;
		Local_65[5 /*6*/] = { 1445.943f, -7104.507f, 76.3761f };
		Local_65[5 /*6*/].f_3 = 115.4127f;
		Local_65[6 /*6*/] = { 1429.604f, -7090.44f, 71.6729f };
		Local_65[6 /*6*/].f_3 = 347.8958f;
		iLocal_146 = 2;
	}
	else if (iLocal_41 == 78)
	{
		Local_65[0 /*6*/] = { 2836.395f, 1440.633f, 68.6899f };
		Local_65[0 /*6*/].f_3 = 93.6271f;
		Local_65[1 /*6*/] = { 2878.97f, 1387.042f, 83.0191f };
		Local_65[1 /*6*/].f_3 = 75.0041f;
		Local_65[2 /*6*/] = { 3022.347f, 1439.903f, 45.9552f };
		Local_65[2 /*6*/].f_3 = 80.5108f;
		Local_65[3 /*6*/] = { 2870.179f, 1422.417f, 67.6698f };
		Local_65[3 /*6*/].f_3 = 270.6312f;
		Local_65[4 /*6*/] = { 2877.519f, 1368.874f, 61.9214f };
		Local_65[4 /*6*/].f_3 = 91.5501f;
		Local_65[5 /*6*/] = { 2937.786f, 1317.984f, 43.1809f };
		Local_65[5 /*6*/].f_3 = 44.1809f;
		Local_65[6 /*6*/] = { 2945.338f, 1374.376f, 50.3227f };
		Local_65[6 /*6*/].f_3 = 178.441f;
		iLocal_146 = 1;
	}
	PED::_0xED9582B3DA8F02B4((3 * iLocal_146) + 13);
}

bool func_3(int iParam0)
{
	if (((((!(func_11(iParam0, 8) || func_11(iParam0, 2)) || !func_13(Global_35, func_12(iParam0), 1, 0)) || !func_14(iParam0)) || func_15()) || Global_1934266.f_56) || ((iParam0 != 38 || func_16(45)) && (func_17(1, 0) || func_17(8, 0))))
	{
		return false;
	}
	return true;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_18(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		LAW::_0xC310239ACCCF5579();
	}
	switch (iLocal_42)
	{
		case 1:
			iLocal_43 = func_19(2, 2, -156825994, 1, 0, 0f, 0f, 0f);
			if (!STREAMING::IS_MODEL_VALID(iLocal_43))
			{
				iVar0 = func_20(iLocal_41);
				if (iVar0 == 8)
				{
					iLocal_43 = GET_HASH_KEY("S_M_M_FUSSARHENCHMAN_01");
				}
			}
			if (func_8(Global_35, 0))
			{
			}
			iLocal_152 = func_21(iLocal_41);
			if (iLocal_41 == 38)
			{
				iLocal_153 = VOLUME::_CREATE_VOLUME_BOX(-810.7571f, -1288.25f, 63.56367f, 0f, 0f, 0f, 137.4041f, 198.2413f, 58.96445f);
			}
			iLocal_42 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_43, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_43) && PED::_0x5E420FF293EE5472())
			{
				iLocal_42 = 3;
			}
			break;
		case 3:
			if (!func_18(PLAYER::PLAYER_ID(), 0, 0, 0) || !bLocal_148)
			{
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				LAW::_0x0C392DB374655176(Global_36, 200f, iVar1);
				iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				if (iVar2 > 14)
				{
					iLocal_42 = 6;
				}
				else if (iVar2 > 7)
				{
					iLocal_42 = 5;
				}
				else
				{
					iLocal_42 = 4;
				}
			}
			break;
		case 4:
			if (!bLocal_148)
			{
				if (func_22())
				{
					iLocal_42 = 5;
				}
			}
			else
			{
				iLocal_42 = 5;
			}
			break;
		case 5:
			if (func_23())
			{
				func_24();
				iLocal_145 = 0;
				iLocal_42 = 6;
			}
			break;
		case 6:
			if (iLocal_41 == 38 && !func_16(45))
			{
				if (!func_25(&uLocal_154))
				{
					if (func_13(Global_35, iLocal_153, 1, 0))
					{
						func_26(&uLocal_154);
					}
				}
				else if (func_27(&uLocal_154) > 3f)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_LAW_IS_THREATENED"), 0, 0, true);
				}
			}
			if (Global_1935630.f_18)
			{
				func_1(0);
				iLocal_42 = 7;
			}
			break;
		case 7:
			if (iLocal_41 == 38 && !func_16(45))
			{
				if (Global_1935630.f_18)
				{
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				}
			}
			break;
		case 8:
			func_1(1);
			iLocal_42 = 9;
			break;
	}
}

void func_5()
{
	if (func_28(1) == func_29())
	{
		AUDIO::_0xCBF2BEBB468A34F3(1);
	}
	else
	{
		AUDIO::_0xCBF2BEBB468A34F3(0);
	}
}

int func_6()
{
	return Global_1897952.f_41;
}

bool func_7(int iParam0)
{
	if (!func_30(iParam0))
	{
		return false;
	}
	return func_31(iParam0, 2);
}

bool func_8(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_32(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_32(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_32(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_9(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

bool func_10()
{
	return (func_33(21) && !func_33(27));
}

bool func_11(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_12(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_13(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_14(int iParam0)
{
	if (!func_34(iParam0))
	{
		return false;
	}
	return func_11(iParam0, 33554432);
}

bool func_15()
{
	if (func_35() == -1)
	{
		if (func_36() || func_37())
		{
			return true;
		}
	}
	else if (func_38(1, 255))
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	return func_40(iParam0);
}

int func_17(int iParam0, bool bParam1)
{
	if (func_41(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_42(5000))
		{
			return 1;
		}
	}
	switch (func_43(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_44(bParam1, bParam2, bParam3);
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

int func_19(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_45(iParam0))
	{
		return 0;
	}
	if (func_46(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_46(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

int func_20(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_21(int iParam0)
{
	char* sVar0;

	sVar0 = "Law ped patrol zone";
	switch (iParam0)
	{
		case 76:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-289.5586f, 710.8658f, 108.6164f, 0f, 0f, 21.78f, 150.319f, 248.9677f, 48.46068f, sVar0);
		case 105:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1355.895f, -1305.364f, 76.3101f, 0f, 0f, 46.10207f, 156.1024f, 183.122f, 48.46068f, sVar0);
		case 38:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-848.7946f, -1305.756f, 42.269f, 0f, 0f, 0f, 170.4325f, 189.3558f, 48.46068f, sVar0);
		case 78:
			return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2896.522f, 1390.781f, 59.3423f, 0f, 0f, -18.52123f, 170.4325f, 189.3558f, 48.46068f, sVar0);
		default:
			break;
	}
	return func_12(iParam0);
}

bool func_22()
{
	bool bVar0;

	if (iLocal_145 < 13)
	{
		if (!func_47(Local_65[iLocal_145 /*6*/]))
		{
			Local_65[iLocal_145 /*6*/].f_5 = func_48(iLocal_43, Local_65[iLocal_145 /*6*/], Local_65[iLocal_145 /*6*/].f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (func_8(Local_65[iLocal_145 /*6*/].f_5, 0))
			{
				func_49(Local_65[iLocal_145 /*6*/].f_5);
				WEAPON::GIVE_WEAPON_TO_PED(Local_65[iLocal_145 /*6*/].f_5, GET_HASH_KEY("WEAPON_REPEATER_CARBINE"), 100, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				Local_65[iLocal_145 /*6*/].f_4 = TASK::CREATE_SCENARIO_POINT_HASH(func_50(), Local_65[iLocal_145 /*6*/], Local_65[iLocal_145 /*6*/].f_3, 0f, 0, 0);
				bVar0 = true;
				TASK::TASK_POLICE(Local_65[iLocal_145 /*6*/].f_5, bVar0);
				if (TASK::DOES_SCENARIO_POINT_EXIST(Local_65[iLocal_145 /*6*/].f_4))
				{
					TASK::TASK_USE_SCENARIO_POINT(Local_65[iLocal_145 /*6*/].f_5, Local_65[iLocal_145 /*6*/].f_4, 0, 0, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_STAND_GUARD(Local_65[iLocal_145 /*6*/].f_5, Local_65[iLocal_145 /*6*/], Local_65[iLocal_145 /*6*/].f_3, "DEFEND");
				}
			}
		}
		iLocal_145++;
	}
	else
	{
		iLocal_145 = 0;
		return true;
	}
	return false;
}

bool func_23()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (iLocal_144 >= iLocal_146)
	{
		return true;
	}
	else if (iLocal_145 == 0)
	{
	}
	if (iLocal_41 == 38)
	{
		iVar3 = ITEMSET::CREATE_ITEMSET(true);
		LAW::_0x0C392DB374655176(Global_36, 200f, iVar3);
		iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
		ITEMSET::DESTROY_ITEMSET(iVar3);
		if (iVar4 > 16)
		{
			iLocal_144++;
			return false;
		}
	}
	if (!PED::DOES_GROUP_EXIST(Local_44[iLocal_144 /*5*/].f_4))
	{
		Local_44[iLocal_144 /*5*/].f_4 = PED::CREATE_GROUP(1);
	}
	if (iLocal_145 < 3)
	{
		if (!func_51(iLocal_41, &vLocal_149, iLocal_43, iLocal_144))
		{
			vLocal_149 = { func_52(iLocal_41, 1) };
		}
		func_53(&vLocal_149, 50, 10, 0);
		vVar0 = { func_54(vLocal_149, 3f, 1f) };
		Local_44[iLocal_144 /*5*/][iLocal_145] = func_48(iLocal_43, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_49(Local_44[iLocal_144 /*5*/][iLocal_145]);
		PED::SET_PED_CONFIG_FLAG(Local_44[iLocal_144 /*5*/][iLocal_145], 279, true);
		if (iLocal_145 == 0)
		{
			PED::SET_PED_AS_GROUP_LEADER(Local_44[iLocal_144 /*5*/][iLocal_145], Local_44[iLocal_144 /*5*/].f_4, false);
		}
		else
		{
			PED::SET_PED_AS_GROUP_MEMBER(Local_44[iLocal_144 /*5*/][iLocal_145], Local_44[iLocal_144 /*5*/].f_4);
		}
		if (iLocal_145 == 0)
		{
		}
		else if ((iLocal_145 % 3) == 0)
		{
			if (func_56(func_55()) >= 20 || func_56(func_55()) <= 5)
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_44[iLocal_144 /*5*/][iLocal_145], GET_HASH_KEY("WEAPON_MELEE_TORCH"), 100, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_44[iLocal_144 /*5*/][iLocal_145], GET_HASH_KEY("WEAPON_REPEATER_CARBINE"), 100, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		}
		iLocal_145++;
	}
	else
	{
		iLocal_145 = 0;
		iLocal_144++;
	}
	return false;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::DOES_GROUP_EXIST(Local_44[iVar0 /*5*/].f_4))
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (func_8(Local_44[iVar0 /*5*/][iVar1], 0))
				{
					if (iVar1 == 0)
					{
						if (VOLUME::DOES_VOLUME_EXIST(iLocal_152))
						{
							iVar2 = iLocal_152;
						}
						else if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iLocal_41 /*35*/].f_5))
						{
							iVar2 = Global_1888801[iLocal_41 /*35*/].f_5;
						}
						else
						{
							iVar2 = func_12(iLocal_41);
						}
						bVar3 = true;
						TASK::TASK_POLICE(Local_44[iVar0 /*5*/][iVar1], bVar3);
						if (VOLUME::DOES_VOLUME_EXIST(iVar2))
						{
							TASK::TASK_WANDER_IN_VOLUME(Local_44[iVar0 /*5*/][iVar1], iVar2, 3f, 6f, 0);
						}
						else
						{
							TASK::TASK_WANDER_IN_AREA(Local_44[iVar0 /*5*/][iVar1], ENTITY::GET_ENTITY_COORDS(Local_44[iVar0 /*5*/][iVar1], true, false), 100f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
					}
					else
					{
						bVar4 = true;
						TASK::TASK_POLICE(Local_44[iVar0 /*5*/][iVar1], bVar4);
						if (func_8(Local_44[iVar0 /*5*/][0], 0))
						{
							TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_44[iVar0 /*5*/][iVar1], Local_44[iVar0 /*5*/][0], 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
						}
						else
						{
							TASK::TASK_WANDER_IN_AREA(Local_44[iVar0 /*5*/][iVar1], ENTITY::GET_ENTITY_COORDS(Local_44[iVar0 /*5*/][iVar1], true, false), 100f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_25(var uParam0)
{
	return func_57(*uParam0, 1);
}

void func_26(var uParam0)
{
	func_58(uParam0, 0f);
}

float func_27(var uParam0)
{
	if (!func_25(uParam0))
	{
		return 0f;
	}
	if (func_59(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_60() - uParam0->f_1);
}

int func_28(int iParam0)
{
	return ZONE::_GET_MAP_ZONE_AT_COORDS(Global_36, iParam0);
}

int func_29()
{
	switch (iLocal_41)
	{
		case 76:
			return GET_HASH_KEY("VALENTINE");
		case 26:
			return GET_HASH_KEY("STRAWBERRY");
		case 105:
			return GET_HASH_KEY("RHODES");
		case 38:
			return GET_HASH_KEY("BLACKWATER");
		case 78:
			return GET_HASH_KEY("ANNESBURG");
		default:
			break;
	}
	return -1;
}

bool func_30(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_31(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888.f_42339[iParam0] && iParam1) != 0;
}

bool func_32(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_33(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_61(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_34(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_35()
{
	return Global_1572887.f_12;
}

bool func_36()
{
	return func_62(Global_1935630, 4096);
}

bool func_37()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || UISTICKYFEED::_0xC5C395C60B542A3C(1))
	{
		return true;
	}
	return false;
}

bool func_38(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_63(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_64())
	{
		return func_63(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_63(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_41(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_42(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_43(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_44(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_45(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_46(int iParam0)
{
	int iVar0;

	if (!func_45(iParam0))
	{
		return -1;
	}
	iVar0 = func_66(func_65());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

bool func_47(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_48(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_67(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_49(int iParam0)
{
	func_68(iParam0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0, true, true);
	func_69(iParam0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	LAW::_0x819ADD5EF1742F47(iParam0, 32768);
	PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
}

var func_50()
{
	int iVar0[10];

	iVar0[0] = GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC");
	iVar0[1] = GET_HASH_KEY("WORLD_HUMAN_SMOKE");
	iVar0[2] = GET_HASH_KEY("WORLD_HUMAN_STAND_WAITING");
	iVar0[3] = GET_HASH_KEY("WORLD_HUMAN_WAITING_IMPATIENT");
	iVar0[4] = GET_HASH_KEY("WORLD_HUMAN_GUARD_SCOUT");
	iVar0[5] = GET_HASH_KEY("WORLD_HUMAN_BADASS");
	iVar0[6] = GET_HASH_KEY("WORLD_HUMAN_BADASS");
	iVar0[7] = GET_HASH_KEY("WORLD_HUMAN_GUARD_MILITARY");
	iVar0[8] = GET_HASH_KEY("WORLD_HUMAN_GUARD_MILITARY");
	iVar0[9] = GET_HASH_KEY("WORLD_HUMAN_GUARD_MILITARY");
	return iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, 10)];
}

bool func_51(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = iParam3;
	while (iVar1 != iParam3 || !bVar0)
	{
		*uParam1 = { func_70(iParam0, iVar1) };
		if (func_47(*uParam1))
		{
			return false;
		}
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam2, *uParam1, true))
		{
			return true;
		}
		bVar0 = true;
		iVar1++;
		if (iVar1 >= 4)
		{
			iVar1 = 0;
		}
	}
	return false;
}

Vector3 func_52(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_34(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

int func_53(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_71(*uParam0, 0f, 0f, 0f))
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

Vector3 func_54(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_72(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_55()
{
	return Global_1899515;
}

int func_56(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_58(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_60() - fParam1);
	func_73(uParam0, 1);
	func_74(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_59(var uParam0)
{
	return func_57(*uParam0, 2);
}

float func_60()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_61(int iParam0, bool bParam1)
{
	switch (func_75(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_63(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_64()
{
	return Global_1109400.f_245;
}

int func_65()
{
	return Global_1894899.f_2;
}

int func_66(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

void func_67(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_76(iParam1))
		{
			func_77(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_78(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_79(iParam0, 0);
			bVar0 = true;
		}
		func_80(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_68(int iParam0)
{
	if (!func_8(iParam0, 0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
	}
	func_69(iParam0);
}

void func_69(int iParam0)
{
	LAW::_0x819ADD5EF1742F47(iParam0, 2);
	LAW::_0x819ADD5EF1742F47(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::_0xBD75500141E4725C(iParam0, GET_HASH_KEY("LAW"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, GET_HASH_KEY("GROUP_REVOLVER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, GET_HASH_KEY("GROUP_SNIPER"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

Vector3 func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					return -344.5539f, 730.0873f, 116.3921f;
				case 1:
					return -281.1094f, 847.3516f, 118.6537f;
				case 2:
					return -361.3619f, 809.3384f, 114.9999f;
				case 3:
					return -236.5398f, 702.7105f, 112.5291f;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -1761.082f, -398.9954f, 154.8396f;
				case 1:
					return -1795.016f, -366.7957f, 160.3465f;
				case 2:
					return -1834.661f, -433.5942f, 158.4428f;
				case 3:
					return -1796.619f, -448.2619f, 156.146f;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					return 1308.71f, -1258.847f, 76.3559f;
				case 1:
					return 1317.515f, -1303.441f, 75.2424f;
				case 2:
					return 1346.54f, -1354.946f, 77.4856f;
				case 3:
					return 1398.272f, -1314.57f, 76.6552f;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return -798.7501f, -1213.198f, 42.2567f;
				case 1:
					return -768.3777f, -1338.455f, 42.4399f;
				case 2:
					return -822.5508f, -1393.462f, 42.6506f;
				case 3:
					return -885.0519f, -1336.306f, 42.1916f;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					return 2945.202f, 1362.138f, 43.0637f;
				case 1:
					return 2870.698f, 1465.912f, 67.2534f;
				case 2:
					return 2969.26f, 1400.698f, 42.9448f;
				case 3:
					return 2948.088f, 1281.233f, 43.626f;
				default:
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1484.599f, -7136.449f, 72.4505f;
				case 1:
					return 1493.948f, -7104.739f, 74.0429f;
				case 2:
					return 1440.728f, -7117.095f, 73.7227f;
				default:
					break;
			}
			break;
		default:
			return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

bool func_71(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_72(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_75(int iParam0)
{
	if (!func_81(iParam0))
	{
		return -1;
	}
	return func_82(iParam0);
}

bool func_76(int iParam0)
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

void func_77(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_83(iParam0, iParam1))
		{
			if (func_84(iParam0, iParam1))
			{
				if (func_85(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_86(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, GET_HASH_KEY("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_79(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, GET_HASH_KEY("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_80(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

bool func_81(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_82(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_87(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_83(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_84(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_83(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_86(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_87(int iParam0)
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

