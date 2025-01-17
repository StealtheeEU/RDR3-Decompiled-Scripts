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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24[1] = { 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0[3];
	int iVar4;
	bool bVar5;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	func_4(&uLocal_14, 4);
	iVar4 = 0;
	iVar0[0] = VOLUME::_CREATE_VOLUME_CYLINDER(224.4328f, 1906.671f, 203.5702f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[1] = VOLUME::_CREATE_VOLUME_CYLINDER(191.766f, 1831.39f, 198.4614f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[2] = VOLUME::_CREATE_VOLUME_CYLINDER(129.107f, 1878.372f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	bVar5 = true;
	while (bVar5)
	{
		func_5(&uLocal_14);
		BUILTIN::WAIT(0);
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iVar0[iVar4]))
		{
			VOLUME::_DELETE_VOLUME(iVar0[iVar4]);
		}
		iVar4++;
	}
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_34 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLawSpawn_Blocking Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_34, 876.182f, 1657.932f, 195.6166f, 0f, 0f, 38.34586f, 200f, 18.62544f, 17.04508f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_34, 1125.173f, 1763.45f, 195.6166f, 0f, 0f, 23.33992f, 509.4832f, 82.88351f, 17.04508f);
	uLocal_35 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_34);
}

void func_3()
{
	iLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	func_7(iLocal_26, 1);
	iLocal_27 = func_8(iLocal_27);
	func_9(iLocal_27, 0, 0, 1);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	func_7(iLocal_28, 1);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(749.1984f, 1823.562f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	func_10(iLocal_29, 0, 0, 1);
	iLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1701.532f, 1509.786f, 147.5539f, 0f, 0f, 8.3768f, 10.10543f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	func_11(iLocal_30, 0, 0, 1);
	iLocal_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_7(iLocal_31, 1);
	iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(615.3494f, 2147.322f, 222.6459f, 0f, 0f, -47.56889f, 19.68541f, 7.633937f, 7.877471f, "m_volAquatic_Restriction");
	func_12(iLocal_32, 1);
	iLocal_33 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCotorraSprings_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_33, 176.0662f, 1810.708f, 197.5317f, 0f, 0f, 0f, 8.206045f, 8.641531f, 7.990109f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_33, 144.9528f, 1867.019f, 197.9786f, 0f, 0f, 0f, 6.17023f, 6.166595f, 6.148633f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_33, 234.8607f, 1943.437f, 199.2335f, 0f, 0f, 0f, 13.36673f, 12.17811f, 11.10495f);
	func_13(iLocal_33, 0, 0, 0);
	if (func_14() == -1)
	{
		func_15();
	}
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	*uParam0 = 0;
	uParam0->f_2 = func_16(iParam1);
	uParam0->f_5 = { func_17(iParam1) };
}

void func_5(var uParam0)
{
	float fVar0;

	switch (*uParam0)
	{
		case 0:
			fVar0 = func_18(Global_35, uParam0->f_5, 1);
			if (fVar0 > BUILTIN::POW(400f, 2f) || fVar0 < BUILTIN::POW(100f, 2f))
			{
				return;
			}
			if (func_19(uParam0->f_1))
			{
				func_20(uParam0, 1);
			}
			else
			{
				func_20(uParam0, 6);
			}
			break;
		case 1:
			TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", true);
			STREAMING::REQUEST_MODEL(func_21(uParam0->f_1), false);
			PED::_0xED9582B3DA8F02B4(1);
			uParam0->f_9 = 1;
			func_20(uParam0, 2);
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(func_21(uParam0->f_1)))
			{
				return;
			}
			if (!PED::_0x5E420FF293EE5472())
			{
				return;
			}
			fVar0 = func_18(Global_35, uParam0->f_5, 1);
			if (fVar0 < BUILTIN::POW(100f, 2f))
			{
				func_22(uParam0);
				func_20(uParam0, 6);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				uParam0->f_3 = func_23(func_21(uParam0->f_1), uParam0->f_5, 0, 0, 1, uParam0->f_2, 0, 0, 0, 0, 1, 0, 0);
				return;
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, false);
			func_24(uParam0);
			func_20(uParam0, 3);
		case 3:
			func_25(uParam0->f_3);
			PED::_UPDATE_PED_VARIATION(uParam0->f_3, false, true, true, true, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
			FLOCK::_0xAEB97D84CDF3C00B(uParam0->f_3, 1);
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_3, -1, uParam0->f_4, 0, 0);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 44, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 45, 40f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 35, 5f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_3, 36, 20f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, true);
			ENTITY::_0xA91E6CF94404E8C9(uParam0->f_3);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_21(uParam0->f_1));
			func_20(uParam0, 4);
			break;
		case 4:
			if (func_26(uParam0))
			{
				func_20(uParam0, 5);
			}
			break;
		case 5:
			func_27(uParam0->f_1);
			uParam0->f_8 = 1;
			func_22(uParam0);
			func_20(uParam0, 6);
			break;
		case 6:
			break;
	}
}

void func_6()
{
	func_22(&uLocal_14);
	func_28();
	if (func_14() == -1)
	{
		func_29();
	}
}

void func_7(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
	}
}

int func_8(int iParam0)
{
	iParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RIVER_RESTRICTION_GRZ_EAST");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return iParam0;
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_10(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_11(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, iParam0);
	}
}

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_30(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

int func_14()
{
	return Global_1572887.f_12;
}

void func_15()
{
	int iVar0;

	iVar0 = 7;
	iLocal_24[0] = VOLUME::_0x00BBF7CEAE8C666A(1989.044f, 1799.889f, 193.131f, 20f, iVar0, 16384);
}

int func_16(int iParam0)
{
	int iVar0;

	iVar0 = 2;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
			if (func_31())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

Vector3 func_17(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2681.173f, 1935.781f, 101.8587f;
		case 3:
			return -2828.721f, -422.1472f, 186.4498f;
		case 4:
			return 289.5062f, 2288.324f, 313.0248f;
		case 5:
			return -1940.045f, 1743.173f, 234.5481f;
		case 6:
			return -3916.118f, -3672.374f, 47.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_18(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_32(vVar0, vParam1);
}

bool func_19(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_14() != -1)
	{
		return false;
	}
	if (!func_33(15))
	{
		return false;
	}
	iVar0 = func_21(iParam0);
	if (func_34(iVar0))
	{
		if (!func_35())
		{
			return false;
		}
	}
	iVar1 = Global_40.f_11945[iParam0];
	func_37(&iVar1, 0, 0, 0, func_36(iParam0), 0, 0, 0);
	if (!func_38(iVar1, 1))
	{
		return false;
	}
	if (func_39(iParam0))
	{
		return false;
	}
	return true;
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE");
		case 1:
			return GET_HASH_KEY("A_C_HORSE_ANDALUSIAN_PERLINO");
		case 2:
			return GET_HASH_KEY("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC");
		case 3:
			return GET_HASH_KEY("A_C_HORSE_ARABIAN_REDCHESTNUT_PC");
		case 4:
			return GET_HASH_KEY("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC");
		case 5:
			return GET_HASH_KEY("A_C_HORSE_ARABIAN_WHITE");
		case 6:
			return GET_HASH_KEY("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY");
		default:
			break;
	}
	return 0;
}

void func_22(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (uParam0->f_8)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
			uParam0->f_8 = 0;
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_3));
		}
		uParam0->f_3 = 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
	}
	if (uParam0->f_9)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Special_Ambient_Horse", false);
		PED::_0x7D4E70A67A651C71(1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_21(uParam0->f_1));
		uParam0->f_9 = 0;
	}
}

int func_23(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_40(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_24(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = func_41(uParam0->f_1);
	vVar1 = { fVar0, fVar0, fVar0 };
	uParam0->f_4 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_5, func_42(), vVar1, "Special Ambient Horse Unalerted");
}

void func_25(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, GET_HASH_KEY("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, GET_HASH_KEY("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, GET_HASH_KEY("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, GET_HASH_KEY("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, GET_HASH_KEY("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, GET_HASH_KEY("HORSE_SADDLEBAGS"), 0, false);
}

bool func_26(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_3, true))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_THREAT(uParam0->f_3))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, GET_HASH_KEY("EVENT_ANIMAL_DETECTED_THREAT")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, GET_HASH_KEY("EVENT_ANIMAL_TAMING_CALLOUT")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_3, GET_HASH_KEY("EVENT_PLAYER_IN_CLOSE_PROXIMITY_TO_HORSE")))
	{
		return true;
	}
	if (func_39(uParam0->f_1))
	{
		return true;
	}
	return false;
}

void func_27(int iParam0)
{
	Global_40.f_11945[iParam0] = func_43();
}

void func_28()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_34))
	{
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_35);
	}
}

void func_29()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(iLocal_24[iVar0]))
		{
			VOLUME::_0xFDFECC6EE4491E11(iLocal_24[iVar0]);
		}
		iVar0++;
	}
}

void func_30(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_31()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_32(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_33(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_44(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_34(int iParam0)
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

bool func_35()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_37(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_45(*uParam0);
	iVar1 = func_46(*uParam0);
	iVar2 = func_47(*uParam0);
	iVar3 = func_48(*uParam0);
	iVar4 = func_49(*uParam0);
	iVar5 = func_50(*uParam0);
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
	iVar6 = func_51(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_51(iVar1, iVar0);
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
	func_52(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_38(int iParam0, bool bParam1)
{
	return func_54(func_53(), iParam0, bParam1);
}

bool func_39(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_21(iParam0);
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (func_55(iVar1) == iVar0)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_40(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_56(iParam1))
		{
			func_57(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_58(iParam0, 0, 1);
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
			func_59(iParam0, 0);
			bVar0 = true;
		}
		func_60(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_41(int iParam0)
{
	float fVar0;

	fVar0 = 50f;
	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
			fVar0 = 20f;
			break;
	}
	return fVar0;
}

Vector3 func_42()
{
	return 0f, 0f, 0f;
}

var func_43()
{
	return Global_1899515;
}

int func_44(int iParam0, bool bParam1)
{
	switch (func_61(iParam0))
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

var func_45(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_62(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_46(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_47(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_48(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_49(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_50(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_51(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_63(uParam0, iParam6);
	func_64(uParam0, iParam5);
	func_65(uParam0, iParam4);
	func_66(uParam0, iParam3);
	func_67(uParam0, iParam2);
	func_68(uParam0, iParam1);
}

int func_53()
{
	return Global_1899515;
}

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_69(iParam1) || !func_69(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_55(int iParam0)
{
	iParam0 = func_70(iParam0);
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

bool func_56(int iParam0)
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

void func_57(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_71(iParam0, iParam1))
		{
			if (func_72(iParam0, iParam1))
			{
				if (func_73(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_74(iParam0);
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

void func_58(int iParam0, int iParam1, bool bParam2)
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

void func_59(int iParam0, bool bParam1)
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

void func_60(int iParam0, int iParam1)
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

int func_61(int iParam0)
{
	if (!func_75(iParam0))
	{
		return -1;
	}
	return func_76(iParam0);
}

int func_62(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_63(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_64(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_65(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_46(*uParam0);
	iVar1 = func_45(*uParam0);
	if (iParam1 < 1 || iParam1 > func_51(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_66(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_67(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_68(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_50(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_49(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_48(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_45(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_46(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_47(iParam0);
	if (iVar5 < 1 || iVar5 > func_51(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_70(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_71(int iParam0, int iParam1)
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

bool func_72(int iParam0, int iParam1)
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

bool func_73(int iParam0, int iParam1)
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
	if (!func_71(iParam0, iVar0))
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

void func_74(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_75(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_76(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_77(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_77(int iParam0)
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

