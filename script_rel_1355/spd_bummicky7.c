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
	struct<374> Local_14 = { 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1579174863, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = -1;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 1097859072;
	var uLocal_406 = 1000;
	var uLocal_407 = 1067450368;
	var uLocal_408 = 5000;
	var uLocal_409 = 42;
	var uLocal_410 = 1103626240;
	var uLocal_411 = 1077936128;
	var uLocal_412 = 1106247680;
	var uLocal_413 = 1103101952;
	var uLocal_414 = 1097859072;
	var uLocal_415 = 1103626240;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar4[24];

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_420 = GET_HASH_KEY("CS_MICKEY");
	iLocal_428 = 1689938120;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&Local_14);
		func_3(19, 6, &(Local_14.f_218[0]), &uLocal_416, &uLocal_424, Local_14.f_239, 1097859072 /* Float: 15f */, 0);
		func_4(&Local_14);
		func_5(Local_14.f_218[0], Local_14.f_230);
		if (Local_14 >= 6 && Local_14 < 67)
		{
			func_6(&Local_14);
			func_7(&Local_14);
		}
		func_8(&Local_14, 6);
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
		{
			if (!func_9(Local_14.f_218[0], 0))
			{
				func_1();
			}
			else if (Local_14 > 2 && Local_14 < 67)
			{
				if (Local_14.f_239 > 50f)
				{
					Local_14.f_242 = func_10(&uLocal_388, &(Local_14.f_129), &(Local_14.f_218[0]), &(Local_14.f_243), 1101004800 /* Float: 20f */);
				}
				else
				{
					Local_14.f_242 = func_11(Local_14.f_218[0], 0, &uLocal_388, &(Local_14.f_129), 0, Local_14.f_239);
				}
				if (Local_14.f_242)
				{
					if (Local_14 <= 24)
					{
						func_12(&(Local_14.f_253), 4096);
					}
					if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_224))
					{
						func_13(Local_14.f_224);
						VOLUME::_DELETE_VOLUME(Local_14.f_224);
					}
					if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_231))
					{
						VOLUME::_DELETE_VOLUME(Local_14.f_231);
					}
					if (!func_14(Local_14.f_253, 131072))
					{
						func_12(&(Local_14.f_253), 131072);
					}
					func_15(&(Local_14.f_296), &(Local_14.f_317));
					func_16(Local_14.f_218[0], 1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 130, false);
					func_17(Local_14.f_218[0]);
					func_18(&(Local_14.f_136));
					func_19(&Local_14, 0, 0, 0, 0, 0, 0);
					func_19(&Local_14, 1, 1, 0, 0, 0, 0);
					func_20(&Local_14, 67);
				}
			}
		}
		if ((Local_14 >= 2 && Local_14 <= 36) || Local_14 >= 56)
		{
			func_21(&Local_14);
		}
		if (Local_14 >= 37 && Local_14 <= 56)
		{
			func_22(&Local_14, 65536, 1, 2, 4, 1);
		}
		if (Local_14 >= 28 && Local_14 < 56)
		{
			func_23();
		}
		func_24(&Local_14);
		func_25(&Local_14);
		func_26(&Local_14);
		func_27(Local_14.f_218[0], &(Local_14.f_253), 262144, 19, Local_14.f_239);
		func_28(&Local_14, iLocal_425, "b_AnimatePlayer", 0);
		func_28(&Local_14, iLocal_426, "b_AnimatePlayer", 0);
		func_28(&Local_14, iLocal_427, "b_AnimatePlayer", 0);
		if (Local_14 > 2 && func_9(Local_14.f_218[0], 0))
		{
			if ((PED::IS_PED_ON_MOUNT(Global_35) && Local_14.f_239 <= 4f) || Local_14 >= 57)
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_14.f_218[0], 262144);
			}
			else if (Local_14 < 57)
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_14.f_218[0], 262144);
			}
		}
		switch (Local_14)
		{
			case 0:
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_245))
				{
					Local_14.f_245 = ANIMSCENE::_CREATE_ANIM_SCENE(func_29(), 0, func_30(), false, true);
				}
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_425))
				{
					iLocal_425 = ANIMSCENE::_CREATE_ANIM_SCENE(func_31(), 0, func_32(), false, true);
				}
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_426))
				{
					iLocal_426 = ANIMSCENE::_CREATE_ANIM_SCENE(func_33(), 0, func_34(), false, true);
				}
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_427))
				{
					iLocal_427 = ANIMSCENE::_CREATE_ANIM_SCENE(func_35(), 0, func_36(), false, true);
				}
				Local_14.f_237 = "MICKEY";
				if (!func_14(Local_14.f_253, 32768))
				{
					if (Global_1396257[19 /*638*/].f_633 != 0)
					{
						func_12(&(Local_14.f_253), 1);
						func_12(&(Local_14.f_253), 32768);
					}
					else
					{
						func_12(&(Local_14.f_253), 32768);
					}
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_245) && func_14(Local_14.f_253, 32768))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_245);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_425);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_426);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_427);
					STREAMING::REQUEST_ANIM_DICT(func_37());
					HUD::TEXT_BLOCK_REQUEST("SPBM");
					HUD::TEXT_BLOCK_REQUEST("SPCWVAU");
					STREAMING::REQUEST_MODEL(iLocal_420, false);
					func_38(&Local_14);
					func_39(Local_14.f_224, "SP_BumMickey7_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
					POPULATION::_0xB56D41A694E42E86(Local_14.f_227, 2500607, 0, 0, -1, -1, 10);
					POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_227, 0, 0, 0, -1, -1, 0);
					iLocal_419 = func_41(19, 6, 9, func_40(19));
					if (!func_42(iLocal_419))
					{
					}
					if (func_42(func_41(19, 0, 9, func_40(19))))
					{
						Local_14.f_244 = func_43(func_41(19, 0, 9, func_40(19)));
						Local_14.f_255 = func_44(func_41(19, 0, 9, func_40(19)));
					}
					if (func_45())
					{
						func_46(&(Local_14.f_3), Global_35, "JOHN", 0);
					}
					else
					{
						func_46(&(Local_14.f_3), Global_35, "ARTHUR", 0);
					}
					func_47(&(Local_14.f_195));
					func_48(&uLocal_388);
					func_49(&uLocal_388, 1);
					func_50(&uLocal_388, 1);
					func_51(&uLocal_388, 1);
					func_52(&uLocal_388, 1);
					func_53(&uLocal_388, 1);
					func_54(&uLocal_388, 1);
					func_55(&uLocal_388, 0);
					func_56(&uLocal_388, 1);
					func_57(&uLocal_388, 0);
					func_58(&uLocal_388, 1);
					func_59(&uLocal_388, 1);
					func_60(&uLocal_388, 1);
					func_61(&uLocal_388, 0);
					func_62(&uLocal_388, 0);
					func_63(&uLocal_388, 0);
					func_64(&uLocal_388, 0);
					func_65(&uLocal_388, 1);
					func_20(&Local_14, 1);
				}
				break;
			case 1:
				PED::_0xED9582B3DA8F02B4(1);
				if ((((((((ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_14.f_245, true, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_425, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_426, true, false)) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_427, true, false)) && STREAMING::HAS_ANIM_DICT_LOADED(func_37())) && HUD::TEXT_BLOCK_IS_LOADED("SPBM")) && HUD::TEXT_BLOCK_IS_LOADED("SPCWVAU")) && STREAMING::HAS_MODEL_LOADED(iLocal_420)) && PED::_0x5C16855277819BBF() == 1)
				{
					func_20(&Local_14, 2);
				}
				break;
			case 2:
				if (func_14(Local_14.f_253, 1))
				{
					vVar0 = { func_66(1) };
				}
				else
				{
					vVar0 = { func_66(0) };
				}
				if (func_67(&(Local_14.f_218[0]), iLocal_420, vVar0, vVar0.f_3, 1, 1, 0))
				{
					if (func_9(Local_14.f_218[0], 0))
					{
						func_68(Local_14.f_218[0], iLocal_428);
						func_69(Local_14.f_218[0], 19);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_218[0], "special_ped_group", 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_218[0], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_218[0], GET_HASH_KEY("REL_CIVMALE"));
						TASK::_0x42CFD8FD8CC8DC69(Local_14.f_218[0], 1);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_14.f_218[0], false);
						TASK::SET_PED_PATH_CLIMB_COST_MODIFIER(Local_14.f_218[0], 20f);
						PED::SET_PED_COMBAT_ABILITY(Local_14.f_218[0], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_218[0], 17, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 130, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 448, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 344, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 174, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 153, true);
						PED::SET_PED_LASSO_HOGTIE_FLAG(Local_14.f_218[0], 0, false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_14.f_218[0], 262144);
						TASK::_0x7C015D8BCEC72CF4(Local_14.f_218[0], 1);
						func_46(&(Local_14.f_3), Local_14.f_218[0], Local_14.f_237, 0);
						ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_14.f_218[0], false);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_218[0], 1.5f);
						if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_226))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_226, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_227))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_227, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_228))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_228, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_229))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_229, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_231))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_231, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (Local_14.f_244 < 0)
						{
							Local_14.f_244 = 0;
						}
						func_70(Local_14.f_227, 0, 0, 0);
						func_71(&uLocal_421, vVar0, 5f, 5f, 5f);
						if (func_14(Local_14.f_253, 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, func_72(), func_73(), 2);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, func_74(), func_75(), 2);
						}
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_245, "cs_mickey", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_425, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_425, "JOHN", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_426, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_426, "JOHN", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_427, "MICKEY", Local_14.f_218[0], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_427, "JOHN", Global_35, 0);
						PED::_0x7C00CFC48A782DC0(Local_14.f_230, Local_14.f_218[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						if (!func_76(&uLocal_423))
						{
							uLocal_423 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar0, 1.5f, 2, -1, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MICKEY"));
						func_20(&Local_14, 21);
					}
				}
				break;
			case 6:
				if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !func_14(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14.f_218[0], Global_35, 17))
					{
						func_20(&Local_14, func_77());
					}
					else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_245))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_14.f_245, false) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_14.f_218[0], -1527527524))
						{
							func_78(&Local_14, &(Local_14.f_244), 0);
							func_79(&(Local_14.f_133));
						}
					}
				}
				break;
			case 21:
				if (!func_80(&(Local_14.f_195)))
				{
					if (func_14(Local_14.f_253, 16777216))
					{
						func_81(&Local_14, &(Local_14.f_245), func_30(), 1, 0, 1, 1, 1);
					}
					else if ((VOLUME::DOES_VOLUME_EXIST(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
					{
						if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !func_14(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_14.f_218[0], Global_35, 17))
						{
							func_20(&Local_14, func_77());
						}
						else if (func_81(&Local_14, &(Local_14.f_245), func_30(), 1, 0, 1, 1, 1))
						{
							func_20(&Local_14, 6);
						}
					}
				}
				break;
			case 28:
				func_82(&(Local_14.f_317[0 /*17*/]), 0, 0);
				func_82(&(Local_14.f_317[1 /*17*/]), 0, 0);
				if (!func_14(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_218[0], Global_35, -1, 0, 51, 0);
					if (func_81(&Local_14, &(Local_14.f_245), func_83(), 1, 0, 0, 1, 1))
					{
						if (!func_84(Local_14.f_218[0], GET_HASH_KEY("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							func_85(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							func_86(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_12(&(Local_14.f_253), 8192);
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 29:
				func_82(&(Local_14.f_317[0 /*17*/]), 0, 0);
				func_82(&(Local_14.f_317[1 /*17*/]), 0, 0);
				if (!func_14(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_218[0], Global_35, -1, 0, 51, 0);
					if (func_81(&Local_14, &(Local_14.f_245), func_87(), 1, 0, 0, 1, 1))
					{
						if (!func_84(Local_14.f_218[0], GET_HASH_KEY("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							func_85(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							func_86(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_12(&(Local_14.f_253), 8192);
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 30:
				func_82(&(Local_14.f_317[0 /*17*/]), 0, 0);
				func_82(&(Local_14.f_317[1 /*17*/]), 0, 0);
				if (!func_14(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_218[0], Global_35, -1, 0, 51, 0);
					if (func_81(&Local_14, &(Local_14.f_245), func_88(), 1, 0, 0, 1, 1))
					{
						if (!func_84(Local_14.f_218[0], GET_HASH_KEY("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
						{
							func_86(&(Local_14.f_353));
							func_85(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
							func_89(Global_35, Local_14.f_218[0], &(Local_14.f_156), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_12(&(Local_14.f_253), 8192);
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 22:
				if (func_81(&Local_14, &(Local_14.f_245), func_90(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 23:
				if (func_81(&Local_14, &(Local_14.f_245), func_91(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 24:
				if (func_81(&Local_14, &(Local_14.f_245), func_92(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 20:
				if (func_81(&Local_14, &(Local_14.f_245), func_93(), 1, 0, 1, 1, 1))
				{
					func_12(&(Local_14.f_253), 8192);
					func_20(&Local_14, 21);
				}
				break;
			case 7:
				if (func_81(&Local_14, &(Local_14.f_245), func_94(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 8:
				if (func_81(&Local_14, &(Local_14.f_245), func_95(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 9:
				if (func_81(&Local_14, &(Local_14.f_245), func_96(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 10:
				if (func_81(&Local_14, &(Local_14.f_245), func_97(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 11:
				if (func_81(&Local_14, &(Local_14.f_245), func_98(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 12:
				if (func_81(&Local_14, &(Local_14.f_245), func_99(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 13:
				if (func_81(&Local_14, &(Local_14.f_245), func_100(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 14:
				if (func_81(&Local_14, &(Local_14.f_245), func_101(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 15:
				if (func_81(&Local_14, &(Local_14.f_245), func_102(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 16:
				if (func_81(&Local_14, &(Local_14.f_245), func_103(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 17:
				if (func_81(&Local_14, &(Local_14.f_245), func_104(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 18:
				if (func_81(&Local_14, &(Local_14.f_245), func_105(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 19:
				if (func_81(&Local_14, &(Local_14.f_245), func_106(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 5:
				break;
			case 36:
				if (func_107(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				if (((VOLUME::DOES_VOLUME_EXIST(Local_14.f_229) && VOLUME::DOES_VOLUME_EXIST(Local_14.f_226)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0))
					{
						func_20(&Local_14, 37);
					}
				}
				break;
			case 35:
				if (func_107(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				if (((VOLUME::DOES_VOLUME_EXIST(Local_14.f_229) && VOLUME::DOES_VOLUME_EXIST(Local_14.f_226)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_218[0]))
				{
					if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0) && func_14(Local_14.f_253, 8192)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
					{
						func_20(&Local_14, 36);
					}
					else if (func_81(&Local_14, &(Local_14.f_245), func_108(), 0, 1, 1, 1, 1))
					{
						func_20(&Local_14, 36);
					}
				}
				break;
			case 37:
				func_86(&(Local_14.f_353));
				func_85(Local_14.f_218[0], Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				func_89(Global_35, Local_14.f_218[0], &(Local_14.f_156), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
				func_12(&(Local_14.f_253), 536870912);
				func_20(&Local_14, 51);
				break;
			case 31:
				if (func_81(&Local_14, &(Local_14.f_245), func_109(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 32:
				if (func_81(&Local_14, &(Local_14.f_245), func_110(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 33:
				if (func_81(&Local_14, &(Local_14.f_245), func_111(), 0, 1, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 34:
				if (func_81(&Local_14, &(Local_14.f_245), func_112(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 51:
				func_113(&uLocal_422, 1);
				func_114(Global_35);
				func_115(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_116(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_117(&(Local_14.f_218[0]), &iLocal_425, func_32()))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_426, func_34()) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_426, func_34()))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_426, func_34());
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_426, func_118()) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_426, func_118()))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_426, func_118());
					}
					func_20(&Local_14, 53);
				}
				break;
			case 53:
				func_114(Global_35);
				func_115(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_116(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_119(&(Local_14.f_218[0]), &iLocal_425))
				{
					func_19(&Local_14, 0, 15, 1, 1, 0, 0);
					func_19(&Local_14, 1, 16, 1, 1, 0, 0);
					func_121(&Local_14, func_120(2, 0, 0), 1);
					func_20(&Local_14, 54);
				}
				break;
			case 54:
				if (func_107(&Local_14))
				{
					if (!func_14(Local_14.f_254, 2))
					{
						func_12(&(Local_14.f_254), 2);
					}
					if (!func_14(Local_14.f_254, 4))
					{
						func_12(&(Local_14.f_254), 4);
					}
					func_20(&Local_14, 55);
				}
				func_114(Global_35);
				func_115(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_116(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_14(Local_14.f_254, 4))
				{
					if (func_14(Local_14.f_254, 1))
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_426, func_34(), true);
					}
					else if (func_14(Local_14.f_254, 2))
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_426, func_118(), true);
					}
					func_20(&Local_14, 55);
				}
				break;
			case 55:
				if (func_107(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				func_114(Global_35);
				func_115(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_116(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_14(Local_14.f_254, 1))
				{
					func_122(&(Local_14.f_218[0]), &iLocal_426, func_34());
					func_123(&Local_14, iLocal_426, func_34(), 0.888f);
					if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_426, false))
					{
						func_20(&Local_14, 56);
					}
				}
				else if (func_14(Local_14.f_254, 2))
				{
					func_122(&(Local_14.f_218[0]), &iLocal_426, func_118());
					if (!func_14(Local_14.f_254, 32))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_426, false))
						{
							StringCopy(&cVar4, "SPCWV_SORRYMR", 24);
							if (func_124(&(Local_14.f_3), cVar4, 0, -1, 0, 0))
							{
								func_12(&(Local_14.f_254), 32);
							}
						}
					}
					else if (!AUDIO::_0x54B187F111D9C6F8(Local_14.f_218[0], 0))
					{
						func_20(&Local_14, 57);
					}
				}
				break;
			case 56:
				if (func_107(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				func_122(&(Local_14.f_218[0]), &iLocal_427, func_36());
				func_114(Global_35);
				func_115(Local_14.f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				func_116(Global_35, Local_14.f_218[0], 0, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_125(&(Local_14.f_218[0]), &iLocal_427) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_427, false))
				{
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						func_126(Local_14.f_218[0], 1);
						func_127(Global_35, 1);
						func_128(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824 /* Float: 2f */);
					}
					func_20(&Local_14, 57);
				}
				break;
			case 57:
				if (!func_14(Local_14.f_253, 128))
				{
					if (!func_14(Local_14.f_253, 16384))
					{
						func_129(19, 12);
						Global_40.f_11623[19 /*8*/].f_3 = func_130();
						func_12(&(Local_14.f_253), 16384);
					}
				}
				if (!Local_14.f_373)
				{
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824 /* Float: 2f */))
					{
						func_127(Global_35, 1);
						func_128(&(Local_14.f_353));
						func_126(Local_14.f_218[0], 1);
						Local_14.f_373 = 1;
						func_12(&(Local_14.f_253), 1073741824 /* Float: 2f */);
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_218[0], false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 448, false);
				PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 153, false);
				if (func_131(&Local_14, &(Local_14.f_218[0]), 0))
				{
					func_12(&(Local_14.f_253), 256);
					func_20(&Local_14, 69);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_245) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_245);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_425) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_425);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_427) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_427);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_426) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_218[0]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_426);
				}
				break;
			case 65:
				if (!func_107(&Local_14))
				{
					func_20(&Local_14, 37);
				}
				break;
			case 66:
				break;
			case 67:
				if (func_132(&(Local_14.f_136)) > 0.6f)
				{
					if (func_14(Local_14.f_253, 4096))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_245) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_14.f_245, false))
						{
							func_81(&Local_14, &(Local_14.f_245), func_133(), 0, 0, 0, 1, 0);
						}
						else
						{
							func_134(&(Local_14.f_253), 4096);
						}
					}
					else
					{
						if (!func_14(Local_14.f_253, 524288))
						{
							if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_425, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(iLocal_425, 0);
							}
							if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_426, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(iLocal_426, 0);
							}
							if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_427, false))
							{
								ANIMSCENE::RESET_ANIM_SCENE(iLocal_427, 0);
							}
							if (func_135(Local_14.f_218[0], "PANIC_HELP", GET_HASH_KEY("SPEECH_PARAMS_SHOUTED"), 0, Local_14.f_237, 0))
							{
								func_12(&(Local_14.f_253), 524288);
							}
						}
						if (!PED::IS_PED_FLEEING(Local_14.f_218[0]))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_218[0], 17, true);
							TASK::TASK_FLEE_PED(Local_14.f_218[0], Global_35, 3, 1, 6000f, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_14.f_218[0], true);
							PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 448, false);
							PED::SET_PED_CONFIG_FLAG(Local_14.f_218[0], 153, false);
						}
					}
				}
				if (Local_14.f_239 >= 200f)
				{
					if (!PED::_0x5102307CE88798EB(Local_14.f_218[0]))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_218[0]);
					}
					if (!PED::IS_TRACKED_PED_VISIBLE(Local_14.f_218[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
						{
							if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824 /* Float: 2f */))
							{
								func_126(Local_14.f_218[0], 1);
								func_127(Global_35, 1);
								func_128(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824 /* Float: 2f */);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
							PED::DELETE_PED(&(Local_14.f_218[0]));
						}
						func_136(&Local_14);
					}
				}
				break;
			case 69:
				break;
			case 68:
				if (Local_14.f_239 <= 6f && func_14(Local_14.f_253, 131072))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_14.f_218[0], 2.5f);
				}
				else
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_14.f_218[0], 1f);
				}
				break;
			default:
				break;
		}
		if (func_42(iLocal_419))
		{
			switch (Local_14)
			{
				case 57:
				case 69:
					if (!PED::_0x5102307CE88798EB(Local_14.f_218[0]))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_218[0]);
					}
					if (Local_14.f_239 > 100f && !PED::IS_TRACKED_PED_VISIBLE(Local_14.f_218[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_218[0]))
						{
							if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824 /* Float: 2f */))
							{
								func_126(Local_14.f_218[0], 1);
								func_127(Global_35, 1);
								func_128(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824 /* Float: 2f */);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
							PED::DELETE_PED(&(Local_14.f_218[0]));
						}
						func_136(&Local_14);
					}
					break;
			}
		}
	}
}

void func_1()
{
	func_137(19);
	func_113(&uLocal_422, 1);
	func_138(&uLocal_421);
	if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824 /* Float: 2f */))
	{
		func_128(&(Local_14.f_353));
		func_127(Global_35, 1);
		if (func_9(Local_14.f_218[0], 0))
		{
			func_126(Local_14.f_218[0], 1);
		}
		func_12(&(Local_14.f_253), 1073741824 /* Float: 2f */);
	}
	if (func_9(Local_14.f_218[0], 0))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_218[0], 0f);
		PED::_0x39A2FC5AF55A52B1(Local_14.f_218[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_218[0]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_245))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_245);
	}
	if (func_76(&uLocal_423))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&uLocal_423, 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_224))
	{
		func_13(Local_14.f_224);
		VOLUME::_DELETE_VOLUME(Local_14.f_224);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_227))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_227);
		POPULATION::_0xA1CFB35069D23C23(Local_14.f_227);
		VOLUME::_DELETE_VOLUME(Local_14.f_227);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_226))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_226);
		POPULATION::_0xA1CFB35069D23C23(Local_14.f_226);
		VOLUME::_DELETE_VOLUME(Local_14.f_226);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_229))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_229);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_225))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_225);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_14.f_230))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_230);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][6 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][6 /*48*/].f_47);
	}
	func_139(&Local_14);
	if (HUD::TEXT_BLOCK_IS_LOADED("SPBM"))
	{
		HUD::_TEXT_BLOCK_DELETE("SPBM");
	}
	if (HUD::TEXT_BLOCK_IS_LOADED("SPCWVAU"))
	{
		HUD::_TEXT_BLOCK_DELETE("SPCWVAU");
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(int iParam0)
{
	if ((func_140(19, iParam0->f_218[0], 1, 1) && (*iParam0 > 2 && *iParam0 < 67)) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && (*iParam0 > 2 && *iParam0 < 67)))
	{
		if (*iParam0 > 30)
		{
			if (!func_14(iParam0->f_253, 256))
			{
				if (*iParam0 != 57)
				{
					func_19(iParam0, 0, 0, 0, 0, 0, 0);
					func_19(iParam0, 1, 1, 0, 0, 0, 0);
					func_20(iParam0, 57);
					if (!func_14(iParam0->f_253, 65536))
					{
						func_12(&(iParam0->f_253), 128);
					}
				}
			}
		}
		else if (*iParam0 < 30)
		{
			if (!func_14(iParam0->f_253, 16777216))
			{
				func_12(&(iParam0->f_253), 16777216);
				func_20(iParam0, 21);
			}
		}
	}
	else if (func_14(iParam0->f_253, 16777216))
	{
		func_134(&(iParam0->f_253), 16777216);
	}
}

int func_3(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_130();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_141(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_142(uParam3))
	{
		func_143(uParam3, 0f);
	}
	else if (func_144(uParam3) >= 2f)
	{
		if (!func_145(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_146(iParam0);
			*uParam4 = 1;
			func_79(uParam3);
			return 1;
		}
		else
		{
			func_146(iParam0);
			*uParam4 = 1;
			func_79(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_142(&(uParam0->f_148)))
	{
		func_143(&(uParam0->f_148), 0f);
	}
	else if (func_147(&(uParam0->f_148)) >= 1000)
	{
		uParam0->f_239 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_218[0], true, false), func_148(PLAYER::GET_PLAYER_INDEX()), false);
		func_79(&(uParam0->f_148));
	}
}

void func_5(int iParam0, int iParam1)
{
	if (func_149(iParam0))
	{
		if (func_150(Global_35, iParam1, 0, 1))
		{
			LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_LOITERING"), 0, 0, -1);
		}
	}
}

void func_6(int iParam0)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar0 = true;
	}
	if (*iParam0 == 57)
	{
		bVar0 = true;
	}
	if (func_9(iParam0->f_218[0], 0))
	{
		if (func_150(Global_35, iParam0->f_226, 0, 1))
		{
			if (!func_14(iParam0->f_253, 33554432))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_218[0], -1, 2108, 51, 0);
				func_12(&(iParam0->f_253), 33554432);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_14(iParam0->f_253, 33554432))
		{
			func_151(Global_35);
			func_134(&(iParam0->f_253), 33554432);
		}
	}
}

void func_7(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_218[0]))
	{
		if (func_9(iParam0->f_218[0], 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_218[0], 1.5f);
		}
	}
}

void func_8(int iParam0, int iParam1)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_152(19, iParam1, &(iParam0->f_195), iParam0->f_218[0]))
		{
			iParam0->f_372 = 1;
			if (func_153(&(iParam0->f_195)))
			{
				func_136(iParam0);
			}
		}
		if (*iParam0 == 21)
		{
			if (iParam0->f_372)
			{
				if (func_80(&(iParam0->f_195)))
				{
					if (!func_153(&(iParam0->f_195)))
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_245) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0->f_245, false))
						{
							func_81(iParam0, &(iParam0->f_245), func_133(), 0, 0, 0, 1, 0);
						}
						else
						{
							func_12(&(iParam0->f_253), 128);
							func_20(iParam0, 57);
						}
					}
				}
			}
		}
		if (!func_9(Global_35, 0))
		{
			func_136(iParam0);
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_154(76), true, 0))
		{
			if (!func_142(&(iParam0->f_130)))
			{
				func_155(&(iParam0->f_130), 0);
			}
			else if (func_144(&(iParam0->f_130)) > 10f)
			{
				func_79(&(iParam0->f_130));
				func_136(iParam0);
			}
		}
	}
}

bool func_9(int iParam0, int iParam1)
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
	if (func_14(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_10(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630.f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (func_11(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_156(uParam2, 1, iVar0);
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
			if (func_157(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_158(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_159(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_160(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_161(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_162(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_158(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_163(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_164(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_158(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_165(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_158(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_166(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_166(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_158(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_167(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_168(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_169(uParam2, 4000))
				{
					if ((func_170(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_171(uParam2, iParam0)) && func_172(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_158(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_170(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_171(uParam2, iParam0)) && func_172(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_173(iParam0, Global_1935630.f_41))
							{
								func_174();
								*uParam3 = 2;
								func_158(iParam0, uParam2, *uParam3);
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
						if (func_173(iParam0, Global_1935630.f_41))
						{
							func_174();
							*uParam3 = 2;
							func_158(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_175(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_176() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_174();
						*uParam3 = 2;
						func_158(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_177())
					{
						if (func_173(iParam0, Global_1935630.f_42))
						{
							func_174();
							*uParam3 = 2;
							func_158(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_178(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_158(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_179(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_180(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_158(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_181(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_182(uParam2, 4000))
				{
					if (func_183(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_158(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_184(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_158(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_185(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_158(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_12(var uParam0, int iParam1)
{
	func_186(uParam0, iParam1);
}

void func_13(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_187(vVar0, 0);
}

bool func_14(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_15(int* iParam0, var uParam1)
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
	func_188(iParam0, uParam1, 1);
	func_189(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_16(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_17(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

void func_18(var uParam0)
{
	func_143(uParam0, 0f);
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char cVar0[16];
	float fVar2;

	cVar0 = { func_190(iParam2) };
	iParam0->f_317[iParam1 /*17*/].f_13 = "";
	func_191(&(iParam0->f_317[iParam1 /*17*/]), cVar0);
	func_82(&(iParam0->f_317[iParam1 /*17*/]), bParam3, 0);
	func_192(&(iParam0->f_317[iParam1 /*17*/]), bParam6);
	if (bParam4)
	{
		func_143(&(iParam0->f_145), 0f);
	}
	else if (bParam5)
	{
		fVar2 = func_132(&(iParam0->f_145));
		fVar2 = (fVar2 - 5f);
		if (fVar2 <= 0f)
		{
			fVar2 = 0f;
		}
		func_143(&(iParam0->f_145), fVar2);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 30:
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			break;
		case 57:
			func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
			func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
			if (!func_14(iParam0->f_253, 32))
			{
				func_12(&(iParam0->f_253), 32);
			}
			func_151(iParam0->f_218[0]);
			func_151(Global_35);
			break;
		case 67:
			func_151(iParam0->f_218[0]);
			func_151(Global_35);
			func_146(19);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_218[0], 448, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_218[0], 153, false);
			break;
	}
	*iParam0 = iParam1;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return;
	}
	if (!func_14(iParam0->f_253, 2))
	{
		func_193(iParam0);
		func_12(&(iParam0->f_253), 2);
	}
	if (iParam0->f_239 > 20f)
	{
		return;
	}
	iVar1 = func_194(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), &iVar0, 0f, 2, 0, 0, iParam0->f_352, 0, 0, 2, 1, iParam0->f_239, 0);
	if (func_14(iParam0->f_253, 32))
	{
		return;
	}
	if (func_14(iParam0->f_253, 16777216))
	{
		if (func_195(&(iParam0->f_317[0 /*17*/]), 1, 0))
		{
			func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
		}
		if (func_195(&(iParam0->f_317[1 /*17*/]), 1, 0))
		{
			func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
		}
		return;
	}
	if (iParam0->f_239 < 15f)
	{
		if (!func_14(iParam0->f_253, 1048576))
		{
			func_82(&(iParam0->f_317[0 /*17*/]), 1, 0);
			func_82(&(iParam0->f_317[1 /*17*/]), 1, 0);
			func_12(&(iParam0->f_253), 1048576);
		}
	}
	else if (func_14(iParam0->f_253, 1048576))
	{
		func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
		func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
		func_134(&(iParam0->f_253), 1048576);
	}
	switch (iVar1)
	{
		case 0:
			func_79(&(iParam0->f_145));
			func_12(&(iParam0->f_253), 32);
			func_20(iParam0, func_77());
			func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
			func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
			break;
		case 1:
			iParam0->f_255++;
			func_79(&(iParam0->f_145));
			func_12(&(iParam0->f_253), 32);
			func_20(iParam0, func_77());
			func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
			func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
			break;
	}
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return;
	}
	iVar0 = func_196(&(iParam0->f_218[0]), &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_14(iParam0->f_254, iParam4))
	{
		return;
	}
	if (func_14(iParam0->f_253, 134217728))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			if (!func_14(iParam0->f_254, iParam2))
			{
				func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
				func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
				if (bParam5)
				{
					func_19(iParam0, 0, 0, 0, 0, 0, 0);
					func_19(iParam0, 1, 1, 0, 0, 0, 0);
				}
				func_79(&(iParam0->f_145));
				func_197(19, &(iParam0->f_218[0]), &(iParam0->f_253), iParam1);
				func_121(iParam0, func_120(3, 0, 0), 1);
				func_12(&(iParam0->f_254), iParam4);
				func_12(&(iParam0->f_254), iParam2);
			}
			break;
		case 1:
			if (!func_14(iParam0->f_254, iParam3))
			{
				func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
				func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
				if (bParam5)
				{
					func_19(iParam0, 0, 0, 0, 0, 0, 0);
					func_19(iParam0, 1, 1, 0, 0, 0, 0);
				}
				func_79(&(iParam0->f_145));
				func_197(19, &(iParam0->f_218[0]), &(iParam0->f_253), iParam1);
				func_121(iParam0, func_120(3, 0, 0), 1);
				func_12(&(iParam0->f_254), iParam4);
				func_12(&(iParam0->f_254), iParam3);
			}
			break;
	}
}

void func_23()
{
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PICKUP_CARRIABLE"), false);
}

void func_24(int iParam0)
{
	if (*iParam0 >= 7 && *iParam0 <= 24)
	{
		if (AUDIO::_0x54B187F111D9C6F8(iParam0->f_218[0], 1))
		{
			func_198(&(iParam0->f_218[0]), &(iParam0->f_256), GET_HASH_KEY("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 10f, 5f);
		}
	}
}

void func_25(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (func_84(iParam0->f_218[0], GET_HASH_KEY("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		func_115(iParam0->f_218[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		func_199(&(iParam0->f_353), iParam0->f_218[0]);
		func_116(Global_35, iParam0->f_218[0], 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
}

void func_26(int iParam0)
{
	if (func_14(iParam0->f_253, 64) && iParam0->f_257 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 51)
	{
		if (func_200(&(iParam0->f_218[0]), &(iParam0->f_261), &(iParam0->f_151), &(iParam0->f_257), 3, 0, 7000, iParam0->f_239))
		{
			func_12(&(iParam0->f_253), 64);
		}
	}
}

void func_27(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_201(iParam3);
	if (fParam4 == 0f)
	{
		if (func_141(iParam0, Global_35, 15f, 1))
		{
			if (!func_202(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_186(uParam1, iParam2);
				}
			}
		}
		else if (func_202(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_203(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_202(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_186(uParam1, iParam2);
			}
		}
	}
	else if (func_202(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_203(uParam1, iParam2);
	}
}

void func_28(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1, false))
	{
		if (((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_STILL(Global_35)) || PED::IS_PED_STOPPED(Global_35)) || bParam3)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam2, true, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam2, false, false);
		}
	}
}

char* func_29()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_1@ig_1_begging";
}

char* func_30()
{
	return "pbl_base_reset";
}

char* func_31()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_8@q1_join";
}

char* func_32()
{
	return "pl_action";
}

char* func_33()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_8@a1_yes_no";
}

char* func_34()
{
	return "PL_Yes";
}

char* func_35()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_8@cnv_talk";
}

char* func_36()
{
	return "pl_action";
}

char* func_37()
{
	return "script_special_ped@pdcwv_bum_civil_war_veteran@ig@ig_8";
}

void func_38(int iParam0)
{
	if (func_14(iParam0->f_253, 1))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_224))
		{
			iParam0->f_224 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_225))
		{
			iParam0->f_225 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_226))
		{
			iParam0->f_226 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_227))
		{
			iParam0->f_227 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 4f, "StayAway");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_228))
		{
			iParam0->f_228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 6f, 10f, 10f, "Spotted");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_229))
		{
			iParam0->f_229 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 15f, 15f, 10f, "Near");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_230))
		{
			iParam0->f_230 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_231))
		{
			iParam0->f_231 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLCYLINDER"), -192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_231, 0);
			VOLUME::_0xBE551C2CC421185D(iParam0->f_231, 1);
		}
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_224))
		{
			iParam0->f_224 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_225))
		{
			iParam0->f_225 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_226))
		{
			iParam0->f_226 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_227))
		{
			iParam0->f_227 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 3f, 3f, 4f, "StayAway");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_228))
		{
			iParam0->f_228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7f, 13f, 10f, "Spotted");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_229))
		{
			iParam0->f_229 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 13.5f, 13.5f, 10f, "Near");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_230))
		{
			iParam0->f_230 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_231))
		{
			iParam0->f_231 = VOLUME::_0x0EB78C2B156635B1(GET_HASH_KEY("VOLCYLINDER"), -256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_231, 0);
			VOLUME::_0xBE551C2CC421185D(iParam0->f_231, 1);
		}
	}
}

int func_39(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_204(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_40(int iParam0)
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_205())
	{
		iVar2 = func_205();
	}
	iVar5 = func_206(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_207(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_207(iVar6) == 0)
			{
				return func_208(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_207(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_207(iVar6) == 0)
			{
				return func_208(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_208(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_42(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_43(int iParam0)
{
	if (!func_42(iParam0))
	{
		return -1;
	}
	return func_209(iParam0);
}

int func_44(int iParam0)
{
	if (!func_42(iParam0))
	{
		return -1;
	}
	return func_210(iParam0);
}

bool func_45()
{
	if (func_211() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_46(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_212(uParam0, iParam1, sParam2))
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

void func_47(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_48(var uParam0)
{
	func_53(uParam0, 0);
	func_52(uParam0, 0);
	func_49(uParam0, 1);
	func_65(uParam0, 1);
	func_213(uParam0, 0);
	func_60(uParam0, 1);
	func_214(uParam0, 1, 1, 1);
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 256);
	}
	else
	{
		func_216(&(uParam0->f_1), 256);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 4);
	}
	else
	{
		func_216(&(uParam0->f_1), 4);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 2);
	}
	else
	{
		func_216(&(uParam0->f_1), 2);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 2048);
	}
	else
	{
		func_216(&(uParam0->f_1), 2048);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 16384);
	}
	else
	{
		func_216(&(uParam0->f_1), 16384);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 1);
	}
	else
	{
		func_216(&(uParam0->f_1), 1);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 131072);
	}
	else
	{
		func_216(&(uParam0->f_1), 131072);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 128);
	}
	else
	{
		func_215(uParam0, 128);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 4);
	}
	else
	{
		func_215(uParam0, 4);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 8);
	}
	else
	{
		func_216(&(uParam0->f_1), 8);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 32);
	}
	else
	{
		func_215(uParam0, 32);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 256);
	}
	else
	{
		func_215(uParam0, 256);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 524288);
	}
	else
	{
		func_215(uParam0, 524288);
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 2);
	}
	else
	{
		func_215(uParam0, 2);
	}
}

void func_63(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 1024);
	}
	else
	{
		func_216(&(uParam0->f_1), 1024);
	}
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 16);
	}
	else
	{
		func_216(&(uParam0->f_1), 16);
	}
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 16);
	}
	else
	{
		func_215(uParam0, 67108864);
		func_215(uParam0, 16);
	}
}

struct<4> func_66(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 317.5058f;
			Jump @314; //curOff = 94
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			Jump @314; //curOff = 125
			Var0 = { -331.8132f, 793.5106f, 115.6329f };
			Var0.f_3 = 231.2512f;
			Jump @314; //curOff = 156
			Var0 = { -192.2564f, 628.0485f, 112.3348f };
			Var0.f_3 = 231.2512f;
			Jump @314; //curOff = 187
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 10.42f;
			Jump @314; //curOff = 218
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			Jump @314; //curOff = 249
			Var0 = { -348.8683f, 781.1053f, 114.8526f };
			Var0.f_3 = 317.7707f;
			Jump @314; //curOff = 280
			Var0 = { -219.8844f, 627.0385f, 112.3019f };
			Var0.f_3 = 268.6542f;
			return Var0;
		}

bool func_67(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_217(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_217(iParam1, vParam2, iParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return true;
	}
	return false;
}

void func_68(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_218(iParam0, iParam1))
		{
			if (func_219(iParam0, iParam1))
			{
				if (func_220(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_221(iParam0);
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

void func_69(int iParam0, int iParam1)
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

var func_70(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	func_222(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_71(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return 1;
	}
	*uParam0 = func_223(vParam1, vParam4);
	return 0;
}

Vector3 func_72()
{
	return -199.16f, 632.02f, 114.52f;
}

Vector3 func_73()
{
	return 0f, 0f, -42.5f;
}

Vector3 func_74()
{
	return -258.85f, 745f, 118.08f;
}

Vector3 func_75()
{
	return 0f, 0f, 90f;
}

bool func_76(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_77()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (iVar0 == 0)
	{
		return 28;
	}
	else
	{
		return 30;
	}
	return 30;
}

void func_78(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		iVar0 = func_224(0, (14 - 1), iParam0->f_244);
		iParam0->f_244 = iVar0;
	}
	else
	{
		iVar0 = *uParam1;
	}
	if (func_225(iParam0))
	{
		iVar1 = func_226(iParam0->f_218[0], iParam0->f_220[0], 1060437492 /* Float: 0.707f */);
		if (!func_14(iParam0->f_253, 4))
		{
			if (iVar1 == 3)
			{
				func_20(iParam0, 23);
				func_12(&(iParam0->f_253), 4);
				return;
			}
		}
		if (!func_14(iParam0->f_253, 8))
		{
			if (iVar1 == 2)
			{
				func_20(iParam0, 24);
				func_12(&(iParam0->f_253), 8);
				return;
			}
		}
		if (!func_14(iParam0->f_253, 16))
		{
			if (iVar1 == 0)
			{
				func_20(iParam0, 22);
				func_12(&(iParam0->f_253), 16);
				return;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			*uParam1++;
			func_20(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			func_20(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			func_20(iParam0, 9);
			break;
		case 3:
			*uParam1++;
			func_20(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			func_20(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			func_20(iParam0, 12);
			break;
		case 6:
			*uParam1++;
			func_20(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			func_20(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			func_20(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			func_20(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			func_20(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			func_20(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			func_20(iParam0, 19);
			break;
		case 13:
			*uParam1 = 0;
			func_20(iParam0, 20);
			break;
		case 14:
			func_20(iParam0, 21);
			break;
		default:
			break;
	}
}

void func_79(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_80(var uParam0)
{
	if ((((func_14(*uParam0, 32) || func_14(*uParam0, 64)) || func_14(*uParam0, 512)) || func_14(*uParam0, 256)) || func_14(*uParam0, 8))
	{
		return true;
	}
	return false;
}

bool func_81(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;

	if (*iParam1 != iParam0->f_259 || !MISC::ARE_STRINGS_EQUAL(sParam2, iParam0->f_260))
	{
		func_134(&(iParam0->f_253), 2097152);
		func_134(&(iParam0->f_253), 4194304);
		func_134(&(iParam0->f_253), 8388608);
	}
	iParam0->f_259 = *iParam1;
	iParam0->f_260 = sParam2;
	if (bParam5)
	{
		sVar0 = "s_base";
		sVar1 = "s_base_end";
	}
	else
	{
		sVar0 = "s_base_stand";
		sVar1 = "s_base_end_stand";
	}
	iParam0->f_258++;
	if (iParam0->f_258 >= 3)
	{
		iParam0->f_258 = 0;
	}
	if (!func_14(iParam0->f_253, 2097152))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(*iParam1, false))
		{
			func_12(&(iParam0->f_253), 2097152);
		}
		else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*iParam1, true, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*iParam1);
		}
	}
	else
	{
		bVar2 = false;
		bVar3 = false;
		if (!func_14(iParam0->f_253, 4194304))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam1, sParam2))
			{
				func_12(&(iParam0->f_253), 4194304);
				bVar2 = true;
			}
		}
		else
		{
			bVar2 = true;
		}
		if (!func_14(iParam0->f_253, 8388608))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(*iParam1, sParam2))
			{
				func_12(&(iParam0->f_253), 8388608);
				bVar3 = true;
			}
		}
		else
		{
			bVar3 = true;
		}
		if (!bVar2 && !bVar3)
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*iParam1, sParam2);
		}
		if (bParam7)
		{
			if (!func_227(&(iParam0->f_218[0]), 50f, iParam0->f_239))
			{
				return false;
			}
		}
		if (!bVar3 && bVar2)
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*iParam1, sParam2, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam1, "internal_loop", bParam3, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam1, "internal_loop_end", bParam4, false);
			return false;
		}
		else if (bVar3)
		{
			if ((iParam0->f_258 == 0 && !bParam4) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*iParam1, sVar1, true))
			{
				if (func_228(iParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if ((iParam0->f_258 == 1 && bParam4) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*iParam1, sVar0, true))
			{
				if (func_228(iParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if ((bParam3 && iParam0->f_258 == 2) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*iParam1, "S_WaitLoop", true))
			{
				if (func_228(iParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if (bParam4 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_218[0], -1527527524))
			{
				if (func_228(iParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
			else if (!bParam6)
			{
				if (func_228(iParam1, iParam0->f_236))
				{
					iParam0->f_236 = sParam2;
					return true;
				}
			}
		}
	}
	return false;
}

void func_82(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_229(iParam0, 13))
	{
		func_230(iParam0, 0);
	}
	else
	{
		func_231(iParam0, 0);
	}
	if (func_232(iParam0->f_6))
	{
		if (bParam2)
		{
			func_233(&(iParam0->f_6), 0, 1);
		}
	}
}

char[] func_83()
{
	return "pbl_sitting_p3_to_stand_buck";
}

bool func_84(int iParam0, int iParam1)
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

void func_85(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = fParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = fParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_234(iParam0, iParam1, iParam18);
	}
}

void func_86(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(sParam0);
}

char[] func_87()
{
	return "pbl_sitting_p3_to_stand_hey";
}

char[] func_88()
{
	return "pbl_sitting_p3_to_stand";
}

void func_89(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, fParam11, fParam13, fParam12);
	}
	else if (!func_235(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, fParam11, fParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_234(iParam0, iParam1, iParam14);
	}
}

char[] func_90()
{
	return "pbl_sitting_p1_beg_ft";
}

char[] func_91()
{
	return "pbl_sitting_p1_beg_lt";
}

char[] func_92()
{
	return "pbl_sitting_p1_beg_rt";
}

char[] func_93()
{
	return "pbl_sitting_p1_beg_qk";
}

char[] func_94()
{
	return "pbl_sitting_p1_cmon";
}

char[] func_95()
{
	return "pbl_sitting_p1_drink";
}

char[] func_96()
{
	return "pbl_sitting_p1_fella";
}

char[] func_97()
{
	return "pbl_sitting_p1_loop01_cough";
}

char[] func_98()
{
	return "pbl_sitting_p1_gotta";
}

char[] func_99()
{
	return "pbl_sitting_p1_hungry";
}

char[] func_100()
{
	return "pbl_sitting_p1_few";
}

char[] func_101()
{
	return "pbl_sitting_p2_in_army";
}

char[] func_102()
{
	return "pbl_sitting_p1_loop03_stump";
}

char[] func_103()
{
	return "pbl_sitting_p1_someone";
}

char[] func_104()
{
	return "pbl_sitting_p2_bad";
}

char[] func_105()
{
	return "pbl_sitting_p2_drink";
}

char[] func_106()
{
	return "pbl_sitting_p1_loop02_scratch";
}

bool func_107(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_218[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (func_236(&(iParam0->f_145)))
	{
		if (!func_14(iParam0->f_253, 134217728))
		{
			func_12(&(iParam0->f_253), 134217728);
		}
		return true;
	}
	if (iParam0->f_239 >= 16f)
	{
		return true;
	}
	return false;
}

char[] func_108()
{
	return "pbl_base_reset_stand";
}

char[] func_109()
{
	return "pbl_standing_p3_dont";
}

char[] func_110()
{
	return "pbl_standing_p3_im";
}

char[] func_111()
{
	return "pbl_standing_p4_hey";
}

char[] func_112()
{
	return "pbl_standing_p4_just";
}

void func_113(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (Global_1955500[*uParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (func_237(1, 1) == *uParam0)
			{
				func_238(-1, 1, 1);
			}
			if (bParam1)
			{
				func_239(Global_1955500[*uParam0 /*16*/].f_1);
			}
			Global_1955500[*uParam0 /*16*/] = 0;
			Global_1955500[*uParam0 /*16*/].f_2 = 0;
			Global_1955500[*uParam0 /*16*/].f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_114(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
}

void func_115(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		func_240(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
		}
		func_240(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

bool func_117(var uParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	func_81(&Local_14, iParam1, sParam2, 0, 0, 0, 0, 0);
	if (ANIMSCENE::_0x1F0E401031E20146(*iParam1, sParam2) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return true;
	}
	return false;
}

char[] func_118()
{
	return "PL_No";
}

bool func_119(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return true;
	}
	return false;
}

int func_120(int iParam0, int iParam1, int iParam2)
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

void func_121(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_352 = iParam1;
	if (bParam2)
	{
		func_241(&(iParam0->f_296), 0);
	}
}

int func_122(var uParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	func_81(&Local_14, iParam1, sParam2, 0, 0, 0, 0, 1);
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return 1;
	}
	return 0;
}

void func_123(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!func_14(iParam0->f_253, 67108864))
	{
		if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1, false)) && ANIMSCENE::_0x1F0E401031E20146(iParam1, sParam2)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1) > fParam3)
		{
			func_242(12, 0, 0, "", iParam0->f_218[0], 0, 1065353216 /* Float: 1f */, 0);
			func_12(&(iParam0->f_253), 67108864);
		}
	}
}

bool func_124(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_243(cParam1, cParam0);
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

bool func_125(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*iParam1, false))
	{
		return true;
	}
	return false;
}

void func_126(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_127(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_128(var uParam0)
{
	if (CAM::_0x927B810E43E99932(uParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(uParam0);
	}
	CAM::_0x798BE43C9393632B(uParam0);
}

void func_129(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

int func_130()
{
	return Global_1899515;
}

bool func_131(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
	{
		return true;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		AUDIO::_0x36559148B78853B3(1, 1, 0);
	}
	if (!func_84(*uParam1, 242628503))
	{
		func_19(iParam0, 0, 0, 0, 0, 0, 0);
		func_19(iParam0, 1, 1, 0, 0, 0, 0);
		if (iParam2 == 0)
		{
			if (((func_244(26, 0) || func_244(27, 0)) || SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[26 /*49*/].f_42, false)) || SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[27 /*49*/].f_42, false))
			{
				iParam2 = 1;
			}
		}
		vVar1 = { func_245(iParam2) };
		TASK::_0x42CFD8FD8CC8DC69(*uParam1, func_246(iParam2));
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_231))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_231);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 6f, 6291460, 40000f);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 5f, -1, false, false, true, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		PED::SET_PED_KEEP_TASK(*uParam1, true);
	}
	return false;
}

float func_132(var uParam0)
{
	if (!func_142(uParam0))
	{
		return 0f;
	}
	if (func_247(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_248() - uParam0->f_1);
}

char* func_133()
{
	return "pbl_sitting_p1_exit02";
}

void func_134(var uParam0, int iParam1)
{
	func_203(uParam0, iParam1);
}

bool func_135(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = iParam3;
	return func_249(iParam0, &Var0);
}

void func_136(int iParam0)
{
	func_250(&(iParam0->f_195));
	func_137(19);
	if (func_14(iParam0->f_253, 536870912) && !func_14(iParam0->f_253, 1073741824 /* Float: 2f */))
	{
		func_128(&(iParam0->f_353));
		func_127(Global_35, 1);
		if (func_9(iParam0->f_218[0], 0))
		{
			func_126(iParam0->f_218[0], 1);
		}
		func_12(&(iParam0->f_253), 1073741824 /* Float: 2f */);
	}
	func_113(&(iParam0->f_233), 1);
	func_19(iParam0, 0, 0, 0, 0, 0, 0);
	func_19(iParam0, 1, 1, 0, 0, 0, 0);
	func_138(&(iParam0->f_232));
	if (func_42(func_41(19, 0, 9, func_40(19))))
	{
		func_251(func_41(19, 0, 9, func_40(19)), iParam0->f_244);
		func_252(func_41(19, 0, 9, func_40(19)), iParam0->f_255);
	}
	if (func_9(iParam0->f_218[0], 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_218[0], false);
		func_16(iParam0->f_218[0], 1, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_218[0], 130, false);
		func_17(iParam0->f_218[0]);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_218[0], 0f);
		PED::_0x39A2FC5AF55A52B1(iParam0->f_218[0], -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_218[0]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_245))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_245);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_246))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_246);
	}
	if (func_76(&(iParam0->f_235)))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(iParam0->f_235), 0);
	}
	func_139(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][3 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][4 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][4 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][5 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][5 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[19 /*638*/][6 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[19 /*638*/][6 /*48*/].f_47);
	}
	if (HUD::TEXT_BLOCK_IS_LOADED("SPBM"))
	{
		HUD::_TEXT_BLOCK_DELETE("SPBM");
	}
	if (HUD::TEXT_BLOCK_IS_LOADED("SPCWVAU"))
	{
		HUD::_TEXT_BLOCK_DELETE("SPCWVAU");
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_217))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_217);
	}
	func_253(0);
	if (!func_254(iParam0->f_233, 1, 1))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_137(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_255(0, -1);
	}
	func_256();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_138(var uParam0)
{
	if (!PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
}

void func_139(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_224))
	{
		func_13(iParam0->f_224);
		VOLUME::_DELETE_VOLUME(iParam0->f_224);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_227))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_227);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_227);
		VOLUME::_DELETE_VOLUME(iParam0->f_227);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_226))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_226);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_226);
		VOLUME::_DELETE_VOLUME(iParam0->f_226);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_228))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_228);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_229))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_229);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_225))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_225);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_230))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_230);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_231))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_231);
	}
}

bool func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_257())
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
		if (func_258(0) == 7 || func_259())
		{
			return true;
		}
	}
	if (func_260(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return true;
	}
	return false;
}

bool func_141(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_142(var uParam0)
{
	return func_261(*uParam0, 1);
}

void func_143(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_248() - fParam1);
	func_262(uParam0, 1);
	func_263(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_144(var uParam0)
{
	if (!func_142(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_247(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_248() - uParam0->f_1);
}

bool func_145(int iParam0)
{
	return iParam0 != -15;
}

void func_146(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_130();
}

int func_147(var uParam0)
{
	if (!func_142(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_247(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_176() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

Vector3 func_148(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_149(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return true;
	}
	return false;
}

bool func_150(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_151(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

bool func_152(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_258(0) == 1 || func_258(0) == 2) || func_258(0) == 8) || func_264(Global_1935630, 2048))
			{
				func_12(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_258(0) == 11)
			{
				func_12(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_258(0) == 6)
			{
				func_12(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_12(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_265(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_265(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_130();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_265(iVar2) > func_265(iVar1))
				{
					if (func_265(iVar0) > func_265(iVar2) + 1 || func_265(iVar0) < func_265(iVar1))
					{
						func_12(uParam2, 32);
					}
				}
				else if (func_265(iVar0) > func_265(iVar2) + 1 && func_265(iVar0) < func_265(iVar1))
				{
					func_12(uParam2, 32);
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
					if (((func_266(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_266(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_267(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_267(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_268(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_12(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_269(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_270(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_142(&(uParam2->f_13)))
					{
						func_143(&(uParam2->f_13), 0f);
					}
					else if (func_147(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_79(&(uParam2->f_13));
						func_12(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_142(&(uParam2->f_13)))
					{
						func_79(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_271())
			{
				func_12(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_272())
			{
				func_12(uParam2, 2048);
			}
		}
		if (func_264(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_12(uParam2, 128);
		}
		if (func_260(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_12(uParam2, 256);
		}
	}
	if ((((((((((func_14(*uParam2, 2) || func_14(*uParam2, 4)) || func_14(*uParam2, 8)) || func_14(*uParam2, 16)) || func_14(*uParam2, 32)) || func_14(*uParam2, 64)) || func_14(*uParam2, 128)) || func_14(*uParam2, 256)) || func_14(*uParam2, 512)) || func_14(*uParam2, 1024)) || func_14(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_153(var uParam0)
{
	if (((((func_14(*uParam0, 2) || func_14(*uParam0, 4)) || func_14(*uParam0, 16)) || func_14(*uParam0, 128)) || func_14(*uParam0, 1024)) || func_14(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

int func_154(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_155(var uParam0, bool bParam1)
{
	if (bParam1 || !func_142(uParam0))
	{
		func_18(uParam0);
	}
}

void func_156(var uParam0, bool bParam1, int iParam2)
{
	func_274(iParam2);
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
		uParam0->f_13 = func_275(0);
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
							func_216(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_276(1))
						{
							func_216(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_276(1) || *uParam0 & 8192 != 0))
				{
					func_215(uParam0, 33554432);
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
			if (func_277(uParam0))
			{
				uParam0->f_15 = func_176();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_176() - uParam0->f_15) > 500)
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
	func_278(uParam0);
}

bool func_157(int iParam0, var uParam1)
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
			if (!func_279(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_280(iParam0, iVar2) <= func_281(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_158(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_282(iParam2, 1, 1, 1, 0))
	{
		func_216(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_283(uParam1, 1);
	func_284();
}

bool func_159(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_285(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_286(uParam1);
			if (func_287(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_288(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_283(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_283(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_160(int iParam0, int iParam1, var uParam2)
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
	if (func_289(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_286(uParam2);
		if (func_287(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_288(uParam2)
				{
					func_283(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_161(int iParam0, var uParam1)
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
	if (func_279(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_288(uParam1)
		{
			fVar3 = func_286(uParam1);
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

int func_162(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_290(bParam1, bParam2, bParam3);
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

bool func_163(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_176();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_164(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_291(uParam2);
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
			if (func_172(uParam2, iParam1))
			{
				func_283(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_165(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_292(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_172(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_283(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_166(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_293(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_283(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_283(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_294(iParam1, vVar0, vVar4))
					{
						func_283(uParam2, 1);
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
					func_283(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_294(iParam1, vVar0, vVar7))
					{
						func_283(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_167(int iParam0, var uParam1)
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
		if (!func_279(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_295(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_296(Global_1935630.f_34[iVar0]))
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
			if (func_297(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_298(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_299(uParam1, iParam0, fVar1, iVar0))
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

bool func_168(int iParam0, var uParam1)
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

bool func_169(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_176();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_170(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_300(iVar0, &iVar2))
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
	if (func_301(iVar0, iParam0))
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

int func_171(var uParam0, int iParam1)
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

bool func_172(var uParam0, int iParam1)
{
	if (func_302(uParam0))
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

bool func_173(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_303(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_174()
{
}

bool func_175(var uParam0, int iParam1)
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
		if (func_304(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_176();
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
						if (func_305(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_176();
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

int func_176()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_177()
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
	if ((func_176() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_178(var uParam0, int iParam1)
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
	fVar0 = func_281(uParam0);
	if (uParam0->f_12 > func_306(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_307(iParam1);
	iVar1 = func_308(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_179(int iParam0, int iParam1, var uParam2)
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
	return func_309(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_180(int iParam0, var uParam1)
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
		if (func_310(iParam0, uParam1, 1))
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
					if (!func_311(uParam1, iParam0))
					{
						if (func_305(iVar4, Global_36, 1) < 7f)
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

bool func_181(int iParam0, var uParam1)
{
	if (!func_312(0))
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

bool func_182(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_176();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_183(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_184(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_176();
	}
	else if (func_176() - uParam1->f_4) > func_313(uParam1)
	{
		return func_314(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_185(var uParam0, int iParam1)
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

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_187(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_315(vParam0))
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
			if (func_316(vVar2, vParam0, 2f, 1))
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

void func_188(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_233(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_241(iParam0, 0);
		}
	}
}

void func_189(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_232((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_233(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

struct<2> func_190(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_GREET";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 2:
			Var0 = "GREET_POS";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 3:
			Var0 = "GREET_NEG";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 4:
			Var0 = "GREET_POS";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 5:
			Var0 = "GREET_NEG";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 6:
			Var0 = "BM1_UC_NAME";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 7:
			Var0 = "BM1_UC_NONAME";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 8:
			Var0 = "BM1_UC_GIVE";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 9:
			Var0 = "GREET_NEG";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 11:
			Var0 = "BM1_UC_CZY";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 10:
			Var0 = "BM1_UC_NOCZY";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 12:
			Var0 = "BM1_UC_SURE";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 13:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 14:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 15:
			Var0 = "GREET_POS";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS");
			break;
		case 16:
			Var0 = "GREET_NEG";
			Var0.f_1 = GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return Var0;
}

void func_191(int* iParam0, char* sParam1)
{
	if (func_232(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_317(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_231(iParam0, 1);
}

void func_192(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_229(iParam0, 4))
		{
			func_233(&(iParam0->f_6), 1, 1);
			func_230(iParam0, 4);
		}
	}
	else if (func_229(iParam0, 4))
	{
		func_231(iParam0, 4);
		func_230(iParam0, 14);
	}
}

void func_193(int iParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;

	Var0 = { func_190(0) };
	func_319(&(iParam0->f_317[0 /*17*/]), Var0, func_318(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_190(1) };
	sVar2 = func_320(iParam0, &iVar3);
	func_319(&(iParam0->f_317[1 /*17*/]), Var0, sVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	func_321(iParam0->f_218[0], &(iParam0->f_317), 15f, 2, 0, 0, 0, 0, 0);
	func_121(iParam0, func_120(3, 0, 0), 1);
	func_82(&(iParam0->f_317[0 /*17*/]), 0, 0);
	func_82(&(iParam0->f_317[1 /*17*/]), 0, 0);
}

int func_194(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_322(&iVar0);
	if (func_323(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_196(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_323(iVar0, 134217728))
	{
		func_324(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_325(558))
				{
					func_326(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_195(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_232(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_327(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_196(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_322(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_328(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_18(&(iParam1->f_13));
		}
		if (func_329(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_330(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_196(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_331(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_332(*uParam0, 1, 1);
						}
					}
					else if (func_333(iParam1, 22))
					{
						func_332(*uParam0, 0, 1);
					}
				}
				if (func_334(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_335(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_336(iParam8);
					if (func_337(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_338(uParam3);
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
					func_339(iParam1, uParam3, fVar8);
					if (func_340(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_189(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_341(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_334(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_342(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_337(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_335(uParam0, func_334(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_336(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_189(uParam3, 0, 0, 1, 1);
					}
					func_343(iParam1, 1);
				}
				func_339(iParam1, uParam3, fVar8);
				if (func_341(uParam0, iParam1, fParam4, bVar6))
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
			func_15(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_197(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_202(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_345(func_344(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_346(func_344(GET_HASH_KEY("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_130();
	func_186(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_198(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

void func_199(var uParam0, var uParam1)
{
	var uVar0[1];

	if (CAM::_0xDD0B7C5AE58F721D(uParam0) && !CAM::_0x927B810E43E99932(uParam0))
	{
		CAM::_0xB8B207C34285E978(uParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(uParam0, &uVar0);
	}
}

bool func_200(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_142(uParam2))
		{
			func_143(uParam2, 0f);
			return false;
		}
		else if (func_147(uParam2) > iParam6)
		{
			func_79(uParam2);
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
			fParam7 = func_303(*uParam0, Global_35, 1, 1);
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

char* func_201(int iParam0)
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

bool func_202(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_204(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_315(vParam0))
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
		if (func_347(vParam0))
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
	func_348(iVar0, bParam8);
	return iVar0;
}

int func_205()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_206(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_207(int iParam0)
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

int func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_349(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_205())
	{
		return -1;
	}
	iVar0 = func_206(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_350(iVar1, 0);
	func_351(iVar1, 0);
	func_352(iVar1, 0);
	func_353(iVar1, 0);
	func_354(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_355(iVar1, iParam4);
	}
	return iVar1;
}

int func_209(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_210(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

int func_211()
{
	return Global_1572887.f_12;
}

bool func_212(var uParam0, int iParam1, char* sParam2)
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

void func_213(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_215(&(uParam0->f_1), 128);
	}
	else
	{
		func_216(&(uParam0->f_1), 128);
	}
}

void func_214(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_216(uParam0, 268435456);
	}
	else
	{
		func_215(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_216(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_215(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_216(uParam0, 536870912);
	}
	else
	{
		func_215(uParam0, 536870912);
	}
}

void func_215(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_217(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_356(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_218(int iParam0, int iParam1)
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

bool func_219(int iParam0, int iParam1)
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

bool func_220(int iParam0, int iParam1)
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
	if (!func_218(iParam0, iVar0))
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

void func_221(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_222(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_223(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_357())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_358(func_357(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

bool func_225(int iParam0)
{
	if ((!func_14(iParam0->f_253, 4) || !func_14(iParam0->f_253, 8)) || !func_14(iParam0->f_253, 16))
	{
		if (func_359(&(iParam0->f_220), &(iParam0->f_218), 3, ENTITY::GET_ENTITY_COORDS(iParam0->f_218[0], true, false), 5f, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 1) >= 1)
		{
			return true;
		}
	}
	return false;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_360(iParam0, vVar0, iParam2);
}

bool func_227(var uParam0, float fParam1, float fParam2)
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
			if (func_141(Global_35, *uParam0, 25f, 1))
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
		if (func_141(Global_35, *uParam0, fParam1, 1))
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

bool func_228(int iParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*iParam0, sParam1);
	if (bVar0)
	{
		return true;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*iParam0, sParam1);
	if (!bVar1)
	{
		return true;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*iParam0, sParam1);
	if (!bVar2)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*iParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*iParam0, sParam1);
	}
	return false;
}

bool func_229(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_230(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_231(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_232(int iParam0)
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

void func_233(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_232(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_361(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_362(iVar0);
	*uParam0 = 0;
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

bool func_235(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_236(var uParam0)
{
	if (!func_142(uParam0))
	{
		return false;
	}
	if (func_144(uParam0) >= 20f)
	{
		func_79(uParam0);
		return true;
	}
	return false;
}

int func_237(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_363();
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return Global_1955499;
}

void func_238(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_363();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_237(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = Global_1955500[iVar2 /*16*/].f_2;
				if (func_364(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(iVar0);
		PED::_0xAAC0EE3B4999ABB5(iVar0, 0);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_239(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_240(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_DUCK"), false);
	}
	func_365(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ENTER"), false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

void func_241(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_79(&(iParam0->f_18));
}

void func_242(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_211() != -1)
	{
		return;
	}
	if ((Global_36616 && func_366(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_367(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_368(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_369(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_368(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_243(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*cParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*cParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*cParam3)[iVar0 /*4*/], &((cParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_244(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_211() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_245(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -240.5095f, 769.4438f, 117.085f };
			break;
		case 1:
			vVar0 = { -303.7218f, 762.0843f, 118.1718f };
			break;
	}
	return vVar0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_247(var uParam0)
{
	return func_261(*uParam0, 2);
}

float func_248()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_249(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_250(var uParam0)
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
	if (func_142(&(uParam0->f_13)))
	{
		func_79(&(uParam0->f_13));
	}
}

void func_251(int iParam0, int iParam1)
{
	if (!func_42(iParam0))
	{
		return;
	}
	func_352(iParam0, iParam1);
}

void func_252(int iParam0, int iParam1)
{
	if (!func_42(iParam0))
	{
		return;
	}
	func_353(iParam0, iParam1);
}

void func_253(bool bParam0)
{
	int iVar0;

	iVar0 = func_370();
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

bool func_254(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::DOES_VOLUME_EXIST(Global_1955500[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1955500[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_255(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_371(&Global_0, 8);
	}
	if (!func_372() || func_211() != -1)
	{
		return;
	}
	func_371(&Global_0, 1);
}

void func_256()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

bool func_257()
{
	int iVar0;

	if (func_211() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_373(Global_1392915[iVar0 /*12*/].f_4))
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

int func_258(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_259()
{
	return Global_1310750.f_16077 != 0;
}

bool func_260(var uParam0, int iParam1)
{
	return func_323(*uParam0, iParam1);
}

bool func_261(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_262(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_264(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_265(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_266(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_373(Global_1835011[iParam0 /*74*/].f_1);
}

int func_267(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_374(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_268(int iParam0)
{
	int iVar0;

	iVar0 = func_375();
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

int func_269(var uParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_376(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_270(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_377(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_378(iVar1, 0))
		{
			func_379(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

bool func_271()
{
	return Global_1392040.f_6;
}

bool func_272()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_273(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_274(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_380();
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
			func_381(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_275(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_276(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_382(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_277(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_211() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_383(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_383(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_308(iVar0) == -1)
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

void func_278(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_384(uParam0);
	}
}

bool func_279(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_308(iParam2);
	}
	else
	{
		iVar1 = func_307(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_308(iParam0);
	}
	else
	{
		iVar0 = func_307(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_323(*uParam1, 8388608))
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

float func_280(int iParam0, int iParam1)
{
	return func_303(iParam0, iParam1, 1, 1);
}

float func_281(var uParam0)
{
	return uParam0->f_26;
}

bool func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_283(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_216(uParam0, 134217728);
	}
	else
	{
		func_215(uParam0, 134217728);
	}
}

void func_284()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_285(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_303(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_385(iVar0, 0)))
		{
			if (func_386(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_286(var uParam0)
{
	return uParam0->f_17;
}

bool func_287(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_323(*uParam0, 4194304))
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

int func_288(var uParam0)
{
	return uParam0->f_18;
}

bool func_289(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_385(iVar0, 0)))
		{
			if (func_387(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_290(bool bParam0, bool bParam1, bool bParam2)
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

float func_291(var uParam0)
{
	return uParam0->f_23;
}

int func_292(var uParam0)
{
	return uParam0->f_21;
}

int func_293(var uParam0)
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

bool func_294(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_388(iParam0, vParam4, 0.5f))
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

int func_295(int iParam0)
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
	if (func_389(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_296(int iParam0)
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

bool func_297(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_390(iParam1))
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

bool func_298(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_390(iParam1))
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

bool func_299(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_390(iParam1))
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

bool func_300(int iParam0, int iParam1)
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

bool func_301(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_391(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
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

bool func_302(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_303(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_304(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_305(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_305(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_306(var uParam0)
{
	return uParam0->f_24;
}

int func_307(int iParam0)
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

int func_308(int iParam0)
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

int func_309(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_300(Global_35, &iVar1))
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
		fVar2 = func_303(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_303(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_310(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_382(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_311(uParam1, iVar0))
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
				if (!bParam2 || !func_311(uParam1, iVar1))
				{
					if (func_305(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_311(var uParam0, int iParam1)
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

int func_312(int iParam0)
{
	if (func_45())
	{
		return 0;
	}
	return func_392(Global_1347702[58 /*49*/].f_15, 1);
}

int func_313(var uParam0)
{
	return uParam0->f_20;
}

int func_314(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_315(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_316(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_317(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_232(iParam0))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

char* func_318()
{
	return "GREET_MALE";
}

void func_319(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_232(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_393(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_317(iParam0->f_6, iParam0->f_5, 0);
			}
			func_394(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_191(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_320(int iParam0, int iParam1)
{
	if (func_395())
	{
		switch (iParam0->f_255)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MICKEY_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MICKEY_CONV_PART3";
			case 4:
				*iParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART1";
			case 5:
				*iParam1 = 2;
				return "INSULT_TIMID_MALE_CONV_PART2";
			case 6:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 7:
				*iParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART2";
			default:
				*iParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
		}
	}
	else
	{
		*iParam1 = 2;
		return "INSULT_MALE_CONV_PART1";
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_321(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_396(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_322(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_323(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_324(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_397(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		uVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_398(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_211() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_326(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_399(iParam0, &iVar0, &iVar1);
	if (!func_400(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_401(iVar0, iVar1);
}

bool func_327(int iParam0, bool bParam1)
{
	if (bParam1 && !func_232(iParam0))
	{
		return false;
	}
	return !func_402(iParam0, 4);
}

float func_328(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_329(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_403(iParam0, iParam1))
		{
			if (!func_323(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_189(uParam2, 0, 0, 1, 0);
				func_216(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_323(iParam1->f_10, 1))
		{
			func_404(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_215(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_330(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_323(iParam4, 32);
		func_188(iParam1, uParam2, 0);
		iVar5 = func_405(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_189(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_323(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_323(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_323(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_323(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_323(iParam4, 8388608) || func_323(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_323(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_323(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_333(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_333(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_323(iParam4, 67108864))
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
				iParam6 = func_406(uParam0);
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
			if (func_323(iParam4, 268435456))
			{
				iVar8 = func_407(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_408(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_333(iParam1, 23))
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
			if (func_323(iParam4, 2) || func_323(iParam4, 16))
			{
				func_332(*uParam0, 1, 1);
			}
			else
			{
				func_332(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_331(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_332(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_333(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_334(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_409(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_335(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_321(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_323(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_336(int iParam0)
{
	if (func_323(iParam0, 4))
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
	if (func_323(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_323(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_337(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_410(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_411(Global_35)) || func_412(Global_35)) || func_413(Global_35));
	fVar12 = -1f;
	if (func_142(&(iParam1->f_13)))
	{
		fVar12 = func_144(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_232((uParam4[iVar0 /*17*/])->f_6);
		func_414(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_415(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_416(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_189(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_417(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_188(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_418(iParam1, fParam6, iParam1->f_9))
					{
						func_18(&(iParam1->f_18));
						if (bVar6)
						{
							func_417(uParam4, 0, 0);
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
		func_419(iParam1, fParam2);
	}
	return bVar5;
}

void func_338(var uParam0)
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

void func_339(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_420(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_419(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_340(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_421(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_422(iParam1, 0);
				func_188(iParam1, uParam2, func_333(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

int func_341(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_18(&(iParam1->f_18));
			return 0;
		}
		else if (func_142(&(iParam1->f_18)))
		{
			func_79(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_142(&(iParam1->f_18)))
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
	return func_423(&(iParam1->f_18), fParam2);
	return 1;
}

void func_342(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_414(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_343(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

struct<2> func_344(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_345(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_346(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_347(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_348(int iParam0, bool bParam1)
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

bool func_349(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_350(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_424(iParam0);
	}
	else
	{
		func_425(iParam0, iParam1);
	}
	func_426();
}

void func_351(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_352(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_353(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_354(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_355(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

void func_356(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_427(iParam1))
		{
			func_68(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_428(iParam0, 0, 1);
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
			func_429(iParam0, 0);
			bVar0 = true;
		}
		func_430(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_357()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_358(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_359(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, iParam6, iParam6, fParam13);
	}
	iVar1 = func_431(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_239(iVar0);
	return iVar1;
}

int func_360(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_432(vVar3, vVar6);
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
	if (func_433(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_361(int iParam0)
{
	return iParam0;
}

void func_362(int iParam0)
{
	if (!func_434(iParam0))
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

int func_363()
{
	switch (func_211())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

bool func_364(int iParam0, int iParam1)
{
	if (func_254(iParam0, 1, 1))
	{
		return func_14(Global_1955500[iParam0 /*16*/], iParam1);
	}
	return false;
}

void func_365(bool bParam0)
{
	if (bParam0)
	{
		func_435(4);
	}
	func_435(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

int func_366(int iParam0)
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

int func_367(int iParam0)
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

void func_368(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_436();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_437(iParam0);
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
	if (func_438(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_45())
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
	Global_40.f_11095.f_35 = func_439(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_436();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_440(iVar1);
		func_442(func_441(), 0, 4000);
		func_443(Global_40.f_11095.f_35);
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
		func_444(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_346(func_344(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_367(14))
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
					sParam4 = func_445(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_446(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_446(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_346(func_344(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_367(4))
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
					sParam4 = func_445(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_446(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_446(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_344(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_447(10, 1);
	}
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_370()
{
	return Global_1900383.f_393;
}

void func_371(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_372()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_373(int iParam0)
{
	int iVar0;

	iVar0 = func_448(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_374(int iParam0)
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
		iVar0 = func_449(iParam0);
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

int func_375()
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

bool func_376(var uParam0, vector3 vParam1, float fParam4)
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

bool func_377(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_450(Global_35, *iParam1, 0))
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

bool func_378(int iParam0, bool bParam1)
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

void func_379(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_84(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

bool func_380()
{
	if (func_451())
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

void func_381(var uParam0, var uParam1)
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

bool func_382(bool bParam0, int iParam1, int iParam2)
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

int func_383(var uParam0)
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

void func_384(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_215(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_216(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_385(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_386(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_387(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_387(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_388(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_389(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_390(int iParam0)
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

int func_391(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_392(int iParam0, bool bParam1)
{
	switch (func_448(iParam0))
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

void func_393(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_232(iParam0))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_394(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_232(iParam0))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	if (bParam1)
	{
		func_452(iParam0, 4);
		func_453(iVar0, 1);
		func_454(iVar0, 1);
	}
	else
	{
		func_455(iParam0, 4);
		func_454(iVar0, 0);
	}
}

bool func_395()
{
	if (func_211() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_396(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_232(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_233(&(iParam1->f_6), 0, 1);
	}
	if (!func_232(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_420(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_456(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_232(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_457(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_458(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_459(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_393(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_458(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_394(iParam1->f_6, 0, 1);
				}
				else
				{
					func_394(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_397(int* iParam0)
{
	if (func_333(iParam0, 0))
	{
		if (func_460(iParam0))
		{
			func_343(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_398(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_461(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_400(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_462(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_463(iParam0))
	{
		return false;
	}
	if (func_464(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_465(iParam0, 1)) || func_466(32768))
	{
		if (!func_465(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_467())
	{
		return false;
	}
	return true;
}

void func_401(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_402(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_403(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_468((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_404(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_420(uParam0[iVar0 /*17*/]))
		{
			func_230(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_405(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_396(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_232((uParam2[iVar0 /*17*/])->f_6))
		{
			func_230(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_406(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_469(*uParam0);
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

int func_407(var uParam0, int iParam1)
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

void func_408(int* iParam0, int* iParam1)
{
	if (!func_333(iParam0, 23))
	{
		if (iParam1->f_7 == GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_230(iParam1, 19);
			func_422(iParam0, 23);
			func_470(iParam1, 2);
		}
	}
}

bool func_409(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_471(16))
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
					func_472(16);
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

int func_410(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_411(int iParam0)
{
	return (func_473(iParam0, 4) || func_473(iParam0, 5));
}

int func_412(int iParam0)
{
	return func_473(iParam0, 7);
}

int func_413(int iParam0)
{
	return func_473(iParam0, 6);
}

void func_414(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_420(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_396(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_415(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_474(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_327(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_394(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_394(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_457(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_416(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_475(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_476(iParam1, 1))
	{
		func_477(iParam1, 1);
		return true;
	}
	return false;
}

void func_417(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_82(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_418(int* iParam0, float fParam1, bool bParam2)
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

void func_419(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_420(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_421(int iParam0)
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

void func_422(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_423(var uParam0, float fParam1)
{
	if (func_478(uParam0, fParam1))
	{
		func_79(uParam0);
		return 1;
	}
	return 0;
}

int func_424(int iParam0)
{
	int iVar0;

	iVar0 = func_479(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_480(iVar0);
}

int func_425(int iParam0, int iParam1)
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
			func_481(iVar2);
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

void func_426()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

bool func_427(int iParam0)
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

void func_428(int iParam0, int iParam1, bool bParam2)
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

void func_429(int iParam0, bool bParam1)
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

void func_430(int iParam0, bool bParam1)
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

int func_431(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_482(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_483(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

float func_432(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_433(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_434(int iParam0)
{
	return func_402(iParam0, 2);
}

void func_435(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

int func_436()
{
	int iVar0;

	iVar0 = func_484();
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

int func_437(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_211() != -1)
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
	fVar1 = func_328(MISC::ABSF(fVar1) < 1f, func_328(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_438(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return func_486(iParam0);
}

int func_439(int iParam0, int iParam1, int iParam2)
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

int func_440(int iParam0)
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

int func_441()
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

void func_442(int iParam0, bool bParam1, int iParam2)
{
	func_487((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_488(iParam0);
}

void func_443(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_489(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_444(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_490(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_491(iVar5, &iVar2, &iVar0))
			{
				if (!func_492(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_493(iVar2);
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
							if (func_494(iVar2) == GET_HASH_KEY("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_436() <= -160;
								}
								else if (iVar0 == GET_HASH_KEY("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_436() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_495();
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

char* func_445(int iParam0)
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

var func_446(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_496(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_447(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_497(iParam0))
	{
		return 0;
	}
	if (!func_372())
	{
		return 0;
	}
	if (!func_498(iParam0, &iVar0, &iVar1))
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

int func_448(int iParam0)
{
	if (!func_42(iParam0))
	{
		return -1;
	}
	return func_449(iParam0);
}

int func_449(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_479(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_450(int iParam0, int iParam1, bool bParam2)
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

bool func_451()
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

void func_452(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_453(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_402(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_454(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_455(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

int func_456(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_402(iVar0, 2))
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
				func_499(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_457(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_232(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	func_458(iParam0, 18, 0, 1);
	func_458(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

void func_458(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_232(iParam0))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_459(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_232(iParam0))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_460(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_461(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
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
		if (func_500())
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
				if (func_501(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_303(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_18(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_502(iParam0, iParam1, fVar1, bParam13))
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
				Var3.f_2 = uParam5;
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
				iVar2 = func_358(func_503(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_462(int iParam0, int iParam1)
{
	if (func_211() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_463(int iParam0)
{
	if (func_211() != -1)
	{
		if (func_465(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_465(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_464(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_465(iParam0, 65536) && !func_465(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_465(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_465(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_465(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_466(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_467()
{
	return Global_1905944.f_5694;
}

int func_468(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_469(int iParam0)
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

void func_470(int* iParam0, int iParam1)
{
	if (!func_229(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_230(iParam0, 14);
		}
	}
}

bool func_471(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_472(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_473(int iParam0, int iParam1)
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

bool func_474(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_475(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_232(iParam0))
	{
		return false;
	}
	iVar0 = func_361(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_476(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_232(iParam0))
	{
		return false;
	}
	iVar0 = func_361(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_477(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_232(iParam0))
	{
		return;
	}
	iVar0 = func_361(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_478(var uParam0, float fParam1)
{
	if (!func_142(uParam0))
	{
		return false;
	}
	if (func_144(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_479(int iParam0)
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

int func_480(int iParam0)
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

int func_481(int iParam0)
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

bool func_482(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_504(iParam0))
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
		if (func_505(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_483(int iParam0, var uParam1)
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

int func_484()
{
	return Global_40.f_11095.f_35;
}

bool func_485(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_486(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_487(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_506(bParam1);
	}
}

void func_488(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("HONORMETERVALUE"), iParam0);
}

char* func_489(int iParam0)
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

bool func_490(int iParam0)
{
	vector3 vVar0;

	if (!func_507(23, &vVar0))
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

bool func_491(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_507(23, &Var0))
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

bool func_492(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_493(int iParam0)
{
	return iParam0;
}

int func_494(int iParam0)
{
	vector3 vVar0;

	if (!func_492(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_495()
{
	int iVar0;

	iVar0 = func_436();
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

void func_496(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

bool func_497(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_498(int iParam0, int iParam1, int iParam2)
{
	if (!func_497(iParam0))
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

void func_499(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, uParam15);
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
	func_453(iParam0, 1);
	func_454(iParam0, 1);
	func_455(iParam0, 128);
}

bool func_500()
{
	return (Global_1894899 & 1 != 0 && func_508() != -1);
}

float func_501(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_303(Global_35, iParam0, bParam1, bParam2);
}

bool func_502(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_503(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_249(iParam0, &Var0);
}

bool func_504(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_509(), 1))
	{
		return true;
	}
	return false;
}

int func_505(int iParam0, bool bParam1)
{
	return func_510(iParam0, Global_1894899.f_2, bParam1);
}

void func_506(bool bParam0)
{
	func_511(bParam0);
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

bool func_507(int iParam0, var uParam1)
{
	if (!func_512(iParam0))
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

int func_508()
{
	return Global_1894899.f_2;
}

int func_509()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_510(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_513(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_514(iParam0, uVar0, iVar1, bParam2);
}

void func_511(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(GET_HASH_KEY("HONORMETERVISIBLE"), bParam0);
}

bool func_512(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_513(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_211() != -1;
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

int func_514(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_515(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_516(iVar2)))
		{
			if (func_516(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_515(int iParam0)
{
	if (!func_517(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_516(int iParam0)
{
	if (!func_517(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_517(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

