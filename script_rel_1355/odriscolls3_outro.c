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
	int iLocal_14[1] = { 0 };
	int iLocal_16 = 0;
	int iLocal_17[3] = { 0, 0, 0 };
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	struct<2> Local_25[1];
	bool bLocal_28 = false;
	char cLocal_29[32] = "";
	struct<157> Local_33 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 4;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	bool bLocal_275 = false;
	bool bLocal_276 = false;
	bool bLocal_277 = false;
	struct<4> Local_278 = { 0, 0, 0, 0 } ;
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
	bLocal_28 = true;
	StringCopy(&cLocal_29, "odr3_ext2", 32);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_278);
	}
	func_2(&Local_278, &uScriptParam_0);
	while (!func_3(&Local_278))
	{
		func_4(&Local_278);
		switch (func_5(Local_278))
		{
			case 0:
				if (func_6(&Local_278))
				{
					func_7(&Local_278, 1);
				}
				break;
			case 1:
				if (func_8(&Local_278))
				{
					func_7(&Local_278, 2);
				}
				break;
			case 2:
				if (func_9(&Local_278))
				{
					func_7(&Local_278, 3);
				}
				break;
			case 3:
				func_1(&Local_278);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_278);
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
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		switch (Local_25[iVar1 /*2*/].f_1)
		{
			case 0:
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_25[iVar1 /*2*/]))
				{
					Local_25[iVar1 /*2*/] = ANIMSCENE::_CREATE_ANIM_SCENE(func_21(iVar1), 0, func_22(iVar1), false, true);
				}
				Local_25[iVar1 /*2*/].f_1 = 1;
				break;
			case 1:
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_25[iVar1 /*2*/], true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_25[iVar1 /*2*/], true))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(Local_25[iVar1 /*2*/]);
					}
				}
				else
				{
					Local_25[iVar1 /*2*/].f_1 = 2;
				}
				break;
			case 2:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_23(iVar1)))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_25[iVar1 /*2*/], func_23(iVar1)))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_25[iVar1 /*2*/], func_23(iVar1)))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_25[iVar1 /*2*/], func_23(iVar1));
						}
					}
					else
					{
						Local_25[iVar1 /*2*/].f_1 = 3;
					}
				}
				else
				{
					Local_25[iVar1 /*2*/].f_1 = 3;
				}
				break;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if (!Local_25[iVar1 /*2*/].f_1 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(GET_HASH_KEY("P_CHAIRFOLDING02X")))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(GET_HASH_KEY("P_JOURNAL01X")))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(GET_HASH_KEY("P_PENCIL02X")))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(GET_HASH_KEY("CS_REVSWANSON")))
	{
		iVar0 = 0;
	}
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	return iVar0;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_25())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
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
			func_27(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_28(&(Global_1359489.f_40), 1);
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_14(21))
	{
		func_15(21, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_17[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_17[iVar0]));
		}
		iVar0++;
	}
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_25[iVar1 /*2*/]))
		{
			if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Local_25[iVar1 /*2*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_25[iVar1 /*2*/]);
			}
		}
		iVar1++;
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	iVar2 = 0;
	func_29(&iVar2, 0);
	func_30();
	PED::_0x7D4E70A67A651C71(1);
	if (func_31(21))
	{
		func_32(8);
		if (ENTITY::DOES_ENTITY_EXIST(func_33(8)))
		{
			func_34(8, 1, 1, 1, 0);
		}
		func_32(6);
		if (ENTITY::DOES_ENTITY_EXIST(func_33(6)))
		{
			func_34(6, 1, 1, 1, 0);
		}
		func_32(3);
		if (ENTITY::DOES_ENTITY_EXIST(func_33(3)))
		{
			func_34(3, 1, 1, 1, 0);
		}
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
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
	return func_35(iParam0, 16, 1);
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
		func_27(iParam0, 56, 1);
		func_28(&(Global_1359489.f_40), 1);
	}
	func_36(iParam0, 0);
	func_37(iParam0, 4, 0);
	func_38(iParam0);
	func_39(iParam0);
	func_40(iParam0, 37, 1);
	bVar0 = func_41(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_42(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_43(iParam0, 64, 1))
	{
		func_40(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_40(iParam0, 33, 1);
		func_40(iParam0, 34, 1);
		func_44(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_45(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_27(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_27(iParam0, 35, 1);
			if (bParam8)
			{
				func_27(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_46(iParam0, 0);
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
		func_40(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_27(iParam0, 33, 1);
		func_45(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_28(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_47(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_27(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_34(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_43(iParam0, 45, 1))
	{
		func_40(iParam0, 45, 1);
	}
	func_48(iParam0, 16, 1);
	func_40(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_41(func_49(iParam0), 0))
		{
			func_50(0, iParam0, bParam3, 0, bParam2);
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
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_CHAIRFOLDING02X"), false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_JOURNAL01X"), false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("CS_REVSWANSON"), false);
	STREAMING::REQUEST_MODEL(GET_HASH_KEY("P_PENCIL02X"), false);
	PED::_0xED9582B3DA8F02B4(1 + 1);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@titles@title_Gen_FewWeeksLater_onBlack";
	}
	return "";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
	}
	return "";
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
	}
	return "";
}

int func_24(var uParam0)
{
	int iVar0;

	func_51();
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	iVar0 = 0;
	func_52(&iVar0, 0, 2, 0, 0, 0, 0);
	return 1;
}

bool func_25()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_26(var uParam0)
{
	int iVar0;
	struct<11> Var1;

	if (!bLocal_277)
	{
		if (func_54(&Local_33, func_53(cLocal_29), 1, 0))
		{
			bLocal_277 = true;
		}
	}
	func_51();
	if (!bLocal_276)
	{
		Var1.f_10 = 7;
		Var1.f_3 = 1;
		Var1.f_4 = 1;
		Var1.f_2 = 1;
		Var1 = 1;
		Var1.f_1 = 1;
		Var1.f_6 = { 663.0497f, -1229.854f, 44.396f };
		Var1.f_9 = 161.36f;
		bLocal_275 = func_55(&iVar0, &Var1);
		if (iVar0 == 2)
		{
			PHYSICS::_0x06AADE17334F7A40(bLocal_275, Var1.f_6);
			bLocal_276 = true;
		}
	}
	if (bLocal_28)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_PLAYER_MENU"), false);
	}
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	func_56(&(Global_1879514.f_6), 16);
	func_57(&Global_0, 16);
	func_58();
	switch (iLocal_16)
	{
		case 0:
			func_28(&uLocal_21, 1);
			iLocal_16 = 1;
			break;
		case 1:
			if (PED::_0x5C16855277819BBF() >= 1 + 1 || func_59(&uLocal_21) >= 10f)
			{
				iLocal_16 = 2;
			}
			break;
		case 2:
			iLocal_17[0] = OBJECT::CREATE_OBJECT(GET_HASH_KEY("P_CHAIRFOLDING02X"), 625.62f, -1252.02f, 40.79f, true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_17[0], -46.41f);
			iLocal_17[2] = OBJECT::CREATE_OBJECT(GET_HASH_KEY("P_PENCIL02X"), 625.62f, -1252.02f, 40.79f, true, true, false, false, true);
			iLocal_17[1] = OBJECT::CREATE_OBJECT(GET_HASH_KEY("P_JOURNAL01X"), 625.62f, -1252.02f, 40.79f, true, true, false, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_17[0], true, false) + Vector(-0.5f, 0f, 0f), (ENTITY::GET_ENTITY_HEADING(iLocal_17[0]) + 180f), true, false, true);
			func_28(&uLocal_21, 1);
			iLocal_16 = 3;
			break;
		case 3:
			if (func_59(&uLocal_21) >= 20f)
			{
				return true;
			}
			if (func_60(uLocal_24, 1))
			{
				iLocal_16 = 4;
			}
			break;
		case 4:
			func_61(&Local_33, Global_35, "ARTHUR", 0, 0, 0);
			func_61(&Local_33, iLocal_14[0], "RevSwanson", 0, 0, 0);
			func_61(&Local_33, iLocal_17[0], "p_chairfolding02x", 0, 0, 0);
			func_61(&Local_33, iLocal_17[1], "p_journal01x", 0, 0, 0);
			func_61(&Local_33, iLocal_17[2], "p_pencil02x", 0, 0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_33.f_156, "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_33.f_156, "RevSwanson", iLocal_14[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_33.f_156, "p_chairfolding02x", iLocal_17[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_33.f_156, "p_journal01x", iLocal_17[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_33.f_156, "p_pencil02x", iLocal_17[2], 0);
			iLocal_16 = 5;
			break;
		case 5:
			ANIMSCENE::START_ANIM_SCENE(Local_25[0 /*2*/]);
			func_62();
			if (func_63())
			{
				MISC::SET_WEATHER_TYPE(GET_HASH_KEY("MISTY"), true, true, false, 0f, false);
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
			}
			else
			{
				MISC::SET_WEATHER_TYPE(GET_HASH_KEY("THUNDER"), true, true, false, 0f, false);
				CLOCK::SET_CLOCK_TIME(20, 0, 0);
			}
			ANIMSCENE::START_ANIM_SCENE(Local_25[0 /*2*/]);
			AUDIO::_0x6339C1EA3979B5F7("Pass_Time", "Chapter_Screen_Scenes");
			func_64(200f, 0, 0, 1);
			func_65(200f, 0, 0, 1);
			func_66(200f, 0, 0, 1);
			iLocal_16 = 6;
			break;
		case 6:
			CAM::DO_SCREEN_FADE_IN(1000);
			iLocal_16 = 7;
			break;
		case 7:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_25[0 /*2*/]) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(Local_25[0 /*2*/]) - 0.5f) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(Local_25[0 /*2*/], false))
			{
				AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
				func_67(cLocal_29, &Local_33);
				bLocal_28 = false;
				iLocal_16 = 8;
			}
			break;
		case 8:
			func_67(cLocal_29, &Local_33);
			if (!HUD::TEXT_BLOCK_IS_LOADED(func_68(0)))
			{
				HUD::TEXT_BLOCK_REQUEST(func_68(0));
			}
			if (!func_60(uLocal_24, 2))
			{
				if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(Local_33.f_156, "RevSwanson"))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_14[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_14[0], 0f, 5f, 0f), 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
					PED::FORCE_PED_MOTION_STATE(iLocal_14[0], GET_HASH_KEY("MOTIONSTATE_WALK"), false, 0, false);
					func_15(21, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					func_69(&uLocal_24, 2);
				}
			}
			if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(Local_33.f_156))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_17[0]));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_17[1]));
				if (func_71(func_70(23)) == 451)
				{
					func_72(func_68(1), 10000, 0, 0, 0, 1);
				}
				return true;
			}
			break;
	}
	return false;
}

void func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return;
		}
	}
	func_74(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_28(var uParam0, bool bParam1)
{
	if (bParam1 || !func_75(uParam0))
	{
		func_76(uParam0);
	}
}

void func_29(int iParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_77(2000);
	Global_16 = 0;
	func_78();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_79(*iParam0, 8));
	if (!func_79(*iParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_79(*iParam0, 2) || func_79(*iParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_79(*iParam0, 16))
	{
		func_80(1);
	}
	if (func_79(*iParam0, 32))
	{
		func_81(Global_35, GET_HASH_KEY("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_82(GET_HASH_KEY("KIT_BANDANA"), 0);
	}
	func_83(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*iParam0 = 0;
}

void func_30()
{
	struct<16> Var0;

	Var0.f_15 = GET_HASH_KEY("DUTCH_GANG");
	Var0 = PLAYER::PLAYER_PED_ID();
	Var0.f_12 = 46;
	Var0.f_4 = GET_HASH_KEY("DUTCH_GANG");
	Var0.f_8 = 0;
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

bool func_31(int iParam0)
{
	int iVar0;

	if (!func_84(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_32(int iParam0)
{
	func_48(iParam0, 4, 1);
}

bool func_33(int iParam0)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

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
	if (func_43(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_42(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_33(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_85(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(bVar1, true)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_27(iParam0, 2, 1);
	}
	else
	{
		func_86(iParam0);
		func_27(iParam0, 1, 1);
	}
}

bool func_35(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_36(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_87(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_37(iParam0, 1, 0);
		}
	}
	func_37(iParam0, 16, bParam1);
}

void func_37(int iParam0, int iParam1, bool bParam2)
{
	if (!func_73(iParam0))
	{
		return;
	}
	func_88(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_38(int iParam0)
{
	func_37(iParam0, 8, 0);
}

void func_39(int iParam0)
{
	func_27(iParam0, 36, 1);
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return;
		}
	}
	func_74(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_41(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_89(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_89(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_89(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_42(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_90(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_43(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_73(iParam0))
		{
			return false;
		}
	}
	func_74(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_33(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_91(iParam0);
		}
	}
	if (func_43(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_33(iParam0), 137, true);
	}
}

void func_45(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_40(iParam0, 50, 1);
		func_40(iParam0, 48, 1);
		func_40(iParam0, 49, 1);
		func_40(iParam0, 51, 1);
		func_40(iParam0, 52, 1);
		func_40(iParam0, 54, 1);
		func_40(iParam0, 55, 1);
	}
	else
	{
		func_27(iParam0, 50, 1);
		func_27(iParam0, 48, 1);
		func_27(iParam0, 49, 1);
		func_27(iParam0, 51, 1);
		if (bParam3)
		{
			func_27(iParam0, 54, 1);
		}
		else
		{
			func_40(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_27(iParam0, 52, 1);
			if (bParam3)
			{
				func_27(iParam0, 55, 1);
			}
		}
		else
		{
			func_40(iParam0, 52, 1);
			if (!bParam3)
			{
				func_40(iParam0, 55, 1);
			}
		}
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_33(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_33(iParam0), 204, false);
	}
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(int iParam0, int iParam1, bool bParam2)
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

bool func_49(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_50(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_73(iParam1))
	{
		return;
	}
	iVar0 = func_49(iParam1);
	if (func_92(iParam1))
	{
		if (!func_93(iParam1))
		{
			return;
		}
	}
	func_40(iParam1, 39, 1);
	func_94(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_94(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_94(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_27(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_95(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_51()
{
	Global_1905944.f_5695 = 1;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_96(0, 0);
		func_97(-1);
	}
	func_98(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_99(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_99(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_99(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_99(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_99(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_99(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_99(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_99(*iParam0, 4) && !func_99(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_99(*iParam0, 2048))
	{
		func_100(0, 0);
	}
	if (func_99(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_99(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (func_99(*iParam0, 8192))
	{
		func_101();
	}
	if (!func_99(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_99(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_99(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_99(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_102() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_103(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_104(&vVar3, 50, 10, 0);
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_105(2);
						func_106(-1);
						func_107(vVar3);
						func_109(func_108());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_99(*iParam0, 4096))
	{
		func_110(Global_35);
	}
	if (!func_99(*iParam0, 1048576))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, 1, 0);
	}
	if (!func_99(*iParam0, 2097152))
	{
		if (func_111() || PED::_IS_PED_DRUNK(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

char[] func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_54(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_113(uParam0, 256) && !func_113(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_114(uParam0, sParam1);
	if (!func_113(uParam0, 64))
	{
		if (!func_103(func_115(uParam0)))
		{
			func_116(uParam0, 64);
		}
		else
		{
			vVar0 = { func_117(uParam0) };
			if (!func_103(vVar0))
			{
				func_118(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_119(Global_35, func_115(uParam0), 1);
	if (func_113(uParam0, 128) || func_113(uParam0, 256))
	{
		if ((fVar3 >= func_120(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_121();
				uParam0->f_241 = 0;
			}
			func_122(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
			}
			func_123(uParam0);
			func_124(uParam0, 128, 1);
			func_124(uParam0, 256, 1);
			func_124(uParam0, 4096, 1);
			func_124(uParam0, 32768, 1);
			func_124(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_125(uParam0) || bParam2)
	{
		if (!func_113(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				if (func_125(uParam0) >= func_120(uParam0))
				{
				}
				Var4 = { func_126(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_127(uParam0);
				}
				Var4 = { func_126(uParam0) };
				iVar12 = 256;
				if (!func_113(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_128(uParam0, 0, 0, 0, 0);
				func_116(uParam0, 128);
			}
		}
	}
	if (func_113(uParam0, 128))
	{
		if (func_113(uParam0, 256) && !func_113(uParam0, 4194304))
		{
			return true;
		}
		func_129(uParam0);
		if (!uParam0->f_241)
		{
			if (func_130())
			{
				func_131(4096);
				uParam0->f_241 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { func_132(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_174[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_174[iVar14 /*9*/].f_8)
						{
							uParam0->f_174[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_156, &(uParam0->f_174[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &(uParam0->f_174[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_113(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, &Var15))
				{
					if (!func_113(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_156, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_156, &Var15);
						}
						func_116(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_116(uParam0, 256);
			func_124(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_55(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_133(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return false;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return false;
	}
	if (*uParam1)
	{
		if (func_103(uParam1->f_6))
		{
		}
	}
	bVar0 = func_134();
	if (*uParam1)
	{
		if (bVar0 && !func_135(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_136(5))
			{
				func_137(5);
				func_138(5);
				func_106(0);
				func_105(0);
			}
		}
	}
	if (func_139(Global_36) == 8)
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_135(Global_1835011[37 /*74*/].f_1, 1)) && !func_135(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return false;
	}
	if ((bVar0 && func_135(Global_1835011[43 /*74*/].f_1, 1)) && !func_135(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return false;
		}
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_140(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_141(iVar1))
	{
		bVar3 = true;
		if (func_142(iVar1))
		{
			bVar4 = true;
		}
		if (func_143(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_144(uParam1->f_10);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_136(0) && func_136(1))
			{
				func_145(1, 0);
				*iParam0 = 0;
				return false;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_146())
			{
				func_147();
			}
			func_106(0);
			func_105(0);
			func_107(uParam1->f_6);
		}
	}
	if (!func_141(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_148(uParam1->f_10) == 0 || func_149(uParam1->f_10) == 0) || func_150(uParam1->f_10) == 0)
			{
				func_151(uParam1->f_10);
			}
			func_152(uParam1->f_10);
			func_153(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return false;
		}
		*iParam0 = 1;
		return false;
	}
	iVar1 = uParam1->f_10;
	bVar2 = func_140(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_141(iVar1))
	{
		bVar3 = true;
		if (func_142(iVar1))
		{
			bVar4 = true;
		}
		if (func_143(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(bVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(bVar2, false);
			}
			if (!func_103(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(bVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(bVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bVar2, false);
			}
		}
	}
	if (func_154(uParam1->f_10))
	{
		*iParam0 = 0;
		return false;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return false;
			}
			*iParam0 = 1;
			return false;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(bVar2))
			{
				*iParam0 = 0;
				return false;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != bVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_155(uParam1->f_10) };
			Var10 = { func_156() };
			func_157(bVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, bVar2);
			PED::SET_PED_CONFIG_FLAG(bVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return bVar2;
	}
	if (!func_158(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar2, true, true);
		func_159(uParam1->f_10);
		if (uParam1->f_2 && !func_103(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(bVar2, false);
			PHYSICS::_0x0348469DAA17576C(bVar2);
			ENTITY::SET_ENTITY_COORDS(bVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(bVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bVar2, false);
		}
		*iParam0 = 2;
		return bVar2;
	}
	func_160(uParam1->f_10);
	if (func_158(uParam1->f_10))
	{
		iVar16 = func_161(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return false;
		}
	}
	*iParam0 = 2;
	return bVar2;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_58()
{
	if (func_60(uLocal_24, 2))
	{
		return 1;
	}
	if (func_60(uLocal_24, 1))
	{
		return 1;
	}
	iLocal_14[0] = func_162(21, 1, 1, 630.6927f, -1250.24f, 40.6797f, 123f, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_14[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_14[0])) && func_14(21))
	{
		func_69(&uLocal_24, 1);
		return 1;
	}
	return 0;
}

float func_59(var uParam0)
{
	if (!func_75(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_163(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_164() - uParam0->f_1);
}

bool func_60(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_61(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_165(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_166(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_167(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_168(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_169(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_170(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_171(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_62()
{
	func_172(2, 7);
	func_173(2);
}

bool func_63()
{
	return func_174() > 0;
}

void func_64(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_175() == 0)
	{
		func_176(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_177(0);
	if (bParam1)
	{
		func_178(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_179();
	}
	if (bParam2)
	{
		fParam0 = func_180(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_182(0, func_181(fParam0, -100f, 100f), bParam1);
}

void func_65(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_175() == 0)
	{
		func_176(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_177(2);
	if (bParam1)
	{
		func_178(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_180(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_182(2, func_181(fParam0, -100f, 100f), bParam1);
}

void func_66(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_175() == 0)
	{
		func_176(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_177(1);
	if (bParam1)
	{
		func_178(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_180(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_182(1, func_181(fParam0, -100f, 100f), bParam1);
}

int func_67(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	int iVar0;

	func_114(uParam4, &cParam0);
	if (func_113(uParam4, 2) && !func_113(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_183(uParam4) != 1)
	{
		func_184(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_183(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_156, false))
				{
					func_185(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					func_186(uParam4, 4);
					return 0;
				}
				else if (func_187(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_186(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && func_113(uParam4, 134217728))
				{
				}
				else
				{
					func_188(uParam4);
				}
				func_76(&(uParam4->f_1));
				func_186(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_129(uParam4);
				if (!func_75(&(uParam4->f_1)))
				{
					func_28(&(uParam4->f_1), 0);
				}
				else if (func_59(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_186(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (func_54(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
					{
						func_186(uParam4, 4);
					}
					else if (!func_103(func_115(uParam4)) && !func_189(Global_35, func_115(uParam4), 100f, 1, 1))
					{
						func_98(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_115(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_59(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_186(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_190(1, 0);
					func_185(uParam4, &cParam0);
					func_186(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_59(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				func_186(uParam4, 4);
			}
			break;
		case 3:
			func_191(uParam4);
			if (func_187(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_156, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || func_113(uParam4, 512)))
			{
				if (!func_113(uParam4, 1024) && func_192(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_113(uParam4, 512))
				{
					func_76(&(uParam4->f_1));
					func_116(uParam4, 512);
					func_186(uParam4, 4);
				}
				else if (func_113(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_184(uParam4);
			}
			if (func_113(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_193(uParam4) - func_194(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_195(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_194(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_196(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
				}
				func_197(uParam4);
				func_198(uParam4);
				return 1;
			}
			else
			{
				if (func_113(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_156);
						}
						func_76(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_116(uParam4, 512);
						func_124(uParam4, 67108864, 1);
						func_186(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_113(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && func_194(uParam4) <= 5000) && func_194(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_113(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_29(&(uParam4->f_213), 0);
					func_116(uParam4, 536870912);
				}
				if (func_194(uParam4) >= 5000 && func_194(uParam4) <= (func_193(uParam4) - 5000))
				{
					func_199();
				}
			}
			break;
		case 6:
			if (func_196(uParam4))
			{
				func_197(uParam4);
				func_198(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_113(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						func_116(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_187(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						func_186(uParam4, 3);
					}
					else if (func_59(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						func_186(uParam4, 3);
					}
				}
				if (func_183(uParam4) == 3)
				{
					if (func_113(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_186(uParam4, 4);
			break;
	}
	return 0;
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DST3";
		case 1:
			return "ODR3_O_NOWEAPNS";
	}
	return "";
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_70(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_71(int iParam0)
{
	if (!func_200(iParam0))
	{
		return -1;
	}
	return func_201(iParam0);
}

var func_72(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_73(int iParam0)
{
	return iParam0 > -1;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_75(var uParam0)
{
	return func_202(*uParam0, 1);
}

void func_76(var uParam0)
{
	func_203(uParam0, 0f);
}

void func_77(int iParam0)
{
	func_204();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_78()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_80(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938.f_865 = (Global_1945938.f_865 - Global_1945938.f_865 & 2);
	}
	else
	{
		Global_1945938.f_865 |= 2;
	}
	func_205(bParam0);
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_206(iParam1, 1, 0) };
		iParam3 = func_207(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_209(iParam1, iParam2, func_208(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_210(1, (func_175() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_208(iParam3, 1) /*11*/])
			{
				func_211(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_212(32768) && iParam1 != Global_1946804.f_57[func_208(iParam3, 1) /*11*/])
			{
				func_213();
				func_211(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_211(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_214(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_211(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_131(0);
			func_215(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_211(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_82(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_206(iParam0, 0, 0) };
	Var5 = { func_216(iParam0, Var0, Var0.f_4, 0) };
	if (func_217(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_218(0), &Var5, bParam1);
}

void func_83(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_175() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_190);
			}
			func_219(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_220(bParam1, 29, bVar4, 1, 0);
			func_220(bParam1, 31, bVar4, 1, 0);
			func_220(bParam1, 30, bVar4, 1, 0);
			func_220(bParam1, 22, bVar4, 1, 0);
			func_220(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_212(32768) && func_221(1108822547, 8)) && func_222(10, iParam3))
	{
		func_223(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_224(iVar1, 1);
			if (func_221(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_222(iVar1, iParam3))
				{
				}
				else if ((func_221(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_221(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_220(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_225(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_220(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_221(iVar3, 1))
							{
								func_226(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(bParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

float func_85(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_86(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_33(iParam0);
	iVar1 = func_42(iParam0, 0);
	func_227(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_87(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_88(var uParam0, int iParam1, bool bParam2)
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

bool func_89(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_90(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_228(iParam0);
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

void func_91(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_33(iParam0)))
		{
			func_229(iParam0, 67108864, 1);
			func_40(iParam0, 19, 1);
		}
	}
}

bool func_92(int iParam0)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_93(int iParam0)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_94(int iParam0, int iParam1, bool bParam2)
{
	if (!func_73(iParam0))
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

int func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_73(iParam0))
	{
		return 0;
	}
	bVar0 = func_49(iParam0);
	if (func_41(bVar0, 0))
	{
		if (func_41(PED::_GET_RIDER_OF_MOUNT(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_92(iParam0)) || func_93(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_230(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000f))
			{
				iVar1 = func_231(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_232(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_233(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_233(iParam0, 0));
					func_234(iParam0);
				}
			}
			else
			{
				if (func_35(iParam0, 32768, 1))
				{
					iVar2 = func_233(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_41(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_35(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_232(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_233(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_233(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_232(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_235(iParam0, 0);
	return 1;
}

void func_96(int iParam0, bool bParam1)
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

void func_97(int iParam0)
{
	int iVar0;

	if (func_175() != -1)
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

void func_98(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

bool func_99(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_100(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_236(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_237(1);
	}
}

void func_101()
{
	int iVar0;

	iVar0 = func_238(Global_35, 9, 1, 0);
	if (func_236(iVar0))
	{
		return;
	}
	iVar0 = func_238(Global_35, 7, 1, 0);
	if (func_236(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_238(Global_35, 0, 1, 0);
	if (func_236(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_238(Global_35, 1, 1, 0);
	if (func_236(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_238(Global_35, 18, 1, 0);
	if (func_236(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_239();
	if (func_236(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_240(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_241(6291456, 0);
	if (func_236(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_240(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_102()
{
	return Global_1900383.f_393;
}

bool func_103(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_104(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_242(*uParam0, 0f, 0f, 0f))
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

void func_105(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_106(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_107(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_108()
{
	return Global_1899515;
}

void func_109(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_110(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

bool func_111()
{
	return (func_243() || func_244());
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0f;
	}
	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_245(0f);
	Global_1935436.f_11 = 1;
	if (func_246())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_247();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_114(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_113(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_248("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_248("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_116(uParam0, 8192);
}

Vector3 func_115(var uParam0)
{
	return uParam0->f_5;
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_117(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_249(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_157))
	{
		uParam0->f_157 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_157, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_157, func_250(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_118(var uParam0, vector3 vParam1)
{
	if (func_103(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_119(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_120(var uParam0)
{
	return uParam0->f_147;
}

void func_121()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_251(Var0);
	}
}

void func_122(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &(uParam0->f_174[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &(uParam0->f_174[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, &(uParam0->f_174[iVar0 /*9*/]));
		}
		uParam0->f_174[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_123(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_113(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_252(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_113(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_124(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_124(uParam0, 16, 1);
}

void func_124(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_156);
	}
}

float func_125(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_126(var uParam0)
{
	return uParam0->f_158;
}

void func_127(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_253() };
	func_254(uParam0, &Var0);
}

void func_128(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_113(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_242(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_255());
		func_116(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_256(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_116(uParam0, 16);
	}
}

void func_129(var uParam0)
{
	if ((!func_113(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_156, false))
	{
		func_257(uParam0);
		func_258(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_156, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_156);
		}
		func_116(uParam0, 32768);
	}
}

bool func_130()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_131(int iParam0)
{
	struct<4> Var0;

	if (func_259(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_251(Var0);
}

struct<8> func_132(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_260(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_261() };
	}
	return Var0;
}

int func_133(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_134()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_135(int iParam0, bool bParam1)
{
	switch (func_262(iParam0))
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

bool func_136(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_150(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_141(iParam0))
	{
		return;
	}
	bVar0 = func_140(iParam0);
	func_263(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(bVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_264(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&bVar0);
	func_265(iParam0, 0);
	func_266(iParam0);
}

void func_138(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_267(&Var0);
	func_268(iParam0, Var0);
	func_269(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_270(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_271(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_272(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_273(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_274(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_275(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_276(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_277(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

int func_139(vector3 vParam0)
{
	return func_278(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_140(int iParam0)
{
	iParam0 = func_133(iParam0);
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

bool func_141(int iParam0)
{
	iParam0 = func_133(iParam0);
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

bool func_142(int iParam0)
{
	int iVar0;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	iVar0 = func_140(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_143(int iParam0)
{
	int iVar0;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	iVar0 = func_140(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_144(int iParam0)
{
	int iVar0;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_141(iParam0))
	{
		return;
	}
	iVar0 = func_140(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_279(iParam0);
	func_279(iParam0);
	func_280(iParam0, iParam1);
	func_281(iParam0, iParam1);
	func_282(iParam0, iParam1);
	bVar1 = func_140(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_283(bVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, bVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == bVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == bVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	bVar3 = func_140(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_283(bVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, bVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == bVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == bVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_284();
}

bool func_146()
{
	int iVar0;

	iVar0 = func_102();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_147()
{
	bool bVar0;

	bVar0 = func_102();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&bVar0);
	func_285(0);
}

int func_148(int iParam0)
{
	iParam0 = func_133(iParam0);
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

int func_149(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_150(int iParam0)
{
	iParam0 = func_133(iParam0);
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

void func_151(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_286(&uVar0, &uVar1, &uVar2);
	func_287(iParam0, uVar0);
	func_288(iParam0, uVar1);
	func_289(iParam0, uVar2);
	func_290(iParam0, 1);
	func_291(iParam0, 1);
}

void func_152(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_292(iParam0, 1);
}

void func_153(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_154(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_293(iParam0, 1);
}

struct<2> func_155(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_294(iParam0, &uVar2))
	{
	}
	if (!func_295(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_156()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_296(GET_HASH_KEY("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_296(GET_HASH_KEY("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_296(GET_HASH_KEY("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_296(GET_HASH_KEY("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_296(GET_HASH_KEY("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_296(GET_HASH_KEY("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_157(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return;
	}
	func_297(bParam0);
	func_298(bParam0, uParam1);
	func_299(bParam0);
	func_300(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_301(bParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, true);
}

bool func_158(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_159(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_160(int iParam0)
{
	int iVar0;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_161(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_266(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_266(iParam0);
	}
}

int func_161(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

int func_162(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_12(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_43(iParam0, 2, 1))
			{
				func_40(iParam0, 2, 1);
			}
			if (func_35(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_27(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_15(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_41(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_41(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_302(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_27(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_303(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_27(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_303(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_43(iParam0, 44, 0))
			{
				func_27(iParam0, 44, 0);
			}
			if (func_304(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_303(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_40(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], GET_HASH_KEY("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_45(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_305(iParam0, 0, 0, 1);
			}
			func_40(iParam0, 33, 1);
			func_40(iParam0, 34, 1);
			func_40(iParam0, 29, 1);
			if (!func_103(vVar0) && bParam7)
			{
				func_303(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_303(iParam0, 4);
			}
			else
			{
				func_303(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_302(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_306(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_303(iParam0, 4);
			}
			else
			{
				func_303(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_307(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_308(iParam0, iParam13, 0);
						func_309(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_43(iParam0, 25, 0))
						{
							func_40(iParam0, 25, 0);
						}
						func_27(iParam0, 66, 0);
						func_303(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_303(iParam0, 5);
				}
				func_27(iParam0, 28, 1);
			}
			else
			{
				func_303(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_303(iParam0, 6);
			}
			break;
		case 6:
			if (func_41(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_310(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_311(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_303(iParam0, 7);
		case 7:
			func_45(iParam0, bParam9, bParam15, 0);
			func_37(iParam0, 4, bParam11);
			func_39(iParam0);
			if (bParam20)
			{
				if (func_312(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_313(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_303(iParam0, 0);
			func_229(iParam0, 16, 1);
			func_40(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_163(var uParam0)
{
	return func_202(*uParam0, 2);
}

float func_164()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

char* func_165(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_250(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_314(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_315(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_166(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_167(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_168(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_169(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_170(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_171(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_172(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_316(iVar0) >= iParam1)
			{
			}
			else
			{
				func_317(iVar0, iParam1 > 7);
			}
			iVar0++;
		}
		iVar1++;
	}
	func_211(10, 0, 0, 0, 0);
}

void func_173(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		func_318();
		iVar0++;
	}
	func_211(9, 0, 0, 0, 0);
}

int func_174()
{
	return Global_40.f_11095.f_35;
}

int func_175()
{
	return Global_1572887.f_12;
}

void func_176(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_180(iParam0, fParam1, 1);
	}
	func_320(iParam0, (func_319(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_177(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_178(float fParam0)
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

void func_179()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_180(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_321();
	func_322(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_323(iParam0, 2);
	if (func_325(iVar0, func_324(iParam0, 2), 1))
	{
		func_326(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_327(88, bParam2);
		return 0f;
	}
	func_328(iParam0, func_321(), 2);
	func_326(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_181(float fParam0, float fParam1, float fParam2)
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

void func_182(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_175() != -1)
	{
		return;
	}
	if (!func_329(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_330(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_331(iParam0), iVar0);
	func_333(func_332(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_334(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_327(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_327(func_335(iParam0), 1);
	}
	sVar1 = func_336(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_183(var uParam0)
{
	return *uParam0;
}

void func_184(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_156, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || func_113(uParam0, 512))
	{
		if (!func_79(uParam0->f_213, 128))
		{
			func_337();
		}
		return;
	}
	if ((func_195(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, func_250(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_156, func_250(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!func_79(uParam0->f_213, 128))
		{
			func_337();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_338(iVar1))
		{
			if (func_339(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_79(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_340(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_156);
		func_337();
	}
}

void func_185(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_183(uParam0) == 2 && (func_99(uParam0->f_212, 16384) || func_113(uParam0, 268435456)))
	{
		Var0 = { func_132(uParam0) };
		func_341(uParam0, &Var0);
	}
	func_342(uParam0, sParam1);
	if (func_113(uParam0, 131072))
	{
		func_343(uParam0, 0);
	}
	if (func_344())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_345();
	}
	if (func_346())
	{
		func_347(1);
	}
	func_128(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_348(uParam0, cVar8);
	func_190(1, 0);
	func_122(uParam0);
	if (func_349() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, func_250(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_187(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_350(uParam0);
	func_258(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_76(&(uParam0->f_1));
}

bool func_187(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_188(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_132(uParam0) };
	func_254(uParam0, &Var0);
}

bool func_189(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_351(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_190(bool bParam0, int iParam1)
{
	if (func_352())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_353())
		{
			func_354(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_191(var uParam0)
{
	vector3 vVar0;

	if (!func_113(uParam0, 4))
	{
		if (func_99(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_355(uParam0) };
		if (!func_99(uParam0->f_212, 524288))
		{
			func_356(&(uParam0->f_224));
		}
		func_52(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_357(uParam0, 0f, 0f, 0f);
		func_358(uParam0);
		func_359(uParam0);
		func_360(uParam0, 0f, 0f, 0f, 0, 0);
		func_361(uParam0);
		func_116(uParam0, 4);
		func_362(uParam0, 0);
		func_83(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

bool func_192(var uParam0, bool bParam1)
{
	if (func_113(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_156, "ExportCamera") || (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_156, "ExportCamera") && bParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_156))
	{
		func_116(uParam0, 262144);
		func_362(uParam0, 1);
		return true;
	}
	return false;
}

int func_193(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_156, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_156) * 1000f));
}

int func_194(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_156, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_156) * 1000f));
}

bool func_195(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_363(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_196(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_156, false))
	{
		if (func_113(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_156) && func_113(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_197(var uParam0)
{
	if (((func_113(uParam0, 1073741824 /* Float: 2f */) && !func_113(uParam0, 524288)) && func_113(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_198(var uParam0)
{
	if (!func_113(uParam0, 536870912))
	{
		func_362(uParam0, 1);
		func_29(&(uParam0->f_213), uParam0->f_224);
		func_121();
		func_116(uParam0, 536870912);
	}
	if (func_113(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_364(uParam0);
	func_186(uParam0, 1);
	func_123(uParam0);
	func_365(uParam0);
	func_366(uParam0);
	func_367(uParam0, 4);
	func_127(uParam0);
	func_343(uParam0, 1);
	func_122(uParam0);
	func_47(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	func_368(!func_79(uParam0->f_213, 128));
	if (!func_79(uParam0->f_213, 128))
	{
		func_337();
	}
}

void func_199()
{
	Global_1935630.f_52 = 1;
}

bool func_200(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_201(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_202(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_203(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_164() - fParam1);
	func_369(uParam0, 1);
	func_370(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_204()
{
	Global_1911774 = 1;
}

void func_205(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

struct<5> func_206(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_371(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_372(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_216(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_373(bParam1) };
			if (bParam2 && func_374(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_375(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_375(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_376(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_377(bParam1) };
			switch (func_378(iParam0))
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
			if (func_379(iParam0, -1823706425))
			{
				Var0 = { func_216(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_379(iParam0, -1483207246))
			{
				Var0 = { func_216(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_380(Var0, &Var27, bParam1, 0))
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

int func_207(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_224(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_208(int iParam0, int iParam1)
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

bool func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_381();
	if (iParam2 == 39)
	{
		Var0 = { func_206(iParam0, 1, 0) };
		iParam2 = func_208(func_207(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_382(iParam0, 866047851) && func_383(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_212(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_384(func_224(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_385(iParam2);
	func_386(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_387(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_387(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_388(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_389(iParam0, iParam2, iParam1, func_175() != -1);
	if (bParam4)
	{
		func_390(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_390(&(Global_1946804.f_1378), 1, 0);
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
				func_226(func_224(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_210(bool bParam0, bool bParam1, bool bParam2)
{
	func_391(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_219(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_392(Var0);
}

bool func_212(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_213()
{
	func_393(&(Global_1946804.f_2776));
	func_394(32768);
	func_226(1108822547, 8, 6);
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_208(iParam0, 1);
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

void func_215(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_251(Var0);
}

struct<4> func_216(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_395(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_218(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_217(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_395(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_216(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_218(bParam6), &Var0, 0);
	return uVar4;
}

int func_218(bool bParam0)
{
	if (func_175() == -1)
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

void func_219(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_220(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_224(iParam1, 1);
	if (!bParam2 && iVar2 == GET_HASH_KEY("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_396(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_221(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_208(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_222(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_223(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_221(1108822547, 6))
	{
		if (bParam2)
		{
			func_220(bParam0, iVar0, func_175() != -1, 0, 0);
			func_225(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_226(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

int func_224(int iParam0, int iParam1)
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

void func_225(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_208(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_208(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_208(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_208(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_208(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_227(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_397(bParam1);
	}
}

int func_228(int iParam0)
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

void func_229(int iParam0, int iParam1, bool bParam2)
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

float func_230(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_351(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

int func_231(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_398(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_49(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(bVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&bVar3);
		}
		iVar2++;
	}
}

int func_233(int iParam0, bool bParam1)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_399(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_234(int iParam0)
{
	int iVar0;

	if (!func_73(iParam0))
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

void func_235(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

bool func_236(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_237(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_238(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_239()
{
	if (!func_236(Global_1935630.f_45))
	{
		return GET_HASH_KEY("WEAPON_UNARMED");
	}
	return Global_1935630.f_45;
}

int func_240(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case GET_HASH_KEY("GROUP_SNIPER"):
		case GET_HASH_KEY("GROUP_REVOLVER"):
		case GET_HASH_KEY("GROUP_REPEATER"):
		case GET_HASH_KEY("GROUP_PISTOL"):
		case GET_HASH_KEY("GROUP_SHOTGUN"):
		case GET_HASH_KEY("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_236(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_236(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_175() == -1 && !func_400(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == GET_HASH_KEY("WEAPON_UNARMED") && iParam1 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case GET_HASH_KEY("GROUP_REVOLVER"):
			case GET_HASH_KEY("GROUP_PISTOL"):
				iVar0 = GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case GET_HASH_KEY("GROUP_SNIPER"):
			case GET_HASH_KEY("GROUP_REPEATER"):
			case GET_HASH_KEY("GROUP_SHOTGUN"):
			case GET_HASH_KEY("GROUP_RIFLE"):
				if (func_400(GET_HASH_KEY("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = GET_HASH_KEY("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = GET_HASH_KEY("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_236(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != GET_HASH_KEY("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_401(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_402(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_403(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, bParam4);
	}
	return iVar0;
}

int func_241(int iParam0, int iParam1)
{
	var uVar0;

	return func_404(&uVar0, iParam0, iParam1);
}

bool func_242(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_243()
{
	return Global_1935436 == 1;
}

bool func_244()
{
	return Global_1935436 == 2;
}

void func_245(float fParam0)
{
	func_405(10, fParam0);
}

bool func_246()
{
	if (func_175() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_247()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

struct<8> func_248(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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

struct<4> func_249(var uParam0)
{
	return uParam0->f_152;
}

char* func_250(int iParam0)
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
	return func_406(iVar0);
}

void func_251(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_407(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_407(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_408(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_219(8);
}

void func_252(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> func_253()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_254(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

char* func_255()
{
	return "unnamed";
}

void func_256(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

void func_257(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_363(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_170(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_258(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_363(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (func_363(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_409(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !func_363(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						func_110(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_259(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<8> func_260(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_261()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

int func_262(int iParam0)
{
	if (!func_200(iParam0))
	{
		return -1;
	}
	return func_410(iParam0);
}

void func_263(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_140(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_411(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, bVar0, iVar1, 0))
		{
		}
		else
		{
			bVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(bVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7) && !ENTITY::_0x88AD6CC10D8D35B2(bVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&bVar7);
			}
		}
		iVar6++;
	}
}

bool func_264(int iParam0)
{
	if (!func_412(iParam0))
	{
		return false;
	}
	if (!func_413())
	{
		return true;
	}
	return false;
}

void func_265(int iParam0, int iParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_266(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

void func_267(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_268(int iParam0, struct<2> Param1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_414(iParam0, Param1))
	{
	}
	if (!func_415(iParam0, Param1.f_1))
	{
	}
}

void func_269(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_416(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_270(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_271(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_272(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_273(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_274(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_276(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_277(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("BAYOUNWA"):
			return 0;
		case GET_HASH_KEY("BIGVALLEY"):
			return 1;
		case GET_HASH_KEY("BLUEWATERMARSH"):
			return 2;
		case GET_HASH_KEY("CUMBERLAND"):
			return 3;
		case GET_HASH_KEY("GREATPLAINS"):
			return 4;
		case GET_HASH_KEY("GRIZZLIESEAST"):
			return 6;
		case GET_HASH_KEY("GRIZZLIESWEST"):
			return 7;
		case GET_HASH_KEY("GUARMAD"):
			return 8;
		case GET_HASH_KEY("HEARTLANDS"):
			return 9;
		case GET_HASH_KEY("ROANOKE"):
			return 10;
		case GET_HASH_KEY("SCARLETTMEADOWS"):
			return 11;
		case GET_HASH_KEY("TALLTREES"):
			return 12;
		case GET_HASH_KEY("GAPTOOTHRIDGE"):
			return 13;
		case GET_HASH_KEY("RIOBRAVO"):
			return 14;
		case GET_HASH_KEY("CHOLLASPRINGS"):
			return 15;
		case GET_HASH_KEY("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_279(int iParam0)
{
	iParam0 = func_133(iParam0);
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

void func_280(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_281(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_282(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_417(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_417(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_418(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_419(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_420(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_283(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (func_421(bParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(bParam0, 0);
	PED::SET_PED_OWNS_ANIMAL(Global_35, bParam0, false);
	PED::_0xB8B6430EAD2D2437(bParam0, GET_HASH_KEY("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(bParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	POPULATION::_0xF74E134F40192884(bParam0, 1);
	PED::_0xFD6943B6DF77E449(bParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	FLOCK::_0xAEB97D84CDF3C00B(bParam0, 0);
	if (func_422(bParam0))
	{
		iVar3 = func_423(bParam0);
		if (func_424(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 24, false);
}

void func_284()
{
	if (func_141(0))
	{
		func_425(0);
	}
	if (func_141(1))
	{
		func_425(1);
	}
	if (func_141(5))
	{
		func_425(5);
	}
	if (func_141(6))
	{
		func_279(6);
	}
}

void func_285(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_286(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_134())
	{
		if (func_246())
		{
			bVar0 = false;
			if (!func_135(Global_1835011[15 /*74*/].f_1, 1) && !func_329(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_426();
				*iParam1 = func_427();
				*uParam2 = func_428();
				return 1;
			}
			else
			{
				*uParam0 = func_429();
				*iParam1 = func_430();
				*uParam2 = func_431();
				return 1;
			}
		}
		else if (func_432())
		{
			if (!func_135(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_433();
				*iParam1 = func_434();
				*uParam2 = func_435();
				return 1;
			}
			else
			{
				*uParam0 = func_436();
				*iParam1 = func_437();
				*uParam2 = func_438();
				return 1;
			}
		}
	}
	else if (func_246())
	{
		*uParam0 = func_439();
		*iParam1 = func_440();
		*uParam2 = func_441();
		return 1;
	}
	else if (func_432())
	{
		*uParam0 = func_442();
		*iParam1 = func_443();
		*uParam2 = func_444();
		return 1;
	}
	return 0;
}

void func_287(int iParam0, var uParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_288(int iParam0, var uParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_289(int iParam0, var uParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_290(int iParam0, int iParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_148(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_286(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_445(iParam1);
	iVar5 = func_140(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_292(int iParam0, int iParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 || iParam1);
}

bool func_293(int iParam0, int iParam1)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 && iParam1) != 0;
}

bool func_294(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_417(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_446(Var0, GET_HASH_KEY("SLOTID_HORSE_MANE"), 0);
	if (!func_395(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_295(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_417(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_446(Var0, GET_HASH_KEY("SLOTID_HORSE_TAIL"), 0);
	if (!func_395(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_296(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_447(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_448() };
	*uParam1 = func_446(Var0, iParam0, 0);
	if (!func_395(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_297(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_TAILS"), 0, false);
}

void func_298(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_449(bParam0, *uParam1);
	func_449(bParam0, uParam1->f_1);
}

void func_299(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, GET_HASH_KEY("HORSE_SADDLEBAGS"), 0, false);
}

void func_300(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_449(bParam0, *uParam1);
	func_449(bParam0, uParam1->f_1);
	func_449(bParam0, uParam1->f_2);
	func_449(bParam0, uParam1->f_3);
	func_449(bParam0, uParam1->f_4);
	func_449(bParam0, uParam1->f_5);
}

int func_301(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, true, true, true, true, false);
	}
	return 1;
}

void func_302(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_33(iParam0);
	if (!func_12(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_303(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_304(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_73(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_450(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_451(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_452(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_450(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_453(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_454(iParam0, 0))
					{
						func_27(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_455(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				func_40(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_41(func_33(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_41(func_49(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_305(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_456(iParam0, bParam3);
	}
	else
	{
		func_457(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_458(iParam0, bParam3);
	}
	else
	{
		func_459(iParam0, bParam3);
	}
}

void func_306(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (bParam0 == func_460(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_461(bParam0))
	{
		if (func_462(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_89(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_306(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_306(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_89(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_89(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_89(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_89(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_89(iParam5, 129))
	{
		if (func_89(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_89(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_89(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_89(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_461(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_89(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_89(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_307(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_12(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_463(iParam0, iParam1);
	return bVar0;
}

void func_308(int iParam0, int iParam1, bool bParam2)
{
	if (!func_12(iParam0))
	{
		return;
	}
	if (!func_307(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_27(iParam0, 25, 1);
	}
}

void func_309(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_464(iParam2))
		{
			iVar0 = func_465(iParam2, -1);
			if (func_466(iParam1, iVar0))
			{
				if (func_467(iParam1, iVar0))
				{
					if (func_468(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_469(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		func_470(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_27(iParam0, 66, 0);
		}
	}
}

void func_310(int iParam0)
{
	func_471(iParam0);
	func_472(iParam0, 0);
}

void func_311(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, GET_HASH_KEY("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), GET_HASH_KEY("WEAPON_UNARMED"), false);
			}
		}
	}
}

bool func_312(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(bParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_313(int iParam0, int iParam1)
{
	if (!func_73(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_240(iParam1, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_240(iParam1, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

char* func_314(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_473(iVar0);
}

char* func_315(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case GET_HASH_KEY("CANOE"):
			return "CANOE";
		case GET_HASH_KEY("WAGON02X"):
			return "WAGON02X";
		case GET_HASH_KEY("WAGON04X"):
			return "WAGON04X";
		case GET_HASH_KEY("WAGON05X"):
			return "WAGON05X";
		case GET_HASH_KEY("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case GET_HASH_KEY("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case GET_HASH_KEY("COACH2"):
			return "COACH2";
		case GET_HASH_KEY("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case GET_HASH_KEY("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case GET_HASH_KEY("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case GET_HASH_KEY("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case GET_HASH_KEY("UTILLIWAG"):
			return "UTILLIWAG";
		case GET_HASH_KEY("SKIFF"):
			return "SKIFF";
		case GET_HASH_KEY("HANDCART"):
			return "HANDCART";
		case GET_HASH_KEY("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case GET_HASH_KEY("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

int func_316(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

void func_317(int iParam0, bool bParam1)
{
	int iVar0;

	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_474(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_475(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_476(iVar0);
	func_477(iParam0, iVar0, 0);
	if (func_475(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			func_474(iParam0);
		}
		else
		{
			func_478(iParam0);
		}
	}
	func_479();
}

void func_318()
{
	int iVar0;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_480();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	func_481(iVar0, 0);
	if (func_482())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			func_480();
		}
		else
		{
			func_483();
		}
	}
	func_484();
}

float func_319(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_485();
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

int func_320(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_485();
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
		func_486(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_487(iVar0, iParam0, fParam1);
	func_488(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_331(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_321()
{
	return Global_1899515;
}

void func_322(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_489(*iParam0);
	iVar1 = func_490(*iParam0);
	iVar2 = func_491(*iParam0);
	iVar3 = func_492(*iParam0);
	iVar4 = func_493(*iParam0);
	iVar5 = func_494(*iParam0);
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
		iVar7 = func_495(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_496(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_323(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_485();
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

int func_324(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_485();
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

bool func_325(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_497(iParam1) || !func_497(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_326(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_485();
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

void func_327(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_498(iParam0, &iVar0, &iVar1);
	if (!func_499(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_500(iVar0, iVar1);
}

void func_328(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_485();
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

bool func_329(int iParam0)
{
	if (!func_501(iParam0))
	{
		return false;
	}
	return func_502(iParam0);
}

int func_330(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_331(int iParam0)
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

int func_332(int iParam0)
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

void func_333(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_503(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_334(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_335(int iParam0)
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

char* func_336(int iParam0)
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

void func_337()
{
	if (func_504(Global_43801))
	{
		func_505(&Global_43801, 0, 0);
	}
}

bool func_338(int iParam0)
{
	int iVar0;

	if (func_506(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_339(int iParam0, bool bParam1)
{
	if (bParam1 && !func_504(iParam0))
	{
		return false;
	}
	return !func_507(iParam0, 4);
}

bool func_340(bool bParam0, bool bParam1)
{
	if (!func_504(Global_43801))
	{
		Global_43801 = func_508("CUTSCENE_SKIP", GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, GET_HASH_KEY("LONG_TIMED_EVENT"), 0);
		Global_1945938[Global_43801 /*18*/].f_16 = Global_23[3];
		func_509(Global_43801, 0, 1);
		func_510(Global_43801, 6, 1);
		if (bParam1)
		{
			func_510(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_339(Global_43801, 0))
		{
			func_511(Global_43801, 1, 1);
		}
		if (func_512(Global_43801, 1) != 0f && bParam0)
		{
			func_509(Global_43801, 1, 1);
		}
		else
		{
			func_509(Global_43801, 0, 1);
		}
		return func_513(Global_43801, 1);
	}
	return false;
}

void func_341(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_174[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_158 };
			uParam0->f_174[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_254(uParam0, sParam1);
	func_124(uParam0, 2097152, 1);
	func_116(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_156, sParam1, true);
}

void func_342(var uParam0, char* sParam1)
{
	if (((!func_113(uParam0, 32) || func_514(uParam0)) || func_113(uParam0, 268435456)) && !func_113(uParam0, 65536))
	{
		func_515(&(uParam0->f_212), 256);
	}
}

void func_343(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 10, bParam1);
	}
}

bool func_344()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DOC_PLAYER_JOURNAL")) > 0;
}

void func_345()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == GET_HASH_KEY("DOC_PLAYER_JOURNAL"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

bool func_346()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

void func_347(bool bParam0)
{
	if (func_346())
	{
		Global_1357509 = 1;
	}
	if (func_516(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

void func_348(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

bool func_349()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_350(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar0 /*9*/])))
		{
			func_517(uParam0, &(uParam0->f_174[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_253() };
	func_517(uParam0, &Var1);
	Var1 = { func_132(uParam0) };
	func_517(uParam0, &Var1);
}

float func_351(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_352()
{
	return func_506(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_353()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_354(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

Vector3 func_355(var uParam0)
{
	return uParam0->f_214;
}

void func_356(var uParam0)
{
	int iVar0;

	if (func_518(&iVar0))
	{
		if (func_395(iVar0, 0))
		{
			if (func_378(iVar0) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, GET_HASH_KEY("MASKS_LARGE"), 0);
				func_81(Global_35, GET_HASH_KEY("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, GET_HASH_KEY("NECKWEAR"), 0);
			}
			if (!func_395(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_357(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_358(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (func_113(uParam0, 2048) && !func_103(func_519(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		bVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(bVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar1, uParam0->f_4, true, 0)) || func_113(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(bVar1))
			{
				iVar2 |= 32;
			}
			func_306(bVar1, func_519(uParam0), func_520(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		bVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar3, uParam0->f_4, true, 0)) || func_113(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, bVar3, true))
		{
			func_306(bVar3, func_519(uParam0), func_520(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_359(var uParam0)
{
	bool bVar0;
	vector3 vVar1;

	if ((func_113(uParam0, 268435456) && !func_103(func_519(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			vVar1 = { func_519(uParam0) };
			func_306(bVar0, vVar1, func_521(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(bVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(bVar0, 0f);
		}
	}
}

void func_360(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = iParam4;
	if (func_103(vParam1))
	{
		func_124(uParam0, 2048, 1);
	}
	else
	{
		func_116(uParam0, 2048);
		if (bParam5)
		{
			func_116(uParam0, -2147483648);
		}
	}
}

void func_361(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_156, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!func_363(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (func_236(func_238(iVar1, 0, 1, 0)))
						{
							if (!func_522(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (func_236(func_238(iVar1, 1, 1, 0)))
						{
							if (!func_522(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, GET_HASH_KEY("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_362(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::REMOVE_TAG_FROM_META_PED(Global_35, GET_HASH_KEY("HOLSTERS_LEFT"), 0);
			Global_17 = !bParam1;
		}
	}
}

bool func_363(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_364(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_523(uParam0);
	func_118(uParam0, 0f, 0f, 0f);
	func_524(uParam0);
}

void func_365(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_366(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_367(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_171(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_368(bool bParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_337();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_369(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_370(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<4> func_371(bool bParam0)
{
	return func_216(GET_HASH_KEY("CHARACTER"), func_525(), -1591664384, bParam0);
}

int func_372(int iParam0)
{
	vector3 vVar0;

	if (!func_395(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_373(bool bParam0)
{
	int iVar0;

	iVar0 = func_218(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_216(923904168, func_371(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_216(923904168, func_371(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_216(923904168, func_371(bParam0), -740156546, 0);
}

bool func_374(int iParam0, bool bParam1)
{
	if (func_378(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_329(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_375(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_217(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_376(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_526(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_377(bool bParam0)
{
	int iVar0;

	iVar0 = func_218(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_216(271701509, func_371(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_216(271701509, func_371(bParam0), 12999093, 0);
}

int func_378(int iParam0)
{
	struct<2> Var0;

	if (!func_395(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_379(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_378(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_380(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_218(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_381()
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

bool func_382(int iParam0, int iParam1)
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

int func_383(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_384(int iParam0)
{
	func_226(iParam0, 8, 6);
}

void func_385(int iParam0)
{
	func_527(&(Global_1946804.f_2589), iParam0);
}

void func_386(int iParam0, int iParam1)
{
	func_528(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_387(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_388(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_378(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_222(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_386(iVar1, iVar3);
		}
	}
	if (func_529(-1586649372) && func_222(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_386(iVar1, iVar3);
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
						func_386(iVar1, iVar3);
					}
				}
			}
			func_530(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_530(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_386(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_530(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == GET_HASH_KEY("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_386(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_386(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_530(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_530(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_386(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_530(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_386(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_386(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_378(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_386(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_531(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_378(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_386(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_382(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_386(iVar1, iVar3);
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
						func_386(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_531(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_382(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_386(iVar1, iVar3);
					}
				}
			}
			switch (func_378(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_378(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_386(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_378(uParam0->f_1[iVar1 /*3*/]) || func_382(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_386(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_389(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_532(0);
	if (iParam2 != 0 && func_533(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_534(iParam0, func_224(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_390(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_175() != -1;
	iVar7 = func_532(0);
	if (func_212(32768))
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
			iVar5 = func_224(iVar0, 1);
			if (func_221(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_221(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_535(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_536(uParam0);
				if (iVar3 > 0)
				{
					if (!func_212(524288))
					{
						func_219(524288);
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
							iVar5 = func_224(iVar0, 1);
							if (func_221(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_221(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_535(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_386(iVar0, iParam2);
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
					func_394(524288);
				}
			}
		}
	}
}

void func_391(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_537(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_175() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_538(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_539(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_539(Global_40.f_7729);
				Global_1946804.f_1378 = func_539(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_540(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_541(0, 1);
	}
}

void func_392(struct<4> Param0)
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
			if (func_407(Param0))
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
			func_408(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_219(8);
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
			if (func_407(Param0))
			{
				return;
			}
			func_408(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_219(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_215(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_393(var uParam0)
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

void func_394(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_395(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_396(int iParam0)
{
	int iVar0;

	iVar0 = func_378(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return GET_HASH_KEY("HATS");
		case -525676072:
			return GET_HASH_KEY("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

void func_397(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_398(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_73(iParam0))
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
	if (!func_73(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_399(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_73(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_231(iParam0, 1);
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

bool func_400(int iParam0)
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

int func_401(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_206(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_542((398 + iVar28), 1);
			if (func_375(iParam0, &Var0, iVar5, 0))
			{
				if (func_376(iParam0, &Var6, iVar5))
				{
					Var29 = { func_216(iParam0, Var0, iVar5, 0) };
					func_543(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_544(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_545(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_546(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_402(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == GET_HASH_KEY("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == GET_HASH_KEY("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case GET_HASH_KEY("G_M_M_UNIDUSTER_03"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERHENCHMAN_03"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_04"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERHENCHMAN_02"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_02"):
		case GET_HASH_KEY("U_M_M_FATDUSTER_01"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERHENCHMAN_01"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_01"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_01"):
		case GET_HASH_KEY("G_F_M_UNIDUSTER_01"):
		case GET_HASH_KEY("U_M_M_UNIDUSTERLEADER_01"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_03"):
		case GET_HASH_KEY("G_M_M_UNIDUSTER_05"):
		case GET_HASH_KEY("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case GET_HASH_KEY("G_M_Y_UNIEXCONFEDS_02"):
		case GET_HASH_KEY("G_M_Y_UNIEXCONFEDS_01"):
		case GET_HASH_KEY("G_M_O_UNIEXCONFEDS_01"):
		case GET_HASH_KEY("CS_EXCONFEDSLEADER_01"):
		case GET_HASH_KEY("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case GET_HASH_KEY("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case GET_HASH_KEY("U_M_M_BHT_SKINNERSEARCH"):
		case GET_HASH_KEY("G_M_M_UNIMOUNTAINMEN_01"):
		case GET_HASH_KEY("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case GET_HASH_KEY("G_M_M_UNIRANCHERS_01"):
		case GET_HASH_KEY("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case GET_HASH_KEY("U_M_M_BHT_BANDITOSHACK"):
		case GET_HASH_KEY("U_M_M_BHT_BANDITOMINE"):
		case GET_HASH_KEY("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case GET_HASH_KEY("U_M_M_NBXBRONTEGOON_01"):
		case GET_HASH_KEY("U_M_M_NBXBRONTESECFORM_01"):
		case GET_HASH_KEY("U_M_M_NBXBRONTEASC_01"):
		case GET_HASH_KEY("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_403(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_404(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_547(iParam1, 128);
	if (func_548("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_549(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_236(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_547(iParam1, 512) && func_526(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || func_550(Var4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_547(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_547(iParam1, 4))) && (!func_550(Var4.f_4) || func_547(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(Var4.f_4) || !func_547(iParam1, 8388608))) && (!WEAPON::IS_WEAPON_RIFLE(Var4.f_4) || !func_547(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_551(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_547(iParam1, 512) && !func_547(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_404(uParam0, iParam1, iParam2);
	}
	else if (func_547(iParam1, 256))
	{
		iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_405(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_552(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_553(1, bVar1, 1, sVar2);
		func_554(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_330(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_555();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_330(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_330(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

char* func_406(int iParam0)
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
			Jump @2949; //curOff = 1607
			return "Kieran";
			Jump @2949; //curOff = 1617
			return "LeoStrauss";
			Jump @2949; //curOff = 1627
			return "LondonderrySon";
			Jump @2949; //curOff = 1637
			return "MaryBeth";
			Jump @2949; //curOff = 1647
			return "MaryLinton";
			Jump @2949; //curOff = 1657
			return "MicahBell";
			Jump @2949; //curOff = 1667
			return "MollyOshea";
			Jump @2949; //curOff = 1677
			return "CS_MrLinton";
			Jump @2949; //curOff = 1687
			return "MrPearson";
			Jump @2949; //curOff = 1697
			return "MrsLondonderry";
			Jump @2949; //curOff = 1707
			return "Mud2BigGuy";
			Jump @2949; //curOff = 1717
			return "ProfessorBell";
			Jump @2949; //curOff = 1727
			return "RevSwanson";
			Jump @2949; //curOff = 1736
			return "CS_Samaritan";
			Jump @2949; //curOff = 1746
			return "StrDeputy_01";
			Jump @2949; //curOff = 1756
			return "StrDeputy_02";
			Jump @2949; //curOff = 1766
			return "StrSheriff_01";
			Jump @2949; //curOff = 1776
			return "SusanGrimshaw";
			Jump @2949; //curOff = 1786
			return "TavishGray";
			Jump @2949; //curOff = 1796
			return "TheodoreLevin";
			Jump @2949; //curOff = 1806
			return "ThomasDown";
			Jump @2949; //curOff = 1816
			return "Tilly";
			Jump @2949; //curOff = 1826
			return "Uncle";
			Jump @2949; //curOff = 1836
			return "G_M_M_UniCriminals_01";
			Jump @2949; //curOff = 1846
			return "G_M_M_UNIDUSTER_01";
			Jump @2949; //curOff = 1856
			return "CS_VALSHERIFF";
			Jump @2949; //curOff = 1866
			return "S_M_M_MARSHALLSRURAL_01";
			Jump @2949; //curOff = 1876
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
			Jump @2949; //curOff = 1886
			return "Sean";
			Jump @2949; //curOff = 1896
			return "Lenny";
			Jump @2949; //curOff = 1906
			return "Hercule";
			Jump @2949; //curOff = 1916
			return "CreoleCaptain";
			Jump @2949; //curOff = 1926
			return "U_M_M_CREOLECAPTAIN_01";
			Jump @2949; //curOff = 1936
			return "RingMaster";
			Jump @2949; //curOff = 1946
			return "U_M_M_VALBARTENDER_01";
			Jump @2949; //curOff = 1956
			return "A_M_M_EMRFARMHAND_01";
			Jump @2949; //curOff = 1966
			return "A_M_M_GriSurvivalist_01";
			Jump @2949; //curOff = 1976
			return "LillyMillet";
			Jump @2949; //curOff = 1986
			return "A_F_M_STRTOWNFOLK_01";
			Jump @2949; //curOff = 1996
			return "A_M_M_STRTOWNFOLK_01";
			Jump @2949; //curOff = 2006
			return "S_M_M_STRLUMBERJACK_01";
			Jump @2949; //curOff = 2016
			return "G_M_M_UniCriminals_02";
			Jump @2949; //curOff = 2026
			return "G_M_M_UNICORNWALLGOONS_01";
			Jump @2949; //curOff = 2036
			return "A_M_M_NBXUPPERCLASS_01";
			Jump @2949; //curOff = 2046
			return "A_F_M_NBXUPPERCLASS_01";
			Jump @2949; //curOff = 2056
			return "A_M_M_VALFARMER_01";
			Jump @2949; //curOff = 2066
			return "A_M_M_VALTOWNFOLK_01";
			Jump @2949; //curOff = 2076
			return "A_M_M_VALTOWNFOLK_02";
			Jump @2949; //curOff = 2086
			return "A_F_M_VALTOWNFOLK_01";
			Jump @2949; //curOff = 2096
			return "U_M_M_NBXBARTENDER_01";
			Jump @2949; //curOff = 2106
			return "NBXExecuted";
			Jump @2949; //curOff = 2116
			return "RHODEPUTY_01";
			Jump @2949; //curOff = 2126
			return "RHDSHERIFF_01";
			Jump @2949; //curOff = 2136
			return "LeighGray";
			Jump @2949; //curOff = 2146
			return "Horse_01";
			Jump @2949; //curOff = 2156
			return "U_M_M_StrGenStoreOwner_01";
			Jump @2949; //curOff = 2166
			return "TomDickens";
			Jump @2949; //curOff = 2176
			return "DavidGeddes";
			Jump @2949; //curOff = 2186
			return "ANSEL_ATHERTON";
			Jump @2949; //curOff = 2196
			return "CS_Wrobel";
			Jump @2949; //curOff = 2206
			return "COW";
			Jump @2949; //curOff = 2216
			return "BULL";
			Jump @2949; //curOff = 2226
			return "ALBERTCAKEESQUIRE";
			Jump @2949; //curOff = 2236
			return "U_M_O_BLWGENERALSTOREOWNER_01";
			Jump @2949; //curOff = 2246
			return "A_C_DOGCATAHOULACUR_01";
			Jump @2949; //curOff = 2256
			return "A_C_DOGRUFUS_01";
			Jump @2949; //curOff = 2266
			return "A_C_DOGLION_01";
			Jump @2949; //curOff = 2276
			return "Handler";
			Jump @2949; //curOff = 2286
			return "VALAUCTIONBOSS_01";
			Jump @2949; //curOff = 2296
			return "NbxReceptionist_01";
			Jump @2949; //curOff = 2306
			return "U_M_M_BiVForeman_01";
			Jump @2949; //curOff = 2316
			return "U_M_M_RACFOREMAN_01";
			Jump @2949; //curOff = 2326
			return "CHAINPRISONER_01";
			Jump @2949; //curOff = 2336
			return "CHAINPRISONER_02";
			Jump @2949; //curOff = 2346
			return "U_M_M_ValPokerPlayer_01";
			Jump @2949; //curOff = 2356
			return "U_M_M_ValPokerPlayer_02";
			Jump @2949; //curOff = 2366
			return "DUNCANGEDDES";
			Jump @2949; //curOff = 2376
			return "ANGUSGEDDES";
			Jump @2949; //curOff = 2386
			return "EvelynMiller";
			Jump @2949; //curOff = 2396
			return "SISTERCALDERON";
			Jump @2949; //curOff = 2406
			return "EDGARROSS";
			Jump @2949; //curOff = 2416
			return "U_M_M_GriSurvivalist_01";
			Jump @2949; //curOff = 2426
			return "U_F_M_RKSHOMESTEADTENANT_01";
			Jump @2949; //curOff = 2436
			return "U_F_M_RKSHOMESTEADTENANT_01";
			Jump @2949; //curOff = 2446
			return "U_M_M_BHT_STRAWBERRYDUEL";
			Jump @2949; //curOff = 2456
			return "StationWorker";
			Jump @2949; //curOff = 2466
			return "LEVISIMON";
			Jump @2949; //curOff = 2476
			return "S_M_M_GULFUSSARS_01";
			Jump @2949; //curOff = 2486
			return "A_C_DONKEY_01";
			Jump @2949; //curOff = 2496
			return "S_M_M_ISPWORKER_01";
			Jump @2949; //curOff = 2506
			return "S_M_M_ISPWORKER_02";
			Jump @2949; //curOff = 2516
			return "U_M_O_ValBartender_01";
			Jump @2949; //curOff = 2526
			return "U_M_M_NBXBARTENDER_02";
			Jump @2949; //curOff = 2536
			return "CS_UNIDUSTERJAIL_01";
			Jump @2949; //curOff = 2546
			return "A_M_M_RHDTOWNFOLK_01";
			Jump @2949; //curOff = 2556
			return "U_M_M_UNIBOUNTYHUNTER_01";
			Jump @2949; //curOff = 2566
			return "U_M_M_UNIBOUNTYHUNTER_02";
			Jump @2949; //curOff = 2576
			return "BrotherDorkins";
			Jump @2949; //curOff = 2586
			return "G_M_M_UniBraithwaites_01";
			Jump @2949; //curOff = 2596
			return "A_M_M_GAMHIGHSOCIETY_01";
			Jump @2949; //curOff = 2606
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
			Jump @2949; //curOff = 2616
			return "EagleFlies";
			Jump @2949; //curOff = 2626
			return "CS_RAINSFALL";
			Jump @2949; //curOff = 2636
			return "A_M_M_WapWarriors_01";
			Jump @2949; //curOff = 2646
			return "A_M_Y_NBXSTREETKIDS_01";
			Jump @2949; //curOff = 2656
			return "U_M_M_BHT_SHACKESCAPE";
			Jump @2949; //curOff = 2666
			return "A_M_M_HTLROUGHTRAVELLERS_01";
			Jump @2949; //curOff = 2676
			return "LemiuxAssistant";
			Jump @2949; //curOff = 2686
			return "p_keys01x";
			Jump @2949; //curOff = 2696
			return "CS_BALLOONOPERATOR";
			Jump @2949; //curOff = 2706
			return "Worker1";
			Jump @2949; //curOff = 2716
			return "U_M_M_BHT_MINEFOREMAN";
			Jump @2949; //curOff = 2726
			return "A_M_M_NbxSlums_01";
			Jump @2949; //curOff = 2736
			return "U_M_M_NBXPRIEST_01";
			Jump @2949; //curOff = 2746
			return "A_C_BEAR_01";
			Jump @2949; //curOff = 2756
			return "MARSHALL_THURWELL";
			Jump @2949; //curOff = 2766
			return "CS_FAMOUSGUNSLINGER_02";
			Jump @2949; //curOff = 2776
			return "cs_sd_streetkid_01";
			Jump @2949; //curOff = 2786
			return "cs_sd_streetkid_02";
			Jump @2949; //curOff = 2796
			return "ObediahHinton";
			Jump @2949; //curOff = 2806
			return "PoisonWellShaman";
			Jump @2949; //curOff = 2816
			return "A_M_M_EMRFARMHAND_01";
			Jump @2949; //curOff = 2826
			return "u_m_m_bht_benedictallbright";
			Jump @2949; //curOff = 2836
			return "Jules";
			Jump @2949; //curOff = 2846
			return "MRDEVON";
			Jump @2949; //curOff = 2856
			return "MRWAYNE";
			Jump @2949; //curOff = 2866
			return "PAYTAH";
			Jump @2949; //curOff = 2876
			return "CS_VALDEPUTY_01";
			Jump @2949; //curOff = 2886
			return "MES_SADIE5_MALES_01^1";
			Jump @2949; //curOff = 2896
			return "A_M_M_NBXDOCKWORKERS_01";
			Jump @2949; //curOff = 2906
			return "U_M_M_VALSHERIFF_01";
			Jump @2949; //curOff = 2916
			return "S_M_M_BANKCLERK_01";
			Jump @2949; //curOff = 2926
			return "U_M_M_NBXBRONTEASC_01";
			Jump @2949; //curOff = 2936
			return "P_C_HORSE_01";
			return "";
		}

bool func_407(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_408(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

void func_409(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_156, sParam1, iParam2, iParam3);
}

int func_410(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_556(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_411(int iParam0)
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

bool func_412(int iParam0)
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

bool func_413()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_414(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_417(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_216(iParam1, Var0, GET_HASH_KEY("SLOTID_HORSE_MANE"), 0) };
	return func_557(Var29, 1);
}

bool func_415(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_417(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_216(iParam1, Var0, GET_HASH_KEY("SLOTID_HORSE_TAIL"), 0) };
	return func_557(Var29, 1);
}

void func_416(var uParam0)
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

bool func_417(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_558(iParam0))
	{
		return false;
	}
	iVar0 = func_418(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_371(0) };
	if (!func_559(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_560(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_419(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_544(bParam10))
	{
		return func_561(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_562(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_218(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_557(Var14, 1))
		{
		}
	}
	return true;
}

bool func_420(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_544(bParam9))
	{
		return func_563(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	if (func_562(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_380(Param0, &Var0, bParam9, 1) || !func_380(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_562(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_218(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_421(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (func_564(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_422(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_423(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_423(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_424(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_425(int iParam0)
{
	bool bVar0;
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
	bVar0 = func_140(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bVar0))
	{
		return;
	}
	if (func_293(iParam0, 64))
	{
		func_279(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(bVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_329(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (bVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, bVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, GET_HASH_KEY("BLIP_SADDLE"), true);
				func_565(&(Global_1900383[iParam0 /*45*/].f_27));
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
		if (Global_1935630.f_40 == bVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_279(iParam0);
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
		if (func_566(1) < 1)
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
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, bVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_567(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_293(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = func_568(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == bVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(bVar0, true, false) };
	fVar15 = func_569(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_570(iParam0))
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
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(bVar0, true);
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
		func_571(Global_1900383[iParam0 /*45*/].f_26);
		func_572(Global_1900383[iParam0 /*45*/].f_26);
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
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == bVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_462(bVar0) && !bVar9)
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
	iVar21 = func_566(iParam0);
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
		MAP::_0x44813684F72B563C(bVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(bVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(bVar0, iVar22);
	}
}

int func_426()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_427()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_428()
{
	return 1;
}

int func_429()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_430()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_431()
{
	return 1;
}

bool func_432()
{
	if (func_175() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_433()
{
	return GET_HASH_KEY("BREED_JOHN_ENDLESSSUMMER");
}

int func_434()
{
	return GET_HASH_KEY("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_435()
{
	return 2;
}

int func_436()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_437()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_438()
{
	return 1;
}

int func_439()
{
	return GET_HASH_KEY("BREED_MORGAN_BAY");
}

int func_440()
{
	return GET_HASH_KEY("A_C_HORSE_MORGAN_BAY");
}

int func_441()
{
	return 1;
}

int func_442()
{
	return GET_HASH_KEY("BREED_KENTUCKYSADDLE_GREY");
}

int func_443()
{
	return GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_444()
{
	return 1;
}

void func_445(int iParam0)
{
	if (func_573() < iParam0)
	{
		func_574(iParam0);
	}
}

int func_446(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_575(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_447(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_378(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_576(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_448()
{
	struct<4> Var0;

	Var0 = { func_371(0) };
	return func_216(856287005, Var0, -218846335, 0);
}

void func_449(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(bParam0, iVar0, false, false, false);
}

int func_450(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_73(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_135(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_577(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_135(Global_1347702[63 /*49*/].f_15, 1) || func_452(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_577(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_135(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_35(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_577(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_135(Global_1347702[134 /*49*/].f_15, 1) || func_452(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_135(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_577(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_578(GET_HASH_KEY("CSTAG_FLOW_MAR8_POST"), 1) && !func_135(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_33(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_307(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_451(int iParam0)
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
		iVar0 = func_410(iParam0);
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

bool func_452(int iParam0)
{
	int iVar0;

	iVar0 = func_262(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_453(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_454(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_13(iParam0) || func_43(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == GET_HASH_KEY("SLEEP");
}

struct<7> func_455(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_456(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	bVar0 = func_33(iParam0);
	func_579(bVar0);
	func_27(iParam0, 60, 1);
	if (bParam1)
	{
		func_580(iParam0);
	}
}

void func_457(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	bVar0 = func_33(iParam0);
	func_581(bVar0);
	func_40(iParam0, 60, 1);
	if (bParam1)
	{
		func_582(iParam0);
	}
}

void func_458(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	bVar0 = func_33(iParam0);
	func_583(bVar0);
	if (iParam0 == 14)
	{
		func_584(bVar0);
	}
	func_27(iParam0, 61, 1);
	if (bParam1)
	{
		func_585(iParam0);
	}
}

void func_459(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	bVar0 = func_33(iParam0);
	func_586(bVar0);
	func_40(iParam0, 61, 1);
	if (bParam1)
	{
		func_587(iParam0);
	}
}

bool func_460(var uParam0)
{
	return uParam0;
}

bool func_461(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_462(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(bParam0, GET_HASH_KEY("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_463(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_73(iParam0))
	{
		return false;
	}
	func_588(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_464(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_465(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return GET_HASH_KEY("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return GET_HASH_KEY("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return GET_HASH_KEY("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return GET_HASH_KEY("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return GET_HASH_KEY("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return GET_HASH_KEY("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_589(296923297, iParam1);
			return func_590(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_589(1237718549, iParam1);
			return func_590(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return GET_HASH_KEY("META_OUTFIT_DEFAULT");
	}
	return GET_HASH_KEY("META_OUTFIT_DEFAULT");
}

bool func_466(int iParam0, int iParam1)
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

bool func_467(int iParam0, int iParam1)
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

bool func_468(int iParam0, int iParam1)
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
	if (!func_466(iParam0, iVar0))
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

void func_469(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_470(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, GET_HASH_KEY("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, GET_HASH_KEY("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_466(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_466(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_466(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_466(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_466(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_466(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_466(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_466(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_466(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_466(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_466(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_466(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_466(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_466(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_466(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_466(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_466(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_466(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_466(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_466(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_466(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_466(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_466(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_466(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_466(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_466(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_471(int iParam0)
{
	func_591(iParam0, 1);
	func_591(iParam0, 128);
	func_591(iParam0, 256);
	func_591(iParam0, 512);
	func_591(iParam0, 1024);
	func_591(iParam0, 2048);
	func_591(iParam0, 4096);
	func_591(iParam0, 65536);
	func_591(iParam0, 16384);
	func_591(iParam0, 262144);
	func_591(iParam0, 524288);
	func_591(iParam0, 1048576);
	func_591(iParam0, 2097152);
	func_591(iParam0, 32768);
	func_591(iParam0, 131072);
	func_591(iParam0, 134217728);
	func_591(iParam0, 1073741824 /* Float: 2f */);
}

void func_472(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

char* func_473(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case GET_HASH_KEY("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case GET_HASH_KEY("P_DOOR01X"):
			return "P_DOOR01X";
		case GET_HASH_KEY("P_DOOR03X"):
			return "P_DOOR03X";
		case GET_HASH_KEY("P_DOOR12X"):
			return "p_door12x";
		case GET_HASH_KEY("P_DOOR13X"):
			return "P_DOOR13X";
		case GET_HASH_KEY("P_DOOR45X"):
			return "p_door45x";
		case GET_HASH_KEY("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case GET_HASH_KEY("P_CRATE03X"):
			return "p_crate03x";
		case GET_HASH_KEY("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case GET_HASH_KEY("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case GET_HASH_KEY("P_DOOR37X"):
			return "P_DOOR37X";
		case GET_HASH_KEY("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case GET_HASH_KEY("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case GET_HASH_KEY("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case GET_HASH_KEY("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case GET_HASH_KEY("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case GET_HASH_KEY("P_DOORNBD39X"):
			return "p_doornbd39x";
		case GET_HASH_KEY("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case GET_HASH_KEY("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case GET_HASH_KEY("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case GET_HASH_KEY("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case GET_HASH_KEY("P_PEBBLE01X"):
			return "p_pebble01x";
		case GET_HASH_KEY("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case GET_HASH_KEY("P_CARDS01X"):
			return "P_CARDS01X";
		case GET_HASH_KEY("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case GET_HASH_KEY("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case GET_HASH_KEY("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case GET_HASH_KEY("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case GET_HASH_KEY("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case GET_HASH_KEY("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case GET_HASH_KEY("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case GET_HASH_KEY("P_RAG02X"):
			return "p_rag02x";
		case GET_HASH_KEY("P_MAGNETO02X"):
			return "p_magneto02x";
		case GET_HASH_KEY("P_MAGNETO01X"):
			return "p_magneto01x";
		case GET_HASH_KEY("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case GET_HASH_KEY("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case GET_HASH_KEY("P_PEN01X"):
			return "p_pen01x";
		case GET_HASH_KEY("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case GET_HASH_KEY("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case GET_HASH_KEY("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case GET_HASH_KEY("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case GET_HASH_KEY("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case GET_HASH_KEY("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case GET_HASH_KEY("P_STOOL01X"):
			return "p_stool01x";
		case GET_HASH_KEY("P_STOOL02X"):
			return "p_stool02x";
		case GET_HASH_KEY("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case GET_HASH_KEY("P_CHAIR02X"):
			return "p_chair02x";
		case GET_HASH_KEY("P_CHAIR04X"):
			return "p_chair04x";
		case GET_HASH_KEY("P_CRATE15X"):
			return "p_crate15x";
		case GET_HASH_KEY("P_CLEAVER01X"):
			return "p_cleaver01x";
		case GET_HASH_KEY("P_BOTTLE003X"):
			return "p_bottle003x";
		case GET_HASH_KEY("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case GET_HASH_KEY("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case GET_HASH_KEY("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case GET_HASH_KEY("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case GET_HASH_KEY("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case GET_HASH_KEY("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case GET_HASH_KEY("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case GET_HASH_KEY("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case GET_HASH_KEY("P_MATCHES01X"):
			return "P_MATCHES01X";
		case GET_HASH_KEY("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case GET_HASH_KEY("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case GET_HASH_KEY("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case GET_HASH_KEY("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case GET_HASH_KEY("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case GET_HASH_KEY("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case GET_HASH_KEY("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case GET_HASH_KEY("P_BOTTLE03X"):
			return "p_bottle03x";
		case GET_HASH_KEY("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case GET_HASH_KEY("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case GET_HASH_KEY("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case GET_HASH_KEY("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case GET_HASH_KEY("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case GET_HASH_KEY("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case GET_HASH_KEY("P_LAMP18X"):
			return "p_lamp18x";
		case GET_HASH_KEY("P_CLOCK06X"):
			return "p_clock06x";
		case GET_HASH_KEY("P_BOTTLE02X"):
			return "p_bottle02x";
		case GET_HASH_KEY("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case GET_HASH_KEY("P_WINEBOX01X"):
			return "p_wineBox01x";
		case GET_HASH_KEY("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case GET_HASH_KEY("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case GET_HASH_KEY("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case GET_HASH_KEY("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case GET_HASH_KEY("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case GET_HASH_KEY("P_PLATE01X"):
			return "P_PLATE01X";
		case GET_HASH_KEY("P_KNIFE01X"):
			return "P_KNIFE01X";
		case GET_HASH_KEY("P_KNIFE02X"):
			return "P_KNIFE02X";
		case GET_HASH_KEY("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case GET_HASH_KEY("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case GET_HASH_KEY("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case GET_HASH_KEY("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case GET_HASH_KEY("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case GET_HASH_KEY("P_FORK01X"):
			return "P_FORK01X";
		case GET_HASH_KEY("P_KNIFE04X"):
			return "P_KNIFE04X";
		case GET_HASH_KEY("P_KNIFE03X"):
			return "p_knife03x";
		case GET_HASH_KEY("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case GET_HASH_KEY("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case GET_HASH_KEY("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case GET_HASH_KEY("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case GET_HASH_KEY("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case GET_HASH_KEY("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case GET_HASH_KEY("P_BROOM02X"):
			return "p_broom02x";
		case GET_HASH_KEY("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case GET_HASH_KEY("P_CHAIR07X"):
			return "P_CHAIR07X";
		case GET_HASH_KEY("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case GET_HASH_KEY("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case GET_HASH_KEY("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case GET_HASH_KEY("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case GET_HASH_KEY("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case GET_HASH_KEY("P_DOOR04X"):
			return "p_door04x";
		case GET_HASH_KEY("P_DOOR11X"):
			return "p_door11x";
		case GET_HASH_KEY("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case GET_HASH_KEY("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case GET_HASH_KEY("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case GET_HASH_KEY("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case GET_HASH_KEY("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case GET_HASH_KEY("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case GET_HASH_KEY("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case GET_HASH_KEY("P_CHAIR19X"):
			return "P_CHAIR19X";
		case GET_HASH_KEY("P_CHAIR20X"):
			return "P_CHAIR20X";
		case GET_HASH_KEY("P_CHAIR05X"):
			return "P_CHAIR05X";
		case GET_HASH_KEY("P_CHAIR22X"):
			return "p_chair22x";
		case GET_HASH_KEY("P_GLASS01X"):
			return "p_glass01x";
		case GET_HASH_KEY("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case GET_HASH_KEY("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case GET_HASH_KEY("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case GET_HASH_KEY("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case GET_HASH_KEY("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case GET_HASH_KEY("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case GET_HASH_KEY("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case GET_HASH_KEY("P_AXE01X"):
			return "P_AXE01X";
		case GET_HASH_KEY("P_HOE01X"):
			return "P_HOE01X";
		case GET_HASH_KEY("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case GET_HASH_KEY("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case GET_HASH_KEY("P_BROOM01X"):
			return "P_BROOM01X";
		case GET_HASH_KEY("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case GET_HASH_KEY("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case GET_HASH_KEY("P_SKIFF02X"):
			return "P_SKIFF02x";
		case GET_HASH_KEY("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case GET_HASH_KEY("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case GET_HASH_KEY("P_CS_CAMERA"):
			return "p_cs_camera";
		case GET_HASH_KEY("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case GET_HASH_KEY("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case GET_HASH_KEY("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case GET_HASH_KEY("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case GET_HASH_KEY("ROWBOATSWAMP"):
			return "rowboatswamp";
		case GET_HASH_KEY("P_CHAIR25X"):
			return "P_CHAIR25X";
		case GET_HASH_KEY("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case GET_HASH_KEY("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case GET_HASH_KEY("P_HAMMER03X"):
			return "p_hammer03x";
		case GET_HASH_KEY("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case GET_HASH_KEY("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case GET_HASH_KEY("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case GET_HASH_KEY("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case GET_HASH_KEY("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case GET_HASH_KEY("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case GET_HASH_KEY("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case GET_HASH_KEY("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case GET_HASH_KEY("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case GET_HASH_KEY("P_BOILER01X"):
			return "p_boiler01x";
		case GET_HASH_KEY("P_BOILER02X"):
			return "p_boiler02x";
		case GET_HASH_KEY("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case GET_HASH_KEY("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case GET_HASH_KEY("P_PITCHER02X"):
			return "p_pitcher02x";
		case GET_HASH_KEY("P_TRAY03X"):
			return "p_tray03x";
		case GET_HASH_KEY("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case GET_HASH_KEY("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case GET_HASH_KEY("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case GET_HASH_KEY("P_LADLE02X"):
			return "P_LADLE02X";
		case GET_HASH_KEY("P_CS_POT01X"):
			return "P_CS_POT01X";
		case GET_HASH_KEY("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case GET_HASH_KEY("P_SPOON01X"):
			return "P_SPOON01X";
		case GET_HASH_KEY("P_BOWL03X"):
			return "P_BOWL03X";
		case GET_HASH_KEY("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case GET_HASH_KEY("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case GET_HASH_KEY("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case GET_HASH_KEY("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case GET_HASH_KEY("P_OAR03X"):
			return "P_OAR03X";
		case GET_HASH_KEY("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case GET_HASH_KEY("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case GET_HASH_KEY("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case GET_HASH_KEY("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case GET_HASH_KEY("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case GET_HASH_KEY("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case GET_HASH_KEY("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case GET_HASH_KEY("P_CS_LOG01X"):
			return "p_cs_log01x";
		case GET_HASH_KEY("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case GET_HASH_KEY("P_GLASS06X"):
			return "p_glass06x";
		case GET_HASH_KEY("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case GET_HASH_KEY("P_INKWELL01X"):
			return "p_inkwell01x";
		case GET_HASH_KEY("P_CIGAR02X"):
			return "p_cigar02x";
		case GET_HASH_KEY("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case GET_HASH_KEY("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case GET_HASH_KEY("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case GET_HASH_KEY("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case GET_HASH_KEY("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case GET_HASH_KEY("P_BELL05X"):
			return "p_bell05x";
		case GET_HASH_KEY("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case GET_HASH_KEY("P_CHAIR06X"):
			return "p_chair06x";
		case GET_HASH_KEY("P_JUG01X"):
			return "p_jug01x";
		case GET_HASH_KEY("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case GET_HASH_KEY("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case GET_HASH_KEY("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case GET_HASH_KEY("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case GET_HASH_KEY("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case GET_HASH_KEY("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case GET_HASH_KEY("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case GET_HASH_KEY("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case GET_HASH_KEY("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case GET_HASH_KEY("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case GET_HASH_KEY("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case GET_HASH_KEY("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case GET_HASH_KEY("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case GET_HASH_KEY("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case GET_HASH_KEY("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case GET_HASH_KEY("P_STICK02X"):
			return "P_STICK02X";
		case GET_HASH_KEY("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case GET_HASH_KEY("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case GET_HASH_KEY("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case GET_HASH_KEY("P_CAN10X"):
			return "p_can10x";
		case GET_HASH_KEY("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case GET_HASH_KEY("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case GET_HASH_KEY("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case GET_HASH_KEY("P_KETTLE03X"):
			return "p_kettle03x";
		case GET_HASH_KEY("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case GET_HASH_KEY("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case GET_HASH_KEY("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case GET_HASH_KEY("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case GET_HASH_KEY("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case GET_HASH_KEY("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case GET_HASH_KEY("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case GET_HASH_KEY("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case GET_HASH_KEY("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case GET_HASH_KEY("P_CAN05X"):
			return "p_can05x";
		case GET_HASH_KEY("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case GET_HASH_KEY("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case GET_HASH_KEY("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case GET_HASH_KEY("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case GET_HASH_KEY("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case GET_HASH_KEY("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case GET_HASH_KEY("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case GET_HASH_KEY("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case GET_HASH_KEY("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case GET_HASH_KEY("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case GET_HASH_KEY("P_TABLE42_CS"):
			return "p_table42_cs";
		case GET_HASH_KEY("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case GET_HASH_KEY("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case GET_HASH_KEY("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case GET_HASH_KEY("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case GET_HASH_KEY("P_SPITTOON01X"):
			return "p_spittoon01x";
		case GET_HASH_KEY("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case GET_HASH_KEY("P_PENCIL01X"):
			return "p_pencil01x";
		case GET_HASH_KEY("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case GET_HASH_KEY("P_PAN01X"):
			return "P_PAN01X";
		case GET_HASH_KEY("P_PIPE01X"):
			return "P_Pipe01x";
		case GET_HASH_KEY("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case GET_HASH_KEY("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case GET_HASH_KEY("P_TREESTUMP02X"):
			return "p_treestump02x";
		case GET_HASH_KEY("P_PLATE17X"):
			return "p_plate17x";
		case GET_HASH_KEY("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case GET_HASH_KEY("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case GET_HASH_KEY("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case GET_HASH_KEY("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case GET_HASH_KEY("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
		case GET_HASH_KEY("P_CS_BOOKHARDCV08X"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

void func_474(int iParam0)
{
	bool bVar0;

	bVar0 = func_475(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;
	if (bVar0 && !func_475(iParam0))
	{
		func_327(490, 1);
		func_592(iParam0, 0);
	}
}

bool func_475(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_476(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_327(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && func_135(Global_1835011[4 /*74*/].f_1, 1))
	{
		func_327(493, 0);
	}
}

void func_477(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_593(iParam0))
	{
		return;
	}
	if (!func_594(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && func_475(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_321();
		func_595(iParam0, &iVar0, &iVar1, bVar2);
		func_596(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_478(int iParam0)
{
	bool bVar0;

	bVar0 = func_475(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = (Global_40.f_7731[iParam0 /*5*/].f_4 - 1);
	if (bVar0 && !func_475(iParam0))
	{
		func_327(490, 1);
		func_592(iParam0, 0);
	}
}

void func_479()
{
	int iVar0;

	iVar0 = func_321();
	func_596(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_316(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	if (func_316(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	if (func_316(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
}

void func_480()
{
	bool bVar0;

	bVar0 = func_482();
	Global_40.f_7748.f_6 = 0;
	if (bVar0 && !func_482())
	{
		func_597(14);
	}
}

void func_481(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_598(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_321();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_482());
		func_599(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_596(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

bool func_482()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_483()
{
	bool bVar0;

	bVar0 = func_482();
	Global_40.f_7748.f_6 = (Global_40.f_7748.f_6 - 1);
	if (bVar0 && !func_482())
	{
		func_597(14);
	}
}

void func_484()
{
	int iVar0;

	if (func_600() >= 7)
	{
		iVar0 = func_321();
		func_596(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
}

int func_485()
{
	if (func_601())
	{
		return 1;
	}
	return 0;
}

void func_486(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_485();
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

void func_487(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_336(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_602(iParam1), fParam2, -1);
	}
}

void func_488(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_485();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_603(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_604(iParam0, iVar0, iParam3);
	}
}

int func_489(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_605(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_490(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_491(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_492(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_493(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_494(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_495(int iParam0, int iParam1)
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

void func_496(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_606(iParam0, iParam6);
	func_607(iParam0, iParam5);
	func_608(iParam0, iParam4);
	func_609(iParam0, iParam3);
	func_610(iParam0, iParam2);
	func_611(iParam0, iParam1);
}

bool func_497(int iParam0)
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
	iVar0 = func_494(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_493(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_492(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_489(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_490(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_491(iParam0);
	if (iVar5 < 1 || iVar5 > func_495(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_498(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_499(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_612(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_613(iParam0))
	{
		return false;
	}
	if (func_614(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_615(iParam0, 1)) || func_616(32768))
	{
		if (!func_615(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_617())
	{
		return false;
	}
	return true;
}

void func_500(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_501(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_502(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_503(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_552(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_552(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_504(int iParam0)
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

void func_505(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_504(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_618(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_619(iVar0);
	*uParam0 = 0;
}

bool func_506(int iParam0)
{
	return iParam0 != 0;
}

bool func_507(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_508(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_507(iVar0, 2))
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
		func_620(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_509(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_504(iParam0))
	{
		return;
	}
	iVar0 = func_618(iParam0);
	func_621(iVar0, bParam1);
}

void func_510(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_504(iParam0))
	{
		return;
	}
	iVar0 = func_618(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

void func_511(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_504(iParam0))
	{
		return;
	}
	iVar0 = func_618(iParam0);
	if (bParam1)
	{
		func_622(iParam0, 4);
		func_621(iVar0, 1);
		func_623(iVar0, 1);
	}
	else
	{
		func_624(iParam0, 4);
		func_623(iVar0, 0);
	}
}

float func_512(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_504(iParam0))
	{
		return 0f;
	}
	iVar0 = func_618(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_513(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_504(iParam0))
	{
		return false;
	}
	iVar0 = func_618(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_514(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_126(uParam0) };
	Var8 = { func_132(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_515(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_516(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_625(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_517(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_126(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, sParam1);
	}
}

bool func_518(int iParam0)
{
	if (-1829635046 == func_626(81053684))
	{
		if (func_627(iParam0))
		{
			return true;
		}
	}
	else if (func_628(-525676072, iParam0))
	{
		if (func_627(iParam0))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_519(var uParam0)
{
	return uParam0->f_217;
}

float func_520(var uParam0)
{
	return uParam0->f_220;
}

float func_521(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_522(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_523(var uParam0)
{
	struct<8> Var0;

	uParam0->f_166 = { Var0 };
}

void func_524(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_174[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

struct<4> func_525()
{
	struct<4> Var0;

	return Var0;
}

bool func_526(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_218(0);
	*uParam1 = { func_216(iParam0, func_373(0), iParam3, 0) };
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

void func_527(var uParam0, int iParam1)
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
			if ((func_629(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_629(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_630(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_528(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_631(uParam0, 1))
	{
		func_632(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_529(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_208(iParam0, 1) /*3*/] != Global_1946804.f_57[func_208(iParam0, 1) /*11*/];
}

void func_530(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_386(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_386(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == GET_HASH_KEY("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = GET_HASH_KEY("BASE");
		if (bParam3)
		{
			func_386(iVar2, iVar0);
		}
	}
}

bool func_531(int iParam0)
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

int func_532(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_633();
	}
	iVar0 = 0;
	if (iParam0 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_533(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_534(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = GET_HASH_KEY("BASE");
	return true;
}

int func_535(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_208(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_212(524288))
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

int func_536(var uParam0)
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

void func_537(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_175() == -1)
	{
		func_634(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_635(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_538(int iParam0, int iParam1)
{
	if (func_175() == -1)
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

int func_539(int iParam0)
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
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return GET_HASH_KEY("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return GET_HASH_KEY("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

void func_540(int iParam0, bool bParam1, int iParam2)
{
	func_636(&(Global_1946804.f_1378), iParam0);
	func_637(2, iParam0, 6);
	if (bParam1)
	{
		func_541(0, 1);
	}
}

void func_541(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_638(0);
	}
	if (bParam0)
	{
		func_219(8);
		func_219(512);
	}
	else
	{
		func_219(8);
		func_219(16);
	}
}

int func_542(int iParam0, int iParam1)
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

bool func_543(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_639(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(*uParam1, &Var0, bParam6, 0))
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
	if (!func_544(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_218(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_544(bool bParam0)
{
	if (func_175() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_218(bParam0));
}

int func_545(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_640(iParam0))
	{
		return 0;
	}
	if (!func_544(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_546(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_641(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_547(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_548(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_218(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_549(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_550(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_551(int iParam0)
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

char* func_552(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_553(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_554(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_503(0, 1, bParam0, bParam1);
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

void func_555()
{
	func_642();
	func_643();
	func_644();
}

int func_556(int iParam0)
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

bool func_557(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_544(0))
	{
		return func_645(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_218(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_558(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_418(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_371(0) };
	if (func_646(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_559(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_218(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_560(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_218(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_561(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<17> Var16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_380(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_562(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_217(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_647(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar33 = func_648(1168099063, &Var16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_562(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_563(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<17> Var28;
	struct<17> Var45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	if (func_562(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_380(Param0, &Var0, 1, 0) || !func_380(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_562(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_647(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var45 = { func_647(&Var14) };
	Var45.f_4 = { Var0.f_5 };
	Var45.f_11 = Var0.f_9;
	Var45.f_10 = (Var0.f_10 || iParam8);
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, GET_HASH_KEY("BASKET"), 1168099063))
		{
			if (func_649(iVar62, 1168099063, &Var28) && func_649(iVar62, 1168099063, &Var45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_650(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_648(1168099063, &Var28, 0);
		iVar62 = func_648(1168099063, &Var45, 0);
	}
	return iVar62;
}

bool func_564(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("A_C_HORSE_GANG_BILL"):
		case GET_HASH_KEY("A_C_HORSE_GANG_SEAN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_JOHN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_KAREN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_DUTCH"):
		case GET_HASH_KEY("A_C_HORSE_EAGLEFLIES"):
		case GET_HASH_KEY("A_C_HORSE_GANG_JAVIER"):
		case GET_HASH_KEY("A_C_HORSE_GANG_SADIE"):
		case GET_HASH_KEY("A_C_HORSE_GANG_LENNY"):
		case GET_HASH_KEY("A_C_HORSE_GANG_MICAH"):
		case GET_HASH_KEY("A_C_HORSE_GANG_HOSEA"):
		case GET_HASH_KEY("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case GET_HASH_KEY("A_C_HORSE_GANG_CHARLES"):
		case GET_HASH_KEY("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case GET_HASH_KEY("A_C_HORSE_GANG_TRELAWNEY"):
		case GET_HASH_KEY("A_C_HORSE_GANG_KIERAN"):
		case GET_HASH_KEY("A_C_HORSE_GANG_UNCLE"):
		case GET_HASH_KEY("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

void func_565(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_652(func_651(255), GET_HASH_KEY("COLOR_PURE_WHITE")));
	}
	else if (func_246())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_432();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_566(int iParam0)
{
	iParam0 = func_133(iParam0);
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

void func_567(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_652(func_651(255), GET_HASH_KEY("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_246())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_432())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_568(int iParam0)
{
	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_569(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_570(int iParam0)
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

	iParam0 = func_133(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_148(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_566(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_566(iParam0) + 1;
	fVar6 = func_653(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_654(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_571(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_572(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

int func_573()
{
	return Global_40.f_1095.f_3135;
}

void func_574(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_575(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_218(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_380(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_576(int iParam0)
{
	int iVar0;

	if (!func_395(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_378(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_577(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_578(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_655(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_579(bool bParam0)
{
	if (func_656(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_580(int iParam0)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_49(iParam0);
	func_579(bVar0);
	func_94(iParam0, 8192, 1);
}

void func_581(bool bParam0)
{
	if (func_656(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_582(int iParam0)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_49(iParam0);
	func_581(bVar0);
	func_94(iParam0, 8192, 0);
}

void func_583(bool bParam0)
{
	if (func_656(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_584(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (func_13(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(bParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 909522);
}

void func_585(int iParam0)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_49(iParam0);
	func_583(bVar0);
	func_94(iParam0, 16384, 1);
}

void func_586(bool bParam0)
{
	if (func_656(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_587(int iParam0)
{
	bool bVar0;

	if (!func_73(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_49(iParam0);
	func_586(bVar0);
	func_94(iParam0, 16384, 0);
}

int func_588(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_657(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_589(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_307(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return GET_HASH_KEY("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return GET_HASH_KEY("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return GET_HASH_KEY("META_OUTFIT_DEFAULT");
}

void func_591(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 - (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1));
}

void func_592(int iParam0, int iParam1)
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
}

bool func_593(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_594(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

void func_595(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_659(uParam1, uParam2, &uVar0, &uVar1, 0, func_658(iParam0));
	}
}

void func_596(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_489(*uParam0);
	iVar1 = func_490(*uParam0);
	iVar2 = func_491(*uParam0);
	iVar3 = func_492(*uParam0);
	iVar4 = func_493(*uParam0);
	iVar5 = func_494(*uParam0);
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
	iVar6 = func_495(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_495(iVar1, iVar0);
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
	func_496(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_597(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 - (Global_40.f_7748.f_4 && iParam0));
}

bool func_598(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

void func_599(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_659(uParam1, uParam2, &uVar0, &uVar1, 0, func_660());
	}
}

int func_600()
{
	return Global_40.f_7748.f_1;
}

bool func_601()
{
	return Global_1955569.f_866;
}

char* func_602(int iParam0)
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

void func_603(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_485();
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

void func_604(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_485();
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

int func_605(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_606(int iParam0, int iParam1)
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

void func_607(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_608(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_490(*iParam0);
	iVar1 = func_489(*iParam0);
	if (iParam1 < 1 || iParam1 > func_495(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_609(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_610(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_611(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_612(int iParam0, int iParam1)
{
	if (func_175() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_613(int iParam0)
{
	if (func_175() != -1)
	{
		if (func_615(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_615(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_614(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_615(iParam0, 65536) && !func_615(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_615(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_615(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_615(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_616(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_617()
{
	return Global_1905944.f_5694;
}

int func_618(int iParam0)
{
	return iParam0;
}

void func_619(int iParam0)
{
	if (!func_661(iParam0))
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

void func_620(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_621(iParam0, 1);
	func_623(iParam0, 1);
	func_624(iParam0, 128);
}

void func_621(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_507(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_622(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_623(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_624(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

void func_625(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { Var0 };
	Global_1934603.f_161 = (Global_1934603.f_161 - 1);
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

int func_626(int iParam0)
{
	int iVar0;

	iVar0 = func_208(func_662(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_627(int iParam0)
{
	if (func_628(81053684, iParam0))
	{
		return true;
	}
	if (func_628(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_208(func_662(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_378(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_629(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_630(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_631(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_632(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_633()
{
	return Global_1946804.f_1;
}

void func_634(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_635(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_636(var uParam0, int iParam1)
{
	int iVar0;

	if (func_175() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_634(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_635(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_637(int iParam0, int iParam1, int iParam2)
{
	if (func_175() == -1)
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

void func_638(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

bool func_639(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_640(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_641(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_642()
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

	if (func_663())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_177(2);
	}
	if (Global_1347477.f_119)
	{
		return func_177(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_664();
	fVar2 = func_665();
	fVar3 = func_666();
	fVar4 = func_667();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_668()));
	fVar7 = (func_177(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_669(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_670(3, fVar9, fVar9 > 100f);
	return func_181(fVar7, -100f, 100f);
}

float func_643()
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

	if (func_663())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_177(1);
	}
	if (Global_1347477.f_119)
	{
		return func_177(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_664();
	fVar2 = func_665();
	fVar3 = func_666();
	fVar4 = func_667();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_668()));
	fVar7 = (func_177(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_669(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_670(2, fVar9, fVar9 > 100f);
	return func_181(fVar7, -100f, 100f);
}

float func_644()
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

	if (func_663())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_177(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_671())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_672())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_177(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_664();
	fVar2 = func_665();
	fVar3 = func_666();
	fVar4 = func_667();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_668()));
	fVar7 = (func_177(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_669(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_670(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_177(0);
	}
	return func_181(fVar7, -100f, 100f);
}

int func_645(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<29> Var16;
	struct<18> Var45;
	struct<17> Var63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_380(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_372(Var1.f_4);
	if (iVar15 == GET_HASH_KEY("HORSE"))
	{
		Var16 = { func_673(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_674(GET_HASH_KEY("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == GET_HASH_KEY("CLOTHING"))
	{
		Var45 = { func_675(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_676(GET_HASH_KEY("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_647(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_648(GET_HASH_KEY("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_646(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_218(bParam2), uParam0, iParam1);
}

struct<17> func_647(var uParam0)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_648(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_649(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_650(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_650(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_650(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_649(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_650(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_677(iParam0, iParam1);
}

char* func_651(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_678(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1225639.f_21[iParam0])
	{
		return sVar0;
	}
	if (func_678(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108178[iParam0 /*37*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108178[iParam0 /*37*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1225639.f_120[iParam0]);
}

char* func_652(char* sParam0, int iParam1)
{
	if (iParam1 == GET_HASH_KEY("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_679(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_653(int iParam0)
{
	iParam0 = func_133(iParam0);
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

float func_654(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_655(int iParam0)
{
	int iVar0;
	int iVar1;

	func_680(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_656(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

int func_657(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

int func_658(int iParam0)
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 1;
}

void func_659(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_681(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = func_682(BUILTIN::TO_FLOAT(*uParam1), fVar3);
	iVar2 = func_683(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 = (*uParam0 / iParam5);
	*uParam1 = (*uParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*uParam1 = (*uParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*uParam1 = (*uParam1 * -1);
		*uParam0 = (*uParam0 * -1);
	}
}

int func_660()
{
	if (func_684(8))
	{
		return 8;
	}
	else if (func_684(4))
	{
		return 4;
	}
	else if (func_684(2))
	{
		return 2;
	}
	return 1;
}

bool func_661(int iParam0)
{
	return func_507(iParam0, 2);
}

int func_662(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_207(iVar0);
}

bool func_663()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_664()
{
	float fVar0;
	int iVar1;

	fVar0 = func_685(13);
	iVar1 = func_686(fVar0);
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

float func_665()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_666()
{
	if (func_687())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_667()
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

float func_668()
{
	return Global_1955565.f_3;
}

void func_669(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_503(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_670(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_503(iParam0, 2, 0, 0);
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

bool func_671()
{
	return func_685(12) <= -99f;
}

bool func_672()
{
	return func_685(12) >= 99f;
}

struct<29> func_673(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_218(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_647(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_674(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_688(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_650(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_650(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_650(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_675(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_218(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_647(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_676(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_689(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_650(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_650(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_650(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_677(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1224227 < 20)
	{
		Global_1224227++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224227.f_1[iVar0 /*9*/] = { Global_1224227.f_1[iVar0 + 1 /*9*/] };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Global_1224227.f_1[(Global_1224227 - 1) /*9*/] = { Var1 };
}

bool func_678(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_690(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_691())
	{
		return func_690(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_690(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_679(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_680(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_692(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_681(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_682(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_683(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

bool func_684(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

float func_685(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_686(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_687()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_688(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_689(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_690(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_691()
{
	return Global_1109400.f_245;
}

int func_692(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case GET_HASH_KEY("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case GET_HASH_KEY("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case GET_HASH_KEY("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case GET_HASH_KEY("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case GET_HASH_KEY("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case GET_HASH_KEY("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case GET_HASH_KEY("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case GET_HASH_KEY("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case GET_HASH_KEY("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case GET_HASH_KEY("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case GET_HASH_KEY("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case GET_HASH_KEY("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case GET_HASH_KEY("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case GET_HASH_KEY("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case GET_HASH_KEY("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case GET_HASH_KEY("CSTAG_BCH_BASE"):
			return 10;
		case GET_HASH_KEY("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case GET_HASH_KEY("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case GET_HASH_KEY("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case GET_HASH_KEY("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case GET_HASH_KEY("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case GET_HASH_KEY("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case GET_HASH_KEY("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case GET_HASH_KEY("CSTAG_FLOW_IND3_POST"):
			return 422;
		case GET_HASH_KEY("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case GET_HASH_KEY("CSTAG_HONOR_LOW"):
			return 338;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case GET_HASH_KEY("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case GET_HASH_KEY("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case GET_HASH_KEY("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case GET_HASH_KEY("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case GET_HASH_KEY("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case GET_HASH_KEY("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case GET_HASH_KEY("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case GET_HASH_KEY("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case GET_HASH_KEY("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case GET_HASH_KEY("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case GET_HASH_KEY("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case GET_HASH_KEY("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case GET_HASH_KEY("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case GET_HASH_KEY("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case GET_HASH_KEY("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case GET_HASH_KEY("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case GET_HASH_KEY("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case GET_HASH_KEY("CSTAG_PRG_BASE"):
			return 9;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case GET_HASH_KEY("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case GET_HASH_KEY("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case GET_HASH_KEY("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case GET_HASH_KEY("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case GET_HASH_KEY("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case GET_HASH_KEY("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case GET_HASH_KEY("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case GET_HASH_KEY("CSTAG_FLOW_RPRSN_POST"):
			return 374;
			return 172;
			return 170;
			return 186;
			return 2;
			return 86;
			return 492;
			return 149;
			return 52;
			return 439;
			return 200;
			return 243;
			return 293;
			return 3;
			return 68;
			return 180;
			return 65;
			return 106;
			return 372;
			return 302;
			return 275;
			return 362;
			return 461;
			return 251;
			return 242;
			return 443;
			return 375;
			return 89;
			return 341;
			return 175;
			return 504;
			return 313;
			return 345;
			return 509;
			return 94;
			return 404;
			return 146;
			return 343;
			return 234;
			return 403;
			return 104;
			return 237;
			return 487;
			return 424;
			return 261;
			return 400;
			return 266;
			return 232;
			return 283;
			return 310;
			return 337;
			return 174;
			return 444;
			return 253;
			return 330;
			return 39;
			return 182;
			return 140;
			return 469;
			return 150;
			return 59;
			return 133;
			return 141;
			return 308;
			return 418;
			return 155;
			return 295;
			return 37;
			return 30;
			return 382;
			return 303;
			return 489;
			return 323;
			return 288;
			return 260;
			return 128;
			return 473;
			return 194;
			return 431;
			return 67;
			return 24;
			return 317;
			return 269;
			return 505;
			return 490;
			return 357;
			return 425;
			return 464;
			return 429;
			return 34;
			return 204;
			return 406;
			return 354;
			return 474;
			return 344;
			return 361;
			return 385;
			return 156;
			return 127;
			return 376;
			return 438;
			return 441;
			return 113;
			return 222;
			return 95;
			return 151;
			return 208;
			return 316;
			return 93;
			return 325;
			return 290;
			return 55;
			return 239;
			return 287;
			return 19;
			return 105;
			return 201;
			return 342;
			return 353;
			return 46;
			return 466;
			return 137;
			return 350;
			return 321;
			return 81;
			return 51;
			return 54;
			return 188;
			return 43;
			return 1;
			return 147;
			return 228;
			return 408;
			return 458;
			return 358;
			return 476;
			return 498;
			return 477;
			return 480;
			return 455;
			return 494;
			return 184;
			return 227;
			return 60;
			return 47;
			return 0;
			return 279;
			return 282;
			return 433;
			return 35;
			return 64;
			return 304;
			return 241;
			return 134;
			return 74;
			return 270;
			return 399;
			return 419;
			return 364;
			return 250;
			return 103;
			return 90;
			return 240;
			return 193;
			return 506;
			return 84;
			return 101;
			return 335;
			return 71;
			return 291;
			return 73;
			return 80;
			return 132;
			return 446;
			return 332;
			return 436;
			return 220;
			return 255;
			return 493;
			return 370;
			return 163;
			return 40;
			return 471;
			return 452;
			return 160;
			return 245;
			return 203;
			return 346;
			return 488;
			return 349;
			return 360;
			return 398;
			return 78;
			return 420;
			return 389;
			return 178;
			return 315;
			return 268;
			return 66;
			return 401;
			return 501;
			return 371;
			return 8;
			return 211;
			return 126;
			return 217;
			return 467;
			return 177;
			return 328;
			return 365;
			return 414;
			return 115;
			return 153;
			return 157;
			return 50;
			return 481;
			return 367;
			return 218;
			return 296;
			return 28;
			return 336;
			return 202;
			return 14;
			return 355;
			return 298;
			return 118;
			return 192;
			return 136;
			return 49;
			return 42;
			return 4;
			return 173;
			return 11;
			return 412;
			return 272;
			return 407;
			return 212;
			return 159;
			return 70;
			return 333;
			return 38;
			return 256;
			return 171;
			return 456;
			return 356;
			return 198;
			return 299;
			return 417;
			return 189;
			return 265;
			return 116;
			return 305;
			return 264;
			return 402;
			return 271;
			return 286;
			return 378;
			return 392;
			return 366;
			return 451;
			return 292;
			return 363;
			return 224;
			return 87;
			return 410;
			return 214;
			return 166;
			return 463;
			return 428;
			return 450;
			return 7;
			return 32;
			return 215;
			return 107;
			return 130;
			return 45;
			return 495;
			return 122;
			return 258;
			return 102;
			return 248;
			return 152;
			return 314;
			return 168;
			return 6;
			return 300;
			return 267;
			return 368;
			return 322;
			return 85;
			return 91;
			return 195;
			return 53;
			return 181;
			return 432;
			return 479;
			return 230;
			return 306;
			return 111;
			return 502;
			return 352;
			return 99;
			return 421;
			return 397;
			return 69;
			return 394;
			return 434;
			return 48;
			return 79;
			return 301;
			return 216;
			return 63;
			return 75;
			return 144;
			return 462;
			return 339;
			return 44;
			return 503;
			return 478;
			return 20;
			return 278;
			return 281;
			return 109;
			return 334;
			return 209;
			return 263;
			return 207;
			return 167;
			return 161;
			return 262;
			return 183;
			return 162;
			return 72;
			return 468;
			return 231;
			return 340;
			return 384;
			return 143;
			return 31;
			return 117;
			return 100;
			return 379;
			return 390;
			return 276;
			return 449;
			return 307;
			return 274;
			return 191;
			return 447;
			return 508;
			return 235;
			return 388;
			return 430;
			return 176;
			return 448;
			return 475;
			return 459;
			return 62;
			return 226;
			return 491;
			return 453;
			return 500;
			return 154;
			return 123;
			return 221;
			return 36;
			return 381;
			return 82;
			return 319;
			return 121;
			return 497;
			return 348;
			return 347;
			return 213;
			return 5;
			return 15;
			return 386;
			return 416;
			return 465;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

