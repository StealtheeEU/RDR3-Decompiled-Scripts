#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<32> Local_19 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35) || SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		iLocal_0 = 0;
		return;
	}
	func_12(&Local_19);
}

void func_7()
{
	HUD::_DISPLAY_HUD_COMPONENT(2011163970);
	if (func_13())
	{
		if (func_14() == func_15())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_16(0);
	}
	if (func_17() != 0)
	{
		if (func_18(&(Local_19.f_19)) || Local_19.f_22)
		{
			GRAPHICS::_0xBB6C707F20D955D4(15f);
			func_19(&(Local_19.f_19));
			Local_19.f_22 = 0;
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_19.f_23))
	{
		CAM::DESTROY_CAM(Local_19.f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_19.f_24))
	{
		CAM::DESTROY_CAM(Local_19.f_24, false);
	}
	func_20(&Local_19);
	if (Local_19.f_30)
	{
		func_21(0);
		Local_19.f_30 = 0;
	}
	if (Local_19.f_31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
		}
		Local_19.f_31 = 0;
	}
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_23(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_24(&iVar0);
	}
}

void func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	char* sVar15;

	if (func_25(&(uParam0->f_19), 3.5f) && uParam0->f_22)
	{
		GRAPHICS::_0xBB6C707F20D955D4(15f);
		uParam0->f_22 = 0;
	}
	if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, true) == iLocal_3)
	{
		func_26(32);
		func_26(64);
		if (!uParam0->f_30)
		{
			func_21(1);
			uParam0->f_30 = 1;
		}
		if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
		{
			if (PED::_0x569F1E1237508DEB(Global_35) != GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR") || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 7, true);
				if (!uParam0->f_31)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					uParam0->f_31 = 1;
				}
			}
			else if (uParam0->f_31)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				uParam0->f_31 = 0;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
				CAM::_0x8370D34BD2E60B73();
				CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-35f, 15f);
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
				}
			}
		}
	}
	else
	{
		if (uParam0->f_30)
		{
			func_21(0);
			uParam0->f_30 = 0;
		}
		if (uParam0->f_31)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			uParam0->f_31 = 0;
		}
	}
	switch (uParam0->f_11)
	{
		case 0:
			if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_4, 15, 0, 0);
			}
			func_27(uParam0, 1);
			break;
		case 1:
			if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_4, false))
				{
					return;
				}
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_28(uParam0);
			if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				iVar1 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iLocal_3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (uParam0->f_32)
					{
						case 1:
							if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
							{
								uParam0->f_32 = 2;
								uParam0->f_33 = MISC::GET_GAME_TIMER();
							}
							break;
						case 2:
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &vVar2, &vVar5);
							vVar2.f_1 = (vVar2.y + 0.5f);
							vVar5.f_1 = (vVar5.y - 0.5f);
							fVar8 = (vVar5.x - vVar2.x);
							vVar2.x = 0f;
							vVar5.x = 0f;
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, vVar2), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, vVar5), fVar8, false, true, 0))
							{
								uParam0->f_32 = 0;
							}
							else if (MISC::GET_GAME_TIMER() >= uParam0->f_33 + 10000)
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar1, true);
								uParam0->f_32 = 0;
							}
							break;
					}
				}
				else
				{
					uParam0->f_32 = 0;
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_29(uParam0))
			{
				(*uParam0)[4] = func_31("SLEEP", GET_HASH_KEY("INPUT_CONTEXT_Y"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("MEDIUM_TIMED_EVENT"), 0);
				func_32((*uParam0)[4], 1057677739, 0, 1);
				if (func_17() != 0)
				{
					if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
					{
						(*uParam0)[7] = func_31("SIT_TENT", GET_HASH_KEY("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("MEDIUM_TIMED_EVENT"), 0);
						func_32((*uParam0)[7], 1057677739, 0, 1);
					}
					else if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED") && !Global_1327590.f_19736)
					{
						(*uParam0)[7] = func_31("PLAYER_SIT", GET_HASH_KEY("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("MEDIUM_TIMED_EVENT"), 0);
						func_32((*uParam0)[7], 1057677739, 0, 1);
					}
				}
				if (Global_1327590.f_19683 < 2 && func_33())
				{
					func_34();
					Global_1327590.f_19683++;
				}
				func_27(uParam0, 3);
			}
			else if ((TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3 && !TASK::IS_PED_EXITING_SCENARIO(Global_35, true)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				uParam0->f_13 = func_35();
				func_27(uParam0, 5);
			}
			break;
		case 3:
			if (!func_29(uParam0))
			{
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 2);
			if (func_37(uParam0))
			{
			}
			if (!func_38((*uParam0)[4]))
			{
				(*uParam0)[4] = func_31("SLEEP", GET_HASH_KEY("INPUT_CONTEXT_Y"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("MEDIUM_TIMED_EVENT"), 0);
				func_32((*uParam0)[4], 1057677739, 0, 1);
			}
			else if (func_39((*uParam0)[4], 1))
			{
				if (func_40(8388608))
				{
					func_41(4);
				}
				func_42(16777216);
				func_43(uParam0[4], 1, 1);
				func_43(uParam0[7], 1, 1);
				(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", GET_HASH_KEY("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
				func_32((*uParam0)[5], 1323335645, 0, 1);
				uParam0->f_13 = func_35();
				func_27(uParam0, 4);
				return;
			}
			if ((iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED")) && func_17() != 0)
			{
				if (!func_38((*uParam0)[7]))
				{
					if (!Global_1327590.f_19736)
					{
						if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
						{
							(*uParam0)[7] = func_31("SIT_TENT", GET_HASH_KEY("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("MEDIUM_TIMED_EVENT"), 0);
							func_32((*uParam0)[7], 1057677739, 0, 1);
						}
						else if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
						{
							(*uParam0)[7] = func_31("PLAYER_SIT", GET_HASH_KEY("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("MEDIUM_TIMED_EVENT"), 0);
							func_32((*uParam0)[7], 1057677739, 0, 1);
						}
					}
				}
				else if (func_39((*uParam0)[7], 1))
				{
					func_42(16777216);
					func_43(uParam0[7], 1, 1);
					func_43(uParam0[4], 1, 1);
					uParam0->f_13 = func_35();
					if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
					{
						func_45(uParam0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, true, true, iLocal_4, false, -1f, false);
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
					}
					func_27(uParam0, 5);
					return;
				}
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3)
				{
					uParam0->f_13 = func_35();
					func_43(uParam0[4], 1, 1);
					func_43(uParam0[7], 1, 1);
					func_27(uParam0, 5);
				}
				else
				{
					func_43(uParam0[4], 1, 1);
					func_43(uParam0[7], 1, 1);
					func_27(uParam0, 2);
				}
			}
			break;
		case 4:
			func_46(uParam0, 1);
			break;
		case 5:
			if (func_37(uParam0))
			{
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
			if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_23) && CAM::IS_CAM_ACTIVE(uParam0->f_23))
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0, 0, 1);
				}
			}
			if (!func_47(Global_35, -76381094) && !(TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3))
			{
				if (!func_48())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				func_27(uParam0, 2);
				return;
			}
			if (func_17() == -1)
			{
				if (!func_48())
				{
					HUD::_HIDE_HUD_COMPONENT(2011163970);
				}
			}
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				if (!func_48())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				func_49(uParam0);
				func_27(uParam0, 6);
			}
			break;
		case 6:
			if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
			{
				if (func_50() == 8 && func_51(Global_35))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 1057677739, func_36(), 0);
				}
				else
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 0);
				}
			}
			if (func_37(uParam0))
			{
				MISC::SET_BIT(&(Global_1956580.f_1), 2);
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 3);
				if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME") && !CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0, 0, 1);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_QUICK_USE_ITEM"), false);
			iVar0 = PED::_0x569F1E1237508DEB(Global_35);
			if (((((iVar0 != GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR") && iVar0 != GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR")) && iVar0 != GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND_ARM_MALE_B")) && iVar0 != GET_HASH_KEY("PROP_PLAYER_PRPTY_SAVE_GAME_MALE")) && iVar0 != GET_HASH_KEY("PROP_PLAYER_SEAT_CHAIR_GENERIC")) || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_B"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			else if (uParam0->f_29)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				uParam0->f_29 = 0;
			}
			if (func_17() == -1)
			{
				if (func_52((*uParam0)[4], 0))
				{
					if (func_53(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						func_54((*uParam0)[4], 0, 1);
					}
				}
				else if (!func_53(PLAYER::PLAYER_ID(), 1, 0, 1) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_54((*uParam0)[4], 1, 1);
				}
				if (func_55((*uParam0)[4], 1))
				{
					func_56();
					func_20(uParam0);
					(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", GET_HASH_KEY("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
					func_32((*uParam0)[5], 1323335645, 0, 1);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					func_27(uParam0, 7);
				}
				else if (func_55((*uParam0)[6], 1))
				{
					func_56();
					func_57(16777216);
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_27(uParam0, 15);
				}
				else if (func_55((*uParam0)[8], 1))
				{
					func_56();
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_29 = 1;
				}
				else if (func_38((*uParam0)[9]))
				{
					if (func_58((*uParam0)[9], 1) && func_59())
					{
						func_60(&Global_43907, 4);
					}
					func_54((*uParam0)[8], func_61() != 1, 1);
					func_54((*uParam0)[9], func_61() != 1, 1);
					func_54((*uParam0)[6], func_61() != 1, 1);
					func_54((*uParam0)[4], func_61() != 1, 1);
				}
			}
			else if (func_55((*uParam0)[4], 1))
			{
				func_20(uParam0);
				(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", GET_HASH_KEY("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_27(uParam0, 7);
			}
			else if (func_55((*uParam0)[5], 1))
			{
				func_20(uParam0);
				func_27(uParam0, 3);
			}
			if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true)) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
				{
					uParam0->f_33 = MISC::GET_GAME_TIMER();
					uParam0->f_32 = 1;
				}
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3)
				{
					func_62(uParam0);
				}
				else
				{
					func_63(uParam0);
				}
				func_56();
				HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				uParam0->f_29 = 0;
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			break;
		case 7:
			func_46(uParam0, 0);
			if (func_17() == -1)
			{
				if (!func_48())
				{
					if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
					{
						MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
						func_20(uParam0);
						func_27(uParam0, 2);
					}
				}
			}
			break;
		case 8:
			if (!Global_1327590.f_19737)
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, true) == iLocal_3 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1652513209)))
				{
					Global_1327590.f_19737 = 1;
				}
			}
			else if (Global_1327590.f_19738)
			{
				uParam0->f_14 = MISC::GET_GAME_TIMER();
				func_27(uParam0, 9);
			}
			break;
		case 9:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
			if (func_37(uParam0))
			{
				if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_17, true, false) || ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_17, false))) || iLocal_4 != GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
				{
					if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED") && !Global_1327590.f_19737)
					{
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_17, false) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_17, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_17);
						}
						else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
						{
							uParam0->f_12 = 1;
							uParam0->f_14 = MISC::GET_GAME_TIMER();
						}
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_17, false) && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							uParam0->f_18 = -1;
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
							func_64(4);
							func_27(uParam0, 2);
						}
					}
					if ((MISC::GET_GAME_TIMER() - uParam0->f_14) > 500)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						AUDIO::_0x6339C1EA3979B5F7("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					uParam0->f_12 = 1;
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1392040.f_7 == -15)
				{
					Global_1392040.f_7 = func_65();
				}
				iVar9 = Global_1392040.f_7;
				func_66(&iVar9, 0, 0, 3, 0, 0, 0, 0);
				if (!func_67(iVar9))
				{
					Global_1392040.f_8++;
				}
				else
				{
					Global_1392040.f_8 = 0;
				}
				Global_1327590.f_19737 = 0;
				Global_1327590.f_19738 = 0;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, false, true, 0, false, -1f, false);
				}
				else if (iLocal_4 == GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL"))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, false, true, 0, false, -1f, false);
				}
				else
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, false, true, 0, false, -1f, false);
				}
				func_27(uParam0, 10);
			}
			break;
		case 10:
			if (func_17() == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), false);
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
					}
					else
					{
						uParam0->f_12 = 1;
						PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_B"), false);
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
				{
					func_27(uParam0, 6);
				}
			}
			else
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
						{
							PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("RESTING_TRANS_SLEEP_W_HAT"), 3f);
						}
						CAM::DO_SCREEN_FADE_OUT(2000);
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					{
						if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_16, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_16, true))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_16);
							}
						}
						else if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
						{
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_16);
							func_64(4);
							AUDIO::_0xAC84686C06184B0D("Clouds", "Sleep_Respawn_Scenes");
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							if (func_51(Global_35))
							{
								iVar11 = func_68();
								iVar12 = func_69(iVar11, uParam0->f_13);
								iVar13 = func_70(iVar11, uParam0->f_13);
								CLOCK::ADVANCE_CLOCK_TIME_TO(iVar12, iVar13, 0);
								TELEMETRY::_0xF9F14080D80937BD(iVar12);
								if (iVar12 > 9 || iVar12 <= 1)
								{
									iVar10 = 1;
								}
								if (((func_71(10, 0) >= 3 && iVar11 != 8) && iVar11 != 7) && iVar11 != 5)
								{
									fVar14 = func_72(12f, 2);
									func_73(18, fVar14);
								}
							}
							else
							{
								CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_13, 0, 0);
								TELEMETRY::_0xF9F14080D80937BD(uParam0->f_13);
								if (!func_74(0, 0, 1))
								{
									MISC::SET_RANDOM_WEATHER_TYPE(true, true);
								}
							}
							func_75();
							func_76(0, iVar10, 0);
							func_77();
							func_78(-1, 0, 0, 0, 0);
							if (!Global_1327590.f_19736)
							{
								func_79();
							}
							func_82(Global_36, func_81(func_80(), 100f, 300f), 0, 0);
							func_83(14, 1);
							func_84();
							Global_1935183.f_26 = 1;
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							uParam0->f_14 = MISC::GET_GAME_TIMER();
							func_27(uParam0, 11);
						}
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_37(uParam0))
			{
				if (func_17() != 0)
				{
					PED::INSTANTLY_FILL_PED_POPULATION();
					if (!func_13())
					{
						func_16(1);
					}
					func_85(Global_36);
					Global_40.f_9 = 0;
					func_86(0, 7);
				}
			}
			if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && (MISC::GET_GAME_TIMER() - uParam0->f_14) > 250)
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (func_17() != 0)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::_0x8910C24B7E0046EC();
				MISC::_0xA3A8926951471C82();
				if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_16, false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_16))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
					func_87(0f);
					if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
					{
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_15, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + 90f), 2);
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_15);
					}
					else if (iLocal_4 == GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL"))
					{
						func_88(98.2971f, -4.2336f);
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						PED::_SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(Global_35, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), -5f, 0f, 0f));
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
					if (iLocal_4 != GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL"))
					{
						func_88(0, 0);
					}
					if (func_51(Global_35))
					{
						sVar15 = func_89(func_68(), uParam0->f_13);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar15);
							uParam0->f_22 = 1;
						}
					}
					func_90(0, 0);
					func_91(1);
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					func_92(0);
					func_27(uParam0, 12);
				}
			}
			else
			{
				func_27(uParam0, 12);
			}
			break;
		case 12:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_17() != 0)
			{
				if (func_37(uParam0))
				{
					if (func_13())
					{
						func_16(0);
					}
					Global_1392040.f_7 = func_65();
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				func_93(1);
				func_94();
			}
			if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("SLEEP_TRANS_RESTING_W_HAT"), 6f);
				func_27(uParam0, 5);
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_14) > 500)
			{
				if (uParam0->f_22)
				{
					func_95(&(uParam0->f_19));
				}
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			break;
		case 14:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), false);
			if (func_37(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && iLocal_4 == GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL")))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					if (INVENTORY::_0x3D10D7179D7034AF(func_96(0), GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"), false))
					{
						INVENTORY::_0x6A564540FAC12211(func_96(0), GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"));
					}
					func_97(GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"), 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if ((!func_98(GET_HASH_KEY("DOC_PLAYER_JOURNAL")) && !func_99()) && (MISC::GET_GAME_TIMER() - uParam0->f_14) > 1000)
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("TRANS_STOP_USE_ITEM"), 3f);
				func_27(uParam0, 5);
			}
			break;
		case 15:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), false);
			break;
		case 13:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), false);
			if (func_37(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && iLocal_4 == GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL")))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					func_97(GET_HASH_KEY("CUSTOM_SATCHEL"), 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if (!func_100())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("TRANS_STOP_USE_ITEM"), 3f);
				func_27(uParam0, 5);
			}
			break;
		case 16:
			if (func_37(uParam0))
			{
				if (!func_48())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_17))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
				}
				func_101(uParam0);
			}
			break;
	}
}

bool func_13()
{
	return Global_1392040.f_6;
}

int func_14()
{
	return Global_1572864;
}

int func_15()
{
	return Global_1572864.f_1;
}

void func_16(int iParam0)
{
	Global_1392040.f_6 = iParam0;
}

int func_17()
{
	return Global_1572887.f_12;
}

bool func_18(var uParam0)
{
	return func_102(*uParam0, 1);
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_20(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_21(int iParam0)
{
	Global_1935436.f_18.f_3 = iParam0;
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

void func_24(int iParam0)
{
}

bool func_25(var uParam0, float fParam1)
{
	if (func_103(uParam0, fParam1))
	{
		func_19(uParam0);
		return true;
	}
	return false;
}

void func_26(int iParam0)
{
	Global_1935496.f_29 = (Global_1935496.f_29 || iParam0);
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

void func_28(var uParam0)
{
	if (iLocal_4 != GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	if (TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
	{
		if (!uParam0->f_28)
		{
			if (func_25(&(uParam0->f_25), 2.5f))
			{
				func_104(uParam0);
			}
		}
	}
	else if (!uParam0->f_28 && !PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_3))
	{
		func_63(uParam0);
	}
	if (uParam0->f_28)
	{
		if (func_25(&(uParam0->f_25), 2.1f))
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0, 0, 1);
			CAM::DETACH_CAM(uParam0->f_23);
		}
	}
}

bool func_29(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!func_40(128))
	{
		if (func_105())
		{
			return false;
		}
	}
	if (func_106(Global_1935630, 131072))
	{
		return false;
	}
	if (func_107() >= 1f)
	{
		return false;
	}
	if (func_40(1073741824 /* Float: 2f */) || func_40(16777216))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return false;
	}
	iVar0 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (iVar0 != Global_35)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
			{
				return false;
			}
		}
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return false;
	}
	if (func_53(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	if (!Global_1327590.f_19736)
	{
		if (func_108(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) + Vector(0.5f, 0f, 0f), 1f, 1, Global_35, 0, 0))
		{
			return false;
		}
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
	{
		if (!ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_15, false))
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
			return false;
		}
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
	{
		return false;
	}
	if (TASK::_IS_SCENARIO_POINT_FLAG_SET(iLocal_3, 8))
	{
		return false;
	}
	fVar1 = func_109(Global_35, func_30(), 1);
	if (fVar1 > func_81(((iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED") && func_50() != 8) && func_51(Global_35)), 1.5f, 1f))
	{
		return false;
	}
	if (!func_110(Global_35, func_30(), func_81((iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED") && func_51(Global_35)), -0.25f, 0f)) && fVar1 > func_111())
	{
		return false;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 2f))
	{
		return false;
	}
	iVar2 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iLocal_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iVar2))
		{
			return false;
		}
		if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iVar2))
		{
			return false;
		}
		if (FIRE::_0xA4454592DCF7C992(iVar2))
		{
			return false;
		}
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 1f) > 0)
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		return false;
	}
	return true;
}

Vector3 func_30()
{
	vector3 vVar0;

	switch (iLocal_4)
	{
		case GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"):
			vVar0 = { 0.29f, 1.5f, 1f };
			break;
		case GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"):
			if ((iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED") && func_50() == 8) && func_51(Global_35))
			{
				vVar0 = { 0f, 0.15f, 0f };
			}
			else
			{
				vVar0 = { 0f, 0.5f, 0f };
			}
			break;
		default:
			vVar0 = { 0f, 0f, 0.5f };
			break;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), vVar0);
}

int func_31(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_112(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_113(iVar0, 2))
		{
			if (func_114(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_115(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

bool func_33()
{
	return func_117(32768);
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1327590.f_19622[iVar0 /*14*/].f_5 = 0;
		iVar0++;
	}
}

int func_35()
{
	if (func_118(1))
	{
		return 12;
	}
	else if (func_118(2))
	{
		return 18;
	}
	return 6;
}

char* func_36()
{
	switch (iLocal_4)
	{
		case GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"):
		case GET_HASH_KEY("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS"):
			return "CMP_SLP_TNT";
		case GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND"):
		case GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL"):
			if (func_119(67108864) && func_40(8388608))
			{
				return "CMP_SLP_DIRT";
			}
			else
			{
				return "CMP_SLP_GND";
			}
			break;
		case GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"):
			return "CMP_SLP_BED";
	}
	return "CMP_SLP_BED";
}

bool func_37(var uParam0)
{
	if (uParam0->f_12)
	{
		uParam0->f_12 = 0;
		return true;
	}
	return false;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_40(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_41(int iParam0)
{
	if (!func_120(iParam0))
	{
		Global_1392040.f_1 = (Global_1392040.f_1 || iParam0);
	}
}

void func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		Global_1392040 = (Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_116(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_121(iVar0);
	*uParam0 = 0;
}

int func_44(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
		if (func_113(iVar0, 2))
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
		func_115(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, bParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_45(var uParam0)
{
	vector3 vVar0;

	if (iLocal_4 != GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 0.5f, -1.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(GET_HASH_KEY("DEFAULT_SCRIPTED_CAMERA"), vVar0, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 51.28f, false, 2);
	uParam0->f_24 = CAM::CREATE_CAMERA_WITH_PARAMS(GET_HASH_KEY("DEFAULT_SCRIPTED_CAMERA"), vVar0, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 61.28f, false, 2);
	if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_24, true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_23, uParam0->f_24, 5000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_46(var uParam0, bool bParam1)
{
	char* sVar0;
	bool bVar1;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PLAYER_MENU"), false);
	func_122(1);
	func_123(1);
	if (!TASK::_0x02EBBB3989B7E695(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MOVE_UD"), false);
	}
	if (func_17() == 0)
	{
		uParam0->f_14 = MISC::GET_GAME_TIMER();
		if (bParam1)
		{
			if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
			{
				func_45(uParam0);
				sVar0 = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, sVar0, 0, true, false, 0, false, -1f, false);
		}
		func_27(uParam0, 10);
	}
	else
	{
		func_124(uParam0);
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar1 = false;
		if (func_55((*uParam0)[0], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 6;
		}
		else if (func_55((*uParam0)[1], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 12;
		}
		else if (func_55((*uParam0)[2], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 18;
		}
		else if (func_55((*uParam0)[3], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 0;
		}
		if (bVar1)
		{
			uParam0->f_18 = -1;
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			}
			uParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(func_125(uParam0->f_13), 0, 0, false, true);
			uParam0->f_14 = MISC::GET_GAME_TIMER();
			func_20(uParam0);
			if (bParam1)
			{
				if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
				}
			}
			if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_17))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
				}
				if (func_126() && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				}
				else
				{
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
				}
				uParam0->f_17 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_17);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_17, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_15);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_15, "player", Global_35, 0);
				if (Global_1327590.f_19736)
				{
					if (iLocal_4 == GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))
					{
						if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_3))
						{
							TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1f, false);
						}
					}
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 9);
				}
			}
			else
			{
				func_27(uParam0, 9);
			}
		}
		else if ((func_55((*uParam0)[5], 1) || func_53(PLAYER::PLAYER_ID(), 1, 0, 1)) || PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			uParam0->f_18 = -1;
			func_64(4);
			func_20(uParam0);
			if (uParam0->f_11 == 7)
			{
				func_27(uParam0, 5);
			}
			else
			{
				func_27(uParam0, 2);
			}
		}
	}
}

bool func_47(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_48()
{
	return Global_1894899 & 2 != 0;
}

void func_49(var uParam0)
{
	if (func_17() != 0 && iLocal_4 != GET_HASH_KEY("PROP_PLAYER_PRPTY_SAVE_GAME"))
	{
		(*uParam0)[4] = func_127("SLEEP", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
		func_32((*uParam0)[4], 1057677739, 0, 1);
		if (func_40(8388608) && !func_120(1024))
		{
			(*uParam0)[6] = func_127("CAMP_RECIPE", GET_HASH_KEY("INPUT_CONTEXT_X"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
			func_32((*uParam0)[6], 1057677739, 0, 1);
			if (func_128())
			{
				(*uParam0)[9] = func_127("CAMP_FT_PROMPT", GET_HASH_KEY("INPUT_CONTEXT_A"), Global_35, 1, 0, 0, 0, 2, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				func_32((*uParam0)[9], 1057677739, 0, 1);
			}
		}
		(*uParam0)[8] = func_127("LEAVE", GET_HASH_KEY("INPUT_CONTEXT_B"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
		func_32((*uParam0)[8], 1057677739, 0, 1);
	}
}

int func_50()
{
	switch (func_17())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	return func_129(ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
}

bool func_52(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	return !func_113(iParam0, 4);
}

bool func_53(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_130(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

void func_54(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (bParam1)
	{
		func_131(iParam0, 4);
		func_132(iVar0, 1);
		func_133(iVar0, 1);
	}
	else
	{
		func_134(iParam0, 4);
		func_133(iVar0, 0);
	}
}

bool func_55(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_56()
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(GET_HASH_KEY("FAST_TRAVEL_MENU")) && func_61() != 0)
	{
		func_60(&Global_43907, 16);
	}
}

void func_57(int iParam0)
{
	if (!func_40(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

bool func_58(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_59()
{
	return (((!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(GET_HASH_KEY("PLAYER_MENU")) && !Global_1898068.f_4) && !func_135()) && UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(GET_HASH_KEY("FAST_TRAVEL_MENU")));
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_61()
{
	return Global_43908;
}

void func_62(var uParam0)
{
	if (iLocal_4 != GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	func_95(&(uParam0->f_25));
	uParam0->f_28 = 0;
}

void func_63(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
}

void func_64(int iParam0)
{
	if (func_120(iParam0))
	{
		Global_1392040.f_1 = (Global_1392040.f_1 - (Global_1392040.f_1 && iParam0));
	}
}

int func_65()
{
	return Global_1899515;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_136(*iParam0);
	iVar1 = func_137(*iParam0);
	iVar2 = func_138(*iParam0);
	iVar3 = func_139(*iParam0);
	iVar4 = func_140(*iParam0);
	iVar5 = func_141(*iParam0);
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
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
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
	func_143(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_67(int iParam0)
{
	return Global_1899515 > iParam0;
}

int func_68()
{
	return Global_40.f_4283;
}

int func_69(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 12:
					return 11;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return 7;
				default:
					break;
			}
			break;
	}
	return iParam1;
}

int func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 6:
					return 10;
				case 18:
					return 45;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 18:
					return 30;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 0:
					return 30;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 50;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					return 20;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 15;
				case 18:
					return 40;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

float func_72(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_73(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_144(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_145(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_146(-1);
			func_147(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_145(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_148(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_145(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_149(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_150(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_150(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_150(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
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
		if (func_151())
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
		iVar0 = func_152(Global_1898164.f_1[0 /*5*/]);
		if (func_153(iVar0) && func_154(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_155(Global_1898164.f_1[0 /*5*/]))
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

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_156(iVar0, 1, 0))
		{
			if (func_157(iVar0))
			{
				iVar2 = func_158(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::_0x97B06669AC569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_159(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_77()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_160(iVar0) && func_161(iVar0, 1))
		{
			func_162(iVar0);
		}
		iVar0++;
	}
}

void func_78(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_163() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_164(iVar1) && !func_165(iVar1, iParam2)) && (!bParam3 || !func_166(iVar1))) && (!bParam4 || !func_167(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_168(iVar0);
			}
		}
		iVar0++;
	}
}

void func_79()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] != -1)
		{
			func_169(iVar0);
		}
		iVar0++;
	}
}

bool func_80()
{
	return (Global_1894899 & 1 != 0 && func_170() != -1);
}

float func_81(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_82(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
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

void func_83(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = BUILTIN::TO_FLOAT(iParam0);
	if (Global_1347477.f_4 + 60000) > MISC::GET_GAME_TIMER()
	{
		fVar0 = (BUILTIN::TO_FLOAT(iParam0) - Global_1347477.f_5);
	}
	if (fVar0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), fVar0, 0, 0, 0);
		Global_1347477.f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_171(2, 7000);
	}
	Global_1347477.f_4 = MISC::GET_GAME_TIMER();
	func_147(0);
	if (bParam1)
	{
		func_172(100f);
	}
}

void func_84()
{
	if (func_173(0))
	{
		func_174(0, 0, 100);
		func_174(0, 1, 100);
	}
	if (func_173(1))
	{
		func_174(1, 0, 100);
		func_174(1, 1, 100);
	}
}

void func_85(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_86(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_175(&Global_0, 8);
	}
	if (!func_176() || func_17() != -1)
	{
		return;
	}
	func_175(&Global_0, 1);
}

void func_87(float fParam0)
{
	if ((Global_1357549.f_1495 & 512 != 0 || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436.f_9 = (0.75f - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1935436.f_9 = 0f;
	}
	else if (fParam0 > 1f)
	{
		Global_1935436.f_9 = 1f;
	}
	else
	{
		Global_1935436.f_9 = fParam0;
	}
}

void func_88(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_colter_morning";
				case 12:
					return "wakeUp_colter_afternoon";
				case 18:
					return "wakeUp_colter_evening";
				case 0:
					return "wakeUp_colter_night";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_horseshoe_morning";
				case 12:
					return "wakeUp_horseshoe_afternoon";
				case 18:
					return "wakeUp_horseshoe_evening";
				case 0:
					return "wakeUp_horseshoe_night";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_clemensPoint_morning";
				case 12:
					return "wakeUp_clemensPoint_afternoon";
				case 18:
					return "wakeUp_clemensPoint_evening";
				case 0:
					return "wakeUp_clemensPoint_night";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_shadyBelle_morning";
				case 12:
					return "wakeUp_shadyBelle_afternoon";
				case 18:
					return "wakeUp_shadyBelle_evening";
				case 0:
					return "wakeUp_shadyBelle_night";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_guarma_morning";
				case 12:
					return "wakeUp_guarma_afternoon";
				case 18:
					return "wakeUp_guarma_evening";
				case 0:
					return "wakeUp_guarma_night";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_lakay_morning";
				case 12:
					return "wakeUp_lakay_afternoon";
				case 18:
					return "wakeUp_lakay_evening";
				case 0:
					return "wakeUp_lakay_night";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beaverHollow_morning";
				case 12:
					return "wakeUp_beaverHollow_afternoon";
				case 18:
					return "wakeUp_beaverHollow_evening";
				case 0:
					return "wakeUp_beaverHollow_night";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beechersHopeHouse_morning";
				case 12:
					return "wakeUp_beechersHopeHouse_afternoon";
				case 18:
					return "wakeUp_beechersHopeHouse_evening";
				case 0:
					return "wakeUp_beechersHopeHouse_night";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_90(int iParam0, bool bParam1)
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

void func_91(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_177(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_178(1);
	}
}

void func_93(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/].f_2;
						if (func_179(iVar0))
						{
							if (func_180(iVar0))
							{
								func_181(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_94()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_153(Global_40.f_450[iVar0]))
		{
			if (Global_1347702[Global_40.f_450[iVar0] /*49*/].f_14 & 2 != 0)
			{
				func_182(Global_40.f_450[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_95(var uParam0)
{
	func_183(uParam0, 0f);
}

int func_96(bool bParam0)
{
	if (func_17() == -1)
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

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;

	if (func_184())
	{
		Global_1935689.f_10191 = iParam0;
		func_185(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_186())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_187(iParam0, 0);
		func_185(func_188(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_189(iParam0, bParam4))
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_191(iParam0, -2081717885))
	{
		func_192(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_191(iParam0, -1909684001))
	{
		func_193(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_191(iParam0, 587975446))
	{
		func_194(iParam0, Var10);
	}
	else if (func_191(iParam0, 566155764))
	{
		if (!func_195(iParam0))
		{
			return 0;
		}
	}
	if (func_196(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_191(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_197(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_191(iParam0, -1472964441) || func_191(iParam0, -228153877)) || func_191(iParam0, 566155764))
	{
	}
	else if (func_191(iParam0, 1919582297))
	{
		if (((func_48() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case GET_HASH_KEY("CONSUMABLE_HERBIVORE_BAIT"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case GET_HASH_KEY("CONSUMABLE_PREDATOR_BAIT"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_197(Var10, 0);
		bVar32 = false;
	}
	else if (func_198(iParam0) == GET_HASH_KEY("EMOTE"))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_199(Global_1058888.f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_197(Var10, 0);
		iVar33 = 1;
	}
	else if (func_198(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if (func_200(iParam0) == -999503751)
		{
			if (func_17() != -1)
			{
				return iVar33;
			}
			if (!func_201(iParam0))
			{
				func_202("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_203(7, iParam0);
			bVar36 = func_203(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_202("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_204(7))
			{
				func_202("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_206(Global_35, func_205(7), 0))
				{
					func_202("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_202("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_207(iParam0);
			if (iVar30 == -1)
			{
				func_208(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_208(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_200(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_209(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_210(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == Global_1946804.f_1497.f_1[23 /*3*/])
					{
						func_211(Global_35, GET_HASH_KEY("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_212(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_212(iParam0, 1);
					}
					break;
			}
			func_211(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case GET_HASH_KEY("CUSTOM_SATCHEL"):
				func_213(1);
				break;
			case GET_HASH_KEY("KIT_WARDROBE"):
				if (func_17() != -1)
				{
				}
				else if (!func_201(iParam0))
				{
					func_202("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_203(7, iParam0);
					bVar36 = func_203(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
						{
							MAP::REMOVE_BLIP(&Global_36559);
						}
						Global_36559 = MAP::_0x3E593DF9C2962EC6(GET_HASH_KEY("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_36559, 673950256);
						func_202(MISC::VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, 1);
					}
					else if (!func_204(7))
					{
						func_202("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_206(Global_35, func_205(7), 0))
						{
							func_202("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36559))
							{
								MAP::REMOVE_BLIP(&Global_36559);
							}
							Global_36559 = MAP::_0x3E593DF9C2962EC6(GET_HASH_KEY("BLIP_STYLE_PLAYER_HORSE"));
							MAP::BLIP_ADD_MODIFIER(Global_36559, 673950256);
							func_202(MISC::VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = GET_HASH_KEY("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_197(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_214();
						Jump @2541; //curOff = 1643
						if (!func_215(Global_1392040.f_1, 1) || func_215(Global_1392040.f_1, 512))
						{
							if (func_17() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_216(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_217(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_201(iParam0) || ((!func_219(Global_35, func_205(7), func_218(7), 1) || func_220() != 0) && !func_219(Global_35, Global_1900383.f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if (func_215(iVar31, 128) && Global_1357522.f_10[1])
									{
										Global_1357522.f_10[1] = 0;
									}
									else if (!func_215(iVar31, 128) && Global_1357522.f_10[0])
									{
										Global_1357522.f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_197(Var10, 2);
								}
							}
							else if (func_201(GET_HASH_KEY("KIT_CAMP")))
							{
								if (func_221(1))
								{
									func_222(2);
								}
								else if (func_223(1))
								{
									func_202("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
									{
										func_202("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_224(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							{
								func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_224(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
							else
							{
								func_202("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040.f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_225(Global_35, 1, 0, 0) != GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_225(Global_35, 1, 0, 0) != GET_HASH_KEY("WEAPON_KIT_CAMERA"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_KIT_CAMERA"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_226(func_170());
						iVar28 = func_227();
						if (func_228(iVar27))
						{
							if (iVar27 == iVar28 && !func_229())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_202("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_230(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_231(497, 1);
						Jump @2541; //curOff = 2388
						func_232(1);
						Jump @2541; //curOff = 2396
						func_230(iParam0, 1, 0, 562618531, 0);
						func_233(GET_HASH_KEY("PROVISION_BEAUS_GIFT_2"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = GET_HASH_KEY("DOCUMENT_NATIVE_AMERICAN_JOURNAL");
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_197(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
				default:
					break;
		}
	}
}

bool func_98(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_99()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DOC_PLAYER_JOURNAL")) > 0;
}

bool func_100()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

void func_101(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_103(var uParam0, float fParam1)
{
	if (!func_18(uParam0))
	{
		return false;
	}
	if (func_234(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_104(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (iLocal_4 != GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 2f, 3.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(GET_HASH_KEY("DEFAULT_SCRIPTED_CAMERA"), vVar0, 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + 125f), 51.28f, false, 2);
	vVar3 = { 1.1081f, 1.7384f, 0.4631f };
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_23, Global_35, vVar3, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_23, Global_35, -0.7722f, -0.593f, 0.2919f, true);
	if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_23, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_88(130.648f, 1.3841f);
	}
	func_95(&(uParam0->f_25));
	uParam0->f_28 = 1;
}

bool func_105()
{
	return Global_1898164.f_163;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_107()
{
	return Global_1935436.f_9;
}

bool func_108(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_43617))
	{
		Global_43617 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(Global_43617);
	iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam0, fParam3, Global_43617, iParam4);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43617);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iParam7 == 1 && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
		}
		else if (iParam5 != iVar3 && iParam6 != iVar3)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_235(vVar0, vParam1);
}

bool func_110(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_111()
{
	switch (iLocal_4)
	{
		case GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL"):
			return 0.5625f;
	}
	return 0.25f;
}

bool func_112(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_113(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_114(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_115(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_132(iParam0, 1);
	func_133(iParam0, 1);
	func_134(iParam0, 128);
}

int func_116(int iParam0)
{
	return iParam0;
}

bool func_117(int iParam0)
{
	switch (func_17())
	{
		case -1:
			return (Global_1357549.f_1494 && iParam0) != 0;
	}
	return false;
}

bool func_118(int iParam0)
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
	iVar0 = func_139(func_65());
	if (func_215(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_215(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_215(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_215(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_215(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_215(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_215(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_215(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_215(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_215(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_215(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_215(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_215(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_215(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_215(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_215(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_215(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_119(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_120(int iParam0)
{
	return (Global_1392040.f_1 && iParam0) != 0;
}

void func_121(int iParam0)
{
	if (!func_236(iParam0))
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

void func_122(bool bParam0)
{
	if (bParam0)
	{
		Global_1913814.f_209[1] = 1;
	}
	Global_1913814.f_209[0] = 1;
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		func_237(4);
	}
	func_237(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_124(var uParam0)
{
	int iVar0;
	bool bVar1;

	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_WHISTLE"), false);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (uParam0->f_18 != iVar0)
	{
		if (uParam0->f_18 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_18 = iVar0;
		if (!func_238(uParam0) && bVar1)
		{
			func_202("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

char* func_125(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_242(func_241(func_239(iParam0), func_240(), 1, 63));
	sVar2 = func_242(func_241(sVar0, sVar1, 1, 63));
	return sVar2;
}

bool func_126()
{
	int iVar0;

	if (!func_243(&Global_35))
	{
		return false;
	}
	iVar0 = func_244(1108822547);
	switch (iVar0)
	{
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_054_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_002_2"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_008"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_001_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_011_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_004_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_009_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_028_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_VALSHERIFF_HAT_000"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_038_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000"):
		case GET_HASH_KEY("CLOTHING_SP_CIVIL_WAR_HAT_000_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_086"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_000_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_008_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_048_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_048"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_063_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_063_ALT01"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_015_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_068"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_007_1"):
		case GET_HASH_KEY("CLOTHING_SP_SCARECROW_01_HAT_000_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_010_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_055"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_061_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_033_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_100"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_067_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_002_ALT02"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_007_ALT02"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_052"):
		case GET_HASH_KEY("CLOTHING_SP_CHINESE_LABOR_HAT_000_1"):
		case GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"):
		case -733535491: /* GXTEntry: "Plantation Slouch Hat" */
		case GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_001_000"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_066_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_006_ALT02"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_017_ALT02"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_012_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_045"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_070_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_064_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_041_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_010_1"):
		case GET_HASH_KEY("CLOTHING_SP_DEAD_MINER_HAT_000_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_034_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_030_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_006_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_047_ALT02"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_003_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_045_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_069_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_005"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_093"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_020"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_046_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_073_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_053_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_004"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_079"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_EXOTICCOLLECTOR_HAT_000"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_041"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_072_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_065_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_029_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_032_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_069"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_003_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_016_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_013"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_031_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_008_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_012"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_025"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_007_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_027_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_015"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_060"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_075"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_133"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_011_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_071_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_FISHCOLLECTOR_HAT_000"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_013_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_089"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_068_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_102"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_002_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_008_11"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_047_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_050"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_050_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_000"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_004_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_051"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_009_1"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_000_005_1"):
		case GET_HASH_KEY("CLOTHING_ITEM_SP_COLLECTABLE_HAT_MR1_016"):
		case GET_HASH_KEY("CLOTHING_HL_PLAYER_HAT_062_1"):
			return true;
		default:
			break;
	}
	return false;
}

int func_127(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_113(iVar0, 2))
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
				func_115(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_128()
{
	var uVar0;

	if (((ENTITY::IS_ENTITY_DEAD(func_205(7)) || TASK::IS_PED_IN_WRITHE(func_205(7))) || func_245(Global_36, ENTITY::GET_ENTITY_COORDS(func_205(7), true, false)) > func_218(7)) && ((ENTITY::IS_ENTITY_DEAD(func_205(1)) || TASK::IS_PED_IN_WRITHE(func_205(1))) || func_245(Global_36, ENTITY::GET_ENTITY_COORDS(func_205(1), true, false)) > func_218(1)))
	{
		return false;
	}
	if (!func_246() && !func_247(68))
	{
		return false;
	}
	if (func_74(0, 0, 1))
	{
		if (!func_217(51))
		{
			return false;
		}
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	uVar0 = 40;
	if (!func_248(&uVar0, 1, 1))
	{
		return false;
	}
	return true;
}

int func_129(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_249(vParam0, 1);
	if (iVar0 == func_250())
	{
		return 1;
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1, bool bParam2)
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

void func_131(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_132(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_113(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_133(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_135()
{
	return Global_1898068;
}

int func_136(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_251(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_137(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_138(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_139(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_140(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_141(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_142(int iParam0, int iParam1)
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

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_252(iParam0, iParam6);
	func_253(iParam0, iParam5);
	func_254(iParam0, iParam4);
	func_255(iParam0, iParam3);
	func_256(iParam0, iParam2);
	func_257(iParam0, iParam1);
}

bool func_144(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_258(2);
	func_259(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_147(bool bParam0)
{
	if (func_17() != -1)
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
		func_231(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_231(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_260(1, bParam0, 1);
	func_261();
	Global_40.f_11095.f_43 = bParam0;
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_262(2);
	func_263(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_149(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_264(2);
	func_265(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_150(int iParam0, bool bParam1, bool bParam2)
{
	func_266(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_151()
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

int func_152(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_268(func_267(iParam0));
}

bool func_153(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_154(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_155(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_156(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_269(iParam0))
	{
		return false;
	}
	if (func_270(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_270(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_270(iParam0, 4, 1))
	{
		return false;
	}
	if (func_271(iParam0, 33, 1))
	{
		return false;
	}
	if (func_272(iParam0))
	{
		return false;
	}
	if (func_273(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_157(int iParam0)
{
	if (func_160(iParam0))
	{
		if (func_274(Global_1360165[iParam0 /*1157*/], 0))
		{
			return true;
		}
	}
	return false;
}

int func_158(int iParam0)
{
	if (func_160(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_159(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_156(iParam0, 1, 0))
	{
		if (func_157(iParam0))
		{
			iVar0 = func_275(iParam0, 0);
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar0))
				{
					return false;
				}
				if (bParam3 && !PED::IS_PED_READY_TO_RENDER(func_276(iParam0)))
				{
					return false;
				}
				if ((bParam1 || !func_277(func_276(iParam0), 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar0);
					func_278(iParam0, 0);
					if (iParam2 && func_279(Global_1360165[iParam0 /*1157*/].f_63))
					{
						func_280(iParam0, 65, 0);
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_160(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	if (bParam1)
	{
		if (!func_274(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_281(), 1);
}

void func_162(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_160(iParam0))
	{
		return;
	}
	if (!func_161(iParam0, 0))
	{
	}
	func_282(iParam0);
	Global_1359489.f_15 = func_283(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			Global_1359489[iVar0] = -1;
		}
		iVar0++;
	}
	func_284();
	func_285(iParam0, 32, 1);
	if (func_274(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], GET_HASH_KEY("REL_GANG_DUTCHS"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_170();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

int func_163()
{
	return Global_1310750.f_16037;
}

bool func_164(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_166(int iParam0)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	if (func_286(64) && func_287(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_167(int iParam0)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_168(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_164(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_288(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_169(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590.f_19547)
	{
		Global_1327590.f_19547[iParam0 /*5*/].f_4 = 1;
	}
}

int func_170()
{
	return Global_1894899.f_2;
}

void func_171(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_172(float fParam0)
{
	if (func_289(1) < fParam0)
	{
		func_290(1, fParam0, 0);
	}
	if (func_289(2) < fParam0)
	{
		func_290(2, fParam0, 0);
	}
	if (func_289(0) < fParam0)
	{
		func_290(0, fParam0, 0);
	}
}

bool func_173(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_292(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_293(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_295(iVar0, iParam1, func_294(iParam0, iParam1));
	func_296(iVar0, iParam1);
}

void func_175(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_176()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_177(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_178(1);
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		func_297(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_298(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_180(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_63 & 64512 != 0;
}

void func_181(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_179(iParam0))
	{
		return;
	}
	if (func_299(&(Global_1835011[iParam0 /*74*/]), 8192))
	{
		bVar0 = true;
	}
	Global_1835011[iParam0 /*74*/].f_63 = 0;
	if (!bParam1 && bVar0)
	{
		Global_1835011[iParam0 /*74*/].f_63 |= 2;
		Global_1835011[iParam0 /*74*/].f_63 |= 8192;
	}
}

void func_182(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_153(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	}
	func_300(&(Global_1347702[iParam0 /*49*/].f_14));
	func_301(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
	func_302(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
	if (bVar0)
	{
		if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				func_304(iParam0, func_303(iParam0), 0, 0);
			}
		}
		else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				func_304(iParam0, func_305(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
		}
	}
}

void func_183(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_306() - fParam1);
	func_307(uParam0, 1);
	func_308(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_184()
{
	if (Global_1935689.f_17 == 3)
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_310(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_311(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_312(iParam0, Var0, Var0.f_4, bParam4) };
	return func_313(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_186()
{
	if (func_274(Global_35, 0))
	{
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, GET_HASH_KEY("PROP_PLAYER_OPEN_CASHBOX")))
		{
			return true;
		}
	}
	return false;
}

void func_187(int iParam0, int iParam1)
{
	Global_1357549.f_1672 = iParam0;
	Global_1357549.f_1673 = iParam1;
}

int func_188()
{
	return Global_1357549.f_1672;
}

bool func_189(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (Global_1935689.f_8)
	{
		return false;
	}
	if (((iParam0 != GET_HASH_KEY("CUSTOM_SATCHEL") && iParam0 != GET_HASH_KEY("KIT_CAMP")) && iParam0 != GET_HASH_KEY("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_314(iParam0);
		if (func_191(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_315(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_316())
		{
			return false;
		}
	}
	if (!func_317(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_190(int iParam0)
{
	if (func_198(iParam0) == GET_HASH_KEY("EMOTE"))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_96(0), iParam0, func_318(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("KIT_CAMP"):
		case GET_HASH_KEY("KIT_CAMP_SIMPLE"):
			if (!Global_1392040.f_2)
			{
				func_319(1, 1);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
		case GET_HASH_KEY("KIT_HANDHELD_CATALOG"):
			func_202(MISC::VAR_STRING(0, 163043886 /* GXTEntry: "You are not allowed to use Handheld Catalogue at the moment." */, Global_36559), 10000, 0, 0, 0, 1);
			break;
	}
	return true;
}

bool func_191(int iParam0, int iParam1)
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

void func_192(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
		case GET_HASH_KEY("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (func_320())
			{
				func_321(GET_HASH_KEY("JOURNAL_RC_MAYOR4_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_MAYOR4_AR")))
			{
				func_321(GET_HASH_KEY("JOURNAL_RC_MAYOR4B_JN"), 0);
			}
			break;
		case GET_HASH_KEY("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_321(GET_HASH_KEY("JOURNAL_RC_MAYOR4A_JN"), 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
		case GET_HASH_KEY("DOCUMENT_RCM_FMA_LETTER"):
			func_322(Global_1347702[80 /*49*/].f_15, 1);
			if (func_320() == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_RC_FMA5_1_AR"), 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_FMA5_1_AR")))
			{
				if (func_323(77))
				{
					func_321(GET_HASH_KEY("JOURNAL_RC_FMA5_2_JN"), 0);
				}
				else
				{
					func_321(GET_HASH_KEY("JOURNAL_RC_FMA5_1_JN"), 0);
				}
			}
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			if ((func_176() && !func_324(51)) && !func_325(1048576))
			{
				func_326(2);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
				func_329(1048576);
			}
			break;
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			if ((func_176() && !func_324(51)) && !func_325(16384))
			{
				func_326(1);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
				func_329(16384);
			}
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			if ((func_176() && !func_324(40)) && !func_330(32))
			{
				func_331(4);
				func_327(39, 0, 0, 0, 0, -1, 0);
				func_328(39, 0, 0, 0, 0, 0, 2, 0);
				func_332(32);
			}
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			if ((func_176() && !func_324(42)) && !func_333(16))
			{
				func_334(8);
				func_327(41, 0, 0, 0, 0, -1, 0);
				func_328(41, 0, 0, 0, 0, 0, 2, 0);
				func_335(16);
			}
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if ((func_176() && !func_324(50)) && !func_336(32))
			{
				func_337(4);
				func_327(49, 0, 0, 0, 0, -1, 0);
				func_328(49, 0, 0, 0, 0, 0, 2, 0);
				func_338(32);
				if (!func_339(Global_1347702[50 /*49*/].f_15, 1))
				{
					if (func_320() == 1)
					{
						func_321(GET_HASH_KEY("JOURNAL_RC_ROCKCARV15_AR"), 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_ROCKCARV15_AR")))
					{
						func_321(GET_HASH_KEY("JOURNAL_RC_ROCKCARV15_JN"), 0);
					}
				}
			}
			break;
		case GET_HASH_KEY("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = GET_HASH_KEY("TP_CATALOGUE_LETTER_01");
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_193(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_FIELD_MANUAL"):
			func_334(16);
			break;
	}
}

void func_194(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_GUNSLINGER_1_NOTE"):
		case GET_HASH_KEY("DOCUMENT_GUNSLINGER_2_NOTE"):
		case GET_HASH_KEY("DOCUMENT_GUNSLINGER_3_NOTE"):
		case GET_HASH_KEY("DOCUMENT_GUNSLINGER_5_NOTE"):
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

bool func_195(int iParam0)
{
	return true;
}

bool func_196(int iParam0, bool bParam1, bool bParam2)
{
	if (func_340(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_341(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_342(iParam0);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_343())
				{
					if (func_243(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, GET_HASH_KEY("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, GET_HASH_KEY("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					func_202("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				func_344(iParam0);
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_345(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_346(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_347(iParam0);
				}
				else
				{
					func_348(iParam0);
				}
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_349(iParam0);
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_350(iParam0);
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_351(iParam0);
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_352(iParam0);
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, GET_HASH_KEY("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_353(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_354(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_355(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_356(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_357(iParam0);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_358(iParam0);
				return true;
			}
			break;
	}
	return false;
}

void func_197(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!func_359(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_360(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { Param0 };
			Global_1934603.f_161++;
			func_361(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_198(int iParam0)
{
	vector3 vVar0;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_200(int iParam0)
{
	struct<2> Var0;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_201(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (func_198(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if (func_200(iParam0) == -999503751)
		{
			iVar0 = func_207(iParam0);
			if ((iVar0 != -1 && !func_362(iVar0)) || !func_317(iParam0, 1, 0))
			{
				return false;
			}
		}
	}
	return true;
}

var func_202(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_203(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_35)
		{
			if (iParam1 == GET_HASH_KEY("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_363(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_204(int iParam0)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_364())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_205(int iParam0)
{
	iParam0 = func_291(iParam0);
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

bool func_206(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("CLOTHING_FANCY_SUIT"):
			return 14;
		case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case GET_HASH_KEY("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case GET_HASH_KEY("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case GET_HASH_KEY("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case GET_HASH_KEY("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case GET_HASH_KEY("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case GET_HASH_KEY("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_365(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_366(Var0);
}

int func_209(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_367())
	{
		return 0;
	}
	if (!func_368(iParam0))
	{
		return 0;
	}
	if (func_369(iParam0))
	{
		iVar0 = 0;
		if (func_200(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_370(&iVar0, 2);
			}
		}
		return func_371(iParam0, iVar0);
	}
	return 0;
}

void func_210(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = Global_1946804.f_1497.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		func_211(Global_35, GET_HASH_KEY("CLOTHING_ITEM_HAT_NONE"), 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_212(iParam0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	func_211(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_372(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_373();
		func_365(128);
		return;
	}
	if (iVar1 == Global_1946804.f_57[iVar0 /*11*/])
	{
		func_212(iParam0, 1);
		return;
	}
	if (func_374(-2061583405, 0))
	{
		if (func_375(iVar1))
		{
			func_212(iVar1, 0);
		}
		else
		{
			func_376(iVar1, 1, 1, 0);
		}
		func_212(iParam0, 1);
		return;
	}
	if (func_375(iVar1))
	{
		func_212(iVar1, 0);
		func_212(iParam0, 1);
	}
	else if (func_375(iParam0))
	{
		if (iParam0 != func_377(0))
		{
			func_378(iParam0, iVar1);
			func_212(iParam0, 0);
			func_212(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_365(128);
			func_212(iParam0, 1);
		}
	}
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_310(iParam1, 1, 0) };
		iParam3 = func_379(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_381(iParam1, iParam2, func_380(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_382(1, (func_17() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_380(iParam3, 1) /*11*/])
			{
				func_208(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_372(32768) && iParam1 != Global_1946804.f_57[func_380(iParam3, 1) /*11*/])
			{
				func_373();
				func_208(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_208(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_383(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_208(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_384(0);
			func_385(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_208(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_212(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_96(0), &Var5, bParam1);
}

void func_213(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_214()
{
	if (func_387())
	{
		return;
	}
	if (func_388())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("KIT_HANDHELD_CATALOG"), GET_HASH_KEY("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		func_202(func_389(), 10000, 0, 0, 0, 1);
		Global_1914319.f_18996.f_4 = 0;
	}
}

bool func_215(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_216(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_390(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_217(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_390(Global_1835011[iParam0 /*74*/].f_1);
}

float func_218(int iParam0)
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

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_391(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_392(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_392(iParam0) + 1;
	fVar6 = func_393(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_394(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_219(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_220()
{
	return Global_40.f_1095.f_3054.f_1;
}

bool func_221(int iParam0)
{
	if (!func_395(32))
	{
		return false;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("FEATURE_POSSE_CAMP")))
	{
		return false;
	}
	if (!func_396())
	{
		return false;
	}
	if (func_397(16))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1225639.f_14) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::INT_TO_PLAYERINDEX(Global_1225639)))
	{
		return false;
	}
	if (iParam0 == 1 && func_398(Global_1131433.f_8, 1))
	{
		return false;
	}
	return true;
}

int func_222(int iParam0)
{
	if (!func_399())
	{
		return 0;
	}
	func_400(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

bool func_223(int iParam0)
{
	return func_398(Global_1131433.f_8, iParam0);
}

void func_224(int iParam0)
{
	struct<16> Var0;

	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_402(Var0, func_401(0, 15), 0, 0);
}

int func_225(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_226(int iParam0)
{
	int iVar0;

	if (!func_403(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (Global_1395601.f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_227()
{
	int iVar0;

	iVar0 = func_68();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_228(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_229()
{
	return Global_1395601;
}

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_404(iParam0, 1);
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
			func_405(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_317(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_406(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_407(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_407(iParam0, 0, 0) - iParam1) < 0)
		{
			func_230(iParam0, func_407(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_198(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_408(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_185(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_409(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_405(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_410(iParam0, iParam1);
	return 1;
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_413(iVar0, iVar1);
}

void func_232(bool bParam0)
{
	if ((func_17() != -1 || !bParam0) || func_414(Global_35))
	{
		func_415();
		return;
	}
	if (func_40(8388608) && !func_215(Global_1392040.f_1, 2048))
	{
		func_57(16777216);
		return;
	}
	func_415();
}

int func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_416(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_417(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_418(iParam0, bParam2);
	iVar2 = 0;
	if (func_407(iParam0, 0, 0) == 0)
	{
		if (func_419(iParam0))
		{
			iVar5 = func_420(iParam0);
			iVar6 = func_421(iVar5);
			iVar7 = func_422(iVar6) + 1;
			func_423(iVar5);
			if (func_324(38))
			{
				func_231(483, 0);
			}
			else
			{
				func_231(482, 0);
			}
			if (iVar7 == func_424(iVar6))
			{
				func_233(func_425(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_176() && func_426(4))
				{
					if (func_176() && (func_427(38) || func_324(38)))
					{
						func_328(38, func_425(iVar6), 0, 0, func_428(), 0, -1, 0);
						func_429(2);
					}
					else
					{
						func_328(38, func_425(iVar6), 0, 0, func_428(), 0, -1, 0);
						func_429(1);
					}
				}
			}
			else if (func_176() && func_426(4))
			{
				if (func_176() && (func_427(38) || func_324(38)))
				{
					func_328(38, 0, 0, 0, func_428(), 0, -1, 0);
					func_429(2);
				}
				else
				{
					func_328(38, 0, 0, 0, func_428(), 0, -1, 0);
					func_429(1);
				}
			}
			if (func_176() && func_426(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_176() && (func_427(38) || func_324(38)))
					{
						func_327(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_327(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_198(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_191(iParam0, 866047851) && !func_191(iParam0, -1979000645)) && !func_191(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_430(iParam0, 8388608) && !func_431(28))
	{
		func_432(28);
	}
	if (!bVar3)
	{
		if (func_191(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_200(iParam0) == -1447088266)
			{
				iVar1 = func_434(func_433(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_17() == -1)
					{
						func_435(iVar1);
					}
					if (func_409(0) && func_436(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_437(iParam0, iVar0, iParam5);
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
					if (func_17() == -1)
					{
						func_435(iParam0);
					}
					if (func_409(0) && func_436(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_437(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_198(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_438(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_198(iParam0) == GET_HASH_KEY("AMMO") && func_439(iParam0))
		{
			if (!func_440(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_191(iParam0, 866047851))
		{
			func_441(iParam0);
		}
		else if (func_191(iParam0, 2000026003))
		{
			func_442(iParam0);
		}
		else if (func_191(iParam0, -103750053))
		{
			func_444(func_443(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_444(func_445(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_191(iParam0, -121341956) && !func_191(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_339(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_231(498, 0);
				}
			}
			if (func_191(iParam0, -2017733358) || func_191(iParam0, -1369131378))
			{
				func_446(iParam0);
			}
		}
		else if (func_191(iParam0, -136654233))
		{
			if (func_191(iParam0, -1021472396))
			{
			}
		}
		else if (func_191(iParam0, -1466706512) && func_191(iParam0, 1147021565))
		{
			func_231(484, 0);
		}
		else if (func_191(iParam0, 1147021565) && func_191(iParam0, -524514947))
		{
		}
		else if (func_191(iParam0, 554195525))
		{
		}
		else if (func_191(iParam0, 589988438))
		{
			if (func_447())
			{
				func_448(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_191(iParam0, 787083290) && func_191(iParam0, 949916894))
		{
			func_449(iParam0);
		}
		else if (func_191(iParam0, -1718133314))
		{
			func_450(iParam0);
		}
		else if (func_191(iParam0, -1738650224))
		{
			func_451(iParam0);
		}
		else if (func_191(iParam0, -1112814642) && func_191(iParam0, 949916894))
		{
			func_452(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_191(iParam0, 1841149704))
		{
			func_453();
		}
		else if (func_191(iParam0, 606799272))
		{
			func_454(iParam0, iParam1);
			func_455(iParam0);
		}
		else if (func_191(iParam0, -1112814642) && func_191(iParam0, -1697809989))
		{
			func_456(iParam0, 0, 0, 0);
		}
		else if (func_191(iParam0, -2017733358) || func_191(iParam0, -1369131378))
		{
			func_446(iParam0);
		}
		else if (func_191(iParam0, -1921346699))
		{
			if (func_17() != -1)
			{
				return 0;
			}
			func_457(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_191(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_317(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_233(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_317(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_233(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_317(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_233(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_317(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_233(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_317(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_233(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_317(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_233(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_191(iParam0, -839724752) && func_430(iParam0, 4))
		{
			if (!func_324(42))
			{
				func_458(iParam0);
			}
		}
		else if (func_191(iParam0, 1399091007))
		{
			func_459(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_191(iParam0, 1248798204))
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
				func_233(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_432(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_211(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_460(&iVar9, 0))
				{
					func_436(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_17() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_211(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_231(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_461();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_462();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_463();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_464();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_261();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_465(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_466(499813453, 0);
				func_467(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_465(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_466(499813453, 0);
				func_467(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_465(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_466(499813453, 0);
				func_467(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_465(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_466(666607663, 0);
				func_468(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_465(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_466(666607663, 0);
				func_468(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_465(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_466(666607663, 0);
				func_468(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_465(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_466(-220219788, 0);
				func_469(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_465(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_466(-220219788, 0);
				func_469(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_465(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_466(-220219788, 0);
				func_469(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_465(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_466(218622660, 0);
				func_470(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_465(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_466(218622660, 0);
				func_470(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_465(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_466(390004462, 0);
				func_471(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_465(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_466(390004462, 0);
				func_471(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_465(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_466(390004462, 0);
				func_471(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_465(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_466(6410548, 0);
				func_472(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_465(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_466(6410548, 0);
				func_472(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_465(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_466(6410548, 0);
				func_472(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_465(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_466(6410548, 0);
				func_472(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_474(242, func_473(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_474(240, func_473(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_474(241, func_473(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_475(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_475(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_475(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_475(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_475(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_475(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_231(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_231(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_231(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_233(func_476(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_233(func_477(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_431(1))
				{
					func_231(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_231(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_17() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_231(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_478(&iVar10);
		if (!func_479(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_409(0))
		{
			return 1;
		}
		if (func_198(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_480(iParam0);
		}
		if (func_191(iParam0, -1979000645))
		{
			func_481(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_409(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_233(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_482(iVar2, 0);
		}
	}
	Var35 = { func_406(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_483(iParam0);
	if (fParam6 > 0f)
	{
		if (func_191(iParam0, -839724752))
		{
			func_484(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_405(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

float func_234(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_485(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_306() - uParam0->f_1);
}

float func_235(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_236(int iParam0)
{
	return func_113(iParam0, 2);
}

void func_237(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

bool func_238(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_43(uParam0[iVar0], 1, 1);
		iVar0++;
	}
	if (uParam0->f_18 > 3 && uParam0->f_18 <= 9)
	{
		(*uParam0)[1] = func_44("CMP_SLP_NOON", GET_HASH_KEY("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = func_44("CMP_SLP_EVE", GET_HASH_KEY("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = func_44("CMP_SLP_MDN", GET_HASH_KEY("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 9 && uParam0->f_18 <= 15)
	{
		(*uParam0)[2] = func_44("CMP_SLP_EVE", GET_HASH_KEY("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = func_44("CMP_SLP_MDN", GET_HASH_KEY("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = func_44("CMP_SLP_MRN", GET_HASH_KEY("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 15 && uParam0->f_18 <= 21)
	{
		(*uParam0)[3] = func_44("CMP_SLP_MDN", GET_HASH_KEY("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = func_44("CMP_SLP_MRN", GET_HASH_KEY("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = func_44("CMP_SLP_NOON", GET_HASH_KEY("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 21 || uParam0->f_18 <= 3)
	{
		(*uParam0)[0] = func_44("CMP_SLP_MRN", GET_HASH_KEY("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = func_44("CMP_SLP_NOON", GET_HASH_KEY("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = func_44("CMP_SLP_EVE", GET_HASH_KEY("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
	}
	bVar2 = true;
	if (Global_1392040.f_7 == -15)
	{
		Global_1392040.f_7 = func_65();
	}
	iVar3 = Global_1392040.f_7;
	func_66(&iVar3, 0, 0, 3, 0, 0, 0, 0);
	if (!func_67(iVar3))
	{
		if (Global_1392040.f_8 > 1)
		{
			bVar2 = false;
		}
	}
	else
	{
		Global_1392040.f_8 = 0;
	}
	if (func_53(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		bVar2 = false;
	}
	if (func_38((*uParam0)[0]))
	{
		if (uParam0->f_18 < 6)
		{
			iVar1 = (6 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 6;
		}
		func_486((*uParam0)[0], "CMP_SLP_MRN", iVar1, 1);
		func_32((*uParam0)[0], 1323335645, 0, 1);
		func_54((*uParam0)[0], bVar2, 1);
	}
	if (func_38((*uParam0)[1]))
	{
		if (uParam0->f_18 < 12)
		{
			iVar1 = (12 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 12;
		}
		func_486((*uParam0)[1], "CMP_SLP_NOON", iVar1, 1);
		func_32((*uParam0)[1], 1323335645, 0, 1);
		func_54((*uParam0)[1], bVar2, 1);
	}
	if (func_38((*uParam0)[2]))
	{
		if (uParam0->f_18 < 18)
		{
			iVar1 = (18 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 18;
		}
		func_486((*uParam0)[2], "CMP_SLP_EVE", iVar1, 1);
		func_32((*uParam0)[2], 1323335645, 0, 1);
		func_54((*uParam0)[2], bVar2, 1);
	}
	if (func_38((*uParam0)[3]))
	{
		iVar1 = (24 - uParam0->f_18);
		func_486((*uParam0)[3], "CMP_SLP_MDN", iVar1, 1);
		func_32((*uParam0)[3], 1323335645, 0, 1);
		func_54((*uParam0)[3], bVar2, 1);
	}
	return bVar2;
}

char* func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_487())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_487())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_487())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_487())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_240()
{
	int iVar0;

	iVar0 = func_488();
	switch (iVar0)
	{
		case GET_HASH_KEY("SANDSTORM"):
		case GET_HASH_KEY("OVERCASTDARK"):
		case GET_HASH_KEY("BLIZZARD"):
		case GET_HASH_KEY("WHITEOUT"):
		case GET_HASH_KEY("HURRICANE"):
		case GET_HASH_KEY("RAIN"):
		case GET_HASH_KEY("HAIL"):
		case GET_HASH_KEY("THUNDERSTORM"):
		case GET_HASH_KEY("GROUNDBLIZZARD"):
			return "04Storm";
		case GET_HASH_KEY("DRIZZLE"):
		case GET_HASH_KEY("THUNDER"):
		case GET_HASH_KEY("OVERCAST"):
		case GET_HASH_KEY("FOG"):
		case GET_HASH_KEY("SHOWER"):
		case GET_HASH_KEY("SNOW"):
		case GET_HASH_KEY("SLEET"):
		case GET_HASH_KEY("SNOWLIGHT"):
			return "03Clouds";
		case GET_HASH_KEY("HIGHPRESSURE"):
		case GET_HASH_KEY("CLOUDS"):
		case GET_HASH_KEY("MISTY"):
		case GET_HASH_KEY("SUNNY"):
		case GET_HASH_KEY("SNOWCLEARING"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_241(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

char* func_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_243(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_489(*uParam0, GET_HASH_KEY("HATS"), 0))
	{
		return true;
	}
	return false;
}

int func_244(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_380(iParam0, 1) /*3*/];
}

float func_245(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_246()
{
	return func_71(10, 0) >= 3;
}

bool func_247(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_339(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_248(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1 /*7*/] = -1;
		(uParam0[iVar1 /*7*/])->f_3 = 0;
		(uParam0[iVar1 /*7*/])->f_4 = 99999999;
		(uParam0[iVar1 /*7*/])->f_5 = 0f;
		(uParam0[iVar1 /*7*/])->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_490(iVar0))
		{
			if (func_491(iVar0, bParam2))
			{
				if (bParam1)
				{
					func_492(uParam0, iVar0);
				}
				else
				{
					func_493(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*7*/])->f_3)
		{
			if (func_403((*uParam0)[iVar0 /*7*/]))
			{
				iVar2++;
				(uParam0[iVar0 /*7*/])->f_5 = func_494((uParam0[iVar0 /*7*/])->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

int func_249(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_170();
	if (func_403(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_495(vParam0, iParam3);
}

int func_250()
{
	return Global_40.f_4283.f_1;
}

int func_251(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_252(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_137(*iParam0);
	iVar1 = func_136(*iParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_255(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_256(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_258(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850;
		case 1:
			return Global_1955569.f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_259(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_260(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_261()
{
	func_497();
	func_498();
	func_499();
}

int func_262(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850.f_2;
		case 1:
			return Global_1955569.f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_263(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iVar0, fParam0);
}

int func_264(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850.f_1;
		case 1:
			return Global_1955569.f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_265(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_266(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_496();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_500(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_501(iVar0, iParam0, fParam1);
	func_502(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_503(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_269(int iParam0)
{
	return iParam0 > -1;
}

bool func_270(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_271(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return false;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

bool func_272(int iParam0)
{
	return func_270(iParam0, 16, 1);
}

bool func_273(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_274(int iParam0, int iParam1)
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
	if (func_398(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_398(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_398(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_398(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_275(int iParam0, bool bParam1)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_505(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

int func_276(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_277(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_506(iParam0, Global_36, 1);
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
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_278(int iParam0, bool bParam1)
{
	int iVar0;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_275(iParam0, 0)))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(func_275(iParam0, 0));
		if (iVar0 != Global_1360165[iParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[iParam0 /*1157*/].f_47 = iVar0;
			StringCopy(&(Global_1360165[iParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(func_275(iParam0, 0), Global_1360165[iParam0 /*1157*/].f_47), 64);
			Global_1360165[iParam0 /*1157*/].f_56 = 1;
		}
	}
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_280(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_281()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_282(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_160(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_281());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_507(iParam0, 0, 0);
}

int func_283(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_508(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_281(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_281(), iVar3);
		if (func_509(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_510(iVar0);
		iVar2 = func_510(iVar0 + 1);
		if (!func_160(iVar1))
		{
			if (func_160(iVar2))
			{
				Global_1359489[iVar0] = iVar2;
				Global_1359489[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_286(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_287(int iParam0)
{
	return func_165(iParam0, Global_1310750.f_16072 | 64);
}

void func_288(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
	{
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;
	}
	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

float func_289(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_290(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_17() != -1)
	{
		return;
	}
	if (!func_431(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_511(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_503(iParam0), iVar0);
	func_513(func_512(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_514(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_231(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_231(func_515(iParam0), 1);
	}
	sVar1 = func_516(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_291(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_292(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_293(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_294(int iParam0, int iParam1)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

void func_295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_293(iParam2, 0, 100);
	if (func_517(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0, iParam2);
	}
}

void func_296(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_517(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_518(iParam1);
	sVar2 = func_519(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iParam0, sVar2, true, -1);
		}
		else
		{
			PED::_0xA6F67BEC53379A32(iParam0, sVar2);
		}
	}
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_300(var uParam0)
{
	*uParam0 = 0;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_303(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_304(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_153(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && func_74(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (func_520(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = func_521(iParam0);
	if (!bParam5 && func_522(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_303(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		func_523(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	func_524(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (func_17() == -1)
	{
		func_525(iParam0);
		iVar0 = func_526(Global_40.f_4283);
		if (func_403(iVar0) && func_527(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = func_528(iVar0);
		}
		if (func_529(iParam0, bVar1, iVar0))
		{
			func_530(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		func_531(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!func_522(iParam0) || func_154(Global_1347702[iParam0 /*49*/].f_12, 1)) || func_154(Global_1347702[iParam0 /*49*/].f_12, 512)) || func_532(Global_1347702[iParam0 /*49*/].f_13, 2048))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 580546400);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == GET_HASH_KEY("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		}
		else
		{
			func_531(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_533(iParam0))
		{
			if (iParam0 == 97)
			{
				func_231(185, 0);
			}
			else
			{
				func_231(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = func_202(MISC::VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_534(iParam0, 2);
	}
}

Vector3 func_305(int iParam0)
{
	vector3 vVar0;

	if (!func_153(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_535(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

float func_306()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_309(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<5> func_310(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_536(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_198(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_312(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_537(bParam1) };
			if (bParam2 && func_538(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_539(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_539(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_540(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_541(bParam1) };
			switch (func_200(iParam0))
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
			if (func_542(iParam0, -1823706425))
			{
				Var0 = { func_312(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_542(iParam0, -1483207246))
			{
				Var0 = { func_312(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_543(Var0, &Var27, bParam1, 0))
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

bool func_311(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_544(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_409(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_96(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> func_312(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_309(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_96(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_313(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_544(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_543(*uParam1, &Var0, bParam6, 0))
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
	if (!func_409(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_96(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_314(int iParam0)
{
	if (func_191(iParam0, 1573112293))
	{
		return func_545(iParam0);
	}
	switch (func_200(iParam0))
	{
		case -77448735:
			if (func_546(iParam0))
			{
				return func_545(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_545(iParam0);
		case 1802292908:
			return func_547();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_548();
		case -525676072:
			return func_548();
		case 1779021115:
			if (func_309(iParam0, 0))
			{
				if (iParam0 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
				{
					return func_549();
				}
			}
			return func_550();
		case -1823706425:
			return func_551();
		case -854348463:
			return func_552();
		default:
			if (func_309(iParam0, 0))
			{
				if (func_191(iParam0, 1192444843) || func_191(iParam0, -1540973036))
				{
					return func_553();
				}
				else if (func_191(iParam0, 1919582297))
				{
					return func_554();
				}
				else if (func_191(iParam0, 1147021565))
				{
					return func_555();
				}
				switch (iParam0)
				{
					case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return func_556();
					case GET_HASH_KEY("KIT_HORSE_BRUSH"):
						return func_557();
				}
			}
			return func_558();
	}
	return func_558();
}

bool func_315(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_559(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630.f_12 || *uParam0)
	{
		return false;
	}
	if (func_17() == 0)
	{
		if (Global_1935496.f_7 & 131072 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496.f_7 & 1024 != 0)
		{
			return false;
		}
	}
	if (Global_1935630.f_22)
	{
		return false;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496.f_7 & 32 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496.f_7 & 4096 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496.f_7 & 512 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_560(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return false;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_561(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return false;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_562(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return false;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return false;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_564(Global_1935630.f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_202("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return false;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496.f_7 & 8192 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496.f_7 & 32768 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496.f_7 & 16384 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496.f_7 & 16 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496.f_7 & 256 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_100();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496.f_7 & 524288 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496.f_7 & 262144 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496.f_7 & 2097152 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496.f_7 & 8388608 == 0)
		{
			return false;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496.f_7 & 33554432 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496.f_7 & 67108864 != 0)
		{
			return false;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496.f_7 & 134217728 == 0)
		{
			return false;
		}
	}
	if (Global_1935496.f_7 & 17825988 != 0)
	{
		return false;
	}
	return true;
}

bool func_316()
{
	int iVar0;
	int iVar1;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != GET_HASH_KEY("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != GET_HASH_KEY("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) && iVar1 != GET_HASH_KEY("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) && iVar1 != GET_HASH_KEY("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) && iVar1 != GET_HASH_KEY("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return true;
		}
	}
	return false;
}

bool func_317(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_309(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
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
		if (!func_565(iParam0, 1))
		{
			return false;
		}
	}
	return func_407(iParam0, 0, bParam2) >= iParam1;
}

bool func_318(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_319(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_17() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_38.f_19);
	}
	if (func_566())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_567(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_568())
	{
		if (bParam0)
		{
			if (func_68() != 8 && func_68() != 7)
			{
				func_202("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_202("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0, 1) || PED::IS_PED_SWIMMING(iVar0))
				{
					return false;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_53(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (func_569(&Global_1393447, 16))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_570())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_98(GET_HASH_KEY("SIMPLE_CRAFTING")) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("SIMPLE_CRAFTING")) > 0)
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_74(0, 1, 1) && !func_571(1))
	{
		if (bParam0)
		{
			if (func_217(15))
			{
				func_202("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_202("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return false;
	}
	if (func_572() == 8)
	{
		return false;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("CAMERA_ITEM")) > 0)
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_119(8388608))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_40(8388608))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_573(func_170()))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (((func_80() || func_574(func_170()) == 9) || func_575(func_170())) && !func_576())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_577(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_578())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		Global_1935496.f_131 = { Global_36 };
	}
	if (func_579(Global_35, Global_1935496.f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_580(Global_36, 5f))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144f && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("RCM_EVELYN_MILLER4")) > 0)
	{
		return false;
	}
	return true;
}

bool func_320()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_321(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_177(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_92(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_322(int iParam0, int iParam1)
{
	if (!func_155(iParam0))
	{
		return;
	}
	func_581(iParam0, iParam1);
}

bool func_323(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

bool func_324(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_339(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_325(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_326(int iParam0)
{
	Global_40.f_12019.f_26 = (Global_40.f_12019.f_26 || iParam0);
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_176() && (func_427(38) || func_324(38)))
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
			if (func_176() && (func_427(39) || func_324(39)))
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
			if (func_176() && (func_427(49) || func_324(49)))
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
		if (func_176() && (func_427(38) || func_324(38)))
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
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_584(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_583(func_425(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_176() && (func_427(39) || func_324(39)))
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
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_176() && (func_427(49) || func_324(49)))
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
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_176() && (func_427(38) || func_324(38)))
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
			if (func_176() && (func_427(39) || func_324(39)))
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
			iVar9 = func_585(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_176() && (func_427(41) || func_324(41)))
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
			if (func_176() && (func_427(49) || func_324(49)))
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
			iVar9 = func_585(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_586(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_587(iParam0, iVar13, iVar14))
	{
	}
	if (func_588(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_589(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_590(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_591(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_592(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_329(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_330(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_331(int iParam0)
{
	Global_40.f_12019.f_3 = (Global_40.f_12019.f_3 || iParam0);
}

void func_332(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_333(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_334(int iParam0)
{
	Global_40.f_12019.f_4 = (Global_40.f_12019.f_4 || iParam0);
}

void func_335(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_336(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_337(int iParam0)
{
	Global_40.f_12019.f_2 = (Global_40.f_12019.f_2 || iParam0);
}

void func_338(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

bool func_339(int iParam0, bool bParam1)
{
	switch (func_593(iParam0))
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

bool func_340(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_341(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = GET_HASH_KEY("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = GET_HASH_KEY("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = GET_HASH_KEY("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = GET_HASH_KEY("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_341(int iParam0, int iParam1)
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

void func_342(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("APPLY_LOTION_LEFT_HAND");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("APPLY_LOTION_LEFT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("APPLY_LOTION_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("APPLY_LOTION_BOTH_HANDS");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_343()
{
	return 1 == Global_40.f_7748.f_3;
}

void func_344(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_594())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_345(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_594())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_346(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_594())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_347(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_348(int iParam0)
{
	int iVar0;

	iVar0 = -680642132;
	switch (func_594())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_349(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_594())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_350(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_594())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_351(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_594())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_352(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_594())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_353(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_354(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_355(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_356(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_191(iParam0, 1573112293))
		{
			func_598(func_597(&iParam0), 1, 1);
		}
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_357(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_358(int iParam0)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_594())
	{
		case 0:
			iVar0 = GET_HASH_KEY("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = GET_HASH_KEY("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = GET_HASH_KEY("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_359(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_360(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_361(int iParam0)
{
	if (func_359(iParam0, 1))
	{
		func_599(1);
	}
}

bool func_362(int iParam0)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	if (func_601(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_363(int iParam0)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_602(iVar0))
	{
		return true;
	}
	return false;
}

int func_364()
{
	return Global_40.f_1095.f_3054;
}

void func_365(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_366(struct<4> Param0)
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
			if (func_603(Param0))
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
			func_604(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_365(8);
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
			if (func_603(Param0))
			{
				return;
			}
			func_604(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_365(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_385(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_367()
{
	return Global_1946804.f_2792;
}

bool func_368(int iParam0)
{
	if (func_605())
	{
		return false;
	}
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (!func_317(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_369(int iParam0)
{
	return func_606(iParam0);
}

void func_370(int iParam0, int iParam1)
{
	func_607(iParam0, iParam1);
}

int func_371(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_608(iParam0);
	if (func_191(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_609(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_610();
			}
			else
			{
				iVar0 = func_611();
			}
		}
		else if (func_398(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_612();
		}
		else
		{
			iVar0 = func_613();
		}
	}
	else if (func_614(&iVar2))
	{
		if (func_191(iVar2, -1303648999))
		{
			iVar0 = func_610();
		}
		else
		{
			iVar0 = func_611();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_612();
	}
	else
	{
		iVar0 = func_613();
	}
	if (iVar0 != 0)
	{
		Global_1946804.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_372(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_373()
{
	func_615(&(Global_1946804.f_2776));
	func_616(32768);
	func_617(1108822547, 8, 6);
}

bool func_374(int iParam0, bool bParam1)
{
	return func_618(iParam0, 0) < func_619(iParam0, bParam1);
}

bool func_375(int iParam0)
{
	var uVar0;

	return func_620(iParam0, &uVar0);
}

void func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_621(iParam0))
	{
		return;
	}
	iVar0 = func_200(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_622(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_622(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_622(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_622(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_622(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_622(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_377(0))
	{
		func_623(iParam0, 1);
		if (func_624() == 1160113249)
		{
			func_623(func_377(-2125499975), 0);
		}
		else
		{
			func_623(func_377(1160113249), 0);
		}
	}
	func_625();
	if (func_626(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_96(0), iParam0, 0);
	}
	func_212(iParam0, bParam3);
	if (bParam2)
	{
		func_627(0, 0);
	}
}

int func_377(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_624();
	}
	if (iParam0 == 1160113249)
	{
		return GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_200(iParam1);
	if (iVar0 != func_200(iParam0))
	{
		return;
	}
	func_628(iParam0, iParam1, 1);
}

int func_379(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_629(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_380(int iParam0, int iParam1)
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

bool func_381(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_630();
	if (iParam2 == 39)
	{
		Var0 = { func_310(iParam0, 1, 0) };
		iParam2 = func_380(func_379(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_191(iParam0, 866047851) && func_631(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_372(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_632(func_629(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_633(iParam2);
	func_634(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_635(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_635(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_636(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_637(iParam0, iParam2, iParam1, func_17() != -1);
	if (bParam4)
	{
		func_638(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_638(&(Global_1946804.f_1378), 1, 0);
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
				func_617(func_629(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_382(bool bParam0, bool bParam1, bool bParam2)
{
	func_639(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_380(iParam0, 1);
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

void func_384(int iParam0)
{
	struct<4> Var0;

	if (func_640(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_641(Var0);
}

void func_385(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_641(Var0);
}

int func_386(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_312(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_96(bParam6), &Var0, 0);
	return uVar4;
}

bool func_387()
{
	return Global_1914319.f_18996.f_1;
}

bool func_388()
{
	return Global_1914319.f_18996;
}

char* func_389()
{
	switch (Global_1914319.f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

bool func_390(int iParam0)
{
	int iVar0;

	iVar0 = func_593(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_391(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_392(int iParam0)
{
	iParam0 = func_291(iParam0);
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

float func_393(int iParam0)
{
	iParam0 = func_291(iParam0);
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

float func_394(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_395(int iParam0)
{
	return func_398(Global_1129544[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

bool func_396()
{
	return !func_395(2);
}

bool func_397(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return (Global_1147326.f_1 && iParam0) != 0;
}

bool func_398(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_399()
{
	if ((((func_318(0) && !func_642()) || func_643()) || Global_1935689.f_1) || func_644())
	{
		return false;
	}
	return true;
}

void func_400(int iParam0)
{
	Global_1898068.f_8 = iParam0;
}

var func_401(int iParam0, int iParam1)
{
	return func_645(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, GET_HASH_KEY("VOLCYLINDER"), iParam0, iParam1);
}

void func_402(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_646(&(Global_1058888.f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

bool func_403(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_191(iParam0, 1399091007))
	{
		func_647(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_309(iParam0, 0))
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
	if (!func_648())
	{
		func_649(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_650(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_650(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_430(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_198(iParam0);
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
	else if (!func_651(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_652(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_473(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_191(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_473(iParam0));
	}
	func_653(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_406(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_309(iParam0, 0))
	{
		return Var0;
	}
	if (func_191(iParam0, -305066475))
	{
		if (func_17() == -1)
		{
			if (func_191(iParam0, -537818634))
			{
				return func_654(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_654(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_191(iParam0, -537818634))
	{
		return func_654(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_191(iParam0, 2084895747))
	{
		return func_654(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_407(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_404(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_655(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_96(bParam2), iParam0, 0);
	return iVar2;
}

bool func_408(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_656(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_657(&Var0, func_537(0));
	}
	if (!func_658(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_659(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_313(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_660(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_409(bool bParam0)
{
	if (func_17() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_96(bParam0));
}

void func_410(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_191(iParam0, 606799272))
		{
			func_661(iParam0, iParam1);
		}
		if (func_191(iParam0, -1112814642) && func_191(iParam0, -1697809989))
		{
			func_456(iParam0, iParam1, 1, 0);
		}
	}
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_412(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_662(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_663(iParam0))
	{
		return false;
	}
	if (func_664(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_665(iParam0, 1)) || func_520(32768))
	{
		if (!func_665(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_666())
	{
		return false;
	}
	return true;
}

void func_413(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_414(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_415()
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
}

bool func_416(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_17() == -1)
	{
		if (func_667(iParam0) && func_668(iParam0))
		{
			func_669(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_417(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_670(iParam0, iParam1);
	Var0 = { func_310(iParam0, 0, 1) };
	iVar5 = func_671(iParam0, &Var0, 0, 0);
	iVar6 = func_672(iParam0, 0);
	if ((iVar5 > 1 && !func_673()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_191(iParam0, -2051813666))
		{
			func_231(583, 1);
		}
		else
		{
			func_231(582, 0);
		}
	}
	if (func_674(iParam0, &Var0, *iParam1, 0, 0))
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

void func_418(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_341(iParam0, -949239683))
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

bool func_419(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_420(iParam0) != 0;
}

int func_420(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_675())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_676(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_421(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_675())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_421(iVar0))
		{
			if (func_317(func_676(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_423(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_677(48);
	func_86(0, -1);
}

int func_424(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_425(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_426(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_339(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_427(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_390(Global_1347702[iParam0 /*49*/].f_15);
}

int func_428()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_317(func_678(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_429(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

bool func_430(int iParam0, int iParam1)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_431(int iParam0)
{
	if (!func_679(iParam0))
	{
		return false;
	}
	return func_680(iParam0);
}

void func_432(int iParam0)
{
	if (!func_679(iParam0))
	{
		return;
	}
	func_681(iParam0);
	func_682(iParam0);
}

int func_433(int iParam0, bool bParam1)
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
	if (func_309(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_683(iVar0) || func_684(iVar0))
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

int func_434(int iParam0, bool bParam1)
{
	if (!func_309(iParam0, 0))
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

void func_435(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_685(iParam0))
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

bool func_436(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_310(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_686((398 + iVar28), 1);
			if (func_539(iParam0, &Var0, iVar5, 0))
			{
				if (func_540(iParam0, &Var6, iVar5))
				{
					Var29 = { func_312(iParam0, Var0, iVar5, 0) };
					func_313(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_409(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_437(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_687(iParam0, iParam1);
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

bool func_437(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_439(iParam0))
	{
		return false;
	}
	if (!func_409(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_438(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_434(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_17() == -1)
		{
			func_435(iVar0);
			if (iParam1 == 1248274121)
			{
				func_688(iVar0);
			}
		}
		if (!func_674(iParam0, &uVar1, 1, 0, 0))
		{
			func_669(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_689(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_436(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_436(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_436(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_690())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_691(iVar0))
				{
					func_436(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_436(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_692(Global_35, 2, 0, 1);
				if ((((func_685(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_431(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_685(iVar7) && func_431(24))
				{
					if (!func_436(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_436(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_436(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_231(480, 1);
	}
	return true;
}

bool func_439(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_440(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_439(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_685(iVar4))
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
	if (func_317(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_474(func_693(iParam0), func_473(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_17() == -1)
		{
			if (func_339(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_231(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_409(0))
	{
		if (func_437(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_479(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_441(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_694()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_695(Global_35, iParam0, &uVar0))
		{
			func_211(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_261();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_261();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_261();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_463();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_461();
			break;
	}
}

void func_442(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_461();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_462();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_463();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_464();
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
			func_261();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_696();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_697();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_443(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_444(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_445(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_446(int iParam0)
{
	bool bVar0;

	bVar0 = func_191(iParam0, -2017733358);
	if (func_698() < 3)
	{
		if (bVar0)
		{
			if (func_700(func_699(iParam0), iParam0))
			{
				func_474(79, func_473(func_699(iParam0)), 1);
			}
			else
			{
				func_474(78, func_473(func_699(iParam0)), 1);
			}
		}
		else
		{
			func_474(80, func_473(func_701(iParam0)), 1);
		}
	}
}

bool func_447()
{
	if (((((func_702(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_702(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_702(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_702(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_702(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_702(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_448(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_703(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_704(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_705(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_449(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_328(39, 0, 0, 0, 0, 0, 1, 0);
			func_327(39, 0, 0, 0, 0, -1, 0);
			func_332(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_328(41, 0, 0, 0, 0, 0, 1, 0);
			func_327(41, 0, 0, 0, 0, -1, 0);
			func_335(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_328(49, 0, 0, 0, 0, 0, 1, 0);
			func_327(49, 0, 0, 0, 0, -1, 0);
			func_338(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_328(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_706(1), 0, -1, 0);
			func_707(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_328(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_706(2), 0, -1, 0);
			func_707(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_328(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_706(4), 0, -1, 0);
			func_707(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_328(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_706(8), 0, -1, 0);
			func_707(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_328(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_706(16), 0, -1, 0);
			func_707(16);
			break;
	}
}

void func_450(int iParam0)
{
	if (func_708() == 1)
	{
		if (func_324(39))
		{
			func_231(342, 0);
		}
		else
		{
			func_231(343, 0);
			func_332(1);
		}
	}
	if (func_708() >= 30)
	{
		func_231(344, 0);
	}
	func_328(39, 0, 0, 0, 0, 0, -1, 0);
	func_327(39, 0, 0, func_708(), 30, 1, 0);
}

void func_451(int iParam0)
{
	if (func_709() == 1)
	{
		if (func_324(49))
		{
			func_231(409, 0);
		}
		else
		{
			func_231(410, 0);
			func_338(1);
		}
	}
	if (func_709() >= 10)
	{
		func_231(411, 0);
	}
	func_328(49, 0, 0, 0, 0, 0, -1, 0);
	func_327(49, 0, 0, func_709(), 10, 1, 0);
}

void func_452(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_231(437, 0);
			func_231(440, 0);
			func_710(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_329(1);
			func_711(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_710(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_329(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_710(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_329(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_710(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_329(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_231(438, 0);
			func_710(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_328(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_329(32768);
			break;
		default:
			func_231(439, 0);
			break;
	}
}

void func_453()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_17() == -1)
	{
		if (!func_324(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_231(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_231(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_231(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_231(400, 0);
			}
		}
		else if (func_191(iParam0, 412399755))
		{
			func_712(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_713() == 0)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_324(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_231(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_231(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_231(401, 0);
			}
		}
		else if (func_191(iParam0, 709057512))
		{
			func_712(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_713() == 1)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_324(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_231(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_231(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_231(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_231(398, 0);
			}
		}
		else if (func_191(iParam0, -1478961327))
		{
			func_712(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_713() == 2)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_717(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_718(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_677(48);
					}
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_324(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_231(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_231(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_231(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_231(406, 0);
			}
		}
		else if (func_191(iParam0, -1238404098))
		{
			func_712(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_713() == 3)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_324(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_231(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_231(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_231(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_231(403, 0);
			}
		}
		else if (func_191(iParam0, 1160548794))
		{
			func_712(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_713() == 4)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_455(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_717(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_718(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_677(48);
		}
	}
}

void func_456(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_317(func_719(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_720(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_721(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_17() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_448(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_448(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_448(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_448(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_448(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_448(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_448(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_448(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_448(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_448(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_448(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_448(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_448(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_722())
			{
				func_448(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_448(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_448(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_448(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_448(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_448(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_448(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_448(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_448(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_448(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_448(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_448(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_448(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_448(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_458(int iParam0)
{
	if (func_324(41))
	{
		func_231(363, 0);
	}
	else
	{
		func_231(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_86(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_723(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_724(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_725(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_459(int iParam0, int iParam1)
{
	var uVar0;

	func_647(iParam0, iParam1, &uVar0);
}

bool func_460(int iParam0, bool bParam1)
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
	iVar18 = func_692(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_692(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_726("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_659(&Var3, iVar2, iVar0, iVar1))
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
						func_660(iVar0);
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

void func_461()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_462()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_463()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_464()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_465(int iParam0, int iParam1, bool bParam2)
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

void func_466(int iParam0, bool bParam1)
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
	func_582(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_467(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_468(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_469(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_470(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_471(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_472(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_473(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_474(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_665(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_475(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_665(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
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

int func_476()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_675())
	{
		return func_477();
	}
	iVar4 = (func_675() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_675())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_727(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_676(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_477()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_675());
	return func_676(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_478(int iParam0)
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

int func_479(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_310(iParam0, 0, 1) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	return func_728(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_17() != -1)
	{
		return;
	}
	switch (func_200(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_618(81053684, 0) <= 0)
			{
				func_208(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_208(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_207(iParam0);
			if (func_600(iVar0))
			{
				func_729(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_208(30, iParam0, 0, 0, 0);
			}
			if (func_624() == -2125499975 || func_624() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_624() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_374(-525676072, 0))
			{
				if (func_730(-525676072, &iVar1))
				{
					func_208(33, iVar1, 0, 0, 0);
				}
			}
			func_208(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_731(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_211(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_432(24);
		if (func_460(&iVar2, 0))
		{
			func_436(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_481(int iParam0)
{
	if (func_191(iParam0, 943695443))
	{
		func_732(0, iParam0);
	}
	else if (func_191(iParam0, -2096528786))
	{
		func_732(1, iParam0);
	}
	else if (func_191(iParam0, -1094167013))
	{
		func_732(2, iParam0);
	}
	else if (func_191(iParam0, 1936654645))
	{
		func_732(3, iParam0);
	}
	else if (func_191(iParam0, 1306489306))
	{
		func_732(4, iParam0);
	}
	else if (func_191(iParam0, 435762317))
	{
		func_732(5, iParam0);
	}
	else if (func_191(iParam0, 1259363210))
	{
		func_732(6, iParam0);
	}
	else if (func_191(iParam0, 881398259))
	{
		func_732(7, iParam0);
	}
	else if (func_191(iParam0, -541549214))
	{
		func_732(8, iParam0);
	}
	else if (func_191(iParam0, 130796156))
	{
		func_732(-1, iParam0);
	}
}

int func_482(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_733(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_734(iParam0, &Var4, &uVar0, iParam1);
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_17() == -1)
			{
				if (func_339(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_231(109, 1);
				}
			}
			break;
	}
}

void func_484(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_736(func_735(0));
	func_653(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_737(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_485(var uParam0)
{
	return func_102(*uParam0, 2);
}

void func_486(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

bool func_487()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

var func_488()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_489(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

bool func_490(int iParam0)
{
	return STREAMING::_0x8D56BDA343D9519F(func_738(iParam0));
}

bool func_491(int iParam0, bool bParam1)
{
	if (!func_176())
	{
		return true;
	}
	if (func_739(iParam0))
	{
		if (iParam0 == func_170())
		{
			return false;
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == GET_HASH_KEY("PLAYER_ZERO"))
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return false;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_35) == GET_HASH_KEY("PLAYER_THREE"))
		{
			if (iParam0 == 37 && !func_247(9))
			{
				return false;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return false;
				}
				if (func_250() != iParam0)
				{
					return false;
				}
				break;
			case 43:
				if (!bParam1)
				{
					return false;
				}
				break;
		}
		if (func_572() == 8)
		{
			if (func_740(iParam0, 1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_492(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	iVar0 = func_741(iParam1);
	iVar1 = func_742(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, HUD::GET_STRING_FROM_HASH_KEY((uParam0[iVar2 /*7*/])->f_6), 64);
	StringCopy(&cVar11, HUD::GET_STRING_FROM_HASH_KEY(iVar1), 64);
	while ((uParam0[iVar2 /*7*/])->f_3 && MISC::COMPARE_STRINGS(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, HUD::GET_STRING_FROM_HASH_KEY((uParam0[iVar2 /*7*/])->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	iVar22 = iVar0;
	iVar23 = iVar1;
	while ((uParam0[iVar19 /*7*/])->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		iVar24 = (uParam0[iVar19 /*7*/])->f_4;
		iVar21 = (*uParam0)[iVar19 /*7*/];
		iVar25 = (uParam0[iVar19 /*7*/])->f_6;
		(uParam0[iVar19 /*7*/])->f_4 = iVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		(uParam0[iVar19 /*7*/])->f_3 = 1;
		(uParam0[iVar19 /*7*/])->f_6 = iVar23;
		func_743(uParam0[iVar19 /*7*/], (*uParam0)[iVar19 /*7*/]);
		iVar22 = iVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!(uParam0[iVar19 /*7*/])->f_3)
	{
		(uParam0[iVar19 /*7*/])->f_4 = iVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		(uParam0[iVar19 /*7*/])->f_3 = 1;
		(uParam0[iVar19 /*7*/])->f_6 = iVar23;
	}
}

void func_493(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = func_741(iParam1);
	iVar1 = func_742(iParam1);
	if (iParam1 == func_250())
	{
		(uParam0[0 /*7*/])->f_4 = iVar0;
		(*uParam0)[0 /*7*/] = iParam1;
		(uParam0[0 /*7*/])->f_3 = 1;
		(uParam0[0 /*7*/])->f_6 = iVar1;
		return;
	}
	iVar2 = 1;
	while (((uParam0[iVar2 /*7*/])->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && (uParam0[iVar2 /*7*/])->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	iVar7 = iVar1;
	while ((uParam0[iVar3 /*7*/])->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = (uParam0[iVar3 /*7*/])->f_4;
		iVar5 = (*uParam0)[iVar3 /*7*/];
		iVar9 = (uParam0[iVar3 /*7*/])->f_6;
		(uParam0[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		(uParam0[iVar3 /*7*/])->f_3 = 1;
		(uParam0[iVar3 /*7*/])->f_6 = iVar7;
		func_743(uParam0[iVar3 /*7*/], (*uParam0)[iVar3 /*7*/]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		iVar7 = iVar9;
		iVar3++;
	}
	if (!(uParam0[iVar3 /*7*/])->f_3)
	{
		(uParam0[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		(uParam0[iVar3 /*7*/])->f_3 = 1;
		(uParam0[iVar3 /*7*/])->f_6 = iVar7;
	}
}

float func_494(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * BUILTIN::POW((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (func_17() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(func_744()));
	}
	return func_745(fVar1, 2, 1);
}

int func_495(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_746(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_496()
{
	if (func_747())
	{
		return 1;
	}
	return 0;
}

float func_497()
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

	if (func_748())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_289(2);
	}
	if (Global_1347477.f_119)
	{
		return func_289(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_755(3, fVar9, fVar9 > 100f);
	return func_756(fVar7, -100f, 100f);
}

float func_498()
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

	if (func_748())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_289(1);
	}
	if (Global_1347477.f_119)
	{
		return func_289(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_755(2, fVar9, fVar9 > 100f);
	return func_756(fVar7, -100f, 100f);
}

float func_499()
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

	if (func_748())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_289(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_757())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_758())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_289(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_755(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_289(0);
	}
	return func_756(fVar7, -100f, 100f);
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_501(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_516(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_759(iParam1), fParam2, -1);
	}
}

void func_502(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_496();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_760(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_761(iParam0, iVar0, iParam3);
	}
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_504(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_505(int iParam0)
{
	int iVar0;

	if (!func_269(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_762(iParam0);
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

float func_506(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_507(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_160(iParam0))
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_276(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_763(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_764())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_508(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_765(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_509(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_17() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_510(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_283(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_511(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_513(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_514(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_516(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_517(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		case 1:
			*uParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

char* func_518(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_519(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_520(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_521(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_153(iParam0))
	{
		return iVar0;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

bool func_522(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_153(iParam0))
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		return true;
	}
	return false;
}

void func_523(int iParam0)
{
	switch (func_17())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 || iParam0);
			break;
	}
}

void func_524(int iParam0)
{
	if (!func_522(iParam0))
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
				}
				func_531(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
			}
			func_302(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

void func_525(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 495758964);
				break;
		}
	}
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_527(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_528(int iParam0)
{
	if (!func_767(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_768(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_769(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_769(iParam0), false) <= func_770();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_770();
	}
	return func_48();
}

bool func_529(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

void func_530(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_155(iParam0))
	{
		return;
	}
	switch (func_771(iParam0))
	{
		case 1:
			iVar0 = func_152(iParam0);
			if (func_772(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_773(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_773(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!func_774(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (func_299(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_152(iParam0);
			if (func_775(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_521(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_521(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_525(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

void func_531(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_532(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_533(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

void func_534(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_535(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_776(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

struct<4> func_536(bool bParam0)
{
	return func_312(GET_HASH_KEY("CHARACTER"), func_777(), -1591664384, bParam0);
}

struct<4> func_537(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_312(923904168, func_536(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_312(923904168, func_536(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_312(923904168, func_536(bParam0), -740156546, 0);
}

bool func_538(int iParam0, bool bParam1)
{
	if (func_200(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_431(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_539(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_386(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_540(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_778(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_541(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_312(271701509, func_536(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_312(271701509, func_536(bParam0), 12999093, 0);
}

bool func_542(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_200(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_543(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_96(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_544(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_545(int iParam0)
{
	if (func_309(iParam0, 0))
	{
		if (func_191(iParam0, -1242251796))
		{
			if (func_191(iParam0, 2060589226))
			{
				return func_779();
			}
			return func_780();
		}
		else if (func_191(iParam0, 1919582297))
		{
			return func_554();
		}
		else if (func_191(iParam0, 1147021565))
		{
			return func_555();
		}
	}
	if (Global_1935496.f_12)
	{
		return func_780();
	}
	else
	{
		return func_555();
	}
	return func_555();
}

bool func_546(int iParam0)
{
	if ((((((((((func_191(iParam0, 1147021565) || func_191(iParam0, -136654233)) || func_191(iParam0, -524514947)) || func_191(iParam0, -1238310989)) || func_191(iParam0, 1765172170)) || func_191(iParam0, 1490540191)) || func_191(iParam0, 1573112293)) || func_191(iParam0, -1242251796)) || func_191(iParam0, 1919582297)) || func_191(iParam0, -2085281117)) || iParam0 == GET_HASH_KEY("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

int func_547()
{
	return 33284224;
}

int func_548()
{
	return 33537269;
}

int func_549()
{
	return 18589696;
}

int func_550()
{
	return 26978448;
}

int func_551()
{
	return 33529847;
}

int func_552()
{
	return 26978304;
}

int func_553()
{
	return 32505855;
}

int func_554()
{
	return 26983431;
}

int func_555()
{
	return 33537239;
}

int func_556()
{
	return 32713860;
}

int func_557()
{
	return 16400295;
}

int func_558()
{
	return 33284224;
}

void func_559(int iParam0)
{
	if (func_781(32))
	{
		return;
	}
	func_782(32);
	if (func_567(Global_35))
	{
		Global_1935496.f_7 |= 1;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1);
	}
	if (func_577(Global_35))
	{
		Global_1935496.f_7 |= 2;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2);
	}
	if (func_783(Global_35, 713668775))
	{
		Global_1935496.f_7 |= 4;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4);
	}
	if (func_784(Global_35))
	{
		Global_1935496.f_7 |= 8;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8);
	}
	if (func_319(0, 1))
	{
		Global_1935496.f_7 |= 16;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16);
	}
	if (!func_785(0))
	{
		Global_1935496.f_7 |= 32;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32);
	}
	if (!func_786(0))
	{
		Global_1935496.f_7 |= 512;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 512);
	}
	if (!func_787(0))
	{
		Global_1935496.f_7 |= 8192;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, true))
	{
		Global_1935496.f_7 |= 16384;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16384);
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		Global_1935496.f_7 |= 32768;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 32768);
	}
	if (func_17() == 0 && PED::IS_PED_INCAPACITATED(Global_35))
	{
		Global_1935496.f_7 |= 131072;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 131072);
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496.f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496.f_7 |= 256;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 256);
	}
	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
	{
		Global_1935496.f_7 |= 1024;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496.f_7 |= 4096;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4096);
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_783(Global_35, 1369124074))
	{
		Global_1935496.f_7 |= 128;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 |= 33554432;
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == GET_HASH_KEY("WORLD_PLAYER_DYNAMIC_KNEEL"))
		{
			Global_1935496.f_7 |= 67108864;
		}
		else
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 67108864);
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496.f_7 |= 65536;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496.f_7 |= 64;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496.f_7 |= 1048576;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 1048576);
	}
	if (func_788(iParam0, 0))
	{
		Global_1935496.f_7 |= 524288;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 524288);
	}
	if (func_789(iParam0, 0))
	{
		Global_1935496.f_7 |= 262144;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 262144);
	}
	if (func_790(Global_35))
	{
		Global_1935496.f_7 |= 4194304;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 4194304);
	}
	if (func_791())
	{
		Global_1935496.f_7 |= 16777216;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_792(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case GET_HASH_KEY("A_C_HORSEMULE_01"):
				case GET_HASH_KEY("A_C_HORSEMULEPAINTED_01"):
				case GET_HASH_KEY("A_C_DONKEY_01"):
					Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
					break;
				default:
					Global_1935496.f_7 |= 134217728;
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 134217728);
	}
	if (((((func_17() == -1 && func_117(32768)) || func_316()) || func_793()) || (func_105() && !func_794())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 2097152);
	}
	else
	{
		Global_1935496.f_7 |= 2097152;
	}
	if (Global_1900073.f_17 && func_225(Global_35, 1, 0, 0) == GET_HASH_KEY("WEAPON_FISHINGROD"))
	{
		Global_1935496.f_7 |= 8388608;
	}
	else
	{
		Global_1935496.f_7 = (Global_1935496.f_7 - Global_1935496.f_7 & 8388608);
	}
}

int func_560(bool bParam0)
{
	int iVar0;

	if (func_795(1) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_795(2) && !Global_1392040.f_2) && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			iVar0 = func_796(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(iVar0))
				{
					func_202("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_202("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_795(4194304))
	{
		return 0;
	}
	return 1;
}

int func_561(bool bParam0)
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_562(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case GET_HASH_KEY("ROWBOAT"):
			case GET_HASH_KEY("HANDCART"):
				if (bParam0)
				{
					func_202("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case GET_HASH_KEY("BREACH_CANNON"):
			case GET_HASH_KEY("GATLING_GUN"):
			case GET_HASH_KEY("GATLINGMAXIM02"):
			case GET_HASH_KEY("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_202("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_215(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

bool func_563(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

int func_564(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_404(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_726("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_659(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_685(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_660(iVar1);
				return true;
			}
			iVar3++;
		}
		func_660(iVar1);
	}
	return false;
}

bool func_566()
{
	return Global_1894899 & 4 != 0;
}

bool func_567(int iParam0)
{
	return (func_797(iParam0, 4) || func_797(iParam0, 5));
}

bool func_568()
{
	return func_798(512);
}

bool func_569(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_570()
{
	return Global_1310750.f_16077 != 0;
}

bool func_571(int iParam0)
{
	return (Global_1914296.f_22 && iParam0) != 0;
}

int func_572()
{
	return Global_1897952.f_41;
}

bool func_573(int iParam0)
{
	if (!func_403(iParam0))
	{
		return false;
	}
	return func_799(iParam0, 33554432);
}

int func_574(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_575(int iParam0)
{
	if (func_574(iParam0) != 5)
	{
		return false;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
		default:
			break;
	}
	return false;
}

bool func_576()
{
	int iVar0;

	iVar0 = func_170();
	switch (iVar0)
	{
		case 3:
			return true;
		case 51:
			return true;
		case 41:
			return true;
		case 108:
			return true;
		case 44:
			return true;
		case 84:
			return true;
		case 103:
			return true;
		case 53:
			return true;
		case 73:
			return true;
		case 18:
			return true;
		case 0:
			return true;
		case 106:
			return true;
		case 47:
			return true;
		case 63:
			return true;
		case 24:
			return true;
		case 46:
			return true;
		case 107:
			return true;
		case 80:
			return true;
		case 85:
			return true;
		case 7:
			return true;
		case 82:
			return true;
		case 110:
			return true;
		case 120:
			return true;
		default:
			break;
	}
	return false;
}

bool func_577(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

bool func_578()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = func_170();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return false;
	}
	else
	{
		iVar1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar2, vVar5, vVar8);
		if (func_800(Global_35, iVar1, 1, 0))
		{
			func_801(iVar1);
			return true;
		}
		else
		{
			func_801(iVar1);
			return false;
		}
	}
	return false;
}

bool func_579(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_235(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_580(vector3 vParam0, float fParam3)
{
	if (func_802(vParam0, fParam3))
	{
		return true;
	}
	if (func_803(vParam0, fParam3))
	{
		return true;
	}
	return false;
}

void func_581(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

var func_582(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_583(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_584(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_585(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_804(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_586(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_428() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_805(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_806(), 12);
			}
			break;
		case GET_HASH_KEY("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_708() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_807(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_708(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_808(), 13);
			}
			break;
		case GET_HASH_KEY("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_709() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_809(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_709(), 10);
			}
			break;
		case GET_HASH_KEY("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_585(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_587(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == GET_HASH_KEY("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, GET_HASH_KEY("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, GET_HASH_KEY("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == GET_HASH_KEY("DINO_BONES"))
	{
		if (iParam1 == GET_HASH_KEY("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, GET_HASH_KEY("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, GET_HASH_KEY("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (iParam1 == GET_HASH_KEY("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, GET_HASH_KEY("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, GET_HASH_KEY("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_588(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_589(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_810(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_317(iVar2, 1, 0) || func_812(func_811(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_583(func_810(iVar0))), func_583(func_810(iVar0)), bVar1, true, false);
		}
		if (iParam2 == GET_HASH_KEY("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_708() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(iVar0)), func_813(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_807() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(iVar0)), func_813(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(iVar0)), func_813(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_719(iParam3, func_814(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_715(iVar2) - iParam7) >= func_585(iParam3, func_815(iVar0));
				}
				else
				{
					bVar1 = func_715(iVar2) >= func_585(iParam3, func_815(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_715(iVar2) + iParam7) >= func_585(iParam3, func_815(iVar0));
			}
			else
			{
				bVar1 = func_715(iVar2) >= func_585(iParam3, func_815(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_816(iVar2)), func_816(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_817(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_818(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_818(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == GET_HASH_KEY("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_709() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_819(iVar0)), func_819(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_809() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_819(iVar0)), func_819(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_819(iVar0)), func_819(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == GET_HASH_KEY("TAXIDERMY"))
		{
			iVar2 = func_719(iParam3, func_814(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_715(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_820(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_820(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_821(iVar2)), func_821(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_591(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_808() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == GET_HASH_KEY("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_592(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_155(func_822(0)) && ((func_823(0) == 1 || func_823(0) == 8) || func_823(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == GET_HASH_KEY("DINO_BONES") || iParam2 == 1995362678) || iParam2 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == GET_HASH_KEY("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

int func_593(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_824(iParam0);
}

int func_594()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_825(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_825(iVar0)) || iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
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

void func_595(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	else
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432 /* Float: -1f */);
		Global_1935496.f_26 = 1;
	}
}

void func_596(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;

	Var0.f_1 = 20;
	if ((func_191(iParam0, 1573112293) || func_191(iParam0, 672467738)) || func_191(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_198(iParam0) == GET_HASH_KEY("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iParam0, &Var0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_826(0, Var22.f_2);
				func_90(Var22.f_2, 1);
				func_171(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_826(2, Var22.f_2);
				func_91(Var22.f_2);
				func_171(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_826(1, Var22.f_2);
				func_827(Var22.f_2);
				func_171(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar33))
				{
					func_830(fVar33, 1, bVar37, bParam1);
					func_171(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar34))
				{
					func_831(fVar34, 1, bVar37, bParam1);
					func_171(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar35))
				{
					func_832(fVar35, 1, bVar37, bParam1);
					func_171(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_833(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_191(iParam0, -537818634))
		{
			func_444(func_654(GET_HASH_KEY("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_191(iParam0, -1457797660))
		{
			func_444(func_654(GET_HASH_KEY("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			func_444(func_654(GET_HASH_KEY("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

int func_597(int iParam0)
{
	switch (*iParam0)
	{
		case GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case GET_HASH_KEY("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case GET_HASH_KEY("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case GET_HASH_KEY("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case GET_HASH_KEY("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case GET_HASH_KEY("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case GET_HASH_KEY("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case GET_HASH_KEY("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case GET_HASH_KEY("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case GET_HASH_KEY("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case GET_HASH_KEY("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case GET_HASH_KEY("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case GET_HASH_KEY("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case GET_HASH_KEY("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case GET_HASH_KEY("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case GET_HASH_KEY("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case GET_HASH_KEY("CONSUMABLE_HERB_SAGE"):
			return 34;
		case GET_HASH_KEY("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case GET_HASH_KEY("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case GET_HASH_KEY("CONSUMABLE_HERB_WILD_CARROTS"):
			return 39;
		case GET_HASH_KEY("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 40;
		case GET_HASH_KEY("CONSUMABLE_HERB_WILD_MINT"):
			return 41;
		case GET_HASH_KEY("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 42;
		case GET_HASH_KEY("CONSUMABLE_HERB_YARROW"):
			return 43;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 1;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"):
			return 9;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 10;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"):
			return 14;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"):
			return 17;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 21;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 22;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"):
			return 24;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 25;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"):
			return 30;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 32;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"):
			return 35;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"):
			return 36;
	}
	return 0;
}

void func_598(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_834(iParam0);
	iVar1 = func_597(&iVar0);
	if (iVar1 != iParam0)
	{
		func_835(iVar1, 4);
	}
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_837(iParam0))
	{
		return;
	}
	func_835(iParam0, 4);
	func_838(iParam0, bParam1);
	if (!func_839(iParam0))
	{
		func_840(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

void func_599(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_600(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

bool func_601(int iParam0, int iParam1)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_602(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_841(Global_35, iParam0, 0, 1) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iParam0))
	{
		return true;
	}
	return false;
}

bool func_603(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_604(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

bool func_605()
{
	if (Global_1946804.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804.f_2791)) < 1250)
	{
		return true;
	}
	if (func_842())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

int func_606(int iParam0)
{
	int iVar0;

	iVar0 = func_200(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_607(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_608(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_614(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_609(int iParam0)
{
	if (-1829635046 == func_843(81053684))
	{
		if (func_614(iParam0))
		{
			return true;
		}
	}
	else if (func_844(-525676072, iParam0))
	{
		if (func_614(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_610()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("MASK_OFF_LEFT_HAND");
	switch (func_594())
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

int func_611()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("BANDANA_OFF_LEFT_HAND");
	switch (func_594())
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

int func_612()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("MASK_ON_LEFT_HAND");
	switch (func_594())
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

int func_613()
{
	int iVar0;

	iVar0 = GET_HASH_KEY("BANDANA_ON_LEFT_HAND");
	switch (func_594())
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

bool func_614(int iParam0)
{
	if (func_844(81053684, iParam0))
	{
		return true;
	}
	if (func_844(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_615(var uParam0)
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

void func_616(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_380(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_380(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_380(iParam0, 1) /*11*/].f_10 && iParam1));
}

int func_618(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804.f_2657.f_21;
		case 81053684:
			return Global_1946804.f_2657.f_23;
		case -525676072:
			return Global_1946804.f_2657.f_22;
		case -1719060085:
			return Global_1946804.f_2657.f_24;
		case -413129408:
			return Global_1946804.f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804.f_2657.f_20;
			}
			else
			{
				return func_845();
			}
			break;
	}
	return 0;
}

int func_619(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804.f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804.f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804.f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

bool func_620(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804.f_2657.f_19)
	{
		if (iParam0 == Global_1946804.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_621(int iParam0)
{
	if (func_17() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == GET_HASH_KEY("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_622(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_620(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_846(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_200(iParam0) != -999503751)
	{
		func_847(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_623(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_96(0), &Var5);
	return 1;
}

int func_624()
{
	return Global_1946804.f_1;
}

void func_625()
{
	int iVar0;

	if (func_17() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946804.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804.f_2657.f_20;
		Global_26796.f_21 = Global_1946804.f_2657.f_21;
		Global_26796.f_22 = Global_1946804.f_2657.f_22;
		Global_26796.f_23 = Global_1946804.f_2657.f_23;
		Global_26796.f_24 = Global_1946804.f_2657.f_24;
		Global_26796.f_19 = Global_1946804.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946804.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804.f_2657.f_19;
}

bool func_626(int iParam0)
{
	return func_849(func_848(iParam0));
}

void func_627(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_850(0);
	}
	if (bParam0)
	{
		func_365(8);
		func_365(512);
	}
	else
	{
		func_365(8);
		func_365(16);
	}
}

void func_628(int iParam0, int iParam1, bool bParam2)
{
	func_851(iParam0, 0, 0);
	func_376(iParam1, 1, bParam2, 0);
}

int func_629(int iParam0, int iParam1)
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

void func_630()
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

int func_631(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_632(int iParam0)
{
	func_617(iParam0, 8, 6);
}

void func_633(int iParam0)
{
	func_852(&(Global_1946804.f_2589), iParam0);
}

void func_634(int iParam0, int iParam1)
{
	func_853(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_635(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_636(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_200(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_854(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_634(iVar1, iVar3);
		}
	}
	if (func_731(-1586649372) && func_854(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_634(iVar1, iVar3);
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
						func_634(iVar1, iVar3);
					}
				}
			}
			func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_855(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == GET_HASH_KEY("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_855(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_855(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_200(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_856(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_200(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_191(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_856(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_191(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
			}
			switch (func_200(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_200(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_200(uParam0->f_1[iVar1 /*3*/]) || func_191(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_637(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_857(0);
	if (iParam2 != 0 && func_858(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_859(iParam0, func_629(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_638(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_17() != -1;
	iVar7 = func_857(0);
	if (func_372(32768))
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
			iVar5 = func_629(iVar0, 1);
			if (func_860(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_860(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_861(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_862(uParam0);
				if (iVar3 > 0)
				{
					if (!func_372(524288))
					{
						func_365(524288);
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
							iVar5 = func_629(iVar0, 1);
							if (func_860(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_860(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_861(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_634(iVar0, iParam2);
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
					func_616(524288);
				}
			}
		}
	}
}

void func_639(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_863(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_17() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_864(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_865(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_865(Global_40.f_7729);
				Global_1946804.f_1378 = func_865(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_866(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_627(0, 1);
	}
}

bool func_640(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_641(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_603(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_603(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_604(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_365(8);
}

bool func_642()
{
	return Global_1914319.f_17375;
}

bool func_643()
{
	int iVar0;

	if (func_867())
	{
		iVar0 = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return false;
}

bool func_644()
{
	return Global_1898068;
}

var func_645(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_868() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1225639.f_10;
	iVar6 = Global_1225639.f_14;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case GET_HASH_KEY("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_869());
				break;
			case GET_HASH_KEY("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_869());
				break;
			case GET_HASH_KEY("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_869());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_870(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (Global_1225639.f_21[iVar2])
		{
			iVar10 = Global_1225639.f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_871(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1225639.f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_872(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_873(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_646(var uParam0, struct<18> Param1)
{
	if (!func_874(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*18*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_647(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER");
			break;
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER");
			break;
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = GET_HASH_KEY("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = GET_HASH_KEY("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = GET_HASH_KEY("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER_EXPRESS");
			break;
		case GET_HASH_KEY("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = GET_HASH_KEY("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = GET_HASH_KEY("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case GET_HASH_KEY("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = GET_HASH_KEY("SHOTGUN_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_SHOTGUN");
			break;
		case GET_HASH_KEY("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = GET_HASH_KEY("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = GET_HASH_KEY("AMMO_SHOTGUN");
			break;
		case GET_HASH_KEY("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = GET_HASH_KEY("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = GET_HASH_KEY("AMMO_SHOTGUN_SLUG");
			break;
		case GET_HASH_KEY("AMMO_22_AMMOBOX"):
			*iParam1 = GET_HASH_KEY("22_AMMO_BOX");
			*uParam2 = GET_HASH_KEY("AMMO_22");
			break;
	}
}

bool func_648()
{
	return !Global_1911774;
}

void func_649(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_650(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_651(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_652(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_875(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_654(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_655(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_656(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_657(&Var0, func_537(0));
	}
	if (!func_658(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_660(iVar14);
	return iVar15;
}

struct<14> func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_657(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_658(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_96(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_659(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_660(int iParam0)
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

void func_661(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_17() == -1)
	{
		if (func_324(43))
		{
			if (func_191(iParam0, 412399755))
			{
				func_712(GET_HASH_KEY("EXOTIC_STAGE_01"));
				if (func_713() == 0)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 1);
					if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_324(44))
		{
			if (func_191(iParam0, 709057512))
			{
				func_712(GET_HASH_KEY("EXOTIC_STAGE_02"));
				if (func_713() == 1)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 2);
					if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(45))
		{
			if (func_191(iParam0, -1478961327))
			{
				func_712(GET_HASH_KEY("EXOTIC_STAGE_03"));
				if (func_713() == 2)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 4);
					if (((iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(46))
		{
			if (func_191(iParam0, -1238404098))
			{
				func_712(GET_HASH_KEY("EXOTIC_STAGE_04"));
				if (func_713() == 3)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 8);
					if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(47))
		{
			if (func_191(iParam0, 1160548794))
			{
				func_712(GET_HASH_KEY("EXOTIC_STAGE_05"));
				if (func_713() == 4)
				{
					func_86(0, 10);
					iVar0 = func_876(iParam0, iParam1, 16);
					if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_662(int iParam0, int iParam1)
{
	if (func_17() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_663(int iParam0)
{
	if (func_17() != -1)
	{
		if (func_665(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_665(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_664(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_665(iParam0, 65536) && !func_665(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_665(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_665(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_665(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_666()
{
	return Global_1905944.f_5694;
}

bool func_667(int iParam0)
{
	return func_198(iParam0) == GET_HASH_KEY("WEAPON");
}

bool func_668(int iParam0)
{
	var uVar0;

	if (func_17() != -1)
	{
		return false;
	}
	if (func_430(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_674(iParam0, &uVar0, 1, 0, 0);
	}
	return func_317(iParam0, 1, 0);
}

void func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_198(iParam0) != GET_HASH_KEY("WEAPON"))
	{
		return;
	}
	iVar0 = func_434(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_684(iVar0))
	{
		if (func_17() == -1)
		{
			func_435(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_407(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_405(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_670(int iParam0, int iParam1)
{
	int iVar0;

	if (func_191(iParam0, 58855631))
	{
		func_877(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_671(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_878(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_96(bParam3), iParam0);
}

int func_672(int iParam0, bool bParam1)
{
	if (func_439(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_96(bParam1), iParam0, 0);
}

bool func_673()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (!func_176())
	{
		return false;
	}
	if (!func_339(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_339(Global_1835011[2 /*74*/].f_1, 1) && func_339(Global_1347702[120 /*49*/].f_15, 1)) && !func_339(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_339(Global_1835011[37 /*74*/].f_1, 1) && !func_339(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_339(Global_1835011[57 /*74*/].f_1, 1) && !func_339(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_339(Global_1835011[26 /*74*/].f_1, 1) && !func_339(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_339(Global_1835011[62 /*74*/].f_1, 1) && func_339(Global_1835011[63 /*74*/].f_1, 1)) && !func_339(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_339(Global_1835011[75 /*74*/].f_1, 1) && !func_339(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_339(Global_1835011[76 /*74*/].f_1, 1) && !func_339(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_339(Global_1835011[40 /*74*/].f_1, 1) && func_339(Global_1835011[41 /*74*/].f_1, 1)) && !func_339(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_339(Global_1835011[62 /*74*/].f_1, 1) && func_339(Global_1835011[63 /*74*/].f_1, 1)) && !func_339(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_339(Global_1835011[65 /*74*/].f_1, 1) && func_339(Global_1835011[66 /*74*/].f_1, 1)) && !func_339(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_674(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_879(&iParam0);
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (!func_409(0))
	{
		bParam3 = true;
	}
	if (func_667(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_537(0) };
			Var4.f_9 = -1591664384;
			if (!func_539(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_540(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_538(iParam0, 1))
			{
				if (!func_539(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_540(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_880(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_671(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_878(iParam0))
	{
		iVar28 = func_386(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_96(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_675()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_676(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_677(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_17() != -1)
	{
		return;
	}
	iVar0 = func_881(iParam0);
	fVar1 = func_882(iParam0);
	if ((Global_1347477.f_117 || !func_431(31)) || !func_883(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_884(iVar0) >= 7)
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
	func_885(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_653(MISC::VAR_STRING(6, func_886(iParam0), fVar1), "itemtype_textures", func_887(iVar0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

bool func_679(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_681(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_682(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_888(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_889(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_889(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_889(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_890(1);
			break;
		case 34:
			func_891(1);
			break;
		case 35:
			func_892(1);
			break;
		case 36:
			break;
		case 37:
			func_893(0);
			break;
		case 38:
			func_894(0);
			break;
		case 39:
			func_895(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_231(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_231(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_231(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_231(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_17() == -1)
			{
				if (!func_731(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) || func_244(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_690())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = GET_HASH_KEY("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_317(iVar0, 1, 0))
					{
						func_479(iVar0, 1, 752097756);
					}
					func_211(Global_35, iVar0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_479(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_479(1013902307, 1, 752097756);
				}
				if (!func_317(142640135, 1, 0))
				{
					func_479(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_479(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_479(786809402, 1, 752097756);
				}
				if (!func_317(-518019409, 1, 0))
				{
					func_479(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_896();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_683(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_684(int iParam0)
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

bool func_685(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

int func_686(int iParam0, int iParam1)
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

void func_687(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_897(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_688(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_65();
	func_66(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_689(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_825(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, GET_HASH_KEY("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_690()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_691(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_692(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_693(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_431(50))
			{
				if (!func_431(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_431(51))
			{
				if (!func_431(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_694()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_695(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_309(iParam1, 0))
	{
		return false;
	}
	if (func_198(iParam1) != GET_HASH_KEY("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_17() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_200(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_898(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_191(iParam1, 866047851))
	{
		iVar5 = func_380(iVar4, 1);
		if (func_631(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == GET_HASH_KEY("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = func_200(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_191(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (func_844(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_861(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_861(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_200(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_191(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_856(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_696()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_697()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_698()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_317(func_899(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BRACELET_GOLD"):
		case GET_HASH_KEY("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case GET_HASH_KEY("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case GET_HASH_KEY("PROVISION_BEAR_LEGENDARY_CLAW"):
		case GET_HASH_KEY("PROVISION_BRACELET_SILVER"):
		case GET_HASH_KEY("PROVISION_RC_QUARTZ_CHUNK"):
			return GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW");
		case GET_HASH_KEY("PROVISION_RF_WOOD_COBALT"):
		case GET_HASH_KEY("PROVISION_EARRING_GOLD"):
		case GET_HASH_KEY("PROVISION_BOAR_TUSK_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TALISMAN_BOAR_TUSK");
		case GET_HASH_KEY("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case GET_HASH_KEY("PROVISION_EARRING_SILVER"):
		case GET_HASH_KEY("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN");
		case GET_HASH_KEY("PROVISION_OLD_BRASS_COMPASS"):
			return GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_700(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == GET_HASH_KEY("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = GET_HASH_KEY("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = GET_HASH_KEY("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = GET_HASH_KEY("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = GET_HASH_KEY("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == GET_HASH_KEY("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = GET_HASH_KEY("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = GET_HASH_KEY("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = GET_HASH_KEY("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = GET_HASH_KEY("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == GET_HASH_KEY("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_RF_WOOD_COBALT");
				iVar1 = GET_HASH_KEY("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = GET_HASH_KEY("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = GET_HASH_KEY("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = GET_HASH_KEY("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == GET_HASH_KEY("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = GET_HASH_KEY("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = GET_HASH_KEY("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = GET_HASH_KEY("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = GET_HASH_KEY("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_317(iVar0, 1, 0) && func_317(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH");
		case GET_HASH_KEY("PROVISION_BISON_HORN_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN");
		case GET_HASH_KEY("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_BUCK_ANTLER");
		case GET_HASH_KEY("PROVISION_COUGAR_FANG_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG");
		case GET_HASH_KEY("PROVISION_COYOTE_FANG_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG");
		case GET_HASH_KEY("PROVISION_ELK_ANTLER_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER");
		case GET_HASH_KEY("PROVISION_FOX_CLAW_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW");
		case GET_HASH_KEY("PROVISION_LIONS_PAW"):
			return GET_HASH_KEY("PROVISION_TRINKET_LION_PAW");
		case GET_HASH_KEY("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_MOOSE_ANTLER");
		case GET_HASH_KEY("PROVISION_PANTHER_EYE_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_PANTHER_EYE");
		case GET_HASH_KEY("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case GET_HASH_KEY("PROVISION_RAM_HORN_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_RAM_HORN");
		case GET_HASH_KEY("PROVISION_WOLF_HEART_LEGENDARY"):
			return GET_HASH_KEY("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_702(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_900(iParam0);
	if (iVar0 != -15)
	{
		func_66(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_901(iVar0, 1);
	}
	return false;
}

int func_703(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_317(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_309(iVar25, 0) && func_191(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_704(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_705(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_902())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_653(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_TOTAL_TAKE"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_903(iVar0);
			func_904(iVar0, 0, 0);
		}
		func_653(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_444(func_654(GET_HASH_KEY("CAREER_CASH")), iVar1);
	}
}

int func_706(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = GET_HASH_KEY("PROVISION_HERON_FEATHER");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = GET_HASH_KEY("PROVISION_GATOR_EGG");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_715(iVar12);
		iVar8 = func_716(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_707(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_708()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_905(COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_709()
{
	return COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("ROCK_CARVINGS"), 0);
}

bool func_710(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case GET_HASH_KEY("TAXIDERMY_ORDER_01"):
			if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case GET_HASH_KEY("TAXIDERMY_ORDER_02"):
			if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case GET_HASH_KEY("TAXIDERMY_ORDER_03"):
			if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case GET_HASH_KEY("TAXIDERMY_ORDER_04"):
			if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case GET_HASH_KEY("TAXIDERMY_ORDER_05"):
			if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar0) && func_820(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar2))
		{
			*iParam2++;
		}
		if ((func_820(iVar0) && func_820(iVar1)) && func_820(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar2))
		{
			*iParam2++;
		}
		if (func_820(iVar3))
		{
			*iParam2++;
		}
		if (((func_820(iVar0) && func_820(iVar1)) && func_820(iVar2)) && func_820(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_711(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_906(1497516462);
			func_907(2016141805);
			func_907(1010885152);
			func_907(-502324015);
			break;
		case 2016141805:
			func_907(1497516462);
			func_906(2016141805);
			func_907(1010885152);
			func_907(-502324015);
			break;
		case 1010885152:
			func_907(1497516462);
			func_907(2016141805);
			func_906(1010885152);
			func_907(-502324015);
			break;
		case -502324015:
			func_907(1497516462);
			func_907(2016141805);
			func_907(1010885152);
			func_906(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_907(-538889627);
			func_907(-538880323);
			func_907(-1056767524);
			func_906(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_908();
			func_906(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_909();
			func_906(iParam0);
			break;
		case 2019386373:
			func_907(-664252410);
			func_907(2109952320);
			func_906(2019386373);
			break;
		case -664252410:
			func_907(2019386373);
			func_907(2109952320);
			func_906(-664252410);
			break;
		case 2109952320:
			func_907(2019386373);
			func_907(-664252410);
			func_906(2109952320);
			break;
		case -1674179981:
			func_907(-1835851517);
			func_907(-1838352012);
			func_906(-1674179981);
			break;
		case -1835851517:
			func_907(-1674179981);
			func_907(-1838352012);
			func_906(-1835851517);
			break;
		case -1838352012:
			func_907(-1674179981);
			func_907(-1835851517);
			func_906(-1838352012);
			break;
		case -1717960576:
			func_907(210001842);
			func_906(-1717960576);
			break;
		case 210001842:
			func_907(-1717960576);
			func_906(210001842);
			break;
		case -150493654:
			func_907(-1271608261);
			func_907(1846061697);
			func_907(-1145519186);
			func_906(-150493654);
			break;
		case -1271608261:
			func_907(-150493654);
			func_907(1846061697);
			func_907(-1145519186);
			func_906(-1271608261);
			break;
		case 1846061697:
			func_907(-150493654);
			func_907(-1271608261);
			func_907(-1145519186);
			func_906(1846061697);
			break;
		case -1145519186:
			func_907(-150493654);
			func_907(-1271608261);
			func_907(1846061697);
			func_906(-1145519186);
			break;
		case 1766284049:
			func_907(280705402);
			func_907(1926308480);
			func_906(1766284049);
			break;
		case 280705402:
			func_907(1766284049);
			func_907(1926308480);
			func_906(280705402);
			break;
		case 1926308480:
			func_907(1766284049);
			func_907(280705402);
			func_906(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_907(439465264);
				func_906(1609506757);
			}
			else
			{
				func_907(1609506757);
				func_907(439465264);
			}
			break;
		case 439465264:
			if (func_910(1609506757))
			{
				if (bParam1)
				{
					func_906(439465264);
				}
				else
				{
					func_907(439465264);
				}
			}
			break;
		case 1822001510:
			func_907(-1612662716);
			func_906(1822001510);
			break;
		case -1612662716:
			func_907(1822001510);
			func_906(-1612662716);
			break;
		case 1306158345:
			func_907(1952610440);
			func_907(-223469678);
			func_907(-404698347);
			func_907(1517904467);
			func_906(1306158345);
			break;
		case 1952610440:
			func_907(1306158345);
			func_907(-223469678);
			func_907(-404698347);
			func_907(1517904467);
			func_906(1952610440);
			break;
		case -223469678:
			func_907(1306158345);
			func_907(1952610440);
			func_907(-404698347);
			func_907(1517904467);
			func_906(-223469678);
			break;
		case -404698347:
			func_907(1306158345);
			func_907(1952610440);
			func_907(-223469678);
			func_907(1517904467);
			func_906(-404698347);
			break;
		case 1517904467:
			func_907(1306158345);
			func_907(1952610440);
			func_907(-223469678);
			func_907(-404698347);
			func_906(1517904467);
			break;
		case 1376646519:
			func_907(931649776);
			func_907(-434590080);
			func_907(1743048395);
			func_907(449774763);
			func_906(1376646519);
			break;
		case 931649776:
			func_907(1376646519);
			func_907(-434590080);
			func_907(1743048395);
			func_907(449774763);
			func_906(931649776);
			break;
		case -434590080:
			func_907(1376646519);
			func_907(931649776);
			func_907(1743048395);
			func_907(449774763);
			func_906(-434590080);
			break;
		case 1743048395:
			func_907(1376646519);
			func_907(931649776);
			func_907(-434590080);
			func_907(449774763);
			func_906(1743048395);
			break;
		case 449774763:
			func_907(1376646519);
			func_907(931649776);
			func_907(-434590080);
			func_907(1743048395);
			func_906(449774763);
			break;
		case -1414537028:
			func_907(38162571);
			func_907(1350391819);
			func_907(54073871);
			func_906(-1414537028);
			break;
		case 38162571:
			func_907(-1414537028);
			func_907(1350391819);
			func_907(54073871);
			func_906(38162571);
			break;
		case 1350391819:
			func_907(-1414537028);
			func_907(38162571);
			func_907(54073871);
			func_906(1350391819);
			break;
		case 54073871:
			func_907(-1414537028);
			func_907(38162571);
			func_907(1350391819);
			func_906(54073871);
			break;
		case 198200492:
			func_906(198200492);
			func_907(-1124061431);
			func_907(52706132);
			func_907(-259123672);
			break;
		case -1124061431:
			func_907(198200492);
			func_906(-1124061431);
			func_907(52706132);
			func_907(-259123672);
			break;
		case 52706132:
			func_907(198200492);
			func_907(-1124061431);
			func_906(52706132);
			func_907(-259123672);
			break;
		case -259123672:
			func_907(198200492);
			func_907(-1124061431);
			func_907(52706132);
			func_906(-259123672);
			break;
		case -919512195:
			func_906(-919512195);
			func_907(-1925798111);
			func_907(420709909);
			func_907(1703426636);
			break;
		case -1925798111:
			func_906(-1925798111);
			func_907(-919512195);
			func_907(420709909);
			func_907(1703426636);
			break;
		case 420709909:
			func_906(420709909);
			func_907(-919512195);
			func_907(-1925798111);
			func_907(1703426636);
			break;
		case 1703426636:
			func_906(1703426636);
			func_907(-919512195);
			func_907(-1925798111);
			func_907(420709909);
			break;
		case -1223121209:
			func_906(-1223121209);
			func_907(630808005);
			break;
		case 630808005:
			func_906(630808005);
			func_907(-1223121209);
			break;
		case 1453909576:
			func_906(1453909576);
			func_907(1643531967);
			break;
		case 1643531967:
			func_906(1643531967);
			func_907(1453909576);
			break;
		case 0:
			func_906(0);
			func_907(473295046);
			func_907(-1738165526);
			break;
		case 473295046:
			func_906(473295046);
			func_907(0);
			func_907(-1738165526);
			break;
		case -1738165526:
			func_906(-1738165526);
			func_907(0);
			func_907(473295046);
			break;
		case 932909855:
			func_906(932909855);
			func_907(2051822093);
			break;
		case 2051822093:
			func_906(2051822093);
			func_907(932909855);
			break;
		case 405586984:
			func_906(405586984);
			func_907(1509509592);
			func_907(-959357075);
			func_907(-1311865656);
			break;
		case 1509509592:
			func_906(1509509592);
			func_907(405586984);
			func_907(-959357075);
			func_907(-1311865656);
			break;
		case -959357075:
			func_906(-959357075);
			func_907(1509509592);
			func_907(405586984);
			func_907(-1311865656);
			break;
		case -1311865656:
			func_906(-1311865656);
			func_907(1509509592);
			func_907(-959357075);
			func_907(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_906(-524145696);
			}
			else
			{
				func_907(-524145696);
			}
			func_907(1626481264);
			func_907(282809459);
			break;
		case 282809459:
			func_906(282809459);
			func_907(1626481264);
			func_907(-524145696);
			break;
		case 1626481264:
			func_906(1626481264);
			func_907(-524145696);
			func_907(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_906(885203519);
			}
			else
			{
				func_907(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_906(-1080627546);
			}
			else
			{
				func_907(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_910(iParam0))
				{
					func_906(iParam0);
				}
			}
			else if (func_910(iParam0))
			{
				func_907(iParam0);
			}
			break;
	}
}

void func_712(int iParam0)
{
	if (!func_911(iParam0))
	{
		func_913(func_912(iParam0));
	}
}

int func_713()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_911(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_714(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = GET_HASH_KEY("PROVISION_HERON_FEATHER");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = GET_HASH_KEY("PROVISION_GATOR_EGG");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_715(iVar12);
		iVar8 = func_716(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_715(int iParam0)
{
	int iVar0;

	if (func_317(iParam0, 1, 0))
	{
		iVar0 = func_407(iParam0, 0, 0);
	}
	return iVar0;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case GET_HASH_KEY("PROVISION_HERON_FEATHER"):
			return 20;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case GET_HASH_KEY("PROVISION_GATOR_EGG"):
			return 25;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_717(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_718(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_719(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_804(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_720(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_719(iParam1, 5) || iParam0 == func_719(iParam1, 6)) || iParam0 == func_719(iParam1, 7)) || iParam0 == func_719(iParam1, 8)) || iParam0 == func_719(iParam1, 9))
	{
		func_710(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_328(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_327(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_721(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_719(iParam1, 5) || iParam0 == func_719(iParam1, 6)) || iParam0 == func_719(iParam1, 7)) || iParam0 == func_719(iParam1, 8)) || iParam0 == func_719(iParam1, 9))
	{
		if (func_710(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_328(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_327(51, 0, 0, iVar0, func_585(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_328(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_327(51, 0, 0, iVar0, func_585(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_722()
{
	if (func_390(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_723(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_724(int iParam0)
{
	if (!func_914(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_725(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

bool func_726(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_96(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_727(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_728(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_309(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_674(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_96(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_729(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_600(iParam0))
	{
		return;
	}
	if (func_362(iParam0))
	{
		return;
	}
	if (!func_915(iParam0))
	{
		func_916(iParam0, 1, 0);
	}
	iVar0 = func_865(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_601(iParam0, 512))
		{
			func_208(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_917() && !bParam1) && !func_74(0, 0, 1))
	{
		func_202(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_918(iParam0, 6);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 4);
		}
	}
}

bool func_730(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_200(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_731(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_380(iParam0, 1) /*3*/] != Global_1946804.f_57[func_380(iParam0, 1) /*11*/];
}

void func_732(int iParam0, int iParam1)
{
	if (func_191(iParam1, 130796156))
	{
		func_919(iParam1, 0);
	}
	else if (func_191(iParam1, 930141731))
	{
		func_919(iParam1, 1);
		func_920(iParam0);
	}
}

void func_733(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == GET_HASH_KEY("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == GET_HASH_KEY("LOOTER_PED_IS_FEMALE")) || (iParam1 == GET_HASH_KEY("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == GET_HASH_KEY("LOOTER_PED_IS_MALE"))) || (iParam1 == GET_HASH_KEY("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == GET_HASH_KEY("LOOT_TYPE_SKINNING"))) || (iParam1 == GET_HASH_KEY("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == GET_HASH_KEY("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_734(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_921(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_922(uParam2, iParam0, Var1);
	return 1;
}

int func_735(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_737(int iParam0)
{
	var uVar0;

	if (!func_923(iParam0, &uVar0, GET_HASH_KEY("INVENTORY"), 0, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
	{
		return GET_HASH_KEY("_PLACEHOLDER");
	}
	return uVar0;
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return GET_HASH_KEY("REGION_BAY_MACOMBS_END");
		case 2:
			return GET_HASH_KEY("REGION_BAY_MERKINSWALLER");
		case 3:
			return GET_HASH_KEY("REGION_BAY_LAGRAS");
		case 4:
			return GET_HASH_KEY("REGION_BAY_LAKAY");
		case 5:
			return GET_HASH_KEY("REGION_BAY_SAINT_DENIS");
		case 6:
			return GET_HASH_KEY("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return GET_HASH_KEY("REGION_BAY_SERIAL_KILLER");
		case 8:
			return GET_HASH_KEY("REGION_BAY_SERENDIPITY");
		case 9:
			return GET_HASH_KEY("REGION_BAY_SHADYBELLE");
		case 10:
			return GET_HASH_KEY("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return GET_HASH_KEY("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return GET_HASH_KEY("REGION_BGV_BERYLS_DREAM");
		case 13:
			return GET_HASH_KEY("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return GET_HASH_KEY("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return GET_HASH_KEY("REGION_BGV_FORTRIGGS");
		case 16:
			return GET_HASH_KEY("REGION_BGV_HANGINGDOG");
		case 17:
			return GET_HASH_KEY("REGION_BGV_LONEMULESTEAD");
		case 18:
			return GET_HASH_KEY("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return GET_HASH_KEY("REGION_BGV_MONTO_REST");
		case 20:
			return GET_HASH_KEY("REGION_BGV_OWANJILA_DAM");
		case 21:
			return GET_HASH_KEY("REGION_BGV_PAINTEDSKY");
		case 22:
			return GET_HASH_KEY("REGION_BGV_PRONGHORN");
		case 24:
			return GET_HASH_KEY("REGION_BGV_SHACK");
		case 23:
			return GET_HASH_KEY("REGION_BGV_RIGGS_STATION");
		case 25:
			return GET_HASH_KEY("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return GET_HASH_KEY("REGION_BGV_STRAWBERRY");
		case 27:
			return GET_HASH_KEY("REGION_BGV_VALLEY_VIEW");
		case 28:
			return GET_HASH_KEY("REGION_BGV_WALLACE_STATION");
		case 29:
			return GET_HASH_KEY("REGION_BGV_WATSONSCABIN");
		case 30:
			return GET_HASH_KEY("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return GET_HASH_KEY("REGION_BLU_COPPERHEAD");
		case 32:
			return GET_HASH_KEY("REGION_BLU_SISIKA");
		case 33:
			return GET_HASH_KEY("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return GET_HASH_KEY("REGION_CML_DINO_LADY");
		case 35:
			return GET_HASH_KEY("REGION_CML_OLDFORTWALLACE");
		case 36:
			return GET_HASH_KEY("REGION_CML_SIXPOINTCABIN");
		case 37:
			return GET_HASH_KEY("REGION_GRT_BEECHERS");
		case 38:
			return GET_HASH_KEY("REGION_GRT_BLACKWATER");
		case 39:
			return GET_HASH_KEY("REGION_GRT_QUAKERS_COVE");
		case 40:
			return GET_HASH_KEY("REGION_GRZ_ADLERRANCH");
		case 41:
			return GET_HASH_KEY("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return GET_HASH_KEY("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return GET_HASH_KEY("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return GET_HASH_KEY("REGION_GRZ_CHEZPORTER");
		case 52:
			return GET_HASH_KEY("REGION_GRZ_COHUTTA");
		case 43:
			return GET_HASH_KEY("REGION_GRZ_COLTER");
		case 44:
			return GET_HASH_KEY("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return GET_HASH_KEY("REGION_GRZ_GUNFIGHT");
		case 45:
			return GET_HASH_KEY("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return GET_HASH_KEY("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return GET_HASH_KEY("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return GET_HASH_KEY("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return GET_HASH_KEY("REGION_GRZ_THELOFT");
		case 55:
			return GET_HASH_KEY("REGION_GRE_VETERAN");
		case 56:
			return GET_HASH_KEY("REGION_GRZ_WAPITI");
		case 49:
			return GET_HASH_KEY("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return GET_HASH_KEY("REGION_GUA_AGUASDULCES");
		case 58:
			return GET_HASH_KEY("REGION_GUA_CAMP");
		case 59:
			return GET_HASH_KEY("REGION_GUA_CINCOTORRES");
		case 60:
			return GET_HASH_KEY("REGION_GUA_LACAPILLA");
		case 61:
			return GET_HASH_KEY("REGION_GUA_MANICATO");
		case 62:
			return GET_HASH_KEY("REGION_HRT_ABANDONED_MILL");
		case 64:
			return GET_HASH_KEY("REGION_HRT_CARMODYDELL");
		case 65:
			return GET_HASH_KEY("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return GET_HASH_KEY("REGION_HRT_CROP_FARM");
		case 67:
			return GET_HASH_KEY("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return GET_HASH_KEY("REGION_HRT_DOWNSRANCH");
		case 69:
			return GET_HASH_KEY("REGION_HRT_EMERALDRANCH");
		case 70:
			return GET_HASH_KEY("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return GET_HASH_KEY("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return GET_HASH_KEY("REGION_HRT_LARNEDSOD");
		case 73:
			return GET_HASH_KEY("REGION_HRT_LOONY_CULT");
		case 74:
			return GET_HASH_KEY("REGION_HRT_LUCKYSCABIN");
		case 75:
			return GET_HASH_KEY("REGION_HRT_SWANSONS_STATION");
		case 76:
			return GET_HASH_KEY("REGION_HRT_VALENTINE");
		case 77:
			return GET_HASH_KEY("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return GET_HASH_KEY("REGION_ROA_ANNESBURG");
		case 79:
			return GET_HASH_KEY("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return GET_HASH_KEY("REGION_ROA_BEECHERS_C");
		case 80:
			return GET_HASH_KEY("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return GET_HASH_KEY("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return GET_HASH_KEY("REGION_ROA_BUTCHERCREEK");
		case 83:
			return GET_HASH_KEY("REGION_ROA_DOVERHILL");
		case 84:
			return GET_HASH_KEY("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return GET_HASH_KEY("REGION_ROA_ISOLATIONIST");
		case 86:
			return GET_HASH_KEY("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return GET_HASH_KEY("REGION_ROA_MOSSY_FLATS");
		case 88:
			return GET_HASH_KEY("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return GET_HASH_KEY("REGION_ROA_ROCKYSEVEN");
		case 90:
			return GET_HASH_KEY("REGION_ROA_TRAPPER");
		case 91:
			return GET_HASH_KEY("REGION_ROA_VANHORNMANSION");
		case 92:
			return GET_HASH_KEY("REGION_ROA_VANHORNPOST");
		case 93:
			return GET_HASH_KEY("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return GET_HASH_KEY("REGION_SCM_BULGERGLADE");
		case 95:
			return GET_HASH_KEY("REGION_SCM_CALIGAHALL");
		case 96:
			return GET_HASH_KEY("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return GET_HASH_KEY("REGION_SCM_CLEMENSCOVE");
		case 98:
			return GET_HASH_KEY("REGION_SCM_CLEMENSPOINT");
		case 99:
			return GET_HASH_KEY("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return GET_HASH_KEY("REGION_SCM_DAIRY_FARM");
		case 101:
			return GET_HASH_KEY("REGION_SCM_HORSE_SHOP");
		case 102:
			return GET_HASH_KEY("REGION_SCM_LONNIESSHACK");
		case 103:
			return GET_HASH_KEY("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return GET_HASH_KEY("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return GET_HASH_KEY("REGION_SCM_RHODES");
		case 106:
			return GET_HASH_KEY("REGION_SCM_SLAVE_PEN");
		case 107:
			return GET_HASH_KEY("REGION_TAL_AURORA_BASIN");
		case 109:
			return GET_HASH_KEY("REGION_TAL_COCHINAY");
		case 110:
			return GET_HASH_KEY("REGION_TAL_MANZANITAPOST");
		case 111:
			return GET_HASH_KEY("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return GET_HASH_KEY("REGION_TAL_TANNERSREACH");
		case 108:
			return GET_HASH_KEY("REGION_TAL_DEAD_SETTLER");
		case 113:
			return GET_HASH_KEY("REGION_TAL_TRAPPER");
		case 126:
			return GET_HASH_KEY("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return GET_HASH_KEY("REGION_HEN_THIEVES_LANDING");
		case 120:
			return GET_HASH_KEY("REGION_CHO_ARMADILLO");
		case 121:
			return GET_HASH_KEY("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return GET_HASH_KEY("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return GET_HASH_KEY("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return GET_HASH_KEY("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return GET_HASH_KEY("REGION_CHO_TWIN_ROCKS");
		case 114:
			return GET_HASH_KEY("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return GET_HASH_KEY("REGION_GAP_TUMBLEWEED");
		case 116:
			return GET_HASH_KEY("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return GET_HASH_KEY("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return GET_HASH_KEY("REGION_RIO_BENEDICT_POINT");
		case 118:
			return GET_HASH_KEY("REGION_RIO_FORT_MERCER");
		case 119:
			return GET_HASH_KEY("REGION_RIO_PLAIN_VIEW");
		case 128:
			return GET_HASH_KEY("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

bool func_739(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_740(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 && iParam1) != 0;
}

int func_741(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_924(iParam0) };
	return func_925(vVar0);
}

int func_742(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_30;
}

int func_743(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	func_926(uParam0);
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_738(iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = STREAMING::_0xD6E39DC5D46DF4AB(iVar0);
	if (iVar1 <= 0)
	{
		return 0;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return 1;
}

int func_744()
{
	int iVar0;

	iVar0 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
	return iVar0;
}

float func_745(float fParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	bVar0 = fParam0 >= 0f;
	iVar1 = BUILTIN::FLOOR(BUILTIN::POW(10f, BUILTIN::TO_FLOAT(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar2));
	}
	else
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

int func_746(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_927(vParam0, 0f, 0f, 0, 2);
	return func_927(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_747()
{
	return Global_1955569.f_866;
}

bool func_748()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_749()
{
	float fVar0;
	int iVar1;

	fVar0 = func_928(13);
	iVar1 = func_929(fVar0);
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

float func_750()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_751()
{
	if (func_694())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_752()
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

float func_753()
{
	return Global_1955565.f_3;
}

void func_754(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_755(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(iParam0, 2, 0, 0);
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

float func_756(float fParam0, float fParam1, float fParam2)
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

bool func_757()
{
	return func_928(12) <= -99f;
}

bool func_758()
{
	return func_928(12) >= 99f;
}

char* func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_760(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_761(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_762(int iParam0)
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

char* func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_764()
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_283(1) > 0;
}

void func_765(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_766(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_650(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_650(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_767(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_768(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_769(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_770()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

int func_771(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return func_930(func_267(iParam0));
}

bool func_772(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_931(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_773(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_932(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

int func_774(int iParam0)
{
	return func_933(iParam0);
}

bool func_775(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_529(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_776(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_934(iParam0);
}

struct<4> func_777()
{
	struct<4> Var0;

	return Var0;
}

bool func_778(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_96(0);
	*uParam1 = { func_312(iParam0, func_537(0), iParam3, 0) };
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

int func_779()
{
	return 16596983;
}

int func_780()
{
	return 16662519;
}

bool func_781(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_782(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_783(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_784(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
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
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_785(bool bParam0)
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_BEING_DRAGGED(Global_35))
	{
		return false;
	}
	if (!PED::_GET_LASSO_TARGET(Global_35) == 0)
	{
		return false;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return false;
	}
	if (PED::GET_PED_IS_GRAPPLED(Global_35))
	{
		return false;
	}
	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_786(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_784(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_787(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_788(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_935();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_792(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_789(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, false, false))
	{
		if (!func_792(iVar0))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_936(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = iParam0;
	if (!func_792(iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

int func_790(int iParam0)
{
	return func_797(iParam0, 7);
}

bool func_791()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(iVar1))
	{
		return false;
	}
	return true;
}

bool func_792(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_793()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	iVar0 = func_937(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_794()
{
	return Global_1911914.f_1578;
}

bool func_795(int iParam0)
{
	return func_398(Global_1935496.f_7, iParam0);
}

int func_796(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_797(int iParam0, int iParam1)
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

bool func_798(int iParam0)
{
	switch (func_17())
	{
		case -1:
			return (Global_1357549.f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_799(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_800(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_801(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_802(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_938(iVar0))
		{
			if (BUILTIN::VDIST(func_939(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_803(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (Global_40.f_450[iVar0] > -1 && Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(func_940(Global_40.f_450[iVar0]), vParam0) < fParam3)
			{
				return true;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return false;
}

bool func_804(int iParam0, var uParam1)
{
	if (!func_941(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_805()
{
	return func_942(Global_40.f_12019);
}

int func_806()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_678(iVar1);
		if (func_317(iVar2, 1, 0) || func_812(func_811(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_807()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_943(COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_808()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_817(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_809()
{
	return COLLECTION::_0x3A65F4844913A047(GET_HASH_KEY("ROCK_CARVINGS"), 0);
}

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return GET_HASH_KEY("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_811(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
		case GET_HASH_KEY("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_812(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_813(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_816(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case GET_HASH_KEY("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case GET_HASH_KEY("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_817(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_818(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case GET_HASH_KEY("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_819(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_820(int iParam0)
{
	if (func_944(iParam0) && func_317(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_945(iParam0) && func_946(iParam0))
	{
		return true;
	}
	return false;
}

char* func_821(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_473(iParam0));
}

int func_822(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_823(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_824(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_947(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_825(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

float func_826(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_827(int iParam0)
{
	int iVar0;

	if (func_17() != -1)
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

float func_828(int iParam0, float fParam1)
{
	return func_948(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

bool func_829(var uParam0, var uParam1, float fParam2)
{
	if (func_17() != -1)
	{
		return true;
	}
	if (!func_949(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		func_950(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_231(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_950(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_830(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_17() == 0)
	{
		func_951(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(0);
	if (bParam1)
	{
		func_952(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_953();
	}
	if (bParam2)
	{
		fParam0 = func_954(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(0, func_756(fParam0, -100f, 100f), bParam1);
}

void func_831(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_17() == 0)
	{
		func_951(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(2);
	if (bParam1)
	{
		func_952(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_954(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(2, func_756(fParam0, -100f, 100f), bParam1);
}

void func_832(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_17() == 0)
	{
		func_951(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(1);
	if (bParam1)
	{
		func_952(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_954(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(1, func_756(fParam0, -100f, 100f), bParam1);
}

void func_833(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_928(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_431(17))
	{
		return;
	}
	if (func_955())
	{
		iVar1 = func_929(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_929(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = func_65();
			func_66(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_956(&fVar3, &fVar4);
		func_957(13, func_756(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_231(94, 0);
		}
	}
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return GET_HASH_KEY("CONSUMABLE_HERB_GINSENG");
		case 3:
			return GET_HASH_KEY("CONSUMABLE_HERB_GINSENG");
		case 4:
			return GET_HASH_KEY("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return GET_HASH_KEY("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return GET_HASH_KEY("CONSUMABLE_HERB_CURRANT");
		case 7:
			return GET_HASH_KEY("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return GET_HASH_KEY("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return GET_HASH_KEY("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return GET_HASH_KEY("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return GET_HASH_KEY("CONSUMABLE_HERB_SAGE");
		case 15:
			return GET_HASH_KEY("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return GET_HASH_KEY("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return GET_HASH_KEY("CONSUMABLE_HERB_CURRANT");
		case 19:
			return GET_HASH_KEY("CONSUMABLE_HERB_SAGE");
		case 20:
			return GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return GET_HASH_KEY("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return GET_HASH_KEY("CONSUMABLE_HERB_OREGANO");
		case 28:
			return GET_HASH_KEY("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return GET_HASH_KEY("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return GET_HASH_KEY("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return GET_HASH_KEY("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return GET_HASH_KEY("CONSUMABLE_HERB_SAGE");
		case 37:
			return GET_HASH_KEY("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return GET_HASH_KEY("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 39:
			return GET_HASH_KEY("CONSUMABLE_HERB_WILD_CARROTS");
		case 40:
			return GET_HASH_KEY("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 41:
			return GET_HASH_KEY("CONSUMABLE_HERB_WILD_MINT");
		case 42:
			return GET_HASH_KEY("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 43:
			return GET_HASH_KEY("CONSUMABLE_HERB_YARROW");
		case 1:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR");
		case 9:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR");
		case 10:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL");
		case 14:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS");
		case 17:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST");
		case 21:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
		case 22:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER");
		case 24:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN");
		case 25:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED");
		case 30:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS");
		case 32:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL");
		case 35:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS");
		case 36:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER");
		default:
			break;
	}
	return 0;
}

void func_835(int iParam0, int iParam1)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_17() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_836(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_837(int iParam0)
{
	if (!func_836(iParam0))
	{
		return false;
	}
	return func_958(iParam0, 4, 1);
}

void func_838(int iParam0, bool bParam1)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_959(iParam0))
	{
		return;
	}
	func_835(iParam0, 2);
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

bool func_839(int iParam0)
{
	if (!func_836(iParam0))
	{
		return false;
	}
	return func_958(iParam0, 1, 1);
}

void func_840(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_839(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_960(iParam0);
	}
	if (!bParam1)
	{
		if (func_17() != -1)
		{
		}
		else
		{
			func_961(iParam0);
		}
	}
	func_835(iParam0, 1);
	if (func_17() == -1)
	{
		func_962(iParam0, func_320());
	}
	func_838(iParam0, 1);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

float func_841(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_842()
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

int func_843(int iParam0)
{
	int iVar0;

	iVar0 = func_380(func_963(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_844(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_380(func_963(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_200(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_845()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_200(iVar1) == -999503751)
		{
			if (func_964() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_846(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_96(0), &Var5, iParam1);
	return true;
}

void func_847(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_965(iParam2, *uParam0);
	func_966(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_849(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_850(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

void func_851(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_200(iParam0))
	{
		case -2061583405:
			bVar0 = func_967(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_967(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_967(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_967(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_967(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_967(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_625();
	}
	if (bParam1)
	{
		func_627(0, 0);
	}
}

void func_852(var uParam0, int iParam1)
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
			if ((func_968(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_968(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_969(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_853(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_970(uParam0, 1))
	{
		func_971(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_854(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_855(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_634(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_634(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == GET_HASH_KEY("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = GET_HASH_KEY("BASE");
		if (bParam3)
		{
			func_634(iVar2, iVar0);
		}
	}
}

bool func_856(int iParam0)
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

int func_857(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_624();
	}
	iVar0 = 0;
	if (iParam0 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_858(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_859(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = GET_HASH_KEY("BASE");
	return true;
}

bool func_860(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_380(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_861(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_380(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_372(524288))
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

int func_862(var uParam0)
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

void func_863(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_17() == -1)
	{
		func_972(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_973(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_864(int iParam0, int iParam1)
{
	if (func_17() == -1)
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

int func_865(int iParam0)
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
			return 1460520700;
			return 523337834;
			return -19271249;
			return 214175524;
			return -1303643297;
			return 411856831;
			return -926815459;
			return -1300731953;
			return -409616653 /* GXTEntry: "The Homesteader" */;
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
			return 0;
		}

void func_866(int iParam0, bool bParam1, int iParam2)
{
	func_974(&(Global_1946804.f_1378), iParam0);
	func_975(2, iParam0, 6);
	if (bParam1)
	{
		func_627(0, 1);
	}
}

bool func_867()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

int func_868()
{
	return Global_1051081.f_11;
}

char* func_869()
{
	return "unnamed";
}

int func_870(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_871(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return func_976(32, iParam0);
}

int func_872(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (Global_1225639.f_21[iParam0])
	{
		return Global_1108178[iParam0 /*37*/].f_1;
	}
	return 25;
}

bool func_873(int iParam0)
{
	if (func_977(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1225639.f_10, iParam0) != 1)
		{
			func_978(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1225639.f_10, iParam0) == 1;
}

bool func_874(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

void func_875(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

int func_876(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = GET_HASH_KEY("PROVISION_HERON_FEATHER");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = GET_HASH_KEY("PROVISION_GATOR_EGG");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_715(iVar12);
	}
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_716(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_877(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

bool func_878(int iParam0)
{
	if (func_979(iParam0, GET_HASH_KEY("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_879(int iParam0)
{
	if (!func_309(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case GET_HASH_KEY("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = GET_HASH_KEY("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case GET_HASH_KEY("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = GET_HASH_KEY("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case GET_HASH_KEY("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_880(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_309(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_310(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_686((398 + iVar29), 1);
		if (func_539(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_540(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_881(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_882(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_980(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_980(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_980(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_431(18);
		case 2:
			return func_431(20);
		case 1:
			return func_431(19);
		default:
			break;
	}
	return true;
}

int func_884(int iParam0)
{
	return func_981(Global_40.f_11095.f_11[iParam0]);
}

void func_885(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_17() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_431(31))
	{
		return;
	}
	iVar0 = func_884(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_884(iParam0);
	if (func_982(iParam0) && func_983(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_984(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_985(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_231(func_986(iParam0), 0);
					}
					func_987(iParam0, iVar2, iVar3);
					func_171(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_886(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return GET_HASH_KEY("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return GET_HASH_KEY("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return GET_HASH_KEY("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

void func_888(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_889(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1955569.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569.f_5.f_1, iParam0);
		if (iVar0 == Global_1955569.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_1, iParam0, "pause_info_panel_list", Global_1955569.f_5.f_2[iParam0 /*36*/]);
}

void func_890(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_891(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_892(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_893(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_894(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_895(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_896()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_988();
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_435(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_479(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_435(GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"));
		func_479(GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_897(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_898(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_310(iParam0, 1, 0) };
	return func_379(Var0.f_4);
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return GET_HASH_KEY("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return GET_HASH_KEY("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return GET_HASH_KEY("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return GET_HASH_KEY("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return GET_HASH_KEY("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return GET_HASH_KEY("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return GET_HASH_KEY("PROVISION_LIONS_PAW");
		case 8:
			return GET_HASH_KEY("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return GET_HASH_KEY("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return GET_HASH_KEY("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return GET_HASH_KEY("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return GET_HASH_KEY("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return GET_HASH_KEY("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return GET_HASH_KEY("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return GET_HASH_KEY("PROVISION_BRACELET_GOLD");
		case 16:
			return GET_HASH_KEY("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return GET_HASH_KEY("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return GET_HASH_KEY("PROVISION_BRACELET_SILVER");
		case 19:
			return GET_HASH_KEY("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return GET_HASH_KEY("PROVISION_RF_WOOD_COBALT");
		case 21:
			return GET_HASH_KEY("PROVISION_EARRING_GOLD");
		case 22:
			return GET_HASH_KEY("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return GET_HASH_KEY("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return GET_HASH_KEY("PROVISION_EARRING_SILVER");
		case 25:
			return GET_HASH_KEY("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_900(int iParam0)
{
	return func_989(iParam0, -1);
}

bool func_901(int iParam0, bool bParam1)
{
	return func_990(func_65(), iParam0, bParam1);
}

bool func_902()
{
	if (func_694())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_903(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_991((Global_40.f_4283.f_325 + iParam0));
}

void func_904(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_902())
	{
		func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, GET_HASH_KEY("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_GANG_SAVINGS"), 0, GET_HASH_KEY("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_905(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_906(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_992(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_907(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_992(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_908()
{
	func_907(-939420910);
	func_907(-1187950766);
	func_907(356365161);
	func_907(753127042);
	func_907(-2038424081);
	func_907(1884271742);
	func_907(459290420);
}

void func_909()
{
	func_907(704802028);
	func_907(588987611);
	func_907(2008888900);
	func_907(1649996811);
	func_907(227918160);
	func_907(168171957);
	func_907(1193080109);
	func_907(-491981251);
	func_907(-639037538);
	func_907(-618620429);
}

bool func_910(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_992(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_911(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_912(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("EXOTIC_STAGE_01"):
			return 1;
		case GET_HASH_KEY("EXOTIC_STAGE_02"):
			return 2;
		case GET_HASH_KEY("EXOTIC_STAGE_03"):
			return 4;
		case GET_HASH_KEY("EXOTIC_STAGE_04"):
			return 8;
		case GET_HASH_KEY("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_913(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_914(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_915(int iParam0)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	if (func_601(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_916(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_600(iParam0))
	{
		return;
	}
	if (!func_915(iParam0))
	{
		func_918(iParam0, 2);
		if (bParam2)
		{
			if (!func_74(0, 0, 1))
			{
				func_86(1, 4);
			}
		}
		if ((!func_917() && !bParam1) && !func_74(0, 0, 1))
		{
			func_202(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_993(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_917()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_918(int iParam0, int iParam1)
{
	if (!func_600(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_919(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_994(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_432(50);
			}
			else
			{
				func_432(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_432(51);
			}
			else
			{
				func_432(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_995(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_461();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_461();
			}
			break;
		case 3:
			func_432(24);
			if (bParam1)
			{
				if (!func_995(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_461();
				}
			}
			break;
	}
}

void func_920(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_996(0))
			{
				iVar0++;
			}
			if (func_996(2))
			{
				iVar0++;
			}
			if (func_996(4))
			{
				iVar0++;
			}
			if (!func_997(16))
			{
				if (iVar0 == 1)
				{
					func_998();
					func_231(456, 1);
					func_999(16);
				}
			}
			if (!func_997(32))
			{
				if (iVar0 >= 3)
				{
					func_998();
					func_231(456, 1);
					func_999(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_996(1))
			{
				iVar0++;
			}
			if (func_996(3))
			{
				iVar0++;
			}
			if (func_996(7))
			{
				iVar0++;
			}
			if (!func_997(1))
			{
				if (iVar0 == 1)
				{
					func_1000();
					func_231(457, 1);
					func_999(1);
				}
			}
			if (!func_997(2))
			{
				if (iVar0 >= 3)
				{
					func_1000();
					func_231(457, 1);
					func_999(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_996(5))
			{
				iVar0++;
			}
			if (func_996(6))
			{
				iVar0++;
			}
			if (func_996(8))
			{
				iVar0++;
			}
			if (!func_997(4))
			{
				if (iVar0 == 1)
				{
					func_1001();
					func_231(455, 1);
					func_999(4);
				}
			}
			if (!func_997(8))
			{
				if (iVar0 >= 3)
				{
					func_1001();
					func_231(455, 1);
					func_999(8);
				}
			}
			break;
	}
}

void func_921(var uParam0)
{
	func_733(uParam0, GET_HASH_KEY("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_733(uParam0, GET_HASH_KEY("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_733(uParam0, GET_HASH_KEY("LOOTER_PED_IS_FEMALE"));
	}
}

void func_922(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1002(uParam0))
	{
		return;
	}
	if (Global_1224866 < 20)
	{
		Global_1224866++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224866.f_1[iVar0 /*21*/] = { Global_1224866.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1224866.f_1[(Global_1224866 - 1) /*21*/] = { Var1 };
}

bool func_923(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

Vector3 func_924(int iParam0)
{
	return VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3);
}

int func_925(vector3 vParam0)
{
	return BUILTIN::ROUND(BUILTIN::VDIST(Global_36, vParam0));
}

void func_926(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

int func_927(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

float func_928(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_929(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_930(int iParam0)
{
	return iParam0 & 31;
}

bool func_931(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_932(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1003(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_934(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_935()
{
	return -1;
}

float func_936(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_841(Global_35, iParam0, bParam1, bParam2);
}

int func_937(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_1004(iVar0))
		{
			fVar3 = func_1005(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_938(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1006(Global_1835011[iParam0 /*74*/].f_1);
}

Vector3 func_939(int iParam0)
{
	return func_1007(iParam0);
}

Vector3 func_940(int iParam0)
{
	vector3 vVar0;

	if (!func_153(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1008(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

bool func_941(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_942(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_943(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_944(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
		default:
			break;
	}
	return false;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_946(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1009(&iVar0, 0, iVar95, &Var1) && !func_1009(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1010(iVar0, &Var1);
			if (func_309(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_947(int iParam0)
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

float func_948(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_949(int iParam0)
{
	if (func_690())
	{
		return false;
	}
	return func_339(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_950(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1011(iParam0, &Var0);
}

void func_951(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_954(iParam0, fParam1, 1);
	}
	func_266(iParam0, (func_1012(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_952(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_953()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_954(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65();
	func_1013(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1014(iParam0, 2);
	if (func_990(iVar0, func_1015(iParam0, 2), 1))
	{
		func_1016(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_231(88, bParam2);
		return 0f;
	}
	func_1017(iParam0, func_65(), 2);
	func_1016(iParam0, iVar1 + 1, 2);
	return fParam1;
}

bool func_955()
{
	if (func_17() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return func_901(Global_1347477.f_195, 0);
}

void func_956(float fParam0, float fParam1)
{
	if (!func_176())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_957(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_650(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1018(1, bVar1, 1, sVar2);
		func_1019(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_511(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_261();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_511(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_511(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_958(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_836(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_959(int iParam0)
{
	if (!func_836(iParam0))
	{
		return false;
	}
	return func_958(iParam0, 2, 1);
}

int func_960(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_961(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_231(210, 0);
			break;
		case 16:
			func_231(211, 0);
			break;
		case 33:
			func_231(212, 0);
			break;
		case 42:
			func_231(213, 0);
			break;
		case 2:
			func_231(214, 0);
			break;
		case 3:
			func_231(215, 0);
			break;
		case 43:
			func_231(216, 0);
			break;
		case 15:
			func_231(217, 0);
			break;
		case 23:
			func_231(218, 0);
			break;
		case 37:
			func_231(219, 0);
			break;
		case 26:
			func_231(220, 0);
			break;
		case 13:
			func_231(221, 0);
			break;
		case 19:
			func_231(222, 0);
			break;
		case 34:
			func_231(223, 0);
			break;
		case 38:
			func_231(224, 0);
			break;
		case 40:
			func_231(225, 0);
			break;
		case 7:
			func_231(226, 0);
			break;
		case 20:
			func_231(227, 0);
			break;
		case 18:
			func_231(228, 0);
			break;
		case 6:
			func_231(229, 0);
			break;
		case 29:
			func_231(230, 0);
			break;
		case 39:
			func_231(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_231(233, 0);
			break;
		case 8:
			func_231(234, 0);
			break;
		case 28:
			func_231(235, 0);
			break;
		case 31:
			func_231(236, 0);
			break;
		case 12:
			func_231(237, 0);
			break;
		case 27:
			func_231(238, 0);
			break;
		case 41:
			func_231(239, 0);
			break;
	}
}

void func_962(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				func_321(GET_HASH_KEY("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

int func_963(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_379(iVar0);
}

int func_964()
{
	return Global_1946804.f_1497;
}

void func_965(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_966(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1020(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_380(func_898(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1021(uParam0);
	}
}

int func_967(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_620(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_200(iParam0) != -999503751)
		{
			func_1022(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_200(iParam0) != -999503751)
	{
		func_1022(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_846(iParam0, 1);
	return 1;
}

bool func_968(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_969(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_970(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_971(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_972(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_973(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_974(var uParam0, int iParam1)
{
	int iVar0;

	if (func_17() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_972(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_973(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_975(int iParam0, int iParam1, int iParam2)
{
	if (func_17() == -1)
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

bool func_976(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1023(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_1024())
	{
		return func_1023(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_1023(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_977(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888.f_49111), iParam0))
	{
		return true;
	}
	return false;
}

void func_978(int iParam0)
{
	int iVar0;

	if (func_1025() != 0 || func_17() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1225639.f_21[iVar0])
	{
		func_1026(iParam0);
		return;
	}
	if (Global_1058888.f_42357.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_1027(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888.f_42357.f_1[iVar0 /*5*/] = 1;
}

int func_979(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_980(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_881(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_981(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1028(iVar6) - func_1028(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_981(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_984(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_981(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1028(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1028(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_985(int iParam0)
{
	int iVar0;

	if (func_1029(iParam0, &iVar0))
	{
		return func_1028(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1030())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1030())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1030())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_986(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_987(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1031(iParam0));
	sVar4 = func_1033(func_1032(iVar3, iParam2));
	sVar6 = func_1034(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1035(iParam0));
	iVar8 = func_1036(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1037(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_582(sVar7, sVar1, iVar8, iVar9, GET_HASH_KEY("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1038(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_988()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_1039(Global_35, &iVar0);
	Var30 = { func_536(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1040(0);
	func_1041(7);
	func_376(GET_HASH_KEY("KIT_BANDANA"), 1, 1, 0);
	if (func_624() == 1160113249)
	{
		func_376(GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_376(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1042(Global_35, &iVar0);
}

int func_989(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_96(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_252(&uVar6, iVar0);
	func_253(&uVar6, iVar1);
	func_254(&uVar6, iVar2);
	func_255(&uVar6, iVar3);
	func_256(&uVar6, iVar4);
	func_257(&uVar6, iVar5);
	return uVar6;
}

bool func_990(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1043(iParam1) || !func_1043(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_991(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_654(GET_HASH_KEY("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_992(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case GET_HASH_KEY("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case GET_HASH_KEY("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case GET_HASH_KEY("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case GET_HASH_KEY("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case GET_HASH_KEY("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case GET_HASH_KEY("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case GET_HASH_KEY("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case GET_HASH_KEY("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case GET_HASH_KEY("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case GET_HASH_KEY("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case GET_HASH_KEY("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case GET_HASH_KEY("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case GET_HASH_KEY("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case GET_HASH_KEY("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case GET_HASH_KEY("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case GET_HASH_KEY("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case GET_HASH_KEY("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case GET_HASH_KEY("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case GET_HASH_KEY("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case GET_HASH_KEY("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case GET_HASH_KEY("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case GET_HASH_KEY("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case GET_HASH_KEY("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case GET_HASH_KEY("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

char* func_993(int iParam0)
{
	int iVar0;

	iVar0 = func_865(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_821(iVar0);
}

int func_994(int iParam0)
{
	int iVar0;

	if (func_1044(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1045(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1046(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1047(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_995(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_317(func_1048(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_996(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_317(func_1049(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_997(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_998()
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	func_479(GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_884(1);
	func_987(1, iVar0, 0);
}

void func_999(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1000()
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	func_479(GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_884(2);
	func_987(2, iVar0, 0);
}

void func_1001()
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	func_479(GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_884(0);
	func_987(0, iVar0, 0);
}

bool func_1002(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1003(var uParam0)
{
	if (func_1050(&(uParam0->f_29), 62))
	{
		switch (func_1051())
		{
			case 1:
				if (!func_1050(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1050(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1050(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1050(&(uParam0->f_29), 32))
				{
					if (func_1050(&(uParam0->f_29), 2))
					{
						if (func_139(func_65()) < 5)
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

bool func_1004(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_1005(int iParam0, vector3 vParam1)
{
	if (func_1052(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

int func_1006(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_824(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_1007(int iParam0)
{
	if (func_932(iParam0))
	{
		return func_1053(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_1008(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_776(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

bool func_1009(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1054(iParam1) && !func_1055(iParam1))
	{
		iVar0 = func_205(iParam1);
	}
	else
	{
		return false;
	}
	func_1056(uParam3);
	iVar5 = func_1057(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

void func_1010(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1058(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1059(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_1011(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_1012(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569.f_753.f_5[iParam0 /*3*/];
		case 1:
			return Global_1955569.f_866.f_2.f_5[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

void func_1013(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_136(*iParam0);
	iVar1 = func_137(*iParam0);
	iVar2 = func_138(*iParam0);
	iVar3 = func_139(*iParam0);
	iVar4 = func_140(*iParam0);
	iVar5 = func_141(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_142(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_143(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1014(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569.f_753.f_5[iParam0 /*3*/].f_2;
		case 1:
			return Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_1015(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
	}
	switch (iParam1)
	{
		case 0:
			return Global_1955569.f_753.f_5[iParam0 /*3*/].f_1;
		case 1:
			return Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

void func_1016(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1017(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1955569.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

void func_1018(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_1019(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(0, 1, bParam0, bParam1);
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

void func_1020(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1060(&(uParam0->f_3));
}

void func_1021(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1061(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1022(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1062(iParam1);
	func_1063(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1064(&(uParam0->f_26), iVar1);
		if (func_1065(uParam0->f_26, &iVar0))
		{
			func_1066(iVar0, iVar1);
		}
	}
}

bool func_1023(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1024()
{
	return Global_1109400.f_245;
}

int func_1025()
{
	return Global_1572887.f_13;
}

void func_1026(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != 0 || Global_1572887.f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (Global_1058888.f_42357.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	func_1027(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888.f_42357.f_1[iVar0 /*5*/] = 0;
}

void func_1027(int iParam0)
{
	if (Global_1058888.f_42357.f_1[iParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42357.f_1[iParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42357.f_1[iParam0 /*5*/].f_1 = 0;
	}
}

int func_1028(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_1029(int iParam0, int iParam1)
{
	return false;
}

bool func_1030()
{
	return false;
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_96(0), GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_96(0), GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_96(0), GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_1032(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_1033(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1034(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1035(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1036(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return GET_HASH_KEY("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return GET_HASH_KEY("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return GET_HASH_KEY("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_1037(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1038(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

void func_1039(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_685(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1040(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_309(iVar1, 0))
		{
			func_851(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_1041(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_17() == -1)
	{
		func_1067(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (func_200(iVar2) != -999503751)
		{
			func_847(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_846(iVar2, 0))
		{
			func_212(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1042(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*iParam1)[iVar0], 0, false))
			{
				if (func_684((*iParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*iParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*iParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1043(int iParam0)
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
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_137(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_138(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1044(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1045(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1046(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1047(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return false;
	}
	if (func_191(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1048(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1068(iParam0);
		case 1:
			return func_1069(iParam0);
		case 2:
			return func_1070(iParam0);
		case 3:
			return func_1071(iParam0);
	}
	return 0;
}

int func_1049(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1072(iParam0);
		case 1:
			return func_1073(iParam0);
		case 2:
			return func_1074(iParam0);
		case 3:
			return func_1075(iParam0);
		case 4:
			return func_1076(iParam0);
		case 5:
			return func_1077(iParam0);
		case 6:
			return func_1078(iParam0);
		case 7:
			return func_1079(iParam0);
		case 8:
			return func_1080(iParam0);
	}
	return 0;
}

bool func_1050(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_1051()
{
	return Global_1899516;
}

bool func_1052(int iParam0)
{
	if (func_1081(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

Vector3 func_1053(int iParam0)
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

bool func_1054(int iParam0)
{
	iParam0 = func_291(iParam0);
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

bool func_1055(int iParam0)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1054(iParam0))
	{
		return false;
	}
	iVar0 = func_205(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_1056(var uParam0)
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

int func_1057(int iParam0)
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

void func_1058(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1059(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return uVar2;
}

void func_1060(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1061(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1082(func_624());
	if (*uParam0)
	{
		func_1060(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_17() != -1, iParam2);
	*uParam0 = 1;
}

int func_1062(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_1063(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1064(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1020(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_1065(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804.f_2657.f_19)
	{
		if (Global_1946804.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1066(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1067(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_656(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_658(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804.f_2657.f_26.f_2 = 5;
					Global_1946804.f_2657.f_26.f_1 = 5;
					Global_1946804.f_2657.f_26 = 5;
					break;
			}
		}
		func_660(iVar0);
	}
}

int func_1068(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1069(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1070(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_1073(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_1075(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_1076(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_1077(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_1078(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_1079(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_1080(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return GET_HASH_KEY("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return GET_HASH_KEY("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return GET_HASH_KEY("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

bool func_1081(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_1082(int iParam0)
{
	if (func_17() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

