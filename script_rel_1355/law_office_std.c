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
	bool bLocal_14 = false;
	struct<503> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	struct<2> ScriptParam_0 = { 0, 0 } ;
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
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_15.f_389 = ScriptParam_0.f_1;
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_15 = 3;
		bVar0 = true;
	}
	while (true)
	{
		func_1(bVar0);
		if (bVar0)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (Local_15)
			{
				case 0:
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
					func_2(&Local_15);
					func_3(&Local_15);
					func_4(&Local_15, 1);
					break;
				case 1:
					if (func_5(&Local_15))
					{
						if (func_6(&Local_15))
						{
							func_7();
							func_4(&Local_15, 2);
						}
					}
					break;
				case 2:
					if (func_8())
					{
						func_4(&Local_15, 3);
					}
					break;
				case 3:
					if (func_9(&(Local_15.f_3)))
					{
						if (!bVar0)
						{
							func_10(&Local_15, 0);
						}
					}
					else
					{
						func_11();
					}
					break;
			}
			if (!bVar0)
			{
				if (Local_15 > 0)
				{
					if (!func_12(Local_15.f_388, 64))
					{
						if (func_13(Local_15.f_387, Global_35))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_460)))
							{
								func_14(Global_35, Local_15.f_387, &(Local_15.f_460), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_15(&(Local_15.f_388), 64);
						}
					}
					if (func_16(&Local_15))
					{
						func_10(&Local_15, 0);
					}
				}
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		if (!func_17(0) || CAM::IS_SCREEN_FADED_OUT())
		{
			func_10(&Local_15, 1);
		}
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1935630.f_12)
	{
		return;
	}
	func_18(iParam0);
	func_19(iParam0->f_2, &iVar0);
	iParam0->f_390 = { VOLUME::_GET_VOLUME_COORDS(iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		iParam0->f_387 = func_20(Global_35);
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
		{
			iVar1 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iParam0->f_387 = func_20(iVar1);
			}
		}
		PED::_0xED9582B3DA8F02B4(1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0->f_387, "bDeadOrAlive") && DECORATOR::DECOR_GET_BOOL(iParam0->f_387, "bDeadOrAlive"))
	{
		func_15(&(iParam0->f_388), 8);
	}
	else
	{
		func_21(&(iParam0->f_388), 8);
	}
	if (!func_12(iParam0->f_388, 1))
	{
		if (func_22(iParam0->f_387, func_12(iParam0->f_388, 8)))
		{
			func_15(&(iParam0->f_388), 1);
		}
		else
		{
			func_21(&(iParam0->f_388), 1);
		}
	}
	if (!func_12(iParam0->f_388, 1))
	{
		return;
	}
	func_23(iParam0);
	if (!func_24(iParam0->f_389, 8))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_387, false);
	}
	func_25(iParam0);
}

void func_3(int iParam0)
{
	func_26(iParam0);
	HUD::TEXT_BLOCK_REQUEST("BHCR");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(iParam0->f_401));
	}
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_5(int iParam0)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("BHCR"))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)) && !HUD::TEXT_BLOCK_IS_LOADED(&(iParam0->f_401)))
	{
		return false;
	}
	return true;
}

bool func_6(int iParam0)
{
	return true;
}

void func_7()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_387))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15.f_387, GET_HASH_KEY("REL_CRIMINALS"));
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_15.f_387, GET_HASH_KEY("REL_CRIMINALS"));
		PED::SET_PED_CONFIG_FLAG(Local_15.f_387, 6, true);
	}
}

bool func_8()
{
	func_28(&Local_15);
	func_29(&Local_15);
	switch (Local_15.f_1)
	{
		case 0:
			if (func_30(Local_15.f_387, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(Local_15.f_387, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_387, true);
			}
			func_31(&Local_15, 1);
			break;
		case 1:
			func_32();
			func_34(func_33() == Local_15.f_2);
			if (func_35(&(Local_15.f_3), 1))
			{
				func_36(&(Local_15.f_3.f_329), 67108864);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_15.f_387, true);
				func_31(&Local_15, 2);
			}
			else if (func_24(Local_15.f_389, 256))
			{
				func_37();
				func_31(&Local_15, 3);
			}
			break;
		case 2:
			func_32();
			func_38();
			if (!func_24(Local_15.f_389, 32))
			{
				if (func_39(Local_15.f_3.f_329, 2048))
				{
					if (PED::_0x5C16855277819BBF() >= 1)
					{
						func_40(Local_15.f_389, 32);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_15.f_387) || !ENTITY::_0x88AD6CC10D8D35B2(Local_15.f_387))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_387, true, true);
						}
						PED::SET_PED_KEEP_TASK(Local_15.f_387, true);
						func_41(Local_15.f_387);
					}
				}
			}
			if (func_42(&(Local_15.f_3)))
			{
				if (!Local_15.f_501)
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_15.f_387, false);
					Local_15.f_501 = 1;
				}
				func_11();
				if (!func_43(Global_35, Local_15.f_390, 35f, 1, 1))
				{
					return true;
				}
			}
			else if (func_24(Local_15.f_389, 256))
			{
				func_37();
				func_31(&Local_15, 3);
			}
			break;
		case 3:
			if (!func_24(Local_15.f_389, 256))
			{
				Global_1395482.f_115 = func_12(Local_15.f_388, 4);
				Global_1395482.f_114 = Local_15.f_498;
				func_4(&Local_15, 0);
				func_31(&Local_15, 0);
			}
			break;
	}
	return false;
}

bool func_9(var uParam0)
{
	float fVar0;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_44(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (func_45(uParam0->f_69, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_69, 49, true);
	}
	if (func_46(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	if (!func_39(uParam0->f_329, 8388608))
	{
		func_47(uParam0);
		func_48(uParam0);
		if (!func_39(uParam0->f_329, 256))
		{
			if (!func_49(Global_35, -76381094) && !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				func_50(uParam0);
			}
		}
		else if (func_39(uParam0->f_329, 512) && !func_39(uParam0->f_328, 32))
		{
			func_51(uParam0);
		}
		if (!func_39(uParam0->f_328, 2097152))
		{
			func_52(uParam0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
	{
		func_53(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (func_54(uParam0))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_308))
	{
		if (!func_46(uParam0->f_306, Global_36))
		{
			func_55(uParam0->f_308);
			func_56(uParam0->f_308);
		}
	}
	return false;
}

void func_10(int iParam0, bool bParam1)
{
	func_57(iParam0);
	if (!func_24(iParam0->f_389, 4))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_387))
		{
			func_41(iParam0->f_387);
			if (func_24(iParam0->f_389, 32))
			{
				TASK::TASK_CARRIABLE(iParam0->f_387, GET_HASH_KEY("HOGTIED_PED"), 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iParam0->f_387, true);
			}
			else if (bParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(iParam0->f_387, false, false);
				PED::_0x39A2FC5AF55A52B1(iParam0->f_387, -1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_387));
			func_58(4);
		}
	}
	func_59(&(iParam0->f_3), 0);
	func_60(0);
	HUD::_TEXT_BLOCK_DELETE("BHCR");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(iParam0->f_401));
	}
	if (func_24(iParam0->f_389, 128))
	{
		func_41(iParam0->f_387);
		func_58(4);
	}
	if (func_61(iParam0))
	{
		func_62();
	}
	else
	{
		Global_1395482.f_115 = func_12(iParam0->f_388, 4);
		Global_1395482.f_116 = func_12(iParam0->f_388, 2);
		Global_1395482.f_114 = iParam0->f_498;
		Global_1395482.f_94 = iParam0->f_478;
		Global_1395482.f_72 = iParam0->f_456;
		Global_1395482.f_73 = iParam0->f_457;
		Global_1395482.f_74 = iParam0->f_458;
		Global_1395482.f_75 = iParam0->f_459;
		Global_1395482.f_117 = iParam0->f_500;
		Global_1395482.f_93 = iParam0->f_477;
	}
	func_63(iParam0);
	func_37();
	func_64(iParam0->f_389, 4);
	func_64(iParam0->f_389, 32);
	func_64(iParam0->f_389, 128);
	Global_1395482.f_1 = -1;
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (PED::_0x5C16855277819BBF() >= 1)
	{
		PED::_0x7D4E70A67A651C71(1);
	}
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
	{
		if (func_24(Local_15.f_389, 32))
		{
			if (VOLUME::DOES_VOLUME_EXIST(Local_15.f_3.f_306))
			{
				if (func_65(Global_35, Local_15.f_3.f_306, 1, 0))
				{
					if (!func_66(Local_15.f_387, 0))
					{
						if ((Local_15.f_397 > 1 && !ENTITY::IS_ENTITY_DEAD(Local_15.f_3.f_69)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_15.f_3.f_69, -1))
						{
							if (func_67(&(Local_15.f_393), 1f))
							{
								func_14(Local_15.f_3.f_69, Local_15.f_3.f_69, "CUT_THAT_OUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_68(&(Local_15.f_393));
								Local_15.f_397 = 0;
								Local_15.f_396 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 13f);
							}
						}
						else if (!func_69(&(Local_15.f_393)) || func_67(&(Local_15.f_393), Local_15.f_396))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 1:
									func_14(Local_15.f_387, Local_15.f_387, "GENERIC_CURSE_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 2:
									func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
							}
							func_68(&(Local_15.f_393));
							Local_15.f_397++;
							Local_15.f_396 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 13f);
						}
					}
				}
			}
		}
	}
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_13(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_14(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_70(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_15(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_16(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_12)
	{
		func_58(4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0->f_387, "bIsCriminal") || DECORATOR::DECOR_GET_BOOL(iParam0->f_387, "bIsCriminal") == 0)
	{
		return true;
	}
	if (func_71(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		func_40(iParam0->f_389, 128);
		return true;
	}
	if (func_72(&(iParam0->f_3), 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		if (iParam0->f_3.f_64 == 5 || iParam0->f_3.f_64 == 6)
		{
			func_40(iParam0->f_389, 128);
		}
		return true;
	}
	if (!func_12(iParam0->f_388, 1))
	{
		return true;
	}
	if (!func_12(iParam0->f_388, 8) && ENTITY::IS_ENTITY_DEAD(iParam0->f_387))
	{
		func_58(4);
		return true;
	}
	if (func_73(iParam0))
	{
		func_58(4);
		return true;
	}
	iVar0 = func_74();
	if (func_75(iVar0) != iParam0->f_389)
	{
		func_40(iParam0->f_389, 4);
		return true;
	}
	if (func_76(iParam0))
	{
		return true;
	}
	return false;
}

bool func_17(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_77(iVar0))
	{
		return false;
	}
	if (func_78(iVar0, 1) || func_78(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	iParam0->f_2 = 5;
	StringCopy(&(iParam0->f_398), "NBX", 24);
	StringCopy(&(iParam0->f_401), "BHJSDAU", 24);
	Global_1395482.f_1 = 6;
}

void func_19(int iParam0, int iParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2504.735f, -1308.831f, 49.06328f, 0f, 0f, 0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -1810.522f, -349.3201f, 163.474f, 0f, 0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -1813.445f, -353.8168f, 163.474f, 0f, 0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -272.9176f, 809.1227f, 119.4f, 0f, 0f, -80.06616f, 6.765059f, 4.518183f, 3f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -277.2155f, 807.0856f, 119.8f, 0f, 0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.428f, 1312.199f, 45.46901f, 0f, 0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, 1355.464f, -1302.104f, 77.52525f, 0f, 0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, 1360.674f, -1301.562f, 77.52525f, 0f, 0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5529.529f, -2927.852f, -1.033f, 0f, 0f, 25f, 6.7f, 6.3f, 3f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam1 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam1 && !PED::IS_PED_HOGTIED(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam0, "bIsCriminal"))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	bVar1 = false;
	bVar2 = false;
	bVar3 = func_12(iParam0->f_388, -2147483648);
	bVar4 = func_79(8);
	bVar5 = func_79(16);
	iParam0->f_3.f_358 = 0;
	iParam0->f_3.f_359 = func_80(iParam0->f_389);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_17)))
	{
		iParam0->f_3.f_325 = { Global_1395482.f_17 };
	}
	else
	{
		StringCopy(&(iParam0->f_3.f_325), "BNTY_NME_CRIM", 24);
	}
	if (!iParam0->f_3.f_359)
	{
		if (bVar3 || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_11)))
		{
			func_36(&(iParam0->f_3.f_328), 16777216);
			func_36(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_11)))
		{
			MemCopy(&(iParam0->f_3.f_332), {func_81(iParam0, &(Global_1395482.f_11))}, 4);
			func_82(&(iParam0->f_3.f_328), 16777216);
			func_82(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
		}
		if (bVar3 || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_14)))
		{
			func_36(&(iParam0->f_3.f_328), 33554432);
			func_36(&(iParam0->f_3.f_328), -2147483648);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_14)))
		{
			MemCopy(&(iParam0->f_3.f_336), {func_81(iParam0, &(Global_1395482.f_14))}, 4);
			func_82(&(iParam0->f_3.f_328), 33554432);
			func_82(&(iParam0->f_3.f_328), -2147483648);
		}
	}
	else
	{
		func_36(&(iParam0->f_3.f_328), -2147483648);
		func_36(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
	}
	iParam0->f_3.f_360 = ((bVar4 || bVar3) || iParam0->f_3.f_359);
	if (bVar5)
	{
		func_36(&(iParam0->f_3.f_328), -2147483648);
		func_36(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_20[iVar0 /*3*/])))
		{
			bVar1 = true;
			iParam0->f_404[iVar0 /*3*/] = { Global_1395482.f_20[iVar0 /*3*/] };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_36[iVar0 /*3*/])))
			{
				iParam0->f_420[iVar0 /*3*/] = { Global_1395482.f_36[iVar0 /*3*/] };
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
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_52[iVar0 /*3*/])))
		{
			bVar1 = true;
			bVar2 = true;
			iParam0->f_436[iVar0 /*3*/] = { Global_1395482.f_52[iVar0 /*3*/] };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_62[iVar0 /*3*/])))
			{
				iParam0->f_446[iVar0 /*3*/] = { Global_1395482.f_62[iVar0 /*3*/] };
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
	if (bVar1)
	{
		func_40(iParam0->f_389, 8);
	}
	if (bVar2)
	{
		func_40(iParam0->f_389, 16);
	}
	if (Global_1395482.f_115)
	{
		func_15(&(iParam0->f_388), 4);
	}
	else
	{
		func_21(&(iParam0->f_388), 4);
	}
	if (Global_1395482.f_116)
	{
		func_15(&(iParam0->f_388), 2);
	}
	else
	{
		func_21(&(iParam0->f_388), 2);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_95[iVar0 /*6*/])))
		{
			MISC::_COPY_MEMORY(&(iParam0->f_479[iVar0 /*6*/]), &(Global_1395482.f_95[iVar0 /*6*/]), 6);
			if (!func_24(iParam0->f_389, 512))
			{
				func_40(iParam0->f_389, 512);
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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_76)))
	{
		iParam0->f_460 = { Global_1395482.f_76 };
	}
	else
	{
		StringCopy(&(iParam0->f_460), "", 32);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_80[iVar0 /*4*/])))
		{
			iParam0->f_464[iVar0 /*4*/] = { Global_1395482.f_80[iVar0 /*4*/] };
		}
		else
		{
			StringCopy(&(iParam0->f_464[iVar0 /*4*/]), "", 32);
		}
		iVar0++;
	}
	iParam0->f_498 = Global_1395482.f_114;
	iParam0->f_478 = Global_1395482.f_94;
	iParam0->f_456 = Global_1395482.f_72;
	iParam0->f_457 = Global_1395482.f_73;
	iParam0->f_458 = Global_1395482.f_74;
	iParam0->f_459 = Global_1395482.f_75;
	iParam0->f_500 = Global_1395482.f_117;
	iParam0->f_477 = Global_1395482.f_93;
	func_36(&(iParam0->f_3.f_328), 67108864);
	func_36(&(iParam0->f_3.f_328), 268435456);
	func_36(&(iParam0->f_3.f_328), 536870912);
	func_36(&(iParam0->f_3.f_328), 134217728);
	func_36(&(iParam0->f_3.f_329), 262144);
	func_21(&(iParam0->f_388), -2147483648);
}

bool func_24(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PED::GET_PED_CONFIG_FLAG(iParam0->f_387, 4, true))
	{
		iVar0 = func_84(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, -1);
		iVar1 = func_84(GET_HASH_KEY("REWARD_BOUNTYHUNTING_SMALL"), 0, -1);
	}
	else
	{
		iVar0 = func_84(GET_HASH_KEY("REWARD_BOUNTYHUNTING_SMALL"), 0, -1);
		iVar1 = func_84(GET_HASH_KEY("REWARD_BEAT_MEDIUM"), 0, -1);
	}
	iParam0->f_3.f_67 = iParam0->f_387;
	func_85(&(iParam0->f_3.f_67));
	func_86(&(iParam0->f_3), &(iParam0->f_3.f_325), iParam0->f_2, iVar0, iVar1, 0);
	func_36(&(iParam0->f_3.f_329), 262144);
	func_36(&(iParam0->f_3.f_329), 524288);
	func_36(&(iParam0->f_3.f_329), 1048576);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_387, 4, true);
	iParam0->f_3.f_299 = 1;
}

void func_26(int iParam0)
{
}

bool func_27(int iParam0)
{
	return true;
}

void func_28(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_3.f_306))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_387, iParam0->f_3.f_306, false, 0))
	{
		if (!func_24(Global_1395482.f_1, 64))
		{
			func_40(Global_1395482.f_1, 64);
		}
	}
	else if (func_24(Global_1395482.f_1, 64))
	{
		func_64(Global_1395482.f_1, 64);
	}
}

void func_29(int iParam0)
{
	if (!func_24(iParam0->f_389, 256))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0->f_387) && !PED::IS_PED_HOGTIED(iParam0->f_387)) && !func_65(iParam0->f_387, iParam0->f_3.f_306, 1, 0))
		{
			func_59(&(iParam0->f_3), 1);
			func_40(iParam0->f_389, 256);
		}
	}
	else if (PED::IS_PED_HOGTIED(iParam0->f_387))
	{
		func_64(iParam0->f_389, 256);
	}
}

bool func_30(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_45(iParam0, iParam1);
}

void func_31(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

void func_32()
{
	if (VOLUME::DOES_VOLUME_EXIST(Local_15.f_3.f_306))
	{
		if (func_65(Global_35, Local_15.f_3.f_306, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_3.f_69))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15.f_3.f_69, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_15.f_387, -1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15.f_387, 0, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				}
			}
		}
	}
}

int func_33()
{
	return Global_1894899.f_2;
}

void func_34(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	bVar1 = func_24(Local_15.f_389, 8);
	if (bParam0)
	{
		if (!func_12(Local_15.f_388, 4))
		{
			if (func_24(Local_15.f_389, 16))
			{
				func_15(&(Local_15.f_388), 4);
				func_21(&(Local_15.f_388), 16);
				Local_15.f_498 = 0;
				bVar0 = true;
			}
		}
	}
	if (!bVar0)
	{
		bVar0 = func_12(Local_15.f_388, 4);
	}
	if (!func_12(Local_15.f_388, 16))
	{
		if (!bVar1 || func_87(bVar0))
		{
			if (bVar0 || !bVar1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
				{
					AUDIO::STOP_PED_SPEAKING(Local_15.f_387, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_387, false);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_387, 178, true);
				}
				func_88();
			}
			func_15(&(Local_15.f_388), 16);
			Local_15.f_502 = 0;
			return;
		}
		else
		{
			PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
		}
		func_89(bVar0);
	}
	else
	{
		switch (Local_15.f_502)
		{
			case 0:
				AUDIO::STOP_PED_SPEAKING(Local_15.f_387, false);
				if (func_12(Local_15.f_388, 32))
				{
					Local_15.f_502 = 4;
				}
				else if (func_90(0, 1, 0, 0))
				{
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_15.f_387) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15.f_387))
					{
						Local_15.f_502 = 1;
					}
				}
				break;
			case 1:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_15.f_387))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15.f_387))
					{
						if (func_91(0) == Local_15.f_387)
						{
							if (!func_92())
							{
								if (func_12(Local_15.f_388, 32))
								{
									Local_15.f_502 = 4;
								}
							}
							else
							{
								Local_15.f_502 = 2;
							}
						}
						else
						{
							Local_15.f_502 = 0;
						}
					}
				}
				break;
			case 2:
				PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						func_68(&(Local_15.f_393));
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
						Local_15.f_502 = 3;
					}
				}
				break;
			case 3:
				PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
				if (func_67(&(Local_15.f_393), Local_15.f_499))
				{
					Local_15.f_502 = 0;
				}
				break;
			case 4:
				break;
		}
	}
}

bool func_35(var uParam0, bool bParam1)
{
	func_93(uParam0);
	func_94(uParam0);
	if (func_95(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235.f_4 = 1;
			func_96(uParam0, 1);
			break;
		case 1:
			if (func_95(uParam0))
			{
				uParam0->f_308 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_97(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, func_98());
				func_99(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, 0, 15);
				}
				uParam0->f_309 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_100(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, false, 15);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 1, false);
				if (!Global_1935630.f_12)
				{
					if (func_101())
					{
						func_102(uParam0, Global_35, "John");
					}
					else
					{
						func_102(uParam0, Global_35, "Arthur");
					}
				}
				func_103(uParam0, 1);
				func_104(uParam0);
				func_105(uParam0->f_300);
				func_106(uParam0->f_300);
				func_96(uParam0, 2);
			}
			break;
		case 2:
			if (func_107(uParam0))
			{
				func_108(uParam0);
				func_109(uParam0);
				func_96(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_110(uParam0);
			}
			func_111(uParam0);
			func_112(uParam0);
			if (func_113(Global_36, func_97(uParam0->f_300), 20f, 1))
			{
				func_109(uParam0);
			}
			if (func_114(uParam0))
			{
				func_108(uParam0);
				func_96(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_36(int iParam0, int iParam1)
{
	func_115(iParam0, iParam1);
}

void func_37()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_38()
{
	int iVar0;
	int iVar1;

	if (!func_24(Local_15.f_389, 512))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_387, -1260924842))
			{
				if (!func_14(Local_15.f_387, Local_15.f_387, "PLEAD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_387, -369774137))
			{
				if (!func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!func_14(Local_15.f_387, Local_15.f_387, "WHOA_ESCALATED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 381748758))
			{
				func_14(Global_35, Global_35, "TELLS_PED_TO_SHUT_UP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!MISC::IS_BIT_SET(Local_15.f_478, iVar0))
			{
				if (Local_15.f_479[iVar0 /*6*/].f_4 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_479[iVar0 /*6*/])))
					{
						iVar1 = func_116(&(Local_15.f_479[iVar0 /*6*/]));
						if (!ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, Local_15.f_479[iVar0 /*6*/].f_4))
							{
								func_14(iVar1, iVar1, &(Local_15.f_479[iVar0 /*6*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								MISC::SET_BIT(&(Local_15.f_478), iVar0);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_39(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_40(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return;
	}
	if (!func_24(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] || iParam1);
	}
}

void func_41(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_117(&iVar0);
}

bool func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_110(uParam0);
	}
	if (func_46(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	func_93(uParam0);
	func_111(uParam0);
	func_48(uParam0);
	func_94(uParam0);
	func_112(uParam0);
	if (func_95(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		func_118(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (func_119(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				func_120(uParam0, 2);
			}
			break;
		case 2:
			func_121(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			func_122(uParam0, 10);
			func_68(&(uParam0->f_364));
			uParam0->f_367 = 0;
			func_55(uParam0->f_306);
			if (TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, true))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
			{
				func_123(uParam0);
			}
			if (func_124(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(func_124(uParam0->f_65));
			}
			func_120(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (func_125(uParam0))
				{
					if (func_126(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						func_68(&(uParam0->f_312));
						func_127(&(uParam0->f_318));
						uParam0->f_361 = 1;
						func_120(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (func_128(&(uParam0->f_364)) > 10f || !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						func_129(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						func_127(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (func_130(&(uParam0->f_312)) > 2f || func_131(uParam0))
			{
				if (!func_39(uParam0->f_328, 128))
				{
					if (func_132(uParam0))
					{
						func_133(100, 1);
						func_68(&(uParam0->f_318));
						func_36(&(uParam0->f_328), 128);
					}
				}
				else if (!func_39(uParam0->f_329, 256))
				{
					if (!func_49(Global_35, -76381094) && !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						func_50(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				func_134(uParam0);
			}
			else
			{
				if (func_54(uParam0))
				{
					func_120(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					func_120(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
			{
				func_68(&(uParam0->f_318));
				func_120(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!func_49(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				func_122(uParam0, 12);
				func_135(uParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_43(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_136(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

Vector3 func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 78:
			return 2907.757f, 1312.703f, 43.94054f;
		case 5:
			return 2508.101f, -1307.674f, 47.954f;
		case 105:
			return 1361.196f, -1304.287f, 76.761f;
		case 26:
			return -1808.399f, -348.088f, 163.655f;
		case 76:
			return -276.91f, 804.93f, 119.24f;
		case 38:
			if (iParam1 == 18)
			{
				return -762.74f, -1271.27f, 43.84f;
			}
			else
			{
				return -762.751f, -1266.627f, 43.051f;
			}
			break;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

bool func_45(int iParam0, int iParam1)
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
	if (func_39(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_46(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_47(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	fVar3 = 15f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_45(uParam0->f_69, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false) };
			if ((((((func_137(uParam0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f)) || MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_69, 5000)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_67, 5000)) || func_71(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
				{
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uParam0->f_69, Global_36, 3);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
				TASK::TASK_COMBAT_PED(uParam0->f_69, Global_35, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
				if (func_139(func_138(uParam0->f_300), 0) && (func_140(func_138(uParam0->f_300)) || !func_141(func_138(uParam0->f_300))))
				{
					func_142(func_138(uParam0->f_300), 0, 1, 0, 0);
				}
				if (!func_71(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
				}
				func_143(0, 0);
				func_36(&(uParam0->f_329), 8388608);
			}
		}
		else
		{
			func_36(&(uParam0->f_329), 8388608);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_48(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!func_144(1))
	{
		if (func_45(uParam0->f_67, 0))
		{
			if (!func_39(uParam0->f_328, 1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_340)))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 5;
					}
					else
					{
						iVar0 = 4;
					}
					if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[1 /*14*/].f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[1 /*14*/].f_1) > IntToFloat(iVar0)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, uParam0->f_30[1 /*14*/].f_1))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_340, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 1);
						}
					}
				}
			}
			if (!func_39(uParam0->f_328, 2) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_343)))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 11;
					}
					else
					{
						iVar0 = 8;
					}
					if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[1 /*14*/].f_1, false) || (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[1 /*14*/].f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[1 /*14*/].f_1) > IntToFloat(iVar0)))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_343, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 2);
						}
					}
				}
			}
			if ((!func_39(uParam0->f_328, 64) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_349))) && uParam0->f_60 > 1)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_305, true, 0) && !func_146(uParam0->f_67))
				{
					if (func_130(&(uParam0->f_315)) > 3f)
					{
						if (func_145(&(uParam0->f_103), uParam0->f_349, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 64);
						}
					}
				}
			}
			if ((!func_39(uParam0->f_328, 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_352))) && uParam0->f_60 > 1)
			{
				if (uParam0->f_300 == 26)
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_67, true, false) };
					if (Global_36.f_2 > (vVar1.z + 1f))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 8);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0) || func_147(uParam0->f_300, 0, 0))
				{
					if (func_145(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
					{
						func_36(&(uParam0->f_328), 8);
					}
				}
			}
		}
		if (!func_39(uParam0->f_328, 4) && func_39(uParam0->f_329, 256))
		{
			if (func_45(uParam0->f_67, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_346)))
			{
				if (func_145(&(uParam0->f_103), uParam0->f_346, 0, -1, 0, 0))
				{
					func_36(&(uParam0->f_328), 4);
				}
			}
			else
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355)))
				{
					MemCopy(&(uParam0->f_355), {func_148(uParam0->f_300)}, 3);
				}
				if (func_145(&(uParam0->f_103), uParam0->f_355, 0, -1, 0, 0))
				{
					func_36(&(uParam0->f_328), 4);
				}
			}
		}
	}
	else
	{
		func_68(&(uParam0->f_315));
	}
}

bool func_49(int iParam0, int iParam1)
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

void func_50(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	vector3 vVar7[24];
	vector3 vVar10[24];
	vector3 vVar15[24];
	vector3 vVar18[24];

	if (!func_39(uParam0->f_329, 4) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
	{
		func_36(&(uParam0->f_329), 4);
	}
	if (func_45(uParam0->f_69, 0))
	{
		if (!uParam0->f_358)
		{
			if (!func_39(uParam0->f_328, 16) && !func_144(1))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0) || func_147(uParam0->f_300, 1, 0))
				{
					vVar0 = { func_149(uParam0->f_300) };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
					{
						func_36(&(uParam0->f_328), 16);
					}
					else if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
					{
						func_36(&(uParam0->f_328), 16);
					}
				}
			}
		}
		if (func_65(Global_35, uParam0->f_306, 1, 0) && func_150(uParam0->f_69, Global_35, 0, 15f, 0))
		{
			if (func_39(uParam0->f_329, 4) && !func_39(uParam0->f_328, 512))
			{
				if (func_130(&(uParam0->f_318)) >= 2f)
				{
					if (uParam0->f_358 || func_39(uParam0->f_328, 134217728))
					{
						StringCopy(&cVar3, "JAIL_LEFT_MONEY_BEHIND_POST", 32);
						if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 512);
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar7, "JFRT", 24);
						MemCopy(&cVar10, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar7, &cVar10, 24);
						if (func_145(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 512);
						}
					}
				}
			}
			else if (!func_39(uParam0->f_328, 256))
			{
				if (func_130(&(uParam0->f_318)) >= 15f)
				{
					if (uParam0->f_358 || func_39(uParam0->f_328, 536870912))
					{
						StringCopy(&cVar11, "JAIL_LEAVE_MONEY_BEHIND", 32);
						if (func_151(uParam0->f_69, &cVar11, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 256);
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar15, "JRPY", 24);
						MemCopy(&cVar18, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar15, &cVar18, 24);
						if (uParam0->f_300 == 38)
						{
							func_36(&(uParam0->f_328), 256);
						}
						else if (func_145(&(uParam0->f_201), cVar15, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 256);
						}
					}
				}
			}
		}
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	vector3 vVar6[24];
	vector3 vVar9[24];

	if ((!func_69(&(uParam0->f_318)) || func_144(1)) || TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
	{
		func_68(&(uParam0->f_318));
	}
	if ((func_45(uParam0->f_69, 0) && func_65(Global_35, uParam0->f_306, 1, 0)) && func_150(uParam0->f_69, Global_35, 0, 15f, 0))
	{
		if (func_130(&(uParam0->f_318)) >= 0.75f)
		{
			iVar1 = func_153(uParam0->f_300);
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				iVar5 = func_154(uParam0->f_300, iVar0);
				if (!func_155(iVar5))
				{
					if (!func_156(Global_1347702[iVar5 /*49*/].f_12, 256) || func_101())
					{
						iVar2++;
					}
					else
					{
						bVar4 = true;
					}
				}
				else
				{
					iVar3++;
				}
				iVar0++;
			}
			if ((iVar2 == 0 && bVar4) || (iVar2 > 0 && iVar3 >= 2))
			{
				func_68(&(uParam0->f_318));
				func_36(&(uParam0->f_328), 32);
				return;
			}
			StringCopy(&cVar6, "JMRE", 24);
			if (iVar2 > 0)
			{
				StringCopy(&cVar6, "JMRE", 24);
			}
			else
			{
				StringCopy(&cVar6, "JFIN", 24);
			}
			MemCopy(&cVar9, {func_152(uParam0->f_300)}, 1);
			StringConCat(&cVar6, &cVar9, 24);
			if (func_145(&(uParam0->f_201), cVar6, 0, -1, 0, 0))
			{
				func_68(&(uParam0->f_318));
				func_36(&(uParam0->f_328), 32);
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_69, 0))
				{
					TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, 5000f, 1, 0, 0, 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, 5000, 0, 51, 0);
				}
			}
		}
	}
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_301 != 0)
	{
		func_36(&(uParam0->f_328), 2097152);
		return;
	}
	if (uParam0->f_300 == 38)
	{
		if ((func_130(&(uParam0->f_318)) > 5f && func_39(uParam0->f_328, 32)) && func_157(Global_35, -762.929f, -1265.749f, 43.051f, 0) > 1f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -762.929f, -1265.749f, 43.051f, 1f, 20000, 0.25f, 0, 16.36f);
			TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_67, -1, 0, 51, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC"), -1, true, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_69, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_36(&(uParam0->f_328), 2097152);
		}
	}
	else if (uParam0->f_300 == 76)
	{
		if (func_39(uParam0->f_328, 32) && func_157(Global_35, -276.282f, 807.353f, 118.379f, 0) > 1f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_67, -1, 0, 51, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, GET_HASH_KEY("WORLD_HUMAN_LEAN_POST_LEFT"), -276.282f, 807.353f, 118.379f, -60.915f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_69, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			func_36(&(uParam0->f_328), 2097152);
		}
	}
	else
	{
		func_36(&(uParam0->f_328), 2097152);
	}
}

void func_53(int iParam0, bool bParam1)
{
	func_158(iParam0, bParam1);
}

bool func_54(var uParam0)
{
	if (!func_39(uParam0->f_329, 256))
	{
		if (func_159(1) > uParam0->f_304)
		{
			func_117(&(uParam0->f_66));
			func_36(&(uParam0->f_329), 256);
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_308))
			{
				func_55(uParam0->f_308);
				func_56(uParam0->f_308);
			}
			if (func_45(uParam0->f_69, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
			}
			if (func_160())
			{
				func_161(1, 0, 0);
			}
			return true;
		}
	}
	return false;
}

void func_55(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_162(vVar0, 0);
}

void func_56(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_57(int iParam0)
{
}

void func_58(int iParam0)
{
	Global_1395482.f_10 = (Global_1395482.f_10 - (Global_1395482.f_10 && iParam0));
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_109(uParam0);
	}
	Global_1392235.f_4 = 0;
	func_117(&(uParam0->f_66));
	func_117(&(uParam0->f_68));
	func_53(uParam0->f_67, 0);
	func_163();
	func_103(uParam0, 0);
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_67) && func_164(uParam0->f_67)) && ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4) == 0)
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, true);
	}
	if (uParam0->f_27 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_27);
	}
	if (uParam0->f_28 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_28);
	}
	if (uParam0->f_29 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_29);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_10));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
	if (TASK::IS_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", false);
	}
	func_165(uParam0);
	func_166(&(uParam0->f_67), 1, 0, 1);
	func_167(uParam0, 1, 0);
	func_166(&(uParam0->f_69), 1, 1, 1);
	if (func_139(func_138(uParam0->f_300), 0) && (func_140(func_138(uParam0->f_300)) || !func_141(func_138(uParam0->f_300))))
	{
		func_142(func_138(uParam0->f_300), 0, 1, 0, 0);
	}
	func_168(0);
	func_55(uParam0->f_306);
	func_56(uParam0->f_306);
	func_56(uParam0->f_307);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_308))
	{
		func_55(uParam0->f_308);
		func_56(uParam0->f_308);
	}
	func_56(uParam0->f_305);
	func_56(uParam0->f_310);
	func_56(uParam0->f_311);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
	{
		STREAMING::_0x4EDDD9E9CA5AF985(GET_HASH_KEY("SC_BOUNTY_HUNTER_SHERIFF"));
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_371);
	}
	if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_71))
	{
		INTERIOR::UNPIN_INTERIOR(uParam0->f_71);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_72))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_72, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_73))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_73, false);
	}
}

void func_60(int iParam0)
{
	func_161(1, iParam0, 0);
}

bool func_61(int iParam0)
{
	if (!func_79(4))
	{
		if (!func_24(iParam0->f_389, 4))
		{
			return true;
		}
	}
	return false;
}

void func_62()
{
	StringCopy(&(Global_1395482.f_11), "", 24);
	StringCopy(&(Global_1395482.f_14), "", 24);
	StringCopy(&(Global_1395482.f_17), "", 24);
	StringCopy(&(Global_1395482.f_76), "", 32);
	func_88();
	func_169();
	func_170();
	Global_1395482.f_115 = 0;
	Global_1395482.f_116 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_94 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	Global_1395482.f_117 = 0;
	Global_1395482.f_93 = 0;
	func_37();
	func_58(4);
}

void func_63(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 7, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 4, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 14, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 4, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 1, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 2, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 3, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 16, true);
	}
}

void func_64(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return;
	}
	if (func_24(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] - (Global_1395482.f_2[iParam0] && iParam1));
	}
}

bool func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_66(int iParam0, bool bParam1)
{
	if (func_30(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_67(var uParam0, float fParam1)
{
	if (!func_69(uParam0))
	{
		return false;
	}
	if (func_130(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	func_171(uParam0, 0f);
}

bool func_69(var uParam0)
{
	return func_172(*uParam0, 1);
}

int func_70(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_173())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_174(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_175(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_68(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_176(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_177(func_151(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_178(bParam1, bParam2, bParam3);
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

bool func_72(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_39(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_117(&(uParam0->f_68));
			return true;
		}
		return false;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_146(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_117(&(uParam0->f_68));
				return true;
			}
			if (!func_69(&(uParam0->f_321)))
			{
				if (func_179(uParam0->f_67))
				{
					func_68(&(uParam0->f_321));
				}
			}
			else if ((!func_179(uParam0->f_67) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 4) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 5)
			{
				func_127(&(uParam0->f_321));
			}
			else if (func_130(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_117(&(uParam0->f_68));
				return true;
			}
		}
		else if (!func_69(&(uParam0->f_321)))
		{
			if (func_179(uParam0->f_67))
			{
				func_68(&(uParam0->f_321));
			}
		}
		else if ((!func_179(uParam0->f_67) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 4) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 5)
		{
			func_127(&(uParam0->f_321));
		}
		else if (func_130(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_117(&(uParam0->f_68));
			return true;
		}
	}
	fVar0 = func_175(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_146(uParam0->f_67))
			{
				uParam0->f_64 = 2;
			}
			else if (!PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				uParam0->f_64 = 3;
			}
			else
			{
				uParam0->f_64 = 1;
			}
			return true;
		}
		else if (fVar0 > fParam1)
		{
			if (!func_39(uParam0->f_329, 16))
			{
				func_129(uParam0, 256, 1);
				func_36(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_39(uParam0->f_329, 16))
			{
				func_82(&(uParam0->f_329), 16);
				if (func_146(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_129(uParam0, 16, 0);
				}
				else
				{
					func_129(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_180(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_45(uParam0->f_69, 0))
		{
			if (func_137(uParam0))
			{
				if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 5;
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 6;
				}
				return true;
			}
		}
		else
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_64 = 6;
			return true;
		}
	}
	if (uParam0->f_63 == 7 || uParam0->f_63 == 8)
	{
		fVar1 = func_157(Global_35, func_97(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar1 > 35f)
		{
			if (!func_39(uParam0->f_329, 131072))
			{
				func_36(&(uParam0->f_329), 131072);
				func_129(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_39(uParam0->f_329, 131072))
			{
				func_82(&(uParam0->f_329), 131072);
				func_129(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_157(Global_35, func_97(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar2 > 55f)
		{
			if (!func_39(uParam0->f_329, 33554432))
			{
				func_36(&(uParam0->f_329), 33554432);
				func_129(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_39(uParam0->f_329, 33554432))
			{
				func_82(&(uParam0->f_329), 33554432);
				func_129(uParam0, 2048, 0);
			}
		}
	}
	return false;
}

bool func_73(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return true;
	}
	iVar0 = func_20(Global_35);
	if (iVar0 == iParam0->f_387)
	{
		return false;
	}
	iVar1 = PED::_GET_LAST_MOUNT(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		iVar0 = func_20(iVar1);
		if (iVar0 == iParam0->f_387)
		{
			return false;
		}
	}
	if (func_174(iParam0->f_387, 1, 1) < 50f)
	{
		return false;
	}
	return true;
}

int func_74()
{
	return Global_1897952.f_41;
}

int func_75(int iParam0)
{
	int iVar0;

	if (!func_181(iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	switch (iParam0)
	{
		case 8:
			return -1;
		case 3:
		case 5:
		case 9:
			iVar0 = 3;
			break;
		case 6:
		case 10:
			iVar0 = 4;
			break;
		case 1:
		case 7:
			iVar0 = 2;
			break;
		case 0:
		case 2:
			iVar0 = 6;
			break;
		case 4:
		case 12:
			iVar0 = 1;
			break;
		case 11:
			iVar0 = 5;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 0;
			break;
	}
	if (func_182(iVar0))
	{
		iVar0 = func_183(iVar0);
	}
	return iVar0;
}

bool func_76(int iParam0)
{
	return false;
}

bool func_77(int iParam0)
{
	if (((func_78(iParam0, 1) && func_78(iParam0, 2)) && func_78(iParam0, 8)) && func_78(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_79(int iParam0)
{
	return (Global_1395482.f_10 && iParam0) != 0;
}

bool func_80(int iParam0)
{
	if (func_83(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1395482.f_117, iParam0);
	}
	return false;
}

Vector3 func_81(int iParam0, char* sParam1)
{
	vector3 vVar0;

	vVar0 = { iParam0->f_398 };
	StringConCat(&vVar0, "_", 24);
	StringConCat(&vVar0, sParam1, 24);
	return vVar0;
}

void func_82(int iParam0, int iParam1)
{
	func_184(iParam0, iParam1);
}

bool func_83(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_84(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_185(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_186(iVar25, 0) && func_187(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_85(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 278, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 21, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 314, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 466, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 326, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 16, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, false);
	PED::_0x2E5B5D1F1453E08E(*uParam0, 1);
	MISC::_0x7FA58CED69405F9A(*uParam0, 3);
	HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(*uParam0);
	func_188(*uParam0, 0);
}

void func_86(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringCopy(&(uParam0->f_325), "BNTY_NME_GU", 24);
	}
	else
	{
		StringCopy(&(uParam0->f_325), sParam1, 24);
	}
	uParam0->f_300 = uParam2;
	Global_40.f_9074.f_3 = iParam3;
	Global_40.f_9074.f_4 = iParam4;
	uParam0->f_303 = iParam3;
	uParam0->f_302 = iParam4;
	uParam0->f_65 = -1;
	func_82(&(uParam0->f_329), 512);
	func_189(uParam0, bParam5);
}

bool func_87(bool bParam0)
{
	if (bParam0)
	{
		if (Local_15.f_458 >= 3)
		{
			if (Local_15.f_459 >= 3)
			{
				return true;
			}
		}
	}
	if (Local_15.f_456 >= 5)
	{
		if (Local_15.f_457 >= 5)
		{
			return true;
		}
	}
	return false;
}

void func_88()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&(Global_1395482.f_20[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_36[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_52[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_62[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	Global_1395482.f_115 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	func_64(Global_1395482.f_1, 8);
	func_64(Global_1395482.f_1, 16);
}

void func_89(bool bParam0)
{
	if (!PED::IS_PED_DEAD_OR_DYING(Local_15.f_387, true))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_15.f_387))
			{
				if (!func_69(&(Local_15.f_393)))
				{
					func_68(&(Local_15.f_393));
					if (Local_15.f_498 == 0)
					{
						Local_15.f_499 = 1f;
					}
					else if (bParam0)
					{
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
					}
					else
					{
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7.5f, 18.5f);
					}
				}
				else if (func_190())
				{
					if (func_12(Local_15.f_388, 2))
					{
						if (func_67(&(Local_15.f_393), 2f))
						{
							func_191(bParam0);
						}
					}
					else if (func_67(&(Local_15.f_393), Local_15.f_499))
					{
						func_192(bParam0);
					}
				}
			}
		}
	}
}

bool func_90(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_66(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_193(fParam0))
	{
		return false;
	}
	return true;
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_194(Global_35))
		{
			iVar1 = func_195(Global_35);
		}
		else if (func_196(Global_35))
		{
			iVar1 = func_197(Global_35);
		}
		else if (func_198(Global_35))
		{
			iVar1 = func_199(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_200(0))
		{
			iVar2 = func_201(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar2);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_200(1))
		{
			iVar3 = func_201(1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar3);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar4 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar4);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!(DECORATOR::DECOR_EXIST_ON(iVar0, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iVar0, "bIsCriminal")))
		{
			return 0;
		}
	}
	return iVar0;
}

bool func_92()
{
	if (func_12(Local_15.f_388, 32))
	{
		return false;
	}
	if (Local_15.f_477 < 0 || Local_15.f_477 >= 3)
	{
		func_15(&(Local_15.f_388), 32);
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_464[Local_15.f_477 /*4*/])))
	{
		func_14(Global_35, Local_15.f_387, &(Local_15.f_464[Local_15.f_477 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	Local_15.f_477++;
	return true;
}

void func_93(var uParam0)
{
	bool bVar0;

	func_202(uParam0);
	switch (uParam0->f_63)
	{
		case 0:
			func_203(uParam0);
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				func_122(uParam0, 2);
			}
			else
			{
				bVar0 = PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true);
				if (bVar0)
				{
					func_122(uParam0, 1);
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				func_122(uParam0, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67) && !PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				func_122(uParam0, 0);
			}
			ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_67, 19, 1);
			if (func_204(uParam0->f_67, 0))
			{
				if (func_114(uParam0))
				{
					func_122(uParam0, 4);
				}
				else if (func_205(uParam0->f_67))
				{
					if (!func_113(Global_36, func_97(uParam0->f_300), 30f, 1))
					{
						func_122(uParam0, 5);
					}
					else
					{
						func_122(uParam0, 6);
					}
				}
				else
				{
					func_122(uParam0, 3);
				}
			}
			break;
		case 3:
			func_206(uParam0);
			if (!func_204(uParam0->f_67, 0))
			{
				func_122(uParam0, 2);
			}
			else if (func_114(uParam0))
			{
				func_122(uParam0, 4);
			}
			else if (func_205(uParam0->f_67))
			{
				if (!func_113(Global_36, func_97(uParam0->f_300), 30f, 1))
				{
					func_122(uParam0, 5);
				}
				else
				{
					func_109(uParam0);
					func_122(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!func_205(uParam0->f_67))
			{
				func_122(uParam0, 3);
			}
			break;
		case 6:
			if (func_164(uParam0->f_67))
			{
				func_122(uParam0, 3);
			}
			break;
		case 4:
			if (uParam0->f_62 >= 5)
			{
				if (!func_146(uParam0->f_67))
				{
					func_68(&(uParam0->f_364));
					func_122(uParam0, 7);
				}
				else
				{
					func_68(&(uParam0->f_364));
					func_122(uParam0, 8);
				}
			}
			break;
		case 7:
			if (!func_39(uParam0->f_329, 2) && !func_144(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					func_129(uParam0, 1024, 1);
					func_36(&(uParam0->f_329), 2);
				}
			}
			if (!func_146(uParam0->f_67))
			{
				func_207(uParam0);
				if (!func_204(uParam0->f_67, 1))
				{
					func_122(uParam0, 2);
				}
				else if (func_157(Global_35, func_208(uParam0), 0) < 1f && func_209(Global_35, func_208(uParam0)) < 3f)
				{
					func_53(uParam0->f_67, 0);
					func_120(uParam0, 1);
					func_122(uParam0, 12);
				}
			}
			else
			{
				func_68(&(uParam0->f_364));
				func_122(uParam0, 8);
			}
			break;
		case 8:
			if (!func_39(uParam0->f_329, 2) && !func_144(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					func_129(uParam0, 1024, 1);
					func_36(&(uParam0->f_329), 2);
				}
			}
			func_207(uParam0);
			if (func_210(uParam0))
			{
				if (func_211(uParam0))
				{
					func_53(uParam0->f_67, 0);
					func_120(uParam0, 2);
					func_122(uParam0, 12);
				}
			}
			else if (!func_204(uParam0->f_67, 1))
			{
				if (ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) != 6)
				{
					if (func_43(Global_35, func_100(uParam0->f_300), 6.5f, 1, 1))
					{
						ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 7, false);
						func_53(uParam0->f_67, 0);
						func_120(uParam0, 2);
						func_122(uParam0, 12);
					}
					else
					{
						func_122(uParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (func_204(uParam0->f_67, 1))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					func_122(uParam0, 8);
				}
				else
				{
					func_122(uParam0, 7);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_94(var uParam0)
{
	if (!func_39(uParam0->f_329, 16777216))
	{
		if (!func_146(uParam0->f_67))
		{
			if (PED::_0x913D04A5176F84C9(uParam0->f_67))
			{
				if (!TASK::GET_IS_CARRIABLE_ENTITY(uParam0->f_67))
				{
					if (ENTITY::_GET_ENTITY_CARRY_CONFIG(uParam0->f_67) != GET_HASH_KEY("HOGTIED_PED"))
					{
						TASK::TASK_CARRIABLE(uParam0->f_67, GET_HASH_KEY("HOGTIED_PED"), 0, 0, 9);
						func_36(&(uParam0->f_329), 16777216);
					}
				}
			}
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true) == 1)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 11, false);
	}
}

bool func_95(var uParam0)
{
	if (!Global_1935630.f_12)
	{
		if (func_212(uParam0->f_300) && func_213(uParam0->f_300))
		{
			return true;
		}
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_59 = iParam1;
}

Vector3 func_97(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2910.89f, 1310.44f, 44.38f;
		case 5:
			return 2506.39f, -1308.93f, 47.95f;
		case 105:
			return 1359.44f, -1304.92f, 76.76f;
		case 26:
			return -1808.58f, -350.06f, 163.65f;
		case 76:
			return -275.78f, 804.02f, 118.37f;
		case 38:
			return -757.78f, -1269.13f, 43.14f;
		case 115:
			return -5528.903f, -2929.261f, -2.2833f;
	}
	return 0f, 0f, 0f;
}

char* func_98()
{
	return "unnamed";
}

int func_99(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_214(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

Vector3 func_100(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2908.76f, 1304.58f, 43.91f;
		case 5:
			return 2483.26f, -1303.78f, 48.88f;
		case 105:
			return 1362.846f, -1294.084f, 75.7035f;
		case 26:
			return -1808.76f, -342.45f, 163.81f;
		case 76:
			return -277.76f, 816.93f, 118.15f;
		case 38:
			return -768.61f, -1277.13f, 42.56f;
		case 115:
			return -5533.509f, -2932.444f, -2.8992f;
	}
	return 0f, 0f, 0f;
}

bool func_101()
{
	if (func_215() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_102(var uParam0, int iParam1, char* sParam2)
{
	func_216(&(uParam0->f_103), iParam1, sParam2, 1);
}

void func_103(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (uParam0->f_300)
	{
		case 76:
			iVar0 = 4;
			break;
		case 26:
			iVar0 = 473;
			break;
		case 105:
			iVar0 = 71;
			break;
		case 5:
			break;
		case 38:
			iVar0 = 510;
			break;
		case 115:
			iVar0 = 349;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			func_217(iVar0);
			func_36(&(uParam0->f_329), 16384);
		}
		else if (func_39(uParam0->f_329, 16384))
		{
			func_218(iVar0);
		}
	}
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_219(uParam0->f_300);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_220(uParam0->f_300, iVar1);
		iVar1++;
	}
	func_99(uParam0->f_306, "volSheriffOffice", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	func_168(1);
}

void func_105(int iParam0)
{
	if (iParam0 == 105)
	{
		func_221(349074475, 1);
		func_221(1614494720, 1);
	}
	else if (iParam0 == 26)
	{
	}
	else if (iParam0 == 76)
	{
		func_221(1988748538, 1);
	}
	else if (iParam0 == 5)
	{
	}
	else if (iParam0 == 38)
	{
	}
	else if (iParam0 == 115)
	{
	}
}

void func_106(int iParam0)
{
	if (iParam0 == 26)
	{
		func_221(1821044729, 1);
	}
	else if (iParam0 == 76)
	{
		func_222(GET_HASH_KEY("DOOR_VAL_JAIL_CELL_01"), 0, 1f, 0, 1, 0, 0, 0);
	}
}

bool func_107(var uParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = 1;
	STREAMING::REQUEST_MODEL(uParam0->f_14, false);
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
	{
		iVar0 = 0;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_19, false);
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
	{
		iVar0 = 0;
	}
	if (uParam0->f_5 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_5, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_7 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_7, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_7))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_11 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_11, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_11))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_9 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_9, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_9))
		{
			iVar0 = 0;
		}
	}
	switch (uParam0->f_300)
	{
		case 76:
			sVar1 = "BHJVAAU";
			break;
		case 26:
			sVar1 = "BHJSTAU";
			break;
		case 105:
			sVar1 = "BHJROAU";
			break;
		case 5:
			sVar1 = "BHJSDAU";
			break;
		case 38:
			sVar1 = "BHJBWAU";
			break;
		case 115:
			sVar1 = "BHJTWAU";
			break;
		case 78:
			sVar1 = "";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar1);
		if (!HUD::TEXT_BLOCK_IS_LOADED(sVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 8;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = func_223(uParam0->f_300, iVar2);
		if (func_224(iVar0) && func_225(iVar0))
		{
			func_221(iVar0, 1);
		}
		iVar2++;
	}
}

void func_109(var uParam0)
{
	if (uParam0->f_375 > 0 && STREAMING::HAS_ANIM_DICT_LOADED("script_proc@bounty@riding_punch"))
	{
		STREAMING::REMOVE_ANIM_DICT("script_proc@bounty@riding_punch");
	}
	if (func_226(uParam0->f_375.f_1))
	{
		func_227(&(uParam0->f_375.f_1), 1, 1);
	}
	if (func_69(&(uParam0->f_375.f_3)))
	{
		func_127(&(uParam0->f_375.f_3));
	}
	if (uParam0->f_375 != 0)
	{
		uParam0->f_375 = 0;
	}
}

void func_110(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	struct<4> Var8;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && uParam0->f_62 != 0)
	{
		func_228(uParam0, 0);
	}
	if ((uParam0->f_301 == 2 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371)) && PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_69, 0, 1);
	}
	switch (uParam0->f_62)
	{
		case 0:
			if (func_229(uParam0))
			{
				func_228(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_25)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							func_230(uParam0);
						}
						else
						{
							if (uParam0->f_301 == 0)
							{
								Var4 = { func_231(uParam0->f_30[0 /*14*/].f_1, "Sheriff", uParam0->f_30[0 /*14*/].f_9) };
								uParam0->f_371 = func_232(GET_HASH_KEY("SC_BOUNTY_HUNTER_SHERIFF"), Var4, Var4.f_3, 0, 0, 0);
							}
							else
							{
								uParam0->f_371 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_4, GET_HASH_KEY("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
							}
							STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
							TASK::_0xE69FDA40AAC3EFC0(uParam0->f_371, 0);
						}
					}
					else
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
						{
							Var0 = { func_231(uParam0->f_30[0 /*14*/].f_1, "Chair", uParam0->f_30[0 /*14*/].f_9) };
							func_233(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { func_231(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_233(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
							}
						}
						func_123(uParam0);
						func_228(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
			{
				func_228(uParam0, 1);
			}
			if (func_114(uParam0) && func_69(&(uParam0->f_372)))
			{
				if (func_130(&(uParam0->f_372)) > 1f)
				{
					func_234(uParam0);
					func_68(&(uParam0->f_372));
					func_228(uParam0, 3);
				}
			}
			else
			{
				func_68(&(uParam0->f_372));
			}
			break;
		case 3:
			if (func_114(uParam0))
			{
				if (func_130(&(uParam0->f_372)) > 1f || func_235(uParam0))
				{
					if (uParam0->f_360)
					{
						func_228(uParam0, 4);
					}
					else
					{
						func_228(uParam0, 5);
					}
				}
			}
			break;
		case 4:
			if (func_114(uParam0))
			{
				if (func_236(uParam0))
				{
					func_228(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_114(uParam0))
			{
				if (func_237(uParam0))
				{
					func_68(&(uParam0->f_372));
					func_228(uParam0, 6);
				}
			}
			break;
		case 6:
			if (func_130(&(uParam0->f_372)) > 1f)
			{
				if (uParam0->f_361 && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[0 /*14*/].f_1, false))
				{
					if (TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, true))
					{
						if (uParam0->f_301 == 0)
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
							TASK::TASK_START_SCENARIO_IN_PLACE_HASH(uParam0->f_69, GET_HASH_KEY("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						}
						else
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
						}
					}
					func_228(uParam0, 7);
				}
			}
			break;
	}
}

void func_111(var uParam0)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, false, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
	}
	if (uParam0->f_61 > 0)
	{
		if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, true);
		}
	}
	else if (func_164(uParam0->f_67))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_306, false, 0))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (func_238(uParam0, bVar0))
		{
			if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, true);
			}
		}
		else if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, false);
		}
		if (uParam0->f_63 == 8)
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 14))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 14, false);
			}
		}
	}
}

int func_112(var uParam0)
{
	if (uParam0->f_25)
	{
		return 1;
	}
	if (func_239(uParam0))
	{
		uParam0->f_25 = 1;
	}
	return 0;
}

bool func_113(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_136(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_114(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_307))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_307, false, 0))
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_306, false, 0))
	{
		return true;
	}
	return false;
}

void func_115(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_116(var uParam0)
{
	switch (uParam0->f_5)
	{
		case 0:
			return Global_35;
		case 1:
			return Local_15.f_387;
		default:
			break;
	}
	return 0;
}

void func_117(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_118(var uParam0)
{
	if (uParam0->f_301 == 0)
	{
		if (((ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false) && !func_49(uParam0->f_69, 993674639)) && !func_49(uParam0->f_69, -1098463898)) && !func_49(uParam0->f_69, -76381094))
		{
			if (uParam0->f_300 == 105)
			{
				if (func_157(Global_35, 1360.928f, -1305.943f, 76.761f, 0) > 1.5f)
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_69, GET_HASH_KEY("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), 1360.928f, -1305.943f, 76.761f, -15.235f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_69, GET_HASH_KEY("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), 1357.958f, -1304.813f, 76.761f, -20.879f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
			}
			else
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(uParam0->f_69, GET_HASH_KEY("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
		}
	}
	else if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
	{
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_30[0 /*14*/].f_1, "Sheriff") || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_30[0 /*14*/].f_1, "Sheriff"))
		{
			func_123(uParam0);
		}
	}
}

bool func_119(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (uParam0->f_25)
			{
				func_240(Global_35, 0);
				func_117(&(uParam0->f_66));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_30[1 /*14*/].f_1, func_241(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9, 1.48f, 0, 256, 20000, -1082130432 /* Float: -1f */);
				func_242(uParam0, 2);
				func_242(uParam0, 1);
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_243(uParam0->f_300);
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 1)
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 2, false);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[1 /*14*/].f_1);
				func_242(uParam0, 2);
			}
			break;
		case 2:
			if (!uParam0->f_362)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
				{
					TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(uParam0->f_69);
					uParam0->f_362 = 1;
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_30[1 /*14*/].f_1, func_241(uParam0->f_300)))
			{
				func_244(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_242(uParam0, 5);
			}
			break;
		case 5:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

void func_120(var uParam0, int iParam1)
{
	uParam0->f_60 = iParam1;
}

void func_121(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_65;
	if (iVar0 != -1)
	{
		if (func_146(uParam0->f_67))
		{
			func_245(iVar0, 1);
		}
		else
		{
			func_246(iVar0, 1);
		}
	}
	LAW::_0x73BAD7B2F2DB50DE(PLAYER::PLAYER_ID(), func_247(uParam0->f_300, 1, 1));
	if (!func_146(uParam0->f_67))
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 7, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 1, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 2, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_67, true);
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_67);
		func_249(iVar1, uParam0->f_300, func_248(uParam0->f_300));
		func_250(iVar1, uParam0->f_300, uParam0->f_299);
		if (!func_251(&(uParam0->f_67)))
		{
			func_252(iVar1, uParam0->f_300);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 4, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 6, false);
		func_36(&(uParam0->f_329), 2048);
	}
}

void func_122(var uParam0, int iParam1)
{
	if (uParam0->f_63 != iParam1)
	{
		uParam0->f_63 = iParam1;
		func_82(&(uParam0->f_329), 2);
		switch (iParam1)
		{
			case 0:
				if (func_45(uParam0->f_67, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_67, false);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 4, 1);
				break;
			case 1:
				if (func_45(uParam0->f_67, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_67, false);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 8, 1);
				break;
			case 2:
				if (func_45(uParam0->f_67, 0))
				{
					if (!func_39(uParam0->f_329, 67108864))
					{
						AUDIO::STOP_PED_SPEAKING(uParam0->f_67, true);
					}
				}
				if (!func_253(Global_35))
				{
					func_109(uParam0);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				MISC::_0x7FA58CED69405F9A(uParam0->f_67, 3);
				func_129(uParam0, 16, 1);
				break;
			case 3:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 3);
				func_129(uParam0, 32, 1);
				break;
			case 5:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_255(uParam0);
				func_129(uParam0, 64, 0);
				break;
			case 6:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 128, 0);
				break;
			case 4:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				break;
			case 7:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 7);
				func_129(uParam0, 1024, 0);
				break;
			case 8:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 8);
				func_129(uParam0, 1024, 0);
				break;
			case 9:
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 16, 1);
				break;
			case 10:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_129(uParam0, 2048, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_66 = func_256(408396114, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true, false), 1);
				}
				else
				{
					uParam0->f_66 = func_256(408396114, func_44(uParam0->f_300, uParam0->f_65), 1);
				}
				break;
			case 11:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_129(uParam0, 8192, 1);
				uParam0->f_66 = func_257(408396114, uParam0->f_8, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_RWRD");
				break;
			case 12:
				UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_37();
				break;
		}
	}
}

void func_123(var uParam0)
{
	switch (uParam0->f_301)
	{
		case 1:
		case default:
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", -1, false, true, 0, false, -1f, false);
			break;
		case 0:
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_STANDING_DESK", -1, false, true, 0, false, -1f, false);
			break;
		case 2:
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_WRITING", -1, false, true, 0, false, -1f, false);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_12));
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
			return GET_HASH_KEY("GANG_BANDITOS");
		case 17:
		case 18:
			return GET_HASH_KEY("GANG_SAVAGES");
		case 12:
		case 154:
			return GET_HASH_KEY("GANG_EXCONFED");
		case 153:
			return GET_HASH_KEY("GANG_RANCHERS");
	}
	return 0;
}

bool func_125(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_310))
	{
		vVar0 = { uParam0->f_1 };
		uParam0->f_310 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0.x, vVar0.y, (vVar0.z + 1f), 0f, 0f, 0f, 4.5f, 4.5f, 2.2f, "BH_RewardLineTriggerFar");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_311))
	{
		vVar3 = { uParam0->f_1 };
		uParam0->f_311 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar3.x, vVar3.y, (vVar3.z + 1f), 0f, 0f, 0f, 3f, 3f, 2.2f, "BH_RewardLineTriggerClose");
	}
	if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_306, Global_36))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_310, Global_36) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
		{
			return true;
		}
		else if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_311, Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	vector3 vVar5[24];
	vector3 vVar8;

	if (AUDIO::_0x54B187F111D9C6F8(uParam0->f_69, 0))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		iVar0 = func_258(uParam0->f_6, Global_35, 1060437492 /* Float: 0.707f */);
		iVar1 = func_258(uParam0->f_6, Global_35, 1f);
		StringCopy(&cVar5, "PB", 24);
		switch (uParam0->f_301)
		{
			case 1:
			case default:
				StringCopy(&cVar2, "_RELAX", 24);
				break;
			case 0:
				StringCopy(&cVar2, "_STAND", 24);
				break;
			case 2:
				StringCopy(&cVar2, "_WRITE", 24);
				break;
		}
		StringConCat(&cVar5, &cVar2, 24);
		switch (uParam0->f_300)
		{
			case 76:
				StringConCat(&cVar5, "_FL", 24);
				break;
			case 26:
			case 38:
			case 78:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FR", 24);
				}
				else
				{
					StringConCat(&cVar5, "_R", 24);
				}
				break;
			case 105:
				StringConCat(&cVar5, "_R", 24);
				break;
			case 5:
				if (iVar1 == 2)
				{
					StringConCat(&cVar5, "_R", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
			case 115:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FL", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
		}
		if (uParam0->f_301 == 0)
		{
			StringConCat(&cVar5, "_LOOK", 24);
		}
		else
		{
			StringConCat(&cVar5, &cVar2, 24);
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_30[0 /*14*/].f_1, &cVar5);
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_30[0 /*14*/].f_1, &cVar5))
		{
			if (uParam0->f_301 == 2 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
			{
				uParam0->f_12 = PED::_0x4D0D2E3D8BC000EB(uParam0->f_69, "p_pen01x", 1);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[0 /*14*/].f_1, "PEN", uParam0->f_12, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				vVar8 = { func_231(uParam0->f_30[0 /*14*/].f_1, "MONEY", &cVar5) };
				uParam0->f_8 = OBJECT::CREATE_OBJECT(uParam0->f_9, vVar8, true, true, false, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[0 /*14*/].f_1, "MONEY", uParam0->f_8, 0);
				OBJECT::_0xDFA1237F5228263F(uParam0->f_8, Global_35);
			}
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[0 /*14*/].f_1);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_30[0 /*14*/].f_1, &cVar5, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_30[0 /*14*/].f_1, "BASE_BOOL", true, false);
			return true;
		}
	}
	return false;
}

void func_127(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_128(var uParam0)
{
	if (!func_69(uParam0))
	{
		return 0f;
	}
	if (func_259(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_260() - uParam0->f_1);
}

void func_129(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	if (bParam2)
	{
		if (func_39(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_261(uParam0->f_65))
			{
				sVar0 = "BNTY_O_FLCTA";
			}
			else if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_LCTEA";
			}
			else
			{
				sVar0 = "BNTY_O_LCTED";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_CTREA";
			}
			else
			{
				sVar0 = "BNTY_O_CTRED";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), func_264(uParam0->f_300));
			if (bParam2)
			{
				func_265(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_45(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_262(uParam0, bParam2, sVar0, func_264(uParam0->f_300), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, func_264(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_210(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_266(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_266(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_36(&(uParam0->f_330), iParam1);
	}
}

float func_130(var uParam0)
{
	if (!func_69(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_259(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_260() - uParam0->f_1);
}

bool func_131(var uParam0)
{
	return false;
}

bool func_132(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	vector3 vVar7[24];
	vector3 vVar10[24];

	if (uParam0->f_65 == 14)
	{
		return true;
	}
	vVar0 = { func_268(uParam0, uParam0->f_383) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (!func_144(1))
		{
			if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_383++;
				vVar0 = { func_268(uParam0, uParam0->f_383) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
				{
					return true;
				}
			}
		}
	}
	else if (uParam0->f_358 || func_39(uParam0->f_328, 268435456))
	{
		if (func_146(uParam0->f_67))
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_DEAD", 32);
		}
		else
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_ALIVE", 32);
		}
		if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
		{
			return true;
		}
	}
	else
	{
		StringCopy(&cVar7, "JPAY", 24);
		MemCopy(&cVar10, {func_152(uParam0->f_300)}, 1);
		StringConCat(&cVar7, &cVar10, 24);
		if (func_145(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_133(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_215() != -1)
	{
		return;
	}
	if (func_269(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_270())
	{
		iVar1 = 0;
	}
	func_271(iParam0, iVar1);
}

int func_134(var uParam0)
{
	if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false)) || func_272(uParam0))
	{
		if (func_146(uParam0->f_67))
		{
			Global_1392235 = 0;
		}
		else
		{
			Global_1392235 = 1;
		}
		TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", true);
		func_273();
		uParam0->f_304 = func_159(1);
		func_122(uParam0, 11);
		return 1;
	}
	return 0;
}

void func_135(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_274(0, uParam0->f_300, 2, 0);
	func_275(iVar0);
	if (func_101())
	{
		iVar1 = func_276(iVar0);
		func_277(iVar0, iVar1 + 1);
	}
	else
	{
		iVar1 = func_278(iVar0);
		func_279(iVar0, iVar1 + 1);
	}
	func_281(iVar0, func_280());
	Global_1392235.f_4 = 0;
	if (func_39(uParam0->f_329, 512))
	{
		if (func_185(func_282(uParam0->f_65), 1, 0))
		{
			func_283(func_282(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

float func_136(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_137(var uParam0)
{
	if (func_284(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
	{
		if (uParam0->f_102 == 2)
		{
			return true;
		}
		else if (uParam0->f_102 == 4)
		{
			return true;
		}
		else if (uParam0->f_102 == 8)
		{
			return true;
		}
		else if (uParam0->f_102 == 8192)
		{
			if (func_285(uParam0->f_69, &(uParam0->f_74), 1))
			{
				return true;
			}
		}
		else if (uParam0->f_102 == 64)
		{
			return true;
		}
		else if (uParam0->f_102 == 256)
		{
			if (func_65(Global_35, uParam0->f_306, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_138(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_139(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	if (!func_140(iParam0) && bParam1)
	{
		return false;
	}
	return func_287(iParam0, 1);
}

bool func_140(int iParam0)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_141(int iParam0)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_142(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_286(iParam0))
	{
		return;
	}
	if (!func_287(iParam0, 1))
	{
		return;
	}
	if (!func_287(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_140(iParam0)) && func_141(iParam0))
	{
		return;
	}
	func_288(iParam0, 1);
	func_289(iParam0);
	if (func_291(func_290(iParam0)))
	{
		iVar0 = func_292(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_288(iParam0, 16);
	}
	if (func_287(iParam0, 128) && !bParam3)
	{
		func_293(iParam0, 0);
	}
}

void func_143(int iParam0, int iParam1)
{
	func_161(1, iParam0, iParam1);
}

bool func_144(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

bool func_145(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_294(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_146(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
	{
		return false;
	}
	return true;
}

bool func_147(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;

	fVar0 = 0f;
	if (bParam2)
	{
		fVar0 = 4f;
	}
	switch (iParam0)
	{
		case 76:
			if (func_157(Global_35, -275.43f, 802.52f, 118.41f, 0) < (1f + fVar0) || func_157(Global_35, -276.39f, 812.02f, 118.42f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 78:
			if (func_157(Global_35, 2911.362f, 1310.298f, 43.94069f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 26:
			if (!bParam1 && func_157(Global_35, -1806.44f, -350.96f, 163.65f, 0) < (1f + fVar0))
			{
				return true;
			}
			if (func_157(Global_35, -1812.81f, -345.61f, 163.66f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 105:
			if (func_157(Global_35, 1359.11f, -1305.88f, 76.77f, 0) < (1f + fVar0) || func_157(Global_35, 1358.8f, -1298.06f, 76.78f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 5:
			if ((((((func_157(Global_35, 2511.1f, -1311.37f, 47.95f, 0) < (1.5f + fVar0) || func_157(Global_35, 2507.45f, -1317.49f, 47.62f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2496.77f, -1317.49f, 47.81f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2493.1f, -1311.09f, 47.94f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2493.22f, -1306.48f, 47.95f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2511.18f, -1306.25f, 47.95f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2516.28f, -1308.78f, 47.96f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
		case 38:
			if (func_157(Global_35, -756.9f, -1269.2f, 43.03f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			else if (func_157(Global_35, -769.19f, -1269.29f, 42.98f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 115:
			if (!bParam1 && func_157(Global_35, -5527.72f, -2930.482f, -2.2717f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

struct<4> func_148(int iParam0)
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar0, "JPAY", 32);
	MemCopy(&cVar4, {func_152(iParam0)}, 1);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_101())
	{
		StringConCat(&cVar0, "J", 32);
	}
	else
	{
		StringConCat(&cVar0, "A", 32);
	}
	return cVar0;
}

Vector3 func_149(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 76:
			StringCopy(&cVar0, "JRPY_VA_NOT", 24);
			break;
		case 38:
			StringCopy(&cVar0, "JRPY_BW", 24);
			break;
		case 26:
			StringCopy(&cVar0, "JRPY_ST_A", 24);
			break;
		case 78:
			StringCopy(&cVar0, "", 24);
			break;
		case 105:
			StringCopy(&cVar0, "JRPYE_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "", 24);
			break;
		case 115:
			StringCopy(&cVar0, "BHJTW_PAY_LEALY", 24);
			break;
	}
	return cVar0;
}

bool func_150(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_295(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_296(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

bool func_151(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_297(iParam0, &Var0);
}

Vector3 func_152(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 26:
			StringCopy(&cVar0, "_ST", 24);
			break;
		case 76:
			StringCopy(&cVar0, "_VA", 24);
			break;
		case 105:
			StringCopy(&cVar0, "_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "_SD", 24);
			break;
		case 38:
			StringCopy(&cVar0, "_BW", 24);
			break;
		case 115:
			StringCopy(&cVar0, "_TW", 24);
			break;
		case 78:
			StringCopy(&cVar0, "_AN", 24);
			break;
		default:
			StringCopy(&cVar0, "_ST", 24);
			break;
	}
	return cVar0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

bool func_155(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	return func_299(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_157(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_158(int iParam0, bool bParam1)
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

int func_159(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_160()
{
	return func_300(1);
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_162(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_301(vParam0))
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
			if (func_302(vVar2, vParam0, 2f, 1))
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

void func_163()
{
	if (MISC::_0x0D0AE5081F88CFE1(GET_HASH_KEY("REWARD_MONEYCLIP")))
	{
		MISC::_0x154340E87D8CC178(GET_HASH_KEY("REWARD_MONEYCLIP"));
	}
}

bool func_164(int iParam0)
{
	if ((ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 5 || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 4) || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 9)
	{
		if (PED::_GET_CARRIER_AS_HUMAN(iParam0) == Global_35)
		{
			return true;
		}
	}
	return false;
}

void func_165(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
	if (uParam0->f_7 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
	}
	if (uParam0->f_9 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_9);
	}
	if (uParam0->f_11 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_11);
	}
}

void func_166(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_167(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_303(func_44(uParam0->f_300, uParam0->f_65), 3f, 2);
	}
	if (uParam0->f_300 == 26 || uParam0->f_300 == 105)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK07X", bParam1);
	}
	else if (uParam0->f_300 == 38 || uParam0->f_300 == 76)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_WORKBENCHDESK01X_RIGHT", bParam1);
	}
	else if (uParam0->f_300 == 5)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK08X_R", bParam1);
	}
	else if (uParam0->f_300 == 115)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK07X", bParam1);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET13X", bParam1);
	}
}

void func_168(int iParam0)
{
	Global_1396116.f_139 = iParam0;
}

void func_169()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_95[iVar0 /*6*/]), "", 32);
		Global_1395482.f_95[iVar0 /*6*/].f_4 = 2;
		iVar0++;
	}
	Global_1395482.f_94 = 0;
	func_64(Global_1395482.f_1, 512);
}

void func_170()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_80[iVar0 /*4*/]), "", 32);
		iVar0++;
	}
	Global_1395482.f_93 = 0;
}

void func_171(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_260() - fParam1);
	func_304(uParam0, 1);
	func_305(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_172(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_173()
{
	return (Global_1894899 & 1 != 0 && func_33() != -1);
}

float func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_175(Global_35, iParam0, bParam1, bParam2);
}

float func_175(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_176(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
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

bool func_179(int iParam0)
{
	var uVar0;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 3 && !ENTITY::_0x383F64263F946E45(&uVar0, iParam0, 4, Global_35, 0, 1))
	{
		if (!FIRE::IS_ENTITY_ON_FIRE(iParam0) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_180(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_71(iParam0, bParam1, bParam2, bParam3))
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

bool func_181(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_83(iParam0))
	{
		return false;
	}
	if (func_24(iParam0, 2))
	{
		if (iParam0 == 2 && func_306(12))
		{
			func_64(iParam0, 2);
		}
		else
		{
			return true;
		}
		if (iParam0 == 5)
		{
			if (!func_307())
			{
				func_64(iParam0, 2);
			}
			else
			{
				return true;
			}
		}
	}
	else if (iParam0 == 5)
	{
		if (func_307())
		{
			func_40(iParam0, 2);
			return true;
		}
	}
	iVar0 = func_308(iParam0);
	if (func_212(iVar0))
	{
		if (func_309(iVar0))
		{
			return true;
		}
	}
	iVar1 = func_310(iParam0);
	if (func_181(iVar1))
	{
		iVar2 = func_311(iVar1);
		if (func_312(iVar2))
		{
			if (func_313(iVar2))
			{
				return true;
			}
			if (func_313(iVar2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_83(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = iParam0;
	while (iVar0 < 6 || iVar1 > 0)
	{
		if (iVar0 < 6)
		{
			iVar0++;
		}
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		if (!func_182(iVar0))
		{
			iVar2 = iVar0;
		}
		else if (!func_182(iVar1))
		{
			iVar2 = iVar1;
		}
	else
	{
		}
	}
	if (iVar2 == iParam0)
	{
		iVar2 = -1;
	}
	return iVar2;
}

void func_184(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_185(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_186(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_314(iParam0);
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
		if (!func_315(iParam0, 1))
		{
			return false;
		}
	}
	return func_316(iParam0, 0, bParam2) >= iParam1;
}

bool func_186(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_317(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_189(var uParam0, bool bParam1)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_19(uParam0->f_300, &(uParam0->f_306));
	func_318(uParam0->f_300, &(uParam0->f_307));
	func_319(uParam0->f_300, &(uParam0->f_305));
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_306, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_306, 0, 0, 0, -1, -1, 2);
	func_320(uParam0, bParam1);
}

bool func_190()
{
	if ((((!AUDIO::_0xA2CAC9DEF0195E6F(0) && !func_321()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN()) && !func_322())
	{
		return true;
	}
	return false;
}

void func_191(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_456 < 5)
		{
			if (func_323(&(Local_15.f_420), &Global_35, &(Local_15.f_387), Local_15.f_456))
			{
				Local_15.f_498++;
				Local_15.f_456++;
			}
			else
			{
				Local_15.f_456 = 5;
			}
		}
		else
		{
			func_92();
		}
	}
	else if (Local_15.f_458 < 3)
	{
		if (func_323(&(Local_15.f_446), &Global_35, &(Local_15.f_387), Local_15.f_458))
		{
			Local_15.f_498++;
			Local_15.f_458++;
		}
		else
		{
			Local_15.f_458 = 3;
		}
	}
	else
	{
		func_92();
	}
	func_127(&(Local_15.f_393));
	func_21(&(Local_15.f_388), 2);
}

void func_192(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_457 < 5)
		{
			if (func_323(&(Local_15.f_404), &(Local_15.f_387), &Global_35, Local_15.f_457))
			{
				Local_15.f_498++;
				Local_15.f_457++;
			}
			else
			{
				Local_15.f_457 = 5;
			}
		}
	}
	else if (Local_15.f_459 < 3)
	{
		if (func_323(&(Local_15.f_436), &(Local_15.f_387), &Global_35, Local_15.f_459))
		{
			Local_15.f_498++;
			Local_15.f_459++;
		}
		else
		{
			Local_15.f_459 = 3;
		}
	}
	func_68(&(Local_15.f_393));
	func_15(&(Local_15.f_388), 2);
}

bool func_193(float fParam0)
{
	if (func_300(1))
	{
		return true;
	}
	if (func_69(&uLocal_0) && !func_324(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_194(int iParam0)
{
	return func_325(iParam0, 6);
}

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_326(iParam0, 6);
	return iVar0;
}

int func_196(int iParam0)
{
	return func_325(iParam0, 7);
}

int func_197(int iParam0)
{
	int iVar0;

	iVar0 = func_326(iParam0, 7);
	return iVar0;
}

bool func_198(int iParam0)
{
	return (func_325(iParam0, 4) || func_325(iParam0, 5));
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_326(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_326(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

bool func_200(int iParam0)
{
	iParam0 = func_327(iParam0);
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

int func_201(int iParam0)
{
	iParam0 = func_327(iParam0);
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

void func_202(var uParam0)
{
	if (!func_39(uParam0->f_329, 4194304) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		func_36(&(uParam0->f_329), 4194304);
	}
	if (!func_39(uParam0->f_329, 8) && func_146(uParam0->f_67))
	{
		func_82(&(uParam0->f_329), 2);
		func_36(&(uParam0->f_329), 8);
	}
}

void func_203(var uParam0)
{
	int iVar0;

	if (func_39(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_45(uParam0->f_67, 0) || PED::IS_PED_HOGTIED(uParam0->f_67))
	{
		iVar0 = 455691738;
	}
	else
	{
		iVar0 = 953018525;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_68))
	{
		MAP::_0xBD62D98799A3DAF0(uParam0->f_68, iVar0);
	}
	else
	{
		uParam0->f_68 = MAP::BLIP_ADD_FOR_ENTITY(iVar0, uParam0->f_67);
	}
	MAP::_0x97F6F158CC5B5CA2(uParam0->f_67, uParam0->f_68);
	MAP::BLIP_ADD_MODIFIER(uParam0->f_68, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_68, &(uParam0->f_325));
}

bool func_204(int iParam0, int iParam1)
{
	if (func_328(iParam0, iParam1) || func_164(iParam0))
	{
		return true;
	}
	return false;
}

bool func_205(int iParam0)
{
	int iVar0;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 7)
	{
		iVar0 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (func_329(Global_35, iVar0, 0))
		{
			func_330(7);
			func_331();
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_332(iParam0))
	{
		func_330(7);
		func_331();
		return false;
	}
	return true;
}

void func_206(var uParam0)
{
	if (!func_39(uParam0->f_329, 128))
	{
		if (func_328(uParam0->f_67, 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_363))
			{
				AUDIO::TRIGGER_MUSIC_EVENT(uParam0->f_363);
			}
			func_36(&(uParam0->f_329), 128);
		}
	}
}

void func_207(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	char cVar4[32];
	vector3 vVar8[24];
	vector3 vVar11[24];

	if (!func_69(&(uParam0->f_318)))
	{
		func_171(&(uParam0->f_318), 5f);
		uParam0->f_324 = 0;
	}
	else if (func_130(&(uParam0->f_318)) >= 7f && func_144(1))
	{
		func_171(&(uParam0->f_318), 7f);
	}
	if (func_146(uParam0->f_67))
	{
		vVar1 = { func_100(uParam0->f_300) };
	}
	else
	{
		vVar1 = { func_333(uParam0->f_300) };
	}
	if (uParam0->f_300 == 5)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (uParam0->f_324 < iVar0)
	{
		if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vVar1, 45f) || PED::IS_PED_STOPPED(Global_35))
		{
			if ((func_45(uParam0->f_69, 0) && func_150(uParam0->f_69, Global_35, 0, 12f, 0)) && func_65(Global_35, uParam0->f_306, 1, 0))
			{
				if (func_130(&(uParam0->f_318)) >= 15f)
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_69, 0) && !TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, true))
					{
						TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
					}
					if (uParam0->f_358 || func_39(uParam0->f_328, 67108864))
					{
						StringCopy(&cVar4, "BOUNTY_THROW_IN_CELL_AGAIN", 32);
						if (func_151(uParam0->f_69, &cVar4, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								func_129(uParam0, 1024, 1);
							}
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar8, "JR", 24);
						if (func_146(uParam0->f_67))
						{
							StringConCat(&cVar8, "DE", 24);
						}
						else
						{
							StringConCat(&cVar8, "AL", 24);
						}
						MemCopy(&cVar11, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar8, &cVar11, 24);
						StringIntConCat(&cVar8, uParam0->f_324, 24);
						if (func_145(&(uParam0->f_201), cVar8, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								func_129(uParam0, 1024, 1);
							}
						}
					}
				}
			}
		}
		else if (func_130(&(uParam0->f_318)) > 8f)
		{
			func_171(&(uParam0->f_318), 8f);
		}
	}
}

Vector3 func_208(var uParam0)
{
	vector3 vVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_30[1 /*14*/].f_1, true, false))
	{
		vVar0 = { func_231(uParam0->f_30[1 /*14*/].f_1, func_241(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9) };
		return vVar0;
	}
	if (uParam0->f_300 == 115)
	{
		return -5530.09f, -2925.662f, -2.3609f;
	}
	return func_333(uParam0->f_300);
}

float func_209(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_210(var uParam0)
{
	if (uParam0->f_300 == 5)
	{
		return true;
	}
	return false;
}

bool func_211(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_331))
			{
				uParam0->f_331 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@lemoyneraider@bodydrop", 0, "PBL_DROPOFF", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "LINDSEY", uParam0->f_67, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_331);
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_331, true, false))
			{
				if (func_157(Global_35, func_100(uParam0->f_300), 0) < 3f && func_164(uParam0->f_67))
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
					func_242(uParam0, 3);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!func_49(Global_35, 1369124074))
			{
				if (func_157(Global_35, func_100(uParam0->f_300), 0) > 2f)
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1.48f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_331);
					func_242(uParam0, 4);
				}
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_331, false) || func_334(uParam0))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 7, false);
				func_242(uParam0, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_212(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_213(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	return func_335(iParam0, 8);
}

int func_214(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_301(vParam0))
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
		if (func_336(vParam0))
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
	func_337(iVar0, bParam8);
	return iVar0;
}

int func_215()
{
	return Global_1572887.f_12;
}

void func_216(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_338(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_217(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_291(func_290(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_292(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_292(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_292(iParam0));
	return 1;
}

int func_218(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_291(func_290(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_292(iParam0));
	return 1;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_220(int iParam0, int iParam1)
{
	func_217(func_339(iParam0, iParam1));
}

void func_221(int iParam0, int iParam1)
{
	func_222(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_222(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_340(iParam0, 0, 0);
	if (func_341(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_342(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_343(iParam0, 1);
			}
			else
			{
				func_344(iParam0, 1);
			}
		}
		else
		{
			func_345(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_346())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 == 0)
			{
				return 1674105116;
			}
			else if (iParam1 == 1)
			{
				return 1979938193;
			}
			else if (iParam1 == 2)
			{
				return 1879655431;
			}
			else if (iParam1 == 3)
			{
				return -1170253702;
			}
			else if (iParam1 == 4)
			{
				return -864682777;
			}
			else if (iParam1 == 5)
			{
				return -693431983;
			}
			else if (iParam1 == 6)
			{
				return 417663242;
			}
			else if (iParam1 == 7)
			{
				return 1611175760;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 1614494720;
			}
			else if (iParam1 == 1)
			{
				return 349074475;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 1514359658;
			}
			else if (iParam1 == 1)
			{
				return 1821044729;
			}
			break;
		case 76:
			if (iParam1 == 0)
			{
				return 395506985;
			}
			else if (iParam1 == 1)
			{
				return GET_HASH_KEY("DOOR_VAL_JAIL_CELL_01");
			}
			else if (iParam1 == 2)
			{
				return 1988748538;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return -1484165375;
			}
			else if (iParam1 == 1)
			{
				return -473782212;
			}
			else if (iParam1 == 2)
			{
				return -884246706;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return GET_HASH_KEY("DOOR_TUM_02_JAIL_FRONT");
			}
			break;
		case 78:
			if (iParam1 == 0)
			{
				return -2082598623;
			}
			break;
	}
	return 0;
}

bool func_224(int iParam0)
{
	return iParam0 != 0;
}

bool func_225(int iParam0)
{
	func_340(iParam0, 0, 0);
	if (func_341(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

bool func_226(int iParam0)
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

void func_227(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_226(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_347(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_348(iVar0);
	*uParam0 = 0;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

bool func_229(var uParam0)
{
	uParam0->f_69 = func_349(func_138(uParam0->f_300), 1, 0, 0, 1, 1);
	if (func_45(uParam0->f_69, 0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_69) || !ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_69))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_69, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, true);
		PED::_0xBD75500141E4725C(uParam0->f_69, GET_HASH_KEY("LAW_SHERIFF"));
		func_350(&(uParam0->f_74), 1);
		func_351(&(uParam0->f_74), 1);
		func_352(&(uParam0->f_74), 1);
		func_353(&(uParam0->f_74), 1);
		func_354(&(uParam0->f_74), 1);
		if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_69, false, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_69, 146, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_69, func_355(uParam0->f_300), true, false, true, true);
		WEAPON::_HOLSTER_PED_WEAPONS(uParam0->f_69, true, false, false, false);
		TASK::TASK_SWAP_WEAPON(uParam0->f_69, 1, 0, 0, 0);
		func_102(uParam0, uParam0->f_69, func_356(uParam0->f_300));
		func_216(&(uParam0->f_201), uParam0->f_69, func_356(uParam0->f_300), 1);
		func_357(uParam0, uParam0->f_69);
		if (!Global_1935630.f_12)
		{
			if (func_101())
			{
				func_216(&(uParam0->f_201), Global_35, "John", 1);
			}
			else
			{
				func_216(&(uParam0->f_201), Global_35, "Arthur", 1);
			}
		}
		return true;
	}
	return false;
}

void func_230(var uParam0)
{
	if (uParam0->f_27 == 0)
	{
		uParam0->f_27 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_5, uParam0->f_1, 7);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_27))
	{
		uParam0->f_4 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_27));
	}
}

struct<4> func_231(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	struct<4> Var4;

	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam0, sParam1, &Var4, !MISC::IS_STRING_NULL_OR_EMPTY(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

int func_232(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

void func_233(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_358(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_234(var uParam0)
{
	func_167(uParam0, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_359(uParam0);
	}
}

bool func_235(var uParam0)
{
	if ((((((uParam0->f_65 == 11 || uParam0->f_65 == 16) || uParam0->f_65 == 154) || uParam0->f_65 == 13) || uParam0->f_65 == 15) || uParam0->f_65 == 20) || uParam0->f_65 == 19)
	{
		return true;
	}
	return false;
}

bool func_236(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;

	if (func_360(uParam0))
	{
		if (!func_101())
		{
			if (func_151(Global_35, "GREET_SHERIFF", 291934926, uParam0->f_69, 1, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3) + 3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
		else
		{
			iVar3 = 0;
			StringCopy(&cVar0, "HOGTIES_MALE", 24);
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					iVar3 = 2;
					break;
				case 1:
					iVar3 = 3;
					break;
				case 2:
					iVar3 = 4;
					break;
				case 3:
					iVar3 = 7;
					break;
				case 4:
					iVar3 = 8;
					break;
				case 5:
					iVar3 = 13;
					break;
				case 6:
					iVar3 = 15;
					break;
			}
			if (func_151(Global_35, &cVar0, 291934926, uParam0->f_69, 1, 0, iVar3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	else if (!func_144(1))
	{
		if (uParam0->f_382 == 0)
		{
			if (!func_146(uParam0->f_67))
			{
				MemCopy(&cVar0, {uParam0->f_332}, 3);
			}
			else
			{
				MemCopy(&cVar0, {uParam0->f_336}, 3);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			if (func_145(&(uParam0->f_103), cVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_237(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];

	if (func_361(uParam0))
	{
		if (!func_66(Global_35, 0))
		{
			StringCopy(&cVar3, func_362(uParam0->f_300, PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true)), 32);
			if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
			{
				return true;
			}
		}
	}
	else if (!func_39(uParam0->f_329, 512))
	{
		if (!func_144(1))
		{
			if (uParam0->f_382 == 0)
			{
				if (!func_146(uParam0->f_67))
				{
					MemCopy(&vVar0, {uParam0->f_332}, 3);
				}
				else
				{
					MemCopy(&vVar0, {uParam0->f_336}, 3);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
				{
					uParam0->f_382++;
				}
			}
			else
			{
				return true;
			}
		}
	}
	else if (!func_144(1))
	{
		vVar0 = { func_363(uParam0, uParam0->f_382) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_238(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_63 == 8)
	{
		if (func_157(uParam0->f_67, func_100(uParam0->f_300), 1) > 5f || func_210(uParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (func_157(uParam0->f_67, func_97(uParam0->f_300), 1) < 10f)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_239(var uParam0)
{
	if (!func_113(Global_36, func_97(uParam0->f_300), 150f, 1) || !func_95(uParam0))
	{
		return false;
	}
	if (!uParam0->f_70)
	{
		uParam0->f_71 = INTERIOR::GET_INTERIOR_AT_COORDS(func_97(uParam0->f_300));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_71);
		uParam0->f_70 = 1;
	}
	if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_71))
	{
		return false;
	}
	if (uParam0->f_30[*uParam0 /*14*/])
	{
		return true;
	}
	func_364(uParam0);
	func_365(uParam0);
	if (uParam0->f_60 != 1)
	{
		if (func_366(uParam0, *uParam0) || func_367(uParam0, *uParam0))
		{
			return false;
		}
	}
	if (func_368(uParam0, *uParam0))
	{
		*uParam0++;
		if (*uParam0 >= 2)
		{
			if (!uParam0->f_23)
			{
				uParam0->f_23 = 1;
			}
			return true;
		}
	}
	return false;
}

void func_240(int iParam0, int iParam1)
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

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Player";
		case 105:
			return "plr";
		case 78:
			return "Player";
		case 26:
			return "Player";
		case 5:
			return "Player";
		case 38:
			return "Player";
		case 115:
			return "Player";
	}
	return "";
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_61 = iParam1;
}

void func_243(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			if (!bLocal_14)
			{
				if (CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() > 90f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				}
				bLocal_14 = true;
			}
			CAM::_CLAMP_GAMEPLAY_CAM_YAW(-45f, 90f);
			break;
	}
}

void func_244(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_215() != -1)
	{
		return;
	}
	if ((Global_36616 && func_317(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_369(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_370(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_371(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_370(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_278(Global_1347702[iParam0 /*49*/].f_15);
	func_36(&iVar0, iParam1);
	func_279(Global_1347702[iParam0 /*49*/].f_15, iVar0);
}

void func_246(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_278(Global_1347702[iParam0 /*49*/].f_15);
	func_82(&iVar0, iParam1);
	func_279(Global_1347702[iParam0 /*49*/].f_15, iVar0);
}

int func_247(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_309(iParam0))
			{
				return GET_HASH_KEY("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_309(iParam0))
			{
				return GET_HASH_KEY("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_RHODES");
			}
			break;
		case 5:
			return GET_HASH_KEY("LAW_REGION_SAINT_DENIS");
		case 61:
			return GET_HASH_KEY("LAW_REGION_MANICATO");
		case 78:
			return GET_HASH_KEY("LAW_REGION_ANNESBURG");
		case 26:
			return GET_HASH_KEY("LAW_REGION_STRAWBERRY");
		case 38:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_BLACKWATER");
			}
			if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_BLACKWATER");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 92:
			return GET_HASH_KEY("LAW_REGION_VAN_HORN");
		case 65:
			return GET_HASH_KEY("LAW_REGION_CORNWALL");
		case 69:
			return GET_HASH_KEY("LAW_REGION_EMERALD_RANCH");
		case 93:
			return GET_HASH_KEY("LAW_REGION_BRAITHWAITE_MANOR");
		case 95:
			return GET_HASH_KEY("LAW_REGION_CALIGA_HALL");
		case 57:
			return GET_HASH_KEY("LAW_REGION_AGUASDULCES");
		case 3:
			return GET_HASH_KEY("LAW_REGION_LAGRAS");
		case 32:
			return GET_HASH_KEY("LAW_REGION_SISIKA");
		case 82:
			return GET_HASH_KEY("LAW_REGION_BUTCHER_CREEK");
		case 35:
			return GET_HASH_KEY("LAW_REGION_FORT_WALLACE");
		case 56:
			return GET_HASH_KEY("LAW_REGION_WAPITI");
		case 126:
			return GET_HASH_KEY("LAW_REGION_MACFARLANES_RANCH");
		case 120:
			return GET_HASH_KEY("LAW_REGION_ARMADILLO");
		case 124:
			return GET_HASH_KEY("LAW_REGION_RIDGEWOOD_FARM");
		case 115:
			return GET_HASH_KEY("LAW_REGION_TUMBLEWEED");
		case 127:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_THIEVES_LANDING");
			}
			if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_299(Global_1835011[59 /*74*/].f_1, 1))
			{
				return GET_HASH_KEY("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_299(Global_1347702[9 /*49*/].f_15, 1))
			{
				return GET_HASH_KEY("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_GREAT_PLAINS");
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_373())
			{
				return GET_HASH_KEY("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_MANZANITA_POST");
			}
			if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_MANZANITA_POST");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_MANZANITA_POST_MAINGAME");
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_374(iParam0);
		if (iVar0 != -1)
		{
			return func_375(iVar0, bParam1);
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 == 76)
	{
		return 0;
	}
	else if (iParam0 == 38)
	{
		return 0;
	}
	return -1;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_219(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				func_376(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_377(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_376(iVar3, iParam0, iParam1, 0);
}

void func_250(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			Global_40.f_9829[iVar0 /*4*/].f_3 = uParam2;
		}
		iVar0++;
	}
}

bool func_251(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_378(*uParam0, GET_HASH_KEY("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			func_379(iVar0, 128);
		}
		iVar0++;
	}
}

bool func_253(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_254(var uParam0, int iParam1)
{
	func_117(&(uParam0->f_66));
	if (iParam1 == 3)
	{
		if (!func_39(uParam0->f_329, 524288))
		{
			uParam0->f_66 = MAP::BLIP_ADD_FOR_COORDS(408396114, func_97(uParam0->f_300));
			MAP::BLIP_ADD_MODIFIER(uParam0->f_66, 825788762);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_JAIL");
		}
	}
	else if (iParam1 == 7)
	{
		uParam0->f_66 = MAP::BLIP_ADD_FOR_COORDS(408396114, func_208(uParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_CELL");
	}
	else if (iParam1 == 8)
	{
		uParam0->f_66 = MAP::BLIP_ADD_FOR_COORDS(408396114, func_100(uParam0->f_300));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_DUMP");
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_66, 231194138);
	func_330(7);
	func_331();
	if (!func_39(uParam0->f_329, 1))
	{
		func_36(&(uParam0->f_329), 1);
		uParam0->f_368 = { Global_36 };
	}
}

void func_255(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_39(uParam0->f_329, 262144))
	{
		return;
	}
	iVar0 = PED::_GET_CARRIER_AS_MOUNT(uParam0->f_67);
	iVar1 = func_201(7);
	if (iVar1 == iVar0)
	{
		func_380(7);
		func_331();
	}
	else
	{
		uParam0->f_66 = MAP::BLIP_ADD_FOR_ENTITY(408396114, iVar0);
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_66, 231194138);
}

int func_256(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = MAP::BLIP_ADD_FOR_COORDS(iParam0, vParam1);
	if (bParam4)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

int func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam0, iParam1);
	if (bParam2)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

int func_258(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_381(iParam0, vVar0, fParam2);
}

bool func_259(var uParam0)
{
	return func_172(*uParam0, 2);
}

float func_260()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_261(int iParam0)
{
	if (iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_262(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4)
{
	char* sVar0;

	if (bParam1)
	{
		if (func_69(&(uParam0->f_364)))
		{
			func_127(&(uParam0->f_364));
		}
	}
	else
	{
		func_68(&(uParam0->f_364));
	}
	uParam0->f_367 = bParam1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_382(sParam2, sParam3, sParam4);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(4, sParam2, sParam3, sParam4, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_385(sParam2, sParam3);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(3, sParam2, sParam3, 0, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
	else
	{
		func_386(sParam2);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(0, sParam2, 0, 0, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
}

var func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_264(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return "ANN";
		case 5:
			return "NBX";
		case 105:
			return "RHO";
		case 26:
			return "STR";
		case 76:
			return "VAL";
		case 38:
			return "BLK";
		case 115:
			return "TBL";
	}
	return "";
}

void func_265(char* sParam0, var uParam1)
{
	func_263(MISC::VAR_STRING(42, sParam0, &(uParam1->f_325), func_264(uParam1->f_300)), 7500, 0, 0, 0, 1);
}

bool func_266(var uParam0)
{
	if (uParam0->f_300 == 5 || uParam0->f_300 == 38)
	{
		return true;
	}
	return false;
}

var func_267(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_263(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_383(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_263(sVar0, iParam1, 0, 0, 1, 1);
}

Vector3 func_268(var uParam0, int iParam1)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 154:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT12_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT12_RWD_A", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BRA_REWARD", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BRA_REWARD_", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_REWARD_A", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_PUTCAGEJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_REWARD_A", 24);
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_PAY_S1", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BDUL_PAY_J1", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A1", 24);
				}
			}
			else if (iParam1 == 2)
			{
				StringCopy(&cVar0, "BDUL_PAY_S2", 24);
			}
			else if (iParam1 == 3)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BDUL_PAY_J2", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A2", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_RWD", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_A", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_A", 24);
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_RWD_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_RWD_ALVE", 24);
				}
			}
			break;
	}
	return cVar0;
}

bool func_269(var uParam0)
{
	if (-1829635046 == func_388(81053684))
	{
		if (func_389(uParam0))
		{
			return true;
		}
	}
	else if (func_390(-525676072, uParam0))
	{
		if (func_389(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_270()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_215() != -1)
	{
		return;
	}
	iVar0 = func_391();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_392(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_392(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_393())
		{
			func_394(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_395())
		{
			func_394(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_396())
		{
			func_394(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_397())
	{
		func_394(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_399(func_398(GET_HASH_KEY("FAME")), iVar1);
	iVar10 = func_391();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

bool func_272(var uParam0)
{
	float fVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[0 /*14*/].f_1, false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_30[0 /*14*/].f_1, "PB_REWARD_R"))
		{
			fVar0 = 6.8f;
		}
		else
		{
			fVar0 = 5.7f;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[0 /*14*/].f_1) > fVar0)
		{
			return true;
		}
	}
	return false;
}

void func_273()
{
	struct<6> Var0;

	MISC::_0x49F3241C28EBBFBC(0);
	Var0 = GET_HASH_KEY("CURRENCY_CASH");
	Var0.f_3 = 6;
	if (Global_1392235)
	{
		Var0.f_4 = Global_40.f_9074.f_3;
		Var0.f_5 = Global_40.f_9074.f_3;
	}
	else
	{
		Var0.f_4 = Global_40.f_9074.f_4;
		Var0.f_5 = Global_40.f_9074.f_4;
	}
	Var0.f_1 = 1f;
	MISC::_0x183672FE838A661B(&Var0);
	MISC::_0x38C0C9CAE1544500(GET_HASH_KEY("REWARD_MONEYCLIP"));
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_400())
	{
		iVar2 = func_400();
	}
	iVar5 = func_401(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_402(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_402(iVar6) == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_402(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_402(iVar6) == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_275(int iParam0)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_406(iParam0, (func_405(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

int func_276(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_407(iParam0);
}

void func_277(int iParam0, int iParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_408(iParam0, iParam1);
}

int func_278(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_409(iParam0);
}

void func_279(int iParam0, int iParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_410(iParam0, iParam1);
}

var func_280()
{
	return Global_1899515;
}

void func_281(int iParam0, var uParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_411(iParam0, uParam1);
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return GET_HASH_KEY("DOCUMENT_POSTER_SB_DUEL");
		case 13:
			return -120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */;
		case 12:
			return -1129500286 /* GXTEntry: "Bounty Poster - Lindsey Wofford" */;
		case 14:
			return -1490222567 /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */;
		case 17:
			return GET_HASH_KEY("DOCUMENT_POSTER_SKINNER_BROS");
		case 18:
			return GET_HASH_KEY("DOCUMENT_POSTER_SKINNER_SEARCH");
		case 15:
			return GET_HASH_KEY("DOCUMENT_POSTER_SHACK_ESCAPE");
		case 16:
			return GET_HASH_KEY("DOCUMENT_POSTER_SD_SALOON");
		case 19:
			return GET_HASH_KEY("DOCUMENT_POSTER_BANDITO_SHACK");
		case 20:
			return GET_HASH_KEY("DOCUMENT_POSTER_BANDITO_MINE");
		case 155:
			return 1472661824 /* GXTEntry: "Bounty Poster - Herman Zizendorf" */;
		case 153:
			return -1980065901 /* GXTEntry: "Bounty Poster - Bart Cavanaugh" */;
		case 154:
			return 1385735108 /* GXTEntry: "Bounty Poster - Camille de Millemont" */;
		default:
			break;
	}
	return GET_HASH_KEY("DOCUMENT_TEST_BOUNTY_POSTER");
}

int func_283(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_412(iParam0, 1);
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
			func_413(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_185(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_414(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_316(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_316(iParam0, 0, 0) - iParam1) < 0)
		{
			func_283(iParam0, func_316(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_314(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_415(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_416(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_417(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_413(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_418(iParam0, iParam1);
	return 1;
}

bool func_284(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_419(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_420(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_422(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_423(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_424(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_71(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_425(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_426(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_427(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_428(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_428(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_429(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_430(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_431(uParam2, 4000))
				{
					if ((func_432(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_433(uParam2, iParam0)) && func_434(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_432(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_433(uParam2, iParam0)) && func_434(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_435(iParam0, Global_1935630.f_41))
							{
								func_436();
								*uParam3 = 2;
								func_421(iParam0, uParam2, *uParam3);
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
						if (func_435(iParam0, Global_1935630.f_41))
						{
							func_436();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_437(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_438() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_436();
						*uParam3 = 2;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_439())
					{
						if (func_435(iParam0, Global_1935630.f_42))
						{
							func_436();
							*uParam3 = 2;
							func_421(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_440(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_441(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_442(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_443(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_444(uParam2, 4000))
				{
					if (func_445(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_421(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_446(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_421(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_447(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_421(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_285(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_448(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_449(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_449(uParam1, iVar1))
				{
					if (func_157(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_286(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_287(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

void func_288(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_289(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = func_450(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_290(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_291(int iParam0)
{
	return iParam0 != 0;
}

int func_292(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_293(int iParam0, bool bParam1)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_287(iParam0, 2))
	{
		return 0;
	}
	if (func_290(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return 1;
	}
	if (func_287(iParam0, 1) && !bParam1)
	{
		func_451(iParam0, 128);
		return 1;
	}
	func_288(iParam0, 129);
	func_289(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_292(iParam0));
	func_452(iParam0, 0);
	return 1;
}

void func_294(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_295(int iParam0, int iParam1, float fParam2)
{
	return func_453(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_296(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_297(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_299(int iParam0, bool bParam1)
{
	switch (func_454(iParam0))
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

bool func_300(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_301(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_302(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_303(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_304(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_306(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_299(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_307()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_306(16) && !func_306(21))
	{
		return true;
	}
	return false;
}

int func_308(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 76;
		case 2:
			return 26;
		case 5:
			return 105;
		case 4:
			return 78;
		case 6:
			return 5;
		case 1:
			return 38;
		case 0:
			return 115;
		default:
			break;
	}
	return -1;
}

bool func_309(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	return func_335(iParam0, 33554432);
}

int func_310(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 9;
		case 2:
			return 1;
		case 6:
			return 0;
		case 4:
			return 10;
		case 1:
			return 4;
		case 5:
			return 11;
		case 0:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_313(int iParam0)
{
	if (!func_312(iParam0))
	{
		return false;
	}
	if (func_455(iParam0) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(5))
	{
		return true;
	}
	return false;
}

int func_314(int iParam0)
{
	vector3 vVar0;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_186(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_412(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_456("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_457(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_458(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_459(iVar1);
				return true;
			}
			iVar3++;
		}
		func_459(iVar1);
	}
	return false;
}

int func_316(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_412(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_460(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_461(bParam2), iParam0, 0);
	return iVar2;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case GET_HASH_KEY("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case GET_HASH_KEY("HONOR_EVENT_SCARE"):
			return 32;
		case GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case GET_HASH_KEY("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case GET_HASH_KEY("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case GET_HASH_KEY("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case GET_HASH_KEY("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case GET_HASH_KEY("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case GET_HASH_KEY("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case GET_HASH_KEY("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case GET_HASH_KEY("HONOR_EVENT_THEFT"):
			return 131072;
		case GET_HASH_KEY("HONOR_EVENT_INTERVENED"):
			return 262144;
		case GET_HASH_KEY("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case GET_HASH_KEY("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case GET_HASH_KEY("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case GET_HASH_KEY("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

void func_318(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SD Dialogue Volume");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2506.862f, -1308.892f, 48.50731f, 0f, 0f, 0f, 8f, 16.5f, 3f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2499.045f, -1308.865f, 48.91688f, 0f, 0f, 0f, 10f, 2f, 3f);
			break;
		default:
			break;
	}
}

void func_319(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
		default:
			break;
	}
}

void func_320(var uParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;

	func_462(uParam0);
	switch (uParam0->f_300)
	{
		case 76:
			vVar0 = { -272.0415f, 808.1991f, 118.3685f };
			vVar3 = { 0f, 0f, -170.5f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			uParam0->f_7 = GET_HASH_KEY("P_WORKBENCHDESK01X");
			uParam0->f_14 = GET_HASH_KEY("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -273.2888f, 808.1285f, 119.3935f };
			uParam0->f_1 = { -277.49f, 804.13f, 118.38f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitrelax_val";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@stand_val";
					sVar8 = "PB_STAND_FL_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitwriting_val";
					sVar8 = "PB_WRITE_FL_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_val";
			sVar9 = "PB_DROPOFF";
			break;
		case 105:
			vVar0 = { 1357.334f, -1302.453f, 76.75331f };
			vVar3 = { 0f, 0f, 70.00005f };
			uParam0->f_14 = GET_HASH_KEY("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 1357.897f, -1301.337f, 77.77831f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			uParam0->f_7 = GET_HASH_KEY("P_DESK07X");
			uParam0->f_1 = { 1361.26f, -1303.45f, 77.26f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitrelax_rhodes";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@stand_rhodes";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitwriting_rhodes";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_rhodes";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 78:
			vVar0 = { 2902.943f, 1310.878f, 43.9443f };
			vVar3 = { 0f, 0f, 69.26f };
			uParam0->f_14 = GET_HASH_KEY("ANN_JAIL_CELL_DOOR_01");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 2903.49f, 1312.001f, 44.978f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			uParam0->f_7 = GET_HASH_KEY("P_BW_DESK01X");
			uParam0->f_1 = { 2907.75f, 1313.686f, 44.56693f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitrelax_Ann";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@stand_Ann";
					sVar8 = "PB_BASE";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitwriting_Ann";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_ans";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 26:
			vVar0 = { -1811.985f, -351.8662f, 160.4395f };
			vVar3 = { 0f, 0f, -25.00003f };
			uParam0->f_1 = { -1807.28f, -347.87f, 163.65f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			uParam0->f_7 = GET_HASH_KEY("P_DESK07X");
			uParam0->f_14 = GET_HASH_KEY("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -1810.923f, -352.5239f, 161.4644f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitrelax_strawberry";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@stand_strawberry";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitwriting_strawberry";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_strawberry";
			sVar9 = "PB_DROPOFF";
			break;
		case 5:
			vVar0 = { 2502.43f, -1307.799f, 47.95231f };
			vVar3 = { 0f, 0f, 0f };
			uParam0->f_1 = { 2508.56f, -1309.07f, 48.41f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			uParam0->f_7 = GET_HASH_KEY("P_DESK07X");
			uParam0->f_14 = GET_HASH_KEY("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 2503.67f, -1307.946f, 48.97729f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitrelax_std";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@stand_std";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitwriting_std";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_std";
			sVar9 = "PB_DROPOFF";
			break;
		case 38:
			vVar0 = { -763.5278f, -1262.461f, 42.90836f };
			vVar3 = { 0f, 0f, -89.99999f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			if (uParam0->f_65 == 18)
			{
				uParam0->f_7 = GET_HASH_KEY("P_DESK14X");
				uParam0->f_1 = { -761.53f, -1271.73f, 43.77f };
				sVar6 = "script@proc@bountyhunting@skinnersearch@sitrelax";
				sVar8 = "PB_RELAX_R_RELAX";
			}
			else
			{
				uParam0->f_7 = GET_HASH_KEY("P_WORKBENCHDESK01X");
				uParam0->f_1 = { -761.69f, -1266.73f, 43.05f };
				switch (uParam0->f_301)
				{
					case 1:
					case default:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitrelax_bw";
						sVar8 = "PB_RELAX_R_RELAX";
						break;
					case 0:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@stand_bw";
						sVar8 = "PB_STAND_R_LOOK";
						break;
					case 2:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitwriting_bw";
						sVar8 = "PB_WRITE_R_WRITE";
						break;
				}
			}
			uParam0->f_14 = GET_HASH_KEY("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -763.6382f, -1263.701f, 44.04934f };
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_blackwater";
			sVar9 = "PB_DROPOFF";
			break;
		case 115:
			vVar0 = { -5529.901f, -2925.066f, -2.3753f };
			vVar3 = { 0f, 0f, 295f };
			uParam0->f_9 = GET_HASH_KEY("S_INV_MONEYCLIP01X");
			uParam0->f_7 = GET_HASH_KEY("P_DESK07X");
			uParam0->f_1 = { -5530.877f, -2930.6f, -2.2877f };
			uParam0->f_14 = GET_HASH_KEY("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = GET_HASH_KEY("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -5529.466f, -2926.232f, -1.3503f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitrelax_tweed";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@stand_tweed";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitwriting_tweed";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_tumbleweed";
			sVar9 = "PB_DROPOFF";
			break;
	}
	if (uParam0->f_301 == 2)
	{
		uParam0->f_11 = GET_HASH_KEY("P_JOURNAL_OPEN01X");
	}
	uParam0->f_5 = func_463(uParam0->f_300);
	uParam0->f_30[0 /*14*/] = 0;
	uParam0->f_30[0 /*14*/].f_2 = { vVar0 };
	uParam0->f_30[0 /*14*/].f_5 = { vVar3 };
	uParam0->f_30[0 /*14*/].f_8 = sVar6;
	uParam0->f_30[0 /*14*/].f_9 = sVar8;
	uParam0->f_30[0 /*14*/].f_10 = 1;
	uParam0->f_30[0 /*14*/].f_11 = 0;
	uParam0->f_30[0 /*14*/].f_12 = 0;
	uParam0->f_30[1 /*14*/] = 0;
	uParam0->f_30[1 /*14*/].f_2 = { vVar0 };
	uParam0->f_30[1 /*14*/].f_5 = { vVar3 };
	uParam0->f_30[1 /*14*/].f_8 = sVar7;
	uParam0->f_30[1 /*14*/].f_9 = sVar9;
	uParam0->f_30[1 /*14*/].f_10 = 0;
	uParam0->f_30[1 /*14*/].f_11 = 0;
	uParam0->f_30[1 /*14*/].f_12 = 1;
}

bool func_321()
{
	return func_464(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_322()
{
	if (func_465())
	{
		return true;
	}
	return false;
}

bool func_323(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 > -1 && iParam3 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iParam3 /*3*/]))
		{
			func_14(*uParam1, *uParam2, uParam0[iParam3 /*3*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			return true;
		}
	}
	return false;
}

bool func_324(var uParam0, float fParam1)
{
	if (func_67(uParam0, fParam1))
	{
		func_127(uParam0);
		return true;
	}
	return false;
}

int func_325(int iParam0, int iParam1)
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

int func_326(int iParam0, int iParam1)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_327(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_328(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 7 || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 8)
	{
		iVar0 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (func_45(iVar0, 0))
		{
			PED::_0x2EB75FB86C41F026(iVar0, 3, 0);
			PED::_0x2EB75FB86C41F026(iVar0, 1, 0);
		}
		if (iParam1 == 0)
		{
			return true;
		}
		if (func_45(iVar0, 0))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar1 = PED::GET_MOUNT(Global_35);
				if (iVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_329(int iParam0, int iParam1, bool bParam2)
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

void func_330(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_466(iParam0, 32);
	func_331();
}

void func_331()
{
	if (func_200(0))
	{
		func_467(0);
	}
	if (func_200(1))
	{
		func_467(1);
	}
	if (func_200(5))
	{
		func_467(5);
	}
	if (func_200(6))
	{
		func_468(6);
	}
}

bool func_332(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 7 || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 8)
	{
		iVar1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			iVar0 = TASK::_0xED1F514AF4732258(Global_35);
			if (iVar0 == iVar1)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_333(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2903.174f, 1311.317f, 43.9893f;
		case 5:
			return 2503.365f, -1308.754f, 47.9537f;
		case 105:
			return 1358.246f, -1301.761f, 76.7606f;
		case 26:
			return -1811.682f, -353.0481f, 160.4039f;
		case 76:
			return -273.1385f, 809.027f, 118.38f;
		case 38:
			return -764.4813f, -1263.396f, 42.8484f;
		case 115:
			return -5529.103f, -2926.849f, -2.2884f;
	}
	return 0f, 0f, 0f;
}

bool func_334(var uParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, GET_HASH_KEY("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, GET_HASH_KEY("INPUT_MOVE_UD"));
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_331, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_331) > 3f)
	{
		if ((fVar0 > 0.1f || fVar0 < -0.1f) || (fVar1 > 0.1f || fVar1 < -0.1f))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35);
			return true;
		}
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_336(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_337(int iParam0, bool bParam1)
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

bool func_338(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_339(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_340(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_341(int iParam0)
{
	if (func_224(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_342(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_343(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_344(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_346()
{
	return true;
}

int func_347(var uParam0)
{
	return uParam0;
}

void func_348(int iParam0)
{
	if (!func_469(iParam0))
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

int func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_470(iParam0, 1))
	{
		return 0;
	}
	if (func_291(func_290(iParam0)))
	{
		iVar1 = func_292(iParam0);
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
	if ((bParam4 && !func_140(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_451(iParam0, 1);
	func_471(iParam0);
	if (bParam3)
	{
		func_451(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_350(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 16);
	}
	else
	{
		func_21(uParam0, 67108864);
		func_21(uParam0, 16);
	}
}

void func_351(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 32);
	}
	else
	{
		func_21(uParam0, 32);
	}
}

void func_352(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 8);
	}
	else
	{
		func_15(&(uParam0->f_1), 8);
	}
}

void func_353(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 2);
	}
	else
	{
		func_15(&(uParam0->f_1), 2);
	}
}

void func_354(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 4);
	}
	else
	{
		func_15(&(uParam0->f_1), 4);
	}
}

Vector3 func_355(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2906.88f, 1313.98f, 44.32f;
		case 5:
			return 2510.23f, -1308.89f, 47.95f;
		case 105:
			return 1362.44f, -1301.61f, 76.76f;
		case 26:
			return -1808.22f, -347.41f, 163.65f;
		case 76:
			return -278.31f, 805.26f, 118.37f;
		case 38:
			return -763.94f, -1270.71f, 43.14f;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

char* func_356(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 78:
			sVar0 = "ASB_Sheriff";
			break;
		case 5:
			sVar0 = "SD_PoliceChief";
			break;
		case 105:
			sVar0 = "RHD_sheriff";
			break;
		case 26:
			sVar0 = "STR_Sheriff";
			break;
		case 76:
			sVar0 = "VAL_Sheriff";
			break;
		case 38:
			sVar0 = "BLW_Police_Chief";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "VAL_Sheriff";
			break;
	}
	return sVar0;
}

void func_357(var uParam0, int iParam1)
{
	if (!func_472(iParam1, 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam1, func_473(uParam0->f_300));
	}
}

void func_358(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_474(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_475(iParam0))
	{
		if (func_476(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_39(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_39(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_39(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_39(iParam5, 129))
	{
		if (func_39(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_39(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_39(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_475(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_39(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_39(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_359(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	iVar0 = func_258(uParam0->f_69, Global_35, 0.7f);
	if (uParam0->f_65 == 18)
	{
		if (iVar0 == 0 || iVar0 == 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_F_SHRFF";
				sVar2 = "RTN_DEAD_F_SHRFF";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_F_SHRFF";
				sVar2 = "RTN_ALIVE_F_SHRFF";
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_B_SHRFF";
			sVar2 = "RTN_DEAD_B_SHRFF";
		}
		else
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_B_SHRFF";
			sVar2 = "RTN_ALIVE_B_SHRFF";
		}
		TASK::_0x79197F7D2BB5E73A(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else if (uParam0->f_65 == 12)
	{
		if (iVar0 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_DEAD_DEPUTY";
				sVar2 = "ENTER_FRONT_DEAD_DEPUTY";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_ALIVE_DEPUTY";
				sVar2 = "ENTER_FRONT_ALIVE_DEPUTY";
			}
		}
		else
		{
			iVar0 = func_258(uParam0->f_69, Global_35, 1f);
			if (iVar0 == 3)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_DEAD_DEPUTY";
					sVar2 = "ENTER_LEFT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_ALIVE_DEPUTY";
					sVar2 = "ENTER_LEFT_ALIVE_DEPUTY";
				}
			}
			else if (iVar0 == 2)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_DEAD_DEPUTY";
					sVar2 = "ENTER_RIGHT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_ALIVE_DEPUTY";
					sVar2 = "ENTER_RIGHT_ALIVE_DEPUTY";
				}
			}
		}
		TASK::_0x79197F7D2BB5E73A(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else
	{
		TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
	}
}

bool func_360(var uParam0)
{
	if (uParam0->f_359)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true))
	{
		return func_39(uParam0->f_328, 33554432);
	}
	return func_39(uParam0->f_328, 16777216);
}

bool func_361(var uParam0)
{
	if (uParam0->f_358)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true))
	{
		return func_39(uParam0->f_328, -2147483648);
	}
	return func_39(uParam0->f_328, 1073741824 /* Float: 2f */);
}

char* func_362(int iParam0, bool bParam1)
{
	if (iParam0 == 78 && !bParam1)
	{
		return "WHOA";
	}
	return "GREET_PLAYER_CAPTURED_BOUNTY";
}

Vector3 func_363(var uParam0, int iParam1)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_LAWGREET", 24);
				cVar0 = { func_387(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BDUL_LAWGREETSJ", 24);
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_GREET_A", 24);
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_477(uParam0->f_65, 16))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_A", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_A", 24);
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BRA_DELIVER_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_477(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_DEL_S_WK", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_S", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (func_477(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_PLYR_KILL_", 24);
					cVar0 = { func_387(cVar0) };
				}
				else if (func_39(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_", 24);
					cVar0 = { func_387(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "BRA_PLR_ATKN_", 24);
					cVar0 = { func_387(cVar0) };
				}
			}
			else if (iParam1 == 3)
			{
				if (func_39(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_JN", 24);
				}
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBT12_GREET_DJ", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT12_GREET_D", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBT12_GRT_AJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT12_GREET_DS", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GRT_AS", 24);
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				if (func_477(uParam0->f_65, 32))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBT14_GREET_AJ1", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT14_GREET_A", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBT14_GREET_J12", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_A2", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_GREET_AS", 24);
			}
			else if (iParam1 == 2)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "RBT14_GREET_AJ2", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_AA", 24);
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBCON_IG3_P1_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBCON_IG3_P1", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBCON_IG2_P1_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBCON_IG2_P1", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_ALV", 24);
				cVar0 = { func_387(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "NBX_SDS_ALVR", 24);
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_IG3_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_IG3_ALIVE", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_RTRNAWKJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (!func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_RTNAWAKE", 24);
				}
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT22_IG7_B", 24);
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT23_BDM_D", 24);
					cVar0 = { func_387(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "RBT23_BDM_A", 24);
					cVar0 = { func_387(cVar0) };
				}
			}
			break;
	}
	return cVar0;
}

void func_364(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			func_230(uParam0);
		}
	}
	if (uParam0->f_7 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
		{
			if (uParam0->f_26 == 0)
			{
				uParam0->f_26 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_7, uParam0->f_1, 7);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_26))
			{
				uParam0->f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_26));
			}
		}
	}
	if (uParam0->f_11 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			uParam0->f_10 = OBJECT::CREATE_OBJECT(uParam0->f_11, uParam0->f_1, true, true, false, false, true);
		}
	}
}

void func_365(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		if (uParam0->f_29 == 0)
		{
			uParam0->f_29 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_14, uParam0->f_15, 7);
		}
		else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_29))
		{
			uParam0->f_13 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_29));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		if (uParam0->f_28 == 0)
		{
			uParam0->f_28 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_19, uParam0->f_20, 7);
		}
		else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_28))
		{
			uParam0->f_18 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_28));
		}
	}
}

int func_366(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
		{
			return 1;
		}
		if (uParam0->f_5 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_4))
			{
				return 1;
			}
		}
		if (uParam0->f_7 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_6))
			{
				return 1;
			}
		}
		if (uParam0->f_11 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_10))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_367(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

bool func_368(var uParam0, int iParam1)
{
	if ((uParam0->f_30[iParam1 /*14*/].f_11 || uParam0->f_30[iParam1 /*14*/].f_12) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		return false;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[iParam1 /*14*/].f_1))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_30[iParam1 /*14*/].f_1, true, false))
		{
			uParam0->f_30[iParam1 /*14*/] = 1;
			return true;
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_30[iParam1 /*14*/].f_9))
		{
			uParam0->f_30[iParam1 /*14*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_8, uParam0->f_30[iParam1 /*14*/].f_13, uParam0->f_30[iParam1 /*14*/].f_9, false, true);
		}
		else
		{
			uParam0->f_30[iParam1 /*14*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_8, uParam0->f_30[iParam1 /*14*/].f_13, 0, false, true);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[iParam1 /*14*/].f_1))
		{
			func_478(uParam0, iParam1);
			func_479(uParam0, iParam1);
			func_480(uParam0, iParam1);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_1);
		}
	}
	return false;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_370(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_481();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_482(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_372(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_101())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != GET_HASH_KEY("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_392(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_481();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_483(iVar1);
		func_485(func_484(), 0, 4000);
		func_486(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_487(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_399(func_398(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_369(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_488(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_399(func_398(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_369(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_488(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_398(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_490(10, 1);
	}
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_372(int iParam0)
{
	if (!func_491(iParam0))
	{
		return false;
	}
	return func_492(iParam0);
}

int func_373()
{
	return Global_40.f_4283.f_1;
}

int func_374(int iParam0)
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
	else if (iParam0 <= 115)
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

int func_375(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("LAW_REGION_BAYOU_NWA");
		case 1:
			return GET_HASH_KEY("LAW_REGION_BIG_VALLEY");
		case 2:
			return GET_HASH_KEY("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return GET_HASH_KEY("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_GREAT_PLAINS");
			}
			if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return GET_HASH_KEY("LAW_REGION_GRIZZLIES");
		case 6:
			return GET_HASH_KEY("LAW_REGION_GRIZZLIES");
		case 7:
			return GET_HASH_KEY("LAW_REGION_GRIZZLIES");
		case 8:
			return GET_HASH_KEY("LAW_REGION_GUAMA");
		case 9:
			return GET_HASH_KEY("LAW_REGION_HEARTLANDS");
		case 10:
			return GET_HASH_KEY("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return GET_HASH_KEY("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_TALL_TREES");
			}
			if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_TALL_TREES");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_372(45))
			{
				return GET_HASH_KEY("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	Global_40.f_9829[iParam0 /*4*/].f_1 = iParam1;
	Global_40.f_9829[iParam0 /*4*/] = iParam2;
	Global_40.f_9829[iParam0 /*4*/].f_2 = 0;
	Global_40.f_9829[iParam0 /*4*/].f_3 = iParam3;
}

void func_377(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_219(iParam1);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (iVar3 >= 0)
			{
				func_376(iVar3, Global_40.f_9829[iVar0 /*4*/].f_1, iParam1, Global_40.f_9829[iVar0 /*4*/].f_3);
			}
			iVar3 = iVar0;
			iVar2++;
			if (iVar2 == iVar1)
			{
				func_376(iVar0, iParam0, iParam1, 0);
				return;
			}
		}
		iVar0++;
	}
}

bool func_378(int iParam0, int iParam1, bool bParam2)
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

void func_379(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_15(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

void func_380(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_493(iParam0, 32);
	func_331();
}

int func_381(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_494(vVar3, vVar6);
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
	if (func_495(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_382(char* sParam0, char* sParam1, char* sParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(42, sParam0, sParam1, sParam2));
}

char* func_383(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_496(sParam1));
}

void func_384(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_498(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_498(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_385(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam1))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(10, sParam0, sParam1));
}

void func_386(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(2, sParam0));
}

Vector3 func_387(char[12] cParam0)
{
	if (func_101())
	{
		StringConCat(&cParam0, "J", 24);
	}
	else
	{
		StringConCat(&cParam0, "A", 24);
	}
	return cParam0;
}

int func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_500(func_499(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_389(var uParam0)
{
	if (func_390(81053684, uParam0))
	{
		return true;
	}
	if (func_390(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_500(func_499(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_501(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

var func_391()
{
	if (func_215() != -1)
	{
		return 0;
	}
	return func_502(GET_HASH_KEY("FAME"));
}

int func_392(int iParam0, int iParam1, int iParam2)
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

bool func_393()
{
	return Global_1347398.f_1 == 0;
}

void func_394(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_395()
{
	return Global_1347398.f_1 == 1000;
}

bool func_396()
{
	return Global_1347398.f_1 == 2000;
}

bool func_397()
{
	return Global_1347398.f_1 == 3000;
}

struct<2> func_398(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_399(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_400()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_402(int iParam0)
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

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_503(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_400())
	{
		return -1;
	}
	iVar0 = func_401(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_504(iVar1, 0);
	func_406(iVar1, 0);
	func_410(iVar1, 0);
	func_408(iVar1, 0);
	func_505(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_506(iVar1, iParam4);
	}
	return iVar1;
}

bool func_404(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_405(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

void func_406(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

int func_407(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

void func_408(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

int func_409(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_410(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_411(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = uParam1;
}

int func_412(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_187(iParam0, 1399091007))
	{
		func_507(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_413(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_186(iParam0, 0))
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
	if (!func_508())
	{
		func_509(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_510(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_510(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_511(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_314(iParam0);
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
	else if (!func_512(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_514(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_513(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_187(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_513(iParam0));
	}
	func_489(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_414(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_186(iParam0, 0))
	{
		return Var0;
	}
	if (func_187(iParam0, -305066475))
	{
		if (func_215() == -1)
		{
			if (func_187(iParam0, -537818634))
			{
				return func_398(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_398(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_187(iParam0, -537818634))
	{
		return func_398(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_187(iParam0, 2084895747))
	{
		return func_398(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_415(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_515(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_517(&Var0, func_516(0));
	}
	if (!func_518(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_457(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_519(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_459(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_416(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_186(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_520(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_521(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_522(iParam0, Var0, Var0.f_4, bParam4) };
	return func_519(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_417(bool bParam0)
{
	if (func_215() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_461(bParam0));
}

void func_418(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_187(iParam0, 606799272))
		{
			func_523(iParam0, iParam1);
		}
		if (func_187(iParam0, -1112814642) && func_187(iParam0, -1697809989))
		{
			func_524(iParam0, iParam1, 1, 0);
		}
	}
}

void func_419(var uParam0, bool bParam1, int iParam2)
{
	func_525(iParam2);
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
		uParam0->f_13 = func_526(0);
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
							func_15(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_527(1))
						{
							func_15(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_527(1) || *uParam0 & 8192 != 0))
				{
					func_21(uParam0, 33554432);
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
			if (func_528(uParam0))
			{
				uParam0->f_15 = func_438();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_438() - uParam0->f_15) > 500)
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
	func_529(uParam0);
}

bool func_420(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
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
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
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
			if (!func_530(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_531(iParam0, iVar2) <= func_532(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_421(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_533(iParam2, 1, 1, 1, 0))
	{
		func_15(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_534(uParam1, 1);
	func_535();
}

bool func_422(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_536(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_537(uParam1);
			if (func_538(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_539(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_534(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_534(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_423(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_540(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_537(uParam2);
		if (func_538(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_539(uParam2)
				{
					func_534(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_424(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
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
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_530(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_539(uParam1)
		{
			fVar3 = func_537(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_425(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_426(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_541(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == GET_HASH_KEY("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
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
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_434(uParam2, iParam1))
			{
				func_534(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_427(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_542(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_434(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_534(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_428(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_543(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_544(iParam1, vVar0, vVar4))
					{
						func_534(uParam2, 1);
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
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_544(iParam1, vVar0, vVar7))
					{
						func_534(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_429(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_530(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_545(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_546(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_547(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_548(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_549(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_430(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case GET_HASH_KEY("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case GET_HASH_KEY("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_431(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_432(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_550(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_551(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_433(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_434(var uParam0, int iParam1)
{
	if (func_552(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_435(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_175(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_436()
{
}

bool func_437(var uParam0, int iParam1)
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
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_553(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_438();
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
						if (func_157(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_438();
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

int func_438()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_439()
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
	if ((func_438() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_440(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_532(uParam0);
	if (uParam0->f_12 > func_554(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_555(iParam1);
	iVar1 = func_556(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_441(int iParam0, int iParam1, var uParam2)
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
	return func_557(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_442(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
		if (func_285(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
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
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case GET_HASH_KEY("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_449(uParam1, iParam0))
					{
						if (func_157(iVar4, Global_36, 1) < 7f)
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

bool func_443(int iParam0, var uParam1)
{
	if (!func_558(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_444(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_445(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_446(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_438();
	}
	else if (func_438() - uParam1->f_4) > func_559(uParam1)
	{
		return func_560(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_447(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
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

bool func_448(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
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
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_449(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
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

int func_450(int iParam0)
{
	int iVar0;

	iVar0 = func_292(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

void func_451(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_452(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_453(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_454(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_561(iParam0);
}

int func_455(int iParam0)
{
	if (!func_312(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42266[iParam0 /*12*/];
}

bool func_456(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_461(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_457(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_458(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

int func_459(int iParam0)
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

int func_460(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_515(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_517(&Var0, func_516(0));
	}
	if (!func_518(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_459(iVar14);
	return iVar15;
}

int func_461(bool bParam0)
{
	if (func_215() == -1)
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

void func_462(var uParam0)
{
	int iVar0;

	if (func_562(uParam0->f_65))
	{
		uParam0->f_301 = 0;
	}
	else if (func_563(uParam0->f_65))
	{
		uParam0->f_301 = 2;
	}
	else if (func_564(uParam0->f_65))
	{
		uParam0->f_301 = 1;
	}
	else if (uParam0->f_300 != 78)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		uParam0->f_301 = iVar0;
	}
	else if (func_565())
	{
		uParam0->f_301 = 1;
	}
	else
	{
		uParam0->f_301 = 0;
	}
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return GET_HASH_KEY("P_CHAIRDESK02X");
		case 105:
			return GET_HASH_KEY("P_WOODENCHAIR01X");
		case 26:
			return GET_HASH_KEY("P_CHAIR24X");
		case 76:
			return GET_HASH_KEY("P_DININGCHAIRS01X");
		case 38:
			return GET_HASH_KEY("P_DININGCHAIRS01X");
		case 115:
			return GET_HASH_KEY("P_WINDSORCHAIR03X");
		case 78:
			return GET_HASH_KEY("P_WOODENCHAIR01X");
	}
	return GET_HASH_KEY("P_CHAIR24X");
}

bool func_464(int iParam0)
{
	return iParam0 != 0;
}

bool func_465()
{
	return func_566(1);
}

void func_466(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
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

void func_467(int iParam0)
{
	int iVar0;
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
	iVar0 = func_201(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_567(iParam0, 64))
	{
		func_468(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_372(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, GET_HASH_KEY("BLIP_SADDLE"), true);
				func_568(&(Global_1900383[iParam0 /*45*/].f_27));
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
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_468(iParam0);
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
		if (func_569(1) < 1)
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
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_570(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_567(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_571(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_572(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_573(iParam0))
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
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
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
		func_574(Global_1900383[iParam0 /*45*/].f_26);
		func_575(Global_1900383[iParam0 /*45*/].f_26);
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
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_476(iVar0) && !bVar9)
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
	iVar21 = func_569(iParam0);
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
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_468(int iParam0)
{
	iParam0 = func_327(iParam0);
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

bool func_469(int iParam0)
{
	return func_576(iParam0, 2);
}

bool func_470(int iParam0, bool bParam1)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	if ((func_287(iParam0, 1) && !func_140(iParam0)) && func_141(iParam0))
	{
		return false;
	}
	if (!func_287(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_577(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_471(int iParam0)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_472(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(iParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (iParam1 && AUDIO::_0xF0EE69F500952FA5(iParam0))
	{
		return true;
	}
	return false;
}

char* func_473(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 78:
			sVar0 = "0034_U_M_O_AsbSheriff_01";
			break;
		case 5:
			sVar0 = "1017_U_M_M_SDPoliceChief_01";
			break;
		case 105:
			sVar0 = "0405_U_M_M_RhdSheriff_01";
			break;
		case 26:
			sVar0 = "0457_U_M_M_StrSherriff_01";
			break;
		case 76:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
		case 38:
			sVar0 = "0085_U_M_O_BlWPoliceChief_01";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
	}
	return sVar0;
}

int func_474(var uParam0)
{
	return uParam0;
}

bool func_475(int iParam0)
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

bool func_476(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, GET_HASH_KEY("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_477(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_278(Global_1347702[iParam0 /*49*/].f_15);
	if (func_39(iVar0, iParam1))
	{
		return true;
	}
	return false;
}

void func_478(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_11 || uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_578(uParam0->f_300), uParam0->f_67, 0);
	}
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_241(uParam0->f_300), Global_35, 0);
	}
}

void func_479(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_579(uParam0->f_300), uParam0->f_13, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_580(uParam0->f_300), uParam0->f_18, 0);
	}
}

void func_480(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_10)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "Sheriff", uParam0->f_69, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "DESK", uParam0->f_6, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "Chair", uParam0->f_4, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "BOOK", uParam0->f_10, 0);
		}
	}
}

int func_481()
{
	int iVar0;

	iVar0 = func_581();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_482(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_215() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_582(MISC::ABSF(fVar1) < 1f, func_582(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_484()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_485(int iParam0, bool bParam1, int iParam2)
{
	func_583((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_584(iParam0);
}

void func_486(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_585(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_487(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_586(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_587(iVar5, &iVar2, &iVar0))
			{
				if (!func_186(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_588(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_314(iVar2) == 