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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	int iLocal_66 = 0;
	bool bLocal_67 = false;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_67 = true;
	iLocal_41 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_41) && iLocal_42 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	bool bVar0;
	int iVar1;

	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	VOLUME::_DELETE_VOLUME(iLocal_56);
	bVar0 = func_5(PLAYER::PLAYER_ID(), 1, 0, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_46)
	{
		if (func_6(iLocal_46[iVar1], 0))
		{
			if (!bVar0)
			{
				if (iVar1 == 0)
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar1], 155, false);
				}
				else
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar1], 156, false);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46[iVar1], GET_HASH_KEY("REL_CIVMALE"));
			}
			func_7(&(iLocal_46[iVar1]), 1, 0, 1);
		}
		iVar1++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_45))
	{
		PED::REMOVE_GROUP(iLocal_45);
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iLocal_42 = 1;
	PED::_0xED9582B3DA8F02B4(9);
	switch (iLocal_41)
	{
		case 76:
			vLocal_60 = { -297.8979f, 783.4763f, 117.3506f };
			iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			iLocal_56 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_56, iVar0);
			VOLUME::_0x6E0D3C3F828DA773(iLocal_56, iVar1);
			break;
		case 26:
			vLocal_60 = { -1791.522f, -395.2781f, 159.2376f };
			iLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 105:
			vLocal_60 = { 1323.98f, -1305.5f, 75.625f };
			iLocal_56 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			iLocal_56 = func_8(iLocal_41);
			vLocal_60 = { func_9(iLocal_41, 1) };
			break;
	}
	iVar2 = 0;
	func_10(&iVar2, 0);
	func_10(&iVar2, 29);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_56, 2, iVar2);
}

bool func_3(int iParam0)
{
	if (func_11() != -1)
	{
		return false;
	}
	if (!func_12(iParam0, 8))
	{
		return false;
	}
	if (!func_13(Global_35, func_8(iParam0), 1, 0))
	{
		return false;
	}
	if (!func_5(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	return true;
}

void func_4()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_42)
	{
		case 1:
			if (func_14(Global_35, vLocal_60, 1) < 100f)
			{
				iLocal_44 = func_15(0, 2, -156825994, 1, 0, 0f, 0f, 0f);
				switch (iLocal_41)
				{
					case 76:
						iLocal_43 = GET_HASH_KEY("A_M_M_VALDEPUTYRESIDENT_01");
						break;
					case 26:
						iLocal_43 = GET_HASH_KEY("A_M_M_STRDEPUTYRESIDENT_01");
						break;
					case 105:
						iLocal_43 = GET_HASH_KEY("A_M_M_RHDDEPUTYRESIDENT_01");
						break;
					default:
						iLocal_43 = GET_HASH_KEY("A_M_M_VALDEPUTYRESIDENT_01");
						break;
				}
				iLocal_42 = 2;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_44, false);
			STREAMING::REQUEST_MODEL(iLocal_43, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_44) && STREAMING::HAS_MODEL_LOADED(iLocal_43)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_42 = 4;
			}
			break;
		case 4:
			if (func_16())
			{
				func_17();
				func_18(&uLocal_57);
				iLocal_42 = 5;
			}
			else
			{
				iLocal_42 = 6;
			}
			break;
		case 5:
			if (bLocal_67)
			{
				LAW::_0x7EF2A2FE38D74456(func_19(1), 1);
			}
			fVar0 = 150f;
			iVar3 = 0;
			while (iVar3 < iLocal_46)
			{
				if (func_6(iLocal_46[iVar3], 0))
				{
					iVar2++;
					fVar1 = func_14(iLocal_46[iVar3], Global_36, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_67 = false;
				LAW::_0x7EF2A2FE38D74456(func_19(1), 0);
			}
			if (iVar2 <= 0 || fVar0 >= 150f)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_46)
				{
					if (func_6(iLocal_46[iVar3], 0))
					{
						func_20(iLocal_46[iVar3]);
					}
					iVar3++;
				}
				iLocal_42 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_46)
			{
				if (func_6(iLocal_46[iVar4], 0))
				{
					func_7(&(iLocal_46[iVar4]), 1, 1, 1);
				}
				iVar4++;
			}
			LAW::_0x7EF2A2FE38D74456(func_19(1), 0);
			iLocal_42 = 7;
			break;
	}
}

int func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_21(bParam1, bParam2, bParam3);
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

bool func_6(int iParam0, int iParam1)
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
	if (func_22(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_22(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_22(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_22(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_7(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_8(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

Vector3 func_9(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_23(iParam0))
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

void func_10(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_11()
{
	return Global_1572887.f_12;
}

bool func_12(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
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

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_24(iParam0))
	{
		return 0;
	}
	if (func_25(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_25(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

bool func_16()
{
	float fVar0;

	if (!func_26(iLocal_41, &vLocal_63, iLocal_43))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, vLocal_63);
	if (fVar0 > 10000f)
	{
		return false;
	}
	if (fVar0 < 1225f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(vLocal_63, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_43, vLocal_63, true))
	{
		return false;
	}
	iLocal_66 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_63, 0f, 0f, 0f, 3f, 3f, 3f);
	func_27(iLocal_66, 0, 0, 0, 0, 0);
	func_28(iLocal_66, 0);
	return true;
}

void func_17()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if (!PED::DOES_GROUP_EXIST(iLocal_45))
	{
		iLocal_45 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_45, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_45, 8);
		PED::_0x89E59DBD15E21177(iLocal_45, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_46)
	{
		vVar1 = { func_29(vLocal_63, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_46[iVar0] = func_30(iLocal_43, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[iVar0], 1, false);
			PED::SET_COMBAT_FLOAT(iLocal_46[iVar0], 48, 8f);
			if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[iVar0], GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[iVar0], GET_HASH_KEY("WEAPON_REPEATER_CARBINE"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			iLocal_46[iVar0] = func_30(iLocal_44, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (func_6(iLocal_46[iVar0], 0))
			{
				if ((iVar0 % 4) == 0 && (func_32(func_31()) >= 22 || func_32(func_31()) <= 4))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[iVar0], GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[iVar0], GET_HASH_KEY("WEAPON_MELEE_TORCH"), 999, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_46[iVar0], GET_HASH_KEY("WEAPON_REPEATER_CARBINE"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
		}
		if (func_6(iLocal_46[iVar0], 0))
		{
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(iLocal_46[iVar0], iLocal_56, 0, false, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[iVar0], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_46[iVar0], 58, true);
			PED::_0x815C0074A1BC0D93(iLocal_46[iVar0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_46[iVar0], GET_HASH_KEY("REL_TOWN_MOB"));
			PED::REGISTER_TARGET(iLocal_46[iVar0], Global_35, 1);
			PED::SET_PED_ACCURACY(iLocal_46[iVar0], 60);
			PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 279, true);
			if (iVar0 == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(iLocal_46[iVar0], iLocal_45, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 155, true);
				COMPANION::_0xCBD9EC60495C728C(iLocal_45);
				COMPANION::_0x0F1CD8CA9E65D5F6(iLocal_45, GET_HASH_KEY("CA_SEARCH"));
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_46[iVar0], iLocal_45);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 156, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_46[iVar0], 152, true);
			}
			iVar4 = MAP::BLIP_ADD_FOR_ENTITY(GET_HASH_KEY("BLIP_STYLE_ENEMY"), iLocal_46[iVar0]);
			MAP::BLIP_ADD_MODIFIER(iVar4, GET_HASH_KEY("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			MAP::BLIP_ADD_MODIFIER(iVar4, 1086257954);
			PED::_0x1E017404784AA6A3(iLocal_46[iVar0], GET_HASH_KEY("TOWN_MOB"));
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_46[iVar0], 2);
			PED::SET_PED_COMBAT_RANGE(iLocal_46[iVar0], 1);
			PED::_0x9238A3D970BBB0A9(iLocal_46[iVar0], 2018638702);
			iVar5 = 0;
			func_33(&iVar5, 15);
			func_33(&iVar5, 16);
			COMPANION::_0xDEB369F6AD168C58(iLocal_46[iVar0], iVar5);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	func_34(uParam0, 0f);
}

int func_19(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_20(int iParam0)
{
	if (!func_6(Global_35, 0))
	{
		return;
	}
	if (!func_6(iParam0, 0))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
	func_35(iParam0);
	func_7(&iParam0, 1, 1, 1);
}

int func_21(bool bParam0, bool bParam1, bool bParam2)
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

bool func_22(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_23(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_24(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_25(int iParam0)
{
	int iVar0;

	if (!func_24(iParam0))
	{
		return -1;
	}
	iVar0 = func_37(func_36());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1898147[iParam0];
	}
	return Global_1898130[iParam0];
}

bool func_26(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0[4];
	bool bVar13;
	float fVar14;
	int iVar15;
	float fVar16;

	bVar13 = false;
	switch (iParam0)
	{
		case 76:
			vVar0[0 /*3*/] = { -344.5539f, 730.0873f, 116.3921f };
			vVar0[1 /*3*/] = { -281.1094f, 847.3516f, 118.6537f };
			vVar0[2 /*3*/] = { -361.3619f, 809.3384f, 114.9999f };
			vVar0[3 /*3*/] = { -236.5398f, 702.7105f, 112.5291f };
			break;
		case 26:
			vVar0[0 /*3*/] = { -1761.082f, -398.9954f, 154.8396f };
			vVar0[1 /*3*/] = { -1795.016f, -366.7957f, 160.3465f };
			vVar0[2 /*3*/] = { -1834.661f, -433.5942f, 158.4428f };
			vVar0[3 /*3*/] = { -1796.619f, -448.2619f, 156.146f };
			break;
		case 105:
			vVar0[0 /*3*/] = { 1308.71f, -1258.847f, 76.3559f };
			vVar0[1 /*3*/] = { 1317.515f, -1303.441f, 75.2424f };
			vVar0[2 /*3*/] = { 1346.54f, -1354.946f, 77.4856f };
			vVar0[3 /*3*/] = { 1398.272f, -1314.57f, 76.6552f };
			break;
		default:
			*uParam1 = { func_9(iParam0, 1) };
			return false;
	}
	*uParam1 = { vVar0[0 /*3*/] };
	fVar14 = 999999f;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vVar0[iVar15 /*3*/], 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam2, vVar0[iVar15 /*3*/], true))
		{
			fVar16 = BUILTIN::VDIST2(Global_36, vVar0[iVar15 /*3*/]);
			if (bVar13)
			{
				bVar13 = false;
				*uParam1 = { vVar0[iVar15 /*3*/] };
				fVar16 = fVar14;
			}
			else if (fVar16 < fVar14 && !fVar16 < 1225f)
			{
				*uParam1 = { vVar0[iVar15 /*3*/] };
				fVar16 = fVar14;
			}
		}
		else if (iVar15 == 0)
		{
			bVar13 = true;
		}
		iVar15++;
	}
	return true;
}

void func_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

Vector3 func_29(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_38(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_30(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_39(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_31()
{
	return Global_1899515;
}

int func_32(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_40() - fParam1);
	func_41(uParam0, 1);
	func_42(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_35(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_43(&iVar0);
}

int func_36()
{
	return Global_1894899.f_2;
}

int func_37(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

Vector3 func_38(vector3 vParam0, float fParam3)
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

void func_39(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_44(iParam1))
		{
			func_45(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_46(iParam0, 0, 1);
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
			func_47(iParam0, 0);
			bVar0 = true;
		}
		func_48(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_40()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_43(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_44(int iParam0)
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

void func_45(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_49(iParam0, iParam1))
		{
			if (func_50(iParam0, iParam1))
			{
				if (func_51(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_52(iParam0);
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

void func_46(int iParam0, int iParam1, bool bParam2)
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

void func_47(int iParam0, bool bParam1)
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

void func_48(int iParam0, int iParam1)
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

bool func_49(int iParam0, int iParam1)
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

bool func_50(int iParam0, int iParam1)
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

bool func_51(int iParam0, int iParam1)
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
	if (!func_49(iParam0, iVar0))
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

void func_52(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

