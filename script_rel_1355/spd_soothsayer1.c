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
	struct<321> Local_15 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1372065533, 1597746576, -208228129, 480074467, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 4, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 493038497, 0, 0, 1, 1, 0, 0 } ;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (func_2(23, Local_15.f_160[0], 1, 1) && iLocal_14 > 2)
		{
			func_4(&Local_15, &(Local_15.f_177), func_3(55), 0, 0);
		}
		else
		{
			func_6(23, func_5(), &(Local_15.f_160[0]), &(Local_15.f_139), &(Local_15.f_172), 0, 1097859072 /* Float: 15f */, 0);
			func_7(&Local_15, 0);
			func_8(&Local_15, &iLocal_14);
			func_9(&Local_15, &iLocal_14);
			func_10(&Local_15, &iLocal_14);
			func_11(&Local_15);
			func_12(Local_15.f_160[0], &(Local_15.f_179), 1024, 23, 0);
			if (func_13(Local_15.f_160[0], 0))
			{
				Local_15.f_190 = func_15(&(Local_15.f_160[0]), &(Local_15.f_222), 15f, &(Local_15.f_243), 0f, 2, 0, "", func_14(Local_15.f_320, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			switch (iLocal_14)
			{
				case 0:
					func_16(&Local_15, &iLocal_14);
					break;
				case 1:
					if (func_17(&Local_15))
					{
						func_18(&Local_15, &iLocal_14, 2);
					}
					break;
				case 2:
					func_19(&Local_15, &iLocal_14);
					break;
				case 3:
					func_20(&Local_15, &iLocal_14);
					break;
				case 4:
					func_21(&Local_15, &iLocal_14);
					break;
				case 5:
					func_22(&Local_15, &iLocal_14);
					break;
				case 6:
					func_23(&Local_15, &iLocal_14);
					break;
				case 7:
					func_24(&Local_15, &iLocal_14);
					break;
				case 8:
					func_25(&Local_15, &iLocal_14);
					break;
				case 9:
					func_26(&Local_15, &iLocal_14);
					break;
				case 12:
					func_27(23, &(Local_15.f_160[0]), &(Local_15.f_179), 4);
					if (func_28(23) != 0)
					{
						if (func_28(23) == 1)
						{
							if (Local_15.f_196 >= 15)
							{
							}
						}
					}
					else if (Local_15.f_196 >= 10)
					{
					}
					func_1(&Local_15);
					break;
				case 10:
					func_29(&Local_15, &iLocal_14);
					break;
				case 11:
					break;
				default:
					break;
			}
		}
	}
}

void func_1(var uParam0)
{
	func_30(23);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SoothsayerBubble");
	func_31(&(uParam0->f_243), 0, 1, 1, 0);
	func_32(&(uParam0->f_222), &(uParam0->f_243));
	func_33(&(uParam0->f_160[0]), &(uParam0->f_188), GET_HASH_KEY("EVENT_SHOCKING_BEAT_INTERESTING"), 25f, 1);
	if (func_34(uParam0->f_179, 16))
	{
		uParam0->f_196++;
	}
	func_35(uParam0->f_151, ((BUILTIN::SHIFT_LEFT(uParam0->f_196, 24) || BUILTIN::SHIFT_LEFT(uParam0->f_195, 16)) || BUILTIN::SHIFT_LEFT(uParam0->f_194, 8)));
	func_36(uParam0->f_151, ((BUILTIN::SHIFT_LEFT(uParam0->f_191, 24) || BUILTIN::SHIFT_LEFT(uParam0->f_193, 16)) || BUILTIN::SHIFT_LEFT(uParam0->f_192, 8)));
	if (func_28(23) == 0)
	{
		if (uParam0->f_196 >= 10)
		{
			func_37(23, 1);
		}
	}
	else if (func_28(23) == 1)
	{
		if (uParam0->f_196 >= 15)
		{
			func_37(23, 12);
		}
	}
	if (func_34(uParam0->f_179, 4096))
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (func_38(&(uParam0->f_321)))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_321), 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_160[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_160[0], false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 130, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 315, false);
		func_39(uParam0->f_160[0]);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_160[0], 0f);
		PED::_0x39A2FC5AF55A52B1(uParam0->f_160[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_160[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_162[1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_162[1]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_177))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_177);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_178))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_178);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_166))
	{
		func_40(uParam0->f_166);
		VOLUME::_DELETE_VOLUME(uParam0->f_166);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_168))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_168);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_168);
		VOLUME::_DELETE_VOLUME(uParam0->f_168);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_167))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_167);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_167);
		VOLUME::_DELETE_VOLUME(uParam0->f_167);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_169))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_169);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[23 /*638*/][func_5() /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[23 /*638*/][func_5() /*48*/].f_47);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_157))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_157);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_158))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_158);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_156))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_156);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_159))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_159);
	}
	func_41(0);
	func_42(&(uParam0->f_322));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_43())
		{
			return true;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam1))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_44(0) == 7 || func_45())
		{
			return true;
		}
	}
	if (func_46(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return true;
	}
	return false;
}

char* func_3(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_Arthur_Speech_A";
			break;
		case 1:
			sVar0 = "pbl_Arthur_Speech_B";
			break;
		case 2:
			sVar0 = "pbl_Arthur_Speech_C";
			break;
		case 3:
			sVar0 = "pbl_Arthur_Speech_D";
			break;
		case 4:
			sVar0 = "pbl_Arthur_Speech_E";
			break;
		case 5:
			sVar0 = "pbl_Arthur_Speech_F";
			break;
		case 6:
			sVar0 = "pbl_Arthur_Speech_G";
			break;
		case 7:
			sVar0 = "pbl_Arthur_Speech_H";
			break;
		case 8:
			sVar0 = "pbl_Arthur_Speech_I";
			break;
		case 9:
			sVar0 = "pbl_Arthur_Speech_J";
			break;
		case 10:
			sVar0 = "pbl_Marston_Speech_A";
			break;
		case 11:
			sVar0 = "pbl_Marston_Speech_B";
			break;
		case 12:
			sVar0 = "pbl_Marston_Speech_C";
			break;
		case 13:
			sVar0 = "pbl_Marston_Speech_D";
			break;
		case 14:
			sVar0 = "pbl_Marston_Speech_E";
			break;
		case 15:
			sVar0 = "pbl_Speech_A_Even_The_Gods_Die";
			break;
		case 16:
			sVar0 = "pbl_Speech_B_Come_Speak_With_Me";
			break;
		case 17:
			sVar0 = "pbl_Speech_C_Come_To_Me";
			break;
		case 18:
			sVar0 = "pbl_Speech_D_Ive_Got_The_Truth";
			break;
		case 19:
			sVar0 = "pbl_Speech_E_I_Can_See_Far";
			break;
		case 20:
			sVar0 = "pbl_Speech_F_I_Have_The_Sight";
			break;
		case 21:
			sVar0 = "pbl_Callover_A_Speak_Whole_Truth";
			break;
		case 22:
			sVar0 = "pbl_Callover_B_Come_For_I_Can_See";
			break;
		case 23:
			sVar0 = "pbl_Callover_C_Come_Near_Come_Come";
			break;
		case 24:
			sVar0 = "pbl_Callover_D_See_Things_Clearly";
			break;
		case 25:
			sVar0 = "pbl_Callover_E_Dont_Just_Stare";
			break;
		case 26:
			sVar0 = "pbl_Callover_F_You_Stare_At_Me";
			break;
		case 27:
			sVar0 = "pbl_Dismount_A_Come_Here_My_Friend";
			break;
		case 28:
			sVar0 = "pbl_Dismount_B_Come_Here";
			break;
		case 29:
			sVar0 = "pbl_Dismount_C_Come_Towards_Me_Now";
			break;
		case 30:
			sVar0 = "pbl_Dismount_D_My_Friend_You_Live";
			break;
		case 31:
			sVar0 = "pbl_Dismount_E_Youre_Still_Alive";
			break;
		case 32:
			sVar0 = "pbl_Dismount_F_I_Remember_You";
			break;
		case 42:
			sVar0 = "pbl_Farewell_A_Travel_Safe";
			break;
		case 43:
			sVar0 = "pbl_Farewell_B_Good_Luck_To_You";
			break;
		case 44:
			sVar0 = "pbl_Farewell_C_Now_Be_On_Your_Way";
			break;
		case 45:
			sVar0 = "pbl_Farewell_D_Go_And_Be_Strong";
			break;
		case 46:
			sVar0 = "pbl_Farewell_E_That_Is_All_I_Have";
			break;
		case 47:
			sVar0 = "pbl_Farewell_F_Use_That_As_You_May";
			break;
		case 48:
			sVar0 = "pbl_Farewell_G_Go_Face_Your_Future";
			break;
		case 49:
			sVar0 = "pbl_Farewell_H_No_Go_Time_Precious";
			break;
		case 41:
			sVar0 = "PL_HANDOVER";
			break;
		case 55:
			sVar0 = "pbl_Base_Idle";
			break;
		case 56:
			sVar0 = "pbl_Idle_01";
			break;
		case 57:
			sVar0 = "pbl_Idle_02";
			break;
		case 58:
			sVar0 = "pbl_Idle_03";
			break;
		case 59:
			sVar0 = "pbl_Idle_Enter";
			break;
		case 60:
			sVar0 = "pbl_Idle_Exit";
			break;
		case 33:
			sVar0 = "pbl_Do_You_Want_To_Hear_Your_Future";
			break;
		case 34:
			sVar0 = "pbl_Coin_to_Know_Your_Fate";
			break;
		case 35:
			sVar0 = "pbl_Like_to_Know_Whats_In_Store";
			break;
		case 36:
			sVar0 = "pbl_Look_Into_The_Shadows_Ahead";
			break;
		case 37:
			sVar0 = "pbl_Show_Clarity_Show_Your_Future";
			break;
		case 38:
			sVar0 = "pbl_I_Will_Tell_Your_Future";
			break;
		case 39:
			sVar0 = "pbl_Give_and_Receive_Your_Fate";
			break;
		case 40:
			sVar0 = "pbl_I_Dont_See_Too_Well";
			break;
		case 50:
			sVar0 = "pbl_Aggro_A_You_Bully_The_Weak";
			break;
		case 51:
			sVar0 = "pbl_Aggro_B_Fate_Shall_Be_Deserved";
			break;
		case 52:
			sVar0 = "pbl_Aggro_C_One_Day_Sick_And_Weak";
			break;
		case 53:
			sVar0 = "pbl_Aggro_D_Youre_Doomed_Already";
			break;
		case 54:
			sVar0 = "pbl_Aggro_E_Deserve_What_You_Get";
			break;
	}
	return sVar0;
}

bool func_4(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
		{
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
			}
			if (bParam4)
			{
				if (!func_47(&(uParam0->f_160[0]), 50f, 0))
				{
					return false;
				}
			}
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_Loop", bParam3, false);
				return false;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_Base", true))
				{
					if (func_48(uParam1, uParam0->f_175))
					{
						uParam0->f_175 = sParam2;
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_5()
{
	int iVar0;

	if (func_49())
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_6(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_50();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_51(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_52(uParam3))
	{
		func_53(uParam3, 0f);
	}
	else if (func_54(uParam3) >= 2f)
	{
		if (!func_55(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_56(iParam0);
			*uParam4 = 1;
			func_57(uParam3);
			return 1;
		}
		else
		{
			func_56(iParam0);
			*uParam4 = 1;
			func_57(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_7(var uParam0, int iParam1)
{
	if (!func_13(Global_35, 0))
	{
		func_1(uParam0);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[23 /*638*/][func_5() /*48*/].f_47, true, 0))
	{
		if (!func_52(&(uParam0->f_130)))
		{
			func_58(&(uParam0->f_130), 0);
		}
		else if (func_54(&(uParam0->f_130)) > 10f)
		{
			func_57(&(uParam0->f_130));
			func_1(uParam0);
		}
	}
	else if (func_59(23, iParam1, &(uParam0->f_322), uParam0->f_160[0]))
	{
		uParam0->f_174 = 1;
		if (func_60(&(uParam0->f_322)) || func_34(uParam0->f_322, 8))
		{
			func_1(uParam0);
		}
	}
	if (uParam0->f_174)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_160[0], "script_special_ped@pdshr_soothsayer@ig@ig1_idle_and_aggro", "base_idle_soothsayer", 1))
		{
			if (func_61(&(uParam0->f_322)))
			{
				if ((VOLUME::DOES_VOLUME_EXIST(uParam0->f_166) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_166, true, 0)) && !ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_160[0]))
				{
					func_1(uParam0);
				}
			}
		}
	}
}

void func_8(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		if (!func_13(uParam0->f_160[0], 0))
		{
			func_1(uParam0);
		}
		else if ((*iParam1 >= 3 && *iParam1 <= 9) && func_62(uParam0->f_160[0], 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
		{
			if (!func_34(uParam0->f_179, 128))
			{
				func_63(&(uParam0->f_179), 128);
				func_64(uParam0->f_160[0], 0.2f, 0);
				func_18(uParam0, iParam1, 10);
			}
		}
	}
}

void func_9(var uParam0, int iParam1)
{
	if (*iParam1 >= 10 || *iParam1 <= 2)
	{
		return;
	}
	func_65(&(uParam0->f_156), uParam0->f_169, &(uParam0->f_160[0]), &(uParam0->f_197), &(uParam0->f_136), 5000);
}

void func_10(var uParam0, int iParam1)
{
	if (func_34(uParam0->f_179, 64) && uParam0->f_187 >= 3)
	{
		return;
	}
	if (*iParam1 >= 3 && *iParam1 <= 9)
	{
		if (func_66(&(uParam0->f_160[0]), &(uParam0->f_171), &(uParam0->f_142), &(uParam0->f_187), 3, 0, 7000, 0))
		{
			func_63(&(uParam0->f_179), 64);
		}
	}
}

void func_11(var uParam0)
{
	if (func_34(uParam0->f_179, 4))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_167))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!func_34(uParam0->f_179, 2))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_167, true, 0))
		{
			func_63(&(uParam0->f_179), 2);
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_167, true, 0))
	{
		func_67(&(uParam0->f_222), 0);
		func_68(&(uParam0->f_179), 2);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_167, true, 0))
	{
		if (func_34(uParam0->f_179, 4))
		{
			if (func_69(&(uParam0->f_243[0 /*17*/]), 1, 0))
			{
				func_70(&(uParam0->f_243[0 /*17*/]), 0, 0);
			}
			if (!func_34(uParam0->f_179, 524288))
			{
				uParam0->f_320 = 3;
				func_67(&(uParam0->f_222), 0);
				func_63(&(uParam0->f_179), 524288);
			}
		}
		else if (func_34(uParam0->f_179, 8))
		{
			if (!func_34(uParam0->f_179, 262144))
			{
				func_71(&(uParam0->f_243[0 /*17*/]), "SPSS_UC_TALK", 200);
				func_63(&(uParam0->f_179), 262144);
			}
			if (((func_72() || PED::IS_PED_ON_MOUNT(Global_35)) || func_73(&(uParam0->f_160[0]), &(uParam0->f_157), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) || func_74(&(uParam0->f_160[0]), &(uParam0->f_158), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */))
			{
				if (func_69(&(uParam0->f_243[0 /*17*/]), 1, 0))
				{
					func_70(&(uParam0->f_243[0 /*17*/]), 0, 0);
				}
				return;
			}
			if (func_75(1) < 200)
			{
				if (func_69(&(uParam0->f_243[0 /*17*/]), 1, 0))
				{
					func_70(&(uParam0->f_243[0 /*17*/]), 0, 0);
				}
				if (!func_34(uParam0->f_179, 524288))
				{
					uParam0->f_320 = 3;
					func_67(&(uParam0->f_222), 0);
					func_63(&(uParam0->f_179), 524288);
				}
			}
			else
			{
				if (!func_69(&(uParam0->f_243[0 /*17*/]), 1, 0))
				{
					func_70(&(uParam0->f_243[0 /*17*/]), 1, 0);
				}
				if (func_34(uParam0->f_179, 524288))
				{
					uParam0->f_320 = 2;
					func_67(&(uParam0->f_222), 0);
					func_68(&(uParam0->f_179), 524288);
				}
			}
		}
	}
	else
	{
		if (func_69(&(uParam0->f_243[0 /*17*/]), 1, 0))
		{
			func_70(&(uParam0->f_243[0 /*17*/]), 0, 0);
		}
		if (!func_34(uParam0->f_179, 524288))
		{
			uParam0->f_320 = 3;
			func_67(&(uParam0->f_222), 0);
			func_63(&(uParam0->f_179), 524288);
		}
	}
	switch (uParam0->f_190)
	{
		case 0:
			if (func_75(1) >= 200 && !func_34(uParam0->f_179, 4))
			{
				func_70(&(uParam0->f_243[0 /*17*/]), 0, 0);
				func_70(&(uParam0->f_243[1 /*17*/]), 0, 0);
				func_76(uParam0->f_160[0], MISC::GET_RANDOM_INT_IN_RANGE(200, 400));
				func_27(23, &(uParam0->f_160[0]), &(uParam0->f_179), 512);
				func_77();
				func_68(&(uParam0->f_179), 262144);
				func_63(&(uParam0->f_179), 4);
			}
			break;
	}
}

void func_12(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_78(iParam3);
	if (fParam4 == 0f)
	{
		if (func_51(iParam0, Global_35, 15f, 1))
		{
			if (!func_79(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_80(uParam1, iParam2);
				}
			}
		}
		else if (func_79(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_81(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_79(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_80(uParam1, iParam2);
			}
		}
	}
	else if (func_79(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_81(uParam1, iParam2);
	}
}

bool func_13(int iParam0, int iParam1)
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
	if (func_34(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_34(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_34(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_34(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_15(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_82(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_83(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_84(&(iParam1->f_13));
		}
		if (func_85(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_86(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_15(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_87(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_88(*uParam0, 1, 1);
						}
					}
					else if (func_89(iParam1, 22))
					{
						func_88(*uParam0, 0, 1);
					}
				}
				if (func_90(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_91(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_92(iParam8);
					if (func_93(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_94(uParam3);
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
					func_95(iParam1, uParam3, fVar8);
					if (func_96(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_31(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_97(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_90(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_98(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_93(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_91(uParam0, func_90(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_92(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_31(uParam3, 0, 0, 1, 1);
					}
					func_99(iParam1, 1);
				}
				func_95(iParam1, uParam3, fVar8);
				if (func_97(uParam0, iParam1, fParam4, bVar6))
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
			func_32(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_16(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_177))
	{
		uParam0->f_177 = ANIMSCENE::_CREATE_ANIM_SCENE(func_100(), 64, func_3(55), false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_178))
	{
		uParam0->f_178 = ANIMSCENE::_CREATE_ANIM_SCENE(func_101(), 96, func_3(33), false, true);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_177) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_178))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_177);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_178);
		STREAMING::REQUEST_MODEL(uParam0->f_152, false);
		STREAMING::REQUEST_MODEL(uParam0->f_153, false);
		STREAMING::REQUEST_MODEL(uParam0->f_154, false);
		STREAMING::REQUEST_MODEL(uParam0->f_155, false);
		HUD::TEXT_BLOCK_REQUEST("SPSS");
		HUD::TEXT_BLOCK_REQUEST("SPSHRAU");
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Global_1396257[23 /*638*/][func_5() /*48*/].f_47), 1784.089f, -946.648f, 40.7225f, true) < 10f)
		{
			func_63(&(uParam0->f_179), 8388608);
		}
		func_102(uParam0);
		func_103(uParam0->f_166, "SP_SOOTHSAYER_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_168, 2500607, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_168, 0, 0, 0, -1, -1, 0);
		iVar0 = func_104();
		if (iVar0 == GET_HASH_KEY("MISTY") || iVar0 == GET_HASH_KEY("FOG"))
		{
			if (!func_34(uParam0->f_179, 4096))
			{
				MISC::SET_WEATHER_TYPE(iVar0, false, true, false, 0f, false);
				func_63(&(uParam0->f_179), 4096);
			}
		}
		uParam0->f_151 = func_106(23, func_5(), 9, func_105(23));
		if (!func_107(uParam0->f_151))
		{
		}
		iVar1 = func_108(uParam0->f_151);
		uParam0->f_196 = BUILTIN::SHIFT_RIGHT(iVar1, 24) & 255;
		uParam0->f_195 = BUILTIN::SHIFT_RIGHT(iVar1, 16) & 255;
		uParam0->f_194 = BUILTIN::SHIFT_RIGHT(iVar1, 8) & 255;
		iVar1 = func_109(uParam0->f_151);
		uParam0->f_191 = BUILTIN::SHIFT_RIGHT(iVar1, 24) & 255;
		uParam0->f_193 = BUILTIN::SHIFT_RIGHT(iVar1, 16) & 255;
		uParam0->f_192 = BUILTIN::SHIFT_RIGHT(iVar1, 8) & 255;
		if (func_49())
		{
			if (uParam0->f_196 < 10)
			{
				uParam0->f_196 = 10;
			}
		}
		if (func_49())
		{
			func_110(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_110(uParam0, Global_35, "ARTHUR", 0);
		}
		uParam0->f_322.f_1 = 1;
		uParam0->f_322.f_2 = 1;
		uParam0->f_322.f_4 = 1;
		uParam0->f_322.f_5 = 1;
		uParam0->f_322.f_6 = 1;
		uParam0->f_322.f_7 = 1;
		uParam0->f_322.f_8 = 0;
		uParam0->f_322.f_9 = 1;
		uParam0->f_322.f_10 = 1;
		uParam0->f_322.f_11 = 1.75f;
		uParam0->f_322.f_12 = 2.25f;
		uParam0->f_322.f_16 = 45000;
		func_111(&(uParam0->f_98));
		func_112(&(uParam0->f_98), 1);
		func_113(&(uParam0->f_98), 0);
		func_114(&(uParam0->f_98), 0);
		func_115(&(uParam0->f_98), 0);
		func_116(&(uParam0->f_98), 1);
		func_117(&(uParam0->f_98), 1);
		func_118(&(uParam0->f_98), 0);
		func_119(&(uParam0->f_98), 1);
		func_120(&(uParam0->f_98), 1);
		func_121(&(uParam0->f_98), 0);
		func_122(&(uParam0->f_98), 0);
		func_123(&(uParam0->f_98), 1);
		func_124(&(uParam0->f_98), 1);
		func_125(&(uParam0->f_98), 1);
		func_126(&(uParam0->f_98), 1);
		func_127(&(uParam0->f_98), 1);
		func_128(&(uParam0->f_98), 1);
		func_129(&(uParam0->f_98), 1);
		if (func_107(uParam0->f_151))
		{
			func_18(uParam0, iParam1, 1);
		}
	}
}

bool func_17(var uParam0)
{
	PED::_0xED9582B3DA8F02B4(1);
	if ((((((((STREAMING::HAS_MODEL_LOADED(uParam0->f_152) && STREAMING::HAS_MODEL_LOADED(uParam0->f_153)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_154)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_155)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_177, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_178, true, false)) && HUD::TEXT_BLOCK_IS_LOADED("SPSHRAU")) && HUD::TEXT_BLOCK_IS_LOADED("SPSS")) && PED::_0x5C16855277819BBF() == 1)
	{
		return true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_152))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_153))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_154))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_155))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_177, true, false))
	{
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_178, true, false))
	{
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPSHRAU"))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	return false;
}

void func_18(var uParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 4:
			uParam0->f_181 = uParam0->f_191;
			break;
		case 5:
			uParam0->f_183 = uParam0->f_193;
			uParam0->f_182 = uParam0->f_192;
			func_63(&(uParam0->f_179), 131072);
			break;
		case 6:
			uParam0->f_184 = uParam0->f_194;
			break;
		case 9:
			uParam0->f_185 = uParam0->f_195;
			break;
		case 10:
			func_56(23);
			break;
	}
	*iParam1 = iParam2;
}

void func_19(var uParam0, int iParam1)
{
	vector3 vVar0;
	struct<4> Var4;
	vector3 vVar8;
	vector3 vVar12;

	vVar0 = { func_130(uParam0, 0) };
	Var4 = { func_130(uParam0, 1) };
	vVar8 = { func_130(uParam0, 2) };
	if (((func_131(&(uParam0->f_160[0]), uParam0->f_152, vVar0, vVar0.f_3, 2, 0, 1) && func_132(&(uParam0->f_162[0]), uParam0->f_153, Var4)) && func_132(&(uParam0->f_162[1]), uParam0->f_154, vVar8 - Vector(10f, 0f, 0f))) && func_132(&(uParam0->f_162[2]), uParam0->f_155, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, vVar0.f_3, -0.2f, 0.4f, 0f)))
	{
		if (func_13(uParam0->f_160[0], 0))
		{
			if (func_28(23) == 1)
			{
				func_133(uParam0->f_160[0], 1689938120);
			}
			func_134(uParam0->f_160[0], 23);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_160[0], "special_ped_group", 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_160[0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_160[0], GET_HASH_KEY("REL_CIVFEMALE"));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 344, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 448, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 153, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_160[0], 17, true);
			PED::_0x923583741DC87BCE(uParam0->f_160[0], "old_female");
			func_110(uParam0, uParam0->f_160[0], "SOOTHSAYER", 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_160[0], vVar0, vVar0.f_3, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_162[0], Var4, Var4.f_3, true, false, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_162[1], false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_162[1], false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_162[1], true);
			vVar12 = { 0f, 0f, 0f };
			vVar12.f_2 = vVar0.f_3;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "SOOTHSAYER", uParam0->f_160[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "p_walkingStick01x", uParam0->f_162[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_177, vVar0, vVar12, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "SOOTHSAYER", uParam0->f_160[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "p_walkingStick01x", uParam0->f_162[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "COINSTACK", uParam0->f_162[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_178, vVar0, vVar12, 2);
			func_135(uParam0);
			func_136(&(uParam0->f_321), vVar0, 1f, 1, 258, 0);
			func_137(uParam0);
			func_138(&(uParam0->f_160[0]), &(uParam0->f_188), GET_HASH_KEY("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), 25f, 3600f);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uParam0->f_160[0], "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "SoothsayerBubble");
			PED::_0x7C00CFC48A782DC0(uParam0->f_170, uParam0->f_160[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			func_18(uParam0, iParam1, 3);
		}
	}
}

void func_20(var uParam0, int iParam1)
{
	func_18(uParam0, iParam1, 4);
}

void func_21(var uParam0, int iParam1)
{
	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_177)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!func_52(&(uParam0->f_133)))
	{
		func_84(&(uParam0->f_133));
	}
	if (func_141(&(uParam0->f_133)) > uParam0->f_176 && uParam0->f_181 <= 5)
	{
		if (func_4(uParam0, &(uParam0->f_177), func_3(func_142(uParam0->f_181)), 0, 1))
		{
			func_84(&(uParam0->f_133));
			uParam0->f_181 = uParam0->f_191;
		}
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
		{
			uParam0->f_191 = uParam0->f_181 + 1;
			if (uParam0->f_191 > 5 && !func_34(uParam0->f_179, 16))
			{
				uParam0->f_191 = 0;
			}
		}
	}
	if ((func_51(Global_35, uParam0->f_160[0], 13f, 1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0])) && !func_34(uParam0->f_179, 16))
	{
		func_18(uParam0, iParam1, 5);
	}
}

void func_22(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;

	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_177)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	bVar0 = false;
	if (!func_34(uParam0->f_179, 131072))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bVar0 = func_4(uParam0, &(uParam0->f_177), func_3(func_143(uParam0->f_182)), 0, 1);
			if (bVar0)
			{
				uParam0->f_182 = uParam0->f_192;
			}
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
			{
				uParam0->f_192 = uParam0->f_182 + 1;
				if (uParam0->f_196 == 0 || uParam0->f_196 == 10)
				{
					if (uParam0->f_192 >= 3)
					{
						uParam0->f_192 = 0;
					}
				}
				if (uParam0->f_192 > 5)
				{
					uParam0->f_192 = 0;
				}
			}
		}
		else
		{
			bVar0 = func_4(uParam0, &(uParam0->f_177), func_3(func_144(uParam0->f_183)), 0, 1);
			if (bVar0)
			{
				uParam0->f_183 = uParam0->f_193;
			}
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
			{
				uParam0->f_193 = uParam0->f_183 + 1;
				if (uParam0->f_193 > 5)
				{
					uParam0->f_193 = 0;
				}
			}
		}
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_160[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
	if (!func_51(Global_35, uParam0->f_160[0], 13f, 1) && bVar0)
	{
		func_18(uParam0, iParam1, 4);
	}
	else if (((func_51(Global_35, uParam0->f_160[0], 9f, 1) && (func_34(uParam0->f_179, 131072) || bVar0)) && vVar1.y > 0f) && !func_34(uParam0->f_179, 16))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_178, 0);
		func_68(&(uParam0->f_179), 256);
		func_18(uParam0, iParam1, 6);
	}
	func_68(&(uParam0->f_179), 131072);
}

void func_23(var uParam0, int iParam1)
{
	vector3 vVar0;

	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_178)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_145(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!func_34(uParam0->f_179, 8))
	{
		if (!func_34(uParam0->f_179, 8192))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
			{
				func_63(&(uParam0->f_179), 8192);
			}
		}
		else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
		{
			func_63(&(uParam0->f_179), 8);
		}
	}
	if (uParam0->f_184 > 7)
	{
		uParam0->f_184 = 0;
	}
	if (!func_52(&(uParam0->f_127)) || func_141(&(uParam0->f_127)) > 5f)
	{
		if (func_4(uParam0, &(uParam0->f_178), func_3(func_146(uParam0->f_184)), 0, 1))
		{
			func_84(&(uParam0->f_127));
			uParam0->f_184 = uParam0->f_194;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
	{
		uParam0->f_194 = uParam0->f_184 + 1;
		if (uParam0->f_194 > 7)
		{
			uParam0->f_194 = 0;
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_160[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
	if ((!func_51(Global_35, uParam0->f_160[0], 13f, 1) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0])) || (vVar0.y < 0f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0])))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_177, 0);
		func_68(&(uParam0->f_179), 256);
		func_18(uParam0, iParam1, 5);
	}
	if (func_34(uParam0->f_179, 4))
	{
		if (Global_1935689.f_1)
		{
			func_147(0);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_178, "s_base", true))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_162[1], true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_162[1], true, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_162[1], false);
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_177, func_3(func_148(uParam0->f_196)));
			func_68(&(uParam0->f_179), 256);
			func_18(uParam0, iParam1, 7);
		}
		else
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
		}
	}
}

void func_24(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_177)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_145(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (Global_1935689.f_1)
	{
		func_147(0);
	}
	if (!func_34(uParam0->f_179, 65536))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false);
		if (iVar0 != GET_HASH_KEY("WEAPON_UNARMED") || iVar1 != GET_HASH_KEY("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			uParam0->f_189 = MISC::GET_GAME_TIMER();
		}
		func_63(&(uParam0->f_179), 65536);
	}
	if (((!func_149(Global_35, 1369124074) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41))) && !func_34(uParam0->f_179, 2048)) && (func_34(uParam0->f_179, 65536) && MISC::GET_GAME_TIMER() >= uParam0->f_189 + 1500))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_168))
		{
			func_150(&(uParam0->f_168), &(uParam0->f_159), &(uParam0->f_173));
		}
		func_41(1);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_178, "ARTHUR", func_3(41), 1.2f, false, 0, 20000, -1082130432 /* Float: -1f */);
		func_63(&(uParam0->f_179), 2048);
	}
	else
	{
		if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_178, "ARTHUR") && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41)))
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_41(0);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_178, func_3(41), true);
		}
		if (!func_34(uParam0->f_179, 262144))
		{
			func_151(&(uParam0->f_243[0 /*17*/]), "INTERACT_GREET");
			func_151(&(uParam0->f_243[1 /*17*/]), "INTERACT_INSULT");
			func_63(&(uParam0->f_179), 262144);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41)) && !ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_178, "s_Base", true))
	{
		if (!func_34(uParam0->f_179, 1048576))
		{
			if (func_49())
			{
				StringCopy(&cVar2, "SPSHR_JOHNPAY", 24);
			}
			else
			{
				StringCopy(&cVar2, "SPSHR_ARTHPAY", 24);
			}
			if (func_152(uParam0, cVar2, 0, -1, 0, 0))
			{
				func_63(&(uParam0->f_179), 1048576);
			}
		}
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_178) > 0.27f)
		{
			if (!func_34(uParam0->f_179, 4194304))
			{
				func_153(200, 0, 0, 1, 1);
				func_63(&(uParam0->f_179), 4194304);
			}
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_178, func_3(41)) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_178, "s_Base", true))
	{
		if (!func_34(uParam0->f_179, 16777216))
		{
			func_154(12, 0, 0, "", uParam0->f_160[0], 0, 1065353216 /* Float: 1f */, 0);
			func_63(&(uParam0->f_179), 16777216);
		}
		func_63(&(uParam0->f_179), 16);
		func_68(&(uParam0->f_179), 256);
		if (!func_34(uParam0->f_179, 524288))
		{
			uParam0->f_320 = 3;
			func_67(&(uParam0->f_222), 0);
			func_63(&(uParam0->f_179), 524288);
		}
		func_18(uParam0, iParam1, 8);
	}
	else if (func_34(uParam0->f_179, 2048))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
}

void func_25(var uParam0, int iParam1)
{
	vector3 vVar0[24];

	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_177)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!func_34(uParam0->f_179, 2097152) && func_155(Global_35, uParam0->f_160[0], 1, 1) < 5f)
	{
		if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_177, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_177) > 0.1f) && !AUDIO::_0x54B187F111D9C6F8(uParam0->f_160[0], 1))
		{
			if (!func_52(&(uParam0->f_148)))
			{
				func_84(&(uParam0->f_148));
			}
			else if (func_141(&(uParam0->f_148)) > 0.5f)
			{
				if (func_49())
				{
					StringCopy(&cVar0, "SPSHR_JOHNTHANK", 24);
				}
				else
				{
					StringCopy(&cVar0, "SPSHR_ARTHTHANK", 24);
				}
				if (func_152(uParam0, cVar0, 0, -1, 0, 0))
				{
					func_63(&(uParam0->f_179), 2097152);
				}
			}
		}
	}
	if (func_4(uParam0, &(uParam0->f_177), func_3(func_148(uParam0->f_196)), 0, 1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SOOTHSAYER"));
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SoothsayerBubble");
		if (func_155(Global_35, uParam0->f_160[0], 1, 1) < 5f)
		{
			if (func_34(uParam0->f_179, 2097152))
			{
				func_18(uParam0, iParam1, 9);
			}
		}
		else
		{
			func_18(uParam0, iParam1, 9);
		}
	}
}

void func_26(var uParam0, int iParam1)
{
	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_177)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_140(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (((func_34(uParam0->f_179, 16384) && func_54(&(uParam0->f_133)) > 5f) || !func_51(Global_35, uParam0->f_160[0], 13f, 1)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_160[0]))
	{
		func_68(&(uParam0->f_179), 256);
		func_84(&(uParam0->f_133));
		uParam0->f_176 = 10f;
		func_18(uParam0, iParam1, 4);
	}
	if (!func_34(uParam0->f_179, 16384))
	{
		if (func_4(uParam0, &(uParam0->f_177), func_3(func_156(uParam0->f_185)), 0, 1))
		{
			func_53(&(uParam0->f_133), 0f);
			func_63(&(uParam0->f_179), 16384);
		}
		if (!func_34(uParam0->f_179, 32768))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_177) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_177, func_3(func_156(uParam0->f_185))))
			{
				uParam0->f_195++;
				if (uParam0->f_195 > 7)
				{
					uParam0->f_195 = 0;
				}
				func_63(&(uParam0->f_179), 32768);
			}
		}
	}
}

void func_27(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_79(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_158(func_157(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_159(func_157(GET_HASH_KEY("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_50();
	func_80(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_28(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

void func_29(var uParam0, int iParam1)
{
	if (!func_34(uParam0->f_179, 256))
	{
		if (!func_139(&(uParam0->f_177)))
		{
			func_68(&(uParam0->f_179), 256);
			return;
		}
		else
		{
			func_145(uParam0);
			func_63(&(uParam0->f_179), 256);
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_160[0]))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_162[0]))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_162[0]))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_162[0], true, true);
	}
	func_4(uParam0, &(uParam0->f_177), func_3(func_160(uParam0->f_196)), 1, 1);
	if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_177, func_3(func_160(uParam0->f_196))))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SoothsayerBubble");
		func_161(uParam0->f_170);
		if (!func_149(uParam0->f_160[0], 518218985))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 448, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 153, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_160[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_160[0], true);
			PED::_0x8B3CB08158E98481(uParam0->f_160[0], 1);
			func_162(&(uParam0->f_160[0]), &(uParam0->f_312), &(uParam0->f_222), &(uParam0->f_243), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_160[0], 17, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 130, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_160[0], 315, false);
			func_39(uParam0->f_160[0]);
			if (!func_34(uParam0->f_179, 33554432))
			{
				func_154(1, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_63(&(uParam0->f_179), 33554432);
			}
			TASK::TASK_FLEE_PED(uParam0->f_160[0], Global_35, 0, 0, -1f, -1, 0);
			PED::SET_PED_KEEP_TASK(uParam0->f_160[0], true);
		}
		else if (!func_52(&(uParam0->f_145)))
		{
			func_53(&(uParam0->f_145), 0f);
		}
		else if (func_163(&(uParam0->f_145)) > 15000)
		{
			PED::SET_PED_TO_RAGDOLL(uParam0->f_160[0], 100, 3000, 0, false, false, false);
			PED::SET_PED_RAGDOLL_FORCE_FALL(uParam0->f_160[0]);
			func_57(&(uParam0->f_145));
			func_18(uParam0, iParam1, 11);
		}
	}
}

void func_30(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_164(0, -1);
	}
	func_165();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_31(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_166((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_167(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_32(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_168(iParam0, uParam1, 1);
	func_31(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_33(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

bool func_34(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_35(int iParam0, int iParam1)
{
	if (!func_107(iParam0))
	{
		return;
	}
	func_169(iParam0, iParam1);
}

void func_36(int iParam0, int iParam1)
{
	if (!func_107(iParam0))
	{
		return;
	}
	func_170(iParam0, iParam1);
}

void func_37(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

bool func_38(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_39(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

void func_40(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_171(vVar0, 0);
}

void func_41(bool bParam0)
{
	int iVar0;

	iVar0 = func_172();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 0);
		}
	}
}

void func_42(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_20);
	}
	if (func_52(&(uParam0->f_13)))
	{
		func_57(&(uParam0->f_13));
	}
}

bool func_43()
{
	int iVar0;

	if (func_173() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_174(Global_1392915[iVar0 /*12*/].f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_44(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_45()
{
	return Global_1310750.f_16077 != 0;
}

bool func_46(var uParam0, int iParam1)
{
	return func_175(*uParam0, iParam1);
}

bool func_47(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_51(Global_35, *uParam0, 25f, 1))
			{
				return true;
			}
		}
		else if (fParam2 <= 25f)
		{
			return true;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_51(Global_35, *uParam0, fParam1, 1))
		{
			return true;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return true;
	}
	return false;
}

bool func_48(var uParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return false;
}

bool func_49()
{
	if (func_173() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

var func_50()
{
	return Global_1899515;
}

bool func_51(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_52(var uParam0)
{
	return func_176(*uParam0, 1);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_177() - fParam1);
	func_178(uParam0, 1);
	func_179(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_54(var uParam0)
{
	if (!func_52(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_180(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_177() - uParam0->f_1);
}

bool func_55(int iParam0)
{
	return iParam0 != -15;
}

void func_56(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_50();
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1 || !func_52(uParam0))
	{
		func_84(uParam0);
	}
}

bool func_59(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_44(0) == 1 || func_44(0) == 2) || func_44(0) == 8) || func_181(Global_1935630, 2048))
			{
				func_63(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_44(0) == 11)
			{
				func_63(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_44(0) == 6)
			{
				func_63(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_63(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_182(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_182(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_50();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_182(iVar2) > func_182(iVar1))
				{
					if (func_182(iVar0) > func_182(iVar2) + 1 || func_182(iVar0) < func_182(iVar1))
					{
						func_63(uParam2, 32);
					}
				}
				else if (func_182(iVar0) > func_182(iVar2) + 1 && func_182(iVar0) < func_182(iVar1))
				{
					func_63(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_183(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_183(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_184(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_184(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_185(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_63(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_73(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_186(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_52(&(uParam2->f_13)))
					{
						func_53(&(uParam2->f_13), 0f);
					}
					else if (func_163(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_57(&(uParam2->f_13));
						func_63(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_52(&(uParam2->f_13)))
					{
						func_57(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_187())
			{
				func_63(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_188())
			{
				func_63(uParam2, 2048);
			}
		}
		if (func_181(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_63(uParam2, 128);
		}
		if (func_46(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_63(uParam2, 256);
		}
	}
	if ((((((((((func_34(*uParam2, 2) || func_34(*uParam2, 4)) || func_34(*uParam2, 8)) || func_34(*uParam2, 16)) || func_34(*uParam2, 32)) || func_34(*uParam2, 64)) || func_34(*uParam2, 128)) || func_34(*uParam2, 256)) || func_34(*uParam2, 512)) || func_34(*uParam2, 1024)) || func_34(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_60(var uParam0)
{
	if (((((func_34(*uParam0, 2) || func_34(*uParam0, 4)) || func_34(*uParam0, 16)) || func_34(*uParam0, 128)) || func_34(*uParam0, 1024)) || func_34(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_61(var uParam0)
{
	if ((((func_34(*uParam0, 32) || func_34(*uParam0, 64)) || func_34(*uParam0, 512)) || func_34(*uParam0, 256)) || func_34(*uParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_189(uParam2, 1, iVar0);
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
			if (func_190(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_191(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_192(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_193(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_194(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_195(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_191(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_196(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_197(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_191(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_198(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_191(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_199(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_199(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_191(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_200(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_201(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_202(uParam2, 4000))
				{
					if ((func_203(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_204(uParam2, iParam0)) && func_205(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_191(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_203(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_204(uParam2, iParam0)) && func_205(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_206(iParam0, Global_1935630.f_41))
							{
								func_207();
								*uParam3 = 2;
								func_191(iParam0, uParam2, *uParam3);
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
						if (func_206(iParam0, Global_1935630.f_41))
						{
							func_207();
							*uParam3 = 2;
							func_191(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_208(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_209() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_207();
						*uParam3 = 2;
						func_191(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_210())
					{
						if (func_206(iParam0, Global_1935630.f_42))
						{
							func_207();
							*uParam3 = 2;
							func_191(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_211(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_191(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_212(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_213(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_191(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_214(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_215(uParam2, 4000))
				{
					if (func_216(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_191(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_217(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_191(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_218(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_191(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_63(var uParam0, int iParam1)
{
	func_80(uParam0, iParam1);
}

void func_64(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_219(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_65(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_52(uParam4))
	{
		func_53(uParam4, 0f);
	}
	else if (func_163(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (func_220(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = uVar0[0];
				func_53(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			func_53(uParam4, 0f);
		}
	}
	*uParam3 = { 0f, 0f, 0f };
	uParam3->f_4 = 21030;
	uParam3->f_8 = 4;
	uParam3->f_17 = 2;
	uParam3->f_18 = 1;
	uParam3->f_19 = 3;
	uParam3->f_20 = 1;
	uParam3->f_21 = 3;
	uParam3->f_22 = 1;
	uParam3->f_13 = 3;
	uParam3->f_7 = iParam5;
	IK::_0x66F9EB44342BB4C5(*uParam2, uParam3);
}

bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_52(uParam2))
		{
			func_53(uParam2, 0f);
			return false;
		}
		else if (func_163(uParam2) > iParam6)
		{
			func_57(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return false;
			}
			fParam7 = func_155(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = GET_HASH_KEY("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

void func_67(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_57(&(iParam0->f_18));
}

void func_68(var uParam0, int iParam1)
{
	func_81(uParam0, iParam1);
}

bool func_69(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_166(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_221(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_70(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_222(iParam0, 13))
	{
		func_223(iParam0, 0);
	}
	else
	{
		func_224(iParam0, 0);
	}
	if (func_166(iParam0->f_6))
	{
		if (bParam2)
		{
			func_167(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_71(int* iParam0, char* sParam1, char* sParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (func_166(iParam0->f_6))
		{
			func_225(iParam0->f_6, sParam1, sParam2, 1);
		}
		iParam0->f_14 = sParam2;
		func_223(iParam0, 1);
		iParam0->f_5 = sParam1;
	}
}

bool func_72()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_226())
	{
		return true;
	}
	return false;
}

bool func_73(var uParam0, var uParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_227(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_74(var uParam0, var uParam1, float fParam2, int iParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_228(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_75(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_76(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_229(iParam0);
		return func_230(iParam0, GET_HASH_KEY("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_77()
{
	func_231();
	func_232(-1, 0, 0, 0, 0);
	func_233(60, 0, 1);
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_82(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_83(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_84(var uParam0)
{
	func_53(uParam0, 0f);
}

bool func_85(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_234(iParam0, uParam1))
		{
			if (!func_175(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_31(uParam2, 0, 0, 1, 0);
				func_235(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_175(uParam1->f_10, 1))
		{
			func_236(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_237(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_86(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_175(iParam4, 32);
		func_168(iParam1, uParam2, 0);
		iVar5 = func_238(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_31(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_175(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_175(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_175(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_175(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_175(iParam4, 8388608) || func_175(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_175(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_175(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_89(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_89(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_175(iParam4, 67108864))
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
				iParam6 = func_239(uParam0);
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
			if (func_175(iParam4, 268435456))
			{
				iVar8 = func_240(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_241(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_89(iParam1, 23))
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
			if (func_175(iParam4, 2) || func_175(iParam4, 16))
			{
				func_88(*uParam0, 1, 1);
			}
			else
			{
				func_88(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_87(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_88(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_89(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_90(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_242(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_91(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_243(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_175(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_92(int iParam0)
{
	if (func_175(iParam0, 4))
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
	if (func_175(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_175(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_93(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_75(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_244(Global_35)) || func_245(Global_35)) || func_246(Global_35));
	fVar12 = -1f;
	if (func_52(&(iParam1->f_13)))
	{
		fVar12 = func_54(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_166((uParam4[iVar0 /*17*/])->f_6);
		func_247(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_248(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_249(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_31(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_250(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_168(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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
					if (func_251(iParam1, fParam6, iParam1->f_9))
					{
						func_84(&(iParam1->f_18));
						if (bVar6)
						{
							func_250(uParam4, 0, 0);
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
		func_252(iParam1, fParam2);
	}
	return bVar5;
}

void func_94(var uParam0)
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

void func_95(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_253(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_252(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_96(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_254(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_255(iParam1, 0);
				func_168(iParam1, uParam2, func_89(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_97(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_84(&(iParam1->f_18));
			return false;
		}
		else if (func_52(&(iParam1->f_18)))
		{
			func_57(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_52(&(iParam1->f_18)))
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
	return func_256(&(iParam1->f_18), fParam2);
	return true;
}

void func_98(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_247(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_99(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

char* func_100()
{
	return "script@specialped@pdshr_soothsayer@ig@ig1_offer_services@pdshr_ig1";
}

char* func_101()
{
	return "script@specialped@pdshr_soothsayer@ig@ig1_offer_services@pdshr_ig1_offer_services";
}

void func_102(var uParam0)
{
	struct<11> Var0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_166))
	{
		Var0 = { func_257(uParam0, 0) };
		uParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_167))
	{
		Var0 = { func_257(uParam0, 1) };
		uParam0->f_167 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_168))
	{
		Var0 = { func_257(uParam0, 2) };
		uParam0->f_168 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_169))
	{
		Var0 = { func_257(uParam0, 3) };
		uParam0->f_169 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_170))
	{
		Var0 = { func_257(uParam0, 4) };
		uParam0->f_170 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_170, 1);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_170, 0);
	}
}

int func_103(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_258(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_104()
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

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return GET_HASH_KEY("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_259())
	{
		iVar2 = func_259();
	}
	iVar5 = func_260(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_261(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_261(iVar6) == 0)
			{
				return func_262(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_261(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_261(iVar6) == 0)
			{
				return func_262(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_262(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_107(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_108(int iParam0)
{
	if (!func_107(iParam0))
	{
		return -1;
	}
	return func_263(iParam0);
}

int func_109(int iParam0)
{
	if (!func_107(iParam0))
	{
		return -1;
	}
	return func_264(iParam0);
}

void func_110(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_265(uParam0, iParam1, sParam2))
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

void func_111(var uParam0)
{
	func_112(uParam0, 0);
	func_127(uParam0, 0);
	func_123(uParam0, 1);
	func_119(uParam0, 1);
	func_266(uParam0, 0);
	func_120(uParam0, 1);
	func_267(uParam0, 1, 1, 1);
}

void func_112(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 16384);
	}
	else
	{
		func_235(&(uParam0->f_1), 16384);
	}
}

void func_113(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 131072);
	}
	else
	{
		func_235(&(uParam0->f_1), 131072);
	}
}

void func_114(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 4);
	}
	else
	{
		func_237(uParam0, 4);
	}
}

void func_115(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 8);
	}
	else
	{
		func_235(&(uParam0->f_1), 8);
	}
}

void func_116(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 8);
	}
	else
	{
		func_237(uParam0, 8);
	}
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 32);
	}
	else
	{
		func_237(uParam0, 32);
	}
}

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 64);
	}
	else
	{
		func_237(uParam0, 64);
	}
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 16);
	}
	else
	{
		func_237(uParam0, 67108864);
		func_237(uParam0, 16);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 256);
	}
	else
	{
		func_237(uParam0, 256);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 524288);
	}
	else
	{
		func_237(uParam0, 524288);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 2);
	}
	else
	{
		func_237(uParam0, 2);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 256);
	}
	else
	{
		func_235(&(uParam0->f_1), 256);
	}
}

void func_124(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 4);
	}
	else
	{
		func_235(&(uParam0->f_1), 4);
	}
}

void func_125(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 16);
	}
	else
	{
		func_235(&(uParam0->f_1), 16);
	}
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 2);
	}
	else
	{
		func_235(&(uParam0->f_1), 2);
	}
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 2048);
	}
	else
	{
		func_235(&(uParam0->f_1), 2048);
	}
}

void func_128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 1);
	}
	else
	{
		func_235(&(uParam0->f_1), 1);
	}
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 128);
	}
	else
	{
		func_237(uParam0, 128);
	}
}

struct<4> func_130(var uParam0, int iParam1)
{
	struct<4> Var0;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			if (func_34(uParam0->f_179, 8388608))
			{
				Var0 = { 1784.089f, -946.648f, 40.7225f };
				Var0.f_3 = 254.7072f;
			}
			else
			{
				Var0 = { 2440.456f, -462.537f, 40.9104f };
				Var0.f_3 = 153.3627f;
			}
			break;
	}
	return Var0;
}

int func_131(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_268(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_268(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_133(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_269(iParam0, iParam1))
		{
			if (func_270(iParam0, iParam1))
			{
				if (func_271(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_272(iParam0);
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

void func_134(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = iParam0;
}

void func_135(var uParam0)
{
	uParam0->f_312 = 0;
	uParam0->f_312.f_1 = 5;
	uParam0->f_312.f_2 = GET_HASH_KEY("TIMID");
	uParam0->f_312.f_3 = 3;
	uParam0->f_312.f_4 = 0;
	uParam0->f_312.f_5 = 1;
	uParam0->f_312.f_6 = 0;
}

void func_136(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_38(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_38(uParam0))
		{
		}
	}
}

void func_137(var uParam0)
{
	func_273(&(uParam0->f_243[0 /*17*/]), "INTERACT_GREET", 100, "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
	func_274(&(uParam0->f_243[1 /*17*/]), "INTERACT_INSULT", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_243(uParam0->f_160[0], &(uParam0->f_243), 15f, 1, 0, 0, 0, 0, 0);
	func_70(&(uParam0->f_243[0 /*17*/]), 0, 0);
	func_70(&(uParam0->f_243[1 /*17*/]), 0, 0);
	uParam0->f_320 = 3;
	func_63(&(uParam0->f_179), 524288);
}

void func_138(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

bool func_139(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

void func_140(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;

	vVar0 = { func_130(uParam0, 0) };
	vVar4 = { 0f, 0f, 0f };
	vVar4.f_2 = vVar0.f_3;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "SOOTHSAYER", uParam0->f_160[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_177, "p_walkingStick01x", uParam0->f_162[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_177, vVar0, vVar4, 2);
}

float func_141(var uParam0)
{
	if (!func_52(uParam0))
	{
		return 0f;
	}
	if (func_180(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_177() - uParam0->f_1);
}

int func_142(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 15;
			break;
		case 1:
			iVar0 = 16;
			break;
		case 2:
			iVar0 = 17;
			break;
		case 3:
			iVar0 = 18;
			break;
		case 4:
			iVar0 = 19;
			break;
		case 5:
			iVar0 = 20;
			break;
	}
	return iVar0;
}

int func_143(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 27;
			break;
		case 1:
			iVar0 = 28;
			break;
		case 2:
			iVar0 = 29;
			break;
		case 3:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 31;
			break;
		case 5:
			iVar0 = 32;
			break;
	}
	return iVar0;
}

int func_144(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		case 1:
			iVar0 = 22;
			break;
		case 2:
			iVar0 = 23;
			break;
		case 3:
			iVar0 = 24;
			break;
		case 4:
			iVar0 = 25;
			break;
		case 5:
			iVar0 = 26;
			break;
	}
	return iVar0;
}

void func_145(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;

	vVar0 = { func_130(uParam0, 0) };
	vVar4 = { 0f, 0f, 0f };
	vVar4.f_2 = vVar0.f_3;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "SOOTHSAYER", uParam0->f_160[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "p_walkingStick01x", uParam0->f_162[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "COINSTACK", uParam0->f_162[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_178, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_178, vVar0, vVar4, 2);
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_178, func_3(41));
}

int func_146(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 34;
			break;
		case 2:
			iVar0 = 35;
			break;
		case 3:
			iVar0 = 36;
			break;
		case 4:
			iVar0 = 37;
			break;
		case 5:
			iVar0 = 38;
			break;
		case 6:
			iVar0 = 39;
			break;
		case 7:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_147(bool bParam0)
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

int func_148(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 3;
			break;
		case 4:
			iVar0 = 4;
			break;
		case 5:
			iVar0 = 5;
			break;
		case 6:
			iVar0 = 6;
			break;
		case 7:
			iVar0 = 7;
			break;
		case 8:
			iVar0 = 8;
			break;
		case 9:
			iVar0 = 9;
			break;
		case 10:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 11;
			break;
		case 12:
			iVar0 = 12;
			break;
		case 13:
			iVar0 = 13;
			break;
		case 14:
			iVar0 = 14;
			break;
	}
	return iVar0;
}

bool func_149(int iParam0, int iParam1)
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

void func_150(var uParam0, var uParam1, var uParam2)
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

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *uParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_151(int* iParam0, char* sParam1)
{
	if (func_166(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_275(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_224(iParam0, 1);
}

bool func_152(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_276(cParam1, cParam0);
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

void func_153(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_277(iParam0);
	if (bParam3)
	{
		func_278(iParam0, sParam1, iParam2);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_173() != -1)
	{
		return;
	}
	if ((Global_36616 && func_279(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_280(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_281(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_282(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_281(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

float func_155(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_156(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 42;
			break;
		case 1:
			iVar0 = 43;
			break;
		case 2:
			iVar0 = 44;
			break;
		case 3:
			iVar0 = 45;
			break;
		case 4:
			iVar0 = 46;
			break;
		case 5:
			iVar0 = 47;
			break;
		case 6:
			iVar0 = 48;
			break;
		case 7:
			iVar0 = 49;
			break;
	}
	return iVar0;
}

struct<2> func_157(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_158(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_159(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_160(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 50;
			break;
		case 1:
			iVar0 = 51;
			break;
		case 2:
			iVar0 = 52;
			break;
		case 3:
			iVar0 = 53;
			break;
		case 4:
			iVar0 = 54;
			break;
		case 5:
			iVar0 = 51;
			break;
		case 6:
			iVar0 = 52;
			break;
		case 7:
			iVar0 = 53;
			break;
		case 8:
			iVar0 = 54;
			break;
		case 9:
			iVar0 = 50;
			break;
		case 10:
			iVar0 = 51;
			break;
		case 11:
			iVar0 = 52;
			break;
		case 12:
			iVar0 = 53;
			break;
		case 13:
			iVar0 = 54;
			break;
		case 14:
			iVar0 = 50;
			break;
	}
	return iVar0;
}

void func_161(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_162(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4)
{
	func_283(uParam0, iParam2, uParam3, 1, 1);
	func_284(*uParam0, uParam1, iParam4);
}

int func_163(var uParam0)
{
	if (!func_52(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_180(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_209() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_164(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_285(&Global_0, 8);
	}
	if (!func_286() || func_173() != -1)
	{
		return;
	}
	func_285(&Global_0, 1);
}

void func_165()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

bool func_166(int iParam0)
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

void func_167(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_166(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_287(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_288(iVar0);
	*uParam0 = 0;
}

void func_168(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_167(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_67(iParam0, 0);
		}
	}
}

void func_169(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_170(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_171(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_289(vParam0))
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
			if (func_290(vVar2, vParam0, 2f, 1))
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

int func_172()
{
	return Global_1900383.f_393;
}

int func_173()
{
	return Global_1572887.f_12;
}

bool func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_291(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_175(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_177()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_180(var uParam0)
{
	return func_176(*uParam0, 2);
}

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_182(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_183(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_174(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_184(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_292(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_185(int iParam0)
{
	int iVar0;

	iVar0 = func_104();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case GET_HASH_KEY("HIGHPRESSURE"):
				case GET_HASH_KEY("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case GET_HASH_KEY("OVERCAST"):
				case GET_HASH_KEY("HIGHPRESSURE"):
				case GET_HASH_KEY("OVERCASTDARK"):
				case GET_HASH_KEY("CLOUDS"):
				case GET_HASH_KEY("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case GET_HASH_KEY("DRIZZLE"):
				case GET_HASH_KEY("OVERCAST"):
				case GET_HASH_KEY("FOG"):
				case GET_HASH_KEY("HIGHPRESSURE"):
				case GET_HASH_KEY("OVERCASTDARK"):
				case GET_HASH_KEY("SNOWLIGHT"):
				case GET_HASH_KEY("CLOUDS"):
				case GET_HASH_KEY("MISTY"):
				case GET_HASH_KEY("SUNNY"):
				case GET_HASH_KEY("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case GET_HASH_KEY("DRIZZLE"):
				case GET_HASH_KEY("THUNDER"):
				case GET_HASH_KEY("OVERCAST"):
				case GET_HASH_KEY("FOG"):
				case GET_HASH_KEY("SHOWER"):
				case GET_HASH_KEY("SNOW"):
				case GET_HASH_KEY("HIGHPRESSURE"):
				case GET_HASH_KEY("SLEET"):
				case GET_HASH_KEY("OVERCASTDARK"):
				case GET_HASH_KEY("CLOUDS"):
				case GET_HASH_KEY("RAIN"):
				case GET_HASH_KEY("MISTY"):
				case GET_HASH_KEY("SUNNY"):
				case GET_HASH_KEY("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case GET_HASH_KEY("FOG"):
				case GET_HASH_KEY("MISTY"):
					return true;
			}
			break;
	}
	return false;
}

int func_186(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_228(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!func_293(iVar1, 0))
		{
			func_294(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

bool func_187()
{
	return Global_1392040.f_6;
}

bool func_188()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

void func_189(var uParam0, bool bParam1, int iParam2)
{
	func_295(iParam2);
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
		uParam0->f_13 = func_296(0);
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
							func_235(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_297(1))
						{
							func_235(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_297(1) || *uParam0 & 8192 != 0))
				{
					func_237(uParam0, 33554432);
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
			if (func_298(uParam0))
			{
				uParam0->f_15 = func_209();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_209() - uParam0->f_15) > 500)
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
	func_299(uParam0);
}

bool func_190(int iParam0, var uParam1)
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
			if (!func_300(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_301(iParam0, iVar2) <= func_302(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_191(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_303(iParam2, 1, 1, 1, 0))
	{
		func_235(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_304(uParam1, 1);
	func_305();
}

bool func_192(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_306(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_307(uParam1);
			if (func_308(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_309(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_304(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_304(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_193(int iParam0, int iParam1, var uParam2)
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
	if (func_310(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_307(uParam2);
		if (func_308(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_309(uParam2)
				{
					func_304(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_194(int iParam0, var uParam1)
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
	if (func_300(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_309(uParam1)
		{
			fVar3 = func_307(uParam1);
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

int func_195(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_311(bParam1, bParam2, bParam3);
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

bool func_196(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_209();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_197(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_312(uParam2);
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
			if (func_205(uParam2, iParam1))
			{
				func_304(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_198(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_313(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_205(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_304(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_199(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_314(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_304(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_304(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_315(iParam1, vVar0, vVar4))
					{
						func_304(uParam2, 1);
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
					func_304(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_315(iParam1, vVar0, vVar7))
					{
						func_304(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_200(int iParam0, var uParam1)
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
		if (!func_300(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_316(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_317(Global_1935630.f_34[iVar0]))
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
			if (func_318(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_319(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_320(uParam1, iParam0, fVar1, iVar0))
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

bool func_201(int iParam0, var uParam1)
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

bool func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_209();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_203(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_321(iVar0, &iVar2))
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
	if (func_322(iVar0, iParam0))
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

int func_204(var uParam0, int iParam1)
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

bool func_205(var uParam0, int iParam1)
{
	if (func_323(uParam0))
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

bool func_206(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_155(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_207()
{
}

bool func_208(var uParam0, int iParam1)
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
		if (func_324(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_209();
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
						if (func_325(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_209();
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

int func_209()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_210()
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
	if ((func_209() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_211(var uParam0, int iParam1)
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
	fVar0 = func_302(uParam0);
	if (uParam0->f_12 > func_326(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_327(iParam1);
	iVar1 = func_328(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_212(int iParam0, int iParam1, var uParam2)
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
	return func_329(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_213(int iParam0, var uParam1)
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
		if (func_330(iParam0, uParam1, 1))
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
					if (!func_331(uParam1, iParam0))
					{
						if (func_325(iVar4, Global_36, 1) < 7f)
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

bool func_214(int iParam0, var uParam1)
{
	if (!func_332(0))
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

bool func_215(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_209();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_216(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_217(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_209();
	}
	else if (func_209() - uParam1->f_4) > func_333(uParam1)
	{
		return func_334(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_218(var uParam0, int iParam1)
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

float func_219(float fParam0, float fParam1, float fParam2)
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

int func_220(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_335(iVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(iVar1, "bIgnoreThisPed"))
				{
					if (!func_336(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

bool func_221(int iParam0, bool bParam1)
{
	if (bParam1 && !func_166(iParam0))
	{
		return false;
	}
	return !func_337(iParam0, 4);
}

bool func_222(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_223(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_224(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_225(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_166(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

bool func_226()
{
	if (func_338(Global_35) || func_339(Global_35))
	{
		return true;
	}
	return false;
}

bool func_227(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_228(var uParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*uParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_340(Global_35, *uParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

int func_229(int iParam0)
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

var func_230(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_231()
{
	if (!func_341(Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
		}
	}
	func_342(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_232(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_343() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_341(iVar1) && !func_344(iVar1, iParam2)) && (!bParam3 || !func_345(iVar1))) && (!bParam4 || !func_346(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_347(iVar0);
			}
		}
		iVar0++;
	}
}

void func_233(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_348(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

bool func_234(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_349((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_235(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_236(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_253(uParam0[iVar0 /*17*/]))
		{
			func_223(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_237(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_238(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_350(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_166((uParam2[iVar0 /*17*/])->f_6))
		{
			func_223(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_239(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_351(*uParam0);
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

int func_240(var uParam0, int iParam1)
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

void func_241(int* iParam0, int* iParam1)
{
	if (!func_89(iParam0, 23))
	{
		if (iParam1->f_7 == GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_223(iParam1, 19);
			func_255(iParam0, 23);
			func_352(iParam1, 2);
		}
	}
}

bool func_242(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_353(16))
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
					func_354(16);
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

void func_243(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_350(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_244(int iParam0)
{
	return (func_355(iParam0, 4) || func_355(iParam0, 5));
}

int func_245(int iParam0)
{
	return func_355(iParam0, 7);
}

int func_246(int iParam0)
{
	return func_355(iParam0, 6);
}

void func_247(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_253(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_350(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_248(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_356(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_221(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_357(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_357(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_358(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_249(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_359(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_360(iParam1, 1))
	{
		func_361(iParam1, 1);
		return true;
	}
	return false;
}

void func_250(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_251(int* iParam0, float fParam1, bool bParam2)
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

void func_252(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_253(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_254(int iParam0)
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

void func_255(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_256(var uParam0, float fParam1)
{
	if (func_362(uParam0, fParam1))
	{
		func_57(uParam0);
		return 1;
	}
	return 0;
}

struct<11> func_257(var uParam0, int iParam1)
{
	struct<11> Var0;
	struct<4> Var11;

	Var11 = { func_130(uParam0, 0) };
	switch (iParam1)
	{
		case 0:
			Var0 = GET_HASH_KEY("VOLSPHERE");
			Var0.f_1 = { Var11 };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var11, Var11.f_3, 0f, 2.2f, 0f) };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 1.5f, 3f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = GET_HASH_KEY("VOLBOX");
			Var0.f_1 = { Var11 };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 9.33105f, 4.768036f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var11, Var11.f_3, 0f, 5f, 0f) };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 8f, 6f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { Var11 };
			Var0.f_4 = { 0f, 0f, Var11.f_3 };
			Var0.f_7 = { 1.85f, 1.85f, 3f };
			Var0.f_10 = "HorseBlockVolume";
			break;
	}
	return Var0;
}

int func_258(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_289(vParam0))
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
		if (func_363(vParam0))
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
	func_364(iVar0, bParam8);
	return iVar0;
}

int func_259()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_261(int iParam0)
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

int func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_365(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_259())
	{
		return -1;
	}
	iVar0 = func_260(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_366(iVar1, 0);
	func_367(iVar1, 0);
	func_169(iVar1, 0);
	func_170(iVar1, 0);
	func_368(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_369(iVar1, iParam4);
	}
	return iVar1;
}

int func_263(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_264(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

bool func_265(var uParam0, int iParam1, char* sParam2)
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

void func_266(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_237(&(uParam0->f_1), 128);
	}
	else
	{
		func_235(&(uParam0->f_1), 128);
	}
}

void func_267(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_235(uParam0, 268435456);
	}
	else
	{
		func_237(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_235(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_237(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_235(uParam0, 536870912);
	}
	else
	{
		func_237(uParam0, 536870912);
	}
}

int func_268(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_370(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_269(int iParam0, int iParam1)
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

bool func_270(int iParam0, int iParam1)
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

bool func_271(int iParam0, int iParam1)
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
	if (!func_269(iParam0, iVar0))
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

void func_272(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_273(int* iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_223(iParam0, 1);
	func_274(iParam0, sParam1, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_274(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_166(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_225(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_275(iParam0->f_6, iParam0->f_5, 0);
			}
			func_357(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_151(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_275(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_166(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_276(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
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

void func_277(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_75(1) < iParam0)
	{
		iParam0 = func_75(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_157(GET_HASH_KEY("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_278(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_371(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 1, GET_HASH_KEY("COLOR_RED"), 0, 0, 0, 1);
}

int func_279(int iParam0)
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

int func_280(int iParam0)
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

void func_281(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_372();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_373(iParam0);
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
	if (func_374(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_49())
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
	Global_40.f_11095.f_35 = func_375(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_372();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_376(iVar1);
		func_378(func_377(), 0, 4000);
		func_379(Global_40.f_11095.f_35);
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
		func_380(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_159(func_157(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_280(14))
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
					sParam4 = func_381(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_371(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_371(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_159(func_157(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_280(4))
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
					sParam4 = func_381(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_371(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_371(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_157(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_382(10, 1);
	}
}

void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_283(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_87(uParam0);
		func_32(iParam1, uParam2);
	}
	func_383(*uParam0, 1, bParam4);
}

void func_284(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (*uParam1 != 0)
		{
			func_383(iParam0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if (uParam1->f_5)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, false);
					}
					if (uParam1->f_6)
					{
						TASK::CLEAR_PED_TASKS(iParam2, true, false);
					}
					PED::SET_PED_OWNS_ANIMAL(iParam0, iParam2, false);
					PED::SET_PED_CONFIG_FLAG(iParam0, 167, true);
					PED::SET_PED_CONFIG_FLAG(iParam0, 321, true);
					PED::SET_PED_CONFIG_FLAG(iParam2, 178, true);
				}
			}
			func_384(iParam0, uParam1, iParam2);
			if (uParam1->f_2 != GET_HASH_KEY("NONE"))
			{
				PED::_0x24C82EF607105FAA(iParam0, uParam1->f_2);
			}
			if (uParam1->f_4 == 0)
			{
				iVar0 = Global_35;
				iVar1 = iParam0;
			}
			else
			{
				iVar0 = iParam0;
				iVar1 = Global_35;
			}
			EVENT::_0x7C511E91738A0828(iVar0, iVar1, *uParam1, 0);
		}
	}
}

void func_285(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_286()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_287(int iParam0)
{
	return iParam0;
}

void func_288(int iParam0)
{
	if (!func_385(iParam0))
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

bool func_289(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_290(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_291(int iParam0)
{
	if (!func_107(iParam0))
	{
		return -1;
	}
	return func_386(iParam0);
}

int func_292(int iParam0)
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
		iVar0 = func_386(iParam0);
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

bool func_293(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

void func_294(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_149(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

void func_295(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_387();
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
			func_388(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_296(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_297(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_389(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_298(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_173() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_390(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_390(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_328(iVar0) == -1)
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

void func_299(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_391(uParam0);
	}
}

bool func_300(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_328(iParam2);
	}
	else
	{
		iVar1 = func_327(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_328(iParam0);
	}
	else
	{
		iVar0 = func_327(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_175(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
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

float func_301(int iParam0, int iParam1)
{
	return func_155(iParam0, iParam1, 1, 1);
}

float func_302(var uParam0)
{
	return uParam0->f_26;
}

bool func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_304(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_235(uParam0, 134217728);
	}
	else
	{
		func_237(uParam0, 134217728);
	}
}

void func_305()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_306(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
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
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_155(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_392(iVar0, 0)))
		{
			if (func_393(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_307(var uParam0)
{
	return uParam0->f_17;
}

bool func_308(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_175(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_309(var uParam0)
{
	return uParam0->f_18;
}

bool func_310(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
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
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_392(iVar0, 0)))
		{
			if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_311(bool bParam0, bool bParam1, bool bParam2)
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

float func_312(var uParam0)
{
	return uParam0->f_23;
}

int func_313(var uParam0)
{
	return uParam0->f_21;
}

int func_314(var uParam0)
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

bool func_315(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_395(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
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

int func_316(int iParam0)
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
	if (func_396(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_317(int iParam0)
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

bool func_318(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_397(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_319(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_397(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_320(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_397(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_321(int iParam0, int iParam1)
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

bool func_322(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_398(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_323(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_324(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_325(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_325(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_326(var uParam0)
{
	return uParam0->f_24;
}

int func_327(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_328(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_329(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_321(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_155(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_155(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_330(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_389(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_331(uParam1, iVar0))
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
				if (!bParam2 || !func_331(uParam1, iVar1))
				{
					if (func_325(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_331(var uParam0, int iParam1)
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

int func_332(int iParam0)
{
	if (func_49())
	{
		return 0;
	}
	return func_399(Global_1347702[58 /*49*/].f_15, 1);
}

int func_333(var uParam0)
{
	return uParam0->f_20;
}

int func_334(int iParam0, var uParam1, bool bParam2, float fParam3)
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
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_335(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_400(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_401(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_336(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_337(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_338(int iParam0)
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
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
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
		iVar2 = func_402(iVar9);
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
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_339(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_172();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

bool func_340(int iParam0, int iParam1, bool bParam2)
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

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_342(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_343()
{
	return Global_1310750.f_16037;
}

bool func_344(int iParam0, int iParam1)
{
	if (!func_341(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_345(int iParam0)
{
	if (!func_341(iParam0))
	{
		return false;
	}
	if (func_403(64) && func_404(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_346(int iParam0)
{
	if (!func_341(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_347(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_341(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_405(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_406(iParam0, iParam1, bParam2);
}

int func_349(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_350(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_166(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_167(&(iParam1->f_6), 0, 1);
	}
	if (!func_166(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_253(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_407(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_166(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_358(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_408(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_409(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_225(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_408(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_357(iParam1->f_6, 0, 1);
				}
				else
				{
					func_357(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_351(int iParam0)
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

void func_352(int* iParam0, int iParam1)
{
	if (!func_222(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_223(iParam0, 14);
		}
	}
}

bool func_353(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_354(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_355(int iParam0, int iParam1)
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

bool func_356(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_357(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_166(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (bParam1)
	{
		func_410(iParam0, 4);
		func_411(iVar0, 1);
		func_412(iVar0, 1);
	}
	else
	{
		func_413(iParam0, 4);
		func_412(iVar0, 0);
	}
}

void func_358(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_166(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	func_408(iParam0, 18, 0, 1);
	func_408(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_359(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_166(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_360(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_166(iParam0))
	{
		return false;
	}
	iVar0 = func_287(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_361(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_166(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_362(var uParam0, float fParam1)
{
	if (!func_52(uParam0))
	{
		return false;
	}
	if (func_54(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_363(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_364(int iParam0, bool bParam1)
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

bool func_365(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_366(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_414(iParam0);
	}
	else
	{
		func_415(iParam0, iParam1);
	}
	func_416();
}

void func_367(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_368(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_369(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

void func_370(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_417(iParam1))
		{
			func_133(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_418(iParam0, 0, 1);
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
			func_419(iParam0, 0);
			bVar0 = true;
		}
		func_420(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

var func_371(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_421(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_372()
{
	int iVar0;

	iVar0 = func_422();
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

int func_373(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_173() != -1)
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
	fVar1 = func_83(MISC::ABSF(fVar1) < 1f, func_83(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_374(int iParam0)
{
	if (!func_423(iParam0))
	{
		return false;
	}
	return func_424(iParam0);
}

int func_375(int iParam0, int iParam1, int iParam2)
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

int func_376(int iParam0)
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

int func_377()
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

void func_378(int iParam0, bool bParam1, int iParam2)
{
	func_425((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_426(iParam0);
}

void func_379(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_427(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_380(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_428(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_429(iVar5, &iVar2, &iVar0))
			{
				if (!func_430(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_431(iVar2);
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
							if (func_432(iVar2) == GET_HASH_KEY("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_372() <= -160;
								}
								else if (iVar0 == GET_HASH_KEY("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_372() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_433();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

char* func_381(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case GET_HASH_KEY("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case GET_HASH_KEY("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case GET_HASH_KEY("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case GET_HASH_KEY("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case GET_HASH_KEY("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case GET_HASH_KEY("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case GET_HASH_KEY("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case GET_HASH_KEY("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case GET_HASH_KEY("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case GET_HASH_KEY("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case GET_HASH_KEY("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case GET_HASH_KEY("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case GET_HASH_KEY("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case GET_HASH_KEY("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case GET_HASH_KEY("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case GET_HASH_KEY("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case GET_HASH_KEY("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_434(iParam0))
	{
		return 0;
	}
	if (!func_286())
	{
		return 0;
	}
	if (!func_435(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == GET_HASH_KEY("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_383(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_384(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (uParam1->f_3 != 0)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (uParam1->f_5)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				if (uParam1->f_3 != 3)
				{
					TASK::TASK_MOUNT_ANIMAL(0, iParam2, 20000, -1, 1f, 1, 0, 0);
				}
			}
		}
		switch (uParam1->f_3)
		{
			case 1:
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				break;
			case 2:
				TASK::TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
				break;
			case 3:
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 16, true);
				TASK::TASK_FLEE_PED(0, Global_35, uParam1->f_1, 0, 80f, -1, iParam2);
				break;
		}
		func_436(iParam0, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

bool func_385(int iParam0)
{
	return func_337(iParam0, 2);
}

int func_386(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_437(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_387()
{
	if (func_438())
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

void func_388(var uParam0, var uParam1)
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

bool func_389(bool bParam0, int iParam1, int iParam2)
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

int func_390(var uParam0)
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

void func_391(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_237(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_235(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_392(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_393(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_394(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_395(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_396(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_397(int iParam0)
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

int func_398(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_399(int iParam0, bool bParam1)
{
	switch (func_291(iParam0))
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

bool func_400(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_439(), 1))
	{
		return true;
	}
	return false;
}

int func_401(int iParam0, bool bParam1)
{
	return func_440(iParam0, Global_1894899.f_2, bParam1);
}

int func_402(int iParam0)
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

bool func_403(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_404(int iParam0)
{
	return func_344(iParam0, Global_1310750.f_16072 | 64);
}

void func_405(int iParam0)
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

void func_406(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479.f_9)
	{
		return;
	}
	Global_1327479.f_4 = (Global_1327479.f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750.f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479.f_5 = (Global_1327479.f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_407(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_337(iVar0, 2))
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
				func_441(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_408(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_166(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_409(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_166(iParam0))
	{
		return;
	}
	iVar0 = func_287(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_410(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_411(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_337(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_412(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_413(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

int func_414(int iParam0)
{
	int iVar0;

	iVar0 = func_437(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_442(iVar0);
}

int func_415(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888.f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888.f_40501 == 0)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40501)
	{
		if (iParam0 == Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			func_443(iVar2);
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888.f_40501 < 31)
	{
		iVar2 = Global_1058888.f_40501;
		Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		if (Global_1058888.f_40501 > 32)
		{
			Global_1058888.f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_416()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

bool func_417(int iParam0)
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

void func_418(int iParam0, int iParam1, bool bParam2)
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

void func_419(int iParam0, bool bParam1)
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

void func_420(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

void func_421(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

int func_422()
{
	return Global_40.f_11095.f_35;
}

bool func_423(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_424(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_425(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_444(bParam1);
	}
}

void func_426(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("HONORMETERVALUE"), iParam0);
}

char* func_427(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_428(int iParam0)
{
	vector3 vVar0;

	if (!func_445(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_429(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_445(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_430(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_431(int iParam0)
{
	return iParam0;
}

int func_432(int iParam0)
{
	vector3 vVar0;

	if (!func_430(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_433()
{
	int iVar0;

	iVar0 = func_372();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return GET_HASH_KEY("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return GET_HASH_KEY("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return GET_HASH_KEY("SHOP_HONOR_AMORAL");
}

bool func_434(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_435(int iParam0, int iParam1, int iParam2)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_CHP1");
			break;
		case 1:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_CHP2");
			break;
		case 2:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_CHP3");
			break;
		case 3:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_CHP4");
			break;
		case 4:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_CHP5");
			break;
		case 5:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_HONOR");
			break;
		case 11:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_RC");
			break;
		case 12:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_BEAR");
			break;
		case 15:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_ART");
			break;
		case 16:
			*iParam1 = GET_HASH_KEY("SP_ACHIEVEMENTS");
			*iParam2 = GET_HASH_KEY("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

void func_436(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_437(int iParam0)
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

bool func_438()
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

int func_439()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_440(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_446(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_447(iParam0, uVar0, iVar1, bParam2);
}

void func_441(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_411(iParam0, 1);
	func_412(iParam0, 1);
	func_413(iParam0, 128);
}

int func_442(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888.f_40501 < 32)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var1 };
	}
	Global_1058888.f_40501 = (Global_1058888.f_40501 - 1);
	if (Global_1058888.f_40501 < 0)
	{
		Global_1058888.f_40501 = 0;
	}
	return 1;
}

int func_443(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888.f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 /*2*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1058888.f_40501.f_1[iParam0 /*2*/] = { Var1 };
	Global_1058888.f_40501++;
	if (Global_1058888.f_40501 > 32)
	{
		Global_1058888.f_40501 = 32;
	}
	return 1;
}

void func_444(bool bParam0)
{
	func_448(bParam0);
	Global_1955569.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

bool func_445(int iParam0, var uParam1)
{
	if (!func_449(iParam0))
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

bool func_446(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_173() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_447(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_450(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_451(iVar2)))
		{
			if (func_451(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_448(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(GET_HASH_KEY("HONORMETERVISIBLE"), bParam0);
}

bool func_449(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_450(int iParam0)
{
	if (!func_452(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_451(int iParam0)
{
	if (!func_452(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_452(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

