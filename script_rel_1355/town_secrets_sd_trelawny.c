#region Local Var
	struct<112> Local_0 = { 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_112 = 0;
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
	vector3 vVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&vVar0);
	}
	while (func_2(&vVar0))
	{
		switch (iLocal_112)
		{
			case 0:
				if (func_3(&vVar0))
				{
					iLocal_112 = 1;
				}
				vVar0.x = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
			case 1:
				func_4(&vVar0);
				if (func_6(func_5()))
				{
					iLocal_112 = 2;
				}
				if (vVar0.z)
				{
					iLocal_112 = 2;
				}
				break;
			case 2:
				func_1(&vVar0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&vVar0);
}

void func_1(var uParam0)
{
	if (uParam0->f_1)
	{
		return;
	}
	func_7(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	if (func_8() != func_9())
	{
		return false;
	}
	if (func_10(Global_1935630, 2097152))
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_11(func_5(), 4))
	{
		func_12(&(Local_0.f_111), 1);
		iVar0 = 1;
	}
	if (func_11(func_5(), 8))
	{
		func_12(&(Local_0.f_111), 8);
		iVar1 = 1;
	}
	if ((iVar0 && iVar1) && !func_6(func_5()))
	{
		func_13(func_5());
	}
	return true;
}

void func_4(int iParam0)
{
	float fVar0;

	fVar0 = func_15(Global_35, func_14(0), 1);
	switch (Local_0)
	{
		case 0:
			if (func_6(func_5()))
			{
				func_16(&Local_0, 6);
				return;
			}
			if (fVar0 < 20f && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
			{
				func_16(&Local_0, 1);
			}
			break;
		case 1:
			if (!func_17())
			{
				return;
			}
			func_16(&Local_0, 2);
			break;
		case 2:
			if (!func_18())
			{
				return;
			}
			func_16(&Local_0, 3);
			break;
		case 3:
			if (!func_19(&Local_0))
			{
				return;
			}
			func_16(&Local_0, 4);
			break;
		case 4:
			if (!func_20(Local_0.f_111, 1))
			{
				if (func_21(Global_35, Local_0.f_7[0], 1, 0))
				{
					func_12(&(Local_0.f_111), 1);
				}
			}
			else if (!func_20(Local_0.f_111, 2))
			{
				if (func_21(Global_35, Local_0.f_7[1], 1, 0) && !func_22(1))
				{
					func_23(&(Local_0.f_1), 3);
					func_24(&(Local_0.f_108));
					func_12(&(Local_0.f_111), 2);
				}
			}
			if (fVar0 > 40f)
			{
				func_16(&Local_0, 5);
			}
			if (func_20(Local_0.f_111, 1) && !func_20(Local_0.f_111, 4))
			{
				switch (Local_0.f_1)
				{
					case 0:
						if (func_27(&(Local_0.f_10), func_26(func_25(0)), 0, -1, 0, 0))
						{
							func_24(&(Local_0.f_108));
							func_28(GET_HASH_KEY("CSTAG_SP_TRELAWNY_FAMILY"), 1017034651, 1120952528, -1, 1, 1, 0);
							func_23(&(Local_0.f_1), 1);
						}
						break;
					case 1:
						if ((func_29(&(Local_0.f_108)) > 3f && !func_22(1)) && func_27(&(Local_0.f_10), func_26(func_25(1)), 0, -1, 0, 0))
						{
							func_23(&(Local_0.f_1), 2);
						}
						break;
					case 2:
						if ((func_29(&(Local_0.f_108)) > 3f && !func_22(1)) && func_27(&(Local_0.f_10), func_26(func_25(2)), 0, -1, 0, 0))
						{
							func_12(&(Local_0.f_111), 4);
							func_30(&(Local_0.f_108));
							func_31(func_5(), 4);
							func_23(&(Local_0.f_1), -1);
						}
						break;
				}
			}
			if (func_20(Local_0.f_111, 2) && !func_20(Local_0.f_111, 8))
			{
				switch (Local_0.f_1)
				{
					case 3:
						if ((func_29(&(Local_0.f_108)) > 3f && !func_22(1)) && func_27(&(Local_0.f_10), func_26(func_25(3)), 0, -1, 0, 0))
						{
							func_24(&(Local_0.f_108));
							func_23(&(Local_0.f_1), 4);
						}
						break;
					case 4:
						if (func_29(&(Local_0.f_108)) > 3f && func_27(&(Local_0.f_10), func_26(func_25(4)), 0, -1, 0, 0))
						{
							func_12(&(Local_0.f_111), 8);
							func_31(func_5(), 8);
							func_23(&(Local_0.f_1), -1);
						}
						break;
				}
			}
			if ((!func_6(func_5()) && func_11(func_5(), 4)) && func_11(func_5(), 8))
			{
				func_13(func_5());
				func_16(&Local_0, 5);
			}
			break;
		case 5:
			func_32(&Local_0);
			if (func_6(func_5()))
			{
				func_16(&Local_0, 6);
			}
			else
			{
				func_16(&Local_0, 0);
			}
			break;
		case 6:
			break;
	}
}

int func_5()
{
	return 1;
}

bool func_6(int iParam0)
{
	return func_11(iParam0, 2);
}

void func_7(var uParam0)
{
}

int func_8()
{
	return Global_1894899.f_2;
}

int func_9()
{
	return 5;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_33(iParam0))
	{
		return false;
	}
	return (Global_40.f_9020[iParam0] && iParam1) != 0;
}

void func_12(var uParam0, int iParam1)
{
	func_34(uParam0, iParam1);
}

void func_13(int iParam0)
{
	func_31(iParam0, 2);
}

Vector3 func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2730.417f, -1181.929f, 52.94527f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_15(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_16(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_17()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		STREAMING::REQUEST_MODEL(func_35(iVar1), false);
		iVar0++;
	}
	PED::_0xED9582B3DA8F02B4(4);
	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_36()))
	{
		HUD::TEXT_BLOCK_REQUEST(func_36());
	}
	return true;
}

bool func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (4 - 1))
	{
		iVar2 = iVar1;
		if (!STREAMING::HAS_MODEL_LOADED(func_35(iVar2)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_36()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	if (PED::_0x62DE46F061CAA468() < 4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2[iVar1]))
		{
			iParam0->f_2[iVar1] = func_38(func_35(iVar1), func_37(iVar1), 0f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_7[iVar0]))
		{
			iVar2 = iVar0;
			Var3 = { func_39(iVar2) };
			iParam0->f_7[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var3.f_10, Var3, Var3.f_3, Var3.f_6, Var3.f_9);
		}
		iVar0++;
	}
	func_40(&(iParam0->f_10), iParam0->f_2[0], "TRELAWNY", 0);
	func_40(&(iParam0->f_10), iParam0->f_2[1], "TRELAWNY_WIFE", 0);
	func_40(&(iParam0->f_10), iParam0->f_2[2], "TRELAWNY_SON1", 0);
	func_40(&(iParam0->f_10), iParam0->f_2[3], "TRELAWNY_SON2", 0);
	return true;
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_22(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24(var uParam0)
{
	func_41(uParam0, 0f);
}

char* func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TREFA_TOAST";
		case 1:
			return "TREFA_TOASTR";
		case 2:
			return "TREFA_PRESENTS";
		case 3:
			return "TREFA_KNOCK";
		case 4:
			return "TREFA_OFFICE";
		default:
			break;
	}
	return "";
}

Vector3 func_26(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_27(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_42(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_43(iParam0);
	iVar3 = func_44(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_45();
				func_46(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_47(iParam0, 1);
			if (func_48(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_49(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_50(1, iParam0);
				}
				else
				{
					func_51(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_29(var uParam0)
{
	if (!func_52(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_53(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_54() - uParam0->f_1);
}

void func_30(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_31(int iParam0, int iParam1)
{
	if (!func_33(iParam0))
	{
		return;
	}
	Global_40.f_9020[iParam0] = (Global_40.f_9020[iParam0] || iParam1);
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2[iVar1]))
		{
			PED::DELETE_PED(&(iParam0->f_2[iVar1]));
		}
		if (STREAMING::IS_MODEL_VALID(func_35(iVar1)))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_35(iVar1));
		}
		if (HUD::TEXT_BLOCK_IS_LOADED(func_36()))
		{
			HUD::_TEXT_BLOCK_DELETE(func_36());
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_7[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iParam0->f_7[iVar0]);
		}
		iVar0++;
	}
	PED::_0x7D4E70A67A651C71(4);
	return 1;
}

bool func_33(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_01");
		case 1:
			return GET_HASH_KEY("A_F_M_MIDDLESDTOWNFOLK_01");
		case 2:
			return GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_01");
		case 3:
			return GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_01");
		default:
			break;
	}
	return GET_HASH_KEY("A_M_M_MIDDLESDTOWNFOLK_01");
}

char* func_36()
{
	return "TREFAAU";
}

Vector3 func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2730.556f, -1179.097f, 48.23744f;
		case 1:
			return 2731.298f, -1178.588f, 48.23723f;
		case 2:
			return 2732.105f, -1178.555f, 48.23688f;
		case 3:
			return 2731.054f, -1177.76f, 48.23754f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_38(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_55(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

struct<11> func_39(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 1:
			Var0 = { 2730.332f, -1181.96f, 53.10075f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 1.319822f, 1.53588f, 2.388693f };
			Var0.f_9 = "TS_SD_DOOR_TRIGGER";
			Var0.f_10 = GET_HASH_KEY("VOLBOX");
			break;
		case 0:
			Var0 = { 2731.981f, -1182.07f, 53.10075f };
			Var0.f_3 = { 0f, 0f, -3.041f };
			Var0.f_6 = { 4.275794f, 1.53588f, 2.388693f };
			Var0.f_9 = "TS_SD_WALK_WALK_TRIGGER";
			Var0.f_10 = GET_HASH_KEY("VOLBOX");
			break;
	}
	return Var0;
}

void func_40(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_56(uParam0, iParam1, sParam2))
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

void func_41(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_54() - fParam1);
	func_57(uParam0, 1);
	func_58(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_43(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_59(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_60(iVar6);
	}
	return iVar5;
}

int func_44(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_61(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

int func_45()
{
	return Global_1899515;
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_62(*iParam0);
	iVar1 = func_63(*iParam0);
	iVar2 = func_64(*iParam0);
	iVar3 = func_65(*iParam0);
	iVar4 = func_66(*iParam0);
	iVar5 = func_67(*iParam0);
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
	iVar6 = func_68(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_68(iVar1, iVar0);
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
	func_69(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_47(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_70(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
			return false;
		default:
			break;
	}
	return false;
}

void func_49(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_47(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_50(2, *uParam0);
		}
		else
		{
			func_51(2, *uParam0);
		}
	}
	func_71(uParam0);
}

void func_50(int iParam0, int iParam1)
{
	if (Global_1357549.f_1483 >= 25)
	{
		Global_1357549.f_1483 = 0;
	}
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483++;
}

void func_51(int iParam0, int iParam1)
{
	if (Global_1357549.f_1406 >= 50)
	{
		return;
	}
	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403++;
	Global_1357549.f_1406++;
}

bool func_52(var uParam0)
{
	return func_72(*uParam0, 1);
}

bool func_53(var uParam0)
{
	return func_72(*uParam0, 2);
}

float func_54()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_55(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_73(iParam1))
		{
			func_74(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_75(iParam0, 0, 1);
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
			func_76(iParam0, 0);
			bVar0 = true;
		}
		func_77(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_56(var uParam0, int iParam1, char* sParam2)
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

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_59(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("FLOW"):
			return 7;
		case GET_HASH_KEY("FLOW_FIRST_VISIT"):
			return 8;
		case GET_HASH_KEY("VIGNETTE"):
			return 10;
		case GET_HASH_KEY("VIG_CAMP_ONLY"):
			return 11;
		case GET_HASH_KEY("BASE"):
			return 1;
		case 1871598:
			return 9;
		case GET_HASH_KEY("EVENT"):
			return 6;
		case GET_HASH_KEY("ARRANGEMENT"):
			return 2;
		case GET_HASH_KEY("GRIEFING"):
			return 4;
		case GET_HASH_KEY("SUPPLY"):
			return 3;
		case GET_HASH_KEY("MOOD_ARTHUR"):
			return 12;
		case GET_HASH_KEY("MOOD_ABIGAIL"):
			return 25;
		case GET_HASH_KEY("MOOD_BILL"):
			return 16;
		case GET_HASH_KEY("MOOD_CHARLES"):
			return 20;
		case GET_HASH_KEY("MOOD_DUTCH"):
			return 13;
		case GET_HASH_KEY("MOOD_SUSAN_GRIMSHAW"):
			return 31;
		case GET_HASH_KEY("MOOD_HOSEA"):
			return 18;
		case GET_HASH_KEY("MOOD_JACK"):
			return 26;
		case GET_HASH_KEY("MOOD_JAVIER"):
			return 15;
		case GET_HASH_KEY("MOOD_JOHN"):
			return 14;
		case GET_HASH_KEY("MOOD_KAREN"):
			return 32;
		case GET_HASH_KEY("MOOD_LENNY"):
			return 22;
		case GET_HASH_KEY("MOOD_MARY_BETH"):
			return 27;
		case GET_HASH_KEY("MOOD_MICAH"):
			return 19;
		case GET_HASH_KEY("MOOD_MOLLY_OSHEA"):
			return 28;
		case GET_HASH_KEY("MOOD_PEARSON"):
			return 29;
		case GET_HASH_KEY("MOOD_SADIE_ADLER"):
			return 24;
		case GET_HASH_KEY("MOOD_STRAUSS"):
			return 30;
		case GET_HASH_KEY("MOOD_SWANSON"):
			return 33;
		case GET_HASH_KEY("MOOD_TILLY"):
			return 34;
		case GET_HASH_KEY("MOOD_UNCLE"):
			return 17;
		case GET_HASH_KEY("MOOD_TRELAWNY"):
			return 35;
		case GET_HASH_KEY("MOOD_ODRISCOLL"):
			return 23;
		case GET_HASH_KEY("MOOD_SEAN"):
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_61(vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_62(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_78(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_63(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_64(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_65(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_66(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_67(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_68(int iParam0, int iParam1)
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

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_79(iParam0, iParam6);
	func_80(iParam0, iParam5);
	func_81(iParam0, iParam4);
	func_82(iParam0, iParam3);
	func_83(iParam0, iParam2);
	func_84(iParam0, iParam1);
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_85(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_71(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_73(int iParam0)
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

void func_74(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_86(iParam0, iParam1))
		{
			if (func_87(iParam0, iParam1))
			{
				if (func_88(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_89(iParam0);
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

void func_75(int iParam0, int iParam1, bool bParam2)
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

void func_76(int iParam0, bool bParam1)
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

void func_77(int iParam0, int iParam1)
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

int func_78(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_79(int iParam0, int iParam1)
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

void func_80(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_63(*iParam0);
	iVar1 = func_62(*iParam0);
	if (iParam1 < 1 || iParam1 > func_68(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_82(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_83(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_84(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_85(int iParam0, int iParam1)
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
		case GET_HASH_KEY("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case GET_HASH_KEY("CSTAG_COL_BASE"):
			return 2;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case GET_HASH_KEY("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case GET_HASH_KEY("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case GET_HASH_KEY("CSTAG_HSO_BASE"):
			return 3;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case GET_HASH_KEY("CSTAG_FLOW_DST1_POST"):
			return 372;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case GET_HASH_KEY("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case GET_HASH_KEY("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case GET_HASH_KEY("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case GET_HASH_KEY("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case GET_HASH_KEY("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case GET_HASH_KEY("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case GET_HASH_KEY("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case GET_HASH_KEY("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case GET_HASH_KEY("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case GET_HASH_KEY("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case GET_HASH_KEY("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case GET_HASH_KEY("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case GET_HASH_KEY("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case GET_HASH_KEY("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case GET_HASH_KEY("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case GET_HASH_KEY("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case GET_HASH_KEY("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case GET_HASH_KEY("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case GET_HASH_KEY("CSTAG_FLOW_AB21_POST"):
			return 469;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case GET_HASH_KEY("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case GET_HASH_KEY("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case GET_HASH_KEY("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case GET_HASH_KEY("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case GET_HASH_KEY("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case GET_HASH_KEY("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case GET_HASH_KEY("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case GET_HASH_KEY("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case GET_HASH_KEY("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case GET_HASH_KEY("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case GET_HASH_KEY("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case GET_HASH_KEY("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case GET_HASH_KEY("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case GET_HASH_KEY("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case GET_HASH_KEY("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case GET_HASH_KEY("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case GET_HASH_KEY("CSTAG_SUPPLY_HIGH"):
			return 34;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case GET_HASH_KEY("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case GET_HASH_KEY("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case GET_HASH_KEY("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case GET_HASH_KEY("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case GET_HASH_KEY("CSTAG_VIG_CLM_BASE"):
			return 361;
		case GET_HASH_KEY("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case GET_HASH_KEY("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case GET_HASH_KEY("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case GET_HASH_KEY("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case GET_HASH_KEY("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case GET_HASH_KEY("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case GET_HASH_KEY("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case GET_HASH_KEY("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case GET_HASH_KEY("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case GET_HASH_KEY("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case GET_HASH_KEY("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case GET_HASH_KEY("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case GET_HASH_KEY("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case GET_HASH_KEY("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case GET_HASH_KEY("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case GET_HASH_KEY("CSTAG_FLOW_BE22_POST"):
			return 477;
		case GET_HASH_KEY("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case GET_HASH_KEY("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case GET_HASH_KEY("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case GET_HASH_KEY("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case GET_HASH_KEY("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case GET_HASH_KEY("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case GET_HASH_KEY("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case GET_HASH_KEY("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case GET_HASH_KEY("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case GET_HASH_KEY("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case GET_HASH_KEY("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case GET_HASH_KEY("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case GET_HASH_KEY("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case GET_HASH_KEY("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case GET_HASH_KEY("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case GET_HASH_KEY("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case GET_HASH_KEY("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case GET_HASH_KEY("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case GET_HASH_KEY("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case GET_HASH_KEY("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case GET_HASH_KEY("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case GET_HASH_KEY("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case GET_HASH_KEY("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case GET_HASH_KEY("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case GET_HASH_KEY("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case GET_HASH_KEY("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case GET_HASH_KEY("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case GET_HASH_KEY("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case GET_HASH_KEY("CSTAG_BVH_BASE"):
			return 8;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case GET_HASH_KEY("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case GET_HASH_KEY("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case GET_HASH_KEY("CSTAG_VIG_BVH_BASE"):
			return 365;
		case GET_HASH_KEY("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case GET_HASH_KEY("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case GET_HASH_KEY("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case GET_HASH_KEY("CSTAG_LOITERING"):
			return 336;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case GET_HASH_KEY("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case GET_HASH_KEY("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case GET_HASH_KEY("CSTAG_FLOW_DST3_POST"):
			return 407;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case GET_HASH_KEY("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case GET_HASH_KEY("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case GET_HASH_KEY("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case GET_HASH_KEY("CSTAG_VIG_HSO_BASE"):
			return 356;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case GET_HASH_KEY("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case GET_HASH_KEY("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case GET_HASH_KEY("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case GET_HASH_KEY("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case GET_HASH_KEY("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case GET_HASH_KEY("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case GET_HASH_KEY("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case GET_HASH_KEY("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case GET_HASH_KEY("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case GET_HASH_KEY("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case GET_HASH_KEY("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case GET_HASH_KEY("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case GET_HASH_KEY("CSTAG_VIG_SDB_BASE"):
			return 363;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case GET_HASH_KEY("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case GET_HASH_KEY("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case GET_HASH_KEY("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case GET_HASH_KEY("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case GET_HASH_KEY("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case GET_HASH_KEY("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case GET_HASH_KEY("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case GET_HASH_KEY("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case GET_HASH_KEY("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case GET_HASH_KEY("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case GET_HASH_KEY("CSTAG_GUA_BASE"):
			return 6;
		case GET_HASH_KEY("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case GET_HASH_KEY("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case GET_HASH_KEY("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case GET_HASH_KEY("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case GET_HASH_KEY("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case GET_HASH_KEY("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case GET_HASH_KEY("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case GET_HASH_KEY("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case GET_HASH_KEY("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case GET_HASH_KEY("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case GET_HASH_KEY("CSTAG_FLOW_IND1_POST"):
			return 421;
		case GET_HASH_KEY("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case GET_HASH_KEY("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case GET_HASH_KEY("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case GET_HASH_KEY("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case GET_HASH_KEY("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case GET_HASH_KEY("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case GET_HASH_KEY("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case GET_HASH_KEY("CSTAG_PLAYER_DIRTY"):
			return 339;
		case GET_HASH_KEY("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case GET_HASH_KEY("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case GET_HASH_KEY("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case GET_HASH_KEY("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case GET_HASH_KEY("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case GET_HASH_KEY("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case GET_HASH_KEY("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case GET_HASH_KEY("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case GET_HASH_KEY("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case GET_HASH_KEY("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case GET_HASH_KEY("CSTAG_PLAYER_AWAY"):
			return 340;
		case GET_HASH_KEY("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case GET_HASH_KEY("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case GET_HASH_KEY("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case GET_HASH_KEY("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case GET_HASH_KEY("CSTAG_FLOW_REV1_POST"):
			return 390;
		case GET_HASH_KEY("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case GET_HASH_KEY("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case GET_HASH_KEY("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case GET_HASH_KEY("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case GET_HASH_KEY("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case GET_HASH_KEY("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case GET_HASH_KEY("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case GET_HASH_KEY("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case GET_HASH_KEY("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case GET_HASH_KEY("CSTAG_FLOW_MR52_POST"):
			return 475;
		case GET_HASH_KEY("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case GET_HASH_KEY("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case GET_HASH_KEY("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case GET_HASH_KEY("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case GET_HASH_KEY("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case GET_HASH_KEY("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case GET_HASH_KEY("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case GET_HASH_KEY("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case GET_HASH_KEY("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case GET_HASH_KEY("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case GET_HASH_KEY("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case GET_HASH_KEY("CSTAG_SDB_BASE"):
			return 5;
		case GET_HASH_KEY("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case GET_HASH_KEY("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case GET_HASH_KEY("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case GET_HASH_KEY("CSTAG_FLOW_TRN2_POST"):
			return 465;
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

bool func_86(int iParam0, int iParam1)
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

bool func_87(int iParam0, int iParam1)
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

bool func_88(int iParam0, int iParam1)
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
	if (!func_86(iParam0, iVar0))
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

void func_89(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

