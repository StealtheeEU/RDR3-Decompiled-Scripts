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
	struct<284> Local_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1419055257, -1914893189, -615159064, -260277067, 1689938120, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
#endregion

void __EntryFunction__()
{
	struct<11> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		while (true)
		{
			BUILTIN::WAIT(0);
			if (func_1(&(Local_14.f_158[0])))
			{
				func_2(&Local_14, 1);
			}
		}
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_3(&Local_14);
		func_4(&Local_14, 3);
		if ((((func_5(14, Local_14.f_158[0], 1, 1) && Local_14 > 2) && Local_14 < 49) || func_6(29, 1)) || func_7(&Local_14))
		{
			if (!func_8(Local_14.f_180, 1024))
			{
				if (Local_14 == 3 || Local_14 == 4)
				{
					func_10(&Local_14, &(Local_14.f_178), func_9(), 0, 1, 0);
				}
				else if (Local_14 == 50 || Local_14 == 51)
				{
					func_10(&Local_14, &(Local_14.f_178), func_11(), 0, 1, 0);
				}
				else if (Local_14 != 5)
				{
					func_10(&Local_14, &(Local_14.f_178), func_12(), 0, 1, 0);
				}
				else
				{
					func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0);
				}
			}
			else
			{
				func_14(&Local_14);
				func_15(14, 3, &(Local_14.f_158[0]), &(Local_14.f_137), &(Local_14.f_189), Local_14.f_175, 1097859072 /* Float: 15f */, 0);
				func_16(&Local_14);
				func_17(&Local_14);
				func_18(&Local_14);
				func_19(&Local_14);
				func_20(Local_14.f_158[0], &(Local_14.f_180), 256, 14, Local_14.f_175);
				func_21(Local_14.f_158[0], &(Local_14.f_180), 2048, 4096, 8192, "SPECIAL_PED_LIGHTWEIGHT_1_0", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "JoeBubble", "JoeConvo");
				func_22(&Local_14);
				switch (Local_14)
				{
					case 0:
						if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_178))
						{
							Local_14.f_178 = ANIMSCENE::_CREATE_ANIM_SCENE(func_23(), 0, func_24(), false, true);
						}
						if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_179))
						{
							Local_14.f_179 = ANIMSCENE::_CREATE_ANIM_SCENE(func_25(), 32, func_26(), false, true);
						}
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_178) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_179))
						{
							ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_178);
							ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_179);
							STREAMING::REQUEST_ANIM_DICT(func_27());
							STREAMING::REQUEST_ANIM_DICT(func_28());
							HUD::TEXT_BLOCK_REQUEST("SPJB");
							HUD::TEXT_BLOCK_REQUEST("SPJBAUD");
							HUD::TEXT_BLOCK_REQUEST("SPDEF");
							STREAMING::REQUEST_MODEL(Local_14.f_150, false);
							STREAMING::REQUEST_MODEL(Local_14.f_151, false);
							STREAMING::REQUEST_MODEL(Local_14.f_153, false);
							STREAMING::REQUEST_MODEL(Local_14.f_152, false);
							func_29(&Local_14);
							func_30(Local_14.f_163, "SP_JoeButler4_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
							POPULATION::_0xB56D41A694E42E86(Local_14.f_165, 2500607, 0, 0, -1, -1, 10);
							POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_165, 2238463, 0, 0, -1, -1, 0);
							Local_14.f_149 = func_32(14, 1, 9, func_31(14));
							if (!func_33(Local_14.f_149))
							{
							}
							if (func_34())
							{
								func_35(&(Local_14.f_1), Global_35, "JOHN", 0);
							}
							else
							{
								func_35(&(Local_14.f_1), Global_35, "ARTHUR", 0);
							}
							func_36(&(Local_14.f_283));
							func_37(&(Local_14.f_99));
							func_38(&(Local_14.f_99), 1);
							func_39(&(Local_14.f_99), 1);
							func_40(&(Local_14.f_99), 1);
							func_41(&(Local_14.f_99), 1);
							func_42(&(Local_14.f_99), 1);
							func_43(&(Local_14.f_99), 1);
							func_44(&(Local_14.f_99), 0);
							func_45(&(Local_14.f_99), 1);
							func_46(&(Local_14.f_99), 0);
							func_47(&(Local_14.f_99), 1);
							func_48(&(Local_14.f_99), 1);
							func_49(&(Local_14.f_99), 1);
							func_50(&(Local_14.f_99), 0);
							func_51(&(Local_14.f_99), 0);
							func_52(&(Local_14.f_99), 1);
							func_53(&(Local_14.f_99), 1);
							func_54(&(Local_14.f_99), 1);
							func_55(&(Local_14.f_99), 0);
							Local_14.f_182 = 23;
							if (func_33(Local_14.f_149))
							{
								if (!func_56(Local_14.f_149, 1))
								{
									func_57(&Local_14, 1);
								}
								else
								{
									func_57(&Local_14, 56);
								}
							}
						}
						break;
					case 1:
						PED::_0xED9582B3DA8F02B4(1);
						if (((((((((((ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_14.f_178, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_14.f_179, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(func_27())) && STREAMING::HAS_ANIM_DICT_LOADED(func_28())) && HUD::TEXT_BLOCK_IS_LOADED("SPJB")) && HUD::TEXT_BLOCK_IS_LOADED("SPJBAUD")) && HUD::TEXT_BLOCK_IS_LOADED("SPDEF")) && STREAMING::HAS_MODEL_LOADED(Local_14.f_150)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_151)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_153)) && STREAMING::HAS_MODEL_LOADED(Local_14.f_152)) && PED::_0x5C16855277819BBF() == 1)
						{
							func_57(&Local_14, 2);
						}
						break;
					case 2:
						if (((func_58(&(Local_14.f_158[0]), Local_14.f_150, 1320.167f, -1291.738f, 75.23311f, 68.748f, 1, 0, 1) && func_59(&(Local_14.f_160), Local_14.f_151, 1320.96f, -1290.723f, 75.27775f)) && func_59(&(Local_14.f_162), Local_14.f_153, 1320.96f, -1290.723f, 75.27775f)) && func_59(&(Local_14.f_161), Local_14.f_152, 1321.58f, -1290.592f, 76.39468f))
						{
							if (func_60(Local_14.f_158[0], 0))
							{
								func_61(Local_14.f_158[0], Local_14.f_154);
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_158[0], "special_ped_group", 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_158[0], true);
								func_35(&(Local_14.f_1), Local_14.f_158[0], "JOE_BUTLER", 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_158[0], 1320.167f, -1291.738f, 75.23311f, 68.748f, true, false, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 297, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 130, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 317, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 315, true);
								PED::SET_PED_CONFIG_FLAG(Local_14.f_158[0], 153, true);
								PED::_0xFD3C31A2E45671E7(Local_14.f_158[0], 43312);
								PED::SET_PED_LASSO_HOGTIE_FLAG(Local_14.f_158[0], 0, false);
								func_62(Local_14.f_158[0], 1);
								PED::_0x5BCF0B79D4F5DBA3(Local_14.f_158[0], 5f);
								PED::_0x2E5B5D1F1453E08E(Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOHN", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								func_63(&(Local_14.f_158[0]), &(Local_14.f_181), GET_HASH_KEY("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), 15f, 3600f);
								func_64(&Local_14, 0);
								PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_14.f_158[0], "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "JoeBubble");
								PED::_0x7C00CFC48A782DC0(Local_14.f_167, Local_14.f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
								if (!VOLUME::DOES_VOLUME_EXIST(Local_14.f_168))
								{
									Var0 = { func_65(5) };
									Local_14.f_168 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
									PED::_0x7C00CFC48A782DC0(Local_14.f_168, Local_14.f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
								}
								if (!VOLUME::DOES_VOLUME_EXIST(Local_14.f_169))
								{
									Var0 = { func_65(6) };
									Local_14.f_169 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
									PED::_0x7C00CFC48A782DC0(Local_14.f_169, Local_14.f_158[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
									VOLUME::_0x5B23DFF8E0948BB2(Local_14.f_169, 0);
									VOLUME::_0xBE551C2CC421185D(Local_14.f_169, 1);
								}
								if (!func_66(&(Local_14.f_172)))
								{
									Local_14.f_172 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(1320.674f, -1291.785f, 75.43612f, 1.25f, 1, 2, 0);
								}
								func_67(&(Local_14.f_180), 2048);
								func_68(Local_14.f_158[0], 14);
								func_57(&Local_14, 4);
							}
						}
						break;
					case 6:
						if (func_8(Local_14.f_180, 1))
						{
							func_57(&Local_14, 49);
						}
						else if ((func_8(Local_14.f_180, 2) && func_8(Local_14.f_180, 4)) && !func_8(Local_14.f_180, 16))
						{
							if (func_69(&(Local_14.f_179)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOHN", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop_end", false, false);
								if (func_10(&Local_14, &(Local_14.f_179), func_70(), 1, 0, 0))
								{
									ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_178, 0);
									func_57(&Local_14, 47);
								}
							}
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_158[0], -1527527524))
						{
							if (!func_71(&(Local_14.f_131)))
							{
								Local_14.f_174 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(2, 3));
								func_72(&(Local_14.f_131), 0f);
							}
							else if (func_73(&(Local_14.f_131)) > Local_14.f_174)
							{
								func_74(&Local_14, &(Local_14.f_182));
								func_75(&(Local_14.f_131));
							}
						}
						break;
					case 4:
						if (func_10(&Local_14, &(Local_14.f_178), func_24(), 1, 0, 0))
						{
							func_57(&Local_14, 37);
						}
						if (func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 38:
						if (func_8(Local_14.f_180, 1))
						{
							func_57(&Local_14, 49);
						}
						else if (func_8(Local_14.f_180, 16))
						{
							if (func_69(&(Local_14.f_178)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop_end", false, false);
								if (func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0))
								{
									ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_179, 0);
									func_57(&Local_14, 5);
								}
							}
						}
						else if (func_8(Local_14.f_180, 4))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_158[0], -1527527524))
							{
								func_57(&Local_14, 46);
							}
						}
						break;
					case 7:
						if (func_10(&Local_14, &(Local_14.f_178), func_76(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 8:
						if (func_10(&Local_14, &(Local_14.f_178), func_77(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 9:
						if (func_10(&Local_14, &(Local_14.f_178), func_78(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 10:
						if (func_10(&Local_14, &(Local_14.f_178), func_79(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 11:
						if (func_10(&Local_14, &(Local_14.f_178), func_80(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 12:
						if (func_10(&Local_14, &(Local_14.f_178), func_81(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 13:
						if (func_10(&Local_14, &(Local_14.f_178), func_82(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 14:
						if (func_10(&Local_14, &(Local_14.f_178), func_83(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 15:
						if (func_10(&Local_14, &(Local_14.f_178), func_84(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 16:
						if (func_10(&Local_14, &(Local_14.f_178), func_85(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 17:
						if (func_10(&Local_14, &(Local_14.f_178), func_86(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 18:
						if (func_10(&Local_14, &(Local_14.f_178), func_87(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 19:
						if (func_10(&Local_14, &(Local_14.f_178), func_88(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 20:
						if (func_10(&Local_14, &(Local_14.f_178), func_89(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 21:
						if (func_10(&Local_14, &(Local_14.f_178), func_90(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 22:
						if (func_10(&Local_14, &(Local_14.f_178), func_91(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 23:
						if (func_10(&Local_14, &(Local_14.f_178), func_92(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 24:
						if (func_10(&Local_14, &(Local_14.f_178), func_93(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 25:
						if (func_10(&Local_14, &(Local_14.f_178), func_94(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 26:
						if (func_10(&Local_14, &(Local_14.f_178), func_95(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 27:
						if (func_10(&Local_14, &(Local_14.f_178), func_96(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 28:
						if (func_10(&Local_14, &(Local_14.f_178), func_97(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 29:
						if (func_10(&Local_14, &(Local_14.f_178), func_98(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 30:
						if (func_10(&Local_14, &(Local_14.f_178), func_99(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 31:
						if (func_10(&Local_14, &(Local_14.f_178), func_100(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 32:
						if (func_10(&Local_14, &(Local_14.f_178), func_101(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 33:
						if (func_10(&Local_14, &(Local_14.f_178), func_102(), 1, 0, 1))
						{
							Local_14.f_183++;
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 34:
						if (func_10(&Local_14, &(Local_14.f_178), func_103(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 35:
						if (func_10(&Local_14, &(Local_14.f_178), func_104(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 36:
						if (func_10(&Local_14, &(Local_14.f_178), func_105(), 1, 0, 1))
						{
							Local_14.f_183 = (1 + Local_14.f_183);
							func_57(&Local_14, 37);
						}
						if ((func_8(Local_14.f_180, 4) && !func_8(Local_14.f_180, 16)) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_158[0])))
						{
							func_57(&Local_14, 37);
						}
						break;
					case 37:
						if ((func_8(Local_14.f_180, 2) && func_8(Local_14.f_180, 4)) && !func_8(Local_14.f_180, 16))
						{
							if (func_69(&(Local_14.f_179)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "JOHN", Global_35, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_179, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_179, "internal_loop_end", false, false);
								func_10(&Local_14, &(Local_14.f_179), func_70(), 1, 0, 0);
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_178, 0);
								func_57(&Local_14, 47);
							}
						}
						else if (func_10(&Local_14, &(Local_14.f_178), func_106(), 0, 1, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0))
						{
							func_57(&Local_14, 6);
						}
						break;
					case 46:
						func_107(14, 12);
						if (ANIMSCENE::_0x1F0E401031E20146(Local_14.f_179, func_26()) && (ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_14.f_179) >= 0.64f || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_14.f_179, "s_base_end", true)))
						{
							func_108(&(Local_14.f_180), 1024);
							func_109(14, 32768);
							func_108(&(Local_14.f_180), 4096);
							HUD::_DISPLAY_HUD_COMPONENT(724769646);
							func_110(&(Local_14.f_190), 0);
							func_111(&Local_14, 0);
							func_112(&(Local_14.f_211[0 /*17*/]), 0, 0);
							func_112(&(Local_14.f_211[0 /*17*/]), 0, 0);
						}
						if (func_8(Local_14.f_180, 4))
						{
							if (func_10(&Local_14, &(Local_14.f_179), func_26(), 1, 0, 1))
							{
								if (!func_8(Local_14.f_180, 16))
								{
									func_67(&(Local_14.f_180), 16);
								}
								func_57(&Local_14, 47);
							}
						}
						break;
					case 47:
						if (func_8(Local_14.f_180, 16))
						{
							if (func_69(&(Local_14.f_178)))
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "JOE_BUTLER", Local_14.f_158[0], 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Cup", Local_14.f_160, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "COIN", Local_14.f_161, 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_178, "Crutch", Local_14.f_162, 0);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop", false, false);
								ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_178, "internal_loop_end", false, false);
								func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0);
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_179, 0);
								func_57(&Local_14, 5);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_164, true, 0) && !func_8(Local_14.f_180, 16))
						{
						}
						else
						{
							func_10(&Local_14, &(Local_14.f_179), func_26(), 1, 0, 0);
							func_57(&Local_14, 38);
						}
						break;
					case 5:
						if (func_10(&Local_14, &(Local_14.f_178), func_13(), 0, 1, 0))
						{
							func_57(&Local_14, 3);
						}
						break;
					case 3:
						func_113(&Local_14);
						if (func_10(&Local_14, &(Local_14.f_178), func_9(), 0, 1, 0))
						{
						}
						break;
					case 50:
						if (func_8(Local_14.f_180, 32768))
						{
							if (func_10(&Local_14, &(Local_14.f_178), func_114(), 0, 1, 0))
							{
								func_57(&Local_14, 51);
							}
						}
						else if (func_10(&Local_14, &(Local_14.f_178), func_115(), 0, 1, 0))
						{
							func_57(&Local_14, 51);
						}
						break;
					case 51:
						func_116(&Local_14);
						break;
					case 48:
						break;
					case 49:
						break;
					case 56:
						break;
					case 57:
						break;
					default:
						break;
				}
				if (func_33(Local_14.f_149))
				{
					switch (Local_14)
					{
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
						case 23:
						case 24:
						case 25:
						case 26:
						case 27:
						case 28:
						case 29:
						case 30:
						case 31:
						case 32:
						case 33:
						case 34:
						case 35:
						case 36:
						case 37:
						case 46:
						case 47:
						case 48:
							break;
						case 38:
							break;
						case 49:
							break;
						case 56:
							func_107(14, 12);
							func_2(&Local_14, 1);
							break;
						case 57:
							break;
					}
				}
			}
		}
	}
}

bool func_1(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 1 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2048)
	{
		return true;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	return false;
}

void func_2(int iParam0, bool bParam1)
{
	func_117(14);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_155))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_155);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_156))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_156);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_157))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_157);
	}
	func_118(&(iParam0->f_283));
	if (func_33(iParam0->f_149) && (func_119(iParam0->f_149) || func_120(iParam0->f_149)))
	{
		func_121(iParam0->f_149, 0, 2);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_178, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_179, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_179, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	func_122(0);
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_163))
	{
		func_123(iParam0->f_163);
		VOLUME::_DELETE_VOLUME(iParam0->f_163);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_165))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_165);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_165);
		VOLUME::_DELETE_VOLUME(iParam0->f_165);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_164))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_164);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_164);
		VOLUME::_DELETE_VOLUME(iParam0->f_164);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_166))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_166);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_167);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_168))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_168);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_169))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_169);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_170);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][3 /*48*/].f_47);
	}
	if (bParam1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_178))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_178);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_179))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_179);
		}
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_158[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0f);
				PED::_0x39A2FC5AF55A52B1(iParam0->f_158[0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_158[0]));
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 153, false);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0f);
			PED::DELETE_PED(&(iParam0->f_158[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_160))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_160));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_161))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_161));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_162))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_162));
		}
		if (func_66(&(iParam0->f_172)))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(iParam0->f_172), 1);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "JoeBubble");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3(int iParam0)
{
	if ((*iParam0 >= 49 && *iParam0 <= 51) || func_6(29, 1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		if (!func_60(iParam0->f_158[0], 0))
		{
			func_2(iParam0, 1);
			func_108(&(iParam0->f_180), 1024);
			func_109(14, 32768);
			func_108(&(iParam0->f_180), 4096);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			func_124(&(iParam0->f_158[0]));
			func_125(&(iParam0->f_211), 1, 1, 1, 0);
			func_57(iParam0, 49);
		}
		else if (((*iParam0 >= 2 && *iParam0 < 49) && func_126(iParam0->f_158[0], 0, &(iParam0->f_99), &(iParam0->f_127), 0, iParam0->f_175)) || PED::_GET_LASSO_TARGET(Global_35) == iParam0->f_158[0])
		{
			iParam0->f_282 = 1;
			if (!func_69(&(iParam0->f_178)))
			{
				return;
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop", false, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop_end", false, false);
			}
			if (iParam0->f_127 == 2048 || iParam0->f_127 == 2)
			{
				PED::_0x2E5B5D1F1453E08E(iParam0->f_158[0], 0);
				func_2(iParam0, 0);
				func_108(&(iParam0->f_180), 1024);
				func_109(14, 32768);
				func_108(&(iParam0->f_180), 4096);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				func_57(iParam0, 49);
			}
			else
			{
				if (*iParam0 == 3)
				{
					func_67(&(iParam0->f_180), 32768);
				}
				else if (*iParam0 == 5)
				{
					if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_178) > 0.29f)
					{
						func_67(&(iParam0->f_180), 32768);
					}
				}
				else if (*iParam0 == 4)
				{
					if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_178) < 0.1f)
					{
						func_67(&(iParam0->f_180), 32768);
					}
				}
				func_108(&(iParam0->f_180), 1024);
				func_109(14, 32768);
				func_108(&(iParam0->f_180), 4096);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				func_57(iParam0, 50);
			}
		}
	}
}

void func_4(int iParam0, int iParam1)
{
	if (!func_60(Global_35, 0))
	{
		func_2(iParam0, 1);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[14 /*638*/][iParam1 /*48*/].f_47, true, 0))
	{
		if (!func_71(&(iParam0->f_128)))
		{
			func_127(&(iParam0->f_128), 0);
		}
		else if (func_73(&(iParam0->f_128)) > 5f)
		{
			func_75(&(iParam0->f_128));
			func_2(iParam0, 1);
		}
	}
	else if (func_128(14, iParam1, &(iParam0->f_283), iParam0->f_158[0]))
	{
		if (func_129(&(iParam0->f_283)))
		{
			func_2(iParam0, 1);
		}
		else if (*iParam0 < 38 || *iParam0 > 47)
		{
			func_130(iParam0);
		}
	}
}

bool func_5(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_131())
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
		if (func_132(0) == 7 || func_133())
		{
			return true;
		}
	}
	if (func_134(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0, int iParam1)
{
	if (!func_135(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15768[iParam0] && iParam1) != 0;
}

bool func_7(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		return false;
	}
	if (func_136(Global_35, iParam0->f_170, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_8(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char[] func_9()
{
	return "pl_sit_loop_base";
}

bool func_10(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0->f_282)
	{
		case 0:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
			else
			{
				iParam0->f_282 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar0 && !bVar1)
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2);
			}
			if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			if (bVar0)
			{
				iParam0->f_282 = 2;
			}
			break;
		case 2:
			if (bParam5)
			{
				if (!func_137(&(iParam0->f_158[0]), 50f, iParam0->f_175))
				{
					return false;
				}
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar1 && bVar0)
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				return false;
			}
			else if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base_end", true) && !bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_base", true) && bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_sit_loop_base", true) && bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam1, "s_cower_loop_base", true) && bParam4)
			{
				if (func_138(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			break;
	}
	return false;
}

char[] func_11()
{
	return "pl_cower_loop_base";
}

char[] func_12()
{
	return "pbl_base_reset";
}

char[] func_13()
{
	return "pl_stand_to_sit";
}

void func_14(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]) && ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!func_71(&(iParam0->f_140)))
	{
		func_72(&(iParam0->f_140), 0f);
	}
	else if (func_139(&(iParam0->f_140)) >= 1000)
	{
		iParam0->f_175 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_158[0], true, false), func_140(PLAYER::GET_PLAYER_INDEX()), true);
		func_75(&(iParam0->f_140));
	}
}

int func_15(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_141();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_142(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_71(uParam3))
	{
		func_72(uParam3, 0f);
	}
	else if (func_73(uParam3) >= 2f)
	{
		if (!func_143(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_144(iParam0);
			*uParam4 = 1;
			func_75(uParam3);
			return 1;
		}
		else
		{
			func_144(iParam0);
			*uParam4 = 1;
			func_75(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if ((((((*iParam0 <= 2 || *iParam0 >= 49) || *iParam0 == 42) || *iParam0 == 44) || *iParam0 == 46) || *iParam0 == 3) || *iParam0 == 5)
	{
		if ((iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0)) || func_145(&(iParam0->f_211[1 /*17*/]), 1, 0))
		{
			func_110(&(iParam0->f_190), 0);
			func_112(&(iParam0->f_211[0 /*17*/]), 0, 0);
			func_112(&(iParam0->f_211[1 /*17*/]), 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (func_8(iParam0->f_180, 4))
	{
		if ((iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0)) || func_145(&(iParam0->f_211[1 /*17*/]), 1, 0))
		{
			func_110(&(iParam0->f_190), 0);
			func_112(&(iParam0->f_211[0 /*17*/]), 0, 0);
			func_112(&(iParam0->f_211[1 /*17*/]), 0, 0);
			iParam0->f_246 = 3;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_164))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	if (!func_8(iParam0->f_180, 4))
	{
		if (!func_8(iParam0->f_180, 2))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_164, true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (iParam0->f_246 != 2 || !func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
				{
					func_110(&(iParam0->f_190), 0);
					func_64(iParam0, 1);
					func_112(&(iParam0->f_211[0 /*17*/]), 1, 0);
					func_112(&(iParam0->f_211[1 /*17*/]), 1, 0);
					iParam0->f_246 = 2;
				}
				func_67(&(iParam0->f_180), 2);
			}
			else if (iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				func_110(&(iParam0->f_190), 0);
				func_112(&(iParam0->f_211[0 /*17*/]), 0, 0);
				func_112(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_164, true, 0))
		{
			if (iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				func_110(&(iParam0->f_190), 0);
				func_112(&(iParam0->f_211[0 /*17*/]), 0, 0);
				func_112(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if ((PED::IS_PED_ON_MOUNT(Global_35) || func_146(&(iParam0->f_158[0]), &(iParam0->f_157), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) || func_147(&(iParam0->f_158[0]), &(iParam0->f_156), 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */))
		{
			if (iParam0->f_246 != 3 || func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
			{
				func_110(&(iParam0->f_190), 0);
				func_112(&(iParam0->f_211[0 /*17*/]), 0, 0);
				func_112(&(iParam0->f_211[1 /*17*/]), 0, 0);
				iParam0->f_246 = 3;
			}
		}
		else if (iParam0->f_246 != 2 || !func_145(&(iParam0->f_211[0 /*17*/]), 1, 0))
		{
			func_64(iParam0, 1);
			func_112(&(iParam0->f_211[0 /*17*/]), 1, 0);
			func_112(&(iParam0->f_211[1 /*17*/]), 1, 0);
			iParam0->f_246 = 2;
		}
	}
	switch (func_149(&(iParam0->f_158[0]), &(iParam0->f_190), 15f, &(iParam0->f_211), 0f, 2, 0, "", func_148(iParam0->f_246, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */))
	{
		case 0:
			if (!func_8(iParam0->f_180, 4))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				func_150(iParam0->f_158[0], iVar0);
				func_151();
				func_152(14, &(iParam0->f_158[0]), &(iParam0->f_180), 64);
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				func_153(Global_35, "GREET_GENERAL", -417894478, iParam0->f_158[0], 0, 0, 0, 1);
				func_154(14);
				func_67(&(iParam0->f_180), 4096);
				func_67(&(iParam0->f_180), 4);
			}
			break;
		case 1:
			if (!func_8(iParam0->f_180, 4))
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				func_150(iParam0->f_158[0], iVar1);
				func_151();
				func_152(14, &(iParam0->f_158[0]), &(iParam0->f_180), 64);
				func_124(&(iParam0->f_158[0]));
				func_125(&(iParam0->f_211), 1, 1, 1, 0);
				Var2 = { func_155() };
				func_153(Global_35, Var2, -417894478, iParam0->f_158[0], 0, 0, Var2.f_1, 1);
				func_154(14);
				func_67(&(iParam0->f_180), 4096);
				func_67(&(iParam0->f_180), 4);
			}
			break;
	}
}

void func_17(int iParam0)
{
	if ((((!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0])) && func_8(iParam0->f_180, 4)) && !func_8(iParam0->f_180, 16)) && !func_8(iParam0->f_180, 32))
	{
		func_156(&(iParam0->f_164), &(iParam0->f_155), &(iParam0->f_188));
		func_122(1);
		if (!func_8(iParam0->f_180, 1024))
		{
			func_67(&(iParam0->f_180), 1024);
			func_157(14, 32768);
			HUD::_HIDE_HUD_COMPONENT(724769646);
		}
		if (func_159(func_158(Global_35, 0, 1, 0)) || func_159(func_158(Global_35, 1, 1, 0)))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			return;
		}
		if (!func_160())
		{
			return;
		}
		if (func_161(&Global_35, 1319.544f, -1291.12f, 76.1169f, -115.09f, &(iParam0->f_281), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */))
		{
			if (!func_8(iParam0->f_180, 32))
			{
				func_122(0);
				func_67(&(iParam0->f_180), 32);
			}
		}
	}
}

void func_18(int iParam0)
{
	if (func_8(iParam0->f_180, 128) && iParam0->f_184 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 36)
	{
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_178) >= 0.8f)
		{
			return;
		}
		if (iParam0->f_183 < 2)
		{
			if (func_162(&(iParam0->f_158[0]), &(iParam0->f_187), &(iParam0->f_143), &(iParam0->f_184), 3, 0, 7000, 0))
			{
				func_67(&(iParam0->f_180), 128);
			}
		}
	}
}

void func_19(int iParam0)
{
	if (func_8(iParam0->f_180, 1024))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		func_163();
		func_164(&(iParam0->f_211));
		func_165();
		func_166(Global_35);
		func_166(iParam0->f_158[0]);
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_167(iParam3);
	if (fParam4 == 0f)
	{
		if (func_142(iParam0, Global_35, 15f, 1))
		{
			if (!func_168(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_169(uParam1, iParam2);
				}
			}
		}
		else if (func_168(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_170(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_168(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_169(uParam1, iParam2);
			}
		}
	}
	else if (func_168(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_170(uParam1, iParam2);
	}
}

void func_21(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_168(*uParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (func_168(*uParam1, iParam3))
	{
		if (!func_168(*uParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			}
			func_169(uParam1, iParam4);
		}
	}
	else if (func_168(*uParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		}
		func_170(uParam1, iParam4);
	}
}

void func_22(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0->f_158[0], 0, 1);
}

char* func_23()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_1@ig_1";
}

char[] func_24()
{
	return "pl_sit_to_stand";
}

char* func_25()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_5@ig_5";
}

char[] func_26()
{
	return "pbl_Interactive01";
}

char* func_27()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig1";
}

char* func_28()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig5";
}

void func_29(int iParam0)
{
	struct<11> Var0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_163))
	{
		Var0 = { func_65(0) };
		iParam0->f_163 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_164))
	{
		Var0 = { func_65(1) };
		iParam0->f_164 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_165))
	{
		Var0 = { func_65(2) };
		iParam0->f_165 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_166))
	{
		Var0 = { func_65(3) };
		iParam0->f_166 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		Var0 = { func_65(4) };
		iParam0->f_167 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		Var0 = { func_65(7) };
		iParam0->f_170 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(Var0.f_10);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iParam0->f_170, Var0.f_1, Var0.f_4, Var0.f_7);
		Var0 = { func_65(8) };
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iParam0->f_170, Var0.f_1, Var0.f_4, Var0.f_7);
	}
}

int func_30(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_171(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_172())
	{
		iVar2 = func_172();
	}
	iVar5 = func_173(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_174(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_174(iVar6) == 0)
			{
				return func_175(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_174(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_174(iVar6) == 0)
			{
				return func_175(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_175(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_33(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_34()
{
	if (func_176() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_177(uParam0, iParam1, sParam2))
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

void func_36(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_37(var uParam0)
{
	func_42(uParam0, 0);
	func_41(uParam0, 0);
	func_38(uParam0, 1);
	func_53(uParam0, 1);
	func_178(uParam0, 0);
	func_49(uParam0, 1);
	func_179(uParam0, 1, 1, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 256);
	}
	else
	{
		func_181(&(uParam0->f_1), 256);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 4);
	}
	else
	{
		func_181(&(uParam0->f_1), 4);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 2);
	}
	else
	{
		func_181(&(uParam0->f_1), 2);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 2048);
	}
	else
	{
		func_181(&(uParam0->f_1), 2048);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 16384);
	}
	else
	{
		func_181(&(uParam0->f_1), 16384);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 1);
	}
	else
	{
		func_181(&(uParam0->f_1), 1);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 131072);
	}
	else
	{
		func_181(&(uParam0->f_1), 131072);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 128);
	}
	else
	{
		func_180(uParam0, 128);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 4);
	}
	else
	{
		func_180(uParam0, 4);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 8);
	}
	else
	{
		func_181(&(uParam0->f_1), 8);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 32);
	}
	else
	{
		func_180(uParam0, 32);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 256);
	}
	else
	{
		func_180(uParam0, 256);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 2);
	}
	else
	{
		func_180(uParam0, 2);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 1024);
	}
	else
	{
		func_181(&(uParam0->f_1), 1024);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 16);
	}
	else
	{
		func_181(&(uParam0->f_1), 16);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 16);
	}
	else
	{
		func_180(uParam0, 67108864);
		func_180(uParam0, 16);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 524288);
	}
	else
	{
		func_181(&(uParam0->f_1), 524288);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 524288);
	}
	else
	{
		func_180(uParam0, 524288);
	}
}

bool func_56(int iParam0, bool bParam1)
{
	switch (func_182(iParam0))
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

void func_57(int iParam0, int iParam1)
{
	iParam0->f_282 = 0;
	*iParam0 = iParam1;
}

int func_58(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_183(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_183(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

int func_59(var uParam0, int iParam1, vector3 vParam2)
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

bool func_60(int iParam0, int iParam1)
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
	if (func_8(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_8(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_8(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_8(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_61(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_184(iParam0, iParam1))
		{
			if (func_185(iParam0, iParam1))
			{
				if (func_186(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_187(iParam0);
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

void func_62(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_63(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

void func_64(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;

	if (bParam1)
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
	}
	else
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
	}
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
	func_188(&(iParam0->f_211[0 /*17*/]), Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	func_188(&(iParam0->f_211[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

struct<11> func_65(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = GET_HASH_KEY("VOLSPHERE");
			Var0.f_1 = { 1320.787f, -1291.887f, 75.307f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 55f, 55f, 55f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { 1318.473f, -1290.612f, 84.303f };
			Var0.f_4 = { 0f, 0f, -25.67596f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = GET_HASH_KEY("VOLBOX");
			Var0.f_1 = { 1321.154f, -1291.387f, 79.97336f };
			Var0.f_4 = { 0f, 0f, 65f };
			Var0.f_7 = { 3f, 6f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { 1316.051f, -1289.458f, 78.75141f };
			Var0.f_4 = { 0f, 0f, 155f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { 1319.544f, -1291.433f, 84.30341f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Focus";
			break;
		case 5:
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1f, 1f, 10f };
			Var0.f_10 = "Grief";
			Jump @657; //curOff = 455
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "Grief";
			Jump @657; //curOff = 524
			Var0 = GET_HASH_KEY("VOLBOX");
			Var0.f_1 = { 1325.705f, -1322.965f, 76.01214f };
			Var0.f_4 = { 0f, 0f, 74.99999f };
			Var0.f_7 = { 11f, 12f, 9f };
			Var0.f_10 = "Gunsmith";
			Jump @657; //curOff = 597
			Var0 = GET_HASH_KEY("VOLCYLINDER");
			Var0.f_1 = { 1320.371f, -1318.493f, 78.10471f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 3f };
			Var0.f_10 = "Gunsmith2";
			return Var0;
		}

bool func_66(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_67(var uParam0, int iParam1)
{
	func_169(uParam0, iParam1);
}

void func_68(int iParam0, int iParam1)
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

bool func_69(var uParam0)
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

char[] func_70()
{
	return "pbl_base_reset";
}

bool func_71(var uParam0)
{
	return func_189(*uParam0, 1);
}

void func_72(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_190() - fParam1);
	func_191(uParam0, 1);
	func_192(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_73(var uParam0)
{
	if (!func_71(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_193(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_190() - uParam0->f_1);
}

void func_74(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			*uParam1++;
			func_57(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			func_57(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 32);
			}
			else
			{
				func_57(iParam0, 9);
			}
			break;
		case 3:
			*uParam1++;
			func_57(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			func_57(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 34);
			}
			else
			{
				func_57(iParam0, 12);
			}
			break;
		case 6:
			*uParam1++;
			func_57(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			func_57(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			func_57(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			func_57(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			func_57(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			func_57(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			func_57(iParam0, 19);
			break;
		case 13:
			*uParam1++;
			func_57(iParam0, 20);
			break;
		case 14:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 14);
			}
			else
			{
				func_57(iParam0, 21);
			}
			break;
		case 15:
			*uParam1++;
			func_57(iParam0, 22);
			break;
		case 16:
			*uParam1++;
			func_57(iParam0, 23);
			break;
		case 17:
			*uParam1++;
			func_57(iParam0, 24);
			break;
		case 18:
			*uParam1++;
			func_57(iParam0, 25);
			break;
		case 19:
			*uParam1++;
			func_57(iParam0, 26);
			break;
		case 20:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 17);
			}
			else
			{
				func_57(iParam0, 27);
			}
			break;
		case 21:
			*uParam1++;
			func_57(iParam0, 28);
			break;
		case 22:
			*uParam1++;
			func_57(iParam0, 29);
			break;
		case 23:
			*uParam1++;
			func_57(iParam0, 30);
			break;
		case 24:
			*uParam1++;
			func_57(iParam0, 31);
			break;
		case 25:
			*uParam1++;
			if (func_34())
			{
				func_57(iParam0, 22);
			}
			else
			{
				func_57(iParam0, 32);
			}
			break;
		case 26:
			*uParam1++;
			func_57(iParam0, 33);
			break;
		case 27:
			*uParam1++;
			func_57(iParam0, 34);
			break;
		case 28:
			*uParam1++;
			func_57(iParam0, 35);
			break;
		case 29:
			*uParam1 = 0;
			func_57(iParam0, 36);
			break;
		case 30:
			func_57(iParam0, 37);
			break;
		default:
			break;
	}
}

void func_75(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char[] func_76()
{
	return "pbl_P10_Loop01";
}

char[] func_77()
{
	return "pbl_P10_loop02";
}

char[] func_78()
{
	return "pbl_P11_T01_Loop01";
}

char[] func_79()
{
	return "pbl_P1_T01_Loop01";
}

char[] func_80()
{
	return "pbl_P11_T01_Loop02";
}

char[] func_81()
{
	return "pbl_P11_T02_Loop01";
}

char[] func_82()
{
	return "pbl_P8_T03_Loop03";
}

char[] func_83()
{
	return "pbl_P1_T02_Loop01";
}

char[] func_84()
{
	return "pbl_P1_T01_Loop02";
}

char[] func_85()
{
	return "pbl_P1_T02_Loop02";
}

char[] func_86()
{
	return "pbl_P8_T03_Loop01";
}

char[] func_87()
{
	return "pbl_P8_T03_Loop02";
}

char[] func_88()
{
	return "pbl_P1_T02_Loop03";
}

char[] func_89()
{
	return "pbl_P1_T01_Loop03";
}

char[] func_90()
{
	return "pbl_P2_Loop02";
}

char[] func_91()
{
	return "pbl_P3_Loop01";
}

char[] func_92()
{
	return "pbl_P4_Loop01";
}

char[] func_93()
{
	return "pbl_P1_T01_Loop04";
}

char[] func_94()
{
	return "pbl_P4_T03_Loop02";
}

char[] func_95()
{
	return "pbl_P5_Loop01";
}

char[] func_96()
{
	return "pbl_P5_Loop02";
}

char[] func_97()
{
	return "pbl_P2_Loop01";
}

char[] func_98()
{
	return "pbl_P1_T01_Loop05";
}

char[] func_99()
{
	return "pbl_P6_T02_Loop01";
}

char[] func_100()
{
	return "pbl_P6_T03_Loop01";
}

char[] func_101()
{
	return "pbl_P7_Loop01";
}

char[] func_102()
{
	return "pbl_P1_T01_Loop06";
}

char[] func_103()
{
	return "pbl_P8_T05_Loop01";
}

char[] func_104()
{
	return "pbl_P9_Loop01";
}

char[] func_105()
{
	return "pbl_P9_Loop02";
}

char[] func_106()
{
	return "pbl_base_reset";
}

void func_107(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_108(var uParam0, int iParam1)
{
	func_170(uParam0, iParam1);
}

void func_109(int iParam0, int iParam1)
{
	func_194(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 0);
}

void func_110(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_75(&(iParam0->f_18));
}

void func_111(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;

	if (bParam1)
	{
		Var0 = "JB1_UC_GIVE";
		Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
	}
	else
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
	}
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
	func_195(&(iParam0->f_211[0 /*17*/]), Var0, 100, "", Var0.f_1, 0, 0, 0, 1);
	func_188(&(iParam0->f_211[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

void func_112(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_196(iParam0, 13))
	{
		func_197(iParam0, 0);
	}
	else
	{
		func_198(iParam0, 0);
	}
	if (func_199(iParam0->f_6))
	{
		if (bParam2)
		{
			func_200(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_113(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	if (((!func_8(iParam0->f_180, 16) || iParam0->f_175 > 10f) || func_8(iParam0->f_180, 16384)) || func_201(Global_35, 1))
	{
		if (func_71(&(iParam0->f_146)))
		{
			func_75(&(iParam0->f_146));
		}
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_158[0]))
	{
		if (func_71(&(iParam0->f_146)))
		{
			func_75(&(iParam0->f_146));
		}
		return;
	}
	if (!func_71(&(iParam0->f_146)))
	{
		func_72(&(iParam0->f_146), 0f);
	}
	else if (func_139(&(iParam0->f_146)) >= 12000)
	{
		func_75(&(iParam0->f_146));
		func_153(iParam0->f_158[0], "PLAYER_STILL_HANGING", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_186++;
		if (!func_8(iParam0->f_180, 16384) && iParam0->f_186 >= 2)
		{
			func_67(&(iParam0->f_180), 16384);
		}
	}
}

char[] func_114()
{
	return "pbl_sit_to_cower";
}

char[] func_115()
{
	return "pl_enter_cower";
}

void func_116(int iParam0)
{
	if (func_6(29, 1) || iParam0->f_185 >= 2)
	{
		return;
	}
	if (!func_71(&(iParam0->f_131)))
	{
		iParam0->f_174 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(8, 12));
		func_72(&(iParam0->f_131), 0f);
	}
	else if (func_73(&(iParam0->f_131)) > iParam0->f_174)
	{
		func_153(iParam0->f_158[0], "GENERIC_FRIGHTENED_HIGH", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_185++;
		func_72(&(iParam0->f_131), 0f);
		func_75(&(iParam0->f_131));
	}
}

void func_117(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_202(0, -1);
	}
	func_203();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_118(var uParam0)
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
	if (func_71(&(uParam0->f_13)))
	{
		func_75(&(uParam0->f_13));
	}
}

bool func_119(int iParam0)
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
		iVar0 = func_204(iParam0);
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

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_182(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_121(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_33(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_120(iParam0) && !func_119(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_205(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_120(iParam0))
	{
		iParam2 = -1;
	}
	if (func_204(iParam0) == 3 || (func_204(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_205(iParam0))))
	{
		func_207(func_206(iParam0), func_205(iParam0), iParam2);
		if ((!func_33(Global_1572864.f_8) && !func_208(0, 1, 0)) && !func_209(Global_1935630, 32768))
		{
			iVar0 = func_210(iParam0);
			if (iVar0 != -1)
			{
				func_211(0);
			}
			else if (func_206(iParam0) == 8)
			{
				iVar0 = func_212();
				if (iVar0 != -1)
				{
					func_211(0);
				}
			}
		}
	}
	func_213(iParam0, 0);
	if (func_214(0) == iParam0)
	{
		func_215(1);
		func_216(0);
		func_217(1);
	}
	func_218(iParam0, 1);
	func_219(iParam0);
}

void func_122(bool bParam0)
{
	int iVar0;

	iVar0 = func_220();
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

void func_123(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_221(vVar0, 0);
}

void func_124(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_125(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_199((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_200(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_126(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_222(uParam2, 1, iVar0);
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
			if (func_223(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_225(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_226(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_227(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_228(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_229(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_230(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_231(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_232(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_232(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_233(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_234(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_235(uParam2, 4000))
				{
					if ((func_236(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_237(uParam2, iParam0)) && func_238(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_236(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_237(uParam2, iParam0)) && func_238(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_239(iParam0, Global_1935630.f_41))
							{
								func_240();
								*uParam3 = 2;
								func_224(iParam0, uParam2, *uParam3);
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
						if (func_239(iParam0, Global_1935630.f_41))
						{
							func_240();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_241(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_242() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_240();
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_243())
					{
						if (func_239(iParam0, Global_1935630.f_42))
						{
							func_240();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_244(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_245(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_246(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_247(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_248(uParam2, 4000))
				{
					if (func_249(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_224(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_250(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_224(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_251(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_224(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1 || !func_71(uParam0))
	{
		func_252(uParam0);
	}
}

bool func_128(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_132(0) == 1 || func_132(0) == 2) || func_132(0) == 8) || func_209(Global_1935630, 2048))
			{
				func_67(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_132(0) == 11)
			{
				func_67(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_132(0) == 6)
			{
				func_67(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_67(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_253(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_253(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_141();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_253(iVar2) > func_253(iVar1))
				{
					if (func_253(iVar0) > func_253(iVar2) + 1 || func_253(iVar0) < func_253(iVar1))
					{
						func_67(uParam2, 32);
					}
				}
				else if (func_253(iVar0) > func_253(iVar2) + 1 && func_253(iVar0) < func_253(iVar1))
				{
					func_67(uParam2, 32);
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
					if (((func_254(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_254(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_255(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_255(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_256(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_67(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_146(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_257(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_71(&(uParam2->f_13)))
					{
						func_72(&(uParam2->f_13), 0f);
					}
					else if (func_139(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_75(&(uParam2->f_13));
						func_67(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_71(&(uParam2->f_13)))
					{
						func_75(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_258())
			{
				func_67(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_259())
			{
				func_67(uParam2, 2048);
			}
		}
		if (func_209(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_67(uParam2, 128);
		}
		if (func_134(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_67(uParam2, 256);
		}
	}
	if ((((((((((func_8(*uParam2, 2) || func_8(*uParam2, 4)) || func_8(*uParam2, 8)) || func_8(*uParam2, 16)) || func_8(*uParam2, 32)) || func_8(*uParam2, 64)) || func_8(*uParam2, 128)) || func_8(*uParam2, 256)) || func_8(*uParam2, 512)) || func_8(*uParam2, 1024)) || func_8(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_129(var uParam0)
{
	if (((((func_8(*uParam0, 2) || func_8(*uParam0, 4)) || func_8(*uParam0, 16)) || func_8(*uParam0, 128)) || func_8(*uParam0, 1024)) || func_8(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

void func_130(int iParam0)
{
	if ((func_8(iParam0->f_180, 131072) || func_8(iParam0->f_180, 1024)) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_158[0]))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 37)
	{
		func_67(&(iParam0->f_180), 131072);
		func_57(iParam0, 5);
	}
	else if (*iParam0 >= 38 && *iParam0 <= 47)
	{
		if (func_69(&(iParam0->f_178)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop_end", false, false);
			func_67(&(iParam0->f_180), 131072);
			func_57(iParam0, 5);
		}
		else if (!func_8(iParam0->f_180, 262144))
		{
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_178, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_178, true))
			{
				ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_178, 0);
			}
			func_67(&(iParam0->f_180), 262144);
		}
	}
}

bool func_131()
{
	int iVar0;

	if (func_176() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_120(Global_1392915[iVar0 /*12*/].f_4))
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

int func_132(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_133()
{
	return Global_1310750.f_16077 != 0;
}

bool func_134(var uParam0, int iParam1)
{
	return func_260(*uParam0, iParam1);
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_136(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_137(var uParam0, float fParam1, float fParam2)
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
			if (func_142(Global_35, *uParam0, 25f, 1))
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
		if (func_142(Global_35, *uParam0, fParam1, 1))
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

bool func_138(var uParam0, char* sParam1)
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

int func_139(var uParam0)
{
	if (!func_71(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_193(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_242() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

Vector3 func_140(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_141()
{
	return Global_1899515;
}

bool func_142(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_143(int iParam0)
{
	return iParam0 != -15;
}

void func_144(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_141();
}

bool func_145(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_199(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_261(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_146(var uParam0, var uParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_262(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0, var uParam1, float fParam2, int iParam3)
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
	if (func_263(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_148(int iParam0, int iParam1, int iParam2)
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

int func_149(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_264(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_265(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_252(&(iParam1->f_13));
		}
		if (func_266(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_267(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_149(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_124(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_268(*uParam0, 1, 1);
						}
					}
					else if (func_269(iParam1, 22))
					{
						func_268(*uParam0, 0, 1);
					}
				}
				if (func_270(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_271(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_272(iParam8);
					if (func_273(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_274(uParam3);
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
					func_275(iParam1, uParam3, fVar8);
					if (func_276(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_125(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_277(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_270(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_278(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_273(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_271(uParam0, func_270(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_272(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_125(uParam3, 0, 0, 1, 1);
					}
					func_279(iParam1, 1);
				}
				func_275(iParam1, uParam3, fVar8);
				if (func_277(uParam0, iParam1, fParam4, bVar6))
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
			func_280(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_150(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_281(iParam0);
		return func_282(iParam0, GET_HASH_KEY("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_151()
{
	func_283();
	func_284(-1, 0, 0, 0, 0);
	func_285(60, 0, 1);
}

void func_152(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_168(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_287(func_286(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_288(func_286(GET_HASH_KEY("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_141();
	func_169(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_153(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_289(iParam0, &Var0);
}

void func_154(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

struct<2> func_155()
{
	struct<2> Var0;

	switch (func_290(14))
	{
		case 0:
			Var0 = "INSULT_JOEBUTLER_CONV_PART1";
			Var0.f_1 = 1;
			break;
		case 1:
			Var0 = "INSULT_JOEBUTLER_CONV_PART1";
			Var0.f_1 = 2;
			break;
		case 2:
			Var0 = "INSULT_JOEBUTLER_CONV_PART2";
			Var0.f_1 = 2;
			break;
		case 3:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 6;
			break;
	}
	return Var0;
}

void func_156(var uParam0, var uParam1, var uParam2)
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

void func_157(int iParam0, int iParam1)
{
	func_194(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 1);
}

int func_158(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_159(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

bool func_160()
{
	if (((!func_291() && !func_292(Global_35, -208384378)) && (!ENTITY::DOES_ENTITY_EXIST(func_220()) || !ENTITY::IS_ENTITY_IN_AIR(func_220(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return true;
	}
	if (func_293())
	{
		func_294();
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		if (!func_292(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), func_140(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
	}
	return false;
}

bool func_161(var uParam0, vector3 vParam1, float fParam4, var uParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;

	switch (*uParam5)
	{
		case 0:
			if (!func_292(*uParam0, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1f, iParam6, fParam4, fParam7, 0);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				*uParam5 = 1;
			}
			break;
		case 1:
			if (func_295(*uParam0, vParam1, fParam4, fParam7, fParam8, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) == 8)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_162(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_71(uParam2))
		{
			func_72(uParam2, 0f);
			return false;
		}
		else if (func_139(uParam2) > iParam6)
		{
			func_75(uParam2);
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
			fParam7 = func_296(*uParam0, Global_35, 1, 1);
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

void func_163()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	CAM::_0x8370D34BD2E60B73();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689.f_1)
	{
		func_297(0);
	}
}

void func_164(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_197(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

void func_165()
{
	Global_1905944.f_5695 = 1;
}

int func_166(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return 1;
	}
	return 0;
}

char* func_167(int iParam0)
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

bool func_168(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_169(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_170(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_171(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_298(vParam0))
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
		if (func_299(vParam0))
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
	func_300(iVar0, bParam8);
	return iVar0;
}

int func_172()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_301(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_172())
	{
		return -1;
	}
	iVar0 = func_173(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_302(iVar1, 0);
	func_303(iVar1, 0);
	func_304(iVar1, 0);
	func_305(iVar1, 0);
	func_306(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_307(iVar1, iParam4);
	}
	return iVar1;
}

int func_176()
{
	return Global_1572887.f_12;
}

bool func_177(var uParam0, int iParam1, char* sParam2)
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

void func_178(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 128);
	}
	else
	{
		func_181(&(uParam0->f_1), 128);
	}
}

void func_179(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_181(uParam0, 268435456);
	}
	else
	{
		func_180(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_181(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_180(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_181(uParam0, 536870912);
	}
	else
	{
		func_180(uParam0, 536870912);
	}
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_182(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_204(iParam0);
}

int func_183(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_308(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_184(int iParam0, int iParam1)
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

bool func_185(int iParam0, int iParam1)
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

bool func_186(int iParam0, int iParam1)
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
	if (!func_184(iParam0, iVar0))
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

void func_187(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_188(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_199(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_309(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_310(iParam0->f_6, iParam0->f_5, 0);
			}
			func_311(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_312(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_189(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_190()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_192(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_193(var uParam0)
{
	return func_189(*uParam0, 2);
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_181(uParam0, iParam1);
	}
	else
	{
		func_180(uParam0, iParam1);
	}
}

void func_195(int* iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_197(iParam0, 1);
	func_188(iParam0, uParam1, sParam3, uParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

bool func_196(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_197(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_198(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_199(int iParam0)
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

void func_200(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_199(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_313(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_314(iVar0);
	*uParam0 = 0;
}

bool func_201(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_315(iVar0) || func_316(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_202(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_317(&Global_0, 8);
	}
	if (!func_318() || func_176() != -1)
	{
		return;
	}
	func_317(&Global_0, 1);
}

void func_203()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

int func_204(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_319(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_205(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

int func_206(int iParam0)
{
	if (!func_33(iParam0))
	{
		return 0;
	}
	return func_320(func_174(iParam0));
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_176() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_208(int iParam0, bool bParam1, bool bParam2)
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
		if (func_321())
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
		iVar0 = func_322(Global_1898164.f_1[0 /*5*/]);
		if (func_323(iVar0) && func_324(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_33(Global_1898164.f_1[0 /*5*/]))
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

bool func_209(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_206(iParam0))
	{
		case 1:
			iVar0 = func_322(iParam0);
			return func_325(iVar0);
		case 8:
			iVar1 = func_322(iParam0);
			if (func_324(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_326(iVar1);
			}
			break;
	}
	return -1;
}

void func_211(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_176() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_327(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_328();
		Global_1898077.f_9 = func_329(Global_1894899.f_2);
		func_330(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_212()
{
	if (!func_56(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_56(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_56(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_56(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_56(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_56(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_56(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_213(int iParam0, int iParam1)
{
	if (!func_33(iParam0))
	{
		return;
	}
	func_302(iParam0, iParam1);
}

int func_214(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_331(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_332(&Global_1935630, 4194304);
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

int func_216(bool bParam0)
{
	if (!bParam0 && func_333(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_217(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_218(int iParam0, bool bParam1)
{
	if (func_176() != -1)
	{
		return;
	}
	if (func_214(0) != iParam0)
	{
		return;
	}
	if (func_334(iParam0))
	{
		if (bParam1)
		{
			func_335(-525676072);
		}
		else
		{
			func_336(-525676072);
		}
	}
}

int func_219(int iParam0)
{
	return func_338(func_337(iParam0));
}

int func_220()
{
	return Global_1900383.f_393;
}

void func_221(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_298(vParam0))
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
			if (func_339(vVar2, vParam0, 2f, 1))
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

void func_222(var uParam0, bool bParam1, int iParam2)
{
	func_340(iParam2);
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
		uParam0->f_13 = func_341(0);
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
							func_181(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_342(1))
						{
							func_181(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_342(1) || *uParam0 & 8192 != 0))
				{
					func_180(uParam0, 33554432);
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
			if (func_343(uParam0))
			{
				uParam0->f_15 = func_242();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_242() - uParam0->f_15) > 500)
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
	func_344(uParam0);
}

bool func_223(int iParam0, var uParam1)
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
			if (!func_345(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_346(iParam0, iVar2) <= func_347(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_224(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_348(iParam2, 1, 1, 1, 0))
	{
		func_181(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_349(uParam1, 1);
	func_350();
}

bool func_225(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_351(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_352(uParam1);
			if (func_353(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_354(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_349(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_349(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_226(int iParam0, int iParam1, var uParam2)
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
	if (func_355(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_352(uParam2);
		if (func_353(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_354(uParam2)
				{
					func_349(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_227(int iParam0, var uParam1)
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
	if (func_345(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_354(uParam1)
		{
			fVar3 = func_352(uParam1);
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

int func_228(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_356(bParam1, bParam2, bParam3);
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

bool func_229(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_242();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_230(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_357(uParam2);
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
			if (func_238(uParam2, iParam1))
			{
				func_349(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_231(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_358(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_238(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_349(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_232(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_359(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_349(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_349(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_360(iParam1, vVar0, vVar4))
					{
						func_349(uParam2, 1);
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
					func_349(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_360(iParam1, vVar0, vVar7))
					{
						func_349(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_233(int iParam0, var uParam1)
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
		if (!func_345(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_361(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_362(Global_1935630.f_34[iVar0]))
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
			if (func_363(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_364(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_365(uParam1, iParam0, fVar1, iVar0))
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

bool func_234(int iParam0, var uParam1)
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

bool func_235(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_242();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_236(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_366(iVar0, &iVar2))
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
	if (func_367(iVar0, iParam0))
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

int func_237(var uParam0, int iParam1)
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

bool func_238(var uParam0, int iParam1)
{
	if (func_368(uParam0))
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

bool func_239(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_296(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_240()
{
}

bool func_241(var uParam0, int iParam1)
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
		if (func_369(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_242();
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
						if (func_370(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_242();
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

int func_242()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_243()
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
	if ((func_242() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_244(var uParam0, int iParam1)
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
	fVar0 = func_347(uParam0);
	if (uParam0->f_12 > func_371(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_372(iParam1);
	iVar1 = func_373(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_245(int iParam0, int iParam1, var uParam2)
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
	return func_374(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_246(int iParam0, var uParam1)
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
		if (func_375(iParam0, uParam1, 1))
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
					if (!func_376(uParam1, iParam0))
					{
						if (func_370(iVar4, Global_36, 1) < 7f)
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

bool func_247(int iParam0, var uParam1)
{
	if (!func_377(0))
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

bool func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_242();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_249(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_250(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_242();
	}
	else if (func_242() - uParam1->f_4) > func_378(uParam1)
	{
		return func_379(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_251(var uParam0, int iParam1)
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

void func_252(var uParam0)
{
	func_72(uParam0, 0f);
}

int func_253(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_254(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_120(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_255(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_119(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_256(int iParam0)
{
	int iVar0;

	iVar0 = func_380();
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

bool func_257(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_263(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
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
		if (!func_381(iVar1, 0))
		{
			func_382(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return true;
	}
	return false;
}

bool func_258()
{
	return Global_1392040.f_6;
}

bool func_259()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_261(int iParam0, bool bParam1)
{
	if (bParam1 && !func_199(iParam0))
	{
		return false;
	}
	return !func_383(iParam0, 4);
}

bool func_262(var uParam0, vector3 vParam1, float fParam4)
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

bool func_263(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_384(Global_35, *iParam1, 0))
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

void func_264(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_265(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_266(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_385(iParam0, iParam1))
		{
			if (!func_260(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_125(uParam2, 0, 0, 1, 0);
				func_181(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_260(iParam1->f_10, 1))
		{
			func_386(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_180(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_267(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_260(iParam4, 32);
		func_387(iParam1, uParam2, 0);
		iVar5 = func_388(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_125(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_260(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_260(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_260(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_260(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_260(iParam4, 8388608) || func_260(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_260(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_260(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_269(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_269(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_260(iParam4, 67108864))
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
				iParam6 = func_389(uParam0);
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
			if (func_260(iParam4, 268435456))
			{
				iVar8 = func_390(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_391(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_269(iParam1, 23))
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
			if (func_260(iParam4, 2) || func_260(iParam4, 16))
			{
				func_268(*uParam0, 1, 1);
			}
			else
			{
				func_268(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_269(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_270(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_392(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_271(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_393(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_260(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_272(int iParam0)
{
	if (func_260(iParam0, 4))
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
	if (func_260(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_260(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_273(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_394(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_395(Global_35)) || func_396(Global_35)) || func_397(Global_35));
	fVar12 = -1f;
	if (func_71(&(iParam1->f_13)))
	{
		fVar12 = func_73(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_199((uParam4[iVar0 /*17*/])->f_6);
		func_398(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_399(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_400(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_125(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_401(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_387(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_402(iParam1, fParam6, iParam1->f_9))
					{
						func_252(&(iParam1->f_18));
						if (bVar6)
						{
							func_401(uParam4, 0, 0);
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
		func_403(iParam1, fParam2);
	}
	return bVar5;
}

void func_274(var uParam0)
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

void func_275(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_404(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_403(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_276(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_405(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_406(iParam1, 0);
				func_387(iParam1, uParam2, func_269(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_277(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_252(&(iParam1->f_18));
			return 0;
		}
		else if (func_71(&(iParam1->f_18)))
		{
			func_75(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_71(&(iParam1->f_18)))
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
	return func_407(&(iParam1->f_18), fParam2);
	return 1;
}

void func_278(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_398(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_279(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_280(int* iParam0, var uParam1)
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
	func_387(iParam0, uParam1, 1);
	func_125(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_281(int iParam0)
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

var func_282(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

void func_283()
{
	if (!func_408(Global_1327479))
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
	func_409(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_284(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_410() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_408(iVar1) && !func_411(iVar1, iParam2)) && (!bParam3 || !func_412(iVar1))) && (!bParam4 || !func_413(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_414(iVar0);
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_415(iParam0, iParam1, bParam2);
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

struct<2> func_286(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_287(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_289(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_290(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

bool func_291()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_293())
	{
		return true;
	}
	return false;
}

bool func_292(int iParam0, int iParam1)
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

bool func_293()
{
	if (func_416(Global_35) || func_417(Global_35))
	{
		return true;
	}
	return false;
}

int func_294()
{
	if (func_416(Global_35) || func_417(Global_35))
	{
		if (!func_292(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, func_220(), func_140(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
		return 0;
	}
	else if ((!func_416(Global_35) && !func_417(Global_35)) && !func_292(Global_35, -208384378))
	{
		return 1;
	}
	return 0;
}

bool func_295(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_418(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_418(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_296(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_297(bool bParam0)
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

bool func_298(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_299(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_300(int iParam0, bool bParam1)
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

bool func_301(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_302(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_419(iParam0);
	}
	else
	{
		func_420(iParam0, iParam1);
	}
	func_421();
}

void func_303(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_304(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_305(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_306(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_307(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

void func_308(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_422(iParam1))
		{
			func_61(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_423(iParam0, 0, 1);
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
			func_424(iParam0, 0);
			bVar0 = true;
		}
		func_425(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_309(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_310(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_311(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	if (bParam1)
	{
		func_426(iParam0, 4);
		func_427(iVar0, 1);
		func_428(iVar0, 1);
	}
	else
	{
		func_429(iParam0, 4);
		func_428(iVar0, 0);
	}
}

void func_312(int* iParam0, char* sParam1)
{
	if (func_199(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_310(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_198(iParam0, 1);
}

int func_313(int iParam0)
{
	return iParam0;
}

void func_314(int iParam0)
{
	if (!func_430(iParam0))
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

int func_315(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case GET_HASH_KEY("L_14_CAVE_INT"):
			case GET_HASH_KEY("GAP_MINE_INT"):
			case GET_HASH_KEY("MIL_MINE_CAVE_INT"):
			case GET_HASH_KEY("M05_BEARCAVE_MAIN"):
			case GET_HASH_KEY("ELH_SEACAVES_INT"):
			case GET_HASH_KEY("BEA_01_INT"):
			case GET_HASH_KEY("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case GET_HASH_KEY("Q0304_TUNNEL_ENT"):
			case GET_HASH_KEY("J_10P_TUNNEL_1A_INT"):
			case GET_HASH_KEY("BAC_TUNNELCURVE_INT"):
			case GET_HASH_KEY("Q0304_TUNNEL_INT"):
			case GET_HASH_KEY("L_08_TRAIN_TUNNEL2_INT"):
			case GET_HASH_KEY("BAC_TUNNELEXIT_INT"):
			case GET_HASH_KEY("BAC_TUNNELENT_INT"):
			case GET_HASH_KEY("J_14_TUNNEL01_INT"):
			case 653987431:
			case GET_HASH_KEY("BAC_TUNNEL_INT"):
			case GET_HASH_KEY("HEA_TUNNEL_01"):
			case GET_HASH_KEY("HEA_TUNNEL_02"):
			case GET_HASH_KEY("Q0304_TUNNEL_EXIT"):
			case GET_HASH_KEY("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_318()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_319(int iParam0)
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

int func_320(int iParam0)
{
	return iParam0 & 31;
}

bool func_321()
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

int func_322(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_431(func_174(iParam0));
}

bool func_323(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_324(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_327(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_328()
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

int func_329(int iParam0)
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

void func_330(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_331(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_332(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_432(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_334(int iParam0)
{
	if (!func_33(iParam0))
	{
		return false;
	}
	switch (func_206(iParam0))
	{
		case 1:
			switch (func_322(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_322(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_335(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_433(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_434(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_436(func_435(iParam0), 6);
}

void func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_433(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_434(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_437(func_435(iParam0), 6);
}

int func_337(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_338(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_438(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_339(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_340(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_439();
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
			func_440(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_341(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_342(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_441(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_176() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_442(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_442(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_373(iVar0) == -1)
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

void func_344(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_443(uParam0);
	}
}

bool func_345(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_373(iParam2);
	}
	else
	{
		iVar1 = func_372(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_373(iParam0);
	}
	else
	{
		iVar0 = func_372(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_260(*uParam1, 8388608))
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

float func_346(int iParam0, int iParam1)
{
	return func_296(iParam0, iParam1, 1, 1);
}

float func_347(var uParam0)
{
	return uParam0->f_26;
}

bool func_348(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_349(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 134217728);
	}
	else
	{
		func_180(uParam0, 134217728);
	}
}

void func_350()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_351(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_296(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_444(iVar0, 0)))
		{
			if (func_445(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_352(var uParam0)
{
	return uParam0->f_17;
}

bool func_353(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_260(*uParam0, 4194304))
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

int func_354(var uParam0)
{
	return uParam0->f_18;
}

bool func_355(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_444(iVar0, 0)))
		{
			if (func_446(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_356(bool bParam0, bool bParam1, bool bParam2)
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

float func_357(var uParam0)
{
	return uParam0->f_23;
}

int func_358(var uParam0)
{
	return uParam0->f_21;
}

int func_359(var uParam0)
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

bool func_360(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_447(iParam0, vParam4, 0.5f))
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

int func_361(int iParam0)
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
	if (func_448(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_362(int iParam0)
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

bool func_363(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_449(iParam1))
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

bool func_364(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_449(iParam1))
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

bool func_365(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_449(iParam1))
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

bool func_366(int iParam0, int iParam1)
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

bool func_367(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_450(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
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

bool func_368(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_369(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_370(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_370(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_371(var uParam0)
{
	return uParam0->f_24;
}

int func_372(int iParam0)
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

int func_373(int iParam0)
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

int func_374(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_366(Global_35, &iVar1))
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
		fVar2 = func_296(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_296(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_375(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_441(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_376(uParam1, iVar0))
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
				if (!bParam2 || !func_376(uParam1, iVar1))
				{
					if (func_370(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_376(var uParam0, int iParam1)
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

bool func_377(int iParam0)
{
	if (func_34())
	{
		return false;
	}
	return func_56(Global_1347702[58 /*49*/].f_15, 1);
}

int func_378(var uParam0)
{
	return uParam0->f_20;
}

int func_379(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_380()
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

bool func_381(int iParam0, bool bParam1)
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

void func_382(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_292(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_383(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_384(int iParam0, int iParam1, bool bParam2)
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

bool func_385(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_451((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_386(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_404(uParam0[iVar0 /*17*/]))
		{
			func_197(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_387(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_200(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_110(iParam0, 0);
		}
	}
}

int func_388(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_452(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_199((uParam2[iVar0 /*17*/])->f_6))
		{
			func_197(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_389(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_453(*uParam0);
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

int func_390(var uParam0, int iParam1)
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

void func_391(int* iParam0, int* iParam1)
{
	if (!func_269(iParam0, 23))
	{
		if (iParam1->f_7 == GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_197(iParam1, 19);
			func_406(iParam0, 23);
			func_454(iParam1, 2);
		}
	}
}

bool func_392(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_455(16))
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
					func_456(16);
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

void func_393(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_452(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_394(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_395(int iParam0)
{
	return (func_457(iParam0, 4) || func_457(iParam0, 5));
}

int func_396(int iParam0)
{
	return func_457(iParam0, 7);
}

int func_397(int iParam0)
{
	return func_457(iParam0, 6);
}

void func_398(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_404(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_452(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_399(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_458(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_261(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_311(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_311(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_459(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_400(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_460(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_461(iParam1, 1))
	{
		func_462(iParam1, 1);
		return true;
	}
	return false;
}

void func_401(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_112(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_402(int* iParam0, float fParam1, bool bParam2)
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

void func_403(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_404(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_405(int iParam0)
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

void func_406(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_407(var uParam0, float fParam1)
{
	if (func_463(uParam0, fParam1))
	{
		func_75(uParam0);
		return 1;
	}
	return 0;
}

bool func_408(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_409(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_410()
{
	return Global_1310750.f_16037;
}

bool func_411(int iParam0, int iParam1)
{
	if (!func_408(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_412(int iParam0)
{
	if (!func_408(iParam0))
	{
		return false;
	}
	if (func_464(64) && func_465(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_413(int iParam0)
{
	if (!func_408(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_414(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_408(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_466(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_415(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_467(iParam0, iParam1, bParam2);
}

bool func_416(int iParam0)
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
		iVar2 = func_468(iVar9);
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

bool func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_220();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
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
		return true;
	}
	return false;
}

float func_418(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_419(int iParam0)
{
	int iVar0;

	iVar0 = func_319(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_469(iVar0);
}

int func_420(int iParam0, int iParam1)
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
			func_470(iVar2);
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

void func_421()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

bool func_422(int iParam0)
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

void func_423(int iParam0, int iParam1, bool bParam2)
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

void func_424(int iParam0, bool bParam1)
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

void func_425(int iParam0, bool bParam1)
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

void func_426(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_427(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_383(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_428(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_429(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_430(int iParam0)
{
	return func_383(iParam0, 2);
}

int func_431(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_432(int iParam0, int iParam1)
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

int func_433(bool bParam0)
{
	if (func_176() == -1)
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

int func_434(int iParam0)
{
	struct<2> Var0;

	if (!func_471(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_435(int iParam0)
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

void func_436(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

void func_437(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

void func_438(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_472((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_472(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_33(Global_1898164.f_1[0 /*5*/]))
	{
		func_213(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_439()
{
	if (func_473())
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

void func_440(var uParam0, var uParam1)
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

bool func_441(bool bParam0, int iParam1, int iParam2)
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

int func_442(var uParam0)
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

void func_443(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_180(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_181(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_444(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_445(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_446(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_446(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_447(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_448(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_449(int iParam0)
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

int func_450(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_451(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_452(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_199(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_200(&(iParam1->f_6), 0, 1);
	}
	if (!func_199(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_404(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_474(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_199(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_459(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_475(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_476(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_309(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_475(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_311(iParam1->f_6, 0, 1);
				}
				else
				{
					func_311(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_453(int iParam0)
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

void func_454(int* iParam0, int iParam1)
{
	if (!func_196(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_197(iParam0, 14);
		}
	}
}

bool func_455(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_456(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_457(int iParam0, int iParam1)
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

bool func_458(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_459(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_199(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	func_475(iParam0, 18, 0, 1);
	func_475(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_460(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_199(iParam0))
	{
		return false;
	}
	iVar0 = func_313(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_461(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_199(iParam0))
	{
		return false;
	}
	iVar0 = func_313(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_462(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_463(var uParam0, float fParam1)
{
	if (!func_71(uParam0))
	{
		return false;
	}
	if (func_73(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_465(int iParam0)
{
	return func_411(iParam0, Global_1310750.f_16072 | 64);
}

void func_466(int iParam0)
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

void func_467(int iParam0, int iParam1, bool bParam2)
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

int func_468(int iParam0)
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

int func_469(int iParam0)
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

int func_470(int iParam0)
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

bool func_471(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_472(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_473()
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

int func_474(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_383(iVar0, 2))
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
				func_477(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_475(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_476(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_199(iParam0))
	{
		return;
	}
	iVar0 = func_313(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_477(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_427(iParam0, 1);
	func_428(iParam0, 1);
	func_429(iParam0, 128);
}

