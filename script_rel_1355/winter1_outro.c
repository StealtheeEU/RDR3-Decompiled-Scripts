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
	struct<4> Local_14 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_14);
	}
	func_2(&Local_14, &uScriptParam_0);
	while (!func_3(&Local_14))
	{
		func_4(&Local_14);
		switch (func_5(Local_14))
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					func_7(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					func_7(&Local_14, 3);
				}
				break;
			case 3:
				func_1(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_3(var uParam0)
{
	if (func_20(Global_1935630, 16384))
	{
		return true;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(Global_1935630, 32768))
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	return (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false) && HUD::TEXT_BLOCK_IS_LOADED("WNT2AUD"));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_22())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_24(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_25(&(Global_1359489.f_40), 1);
}

int func_11(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	HUD::_TEXT_BLOCK_DELETE("WNT2AUD");
	return 1;
}

bool func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_26(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_24(iParam0, 56, 1);
		func_25(&(Global_1359489.f_40), 1);
	}
	func_27(iParam0, 0);
	func_28(iParam0, 4, 0);
	func_29(iParam0);
	func_30(iParam0);
	func_31(iParam0, 37, 1);
	bVar0 = func_32(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_33(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_34(iParam0, 64, 1))
	{
		func_31(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_31(iParam0, 33, 1);
		func_31(iParam0, 34, 1);
		func_35(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_36(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_24(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_24(iParam0, 35, 1);
			if (bParam8)
			{
				func_24(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_37(iParam0, 0);
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
		func_31(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_24(iParam0, 33, 1);
		func_36(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_25(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_38(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_24(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_39(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_34(iParam0, 45, 1))
	{
		func_31(iParam0, 45, 1);
	}
	func_40(iParam0, 16, 1);
	func_31(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_32(func_41(iParam0), 0))
		{
			func_42(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@wnt1@wnt1_to_wnt2", 2, "PL_HouseExt", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
	}
	HUD::TEXT_BLOCK_REQUEST("WNT2AUD");
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && !ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_2, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_43(13)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, func_44(func_43(13)), func_43(13), 0);
		}
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
	}
	func_45(&Global_1935630, 1048576);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	MISC::SET_WEATHER_TYPE(GET_HASH_KEY("WHITEOUT"), true, true, false, 0f, false);
	CLOCK::SET_CLOCK_TIME(8, 0, 0);
	return 1;
}

bool func_22()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_23(var uParam0)
{
	func_46();
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	CLOCK::SET_CLOCK_TIME(8, 0, 0);
	if (func_20(Global_1935630, 1048576))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_2))
		{
			func_47(&Global_1935630, 1048576);
		}
	}
	else
	{
		return func_48();
	}
	return false;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_49(iParam0))
		{
			return;
		}
	}
	func_50(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_51(uParam0))
	{
		func_52(uParam0);
	}
}

bool func_26(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_49(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_27(int iParam0, bool bParam1)
{
	if (!func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_53(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_28(iParam0, 1, 0);
		}
	}
	func_28(iParam0, 16, bParam1);
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (!func_49(iParam0))
	{
		return;
	}
	func_54(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_29(int iParam0)
{
	func_28(iParam0, 8, 0);
}

void func_30(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_31(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_49(iParam0))
		{
			return;
		}
	}
	func_50(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_32(int iParam0, int iParam1)
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
	if (func_55(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_33(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_56(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_49(iParam0))
		{
			return false;
		}
	}
	func_50(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_43(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_57(iParam0);
		}
	}
	if (func_34(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_43(iParam0), 137, true);
	}
}

void func_36(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_31(iParam0, 50, 1);
		func_31(iParam0, 48, 1);
		func_31(iParam0, 49, 1);
		func_31(iParam0, 51, 1);
		func_31(iParam0, 52, 1);
		func_31(iParam0, 54, 1);
		func_31(iParam0, 55, 1);
	}
	else
	{
		func_24(iParam0, 50, 1);
		func_24(iParam0, 48, 1);
		func_24(iParam0, 49, 1);
		func_24(iParam0, 51, 1);
		if (bParam3)
		{
			func_24(iParam0, 54, 1);
		}
		else
		{
			func_31(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_24(iParam0, 52, 1);
			if (bParam3)
			{
				func_24(iParam0, 55, 1);
			}
		}
		else
		{
			func_31(iParam0, 52, 1);
			if (!bParam3)
			{
				func_31(iParam0, 55, 1);
			}
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (!func_49(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_43(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_43(iParam0), 204, false);
	}
}

void func_38(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_34(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_33(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_43(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_58(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_24(iParam0, 2, 1);
	}
	else
	{
		func_59(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_41(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_42(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_49(iParam1))
	{
		return;
	}
	iVar0 = func_41(iParam1);
	if (func_60(iParam1))
	{
		if (!func_61(iParam1))
		{
			return;
		}
	}
	func_31(iParam1, 39, 1);
	func_62(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_62(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_62(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_63(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_43(int iParam0)
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

char* func_44(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_64(iVar0);
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_46()
{
	Global_1905944.f_5695 = 1;
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_48()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_49(int iParam0)
{
	return iParam0 > -1;
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_51(var uParam0)
{
	return func_65(*uParam0, 1);
}

void func_52(var uParam0)
{
	func_66(uParam0, 0f);
}

bool func_53(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1, bool bParam2)
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

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_56(int iParam0)
{
	int iVar0;

	if (!func_49(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_67(iParam0);
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

void func_57(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_43(iParam0)))
		{
			func_68(iParam0, 67108864, 1);
			func_31(iParam0, 19, 1);
		}
	}
}

float func_58(int iParam0)
{
	if (!func_49(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_43(iParam0);
	iVar1 = func_33(iParam0, 0);
	func_69(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_60(int iParam0)
{
	if (!func_49(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_61(int iParam0)
{
	if (!func_49(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_62(int iParam0, int iParam1, bool bParam2)
{
	if (!func_49(iParam0))
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

int func_63(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_49(iParam0))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	if (func_32(iVar0, 0))
	{
		if (func_32(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_60(iParam0)) || func_61(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_70(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_71(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_72(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_73(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_73(iParam0, 0));
					func_74(iParam0);
				}
			}
			else
			{
				if (func_26(iParam0, 32768, 1))
				{
					iVar2 = func_73(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_32(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_26(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_72(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_73(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_73(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_72(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_75(iParam0, 0);
	return 1;
}

char* func_64(int iParam0)
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

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_66(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_76() - fParam1);
	func_77(uParam0, 1);
	func_78(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_67(int iParam0)
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

void func_68(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_69(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_79(iParam1);
	}
}

float func_70(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_80(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_71(int iParam0, bool bParam1)
{
	if (!func_49(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_81(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_41(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

int func_73(int iParam0, bool bParam1)
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_82(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_74(int iParam0)
{
	int iVar0;

	if (!func_49(iParam0))
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

void func_75(int iParam0, int iParam1)
{
	if (!func_49(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

float func_76()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_78(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_79(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_80(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_49(iParam0))
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
	if (!func_49(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_49(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_71(iParam0, 1);
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

