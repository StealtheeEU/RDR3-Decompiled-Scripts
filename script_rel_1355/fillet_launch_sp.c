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
	var uLocal_15 = 1;
	var uLocal_16 = 0;
	var uLocal_17 = 2;
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
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 1097859072;
	var uLocal_40 = 1000;
	var uLocal_41 = 1067450368;
	var uLocal_42 = 5000;
	var uLocal_43 = 42;
	var uLocal_44 = 1103626240;
	var uLocal_45 = 1077936128;
	var uLocal_46 = 1106247680;
	var uLocal_47 = 1103101952;
	var uLocal_48 = 1097859072;
	var uLocal_49 = 1103626240;
	var uLocal_50 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&uLocal_14);
	}
	while (true)
	{
		if (func_2(&uLocal_14, &uScriptParam_0))
		{
			func_1(&uLocal_14);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_3(uParam0->f_3[iVar0]);
		iVar0++;
	}
	func_3(uParam0->f_6);
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_7))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_7, false);
	}
	if (!func_4(Global_1900325.f_3))
	{
		func_5(&(Global_1900325.f_25), 1, 1, 1);
		iVar1 = func_6(Global_1900325.f_2);
		func_5(&iVar1, 1, 0, 1);
		if (PED::_0x62DE46F061CAA468() > 0)
		{
			PED::_0x7D4E70A67A651C71(uParam0->f_1);
		}
		func_7();
		func_8(0);
		func_9(0);
	}
	STREAMING::REMOVE_ANIM_DICT(func_10(1, 0));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, var uParam1)
{
	int iVar0;

	if (func_11(uParam0))
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_12(uParam0, uParam1))
			{
				func_13(&uLocal_14, 1);
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_10(1, 0));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_10(1, 0)))
			{
				return false;
			}
			else if (!func_14())
			{
				return false;
			}
			else if (!PED::_0x5E420FF293EE5472())
			{
				return false;
			}
			else
			{
				func_13(uParam0, 2);
				func_15(func_10(1, 0));
			}
			break;
		case 2:
			if (func_16(uParam0) && func_17(uParam0))
			{
				func_18(0);
				func_13(uParam0, 3);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) || func_19(uParam0))
			{
				func_20(Global_1900325.f_2, 0);
				func_13(uParam0, 4);
			}
			else if (!func_21(Global_1900325.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && PED::IS_PED_USING_SCENARIO_HASH(Global_1900325.f_25, GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE")))
				{
					func_22(Global_1900325.f_2);
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				PED::_0xAAB050DA48B57978(Global_1900325.f_25, "Flee_Panic_With_Glances", Global_35, -1, 4);
				PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Global_1900325.f_25, Global_36, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325.f_25, false);
				ANIMSCENE::_0x99B2A2E3655DEAF1(Global_1900325.f_25, "ClosestScenario");
				TASK::TASK_SMART_FLEE_PED(Global_1900325.f_25, Global_35, 100000f, 100000, 0, 3f, 0);
				PED::SET_PED_KEEP_TASK(Global_1900325.f_25, true);
			}
			func_8(0);
			Global_1900325.f_24 = 0;
			func_20(Global_1900325.f_2, 0);
			if (func_23(Global_1900325.f_2, &iVar0))
			{
				func_24(iVar0);
			}
			func_18(1);
			func_25(Global_1900325, 256);
			func_25(Global_1900325, 128);
			Global_1900325.f_25 = 0;
			func_13(uParam0, 5);
			break;
		case 5:
			break;
	}
	return false;
}

void func_3(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_4(int iParam0)
{
	int iVar0;

	iVar0 = func_26(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_5(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
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

int func_6(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_6;
}

void func_7()
{
	STREAMING::_0x4EDDD9E9CA5AF985(GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE"));
}

void func_8(int iParam0)
{
	if (Global_1900325.f_23 != iParam0)
	{
		Global_1900325.f_23 = iParam0;
	}
}

void func_9(int iParam0)
{
	int iVar0;

	iVar0 = func_29(iParam0);
	if (Global_1900325.f_24 != iVar0)
	{
		Global_1900325.f_24 = iVar0;
	}
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return "mini_games@fivefingerfillet_launch";
	}
	else if (iParam1 == 1)
	{
		return "mini_games@fivefingerfillet_female";
	}
	return "mini_games@fivefingerfillet";
}

bool func_11(var uParam0)
{
	float fVar0;

	if (func_27() != -1)
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		if (func_4(Global_1900325.f_3))
		{
			return true;
		}
		if (!func_30(Global_1900325))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
			}
			return true;
		}
		if (func_31(Global_1900325.f_4, 4194304))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
			}
			return true;
		}
		if (Global_1935630.f_12 == 0)
		{
			fVar0 = func_32(Global_1900325);
			if (BUILTIN::VDIST2(Global_36, Global_1900325.f_5) > (fVar0 * fVar0))
			{
				return true;
			}
		}
	}
	if (func_33())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
		{
			TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
		}
		return true;
	}
	return false;
}

bool func_12(var uParam0, var uParam1)
{
	if (uParam1->f_7 == -1)
	{
		return false;
	}
	Global_1900325.f_37 = 0;
	func_34(uParam1->f_1, *uParam1, uParam1->f_2, uParam1->f_8, uParam1->f_7);
	func_35(uParam1->f_3, uParam1->f_6);
	PED::_0xED9582B3DA8F02B4(uParam0->f_1);
	func_22(Global_1900325.f_2);
	func_36(&(uParam0->f_8), 1, 1, 1);
	func_37(&(uParam0->f_8));
	func_38(&(uParam0->f_8), 1);
	func_39(&(uParam0->f_8), 1);
	func_40(&(uParam0->f_8), 1);
	func_41(&(uParam0->f_8), 1);
	func_42(&(uParam0->f_8), 5f);
	func_43(&(uParam0->f_8), 5);
	func_44(&(uParam0->f_8), 0);
	func_45(&(uParam0->f_8), 0);
	func_46(&(uParam0->f_8), 0);
	func_47(&(uParam0->f_8), 0);
	func_48(&(uParam0->f_8), 0);
	func_49(&(uParam0->f_8), 0);
	func_50(&(uParam0->f_8), 0);
	func_51(&(uParam0->f_8), 0);
	func_52(&(uParam0->f_8), 0);
	func_53(&(uParam0->f_8), 0);
	func_54(&(uParam0->f_8), 0);
	func_55(&(uParam0->f_8), 0);
	func_56(&(uParam0->f_8), 0);
	func_57(&(uParam0->f_8), 0);
	func_58(&(uParam0->f_8), 0);
	func_59(&(uParam0->f_8), 0);
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		func_60(Global_1900325, Global_1900325.f_5, Global_1900325.f_8, 1056964608 /* Float: 0.5f */, 0.12f);
	}
	else
	{
		func_61(Global_1900325, Global_1900325.f_5, 1073741824 /* Float: 2f */, 1);
	}
	Global_1900325.f_19 = { 0f, 0f, 0.5f };
	return true;
}

void func_13(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_14()
{
	STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE"), 9, 0, 0);
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE"), false))
	{
		return false;
	}
	return true;
}

void func_15(char* sParam0)
{
	vector3 vVar0;
	int iVar3;

	Global_1900325.f_16[0] = (Global_1900325.f_8 - 90f);
	Global_1900325.f_16[1] = (Global_1900325.f_8 + 90f);
	vVar0 = { Global_1900325.f_5 };
	vVar0.f_2 = (vVar0.z - 0.8f);
	iVar3 = 0;
	while (iVar3 < 2)
	{
		Global_1900325.f_9[iVar3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam0, "idle_01", vVar0, 0f, 0f, Global_1900325.f_16[iVar3], 0f, 2) };
		Global_1900325.f_9[iVar3 /*3*/].f_2 = vVar0.z;
		iVar3++;
	}
	if (Global_1900325.f_1 == 1)
	{
		Global_1900325.f_34 = 1;
	}
	else
	{
		Global_1900325.f_34 = 0;
	}
	Global_1900325.f_37 = 1;
}

bool func_16(var uParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = (0.25f * 2f);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_3[iVar1]))
		{
			func_62(&(uParam0->f_3[iVar1]), Global_1900325.f_9[iVar1 /*3*/], 0f, 0f, 0f, fVar0, fVar0, 2.5f);
		}
		iVar1++;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		func_63(&(uParam0->f_6), Global_1900325.f_5, 0f, 0f, Global_1900325.f_8, 4.5f, 4.5f, 2.5f);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6) && !PED::_0x91A5F9CBEBB9D936(uParam0->f_7))
	{
		uParam0->f_7 = PED::_0x4C39C95AE5DB1329(uParam0->f_6, func_27() == 0, 15);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && !func_64())
	{
		func_65(uParam0->f_6, 0);
	}
	return (((VOLUME::DOES_VOLUME_EXIST(uParam0->f_3[0]) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_3[1])) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_6)) && PED::_0x91A5F9CBEBB9D936(uParam0->f_7));
}

bool func_17(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && func_64())
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		STREAMING::REQUEST_MODEL(GET_HASH_KEY("A_M_M_FIVEFINGERFILLETPLAYERS_01"), false);
		if (!STREAMING::HAS_MODEL_LOADED(GET_HASH_KEY("A_M_M_FIVEFINGERFILLETPLAYERS_01")))
		{
			return false;
		}
		func_65(uParam0->f_6, 0);
		vVar0 = { Global_1900325.f_9[Global_1900325.f_34 /*3*/] };
		vVar0 = { vVar0 + Global_1900325.f_19 };
		Global_1900325.f_25 = func_66(GET_HASH_KEY("A_M_M_FIVEFINGERFILLETPLAYERS_01"), vVar0, Global_1900325.f_16[Global_1900325.f_34], 1, 1, 1, 0, 0, 0, 0, 1, 0, 0);
		iVar3 = func_67(Global_1900325, Global_1900325.f_4, Global_1900325.f_23);
		PED::_SET_PED_BODY_COMPONENT(Global_1900325.f_25, iVar3);
		PED::_UPDATE_PED_VARIATION(Global_1900325.f_25, false, true, true, true, false);
		func_68(Global_1900325.f_25, Global_1900325.f_24);
		PED::SET_LOOTING_FLAG(Global_1900325.f_25, 0, true);
		PED::SET_LOOTING_FLAG(Global_1900325.f_25, 1, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Global_1900325.f_25, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GET_HASH_KEY("A_M_M_FIVEFINGERFILLETPLAYERS_01"));
		func_9(0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325.f_25, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1900325.f_25, GET_HASH_KEY("REL_MINIGAME_PLAYER"));
	PED::SET_PED_CONFIG_FLAG(Global_1900325.f_25, 130, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1900325.f_25, 17, true);
	StringCopy(&(Global_1900325.f_26), func_69(Global_1900325.f_23), 64);
	AUDIO::SET_AMBIENT_VOICE_NAME(Global_1900325.f_25, &(Global_1900325.f_26));
	func_20(Global_1900325.f_2, Global_1900325.f_25);
	uParam0->f_2 = 1;
	if (func_70(Global_1900325, 16))
	{
		func_25(Global_1900325, 16);
	}
	func_71(Global_1900325.f_25);
	return true;
}

void func_18(int iParam0)
{
	if (Global_1900325.f_35 != iParam0)
	{
		Global_1900325.f_35 = iParam0;
	}
}

bool func_19(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 == 1 && func_72(Global_1900325.f_25, 0, &(uParam0->f_8), &(uParam0->f_36), 0, 0))
	{
		return true;
	}
	if (Global_1935630.f_17 > 0)
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return true;
	}
	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::GET_PED_IS_GRAPPLED(Global_35))
	{
		return true;
	}
	uVar0 = func_73(Global_1900325.f_25);
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &uVar0, true, true) && PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG")))
	{
		return true;
	}
	if (uParam0->f_2 == 1)
	{
		if (TASK::IS_PED_EXITING_SCENARIO(Global_1900325.f_25, true) || !PED::IS_PED_USING_SCENARIO_HASH(Global_1900325.f_25, GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE")))
		{
			return true;
		}
	}
	return false;
}

void func_20(int iParam0, int iParam1)
{
	int iVar0;

	if (func_27() != -1)
	{
		return;
	}
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar0 /*20*/].f_6 = iParam1;
}

bool func_21(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return true;
	}
	if (!func_23(iParam0, &iVar0))
	{
		return false;
	}
	if (Global_1392915[iVar0 /*12*/].f_1 == 3 && Global_1900325.f_24 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_15;
}

void func_22(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return;
	}
	if (!func_23(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
}

bool func_23(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

int func_24(int iParam0)
{
	if (func_74(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		func_75(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_25(int iParam0, int iParam1)
{
	if (func_70(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] = (Global_1899528.f_3[iParam0] - (Global_1899528.f_3[iParam0] && iParam1));
}

int func_26(int iParam0)
{
	if (!func_76(iParam0))
	{
		return -1;
	}
	return func_77(iParam0);
}

int func_27()
{
	return Global_1572887.f_12;
}

int func_28(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

int func_29(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 > 3)
	{
		iParam0 = 0;
	}
	if (Global_1900325.f_4 == 76)
	{
		if (iParam0 == 0)
		{
			iVar0 = 50;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 200;
		}
		else
		{
			iVar0 = 400;
		}
	}
	else if (Global_1900325.f_4 == 26)
	{
		if (iParam0 == 0)
		{
			iVar0 = 75;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 150;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 300;
		}
		else
		{
			iVar0 = 600;
		}
	}
	else if (Global_1900325.f_4 == 92)
	{
		if (iParam0 == 0)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 200;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 400;
		}
		else
		{
			iVar0 = 800;
		}
	}
	else if (iParam0 == 0)
	{
		iVar0 = 10;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 20;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 80;
	}
	return iVar0;
}

bool func_30(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (func_78(Global_1898330[iVar0]) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_31(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_33()
{
	return Global_1898164.f_163;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1900325 = uParam0;
	Global_1900325.f_1 = uParam1;
	Global_1900325.f_2 = uParam2;
	Global_1900325.f_3 = uParam3;
	Global_1900325.f_4 = uParam4;
}

void func_35(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;

	Global_1900325.f_5 = { vParam0 };
	Global_1900325.f_8 = uParam3;
	vVar0 = { Global_1900325.f_5 };
	vVar0.f_2 = (vVar0.z + 0.1f);
	iVar5 = MISC::_0xBBE5B63EFFB08E68(vVar0, 17, &(vVar0.f_2), &uVar3, &uVar4);
	if (iVar5 == 1)
	{
		fVar6 = (Global_1900325.f_5.f_2 - vVar0.z);
		if (fVar6 > 0.1f || fVar6 < -0.1f)
		{
		}
		else
		{
			Global_1900325.f_5.f_2 = vVar0.z;
		}
	}
}

void func_36(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_79(uParam0, 268435456);
	}
	else
	{
		func_80(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_79(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_80(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_79(uParam0, 536870912);
	}
	else
	{
		func_80(uParam0, 536870912);
	}
}

void func_37(var uParam0)
{
	func_82(uParam0, (func_81(uParam0) - 6f));
	func_83(uParam0, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 4);
	}
	else
	{
		func_79(&(uParam0->f_1), 4);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2);
	}
	else
	{
		func_79(&(uParam0->f_1), 2);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 8);
	}
	else
	{
		func_79(&(uParam0->f_1), 8);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16);
	}
	else
	{
		func_79(&(uParam0->f_1), 16);
	}
}

void func_42(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 256);
	}
	else
	{
		func_79(&(uParam0->f_1), 256);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2048);
	}
	else
	{
		func_79(&(uParam0->f_1), 2048);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 1024);
	}
	else
	{
		func_79(&(uParam0->f_1), 1024);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16384);
	}
	else
	{
		func_79(&(uParam0->f_1), 16384);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 524288);
	}
	else
	{
		func_79(&(uParam0->f_1), 524288);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 1);
	}
	else
	{
		func_79(&(uParam0->f_1), 1);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 128);
	}
	else
	{
		func_79(&(uParam0->f_1), 128);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 131072);
	}
	else
	{
		func_79(&(uParam0->f_1), 131072);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 4);
	}
	else
	{
		func_80(uParam0, 4);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1048576);
	}
	else
	{
		func_80(uParam0, 1048576);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 262144);
	}
	else
	{
		func_80(uParam0, 262144);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 8);
	}
	else
	{
		func_80(uParam0, 8);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 32);
	}
	else
	{
		func_80(uParam0, 32);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 16);
	}
	else
	{
		func_80(uParam0, 67108864);
		func_80(uParam0, 16);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 64);
	}
	else
	{
		func_80(uParam0, 64);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1024);
	}
	else
	{
		func_80(uParam0, 1024);
	}
}

void func_60(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	var uVar7;

	iVar1 = func_84(iParam0);
	if (!func_85(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_86(iParam0, vParam1, fParam4, iVar0, iParam5);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_UPRIGHT(iVar2, 90f))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			uVar7 = vVar3.z;
			if (func_87(iParam0, vParam1, fParam4, iVar0, &vVar3, &fVar6, 0))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, fParam6, 0f) };
				vVar3.f_2 = uVar7;
				fVar6 = ENTITY::GET_ENTITY_HEADING(iVar2);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar2, vVar3, fVar6, true, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
			}
		}
		iVar0++;
	}
}

void func_61(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0;
	func_88(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar5))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar5));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_89(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar1))
					{
						if ((func_27() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || func_27() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(iVar1, 90f))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		ITEMSET::_CLEAR_ITEMSET(iVar5);
		ITEMSET::DESTROY_ITEMSET(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_3(iVar0);
}

void func_62(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_90());
	}
}

void func_63(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_90());
	}
}

bool func_64()
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!CAM::IS_SCREEN_FADED_IN() || func_70(Global_1900325, 16))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(Global_1900325.f_5, Global_36);
	fVar1 = func_91(Global_1900325);
	fVar2 = (fVar1 - 10f);
	if (fVar0 < 10f || (fVar0 < fVar2 && CAM::IS_SPHERE_VISIBLE(Global_1900325.f_5, 1f)))
	{
		return true;
	}
	return false;
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_66(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_92(iVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_EMERALDRANCH_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_EMERALDRANCH_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_EMERALDRANCH_VAR_03");
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_EMERALDRANCH_VAR_01");
			case 5:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_03");
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_01");
			case 38:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_03");
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_01");
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_03");
					case 3:
						return -478015708;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_01");
			case 26:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_STRAWBERRY_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_STRAWBERRY_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_STRAWBERRY_VAR_03");
					case 3:
						return 496214832;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_STRAWBERRY_VAR_01");
			case 92:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_03");
					case 3:
						return -1887776194;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_01");
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_03");
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_SAINTDENIS_VAR_01");
			case 38:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_03");
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_BLACKWATER_VAR_01");
			case 115:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_TUMBLEWEED_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_TUMBLEWEED_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_TUMBLEWEED_VAR_03");
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_TUMBLEWEED_VAR_01");
			case 76:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_03");
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_VALENTINE_VAR_01");
			case 92:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_03");
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_VANHORN_VAR_01");
			case 105:
				switch (iParam2)
				{
					case 0:
						return GET_HASH_KEY("META_OUTFIT_RHODES_VAR_01");
					case 1:
						return GET_HASH_KEY("META_OUTFIT_RHODES_VAR_02");
					case 2:
						return GET_HASH_KEY("META_OUTFIT_RHODES_VAR_03");
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return GET_HASH_KEY("META_OUTFIT_RHODES_VAR_01");
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_93(iParam0);
		return func_94(iParam0, GET_HASH_KEY("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

char* func_69(int iParam0)
{
	var uVar0;
	int iVar2;

	switch (Global_1900325.f_4)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 1:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 2:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 3:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				default:
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 0:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 1:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 2:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 3:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 1:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 2:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 3:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				default:
					break;
			}
			break;
	}
	uVar0 = 1;
	func_95(Global_1900325.f_25, Global_1900325, &uVar0, 0, &iVar2);
	return func_96(iVar2);
}

bool func_70(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] && iParam1) != 0;
}

void func_71(int iParam0)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE")))
	{
		return;
	}
	vVar0 = { Global_1900325.f_9[Global_1900325.f_34 /*3*/] };
	vVar0 = { vVar0 + Global_1900325.f_19 };
	TASK::CLEAR_PED_TASKS(iParam0, true, false);
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, GET_HASH_KEY("WORLD_CAMP_JAVIER_KNIFE"), vVar0, Global_1900325.f_16[Global_1900325.f_34], -1, false, true, 0, 0f, false);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
}

bool func_72(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_97(uParam2, 1, iVar0);
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
			if (func_98(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_99(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_100(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_101(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_102(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_103(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_99(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_104(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_105(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_99(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_106(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_99(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_107(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_107(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_99(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_108(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_109(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_110(uParam2, 4000))
				{
					if ((func_111(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_112(uParam2, bParam0)) && func_113(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_99(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_111(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_112(uParam2, bParam0)) && func_113(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_114(bParam0, Global_1935630.f_41))
							{
								func_115();
								*uParam3 = 2;
								func_99(bParam0, uParam2, *uParam3);
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
						if (func_114(bParam0, Global_1935630.f_41))
						{
							func_115();
							*uParam3 = 2;
							func_99(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_116(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_117() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_115();
						*uParam3 = 2;
						func_99(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_118())
					{
						if (func_114(bParam0, Global_1935630.f_42))
						{
							func_115();
							*uParam3 = 2;
							func_99(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_119(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_99(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_120(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_121(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_99(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_122(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_123(uParam2, 4000))
				{
					if (func_124(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_99(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_125(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_99(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_126(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_99(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

var func_73(var uParam0)
{
	return uParam0;
}

bool func_74(int iParam0)
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

void func_75(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_74(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_127(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_128(iVar0);
	*uParam0 = 0;
}

bool func_76(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_77(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_129(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_78(int iParam0)
{
	if (func_130(iParam0) != 4)
	{
		return -1;
	}
	return func_131(iParam0);
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_81(var uParam0)
{
	return uParam0->f_24;
}

void func_82(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1);
	}
	else
	{
		func_80(uParam0, 1);
	}
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 5;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

bool func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_86(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;

	if (!func_132(iParam0, vParam1, fParam4, iParam5, &vVar0, 1))
	{
		return 0;
	}
	fVar6 = (fParam6 * 2f);
	iVar8 = 0;
	fVar10 = -1f;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		func_62(&iVar9, vVar0, 0f, 0f, 0f, fVar6, fVar6, 1.2f);
		iVar5 = ENTITY::_0x886171A12F400B89(iVar9, iVar3, 3);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar7 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3));
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (func_89(iParam0, ENTITY::GET_ENTITY_MODEL(iVar7)))
				{
					fVar11 = func_133(vVar0, ENTITY::GET_ENTITY_COORDS(iVar7, true, false));
					if (fVar10 == -1f || fVar11 < fVar10)
					{
						iVar8 = iVar7;
						fVar10 = fVar11;
					}
				}
			}
			iVar4++;
		}
		func_3(iVar9);
		ITEMSET::DESTROY_ITEMSET(iVar3);
	}
	return iVar8;
}

bool func_87(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;

	if (!func_134(iParam0))
	{
		return false;
	}
	if (!func_135(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*iParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!func_136(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*fParam7 = (fParam4 + fVar3);
	if (*fParam7 > 360f)
	{
		*fParam7 = (*fParam7 - 360f);
	}
	if (*fParam7 < -360f)
	{
		*fParam7 = (*fParam7 + 360f);
	}
	return true;
}

void func_88(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_90());
	}
}

bool func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case GET_HASH_KEY("P_WINDSORCHAIR03X"):
					return true;
				case GET_HASH_KEY("P_WINDSORCHAIR01X"):
				case GET_HASH_KEY("P_CHAIR38X"):
					return true;
				case GET_HASH_KEY("P_CHAIR24X"):
				case GET_HASH_KEY("P_CHAIR22X"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == GET_HASH_KEY("P_CHAIR13X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR05X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR06X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_WINDSORCHAIR03X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR12X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR14X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR11X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR26X"))
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == GET_HASH_KEY("P_CHAIR02X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_STOOL02X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_STOOL03X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_STOOLWINTER01X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_STOOLFOLDING01X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR_BARREL04B"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIRFOLDING02X"))
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == GET_HASH_KEY("P_CHAIR06X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("S_CRATESEAT03X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIR_CRATE02X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_STOOLFOLDING01X"))
			{
				return true;
			}
			if (iParam1 == GET_HASH_KEY("P_CHAIRFOLDING02X"))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

char* func_90()
{
	return "unnamed";
}

float func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 35f;
		case 0:
			return 30f;
		case 3:
			return 60f;
		case 5:
			return 60f;
		case 4:
			return 60f;
		case 6:
			return 60f;
		default:
			break;
	}
	return 40f;
}

void func_92(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (func_137(bParam1))
		{
			func_138(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_139(iParam0, 0, 1);
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
			func_140(iParam0, 0);
			bVar0 = true;
		}
		func_141(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_93(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
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

var func_94(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_95(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	func_142(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = (*uParam2)[iVar7];
		if (!func_143(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam2)[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = (*uParam2)[iVar7];
			if (func_143(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if ((*uParam2)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_143(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if ((*uParam2)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

void func_97(var uParam0, bool bParam1, int iParam2)
{
	func_144(iParam2);
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
		uParam0->f_13 = func_145(0);
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
							func_79(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_146(1))
						{
							func_79(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_146(1) || *uParam0 & 8192 != 0))
				{
					func_80(uParam0, 33554432);
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
			if (func_147(uParam0))
			{
				uParam0->f_15 = func_117();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_117() - uParam0->f_15) > 500)
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
	func_148(uParam0);
}

bool func_98(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

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
			bVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(bVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_149(bParam0, uParam1, bVar2))
			{
				return false;
			}
			if (func_150(bParam0, bVar2) <= func_151(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_99(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_152(iParam2, 1, 1, 1, 0))
	{
		func_79(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_153(uParam1, 1);
	func_154();
}

bool func_100(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_155(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_156(uParam1);
			if (func_157(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_158(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_153(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_153(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_101(bool bParam0, bool bParam1, var uParam2)
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
	if (func_159(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_156(uParam2);
		if (func_157(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_158(uParam2)
				{
					func_153(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_102(bool bParam0, var uParam1)
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
	if (func_149(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_158(uParam1)
		{
			fVar3 = func_156(uParam1);
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

int func_103(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_160(bParam1, bParam2, bParam3);
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

bool func_104(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_105(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_161(uParam2);
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
			if (func_113(uParam2, bParam1))
			{
				func_153(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_106(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_162(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_113(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_153(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_107(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_163(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_153(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_153(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_164(bParam1, vVar0, vVar4))
					{
						func_153(uParam2, 1);
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
					func_153(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_164(bParam1, vVar0, vVar7))
					{
						func_153(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_108(bool bParam0, var uParam1)
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
		if (!func_149(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_165(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_166(Global_1935630.f_34[iVar0]))
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
			if (func_167(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_168(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_169(uParam1, bParam0, fVar1, iVar0))
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

bool func_109(bool bParam0, var uParam1)
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

bool func_110(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_111(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_170(iVar0, &iVar2))
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
	if (func_171(iVar0, bParam0))
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

int func_112(var uParam0, bool bParam1)
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

bool func_113(var uParam0, bool bParam1)
{
	if (func_172(uParam0))
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

bool func_114(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_173(bParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, iParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_115()
{
}

bool func_116(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_174(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_117();
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
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_175(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, bParam1))
							{
								uParam0->f_9 = func_117();
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

int func_117()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_118()
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
	if ((func_117() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_119(var uParam0, bool bParam1)
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
	fVar0 = func_151(uParam0);
	if (uParam0->f_12 > func_81(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_176(bParam1);
	iVar1 = func_177(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_120(bool bParam0, bool bParam1, var uParam2)
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
	return func_178(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_121(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

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
		if (func_179(bParam0, uParam1, 1))
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
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(bVar5))
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
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_180(uParam1, bParam0))
					{
						if (func_175(bVar4, Global_36, 1) < 7f)
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

bool func_122(bool bParam0, var uParam1)
{
	if (!func_181(0))
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

bool func_123(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_124(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_125(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_117();
	}
	else if (func_117() - uParam1->f_4) > func_182(uParam1)
	{
		return func_183(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_126(var uParam0, bool bParam1)
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

var func_127(var uParam0)
{
	return uParam0;
}

void func_128(int iParam0)
{
	if (!func_184(iParam0))
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

int func_129(int iParam0)
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

int func_130(int iParam0)
{
	if (!func_76(iParam0))
	{
		return 0;
	}
	return func_186(func_185(iParam0));
}

int func_131(int iParam0)
{
	if (!func_76(iParam0))
	{
		return -1;
	}
	return func_187(func_185(iParam0));
}

bool func_132(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;

	if (!func_134(iParam0))
	{
		return false;
	}
	if (!func_135(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return true;
}

float func_133(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_135(int iParam0, int iParam1, var uParam2)
{
	float fVar0;

	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return true;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return true;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return true;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return true;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return true;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_136(int iParam0, int iParam1, float fParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 120f;
					return true;
				case 2:
					*fParam2 = 60f;
					return true;
				case 3:
					*fParam2 = 0f;
					return true;
				case 4:
					*fParam2 = -60f;
					return true;
				case 5:
					*fParam2 = -120f;
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180f);
					return true;
				case 1:
					*fParam2 = (-157.4087f + 180f);
					return true;
				case 2:
					*fParam2 = (157.5913f + 180f);
					return true;
				case 3:
					*fParam2 = (112.5913f + 180f);
					return true;
				case 4:
					*fParam2 = 180f;
					return true;
				default:
					break;
			}
			return false;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return true;
				case 1:
					*fParam2 = 0f;
					return true;
				case 2:
					*fParam2 = 90f;
					return true;
				case 3:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90f;
					return true;
				case 1:
					*fParam2 = 270f;
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

bool func_137(bool bParam0)
{
	switch (bParam0)
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

void func_138(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_188(iParam0, iParam1))
		{
			if (func_189(iParam0, iParam1))
			{
				if (func_190(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_191(iParam0);
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

void func_139(int iParam0, int iParam1, bool bParam2)
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

void func_140(int iParam0, bool bParam1)
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

void func_141(int iParam0, int iParam1)
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

int func_142(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case GET_HASH_KEY("A_M_M_FIVEFINGERFILLETPLAYERS_01"):
				func_192(uParam2, 43);
				*iParam3++;
				func_192(uParam2, 44);
				*iParam3++;
				func_192(uParam2, 54);
				*iParam3++;
				func_192(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_192(uParam2, 43);
				*iParam3++;
				func_192(uParam2, 44);
				*iParam3++;
				func_192(uParam2, 54);
				*iParam3++;
				func_192(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case GET_HASH_KEY("A_M_M_CARDGAMEPLAYERS_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				func_192(uParam2, 82);
				*iParam3++;
				func_192(uParam2, 84);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_VALTOWNFOLK_01"):
			case GET_HASH_KEY("A_M_M_VALTOWNFOLK_02"):
			case GET_HASH_KEY("S_M_M_VALCOWPOKE_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				func_192(uParam2, 82);
				*iParam3++;
				func_192(uParam2, 84);
				*iParam3++;
				break;
			case GET_HASH_KEY("U_M_M_VALGUNSMITH_01"):
				func_192(uParam2, 84);
				*iParam3++;
				break;
			case GET_HASH_KEY("U_M_M_VALDOCTOR_01"):
				func_192(uParam2, 82);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_BLWUPPERCLASS_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_O_BLWUPPERCLASS_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case GET_HASH_KEY("U_M_O_BLWGENERALSTOREOWNER_01"):
				func_192(uParam2, 86);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_BLWFOREMAN_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_O_SDUPPERCLASS_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_RHDUPPERCLASS_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_RHDFOREMAN_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				break;
			case GET_HASH_KEY("U_M_M_RHDGENSTOREOWNER_01"):
				func_192(uParam2, 80);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_VHTTHUG_01"):
			case GET_HASH_KEY("A_M_M_VHTTOWNFOLK_01"):
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 62);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 79);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_BLWLABORER_01"):
			case GET_HASH_KEY("A_M_M_BLWLABORER_02"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_03"):
			case GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_02"):
			case GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 34);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_EMRFARMHAND_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case GET_HASH_KEY("A_M_M_TUMTOWNFOLK_01"):
			case GET_HASH_KEY("A_M_M_TUMTOWNFOLK_02"):
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 74);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case GET_HASH_KEY("S_M_M_BLWDEALER_01"):
			case GET_HASH_KEY("S_M_M_RHDDEALER_01"):
				func_192(uParam2, 87);
				*iParam3++;
				func_192(uParam2, 89);
				*iParam3++;
				func_192(uParam2, 90);
				*iParam3++;
				func_192(uParam2, 91);
				*iParam3++;
				break;
			case GET_HASH_KEY("S_M_M_VHTDEALER_01"):
				func_192(uParam2, 62);
				*iParam3++;
				func_192(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

bool func_143(var uParam0, int iParam1)
{
	return MISC::_0x8F4F050054005C27(uParam0, iParam1);
}

void func_144(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_193();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_194(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case GET_HASH_KEY("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_145(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_146(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_195(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_27() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_196(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_196(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_177(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_148(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_197(uParam0);
	}
}

bool func_149(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam2))
	{
		iVar1 = func_177(bParam2);
	}
	else
	{
		iVar1 = func_176(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_177(bParam0);
	}
	else
	{
		iVar0 = func_176(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_198(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam2);
	switch (iVar2)
	{
		case GET_HASH_KEY("REL_CIVMALE"):
		case GET_HASH_KEY("REL_RE_VICTIM"):
		case GET_HASH_KEY("REL_CIVNATIVE"):
		case GET_HASH_KEY("REL_PINKERTONS"):
		case GET_HASH_KEY("REL_GUAMA_LAW"):
		case GET_HASH_KEY("REL_COP"):
		case GET_HASH_KEY("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case GET_HASH_KEY("REL_CIVMALE"):
				case GET_HASH_KEY("REL_RE_VICTIM"):
				case GET_HASH_KEY("REL_CIVNATIVE"):
				case GET_HASH_KEY("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_150(bool bParam0, bool bParam1)
{
	return func_173(bParam0, bParam1, 1, 1);
}

float func_151(var uParam0)
{
	return uParam0->f_26;
}

bool func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 134217728);
	}
	else
	{
		func_80(uParam0, 134217728);
	}
}

void func_154()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_155(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_173(bVar0, bParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(bVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_199(bVar0, 0)))
		{
			if (func_200(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_156(var uParam0)
{
	return uParam0->f_17;
}

bool func_157(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_198(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_158(var uParam0)
{
	return uParam0->f_18;
}

bool func_159(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(bVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_199(bVar0, 0)))
		{
			if (func_201(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_160(bool bParam0, bool bParam1, bool bParam2)
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

float func_161(var uParam0)
{
	return uParam0->f_23;
}

int func_162(var uParam0)
{
	return uParam0->f_21;
}

int func_163(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_164(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_202(bParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(bParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_165(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_203(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_167(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_204(bParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_168(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_204(bParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_169(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_204(bParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(bParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(bParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_170(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == bParam1)
	{
		return true;
	}
	if (func_205(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == bParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_172(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_174(int iParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_175(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_175(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

int func_176(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_177(bool bParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(bParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_178(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_170(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(bParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, bParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_173(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), bParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_173(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, bParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_179(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_195(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !func_180(uParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !func_180(uParam1, bVar1))
				{
					if (func_175(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_180(var uParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(bParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam1);
	switch (iVar0)
	{
		case GET_HASH_KEY("REL_GANG_ODRISCOLL"):
		case GET_HASH_KEY("REL_GANG_SKINNER_BROTHERS"):
		case GET_HASH_KEY("REL_GUNSLINGERS"):
		case GET_HASH_KEY("REL_GANG_CREOLE"):
		case GET_HASH_KEY("REL_GANG_LEMOYNE_RAIDERS"):
		case GET_HASH_KEY("REL_GANG_MURFREE_BROOD"):
		case GET_HASH_KEY("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

int func_181(int iParam0)
{
	if (func_206())
	{
		return 0;
	}
	return func_207(Global_1347702[58 /*49*/].f_15, 1);
}

int func_182(var uParam0)
{
	return uParam0->f_20;
}

int func_183(bool bParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_184(int iParam0)
{
	return func_208(iParam0, 2);
}

int func_185(int iParam0)
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

int func_186(int iParam0)
{
	return iParam0 & 31;
}

int func_187(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_188(int iParam0, int iParam1)
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

bool func_189(int iParam0, int iParam1)
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

bool func_190(int iParam0, int iParam1)
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
	if (!func_188(iParam0, iVar0))
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

void func_191(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_192(var uParam0, int iParam1)
{
	MISC::_0xE84AAC1B22A73E99(uParam0, iParam1);
}

bool func_193()
{
	if (func_209())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1955569.f_992[2];
	}
	return false;
}

void func_194(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_195(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*bParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*bParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*bParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_196(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_197(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_80(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_79(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_199(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_200(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_201(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_201(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_202(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_203(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, GET_HASH_KEY("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == GET_HASH_KEY("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_204(bool bParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == GET_HASH_KEY("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == GET_HASH_KEY("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == GET_HASH_KEY("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == GET_HASH_KEY("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == GET_HASH_KEY("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == GET_HASH_KEY("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == GET_HASH_KEY("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == GET_HASH_KEY("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(bParam0);
		if (iVar0 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_205(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_206()
{
	if (func_27() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_207(int iParam0, bool bParam1)
{
	switch (func_26(iParam0))
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

bool func_208(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_209()
{
	switch (Global_1935630.f_44)
	{
		case GET_HASH_KEY("WEAPON_MELEE_LANTERN"):
		case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
		case GET_HASH_KEY("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

