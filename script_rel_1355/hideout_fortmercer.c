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
	struct<5> Local_15 = { 0, 0, 0, 0, 0 } ;
	struct<216> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	struct<9> Local_244[17];
	struct<9> Local_398[4];
	struct<9> Local_435[4];
	struct<14> Local_472[2];
	struct<9> Local_501[4];
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 1;
	var uLocal_543 = 0;
	char* sLocal_544[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_588[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	bool bLocal_603 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_602 = vScriptParam_0.x;
	iLocal_600 = vScriptParam_0.z;
	if (func_1(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_601)
		{
			iLocal_601 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_600;
			func_4(iLocal_602, &iLocal_600);
			switch (iLocal_600)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_603 = !func_5(iLocal_602, 1);
						if (bLocal_603)
						{
						}
						iLocal_600 = 1;
					}
					break;
				case 1:
					iLocal_600 = 2;
					break;
				case 2:
					if (func_6(bLocal_603))
					{
						iLocal_600 = 4;
					}
					break;
				case 4:
					iLocal_600 = 6;
					break;
				case 6:
					if (func_7(iLocal_602, -1, -1, 0))
					{
						func_8(iLocal_602, 4);
						iLocal_600 = 7;
					}
					break;
				case 7:
					iLocal_600 = 8;
					break;
				case 8:
					func_9(iLocal_602);
					iLocal_600 = 9;
					break;
				case 9:
					if (iLocal_602 == 5)
					{
					}
					else
					{
						func_10(&Global_1898004);
						func_11(iLocal_602, &Global_1898004, bLocal_603);
					}
					func_8(iLocal_602, 8);
					iLocal_600 = 10;
					break;
				case 10:
					if (!bLocal_603)
					{
						func_12();
						if (func_13(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							func_14(32);
						}
						iLocal_600 = 3;
					}
					else
					{
						iLocal_600 = 3;
					}
					break;
				case 3:
					if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
					{
						if (func_15(bLocal_603))
						{
							iLocal_600 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_603)
					{
						if (!func_16(iLocal_602))
						{
							iLocal_601 = 0;
						}
					}
					func_17(&Global_1898004, iLocal_602);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_600)
			{
				iLocal_601 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

bool func_1(int iParam0, int iParam1)
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
	if (func_19(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

bool func_3()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35) && CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return true;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_13(16))
	{
		return;
	}
	if (Global_1894899.f_7 == 0)
	{
		func_14(16);
		return;
	}
	if (!func_20(iParam0))
	{
		Global_1894899.f_7 = 0;
		func_14(16);
		return;
	}
	if (func_21(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_22(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_22(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_22(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_22(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_22(1);
			*iParam1 = 11;
			return;
		}
	}
}

bool func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_23(iParam0))
	{
		return false;
	}
	if (func_24() == -1)
	{
		if (func_25(6206, 1, 1))
		{
			iVar0 = func_26(0);
			iVar1 = func_27(iVar0);
			return false;
		}
		if (bParam1)
		{
			if (func_28() == iParam0)
			{
				return false;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_29(63))
					{
						return false;
					}
					if (func_30(76) || func_31())
					{
						return false;
					}
					break;
				case 125:
					if (!func_32())
					{
						return false;
					}
					break;
				case 129:
					if (!func_33())
					{
						return false;
					}
					if (func_34(19, 0))
					{
						return false;
					}
					break;
				case 114:
					if (!func_33())
					{
						return false;
					}
					if (func_34(20, 0))
					{
						return false;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_24() == 0)
	{
		return false;
	}
	else
	{
		return false;
	}
	if (func_35(iParam0, 256))
	{
		return false;
	}
	if (bParam1)
	{
		iVar2 = func_36(iParam0);
		if (!func_37(iVar2))
		{
			return false;
		}
		iVar3 = func_38(iVar2);
		if (func_39(iVar3))
		{
			func_40(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_41(iVar3, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_6(bool bParam0)
{
	func_42();
	Local_20.f_215 = Local_15.f_1;
	return true;
}

bool func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return true;
	}
	if (!func_43(iParam0))
	{
		return true;
	}
	if (func_35(iParam0, 16))
	{
		return true;
	}
	if (func_44(iParam0) && !func_45(iParam0))
	{
	}
	if (func_46(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_47(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_47(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_44(iParam0) || func_45(iParam0)) || func_48(Global_1897950))
			{
				func_49(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return false;
			}
		}
	}
	return true;
}

void func_8(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_9(int iParam0)
{
	iParam0 = iParam0;
}

void func_10(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	func_50(uParam1, Local_20.f_215, 1);
}

void func_12()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", true, true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	Local_20.f_189 = 1;
	func_51();
	func_52();
	func_53(&Local_20, 118, &sLocal_544, 30);
	func_54(&(Local_20.f_155), 1);
	func_55(&(Local_20.f_155), 0);
	func_56(&(Local_20.f_155), 1);
	func_57(&(Local_20.f_155), 1);
	func_58(&(Local_20.f_155), 1);
	func_59(&(Local_20.f_155), 67);
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
}

bool func_13(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_14(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_15(bool bParam0)
{
	return true;
}

bool func_16(int iParam0)
{
	switch (Local_20)
	{
		case 0:
			if (func_60(&Local_20, &uLocal_542, &uLocal_538, "FORTM", 0))
			{
				func_61(&Local_20, 1);
			}
			break;
		case 1:
			if (func_62(&Local_20, &Local_244, GET_HASH_KEY("REL_GANG_SMUGGLERS"), iLocal_568, iLocal_569))
			{
				Local_20.f_197 = 0;
				func_63(&Local_472);
				func_64();
				func_61(&Local_20, 5);
				func_65(0);
			}
			break;
		case 5:
			func_66(&Local_20, &Local_244, iLocal_568, iLocal_569);
			func_67();
			func_68();
			func_69();
			func_61(&Local_20, 6);
			func_70();
			break;
		case 6:
			if (func_71(&Local_20))
			{
				func_61(&Local_20, 7);
			}
			break;
		case 7:
			func_72();
			break;
	}
	if (!func_73(&Local_20, 4) && Local_20 >= 6)
	{
		func_74(&Local_20, &Local_244);
		func_75();
	}
	func_76(&Local_20);
	func_77();
	return false;
}

void func_17(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_78(Global_1935630, 16384)) || func_78(Global_1935630, 8388608))
	{
		return;
	}
	if (func_79(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_80();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_81(uParam0[iVar3 /*3*/], 1) && func_82(iParam1)) && !func_83(iParam1, 16))
							{
								func_85(iParam1, func_84(), -1, 0, -1, 0);
								func_86(uParam0[iVar3 /*3*/], 1);
							}
							func_87(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_24() == -1)
	{
		if (func_88() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_89();
			func_90(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	func_91(bVar0);
	if (func_24() == -1)
	{
		func_92((iParam1 == func_28() && bVar0));
	}
}

void func_18()
{
	func_93(bLocal_603);
	func_94(bLocal_603);
	if (func_24() == -1)
	{
		if (iLocal_602 != 5)
		{
			func_95(iLocal_602);
		}
	}
	if (iLocal_602 != 5)
	{
		func_96(iLocal_602);
		func_97(iLocal_602, 4);
		func_97(iLocal_602, 8);
		func_91(0);
		if (func_24() == -1)
		{
			func_92(0);
		}
	}
	func_98(0);
	if (func_28() == iLocal_602)
	{
		func_99(0);
	}
	if (func_100(func_36(iLocal_602), 1))
	{
		func_102(func_101(iLocal_602), 1, 0);
	}
	func_103(iLocal_602);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_20(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return func_35(iParam0, 8);
}

bool func_21(int iParam0)
{
	return (Global_1894899.f_7 && iParam0) != 0;
}

void func_22(int iParam0)
{
	Global_1894899.f_7 = (Global_1894899.f_7 - (Global_1894899.f_7 && iParam0));
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_104(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return Global_40.f_9571[iVar0 /*10*/].f_1 == 5;
}

int func_24()
{
	return Global_1572887.f_12;
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
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
		if (func_105())
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
		iVar0 = func_106(Global_1898164.f_1[0 /*5*/]);
		if (func_107(iVar0) && func_108(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_37(Global_1898164.f_1[0 /*5*/]))
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

int func_26(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_27(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_110(func_109(iParam0));
}

int func_28()
{
	return Global_40.f_4283.f_1;
}

bool func_29(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_107(iParam0))
	{
		return false;
	}
	return func_100(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_30(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_100(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_31()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_32()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_33()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_34(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_24() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_35(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_36(int iParam0)
{
	if (!func_111(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

bool func_37(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -15;
	}
	return func_112(iParam0);
}

bool func_39(int iParam0)
{
	return iParam0 != -15;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_113(*iParam0);
	iVar1 = func_114(*iParam0);
	iVar2 = func_115(*iParam0);
	iVar3 = func_116(*iParam0);
	iVar4 = func_117(*iParam0);
	iVar5 = func_118(*iParam0);
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
	iVar6 = func_119(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_119(iVar1, iVar0);
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
	func_120(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_122(func_121(), iParam0, bParam1);
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_BOX(-4218.855f, -3453.422f, 39.44371f, 0f, 0f, -45.10696f, 73.68802f, 101.1393f, 15.12208f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(-4216.379f, -3461.898f, 37.05473f, 0f, 0f, 0f, 122.2548f, 119.8828f, 59.38927f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-4222.206f, -3511.035f, 39.89782f, 0f, 0f, 121.44f, 3.746872f, 6.170708f, 7.757661f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_BOX(-4185.451f, -3417.06f, 40.82632f, 0f, 0f, -46.91608f, 6.688188f, 4.307337f, 11.7211f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_BOX(-4224.079f, -3452.337f, 43.4086f, 0f, 0f, -32.25804f, 22.95121f, 17.3053f, 24.01812f);
}

bool func_43(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_44(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return func_35(iParam0, 33554432);
}

bool func_45(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_46(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_24() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
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
			*iParam1 = 69;
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
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
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
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
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
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
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
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_48(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_49(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_123(iParam0, 2))
	{
		return 0;
	}
	if (func_123(iParam0, 32) && !bParam1)
	{
		func_125(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_124(iParam0)));
		if (func_24() == -1)
		{
			if (func_123(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_126(iParam0));
				func_127(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_126(iParam0));
		}
		return 0;
	}
	if (!func_128(iParam0) && func_24() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_126(iParam0)))
	{
		func_127(iParam0, 128);
		return 1;
	}
	func_125(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_124(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_126(iParam0));
	if (func_123(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_126(iParam0));
		func_127(iParam0, 2048);
	}
	return 1;
}

void func_50(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_129(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

void func_51()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_472[iVar0 /*14*/] = { func_130(1, iVar0) };
		Local_472[iVar0 /*14*/].f_6 = func_131(1, iVar0);
		iVar0++;
	}
	Local_472[0 /*14*/].f_7 = GET_HASH_KEY("GATLING_GUN");
	func_132(&uLocal_538, Local_472[0 /*14*/].f_7);
	Local_472[0 /*14*/].f_11 = 1;
	Local_472[0 /*14*/].f_12 = 1;
	Local_472[1 /*14*/].f_7 = GET_HASH_KEY("GATLING_GUN");
	Local_472[1 /*14*/].f_11 = 1;
	Local_472[1 /*14*/].f_12 = 1;
}

void func_52()
{
	int iVar0;

	Local_20.f_199 = 17;
	Local_20.f_201 = Local_20.f_199;
	iLocal_568 = 0;
	iLocal_569 = 16;
	iVar0 = iLocal_568;
	while (iVar0 <= iLocal_569)
	{
		Local_244[iVar0 /*9*/] = GET_HASH_KEY("G_M_M_UNIBANDITOS_01");
		iVar0++;
	}
	func_132(&uLocal_538, Local_244[0 /*9*/]);
	func_133();
}

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;

	func_134(128);
	uParam0->f_205 = iParam1;
	bVar0 = func_135(&(uParam0->f_5), 1048576);
	uParam0->f_202 = { func_136(uParam0->f_205, bVar0) };
	uParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (uParam0->f_205 == 16)
	{
		func_137(uParam0->f_202, 120f, 0);
	}
	else
	{
		func_137(uParam0->f_202, 80f, 0);
	}
	func_138(uParam0, 1);
	func_139(&(uParam0->f_155));
	func_140(&(uParam0->f_155));
	func_141(&(uParam0->f_155));
	func_142(&(uParam0->f_155), 1);
	func_143(&(uParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	func_59(&(uParam0->f_155), 50);
	func_144(&(uParam0->f_155), 8f);
	func_145(sParam2);
	func_146(uParam0);
	if (!func_147(65))
	{
		func_148(uParam0);
	}
	func_149(uParam0);
	func_150(uParam0);
	func_151(&(uParam0->f_38), Global_35, "ARTHUR", 0);
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 4);
	}
	else
	{
		func_153(uParam0, 4);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 1);
	}
	else
	{
		func_152(&(uParam0->f_1), 1);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 8);
	}
	else
	{
		func_153(uParam0, 8);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 32);
	}
	else
	{
		func_153(uParam0, 32);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 2);
	}
	else
	{
		func_153(uParam0, 2);
	}
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_60(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_201);
	}
	else
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_199);
	}
	if (func_154(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_0x5E420FF293EE5472())
	{
		return true;
	}
	return false;
}

void func_61(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0)
	{
		iParam4 = (iParam0->f_199 - 1);
	}
	if (iParam0->f_197 < iParam3)
	{
		iParam0->f_197 = iParam3;
	}
	if ((*iParam1)[iParam0->f_197 /*9*/] != 0)
	{
		func_155(iParam1[iParam0->f_197 /*9*/], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return true;
	}
	return false;
}

void func_63(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!(uParam0[iVar0 /*14*/])->f_11)
		{
			if ((uParam0[iVar0 /*14*/])->f_7 != 0)
			{
				if ((uParam0[iVar0 /*14*/])->f_13 > -1)
				{
					iVar10 = (uParam0[iVar0 /*14*/])->f_13;
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(uParam0[iVar10 /*14*/]), (uParam0[iVar0 /*14*/])->f_6, *(uParam0[iVar0 /*14*/])) };
					(uParam0[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT((uParam0[iVar0 /*14*/])->f_7, vVar7, true, true, false, false, true);
					if (!(uParam0[iVar10 /*14*/])->f_11)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar10 /*14*/])->f_8, 0, *(uParam0[iVar0 /*14*/]), (uParam0[iVar0 /*14*/])->f_3, false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar10 /*14*/])->f_9, 0, *(uParam0[iVar0 /*14*/]), (uParam0[iVar0 /*14*/])->f_3, false, false, false, false, 2, true, false, false);
					}
				}
				else
				{
					(uParam0[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT((uParam0[iVar0 /*14*/])->f_7, *(uParam0[iVar0 /*14*/]), true, true, true, false, true);
					vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0[iVar0 /*14*/])->f_8, true, false) };
				}
				ENTITY::SET_ENTITY_ROTATION((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar0 /*14*/])->f_3, 2, true);
				if ((uParam0[iVar0 /*14*/])->f_12)
				{
					ENTITY::FREEZE_ENTITY_POSITION((uParam0[iVar0 /*14*/])->f_8, (uParam0[iVar0 /*14*/])->f_12);
				}
				else
				{
					PHYSICS::ACTIVATE_PHYSICS((uParam0[iVar0 /*14*/])->f_8);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((uParam0[iVar0 /*14*/])->f_8, false);
				}
			}
		}
		else
		{
			(uParam0[iVar0 /*14*/])->f_9 = VEHICLE::CREATE_VEHICLE((uParam0[iVar0 /*14*/])->f_7, *(uParam0[iVar0 /*14*/]), (uParam0[iVar0 /*14*/])->f_6, true, true, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*14*/])->f_8))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0[iVar0 /*14*/])->f_8, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION((uParam0[iVar0 /*14*/])->f_8, 2) };
		}
		else if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*14*/])->f_9))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0[iVar0 /*14*/])->f_9, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION((uParam0[iVar0 /*14*/])->f_9, 2) };
		}
		iVar0++;
	}
}

void func_64()
{
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_472[0 /*14*/].f_9, false);
	ENTITY::SET_ENTITY_HEADING(Local_472[0 /*14*/].f_9, 311.8031f);
	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Local_472[0 /*14*/].f_9))
	{
		ENTITY::_0x445D7D8EA66E373E(Local_472[0 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(Local_472[0 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
	}
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_472[1 /*14*/].f_9, false);
	ENTITY::SET_ENTITY_HEADING(Local_472[1 /*14*/].f_9, 360.08f);
	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Local_472[1 /*14*/].f_9))
	{
		ENTITY::_0x445D7D8EA66E373E(Local_472[1 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(Local_472[1 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);
	}
}

void func_65(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_244[iVar0 /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(Local_244[iVar0 /*9*/].f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_244[iVar0 /*9*/].f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_156((iParam1[iVar0 /*9*/])->f_5, 0, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE((iParam1[iVar0 /*9*/])->f_5, true);
		}
		iVar0++;
	}
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
		{
			func_157(&(Local_20.f_155), Local_244[iVar0 /*9*/].f_5);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_244[iVar0 /*9*/].f_5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 49, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 57, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 58, true);
			PED::SET_PED_HEARING_RANGE(Local_244[iVar0 /*9*/].f_5, 10f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_244[iVar0 /*9*/].f_5, 2);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_244[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_244[iVar0 /*9*/].f_5, true, false), 5f, 0, false, 0);
			PED::SET_PED_COMBAT_RANGE(Local_244[iVar0 /*9*/].f_5, 1);
			switch (iVar0)
			{
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_244[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_244[iVar0 /*9*/].f_5, true, false), 5f, 0, false, 0);
					break;
				case 12:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_244[iVar0 /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(Local_244[iVar0 /*9*/].f_5, true, false), 10f, 0, false, 0);
					break;
				case 4:
					PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_244[iVar0 /*9*/].f_5, Local_15, 0, false, 0);
					break;
				case 5:
					PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_244[iVar0 /*9*/].f_5, Local_15, 0, false, 0);
					break;
				case 10:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_244[iVar0 /*9*/].f_5, true, true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_244[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 1, false);
					break;
				case 14:
					PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_244[iVar0 /*9*/].f_5, Local_15, 0, false, 0);
					PED::SET_PED_COMBAT_RANGE(Local_244[iVar0 /*9*/].f_5, 2);
					break;
				case 13:
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 50, false);
					break;
				case 9:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_244[iVar0 /*9*/].f_5, true, true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_244[iVar0 /*9*/].f_5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 1, false);
					break;
				case 16:
					PED::SET_PED_HEARING_RANGE(Local_244[iVar0 /*9*/].f_5, 30f);
					PED::SET_PED_SEEING_RANGE(Local_244[iVar0 /*9*/].f_5, 30f);
					break;
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = GET_HASH_KEY("WORLD_HUMAN_GUARD_SCOUT");
	iVar2 = GET_HASH_KEY("WORLD_HUMAN_GUARD_MILITARY");
	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
		{
			func_158(Local_244[iVar0 /*9*/].f_5, GET_HASH_KEY("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			switch (iVar0)
			{
				case 0:
					uLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT_HASH(iVar1, Local_244[iVar0 /*9*/].f_1, Local_244[iVar0 /*9*/].f_4, 0, 0f, 1);
					TASK::TASK_USE_SCENARIO_POINT(Local_244[iVar0 /*9*/].f_5, uLocal_570[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_244[iVar0 /*9*/].f_5);
					break;
				case 1:
					uLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT_HASH(iVar2, Local_244[iVar0 /*9*/].f_1, Local_244[iVar0 /*9*/].f_4, 0, 0f, 1);
					TASK::TASK_USE_SCENARIO_POINT(Local_244[iVar0 /*9*/].f_5, uLocal_570[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_244[iVar0 /*9*/].f_5);
					break;
				case 2:
					uLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT_HASH(iVar1, Local_244[iVar0 /*9*/].f_1, Local_244[iVar0 /*9*/].f_4, 0, -1f, 1);
					TASK::TASK_USE_SCENARIO_POINT(Local_244[iVar0 /*9*/].f_5, uLocal_570[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_244[iVar0 /*9*/].f_5);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_244[iVar0 /*9*/].f_5);
					break;
				case 3:
					uLocal_570[iVar0] = TASK::CREATE_SCENARIO_POINT_HASH(iVar2, Local_244[iVar0 /*9*/].f_1, Local_244[iVar0 /*9*/].f_4, 0, -1f, 1);
					TASK::TASK_USE_SCENARIO_POINT(Local_244[iVar0 /*9*/].f_5, uLocal_570[iVar0], 0, -1, false, true, 0, false, -1f, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_244[iVar0 /*9*/].f_5);
					break;
			}
		}
		iVar0++;
	}
}

void func_69()
{
	sLocal_544[0] = "GANG_TAUNT_GEN";
	sLocal_544[1] = "GANG_TAUNT_GEN";
	sLocal_544[2] = "GANG_TAUNT_GEN";
	sLocal_544[3] = "TAUNT_GEN_MALE";
	sLocal_544[4] = "TAUNT_GEN_MALE";
	sLocal_544[5] = "TAUNT_GEN_MALE";
	sLocal_544[6] = "TAUNT_GEN_MALE";
	sLocal_544[7] = "TAUNT_GEN_MALE";
}

void func_70()
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[0]))
	{
		uLocal_588[0] = TASK::CREATE_SCENARIO_POINT_HASH(GET_HASH_KEY("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -4182.402f, -3437.536f, 36.0652f, 234.84f, 5f, 0f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[1]))
	{
		uLocal_588[1] = TASK::CREATE_SCENARIO_POINT_HASH(GET_HASH_KEY("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -4181.315f, -3437.357f, 36.03745f, 148.23f, 5f, 0f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[5]))
	{
		uLocal_588[5] = TASK::CREATE_SCENARIO_POINT_HASH(GET_HASH_KEY("WORLD_PLAYER_TAKE_MONEY_PILE_TABLE"), -4182.402f, -3437.536f, 36.0652f, 234.84f, 5f, 0f, 0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[6]))
	{
		uLocal_588[6] = TASK::CREATE_SCENARIO_POINT_HASH(GET_HASH_KEY("WORLD_PLAYER_PICKUP_MONEY_STACK_80CM"), -4187.917f, -3435.651f, 36.1281f, 156.1638f, 5f, 0f, 0);
	}
}

bool func_71(int iParam0)
{
	float fVar0;

	if (func_159(iParam0->f_6.f_20))
	{
		return true;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iParam0->f_6.f_20, true);
	fVar0 = (fVar0 * fVar0);
	if (!CAM::IS_SPHERE_VISIBLE(iParam0->f_6.f_20, iParam0->f_6.f_23) && fVar0 > iParam0->f_6.f_24)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(iParam0->f_6.f_20, iParam0->f_6.f_23) && fVar0 > iParam0->f_6.f_25)
	{
		return false;
	}
	return true;
}

void func_72()
{
	float fVar0;

	switch (Local_20.f_3)
	{
		case 0:
			func_160();
			if (func_161())
			{
				if (func_162(5, 100))
				{
					func_163();
				}
				else
				{
					func_164(&Local_20, 1);
					func_165();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			else if (func_166())
			{
				func_167(2);
				func_164(&Local_20, 1);
			}
			break;
		case 1:
			if (!func_168(2))
			{
				if (func_169())
				{
					func_170(Local_20.f_192, 0, "FINAL_WARNING", "", -1f, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_20.f_192, Global_35, -1, false, 1);
					func_164(&Local_20, 2);
					func_171(&uLocal_553);
				}
			}
			else if (func_172())
			{
				func_163();
			}
			break;
		case 2:
			if (func_166())
			{
				func_167(2);
				func_170(Local_20.f_192, 0, "TAUNT_GEN_LOCATION", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_163();
			}
			if (!TASK::IS_PED_STILL(Global_35))
			{
				if (!PED::IS_PED_FACING_PED(Global_35, Local_20.f_192, 50f))
				{
					func_171(&uLocal_553);
				}
			}
			fVar0 = func_173(Local_20.f_192, Global_35, 1, 1);
			if (((fVar0 < 35f && func_174(&uLocal_553) > 5f) || func_173(Local_244[2 /*9*/].f_5, Global_35, 1, 1) < 10f) || func_173(Local_244[3 /*9*/].f_5, Global_35, 1, 1) < 10f)
			{
				func_163();
			}
			break;
		case 4:
			break;
		case 5:
			func_175();
			Local_20.f_198 = func_176(&Local_244, Local_20.f_199, Local_20.f_199);
			func_177();
			func_178();
			if (func_179() || Local_20.f_198 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				func_164(&Local_20, 7);
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
			func_164(&Local_20, 8);
			break;
		case 8:
			func_164(&Local_20, 9);
			break;
		case 9:
			if (func_180(&Local_20, &Local_244, 85, 1, 1))
			{
				func_164(&Local_20, 10);
			}
			break;
		case 10:
			break;
	}
	if (Local_20.f_3 <= 5)
	{
		func_181(&Local_244, &Local_20);
	}
	if (!func_73(&Local_20, 5))
	{
		if (func_182(&Local_20, &Local_244, Local_20.f_199, 0, 0))
		{
			func_163();
		}
	}
	else if (Local_20.f_3 > 8)
	{
		func_183(&Local_244, &Local_20, 100, 1084227584 /* Float: 5f */);
	}
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return false;
	}
	return true;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0->f_196 >= iParam0->f_199)
		{
			iParam0->f_196 = 0;
		}
		if (func_156((iParam1[iParam0->f_196 /*9*/])->f_5, 0, 1))
		{
			(iParam1[iVar0 /*9*/])->f_8 = func_173((iParam1[iParam0->f_196 /*9*/])->f_5, Global_35, 0, 1);
			if (iParam1[iVar0 /*9*/])->f_8 < func_184(iParam0)
			{
				if (!func_185(&((iParam1[iParam0->f_196 /*9*/])->f_7), 16))
				{
					func_186(&((iParam1[iParam0->f_196 /*9*/])->f_7), 32);
					func_187(&((iParam1[iParam0->f_196 /*9*/])->f_7), 16, 1);
				}
			}
			else if (!func_185(&((iParam1[iParam0->f_196 /*9*/])->f_7), 32))
			{
				func_186(&((iParam1[iParam0->f_196 /*9*/])->f_7), 16);
				func_187(&((iParam1[iParam0->f_196 /*9*/])->f_7), 32, 1);
			}
			if (!func_135(&(iParam0->f_5), 65536))
			{
				if (func_188((iParam1[iParam0->f_196 /*9*/])->f_5, 45f, 30f, (iParam1[iVar0 /*9*/])->f_8, 70f))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS((iParam1[iParam0->f_196 /*9*/])->f_5, true, false) };
					func_189(&(iParam0->f_5), 65536);
				}
			}
		}
		iParam0->f_196++;
		iVar0++;
	}
}

void func_75()
{
	int iVar0;

	if (func_135(&(Local_20.f_5), 131072))
	{
		return;
	}
	if (!func_135(&(Local_20.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_20.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 11:
			case 12:
			case 13:
			case 14:
				if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
				{
					func_190(&(Local_244[iVar0 /*9*/]), GET_HASH_KEY("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	func_189(&(Local_20.f_5), 131072);
}

void func_76(int iParam0)
{
	if (iParam0->f_195 == 0)
	{
		if (func_191(iParam0))
		{
		}
		if (func_192(Global_1888801[iParam0->f_205 /*35*/]) == 3)
		{
			if (func_156(Global_35, 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			}
		}
		func_193(iParam0);
	}
	if (!func_135(&(iParam0->f_5), 1073741824 /* Float: 2f */))
	{
		if (!func_194())
		{
			if (iParam0->f_3 >= 4 && iParam0->f_3 < 8)
			{
				func_195(iParam0, 1);
				func_196(iParam0, 1);
			}
		}
		else if (iParam0->f_3 >= 8)
		{
			func_195(iParam0, 0);
			func_197(0);
		}
	}
	if (iParam0->f_195 < 5)
	{
		iParam0->f_195++;
	}
	else
	{
		iParam0->f_195 = 0;
	}
}

void func_77()
{
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_80()
{
	return func_78(Global_1935630, 4096);
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_82(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_198(iParam0));
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 && iParam1) != 0;
}

int func_84()
{
	return Global_1897952.f_41;
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_199())
	{
		return;
	}
	sVar1 = func_200(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_201(iParam4))
	{
		if (func_43(iParam0))
		{
			iParam4 = func_203(func_202(iParam0));
		}
		else
		{
			iParam4 = func_203(iParam1);
		}
	}
	if (func_201(iParam4))
	{
		iVar3 = func_204(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_206(func_205(iParam2));
	}
	else if ((func_207(iParam1, 2) || func_208(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((func_43(iParam0) && func_35(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = func_116(func_121());
		iVar5 = func_117(func_121());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_209(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_210(&cVar6, GET_HASH_KEY("COLOR_PURE_WHITE")), sVar9, func_210(&cVar10, GET_HASH_KEY("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_209(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_210(&cVar6, GET_HASH_KEY("COLOR_PURE_WHITE")), func_210(&cVar10, GET_HASH_KEY("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_211(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_87(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_24() == 0)
	{
		return;
	}
	if (func_212(128))
	{
		return;
	}
	if (!func_213(iParam0))
	{
		return;
	}
	if (func_35(iParam0, 32))
	{
		return;
	}
	func_8(iParam0, 32);
	func_214(&Global_1935630, 8192);
	func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("AREAS")), 1);
	switch (func_202(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_216(func_215(GET_HASH_KEY("DISCOVERED"), GET_HASH_KEY("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_8(iParam0, 64);
	}
}

bool func_88()
{
	return (Global_1894899 & 1 != 0 && func_217() != -1);
}

void func_89()
{
	if (!func_218(Global_1327479))
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
	func_219(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_90(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_220() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_218(iVar1) && !func_221(iVar1, iParam2)) && (!bParam3 || !func_222(iVar1))) && (!bParam4 || !func_223(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_224(iVar0);
			}
		}
		iVar0++;
	}
}

void func_91(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 2);
	}
}

void func_93(bool bParam0)
{
}

void func_94(bool bParam0)
{
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_225(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_226(Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1]);
		Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1] = 0;
		iVar1++;
	}
}

void func_96(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319.f_3[iVar0 /*446*/].f_9 == iParam0)
		{
			func_227(iVar0);
		}
		iVar0++;
	}
}

void func_97(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 4);
	}
}

void func_99(bool bParam0)
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1360165)
	{
		if ((!func_228(iVar0) && !func_229(iVar0)) && iVar0 != Global_1357549.f_1497)
		{
			if ((!func_230(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_231(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

bool func_100(int iParam0, bool bParam1)
{
	switch (func_192(iParam0))
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

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 273461605;
		case 16:
			return -857964358;
		case 9:
			return -868076593;
		case 36:
			return 1205826474;
		case 127:
			return 2136753624;
		case 125:
			return -796902762;
		case 118:
			return 1360745816;
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

void func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_232(1497516462);
			func_233(2016141805);
			func_233(1010885152);
			func_233(-502324015);
			break;
		case 2016141805:
			func_233(1497516462);
			func_232(2016141805);
			func_233(1010885152);
			func_233(-502324015);
			break;
		case 1010885152:
			func_233(1497516462);
			func_233(2016141805);
			func_232(1010885152);
			func_233(-502324015);
			break;
		case -502324015:
			func_233(1497516462);
			func_233(2016141805);
			func_233(1010885152);
			func_232(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_233(-538889627);
			func_233(-538880323);
			func_233(-1056767524);
			func_232(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_234();
			func_232(iParam0);
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
			func_235();
			func_232(iParam0);
			break;
		case 2019386373:
			func_233(-664252410);
			func_233(2109952320);
			func_232(2019386373);
			break;
		case -664252410:
			func_233(2019386373);
			func_233(2109952320);
			func_232(-664252410);
			break;
		case 2109952320:
			func_233(2019386373);
			func_233(-664252410);
			func_232(2109952320);
			break;
		case -1674179981:
			func_233(-1835851517);
			func_233(-1838352012);
			func_232(-1674179981);
			break;
		case -1835851517:
			func_233(-1674179981);
			func_233(-1838352012);
			func_232(-1835851517);
			break;
		case -1838352012:
			func_233(-1674179981);
			func_233(-1835851517);
			func_232(-1838352012);
			break;
		case -1717960576:
			func_233(210001842);
			func_232(-1717960576);
			break;
		case 210001842:
			func_233(-1717960576);
			func_232(210001842);
			break;
		case -150493654:
			func_233(-1271608261);
			func_233(1846061697);
			func_233(-1145519186);
			func_232(-150493654);
			break;
		case -1271608261:
			func_233(-150493654);
			func_233(1846061697);
			func_233(-1145519186);
			func_232(-1271608261);
			break;
		case 1846061697:
			func_233(-150493654);
			func_233(-1271608261);
			func_233(-1145519186);
			func_232(1846061697);
			break;
		case -1145519186:
			func_233(-150493654);
			func_233(-1271608261);
			func_233(1846061697);
			func_232(-1145519186);
			break;
		case 1766284049:
			func_233(280705402);
			func_233(1926308480);
			func_232(1766284049);
			break;
		case 280705402:
			func_233(1766284049);
			func_233(1926308480);
			func_232(280705402);
			break;
		case 1926308480:
			func_233(1766284049);
			func_233(280705402);
			func_232(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_233(439465264);
				func_232(1609506757);
			}
			else
			{
				func_233(1609506757);
				func_233(439465264);
			}
			break;
		case 439465264:
			if (func_236(1609506757))
			{
				if (bParam1)
				{
					func_232(439465264);
				}
				else
				{
					func_233(439465264);
				}
			}
			break;
		case 1822001510:
			func_233(-1612662716);
			func_232(1822001510);
			break;
		case -1612662716:
			func_233(1822001510);
			func_232(-1612662716);
			break;
		case 1306158345:
			func_233(1952610440);
			func_233(-223469678);
			func_233(-404698347);
			func_233(1517904467);
			func_232(1306158345);
			break;
		case 1952610440:
			func_233(1306158345);
			func_233(-223469678);
			func_233(-404698347);
			func_233(1517904467);
			func_232(1952610440);
			break;
		case -223469678:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-404698347);
			func_233(1517904467);
			func_232(-223469678);
			break;
		case -404698347:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-223469678);
			func_233(1517904467);
			func_232(-404698347);
			Jump @2852; //curOff = 1526
			func_233(1306158345);
			func_233(1952610440);
			func_233(-223469678);
			func_233(-404698347);
			func_232(1517904467);
			Jump @2852; //curOff = 1574
			func_233(931649776);
			func_233(-434590080);
			func_233(1743048395);
			func_233(449774763);
			func_232(1376646519);
			Jump @2852; //curOff = 1622
			func_233(1376646519);
			func_233(-434590080);
			func_233(1743048395);
			func_233(449774763);
			func_232(931649776);
			Jump @2852; //curOff = 1670
			func_233(1376646519);
			func_233(931649776);
			func_233(1743048395);
			func_233(449774763);
			func_232(-434590080);
			Jump @2852; //curOff = 1718
			func_233(1376646519);
			func_233(931649776);
			func_233(-434590080);
			func_233(449774763);
			func_232(1743048395);
			Jump @2852; //curOff = 1766
			func_233(1376646519);
			func_233(931649776);
			func_233(-434590080);
			func_233(1743048395);
			func_232(449774763);
			Jump @2852; //curOff = 1814
			func_233(38162571);
			func_233(1350391819);
			func_233(54073871);
			func_232(-1414537028);
			Jump @2852; //curOff = 1853
			func_233(-1414537028);
			func_233(1350391819);
			func_233(54073871);
			func_232(38162571);
			Jump @2852; //curOff = 1892
			func_233(-1414537028);
			func_233(38162571);
			func_233(54073871);
			func_232(1350391819);
			Jump @2852; //curOff = 1931
			func_233(-1414537028);
			func_233(38162571);
			func_233(1350391819);
			func_232(54073871);
			Jump @2852; //curOff = 1970
			func_232(198200492);
			func_233(-1124061431);
			func_233(52706132);
			func_233(-259123672);
			Jump @2852; //curOff = 2009
			func_233(198200492);
			func_232(-1124061431);
			func_233(52706132);
			func_233(-259123672);
			Jump @2852; //curOff = 2048
			func_233(198200492);
			func_233(-1124061431);
			func_232(52706132);
			func_233(-259123672);
			Jump @2852; //curOff = 2087
			func_233(198200492);
			func_233(-1124061431);
			func_233(52706132);
			func_232(-259123672);
			Jump @2852; //curOff = 2126
			func_232(-919512195);
			func_233(-1925798111);
			func_233(420709909);
			func_233(1703426636);
			Jump @2852; //curOff = 2165
			func_232(-1925798111);
			func_233(-919512195);
			func_233(420709909);
			func_233(1703426636);
			Jump @2852; //curOff = 2204
			func_232(420709909);
			func_233(-919512195);
			func_233(-1925798111);
			func_233(1703426636);
			Jump @2852; //curOff = 2243
			func_232(1703426636);
			func_233(-919512195);
			func_233(-1925798111);
			func_233(420709909);
			Jump @2852; //curOff = 2282
			func_232(-1223121209);
			func_233(630808005);
			Jump @2852; //curOff = 2303
			func_232(630808005);
			func_233(-1223121209);
			Jump @2852; //curOff = 2324
			func_232(1453909576);
			func_233(1643531967);
			Jump @2852; //curOff = 2345
			func_232(1643531967);
			func_233(1453909576);
			Jump @2852; //curOff = 2366
			func_232(0);
			func_233(473295046);
			func_233(-1738165526);
			Jump @2852; //curOff = 2392
			func_232(473295046);
			func_233(0);
			func_233(-1738165526);
			Jump @2852; //curOff = 2418
			func_232(-1738165526);
			func_233(0);
			func_233(473295046);
			Jump @2852; //curOff = 2444
			func_232(932909855);
			func_233(2051822093);
			Jump @2852; //curOff = 2465
			func_232(2051822093);
			func_233(932909855);
			Jump @2852; //curOff = 2486
			func_232(405586984);
			func_233(1509509592);
			func_233(-959357075);
			func_233(-1311865656);
			Jump @2852; //curOff = 2525
			func_232(1509509592);
			func_233(405586984);
			func_233(-959357075);
			func_233(-1311865656);
			Jump @2852; //curOff = 2564
			func_232(-959357075);
			func_233(1509509592);
			func_233(405586984);
			func_233(-1311865656);
			Jump @2852; //curOff = 2603
			func_232(-1311865656);
			func_233(1509509592);
			func_233(-959357075);
			func_233(405586984);
			Jump @2852; //curOff = 2642
			if (bParam1)
			{
				func_232(-524145696);
			}
			else
			{
				func_233(-524145696);
			}
			func_233(1626481264);
			func_233(282809459);
			Jump @2852; //curOff = 2689
			func_232(282809459);
			func_233(1626481264);
			func_233(-524145696);
			Jump @2852; //curOff = 2719
			func_232(1626481264);
			func_233(-524145696);
			func_233(282809459);
			Jump @2852; //curOff = 2749
			if (bParam1)
			{
				func_232(885203519);
			}
			else
			{
				func_233(885203519);
			}
			Jump @2852; //curOff = 2778
			if (bParam1)
			{
				func_232(-1080627546);
			}
			else
			{
				func_233(-1080627546);
			}
			Jump @2852; //curOff = 2807
			if (bParam1)
			{
				if (!func_236(iParam0))
				{
					func_232(iParam0);
				}
			}
			else if (func_236(iParam0))
			{
				func_233(iParam0);
			}
		}

void func_103(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
	func_237(&Local_244, &Local_20, &uLocal_538, SCRIPTS::GET_ID_OF_THIS_THREAD(), "FORTM");
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_31() && !func_30(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

bool func_105()
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

int func_106(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_238(func_109(iParam0));
}

bool func_107(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_108(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_109(int iParam0)
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

int func_110(int iParam0)
{
	return iParam0 & 31;
}

bool func_111(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

int func_112(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_6;
	}
	return -15;
}

int func_113(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_239(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_114(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_115(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_116(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_117(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_118(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_119(int iParam0, int iParam1)
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

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_240(iParam0, iParam6);
	func_241(iParam0, iParam5);
	func_242(iParam0, iParam4);
	func_243(iParam0, iParam3);
	func_244(iParam0, iParam2);
	func_245(iParam0, iParam1);
}

int func_121()
{
	return Global_1899515;
}

bool func_122(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_246(iParam1) || !func_246(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_123(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

int func_124(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_125(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

int func_126(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_127(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

bool func_128(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	if (!func_123(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_129(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

Vector3 func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -4185.303f, -3414.666f, 36.088f;
				case 1:
					return -4183.363f, -3417f, 36.088f;
				case 2:
					return -4223.218f, -3513.264f, 36.0825f;
				case 3:
					return -4220.521f, -3511.443f, 36.0853f;
				case 4:
					return -4191.795f, -3438.381f, 36.088f;
				case 5:
					return -4193.48f, -3438.976f, 36.088f;
				case 6:
					return -4202.151f, -3448.898f, 36.0879f;
				case 7:
					return -4199.615f, -3448.947f, 36.0879f;
				case 8:
					return -4214.395f, -3442.828f, 36.0879f;
				case 9:
					return -4244.199f, -3476.454f, 36.0879f;
				case 10:
					return -4246.909f, -3475.4f, 36.0879f;
				case 11:
					return -4174.078f, -3422.861f, 41.5635f;
				case 12:
					return -4186.242f, -3417.56f, 41.5154f;
				case 13:
					return -4215.506f, -3503.066f, 41.6512f;
				case 14:
					return -4234.949f, -3425.885f, 44.4805f;
				case 15:
					return -4229.719f, -3454.22f, 36.0879f;
				case 16:
					return -4229.278f, -3460.126f, 36.0879f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -4248.017f, -3484.603f, 36.0854f;
				case 1:
					return -4227.841f, -3492.986f, 36.0879f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -4206.052f, -3461.478f, 44.3314f;
				case 1:
					return -4205.312f, -3462.005f, 44.3241f;
				case 2:
					return -4231.334f, -3456.103f, 36.1879f;
				case 3:
					return -4230.587f, -3455.087f, 36.0879f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -4194.434f, -3468.969f, 44.2737f;
				case 1:
					return -4194.979f, -3468.005f, 44.3203f;
				case 2:
					return -4230.731f, -3456.424f, 36.1879f;
				case 3:
					return -4246.011f, -3455.752f, 36.0854f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -4223.404f, -3462.209f, 43.5573f;
				case 1:
					return -4218.641f, -3464.778f, 43.5698f;
				case 2:
					return -4227.35f, -3467.501f, 36.1879f;
				case 3:
					return -4229.376f, -3462.732f, 36.0879f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 308.1447f;
				case 1:
					return -41.8553f;
				case 2:
					return 224.1447f;
				case 3:
					return 196.1447f;
				case 4:
					return 56.1447f;
				case 5:
					return 34.1447f;
				case 6:
					return 204.1447f;
				case 7:
					return 146.1447f;
				case 8:
					return 150.1447f;
				case 9:
					return 128.1447f;
				case 10:
					return 164.1447f;
				case 11:
					return 40.22f;
				case 12:
					return -45.36f;
				case 13:
					return 238.32f;
				case 14:
					return 50.4f;
				case 15:
					return 253.44f;
				case 16:
					return 148.2941f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 321.36f;
				case 1:
					return 3.08f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 148.2941f;
				case 1:
					return 148.2941f;
				case 2:
					return 148.2941f;
				case 3:
					return 148.2941f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 121.931f;
				case 1:
					return 121.931f;
				case 2:
					return 210.96f;
				case 3:
					return 121.931f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 148.2941f;
				case 1:
					return 148.2941f;
				case 2:
					return 133.8644f;
				case 3:
					return 151.92f;
			}
			break;
	}
	return 0f;
}

void func_132(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			iVar1 = iVar0;
			Jump @68; //curOff = 42
		}
		else if ((*uParam0)[iVar0] == iParam1)
		{
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		(*uParam0)[iVar1] = iParam1;
	}
}

void func_133()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < Local_20.f_199)
	{
		Var1 = { func_247(0, iVar0) };
		Local_244[iVar0 /*9*/].f_1 = { Var1 };
		Local_244[iVar0 /*9*/].f_4 = Var1.f_3;
		iVar0++;
	}
}

void func_134(int iParam0)
{
	Global_1898091 = (Global_1898091 - (Global_1898091 && iParam0));
}

bool func_135(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

Vector3 func_136(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 9:
			vVar0 = { 1897.123f, -1863.157f, 46.0415f };
			break;
		case 16:
			vVar0 = { -2205.06f, 704.86f, 107.62f };
			break;
		case 36:
			vVar0 = { -45.93f, 1230.82f, 175.19f };
			break;
		case 79:
			vVar0 = { 2351f, 1335.5f, 102.4f };
			break;
		case 125:
			vVar0 = { -3962.021f, -2137.957f, -5.9562f };
			break;
		case 127:
			vVar0 = { -1411.857f, -2333.451f, 42.1056f };
			break;
		case 118:
			vVar0 = { -4201.647f, -3440.702f, 47.5009f };
			break;
		case 129:
			vVar0 = { -5415.055f, -3654.25f, -13.4989f };
			break;
		case 114:
			vVar0 = { -5984.121f, -3249.982f, -22.5604f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, VOLUME::_GET_VOLUME_COORDS(func_248(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_137(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_138(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0->f_205)
	{
		case 79:
			sVar0 = "AZ_hideout_beaver_hollow";
			break;
		case 118:
			sVar0 = "AZ_hideout_fort_mercer";
			break;
		case 16:
			sVar0 = "AZ_hideout_hanging_dog_ranch";
			break;
		case 9:
			sVar0 = "AZ_hideout_shady_belle";
			break;
		case 36:
			sVar0 = "AZ_hideout_six_point_cabin";
			break;
		case 127:
			sVar0 = "AZ_hideout_thieves_landing";
			break;
		case 125:
			sVar0 = "AZ_hideout_Twin_Rocks";
			break;
		default:
			return;
	}
	if (func_135(&(iParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_189(&(iParam0->f_5), 262144);
	}
	else
	{
		func_249(&(iParam0->f_5), 262144);
	}
	AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, bParam1, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, true, true);
}

void func_139(var uParam0)
{
	func_251(uParam0, (func_250(uParam0) - 6f));
	func_252(uParam0, 1);
}

void func_140(var uParam0)
{
	func_253(uParam0, 0);
	func_254(uParam0, 0);
	func_142(uParam0, 1);
	func_255(uParam0, 1);
	func_256(uParam0, 0);
	func_257(uParam0, 1);
	func_258(uParam0, 1, 1, 1);
}

void func_141(var uParam0)
{
	func_259(uParam0, 1);
	func_58(uParam0, 1);
	func_56(uParam0, 1);
}

void func_142(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 256);
	}
	else
	{
		func_152(&(uParam0->f_1), 256);
	}
}

void func_143(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_144(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_145(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (*sParam0 <= 1)
	{
		return;
	}
	iVar0 = (*sParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		uVar2 = (*sParam0)[iVar1];
		(*sParam0)[iVar1] = (*sParam0)[iVar0];
		(*sParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_146(var uParam0)
{
	switch (uParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

bool func_147(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_107(iParam0))
	{
		return false;
	}
	return func_260(Global_1347702[iParam0 /*49*/].f_15);
}

void func_148(var uParam0)
{
}

void func_149(var uParam0)
{
	uParam0->f_136.f_9 = { 0f, 0f, 0f };
	uParam0->f_136.f_12 = 1;
	uParam0->f_136.f_13 = 30f;
	uParam0->f_136.f_14 = 100f;
	uParam0->f_136.f_15 = -1;
	uParam0->f_136.f_16 = 1500;
	uParam0->f_136.f_17 = 1000;
	uParam0->f_136.f_6 = 25f;
}

void func_150(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	switch (uParam0->f_205)
	{
		case 79:
			iVar0 = GET_HASH_KEY("INBRED");
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = GET_HASH_KEY("ODRISCOLLS");
			}
			else
			{
				iVar0 = GET_HASH_KEY("RANCHERS");
			}
			break;
		case 9:
			iVar0 = GET_HASH_KEY("EX_CONFED");
			break;
		case 36:
			iVar0 = GET_HASH_KEY("ODRISCOLLS");
			break;
		case 125:
			iVar0 = GET_HASH_KEY("BANDITOS");
			break;
		case 127:
			iVar0 = GET_HASH_KEY("BANDITOS");
			break;
		default:
			uParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { func_215(GET_HASH_KEY("KILLED"), iVar0) };
		STATS::STAT_ID_GET_INT(&Var1, &(uParam0->f_200));
	}
}

void func_151(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_261(uParam0, iParam1, sParam2))
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

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_154(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			func_262(uParam1);
			func_263(uParam2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3) || func_264(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!func_265(uParam1))
			{
				return 0;
			}
			if (!func_266(uParam2))
			{
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				if (!HUD::TEXT_BLOCK_IS_LOADED(sParam3))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

void func_155(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = func_267(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_185(&(uParam0->f_7), 2))
	{
		if (func_185(&(uParam0->f_7), 8))
		{
			iVar0 = func_267(GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_ONTO_MOUNT(uParam0->f_5, iVar0, -1, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, iParam1);
		if (func_185(&(uParam0->f_7), 4))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, 1, false, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		func_268(uParam0->f_5, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
}

bool func_156(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_1(iParam0, iParam1);
}

void func_157(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_269(iParam3, 1);
	bVar1 = func_269(iParam3, 2);
	bVar2 = !func_269(iParam3, 4);
	bVar3 = func_269(iParam3, 8);
	bVar4 = !func_269(iParam3, 16);
	bVar5 = func_269(iParam3, 32);
	bVar6 = func_269(iParam3, 64);
	return func_270(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_159(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_160()
{
	int iVar0;

	if (MISC::IS_BULLET_IN_AREA(-4185.43f, -3416.938f, 45.6745f, 10f, true))
	{
		if (func_156(Local_244[12 /*9*/].f_5, 0, 1) && !func_271(Local_244[12 /*9*/].f_5, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COWER(0, 3500, 0, 0);
			func_272(Local_244[12 /*9*/].f_5, &iVar0, 0f, 0f, 1, 1);
		}
	}
}

bool func_161()
{
	int iVar0;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) > 25f && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_2), Global_36, false) > 25f)
	{
		return false;
	}
	Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 0, 3);
	if (Local_20.f_190 < 0 || PED::CAN_PED_SEE_ENTITY(Local_244[Local_20.f_190 /*9*/].f_5, Global_35, true, false) != 1)
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) < 25f)
	{
		Local_20.f_190 = 0;
	}
	else
	{
		Local_20.f_190 = 3;
	}
	Local_20.f_192 = Local_244[Local_20.f_190 /*9*/].f_5;
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(Local_20.f_192, "", 24f, 0f, 8, 0f, 0f, 0, false, -1);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_2, true, 0) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_3, true, 0))
	{
		if (func_162(5, 100))
		{
			func_170(Local_20.f_192, Global_35, "ITS_MALE_EXTREME_RECOGNIZE", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_170(Local_20.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_274(&uLocal_553, 0);
		}
	}
	func_275(Local_20.f_192, Global_36, 3, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 6000, -1f, -1f, -1f);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_20.f_192, true, false), 30f, 0, false, false, false, false);
	func_272(Local_20.f_192, &iVar0, 0, 0, 1, 1);
	func_276(Local_20.f_205);
	func_277();
	return true;
}

bool func_162(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_278(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_279(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_163()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_20.f_199)
	{
		if (func_280(iVar0))
		{
		}
		iVar0++;
	}
	func_164(&Local_20, 5);
	func_171(&uLocal_553);
	func_65(1);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
}

void func_164(int iParam0, int iParam1)
{
	if (iParam1 == iParam0->f_3)
	{
	}
	iParam0->f_3 = iParam1;
}

void func_165()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_20.f_199 - 1))
	{
		if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_244[iVar0 /*9*/].f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

bool func_166()
{
	if (!func_281(Global_35, Local_15, 1, 0))
	{
		return false;
	}
	Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 0, 14);
	if (Local_20.f_190 < 0)
	{
		return false;
	}
	Local_20.f_192 = Local_244[Local_20.f_190 /*9*/].f_5;
	return true;
}

void func_167(int iParam0)
{
	uLocal_567 = (uLocal_567 || iParam0);
}

bool func_168(int iParam0)
{
	return (uLocal_567 && iParam0) != 0;
}

bool func_169()
{
	float fVar0;

	if (func_168(2))
	{
		return false;
	}
	if (func_282(Global_35, Local_15, 0, 1))
	{
		if (func_283())
		{
			return true;
		}
	}
	else
	{
		fVar0 = func_173(Local_20.f_192, Global_35, 1, 1);
		if (fVar0 < 10f || func_284(&uLocal_553, 10f))
		{
			return true;
		}
		if (func_284(&uLocal_553, 10f))
		{
			if ((fVar0 < 10f && PED::IS_PED_FACING_PED(Global_35, Local_20.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_20.f_192))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_170(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_285(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_171(var uParam0)
{
	func_286(uParam0, 0f);
}

bool func_172()
{
	int iVar0;
	int iVar1;

	switch (iLocal_562)
	{
		case 0:
			if (func_156(Local_20.f_192, 0, 1))
			{
				func_287(Local_20.f_192, Global_35, -1);
				func_274(&uLocal_556, 1);
				func_288(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_20.f_192, Global_35, 60f) || func_284(&uLocal_556, 2f))
			{
				func_171(&uLocal_556);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_20.f_192, Global_35, 8000, false, 1);
				func_170(Local_20.f_192, 0, "HEADS_UP_THREATEN", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_288(2);
			}
			break;
		case 2:
			iVar1 = (Local_20.f_199 - 1);
			iVar0 = 0;
			while (iVar0 <= iVar1)
			{
				func_289(&Local_20, &Local_244, iVar0, "", "", 0, 1, 0, 0);
				iVar0++;
			}
			if (func_284(&uLocal_556, 2f))
			{
				func_288(3);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

float func_173(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_174(bool bParam0)
{
	if (!func_290(bParam0))
	{
		return bParam0->f_1;
	}
	if (func_291(bParam0))
	{
		return bParam0->f_2;
	}
	return (func_292() - bParam0->f_1);
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iLocal_563)
	{
		case 0:
			func_274(&uLocal_559, 0);
			iLocal_563 = 1;
			break;
		case 1:
			if (func_284(&uLocal_559, 16f))
			{
				iVar1 = 0;
				while (iVar1 < Local_20.f_199)
				{
					if (func_156(Local_244[iVar1 /*9*/].f_5, 0, 1) && func_293(Global_35, Local_244[iVar1 /*9*/].f_5) < 20f)
					{
						if (iVar0 < 3)
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						}
						else
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(3, 8);
						}
						func_170(Local_244[iVar1 /*9*/].f_5, 0, sLocal_544[iVar0], "", -1f, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_563 = 2;
					}
					else
					{
						iVar1++;
					}
				}
			}
			break;
		case 2:
			func_274(&uLocal_559, 1);
			iLocal_563 = 0;
			break;
	}
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_156((iParam0[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_177()
{
	int iVar0;

	switch (iLocal_566)
	{
		case 0:
			if ((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0) && func_294(Global_35, -4183.556f, -3415.047f, 36.0861f, 1) > 50f) && func_294(Global_35, -4218.61f, -3514.725f, 36.0157f, 1) > 50f)
			{
				iVar0 = 0;
				while (iVar0 < Local_20.f_199)
				{
					if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 30, true);
					}
					iVar0++;
				}
				iLocal_566++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0) || func_294(Global_35, -4219.153f, -3462.083f, 43.7362f, 1) < 85f)
			{
				iVar0 = 0;
				while (iVar0 < Local_20.f_199)
				{
					if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_244[iVar0 /*9*/].f_5, 30, false);
					}
					iVar0++;
				}
				iLocal_566 = 0;
			}
			break;
	}
}

void func_178()
{
	int iVar0;

	switch (iLocal_565)
	{
		case 0:
			if (Local_20.f_198 < 9)
			{
				iVar0 = 0;
				while (iVar0 < Local_20.f_199)
				{
					if (func_156(Local_244[iVar0 /*9*/].f_5, 0, 1))
					{
						PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_244[iVar0 /*9*/].f_5, Local_15, 0, false, 0);
					}
					iVar0++;
				}
				iLocal_565++;
			}
			break;
		case 1:
			break;
	}
}

bool func_179()
{
	switch (iLocal_564)
	{
		case 0:
			if (func_282(Global_35, Local_15.f_3, 0, 1))
			{
				if (func_156(Local_244[11 /*9*/].f_5, 0, 1))
				{
					TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(Local_244[11 /*9*/].f_5, -4179.8f, -3431.705f, 41.5212f, 4f);
				}
				func_295(1);
			}
			break;
		case 1:
			if (func_282(Global_35, Local_15.f_4, 0, 1))
			{
				func_64();
				func_296();
				func_295(2);
			}
			break;
		case 2:
			func_297();
			func_298();
			if (func_299())
			{
				func_295(3);
			}
			break;
		case 3:
			func_295(5);
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_180(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_300(iParam1, iParam0))
	{
		return false;
	}
	if (!func_135(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		func_301(iParam0);
		func_302(iParam0);
		if (bParam4)
		{
			func_303(iParam0->f_205, bParam3, 0);
		}
		func_138(iParam0, 0);
		func_189(&(iParam0->f_5), 256);
		func_189(&(iParam0->f_5), 8);
	}
	return true;
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_304(iParam1->f_205) && !func_78(Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST((iParam0[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((iParam0[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					func_305(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_306((iParam1[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG((iParam1[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = (iParam1[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return true;
		}
		else if (func_307(iParam0, iParam1[iVar0 /*9*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	bVar1 = func_135(&(iParam1->f_5), 128);
	iVar0 = 0;
	while (iVar0 < iParam1->f_199)
	{
		func_308(iParam0[iVar0 /*9*/], iParam1->f_202, iParam2, &(iParam1->f_211), iParam3, bVar1);
		iVar0++;
	}
}

float func_184(int iParam0)
{
	return 18f;
}

bool func_185(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_187(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

bool func_188(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_294(iParam0, Global_36, 1);
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

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_190(var uParam0, int iParam1, int iParam2)
{
	if (!func_156(uParam0->f_5, 0, 0) || DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		func_309(&(uParam0->f_6));
	}
	uParam0->f_6 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, iParam2);
	}
}

bool func_191(int iParam0)
{
	if (!func_135(&(iParam0->f_5), 1024))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0->f_215, Global_36))
		{
			if (func_156(Global_35, 0, 1))
			{
				func_310(iParam0, 1);
				func_189(&(iParam0->f_5), 1024);
				return true;
			}
		}
	}
	else if (!VOLUME::IS_POINT_IN_VOLUME(iParam0->f_215, Global_36) && func_192(Global_1888801[iParam0->f_205 /*35*/]) != 3)
	{
		if (func_156(Global_35, 0, 1))
		{
			func_310(iParam0, 0);
			func_249(&(iParam0->f_5), 1024);
			return true;
		}
	}
	return false;
}

int func_192(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_311(iParam0);
}

void func_193(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_312(302))
	{
		return;
	}
	if (func_28() == iParam0->f_205)
	{
		return;
	}
	if (!func_313(iParam0->f_205))
	{
		return;
	}
	if (func_25(32, 0, 1))
	{
		return;
	}
	if (func_34(83, 0))
	{
		return;
	}
	if (!func_5(iParam0->f_205, 0))
	{
		return;
	}
	if (func_135(&(iParam0->f_5), 1024))
	{
		if (func_314(iParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_315(302, &iVar0, &iVar1);
			func_316(iVar0, iVar1);
			func_317(&iVar0, &iVar1);
			func_318("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_194()
{
	return func_319(2);
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_320(iParam0, 1);
		func_321(2);
	}
	else
	{
		if (func_319(2))
		{
			func_320(iParam0, 0);
		}
		func_134(2);
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_135(&(iParam0->f_5), 32768))
		{
			LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
			func_189(&(iParam0->f_5), 32768);
		}
	}
	else if (func_135(&(iParam0->f_5), 32768))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		func_249(&(iParam0->f_5), 32768);
	}
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		if (!func_322())
		{
			func_321(8);
		}
	}
	else if (func_322())
	{
		func_134(8);
	}
}

bool func_198(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_31())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_199()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_323())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_25(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_200(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_324(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_326(func_325(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_327(iParam0) || func_328(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case GET_HASH_KEY("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case GET_HASH_KEY("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_202(int iParam0)
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
	else if (iParam0 <= 116)
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

int func_203(int iParam0)
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

int func_204(int iParam0)
{
	if (!func_201(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42266[iParam0 /*12*/];
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("WATER_AURORA_BASIN"):
			return 0;
		case GET_HASH_KEY("WATER_BARROW_LAGOON"):
			return 0;
		case GET_HASH_KEY("WATER_BAYOU_NWA"):
			return 2;
		case GET_HASH_KEY("WATER_BEARTOOTH_BECK"):
			return 1;
		case GET_HASH_KEY("WATER_CAIRN_LAKE"):
			return 0;
		case GET_HASH_KEY("WATER_CALMUT_RAVINE"):
			return 0;
		case GET_HASH_KEY("WATER_CATTIAL_POND"):
			return 0;
		case GET_HASH_KEY("WATER_DAKOTA_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_DEADBOOT_CREEK"):
			return 1;
		case GET_HASH_KEY("WATER_DEWBERRY_CREEK"):
			return 1;
		case GET_HASH_KEY("WATER_ELYSIAN_POOL"):
			return 0;
		case GET_HASH_KEY("WATER_FLAT_IRON_LAKE"):
			return 0;
		case GET_HASH_KEY("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case GET_HASH_KEY("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case GET_HASH_KEY("WATER_HOT_SPRINGS"):
			return 0;
		case GET_HASH_KEY("WATER_KAMASSA_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_LAKE_DON_JULIO"):
			return 0;
		case GET_HASH_KEY("WATER_LAKE_ISABELLA"):
			return 0;
		case GET_HASH_KEY("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_MATTLOCK_POND"):
			return 0;
		case GET_HASH_KEY("WATER_MOONSTONE_POND"):
			return 0;
		case GET_HASH_KEY("WATER_O_CREAGHS_RUN"):
			return 0;
		case GET_HASH_KEY("WATER_OWANJILA"):
			return 0;
		case GET_HASH_KEY("WATER_RINGNECK_CREEK"):
			return 1;
		case GET_HASH_KEY("WATER_SAN_LUIS_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_SEA_OF_CORONADO"):
			return 1;
		case GET_HASH_KEY("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case GET_HASH_KEY("WATER_SPIDER_GORGE"):
			return 1;
		case GET_HASH_KEY("WATER_STILLWATER_CREEK"):
			return 1;
		case GET_HASH_KEY("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case GET_HASH_KEY("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_207(int iParam0, int iParam1)
{
	if (!func_329(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888.f_42339[iParam0] && iParam1) != 0;
}

bool func_208(int iParam0, int iParam1)
{
	if (!func_201(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1058888.f_42266[iParam0 /*12*/].f_5 && iParam1) != 0;
}

float func_209(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_210(char* sParam0, int iParam1)
{
	if (iParam1 == GET_HASH_KEY("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_330(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_211(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_212(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_213(int iParam0)
{
	int iVar0;

	if (func_327(iParam0))
	{
		if (!func_328(45))
		{
			return false;
		}
	}
	iVar0 = func_202(iParam0);
	if (func_331())
	{
		if (!func_100(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_215(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_216(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_217()
{
	return Global_1894899.f_2;
}

bool func_218(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_219(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_220()
{
	return Global_1310750.f_16037;
}

bool func_221(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_222(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	if (func_332(64) && func_333(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_223(int iParam0)
{
	if (!func_218(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_224(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_218(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_334(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

int func_225(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1392240.f_1[iVar0 /*18*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_226(int iParam0)
{
	if (func_335(iParam0) && func_336())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_227(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_47(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_337(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		func_338(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936(Global_1914319.f_3[iParam0 /*446*/].f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);
	}
	func_339(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	func_340(iParam0, 536870912);
	iVar1 = func_341(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_226(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = 0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
	{
		UIFEED::_0x2F901291EF177B02(Global_1914319.f_3[iParam0 /*446*/].f_440, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	func_342(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_343(iParam0, 0);
}

bool func_228(int iParam0)
{
	return func_344(iParam0, 16, 1);
}

bool func_229(int iParam0)
{
	return func_230(iParam0, 32, 1);
}

bool func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return false;
		}
	}
	func_346(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_231(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_347(iParam0)))
	{
		func_348(iParam0, 4, 1);
		func_348(iParam0, 17, 1);
		func_348(iParam0, 1, 1);
		func_348(iParam0, 2, 1);
		return;
	}
	if (!func_349(iParam0))
	{
		return;
	}
	if (func_229(iParam0) && !bParam2)
	{
		return;
	}
	if (func_228(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549.f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_347(iParam0))) && func_350(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_348(iParam0, 4, 1);
	func_348(iParam0, 17, 1);
	func_348(iParam0, 1, 1);
	func_348(iParam0, 2, 1);
	func_351(iParam0, func_347(iParam0));
	func_352(iParam0, 1, 1, 1, bParam4);
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_353(iParam0, 1);
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

void func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_353(iParam0, 1);
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

void func_234()
{
	func_233(-939420910);
	func_233(-1187950766);
	func_233(356365161);
	func_233(753127042);
	func_233(-2038424081);
	func_233(1884271742);
	func_233(459290420);
}

void func_235()
{
	func_233(704802028);
	func_233(588987611);
	func_233(2008888900);
	func_233(1649996811);
	func_233(227918160);
	func_233(168171957);
	func_233(1193080109);
	func_233(-491981251);
	func_233(-639037538);
	func_233(-618620429);
}

bool func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_353(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_237(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_135(&(iParam1->f_5), 8) && !func_135(&(iParam1->f_5), 4))
	{
		iVar0 = func_36(iParam1->f_205);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_260(iVar0))
			{
				if (!func_135(&(iParam1->f_5), 4096))
				{
					func_354(iParam1, 1);
					func_189(&(iParam1->f_5), 4096);
				}
				func_355(iParam1->f_205);
			}
		}
		else if (func_260(iVar0))
		{
			func_354(iParam1, 0);
			func_356(iParam1->f_205, iParam1->f_198);
			func_189(&(iParam1->f_5), 4);
		}
	}
	func_138(iParam1, 0);
	func_196(iParam1, 0);
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		func_309(&((iParam0[iVar1 /*9*/])->f_6));
		if ((CAM::IS_SCREEN_FADED_OUT() || (func_173((iParam0[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 60f && ENTITY::IS_ENTITY_OCCLUDED((iParam0[iVar1 /*9*/])->f_5))) || func_173((iParam0[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 100f)
		{
			func_357(&((iParam0[iVar1 /*9*/])->f_5));
		}
		iVar1++;
	}
	func_358(&(iParam1->f_214), 1, 1);
	func_359(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::_TEXT_BLOCK_DELETE(sParam4);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_360(&uVar2, 0);
	if (VOLUME::DOES_VOLUME_EXIST(iParam1->f_215))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_215);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_215);
		VOLUME::_DELETE_VOLUME(iParam1->f_215);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam1->f_216))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_216);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_216);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(func_248(iParam1->f_205)))
	{
		POPULATION::_0xA1CFB35069D23C23(func_248(iParam1->f_205));
		POPULATION::_0x74C2B3DC0B294102(func_248(iParam1->f_205));
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	func_195(iParam1, 0);
	func_197(0);
	func_361(&Global_1935630, 32);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_238(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_239(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_240(int iParam0, int iParam1)
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

void func_241(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_114(*iParam0);
	iVar1 = func_113(*iParam0);
	if (iParam1 < 1 || iParam1 > func_119(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_243(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_244(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_245(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_246(int iParam0)
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
	iVar0 = func_118(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_117(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_116(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_113(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_114(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_115(iParam0);
	if (iVar5 < 1 || iVar5 > func_119(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

struct<4> func_247(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_130(iParam0, iParam1) };
	Var0.f_3 = func_131(iParam0, iParam1);
	return Var0;
}

int func_248(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_250(var uParam0)
{
	return uParam0->f_24;
}

void func_251(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_252(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 1);
	}
	else
	{
		func_153(uParam0, 1);
	}
}

void func_253(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 16384);
	}
	else
	{
		func_152(&(uParam0->f_1), 16384);
	}
}

void func_254(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 2048);
	}
	else
	{
		func_152(&(uParam0->f_1), 2048);
	}
}

void func_255(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 16);
	}
	else
	{
		func_153(uParam0, 67108864);
		func_153(uParam0, 16);
	}
}

void func_256(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 128);
	}
	else
	{
		func_152(&(uParam0->f_1), 128);
	}
}

void func_257(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 256);
	}
	else
	{
		func_153(uParam0, 256);
	}
}

void func_258(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_152(uParam0, 268435456);
	}
	else
	{
		func_153(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_152(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_153(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_152(uParam0, 536870912);
	}
	else
	{
		func_153(uParam0, 536870912);
	}
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 512);
	}
	else
	{
		func_153(uParam0, 512);
	}
}

bool func_260(int iParam0)
{
	int iVar0;

	iVar0 = func_192(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_261(var uParam0, int iParam1, char* sParam2)
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

void func_262(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_263(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0], false);
		}
		iVar0++;
	}
}

bool func_264(char* sParam0, char* sParam1)
{
	void fVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		fVar0 = HUD::TEXT_BLOCK_REQUEST(sParam0);
		if (fVar0 == 0)
		{
			return false;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	fVar0 = HUD::TEXT_BLOCK_REQUEST(sParam1);
	if (fVar0 == 0)
	{
		return false;
	}
	return true;
}

bool func_265(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar0]))
		{
			iVar1 = 1;
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_266(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0 && !STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_267(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_362(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_269(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_270(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_363(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_363(iVar4) && iVar4 != iVar0)
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
	if (func_24() == -1 && !func_364(iVar0))
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
				if (func_364(GET_HASH_KEY("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_363(iVar0))
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
		func_365(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_366(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_367(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_271(int iParam0, int iParam1)
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

void func_272(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_273(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam5 == 0)
	{
		if (iParam1->f_199 > 0)
		{
			iParam5 = (iParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = func_368((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam1->f_191 == -1)
	{
		iParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam1->f_191 > ((iParam4 + iVar2) - 1) || iParam1->f_191 < iParam4)
		{
			iParam1->f_191 = iParam4;
		}
		if (!func_369((iParam0[iParam1->f_191 /*9*/])->f_5) || bParam3)
		{
			if (func_370((iParam0[iParam1->f_191 /*9*/])->f_5, &(iParam1->f_155), &(iParam1->f_183), 0))
			{
				if (bParam2)
				{
					func_190(iParam0[iParam1->f_191 /*9*/], GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		else if (func_369((iParam0[iParam1->f_191 /*9*/])->f_5))
		{
			if (func_173((iParam0[iParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((iParam0[iParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					func_190(iParam0[iParam1->f_191 /*9*/], GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		iParam1->f_191++;
		iVar0++;
	}
	return -1;
}

void func_274(var uParam0, bool bParam1)
{
	if (bParam1 || !func_290(uParam0))
	{
		func_171(uParam0);
	}
}

void func_275(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_1(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
		return;
	}
	if (func_159(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 6:
			PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iParam0, vParam1, iParam6, false);
			break;
		case 4:
			PED::_SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(iParam0, vParam1);
			break;
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam0);
			break;
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iParam0);
			break;
	}
}

void func_276(int iParam0)
{
	if (!func_43(iParam0))
	{
		return;
	}
}

void func_277()
{
	int iVar0[17];
	int iVar18;
	int iVar19;

	iVar18 = 0;
	while (iVar18 < iVar0)
	{
		iVar0[iVar18] = -1;
		iVar18++;
	}
	func_371(&Local_244, ENTITY::GET_ENTITY_COORDS(Local_20.f_192, false, false), &iVar0, 0, iLocal_569, 20f, 1);
	iVar18 = 0;
	while (iVar18 < iVar0)
	{
		if ((iVar0[iVar18] != -1 && Local_244[iVar0[iVar18] /*9*/].f_5 != Local_20.f_192) && func_156(Local_244[iVar0[iVar18] /*9*/].f_5, 0, 1))
		{
			func_275(Local_244[iVar0[iVar18] /*9*/].f_5, Global_36, 3, 1, 2);
			TASK::OPEN_SEQUENCE_TASK(&iVar19);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			func_272(Local_244[iVar0[iVar18] /*9*/].f_5, &iVar19, 0.5f, 1.2f, 1, 1);
		}
		iVar18++;
	}
}

bool func_278(int iParam0, bool bParam1)
{
	if (!func_372(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

bool func_280(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_244[iVar0 /*9*/].f_5, false, true);
			func_373(&(Local_244[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			break;
		case 2:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_244[iVar0 /*9*/].f_5, false, true);
			func_373(&(Local_244[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			break;
		case 16:
			func_373(&(Local_244[iVar0 /*9*/]), 0, 0, 1, 0, 0);
			break;
		default:
			func_373(&(Local_244[iVar0 /*9*/]), 0, 1, 1, 0, 0);
			break;
	}
	return true;
}

bool func_281(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_282(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_283()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_GET_VOLUME_COORDS(Local_15.f_3), Global_36, false) < 25f)
	{
		Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 0, 1);
	}
	else
	{
		Local_20.f_190 = func_273(&Local_244, &Local_20, 0, 0, 2, 3);
	}
	if (Local_20.f_190 < 0)
	{
		return false;
	}
	else
	{
		Local_20.f_192 = Local_244[Local_20.f_190 /*9*/].f_5;
		func_374(&(Local_244[Local_20.f_190 /*9*/]), GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
		return true;
	}
	return false;
}

bool func_284(bool bParam0, float fParam1)
{
	if (!func_290(bParam0))
	{
		return false;
	}
	if (func_174(bParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_285(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_88())
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
				if (func_375(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_173(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_171(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_376(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_239(func_377(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_286(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_292() - fParam1);
	func_378(uParam0, 1);
	func_379(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_287(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1f);
	return 1;
}

void func_288(int iParam0)
{
	iLocal_562 = iParam0;
}

void func_289(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (((iParam1[iParam2 /*9*/])->f_5 == iParam0->f_192 && !bParam8) || !func_156((iParam1[iParam2 /*9*/])->f_5, 0, 1))
	{
		return;
	}
	func_380(iParam1, iParam2, &fVar1, &fVar2);
	func_275((iParam1[iParam2 /*9*/])->f_5, Global_36, 2, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_185(&((iParam1[iParam2 /*9*/])->f_7), 32) || func_369((iParam1[iParam2 /*9*/])->f_5))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			if (bParam7)
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else if (func_381())
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 8f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 0, 0f, false, 0, false, 0, false);
			}
		}
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1f, -1f, -1f);
		if ((func_381() || bParam6) && !func_185(&((iParam1[iParam2 /*9*/])->f_7), 16))
		{
			PED::SET_PED_CONFIG_FLAG((iParam1[iParam2 /*9*/])->f_5, 246, true);
			TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 1);
		}
	}
	else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((iParam1[iParam2 /*9*/])->f_5))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1f, -1f, -1f);
		func_382((iParam1[iParam2 /*9*/])->f_5, Global_35, 500, 0, 1, 1);
	}
	if (bParam5)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	}
	func_272((iParam1[iParam2 /*9*/])->f_5, &iVar0, fVar1, fVar2, 1, 1);
}

bool func_290(bool bParam0)
{
	return func_383(*bParam0, 1);
}

bool func_291(bool bParam0)
{
	return func_383(*bParam0, 2);
}

float func_292()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_293(int iParam0, int iParam1)
{
	return func_173(iParam0, iParam1, 1, 1);
}

float func_294(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_295(int iParam0)
{
	iLocal_564 = iParam0;
}

int func_296()
{
	int iVar0;
	int iVar1;

	if (func_156(Local_244[10 /*9*/].f_5, 0, 1))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_244[10 /*9*/].f_5, false);
		PED::SET_PED_COMBAT_RANGE(Local_244[10 /*9*/].f_5, 2);
		PED::SET_PED_ACCURACY(Local_244[10 /*9*/].f_5, 100);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_ENTER_VEHICLE(0, Local_472[0 /*14*/].f_9, 20000, -1, 2f, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		func_272(Local_244[10 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_FIRING_PATTERN(Local_244[10 /*9*/].f_5, GET_HASH_KEY("FIRING_PATTERN_FULL_AUTO"));
		CAM::_0x986F7A51EE3E1F92(Local_244[10 /*9*/].f_5, 1);
	}
	if (func_156(Local_244[9 /*9*/].f_5, 0, 1))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_244[9 /*9*/].f_5, false);
		PED::SET_PED_COMBAT_RANGE(Local_244[9 /*9*/].f_5, 2);
		PED::SET_PED_ACCURACY(Local_244[9 /*9*/].f_5, 100);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_ENTER_VEHICLE(0, Local_472[1 /*14*/].f_9, 20000, -1, 2f, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		func_272(Local_244[9 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
		PED::SET_PED_FIRING_PATTERN(Local_244[9 /*9*/].f_5, GET_HASH_KEY("FIRING_PATTERN_FULL_AUTO"));
		CAM::_0x986F7A51EE3E1F92(Local_244[9 /*9*/].f_5, 1);
	}
	return 1;
}

void func_297()
{
	if ((((func_156(Local_244[10 /*9*/].f_5, 0, 1) && !func_271(Local_244[10 /*9*/].f_5, -1794415470)) && !func_271(Local_244[10 /*9*/].f_5, 538064912)) && !func_271(Local_244[10 /*9*/].f_5, 780511057)) && !PED::IS_PED_IN_VEHICLE(Local_244[10 /*9*/].f_5, Local_472[0 /*14*/].f_9, true))
	{
		TASK::TASK_COMBAT_PED(Local_244[10 /*9*/].f_5, Global_35, 0, 0);
	}
	if ((((func_156(Local_244[9 /*9*/].f_5, 0, 1) && !func_271(Local_244[9 /*9*/].f_5, -1794415470)) && !func_271(Local_244[9 /*9*/].f_5, 538064912)) && !func_271(Local_244[9 /*9*/].f_5, 780511057)) && !PED::IS_PED_IN_VEHICLE(Local_244[9 /*9*/].f_5, Local_472[1 /*14*/].f_9, true))
	{
		TASK::TASK_COMBAT_PED(Local_244[9 /*9*/].f_5, Global_35, 0, 0);
	}
}

void func_298()
{
	int iVar0;
	int iVar1;

	if ((func_156(Local_244[10 /*9*/].f_5, 0, 1) && PED::IS_PED_IN_VEHICLE(Local_244[10 /*9*/].f_5, Local_472[0 /*14*/].f_9, false)) && !func_185(&(Local_244[10 /*9*/].f_7), 256))
	{
		if (func_173(Global_35, Local_244[10 /*9*/].f_5, 0, 0) < 10f || !PED::IS_PED_FACING_PED(Local_244[10 /*9*/].f_5, Global_35, 30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(0, GET_HASH_KEY("GROUP_REPEATER"), false, 0, true, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_272(Local_244[10 /*9*/].f_5, &iVar0, 0, 0, 1, 1);
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_244[10 /*9*/].f_5, Local_15, 0, false, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_244[10 /*9*/].f_5, 1);
			func_187(&(Local_244[10 /*9*/].f_7), 256, 0);
		}
	}
	if ((func_156(Local_244[9 /*9*/].f_5, 0, 1) && PED::IS_PED_IN_VEHICLE(Local_244[9 /*9*/].f_5, Local_472[1 /*14*/].f_9, false)) && !func_185(&(Local_244[9 /*9*/].f_7), 256))
	{
		if (func_173(Global_35, Local_244[9 /*9*/].f_5, 0, 0) < 10f || !PED::IS_PED_FACING_PED(Local_244[9 /*9*/].f_5, Global_35, 30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(0, GET_HASH_KEY("GROUP_REPEATER"), false, 0, true, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_272(Local_244[9 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(Local_244[9 /*9*/].f_5, Local_15, 0, false, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_244[9 /*9*/].f_5, 1);
			func_187(&(Local_244[9 /*9*/].f_7), 256, 0);
		}
	}
}

bool func_299()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_472[0 /*14*/].f_9, false))
	{
		if (func_384(0))
		{
			return true;
		}
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_472[1 /*14*/].f_9, false))
	{
		if (func_384(1))
		{
			return true;
		}
	}
	return false;
}

bool func_300(int iParam0, int iParam1)
{
	if (!func_135(&(iParam1->f_5), 33554432))
	{
		if (func_385(iParam0) <= 0)
		{
			func_189(&(iParam1->f_5), 33554432);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	iVar2 = 0;
	switch (iParam0->f_205)
	{
		case 9:
			iVar0 = 100;
			iVar1 = 150;
			iVar2 = GET_HASH_KEY("EX_CONFED");
			break;
		case 16:
			iVar0 = 100;
			iVar1 = 150;
			if (!func_31())
			{
				iVar2 = GET_HASH_KEY("ODRISCOLLS");
			}
			else
			{
				iVar2 = GET_HASH_KEY("SAVAGES");
			}
			break;
		case 36:
			iVar0 = 75;
			iVar1 = 100;
			iVar2 = GET_HASH_KEY("ODRISCOLLS");
			break;
		case 79:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = GET_HASH_KEY("INBRED");
			break;
		case 125:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = GET_HASH_KEY("BANDITOS");
			break;
		case 127:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = GET_HASH_KEY("BANDITOS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 0)
	{
		Var4 = { func_215(GET_HASH_KEY("KILLED"), iVar2) };
		STATS::STAT_ID_GET_INT(&Var4, &iVar3);
		if (iVar3 >= (iParam0->f_200 + iParam0->f_199))
		{
			func_386(iVar0, 1);
		}
		else
		{
			func_386(iVar1, 1);
		}
	}
}

void func_302(int iParam0)
{
	if (func_387(1) <= 0)
	{
		return;
	}
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	func_388(iVar0, 1, bParam1, 0, 1);
	func_389(iParam0, -1);
	if (bParam2)
	{
		if (func_390(iVar0) >= 1)
		{
			func_391(iVar0, (func_390(iVar0) - 1));
		}
	}
	else
	{
		func_392(0, 12);
		iVar1 = func_393(iParam0);
		if (func_390(iVar0) <= 1)
		{
			func_216(func_394(GET_HASH_KEY("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (func_395() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			func_397(func_396(iParam0, 1), 350f, 0);
			func_398(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

bool func_304(int iParam0)
{
	int iVar0;

	if (!func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return false;
	}
	return func_260(iVar0);
}

void func_305(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_399(iParam0, 57, func_396(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (func_192(iVar0) != 4)
	{
		func_214(&Global_1935630, 32);
	}
	if (func_100(iVar0, 1))
	{
		func_400(iVar0);
	}
	iVar1 = func_393(iParam0);
	if (iVar1 != -1)
	{
		func_398(0, iVar1, 0, 12, 0);
	}
	func_401(iParam0);
	func_402(iVar0, 1);
	func_404(iVar0, 1, func_403(PLAYER::PLAYER_ID(), 1, 0, 1));
	func_405(iParam0);
	func_392(0, 12);
}

bool func_306(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_406(uParam2, 1, iVar0);
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
			if (func_407(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_409(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_410(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_411(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_403(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_412(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_413(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_414(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_415(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_415(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_416(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_417(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_418(uParam2, 4000))
				{
					if ((func_419(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_420(uParam2, iParam0)) && func_421(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_419(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_420(uParam2, iParam0)) && func_421(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_422(iParam0, Global_1935630.f_41))
							{
								func_423();
								*uParam3 = 2;
								func_408(iParam0, uParam2, *uParam3);
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
						if (func_422(iParam0, Global_1935630.f_41))
						{
							func_423();
							*uParam3 = 2;
							func_408(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_424(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_395() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_423();
						*uParam3 = 2;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_425())
					{
						if (func_422(iParam0, Global_1935630.f_42))
						{
							func_423();
							*uParam3 = 2;
							func_408(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_426(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_427(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_428(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_429(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_430(uParam2, 4000))
				{
					if (func_431(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_408(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_432(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_408(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_433(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_408(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_307(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < func_387(1))
	{
		iVar1 = func_434(iVar0);
		if (func_349(iVar1))
		{
			iVar2 = func_435(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (func_156(iVar2, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_5, iVar2, 1, 1))
						{
							return true;
						}
					}
					if (func_156(uParam1->f_5, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, uParam1->f_5, 1, 1))
						{
							return true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_308(var uParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		if (func_156(uParam0->f_5, 0, 1))
		{
			if (!func_436(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, true) == 1 || bParam7)
				{
					if (func_437(uParam0->f_5, vParam1, 1) > IntToFloat((iParam4 * iParam4)))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
					}
					else if (func_284(bParam5, fParam6))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
						if (func_294(uParam0->f_5, vParam1, 1) < IntToFloat((iParam4 / 3)))
						{
						}
					}
				}
			}
		}
	}
}

void func_309(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_310(int iParam0, bool bParam1)
{
	if (iParam0->f_205 != 9)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, bParam1);
	}
}

int func_311(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_438(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

bool func_313(int iParam0)
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

bool func_314(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_315(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_316(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_317(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (func_24() != -1)
	{
		uVar0 = Global_36638.f_1444[*iParam0];
		MISC::SET_BIT(&uVar0, *iParam1);
		Global_36638.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = Global_40.f_7832[*iParam0];
	MISC::SET_BIT(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

var func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_319(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

void func_320(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	func_439(&iVar0, 0);
	func_439(&iVar0, 17);
	func_439(&iVar0, 28);
	if (bParam1)
	{
		COMPANION::_0x3CAAD93FA5B9579A(iParam0->f_215, 2, iVar0);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_215))
	{
		COMPANION::_0x7274F84B1501B523(iParam0->f_215);
	}
}

void func_321(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

bool func_322()
{
	return func_319(8);
}

bool func_323()
{
	if (func_24() != 0)
	{
		return true;
	}
	return true;
}

var func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_325(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_440(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_327(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_328(int iParam0)
{
	if (!func_441(iParam0))
	{
		return false;
	}
	return func_442(iParam0);
}

bool func_329(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_330(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_331()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_332(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_333(int iParam0)
{
	return func_221(iParam0, Global_1310750.f_16072 | 64);
}

void func_334(int iParam0)
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

bool func_335(int iParam0)
{
	if (func_443(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_336()
{
	return true;
}

bool func_337(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_338(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_47(iParam0))
	{
		return;
	}
	if (!func_123(iParam0, 1))
	{
		return;
	}
	if (!func_123(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_337(iParam0)) && func_444(iParam0))
	{
		return;
	}
	func_127(iParam0, 1);
	func_445(iParam0);
	if (func_446(func_124(iParam0)))
	{
		iVar0 = func_126(iParam0);
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
		func_127(iParam0, 16);
	}
	if (func_123(iParam0, 128) && !bParam3)
	{
		func_447(iParam0, 0);
	}
}

void func_339(int iParam0, bool bParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_449(iParam0, 1024))
		{
			func_450(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_449(iParam0, 1024))
	{
		func_451(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_452(iParam0);
}

void func_340(int iParam0, int iParam1)
{
	if (!func_453(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

int func_341(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_342(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

void func_343(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_453(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
}

bool func_344(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_345(int iParam0)
{
	return iParam0 > -1;
}

int func_346(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_347(int iParam0)
{
	if (!func_345(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return;
		}
	}
	func_346(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_349(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

float func_350(int iParam0)
{
	if (!func_345(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_351(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_454(iParam1);
	}
}

void func_352(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_349(iParam0))
	{
		return;
	}
	if (func_228(iParam0))
	{
		if (!func_455(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_230(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_456(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_347(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_350(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_457(iParam0, 2, 1);
	}
	else
	{
		func_458(iParam0);
		func_457(iParam0, 1, 1);
	}
}

int func_353(int iParam0, int iParam1)
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

void func_354(int iParam0, bool bParam1)
{
	switch (iParam0->f_205)
	{
		case 9:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_END");
			}
			break;
		case 36:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ABANDON");
			}
			break;
		case 79:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_ABANDON");
			}
			break;
		case 125:
		case 127:
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}
}

void func_355(int iParam0)
{
	int iVar0;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	if (iVar0 != func_26(0))
	{
		func_459(iVar0);
	}
	else
	{
		func_459(iVar0);
	}
}

void func_356(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	iVar1 = func_393(iParam0);
	if (iVar1 != -1)
	{
		Global_1392050[iVar1 /*14*/].f_1 |= 16;
	}
	func_460(iVar0, 0, 2);
	func_389(iParam0, iParam1);
}

void func_357(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_358(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_461(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_462(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_463(iVar0);
	*uParam0 = 0;
}

void func_359(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_360(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_464(2000);
	Global_16 = 0;
	func_465();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_466(*uParam0, 8));
	if (!func_466(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_466(*uParam0, 2) || func_466(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_466(*uParam0, 16))
	{
		func_467(1);
	}
	if (func_466(*uParam0, 32))
	{
		func_468(Global_35, GET_HASH_KEY("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_469(GET_HASH_KEY("KIT_BANDANA"), 0);
	}
	func_470(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_361(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_362(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_471(iParam1))
		{
			func_472(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_473(iParam0, 0, 1);
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
			func_474(iParam0, 0);
			bVar0 = true;
		}
		func_475(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_363(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

bool func_364(int iParam0)
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

bool func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_476(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_477((398 + iVar28), 1);
			if (func_478(iParam0, &Var0, iVar5, 0))
			{
				if (func_479(iParam0, &Var6, iVar5))
				{
					Var29 = { func_480(iParam0, Var0, iVar5, 0) };
					func_481(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_482(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_483(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_484(iParam0, iParam1);
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

void func_366(int iParam0, int iParam1, float fParam2)
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

bool func_367(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_368(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_369(int iParam0)
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

bool func_370(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_406(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_418(uParam1, 4000))
				{
					if ((func_419(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_420(uParam1, iParam0)) && func_421(uParam1, iParam0))
					{
						func_423();
						*uParam2 = 2;
						func_408(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_418(uParam1, 4000))
				{
					if ((func_419(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_420(uParam1, iParam0)) && func_421(uParam1, iParam0))
					{
						func_423();
						*uParam2 = 2;
						func_408(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_422(iParam0, Global_1935630.f_41))
							{
								func_423();
								*uParam2 = 2;
								func_408(iParam0, uParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_422(iParam0, Global_1935630.f_41))
						{
							func_423();
							*uParam2 = 2;
							func_408(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_425())
					{
						if (func_422(iParam0, Global_1935630.f_42))
						{
							func_423();
							*uParam2 = 2;
							func_408(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_412(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_413(Global_35, iParam0, uParam1))
					{
						func_423();
						*uParam2 = 4;
						func_408(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_414(Global_35, iParam0, uParam1))
					{
						func_423();
						*uParam2 = 256;
						func_408(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_485(iParam0, uParam1))
			{
				func_423();
				*uParam2 = 131072;
				func_408(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_486(iParam0, uParam1))
			{
				func_423();
				*uParam2 = 262144;
				func_408(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_371(var uParam0, vector3 vParam1, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = fParam5;
	while (iVar1 <= iParam6)
	{
		if (func_156((uParam0[iVar1 /*9*/])->f_5, 0, 1) && iVar2 < *iParam4)
		{
			fVar0 = func_294((uParam0[iVar1 /*9*/])->f_5, vParam1, fParam8);
			if (fVar0 < fParam7)
			{
				(*iParam4)[iVar2] = iVar1;
				iVar2++;
			}
		}
		iVar1++;
	}
}

bool func_372(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

int func_373(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (func_156(uParam0->f_5, 0, 1))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_5, false, false);
		if (!func_185(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (bParam4)
				{
					TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 0);
				}
				if (iVar0 != 0)
				{
					if (bParam2 && (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0) || WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)))
					{
						func_382(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				TASK::TASK_COMBAT_PED(0, Global_35, iParam5, 0);
				func_272(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
			}
			else
			{
				TASK::TASK_COMBAT_PED(uParam0->f_5, Global_35, 0, 0);
			}
		}
		if (bParam3)
		{
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
			{
				func_190(uParam0, GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
			}
		}
		return 1;
	}
	return 0;
}

void func_374(var uParam0, int iParam1, int iParam2)
{
	func_190(uParam0, iParam1, iParam2);
}

float func_375(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_173(Global_35, iParam0, bParam1, bParam2);
}

bool func_376(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_377(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_487(iParam0, &Var0);
}

void func_378(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_379(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_380(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_185(&((iParam0[iParam1 /*9*/])->f_7), 16))
	{
		*fParam2 = 0.1f;
		*fParam3 = 0.5f;
	}
	else
	{
		*fParam2 = 0.4f;
		*fParam3 = 1f;
	}
	if (!func_369((iParam0[iParam1 /*9*/])->f_5))
	{
		if (PED::IS_PED_FACING_PED((iParam0[iParam1 /*9*/])->f_5, Global_35, 70f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((iParam0[iParam1 /*9*/])->f_5))
		{
			*fParam2 = (*fParam2 / 2f);
			*fParam3 = (*fParam3 / 2f);
		}
	}
}

bool func_381()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_382(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			iVar0 = 0;
			if (!WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false), true, 0, false, false);
			}
			if (WEAPON::_IS_WEAPON_ONE_HANDED(func_488(iParam0, 0)) || WEAPON::_IS_WEAPON_TWO_HANDED(func_488(iParam0, 0)))
			{
				if (bParam4)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam1, iParam2, bParam3, iParam5);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iParam1, iParam2, bParam3, iParam5);
				}
			}
		}
	}
}

bool func_383(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_384(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			func_489(0);
			if (func_62(&Local_20, &Local_398, GET_HASH_KEY("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_156(Local_398[iVar0 /*9*/].f_5, 0, 1))
					{
						func_158(Local_398[iVar0 /*9*/].f_5, GET_HASH_KEY("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_501[iVar0 /*9*/].f_1, Global_35, 3f, 1, 0.5f, 1f, 1, 0, 0, GET_HASH_KEY("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(0, Local_501[iVar0 /*9*/].f_1, 0.5f, 0, false, 0);
						PED::SET_PED_COMBAT_RANGE(0, 2);
						PED::SET_PED_COMBAT_MOVEMENT(0, 1);
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
						func_272(Local_398[iVar0 /*9*/].f_5, &iVar1, 0, 0, 1, 1);
						func_374(&(Local_398[iVar0 /*9*/]), GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_20.f_197 = 0;
				func_66(&Local_20, &Local_398, 0, 3);
				return true;
			}
			break;
		case 1:
			func_489(1);
			if (func_62(&Local_20, &Local_435, GET_HASH_KEY("REL_GANG_SMUGGLERS"), 0, 3))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_156(Local_435[iVar0 /*9*/].f_5, 0, 1))
					{
						func_158(Local_435[iVar0 /*9*/].f_5, GET_HASH_KEY("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						TASK::TASK_SET_CROUCH_MOVEMENT(Local_435[iVar0 /*9*/].f_5, true, 0, true);
						TASK::TASK_COMBAT_PED(Local_435[iVar0 /*9*/].f_5, Global_35, 0, 0);
						func_374(&(Local_435[iVar0 /*9*/]), GET_HASH_KEY("BLIP_STYLE_ENEMY"), 0);
					}
					iVar0++;
				}
				Local_20.f_197 = 0;
				func_66(&Local_20, &Local_435, 0, 3);
				return true;
			}
			break;
	}
	return false;
}

int func_385(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MAP::DOES_BLIP_EXIST((iParam0[iVar0 /*9*/])->f_6) && func_156((iParam0[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_386(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_24() != -1)
	{
		return;
	}
	if (func_490(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_491())
	{
		iVar1 = 0;
	}
	func_492(iParam0, iVar1);
}

int func_387(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_493(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_494(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_494(), iVar3);
		if (func_495(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_388(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_37(iParam0))
	{
		return;
	}
	if (func_192(iParam0) == 4)
	{
		func_496(iParam0, func_121());
		if (!func_311(iParam0) == 5 && !func_311(iParam0) == 6)
		{
			if (bParam3)
			{
				func_497(iParam0, 6);
			}
			else
			{
				func_497(iParam0, 5);
			}
			func_498(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_499(1);
	}
	iVar0 = func_27(iParam0);
	bVar1 = func_24() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_500(0, 2);
		if (!bVar1 && bParam1)
		{
			func_501();
		}
	}
	else
	{
		func_502(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_503(iParam0);
	}
	else
	{
		Var2 = { func_394(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_212(32768))
		{
			Var4 = { func_394(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_311(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_106(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_106(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_106(iParam0) != 95 && func_106(iParam0) != 82) && !func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_106(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_106(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_505(func_106(iParam0), iVar6, func_504());
	}
	else if (iVar0 == 8)
	{
		func_507(func_106(iParam0), iVar6, func_504(), func_506());
	}
	if (!func_311(iParam0) == 5 && !func_311(iParam0) == 6)
	{
		iVar9 = func_508(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_509(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_510(func_106(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_511((iVar10 - 20), 0, iVar10);
					iVar11 = func_511((iVar11 - 10), 0, iVar11);
				}
				func_512(1);
				func_513(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_513(45, 0, 1);
				break;
			case 8:
				iVar10 = func_514(func_106(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_511((iVar10 - 20), 0, iVar10);
					iVar11 = func_511((iVar11 - 10), 0, iVar11);
				}
				func_513(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_515(func_106(iParam0)))
				{
					func_516(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_513(120, 0, 1);
				break;
			case 2:
				func_513(120, 0, 1);
				break;
			case 6:
				func_513(func_518(func_517(iParam0)), 0, 1);
				break;
			case 5:
				func_513(120, 0, 1);
				break;
		}
	}
	func_519(iParam0, 1);
	func_496(iParam0, func_121());
	func_498(iParam0);
	if ((!func_311(iParam0) == 0 && bParam1) && func_24() == -1)
	{
		iVar12 = func_520(iParam0);
		if (iVar12 != -1)
		{
			func_521(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_522();
			if (iVar12 != -1)
			{
				func_521(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_106(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_107(func_106(iParam0)) && func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_106(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_523();
				}
				break;
			case 8:
				if (func_106(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_523();
				}
				break;
		}
	}
	if (!func_311(iParam0) == 5 && !func_311(iParam0) == 6)
	{
		if (bParam3)
		{
			func_497(iParam0, 6);
		}
		else
		{
			func_497(iParam0, 5);
		}
		func_498(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_106(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_524();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_525(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_525(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_526(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_525(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_527();
						func_528(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_529();
						func_530();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_531(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_525(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_532(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_532(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_533(304805134, 1, 1);
						if (!func_100(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_388(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						func_534();
						break;
					case 26:
						func_535();
						break;
					case 17:
						func_536(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_33())
						{
							func_537(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_538(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_121();
							func_40(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_539(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_33())
						{
							func_537(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_33())
						{
							func_537(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_540();
						break;
					case 37:
						func_541();
						if (func_32())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(GET_HASH_KEY("CABR01"), iVar14);
						}
						break;
					case 38:
						func_542();
						break;
					case 43:
						func_543();
						break;
					case 44:
						if (!func_100(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_388(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!func_100(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_388(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_544();
						break;
					case 59:
						func_545();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_546();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_547();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_532(451, 0);
						}
						if (!func_548(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_548(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_121();
								func_40(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_539(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_549(4))
						{
							if (!func_550(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_121();
								func_40(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_539(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_525(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_551(89200);
						func_551(2300);
						func_551(2300);
						break;
					case 68:
						func_552();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						func_553();
						func_551(-139100);
						break;
					case 69:
						if (func_100(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_551(-6000);
						}
						break;
					case 70:
						func_551(23400);
						func_551(1900);
						func_551(-15000);
						break;
					case 71:
						func_551(-5500);
						break;
				}
				break;
			case 8:
				switch (func_106(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						func_554();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_555();
						break;
					case 66:
						func_556();
						func_557();
						break;
					case 67:
						if (!func_558(6))
						{
							func_559(6);
						}
						if (!func_558(3))
						{
							func_559(3);
						}
						if (func_33())
						{
							func_537(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, GET_HASH_KEY("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (func_100(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_560(0);
							func_551(40500);
						}
						else
						{
							func_560(0);
							func_551(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_106(iParam0))
				{
					case 0:
						switch (func_517(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_561(iParam0);
		func_562();
		switch (iVar0)
		{
			case 1:
				switch (func_106(iParam0))
				{
					case 4:
						func_563(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_563(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_563(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_563(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_563(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_563(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_563(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_564(iParam0);
						func_563(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_563(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_563(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_550(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_525(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_563(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_563(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_563(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_564(iParam0) == 0)
						{
							func_563(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_563(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 536870912))
				{
					func_565(11, 1);
				}
				switch (func_106(iParam0))
				{
					case 109:
						func_563(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_565(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_563(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_563(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_563(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_563(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_566(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_563(iParam0, func_564(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_563(iParam0, func_567(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_563(iParam0, func_567(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_563(iParam0, func_567(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_566(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_563(iParam0, func_567(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_311(iParam0) == 0)
			{
				if (func_568(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_569(func_27(iParam0), func_568(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_106(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_571(func_570(Global_1879514.f_1));
						if (iVar0 == 8 && func_106(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_107(func_106(iParam0)) && func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_392(bParam2, iVar20);
		}
	}
	func_572(1);
	if ((bVar13 || func_523()) && (func_27(iParam0) == 1 || func_27(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_389(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_573(iParam0);
	Global_40.f_11864[iVar0 /*2*/] = iParam1;
}

int func_390(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_574(iParam0) & 2147418112, 16);
}

void func_391(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	iVar0 = func_574(iParam0) & 65535;
	iVar1 = BUILTIN::SHIFT_LEFT(iParam1, 16);
	func_575(iParam0, (iVar1 + iVar0));
}

void func_392(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_576(&Global_0, 8);
	}
	if (!func_331() || func_24() != -1)
	{
		return;
	}
	func_576(&Global_0, 1);
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 2;
		case 79:
			return 1;
		case 36:
			return 0;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
		case 16:
			if (func_31())
			{
				return 4;
			}
			else
			{
				return 0;
			}
			break;
	}
	return -1;
}

struct<2> func_394(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_395()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

Vector3 func_396(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_43(iParam0))
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

void func_397(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < fParam3)
		{
			func_577(iVar0);
		}
		iVar0++;
	}
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_578(&Global_1393447, 1);
	func_579();
	func_580();
	func_581((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_395() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_582();
		if (iParam1 == -1)
		{
			if (func_583(iParam0, 1))
			{
				func_584(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_583(iParam0, 2))
			{
				func_584(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_583(iParam0, 4))
			{
				func_584(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_585(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_586(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_586((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_399(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_587(iVar0) == iParam0 && func_588(iVar0) == iParam1)
		{
			func_589(iVar0, -1);
			func_590(iVar0, 0);
			func_591(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
				}
				MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
			}
			return;
		}
		iVar0++;
	}
}

void func_400(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_497(iParam0, 0);
}

void func_401(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 36:
			iVar0 = GET_HASH_KEY("GANG_ODRISCOLL");
			iVar1 = GET_HASH_KEY("SIX_POINT_CABIN");
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = GET_HASH_KEY("GANG_ODRISCOLL");
				iVar1 = GET_HASH_KEY("HANGING_DOG_RANCH");
			}
			else
			{
				iVar0 = GET_HASH_KEY("GANG_RANCHERS");
				iVar1 = GET_HASH_KEY("HANGING_DOG_RANCH_LARAMIE");
			}
			break;
		case 9:
			iVar0 = GET_HASH_KEY("GANG_EXCONFED");
			iVar1 = GET_HASH_KEY("SHADY_BELLE");
			break;
		case 79:
			iVar0 = GET_HASH_KEY("GANG_INBRED");
			iVar1 = GET_HASH_KEY("BEAVER_HOLLOW");
			break;
		case 125:
			iVar0 = GET_HASH_KEY("GANG_BANDITOS");
			iVar1 = GET_HASH_KEY("TWIN_ROCKS");
			break;
		case 127:
			iVar0 = GET_HASH_KEY("GANG_BANDITOS");
			iVar1 = GET_HASH_KEY("THIEVES_LANDING");
			break;
		case 118:
			iVar0 = GET_HASH_KEY("GANG_BANDITOS");
			iVar1 = GET_HASH_KEY("FORT_MERCER");
			break;
		case 114:
			iVar0 = GET_HASH_KEY("GANG_BANDITOS");
			iVar1 = GET_HASH_KEY("GAPTOOTH_BREACH");
			break;
		case 129:
			iVar0 = GET_HASH_KEY("GANG_BANDITOS");
			iVar1 = GET_HASH_KEY("SOLOMONS_FOLLY");
			break;
	}
	COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(iVar0, iVar1);
}

void func_402(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_592(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_27(iParam0), func_106(iParam0), func_517(iParam0), func_568(iParam0), Global_36);
		}
	}
	func_497(iParam0, 1);
	bParam1 = bParam1;
}

int func_403(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_593(bParam1, bParam2, bParam3);
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

void func_404(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_594(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (bParam1)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_595(func_106(iParam0));
			}
			if (func_24() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_568(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_568(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_596(iParam0);
	if (!func_37(func_26(0)))
	{
		func_497(iParam0, 3);
		func_499(bParam2);
		if (func_24() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_502(1);
		}
		func_597(iParam0, -1);
		if (bParam1 && !func_212(2))
		{
			func_576(&Global_0, 1024);
		}
		if (func_24() == -1)
		{
			func_598(&(Global_1347343.f_11), 536870912);
			func_599(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_600(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_601(0);
			}
		}
		if (func_24() == -1)
		{
			iVar1 = func_520(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_522();
				switch (iVar1)
				{
					case 0:
						func_602(0);
						break;
					case 1:
						func_602(1);
						break;
					case 2:
						func_602(2);
						break;
					case 3:
						func_602(3);
						break;
					case 4:
						func_602(4);
						break;
					case 5:
						func_602(5);
						break;
					case 6:
						func_602(5);
						break;
					case 7:
						func_602(7);
						break;
					case 8:
						func_602(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_106(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_602(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_106(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_602(11);
						break;
					default:
						iVar1 = func_522();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_603(0);
									break;
								case 1:
									func_603(1);
									break;
								case 2:
									func_603(2);
									break;
								case 3:
									func_603(3);
									break;
								case 4:
									func_603(4);
									break;
								case 5:
									func_603(5);
									break;
								case 6:
									func_603(5);
									break;
								case 7:
									func_603(7);
									break;
								case 8:
									func_603(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_572(1);
	}
	else
	{
		func_597(iParam0, -1);
		func_497(iParam0, 4);
	}
	func_519(iParam0, 0);
}

void func_405(int iParam0)
{
	int iVar0;

	if (func_604(iParam0))
	{
		return;
	}
	iVar0 = func_573(iParam0);
	func_605(iVar0, 16);
}

void func_406(var uParam0, bool bParam1, int iParam2)
{
	func_606(iParam2);
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
		uParam0->f_13 = func_607(0);
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
							func_152(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_608(1))
						{
							func_152(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_608(1) || *uParam0 & 8192 != 0))
				{
					func_153(uParam0, 33554432);
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
			if (func_609(uParam0))
			{
				uParam0->f_15 = func_395();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_395() - uParam0->f_15) > 500)
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
	func_610(uParam0);
}

bool func_407(int iParam0, var uParam1)
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
			if (!func_611(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_293(iParam0, iVar2) <= func_612(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_408(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_613(iParam2, 1, 1, 1, 0))
	{
		func_152(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_614(uParam1, 1);
	func_615();
}

bool func_409(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_616(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_617(uParam1);
			if (func_618(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_619(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_614(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_614(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_410(int iParam0, int iParam1, var uParam2)
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
	if (func_620(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_617(uParam2);
		if (func_618(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_619(uParam2)
				{
					func_614(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_411(int iParam0, var uParam1)
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
	if (func_611(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_619(uParam1)
		{
			fVar3 = func_617(uParam1);
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

bool func_412(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_413(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_621(uParam2);
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
			if (func_421(uParam2, iParam1))
			{
				func_614(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_414(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_622(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_421(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_614(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_415(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_623(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_614(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_614(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_624(iParam1, vVar0, vVar4))
					{
						func_614(uParam2, 1);
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
					func_614(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_624(iParam1, vVar0, vVar7))
					{
						func_614(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_416(int iParam0, var uParam1)
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
		if (!func_611(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_625(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_626(Global_1935630.f_34[iVar0]))
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
			if (func_627(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_628(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_629(uParam1, iParam0, fVar1, iVar0))
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

bool func_417(int iParam0, var uParam1)
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

bool func_418(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_419(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_630(iVar0, &iVar2))
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
	if (func_631(iVar0, iParam0))
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

int func_420(var uParam0, int iParam1)
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

bool func_421(var uParam0, int iParam1)
{
	if (func_632(uParam0))
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

bool func_422(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_173(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_423()
{
}

bool func_424(var uParam0, int iParam1)
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
		if (func_633(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_395();
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
						if (func_294(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_395();
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

bool func_425()
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
	if ((func_395() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_426(var uParam0, int iParam1)
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
	fVar0 = func_612(uParam0);
	if (uParam0->f_12 > func_250(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_634(iParam1);
	iVar1 = func_635(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_427(int iParam0, int iParam1, var uParam2)
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
	return func_636(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_428(int iParam0, var uParam1)
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
		if (func_637(iParam0, uParam1, 1))
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
					if (!func_638(uParam1, iParam0))
					{
						if (func_294(iVar4, Global_36, 1) < 7f)
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

bool func_429(int iParam0, var uParam1)
{
	if (!func_639(0))
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

bool func_430(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_395();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_431(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_432(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_395();
	}
	else if (func_395() - uParam1->f_4) > func_640(uParam1)
	{
		return func_641(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_433(var uParam0, int iParam1)
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

int func_434(int iParam0)
{
	if (!func_345(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_387(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_435(int iParam0)
{
	if (func_349(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_436(var uParam0)
{
	if (func_185(&(uParam0->f_7), 1))
	{
		return true;
	}
	return false;
}

float func_437(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_642(vVar0, vParam1);
}

int func_438(int iParam0)
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

void func_439(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

bool func_440(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_643(iParam3, &vVar0, &Var3, &uVar6);
	if (func_644(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_441(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_443(int iParam0)
{
	return iParam0 != 0;
}

bool func_444(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_445(int iParam0)
{
	int iVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	iVar0 = func_645(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

bool func_446(int iParam0)
{
	return iParam0 != 0;
}

int func_447(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_123(iParam0, 2))
	{
		return 0;
	}
	if (func_124(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_126(iParam0)))
	{
		return 1;
	}
	if (func_123(iParam0, 1) && !bParam1)
	{
		func_646(iParam0, 128);
		return 1;
	}
	func_127(iParam0, 129);
	func_445(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_126(iParam0));
	func_125(iParam0, 0);
	return 1;
}

bool func_448(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_449(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

void func_450(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

void func_451(int iParam0, int iParam1)
{
	if (!func_448(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

void func_452(int iParam0)
{
	func_648(func_647(iParam0));
}

bool func_453(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_454(int iParam0)
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

bool func_455(int iParam0)
{
	if (!func_349(iParam0))
	{
		return false;
	}
	if (!func_228(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_456(int iParam0, bool bParam1)
{
	if (!func_349(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_649(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_457(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_345(iParam0))
		{
			return;
		}
	}
	func_346(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_458(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_347(iParam0);
	iVar1 = func_456(iParam0, 0);
	func_351(iParam0, iVar0);
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

void func_459(int iParam0)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		return;
	}
	if (iParam0 != func_26(0))
	{
		return;
	}
	if (func_568(iParam0) == 0)
	{
	}
	iVar0 = func_27(iParam0);
	if (func_311(iParam0) == 3)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
			{
				func_569(func_27(iParam0), func_568(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_498(iParam0);
	func_499(1);
	func_502(0);
	func_497(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_512(1);
			func_513(15, 0, 1);
			break;
		case 4:
			func_513(10, 0, 1);
			break;
		case 8:
			func_513(10, 0, 1);
			break;
		case 9:
			func_513(10, 0, 1);
			break;
		case 2:
			func_513(10, 0, 1);
			break;
		case 6:
			func_513(10, 0, 1);
			break;
		case 5:
			func_513(10, 0, 1);
			break;
	}
	func_572(1);
}

void func_460(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_260(iParam0) && !func_594(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_568(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_260(iParam0))
	{
		iParam2 = -1;
	}
	if (func_311(iParam0) == 3 || (func_311(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0))))
	{
		func_569(func_27(iParam0), func_568(iParam0), iParam2);
		if ((!func_37(Global_1572864.f_8) && !func_25(0, 1, 0)) && !func_78(Global_1935630, 32768))
		{
			iVar0 = func_520(iParam0);
			if (iVar0 != -1)
			{
				func_521(0);
			}
			else if (func_27(iParam0) == 8)
			{
				iVar0 = func_522();
				if (iVar0 != -1)
				{
					func_521(0);
				}
			}
		}
	}
	func_497(iParam0, 0);
	if (func_26(0) == iParam0)
	{
		func_499(1);
		func_502(0);
		func_572(1);
	}
	func_519(iParam0, 1);
	func_498(iParam0);
}

bool func_461(int iParam0)
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

int func_462(var uParam0)
{
	return uParam0;
}

void func_463(int iParam0)
{
	if (!func_650(iParam0))
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

void func_464(int iParam0)
{
	func_651();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_465()
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

bool func_466(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938.f_865 = (Global_1945938.f_865 - Global_1945938.f_865 & 2);
	}
	else
	{
		Global_1945938.f_865 |= 2;
	}
	func_652(bParam0);
}

int func_468(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_476(iParam1, 1, 0) };
		iParam3 = func_653(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_655(iParam1, iParam2, func_654(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_656(1, (func_24() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_654(iParam3, 1) /*11*/])
			{
				func_657(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_658(32768) && iParam1 != Global_1946804.f_57[func_654(iParam3, 1) /*11*/])
			{
				func_659();
				func_657(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_657(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_660(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_657(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_661(0);
			func_662(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_657(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_469(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_476(iParam0, 0, 0) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	if (func_663(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_664(0), &Var5, bParam1);
}

void func_470(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_24() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_190);
			}
			func_665(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_666(iParam1, 29, bVar4, 1, 0);
			func_666(iParam1, 31, bVar4, 1, 0);
			func_666(iParam1, 30, bVar4, 1, 0);
			func_666(iParam1, 22, bVar4, 1, 0);
			func_666(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_658(32768) && func_667(1108822547, 8)) && func_668(10, iParam3))
	{
		func_669(iParam1, 0, 1);
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
			iVar3 = func_670(iVar1, 1);
			if (func_667(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_668(iVar1, iParam3))
				{
				}
				else if ((func_667(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_667(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_666(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_671(iVar3, 1, 6);
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
								func_666(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_667(iVar3, 1))
							{
								func_672(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_471(int iParam0)
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

void func_472(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_673(iParam0, iParam1))
		{
			if (func_674(iParam0, iParam1))
			{
				if (func_675(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_676(iParam0);
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

void func_473(int iParam0, int iParam1, bool bParam2)
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

void func_474(int iParam0, bool bParam1)
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

void func_475(int iParam0, int iParam1)
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

struct<5> func_476(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_677(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_678(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_480(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_679(bParam1) };
			if (bParam2 && func_680(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_478(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_478(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_479(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_681(bParam1) };
			switch (func_682(iParam0))
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
			if (func_683(iParam0, -1823706425))
			{
				Var0 = { func_480(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_683(iParam0, -1483207246))
			{
				Var0 = { func_480(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_684(Var0, &Var27, bParam1, 0))
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

int func_477(int iParam0, int iParam1)
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

bool func_478(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_663(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_479(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_685(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_480(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_686(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_664(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_481(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_687(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_684(*uParam1, &Var0, bParam6, 0))
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
	if (!func_482(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_664(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_482(bool bParam0)
{
	if (func_24() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_664(bParam0));
}

bool func_483(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_688(iParam0))
	{
		return false;
	}
	if (!func_482(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_484(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_368(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_485(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_689(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_690(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_691())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_486(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_369(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_487(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

var func_488(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_489(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_692(&(Local_398[iVar0 /*9*/].f_1), &(Local_398[iVar0 /*9*/].f_4), 2, iVar0);
				Local_398[iVar0 /*9*/] = GET_HASH_KEY("G_M_M_UNIBANDITOS_01");
				Var1 = { func_247(4, iVar0) };
				Local_501[iVar0 /*9*/].f_1 = { Var1 };
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { func_247(3, iVar0) };
				Local_435[iVar0 /*9*/].f_1 = { Var1 };
				Local_435[iVar0 /*9*/].f_4 = Var1.f_3;
				Local_435[iVar0 /*9*/] = GET_HASH_KEY("G_M_M_UNIBANDITOS_01");
				iVar0++;
			}
			break;
	}
}

bool func_490(var uParam0)
{
	if (-1829635046 == func_693(81053684))
	{
		if (func_694(uParam0))
		{
			return true;
		}
	}
	else if (func_695(-525676072, uParam0))
	{
		if (func_694(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_491()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_492(int iParam0, int iParam1)
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

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_696();
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
	iVar4 = func_511(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_511(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_697())
		{
			func_698(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_699())
		{
			func_698(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_700())
		{
			func_698(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_701())
	{
		func_698(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_216(func_394(GET_HASH_KEY("FAME")), iVar1);
	iVar10 = func_696();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

int func_493(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_702(&iVar1, -2147483648);
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

int func_494()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_495(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_24() != -1)
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

void func_496(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

void func_497(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_703(iParam0, iParam1);
}

int func_498(int iParam0)
{
	return func_705(func_704(iParam0));
}

void func_499(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_361(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_214(&Global_1935630, 4194304);
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

int func_500(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_236(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
	func_502(bParam0);
	return 1;
}

void func_501()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_349(iVar17))
		{
			iVar18 = func_347(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	func_706(&(Global_1359489.f_55));
	if (func_707(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1))
	{
		func_708(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

int func_502(bool bParam0)
{
	if (!bParam0 && func_236(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_503(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_575(iParam0, (func_574(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_504()
{
	return func_709() > 0;
}

void func_505(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_710(GET_HASH_KEY("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_711(1);
			break;
		case 16:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_712(146))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_711(1);
			break;
		case 76:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_713() == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_711(0);
			break;
		case 15:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_710(GET_HASH_KEY("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_710(GET_HASH_KEY("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_713() == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_710(GET_HASH_KEY("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_711(0);
			break;
		case 6:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_710(GET_HASH_KEY("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_714(51))
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_710(GET_HASH_KEY("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_100(Global_1347702[9 /*49*/].f_15, 1))
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_713() == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_713() == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_710(GET_HASH_KEY("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_710(GET_HASH_KEY("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_710(GET_HASH_KEY("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_710(GET_HASH_KEY("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_711(1);
			break;
		case 3:
			if (func_32())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4")))
				{
					func_710(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_GT_WINTER_4_SE")))
			{
				func_710(GET_HASH_KEY("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_506()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_507(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_710(GET_HASH_KEY("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_100(Global_1835011[69 /*74*/].f_1, 1))
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_712(26))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_710(GET_HASH_KEY("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_712(54))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_712(39))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_564(Global_1835011[33 /*74*/].f_1) == 1)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_712(43))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_712(41))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_712(49))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_710(GET_HASH_KEY("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_100(Global_1347702[23 /*49*/].f_15, 1))
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_710(GET_HASH_KEY("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_710(GET_HASH_KEY("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_711(1);
			break;
		case 67:
			func_710(GET_HASH_KEY("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_710(GET_HASH_KEY("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_711(0);
			break;
		case 70:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_710(GET_HASH_KEY("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_710(GET_HASH_KEY("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_710(GET_HASH_KEY("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_712(78))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_712(79))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK4_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_710(GET_HASH_KEY("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_712(101))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_710(GET_HASH_KEY("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_712(103))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_712(104))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_712(109))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_712(110))
			{
				if (Global_1357515 == 0)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_712(117))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_712(118))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_712(121))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_712(122))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW5_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_PW5_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_710(GET_HASH_KEY("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_710(GET_HASH_KEY("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_710(GET_HASH_KEY("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_710(GET_HASH_KEY("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(GET_HASH_KEY("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_712(136))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_710(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_712(147))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_712(148))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_712(149))
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_710(GET_HASH_KEY("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_508(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = GET_HASH_KEY("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = func_27(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_715(iParam0);
			switch (iVar1)
			{
				case 0:
					return GET_HASH_KEY("CSTAG_FLOW_WNT1_POST");
				case 1:
					return GET_HASH_KEY("CSTAG_FLOW_WNT2_POST");
				case 2:
					return GET_HASH_KEY("CSTAG_FLOW_DST1_POST");
				case 3:
					return GET_HASH_KEY("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_MUD1_POST");
				case 5:
					return GET_HASH_KEY("CSTAG_FLOW_MUD2_POST");
				case 6:
					return GET_HASH_KEY("CSTAG_FLOW_MUD3_POST");
				case 10:
					return GET_HASH_KEY("CSTAG_FLOW_REV1_POST");
				case 13:
					return GET_HASH_KEY("CSTAG_FLOW_SEN1_POST");
				case 15:
					return GET_HASH_KEY("CSTAG_FLOW_HNT1_POST");
				case 8:
					return GET_HASH_KEY("CSTAG_FLOW_MRY1_POST");
				case 25:
					return GET_HASH_KEY("CSTAG_FLOW_MUD6_POST");
				case 14:
					return GET_HASH_KEY("CSTAG_FLOW_MUD4_POST");
				case 7:
					return GET_HASH_KEY("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (func_564(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return GET_HASH_KEY("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return GET_HASH_KEY("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return GET_HASH_KEY("CSTAG_FLOW_UTP1_POST");
				case 12:
					return GET_HASH_KEY("CSTAG_FLOW_UTP2_POST");
				case 16:
					return GET_HASH_KEY("CSTAG_FLOW_FUD1_POST");
				case 17:
					return GET_HASH_KEY("CSTAG_FLOW_GRY1_POST");
				case 53:
					return GET_HASH_KEY("CSTAG_FLOW_CRN1_POST");
				case 18:
					return GET_HASH_KEY("CSTAG_FLOW_BRT1_POST");
				case 19:
					return GET_HASH_KEY("CSTAG_FLOW_GRY2_POST");
				case 20:
					return GET_HASH_KEY("CSTAG_FLOW_BRT2_POST");
				case 22:
					return GET_HASH_KEY("CSTAG_FLOW_TRE1_POST");
				case 23:
					return GET_HASH_KEY("CSTAG_FLOW_DST3_POST");
				case 24:
					return GET_HASH_KEY("CSTAG_FLOW_MUD5_POST");
				case 21:
					return GET_HASH_KEY("CSTAG_FLOW_GRY3_POST");
				case 26:
					return GET_HASH_KEY("CSTAG_FLOW_BRT3_POST");
				case 27:
					return GET_HASH_KEY("CSTAG_FLOW_MOB1_POST");
				case 28:
					return GET_HASH_KEY("CSTAG_FLOW_MOB2_POST");
				case 29:
					return GET_HASH_KEY("CSTAG_FLOW_MOB3_POST");
				case 30:
					return GET_HASH_KEY("CSTAG_FLOW_MOB4_POST");
				case 31:
					return GET_HASH_KEY("CSTAG_FLOW_MOB5_POST");
				case 32:
					return GET_HASH_KEY("CSTAG_FLOW_ODR4_POST");
				case 33:
					return GET_HASH_KEY("CSTAG_FLOW_IND1_POST");
				case 34:
					return GET_HASH_KEY("CSTAG_FLOW_IND3_POST");
				case 35:
					return GET_HASH_KEY("CSTAG_FLOW_SUS1_POST");
				case 36:
					return GET_HASH_KEY("CSTAG_FLOW_MRY3_POST");
				case 37:
					return GET_HASH_KEY("CSTAG_FLOW_SDN1_POST");
				case 38:
					return GET_HASH_KEY("CSTAG_FLOW_GUA1_POST");
				case 39:
					return GET_HASH_KEY("CSTAG_FLOW_GUA2_POST");
				case 40:
					return GET_HASH_KEY("CSTAG_FLOW_FUS1_POST");
				case 41:
					return GET_HASH_KEY("CSTAG_FLOW_FUS2_POST");
				case 42:
					return GET_HASH_KEY("CSTAG_FLOW_SMG2_POST");
				case 43:
					return GET_HASH_KEY("CSTAG_FLOW_GUA3_POST");
				case 44:
					return GET_HASH_KEY("CSTAG_FLOW_GNG1_POST");
				case 45:
					return GET_HASH_KEY("CSTAG_FLOW_GNG2_POST");
				case 46:
					return GET_HASH_KEY("CSTAG_FLOW_GNG3_POST");
				case 47:
					return GET_HASH_KEY("CSTAG_FLOW_DST5_POST");
				case 48:
					return GET_HASH_KEY("CSTAG_FLOW_NTV1_POST");
				case 49:
					return GET_HASH_KEY("CSTAG_FLOW_NTV2_POST");
				case 50:
					return GET_HASH_KEY("CSTAG_FLOW_NTS1_POST");
				case 51:
					return GET_HASH_KEY("CSTAG_FLOW_NTS2_POST");
				case 52:
					return GET_HASH_KEY("CSTAG_FLOW_NTS3_POST");
				case 54:
					return GET_HASH_KEY("CSTAG_FLOW_TRN1_POST");
				case 55:
					return GET_HASH_KEY("CSTAG_FLOW_TRN2_POST");
				case 56:
					return GET_HASH_KEY("CSTAG_FLOW_TRN3_POST");
				case 57:
					return GET_HASH_KEY("CSTAG_FLOW_TRN4_POST");
				case 58:
					return GET_HASH_KEY("CSTAG_FLOW_NTV3_POST");
				case 59:
					return GET_HASH_KEY("CSTAG_FLOW_FIN1_POST");
				case 60:
					return GET_HASH_KEY("CSTAG_FLOW_MAR1_POST");
				case 61:
					return GET_HASH_KEY("CSTAG_FLOW_MAR5_POST");
				case 62:
					return GET_HASH_KEY("CSTAG_FLOW_MR52_POST");
				case 63:
					return GET_HASH_KEY("CSTAG_FLOW_MR53_POST");
				case 64:
					return GET_HASH_KEY("CSTAG_FLOW_LAR1_POST");
				case 65:
					return GET_HASH_KEY("CSTAG_FLOW_MAR2_POST");
				case 66:
					return GET_HASH_KEY("CSTAG_FLOW_MAR4_POST");
				case 67:
					return GET_HASH_KEY("CSTAG_FLOW_AB21_POST");
				case 68:
					return GET_HASH_KEY("CSTAG_FLOW_BE22_POST");
				case 69:
					return GET_HASH_KEY("CSTAG_FLOW_SAD2_POST");
				case 70:
					return GET_HASH_KEY("CSTAG_FLOW_SAD3_POST");
				case 71:
					return GET_HASH_KEY("CSTAG_FLOW_SAD4_POST");
				case 72:
					return GET_HASH_KEY("CSTAG_FLOW_SAD5_POST");
				case 73:
					return GET_HASH_KEY("CSTAG_FLOW_MAR6_POST");
				case 74:
					return GET_HASH_KEY("CSTAG_FLOW_MAR7_POST");
				case 75:
					return GET_HASH_KEY("CSTAG_FLOW_MAR8_POST");
				case 76:
					return GET_HASH_KEY("CSTAG_FLOW_FIN2_POST");
			}
			break;
		case 8:
			iVar2 = func_106(iParam0);
			switch (iVar2)
			{
				case 120:
					return GET_HASH_KEY("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return GET_HASH_KEY("CSTAG_FLOW_RABI1_POST");
				case 63:
					return GET_HASH_KEY("CSTAG_FLOW_RDST2_POST");
				case 97:
					return GET_HASH_KEY("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return GET_HASH_KEY("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return GET_HASH_KEY("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return GET_HASH_KEY("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return GET_HASH_KEY("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return GET_HASH_KEY("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return GET_HASH_KEY("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return GET_HASH_KEY("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return GET_HASH_KEY("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return GET_HASH_KEY("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return GET_HASH_KEY("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return GET_HASH_KEY("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return GET_HASH_KEY("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return GET_HASH_KEY("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return GET_HASH_KEY("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return GET_HASH_KEY("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return GET_HASH_KEY("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return GET_HASH_KEY("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return GET_HASH_KEY("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return GET_HASH_KEY("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return GET_HASH_KEY("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return GET_HASH_KEY("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return GET_HASH_KEY("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return GET_HASH_KEY("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return GET_HASH_KEY("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return GET_HASH_KEY("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return GET_HASH_KEY("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return GET_HASH_KEY("CSTAG_FLOW_RDST61_POST");
				case 65:
					return GET_HASH_KEY("CSTAG_FLOW_RDST62_POST");
				case 108:
					return GET_HASH_KEY("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return GET_HASH_KEY("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return GET_HASH_KEY("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return GET_HASH_KEY("CSTAG_FLOW_RABI3_POST");
				case 96:
					return GET_HASH_KEY("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return GET_HASH_KEY("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_106(iParam0);
			switch (iVar3)
			{
				case GET_HASH_KEY("HAI_FISHING_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_FS01_POST");
				case GET_HASH_KEY("HAI_HOME_ROBBERY_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_HR01_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR02_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_02"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR03_POST");
				case GET_HASH_KEY("HAI_FISHING_02"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_FS02_POST");
				case GET_HASH_KEY("HAI_HUNTING_06"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_HT06_POST");
				case GET_HASH_KEY("HAI_BANK_ROBBERY_01"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_BR01_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_03"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR01_POST");
				case GET_HASH_KEY("HAI_COACH_ROBBERY_04"):
					return GET_HASH_KEY("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_509(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_716(iParam0);
	iVar3 = func_717(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_121();
				func_40(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_718(iParam0, 1);
			if (func_719(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_720(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_721(1, iParam0);
				}
				else
				{
					func_722(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_510(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_511(int iParam0, int iParam1, int iParam2)
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

void func_512(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 64);
	}
}

void func_513(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_723(iParam0, iParam1, bParam2);
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

int func_514(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_515(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

void func_516(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return;
	}
	if ((Global_36616 && func_724(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_725(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_726(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_727(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_726(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_517(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_728(func_109(iParam0));
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_519(int iParam0, bool bParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_26(0) != iParam0)
	{
		return;
	}
	if (func_729(iParam0))
	{
		if (bParam1)
		{
			func_730(-525676072);
		}
		else
		{
			func_731(-525676072);
		}
	}
}

int func_520(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_27(iParam0))
	{
		case 1:
			iVar0 = func_106(iParam0);
			return func_732(iVar0);
		case 8:
			iVar1 = func_106(iParam0);
			if (func_108(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_733(iVar1);
			}
			break;
	}
	return -1;
}

void func_521(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_734(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_735();
		Global_1898077.f_9 = func_736(Global_1894899.f_2);
		func_737(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_522()
{
	if (!func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_100(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_100(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_100(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_100(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_100(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_100(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_523()
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_331())
	{
		return false;
	}
	if (!func_100(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_100(Global_1835011[2 /*74*/].f_1, 1) && func_100(Global_1347702[120 /*49*/].f_15, 1)) && !func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_100(Global_1835011[37 /*74*/].f_1, 1) && !func_100(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_100(Global_1835011[57 /*74*/].f_1, 1) && !func_100(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_100(Global_1835011[26 /*74*/].f_1, 1) && !func_100(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_100(Global_1835011[62 /*74*/].f_1, 1) && func_100(Global_1835011[63 /*74*/].f_1, 1)) && !func_100(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_100(Global_1835011[75 /*74*/].f_1, 1) && !func_100(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_100(Global_1835011[76 /*74*/].f_1, 1) && !func_100(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_100(Global_1835011[40 /*74*/].f_1, 1) && func_100(Global_1835011[41 /*74*/].f_1, 1)) && !func_100(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_100(Global_1835011[62 /*74*/].f_1, 1) && func_100(Global_1835011[63 /*74*/].f_1, 1)) && !func_100(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_100(Global_1835011[65 /*74*/].f_1, 1) && func_100(Global_1835011[66 /*74*/].f_1, 1)) && !func_100(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_524()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(13);
		Global_1898441[iVar0 /*38*/] = 13;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_WIN2_COM", 24);
	}
}

bool func_525(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (!func_739(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_740(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_741(iParam0, bParam2);
	iVar2 = 0;
	if (func_742(iParam0, 0, 0) == 0)
	{
		if (func_743(iParam0))
		{
			iVar5 = func_744(iParam0);
			iVar6 = func_745(iVar5);
			iVar7 = func_746(iVar6) + 1;
			func_747(iVar5);
			if (func_748(38))
			{
				func_532(483, 0);
			}
			else
			{
				func_532(482, 0);
			}
			if (iVar7 == func_749(iVar6))
			{
				func_525(func_750(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_331() && func_751(4))
				{
					if (func_331() && (func_752(38) || func_748(38)))
					{
						func_754(38, func_750(iVar6), 0, 0, func_753(), 0, -1, 0);
						func_755(2);
					}
					else
					{
						func_754(38, func_750(iVar6), 0, 0, func_753(), 0, -1, 0);
						func_755(1);
					}
				}
			}
			else if (func_331() && func_751(4))
			{
				if (func_331() && (func_752(38) || func_748(38)))
				{
					func_754(38, 0, 0, 0, func_753(), 0, -1, 0);
					func_755(2);
				}
				else
				{
					func_754(38, 0, 0, 0, func_753(), 0, -1, 0);
					func_755(1);
				}
			}
			if (func_331() && func_751(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_331() && (func_752(38) || func_748(38)))
					{
						func_756(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_756(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_678(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_757(iParam0, 866047851) && !func_757(iParam0, -1979000645)) && !func_757(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_758(iParam0, 8388608) && !func_328(28))
	{
		func_759(28);
	}
	if (!bVar3)
	{
		if (func_757(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_682(iParam0) == -1447088266)
			{
				iVar1 = func_761(func_760(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_24() == -1)
					{
						func_762(iVar1);
					}
					if (func_482(0) && func_365(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_483(iParam0, iVar0, iParam5);
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
					if (func_24() == -1)
					{
						func_762(iParam0);
					}
					if (func_482(0) && func_365(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_483(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_678(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_763(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_678(iParam0) == GET_HASH_KEY("AMMO") && func_688(iParam0))
		{
			if (!func_764(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_757(iParam0, 866047851))
		{
			func_765(iParam0);
		}
		else if (func_757(iParam0, 2000026003))
		{
			func_766(iParam0);
		}
		else if (func_757(iParam0, -103750053))
		{
			func_216(func_767(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_216(func_215(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_757(iParam0, -121341956) && !func_757(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_100(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_532(498, 0);
				}
			}
			if (func_757(iParam0, -2017733358) || func_757(iParam0, -1369131378))
			{
				func_768(iParam0);
			}
		}
		else if (func_757(iParam0, -136654233))
		{
			if (func_757(iParam0, -1021472396))
			{
			}
		}
		else if (func_757(iParam0, -1466706512) && func_757(iParam0, 1147021565))
		{
			func_532(484, 0);
		}
		else if (func_757(iParam0, 1147021565) && func_757(iParam0, -524514947))
		{
		}
		else if (func_757(iParam0, 554195525))
		{
		}
		else if (func_757(iParam0, 589988438))
		{
			if (func_769())
			{
				func_770(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_757(iParam0, 787083290) && func_757(iParam0, 949916894))
		{
			func_771(iParam0);
		}
		else if (func_757(iParam0, -1718133314))
		{
			func_772(iParam0);
		}
		else if (func_757(iParam0, -1738650224))
		{
			func_773(iParam0);
		}
		else if (func_757(iParam0, -1112814642) && func_757(iParam0, 949916894))
		{
			func_774(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_757(iParam0, 1841149704))
		{
			func_775();
		}
		else if (func_757(iParam0, 606799272))
		{
			func_776(iParam0, iParam1);
			func_777(iParam0);
		}
		else if (func_757(iParam0, -1112814642) && func_757(iParam0, -1697809989))
		{
			func_778(iParam0, 0, 0, 0);
		}
		else if (func_757(iParam0, -2017733358) || func_757(iParam0, -1369131378))
		{
			func_768(iParam0);
		}
		else if (func_757(iParam0, -1921346699))
		{
			if (func_24() != -1)
			{
				return false;
			}
			func_779(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_757(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_550(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_525(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_550(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_525(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_550(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_525(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_550(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_525(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_550(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_525(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_550(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_525(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_757(iParam0, -839724752) && func_758(iParam0, 4))
		{
			if (!func_748(42))
			{
				func_780(iParam0);
			}
		}
		else if (func_757(iParam0, 1399091007))
		{
			func_781(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_757(iParam0, 1248798204))
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
				func_525(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_759(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_468(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_782(&iVar9, 0))
				{
					func_365(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_24() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_468(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_532(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_783();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_784();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_785();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_786();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_787();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_788(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_789(499813453, 0);
				func_790(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_788(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_789(499813453, 0);
				func_790(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_788(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_789(499813453, 0);
				func_790(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_788(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_789(666607663, 0);
				func_791(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_788(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_789(666607663, 0);
				func_791(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_788(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_789(666607663, 0);
				func_791(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_788(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_789(-220219788, 0);
				func_792(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_788(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_789(-220219788, 0);
				func_792(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_788(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_789(-220219788, 0);
				func_792(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_788(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_789(218622660, 0);
				func_793(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_788(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_789(218622660, 0);
				func_793(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_788(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_789(390004462, 0);
				func_794(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_788(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_789(390004462, 0);
				func_794(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_788(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_789(390004462, 0);
				func_794(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_788(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_789(6410548, 0);
				func_795(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_788(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_789(6410548, 0);
				func_795(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_788(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_789(6410548, 0);
				func_795(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_788(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_789(6410548, 0);
				func_795(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_797(242, func_796(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_797(240, func_796(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_797(241, func_796(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_798(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_798(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_798(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_798(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_798(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_798(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_532(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_532(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_532(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_525(func_799(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_525(func_800(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_328(1))
				{
					func_532(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_532(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_24() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_532(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_801(&iVar10);
		if (!func_802(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_482(0))
		{
			return true;
		}
		if (func_678(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_803(iParam0);
		}
		if (func_757(iParam0, -1979000645))
		{
			func_804(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_482(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_525(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_805(iVar2, 0);
		}
	}
	Var35 = { func_806(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_807(iParam0);
	if (fParam6 > 0f)
	{
		if (func_757(iParam0, -839724752))
		{
			func_808(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_809(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_757(iParam0, 1989861793))
	{
		iVar0 = func_810(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_811(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_812(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_813(iVar14, iVar1);
					if (iVar15 != iParam0 && func_686(iVar15, 0))
					{
						if (func_814(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_815(iVar1);
				if (bVar13)
				{
					func_816(iParam0);
				}
				else
				{
					func_532(306, 0);
				}
			}
		}
	}
}

void func_527()
{
	if (func_24() != -1)
	{
		return;
	}
	func_817();
	func_818();
	func_819();
	func_820();
	func_821();
	func_822();
	func_823();
}

void func_528(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_824(iParam0, 1, 1, -142743235, 1);
	if (func_825(iParam0))
	{
		func_826(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_654(func_827(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_828(GET_HASH_KEY("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_829() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_830(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_830(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_831(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_831(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_831(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_831(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_831(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_831(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_831(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_831(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_831(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_832(iVar8, iVar0))
				{
					func_833(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_832(iVar8, iVar0))
		{
			func_833(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_529()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_832(iVar5, iVar0);
		if (iVar1 == Global_1946804.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_829() == -2125499975 || func_829() == -449205311)
			{
				vVar2.x = GET_HASH_KEY("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_833(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = GET_HASH_KEY("BASE");
				func_833(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = GET_HASH_KEY("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (Global_1946804.f_57[iVar5 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] = { vVar2 };
	}
}

void func_530()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(14);
		Global_1898441[iVar0 /*38*/] = 14;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MUD1_COM", 24);
	}
}

char* func_531(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_100(Global_1835011[59 /*74*/].f_1, 1) || func_100(Global_1347702[1 /*49*/].f_15, 1)) || func_260(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_707(GET_HASH_KEY("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_532(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_315(iParam0, &iVar0, &iVar1);
	if (!func_834(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_835(iVar0, iVar1);
}

void func_533(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_654(iParam0, 1);
	func_836(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	func_836(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			func_657(17, iParam0, 0, 0, 0);
		}
	}
	if (func_24() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_836(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_836(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_534()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(17);
		Global_1898441[iVar0 /*38*/] = 17;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA2_COM", 24);
	}
}

void func_535()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(18);
		Global_1898441[iVar0 /*38*/] = 18;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA3_COM", 24);
	}
}

int func_536(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_476(iParam1, 1, 0) };
		iParam3 = func_653(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_837(iParam3);
	return func_468(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_537(int iParam0)
{
	int iVar0;

	if (!func_363(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_VISIBLE(iVar0, true);
}

bool func_538(int iParam0, int iParam1)
{
	if (!func_838(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_839(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_840(&(Global_40.f_9910[iParam1 /*6*/]), 4);
}

void func_539(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_838(iParam0))
	{
		return;
	}
	if (!func_246(iParam1))
	{
		return;
	}
	if (func_41(iParam1, 1))
	{
		return;
	}
	iVar0 = func_839(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_538(iParam0, -1))
	{
		return;
	}
	else
	{
		func_841(&(Global_40.f_9910[iVar0 /*6*/]), 2);
	}
	Global_40.f_9910[iVar0 /*6*/].f_4 = iParam1;
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_392(0, 17);
		}
	}
}

void func_540()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(19);
		Global_1898441[iVar0 /*38*/] = 19;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MOB5_COM", 24);
	}
}

void func_541()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(20);
		Global_1898441[iVar0 /*38*/] = 20;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_SAI1_COM", 24);
	}
}

void func_542()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(21);
		Global_1898441[iVar0 /*38*/] = 21;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA1_COM", 24);
	}
}

void func_543()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(22);
		Global_1898441[iVar0 /*38*/] = 22;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA3_COM", 24);
	}
}

void func_544()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(24);
		Global_1898441[iVar0 /*38*/] = 24;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ODR5_COM", 24);
	}
}

void func_545()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(25);
		Global_1898441[iVar0 /*38*/] = 25;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN1_COM", 24);
	}
}

void func_546()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(27);
		Global_1898441[iVar0 /*38*/] = 27;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MAR51_COM", 24);
	}
}

void func_547()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(28);
		Global_1898441[iVar0 /*38*/] = 28;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_548(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_549(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_550(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_678(iParam0);
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
		if (!func_842(iParam0, 1))
		{
			return false;
		}
	}
	return func_742(iParam0, 0, bParam2) >= iParam1;
}

void func_551(int iParam0)
{
	if (func_212(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_843(MISC::VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		func_843(MISC::VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

void func_552()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(29);
		Global_1898441[iVar0 /*38*/] = 29;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BEE22_COM", 24);
	}
}

void func_553()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(26);
		Global_1898441[iVar0 /*38*/] = 26;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN2_COM", 24);
	}
}

void func_554()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(23);
		Global_1898441[iVar0 /*38*/] = 23;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOC_COM", 24);
	}
}

void func_555()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(15);
		Global_1898441[iVar0 /*38*/] = 15;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOW3_COM", 24);
	}
}

void func_556()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_738(16);
		Global_1898441[iVar0 /*38*/] = 16;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DUT1_COM", 24);
	}
}

void func_557()
{
	if (func_844() > 1)
	{
		func_845();
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_BAND_ROOT"), true);
			func_532(444, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HERB_ROOT"), true);
			func_532(447, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HORSE_ROOT"), true);
			func_532(448, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SHOT_ROOT"), true);
			func_532(450, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_WEAP_ROOT"), true);
			func_532(452, 1);
		}
	}
}

bool func_558(int iParam0)
{
	return func_344(iParam0, 4, 1);
}

void func_559(int iParam0)
{
	func_846(iParam0, 4, 1);
}

void func_560(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_394(GET_HASH_KEY("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_561(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_212(32768))
	{
		return;
	}
	if (!func_37(iParam0))
	{
		return;
	}
	func_214(&Global_1935630, 8192);
	iVar2 = 1;
	switch (func_27(iParam0))
	{
		case 1:
			func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS")), 1);
			iVar0 = func_106(iParam0);
			func_216(func_394(GET_HASH_KEY("MISSIONS_PROGRESSED")), 1);
			switch (func_732(iVar0))
			{
				case 0:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
			{
				func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			iVar1 = func_106(iParam0);
			if (func_108(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				func_216(func_394(GET_HASH_KEY("MISSIONS_PROGRESSED")), 1);
			}
			if (func_108(Global_1347702[iVar1 /*49*/].f_12, 4) || iVar1 == 59)
			{
				if (func_108(Global_1347702[iVar1 /*49*/].f_12, 1))
				{
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS")), 1);
				}
				else
				{
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC")), 1);
				}
			}
			if (func_108(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				switch (func_733(iVar1))
				{
					case 0:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar1 /*49*/].f_3))))
				{
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_108(Global_1347702[iVar1 /*49*/].f_12, 4))
			{
				if (func_108(Global_1347702[iVar1 /*49*/].f_12, 4194304))
				{
				}
				else if (!func_108(Global_1347702[iVar1 /*49*/].f_12, 512))
				{
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS")), 1);
				}
				else
				{
					func_216(func_215(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_562()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_24() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!func_847(64))
	{
		return;
	}
	else if (func_78(Global_1935630, 131072))
	{
		return;
	}
	else if ((func_25(0, 0, 1) || func_848()) || func_523())
	{
		return;
	}
	iVar0 = func_522();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_849(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_318(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_318(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_850(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_392(0, -1);
	}
	if (iVar2 > 0)
	{
		func_851("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_852(1, 0);
	Global_1956575.f_4 = 1;
}

void func_563(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_212(32768))
	{
		return;
	}
	func_853(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_854(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_564(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_855(iParam0);
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_856(iParam0))
	{
		return 0;
	}
	if (!func_331())
	{
		return 0;
	}
	if (!func_857(iParam0, &iVar0, &iVar1))
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

int func_566(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_858())
	{
		iVar2 = func_858();
	}
	iVar5 = func_859(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_109(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_109(iVar6) == 0)
			{
				return func_860(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_109(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_109(iVar6) == 0)
			{
				return func_860(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_860(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_861(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

int func_568(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_24() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

char[] func_570(int iParam0)
{
	char[] cVar0[8];

	if (!func_37(iParam0))
	{
		return cVar0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_715(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_106(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_566(0, 10, 11, GET_HASH_KEY("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_571(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_862();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_27(Global_1879514.f_1) == 1)
			{
				func_565(5, 1);
			}
			else if (func_27(Global_1879514.f_1) == 8 && (func_108(Global_1347702[func_106(Global_1879514.f_1) /*49*/].f_12, 1) || func_108(Global_1347702[func_106(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_565(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_572(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 16:
			return 1;
		case 36:
			return 2;
		case 79:
			return 3;
		case 125:
			return 4;
		case 127:
			return 5;
		case 118:
			return 6;
		case 129:
			return 7;
		case 114:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_574(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

void func_575(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_576(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_577(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_159(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_863(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}
	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;
	if (func_864(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		if (Global_1393237.f_11[iParam0 /*30*/].f_17 != func_865())
		{
		}
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_865();
	}
	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[iVar0] = 0;
		iVar0++;
	}
	func_866(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[0]));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
		{
			MAP::REMOVE_BLIP(&(Global_1393237.f_11[iParam0 /*30*/].f_18[1]));
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1393237.f_11[iParam0 /*30*/].f_21))
	{
		func_863(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);
	}
}

void func_578(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_579()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_867(iVar0, 128))
		{
			func_868(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_580()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_867(iVar0, 128) && func_867(iVar0, 1))
		{
			func_868(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_581(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_582()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_221(iVar0, 16777216))
		{
			if (!func_869(iVar0))
			{
				func_870(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_583(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_584(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_871(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_872(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_873(iVar0) < func_874(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_875(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_876(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_876(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_876(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_876(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_876(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_876(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_876(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_586(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_292();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_587(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_588(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

void func_589(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_590(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_591(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

bool func_592(int iParam0)
{
	return func_192(iParam0) == 0;
}

int func_593(bool bParam0, bool bParam1, bool bParam2)
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

bool func_594(int iParam0)
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
		iVar0 = func_311(iParam0);
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

void func_595(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_877(iParam0))
	{
		return;
	}
	uVar0 = Global_1835011[iParam0 /*74*/].f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { Global_1835011[iParam0 /*74*/].f_18 };
	MemCopy(&Var5, {Global_1835011[iParam0 /*74*/].f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, Global_1835011[iParam0 /*74*/].f_26, GET_HASH_KEY("TOAST_LOG_BLIPS"));
}

void func_596(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_575(iParam0, func_574(iParam0) + 1);
}

int func_597(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_704(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_878(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_879(iVar0, iParam1);
	return iParam1;
}

void func_598(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_599(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_600(bool bParam0)
{
	func_880(bParam0);
	func_881(bParam0);
	func_882(bParam0);
	func_883(bParam0);
	func_884(bParam0);
	func_885(bParam0);
	func_886(bParam0);
	func_887(bParam0);
}

void func_601(bool bParam0)
{
	if (func_24() != -1)
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
		func_532(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_532(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_888(1, bParam0, 1);
	func_787();
	Global_40.f_11095.f_43 = bParam0;
}

void func_602(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_889(Global_1898077.f_7, Global_1898077.f_3);
}

void func_603(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_890(Global_1898077.f_7, Global_1898077.f_4);
}

bool func_604(int iParam0)
{
	int iVar0;

	iVar0 = func_573(iParam0);
	return func_891(iVar0, 16);
}

void func_605(int iParam0, int iParam1)
{
	func_152(&(Global_40.f_11864[iParam0 /*2*/].f_1), iParam1);
}

void func_606(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_892();
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
			func_893(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_607(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_608(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_894(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_609(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_24() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_895(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_895(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_635(iVar0) == -1)
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

void func_610(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_896(uParam0);
	}
}

bool func_611(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_635(iParam2);
	}
	else
	{
		iVar1 = func_634(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_635(iParam0);
	}
	else
	{
		iVar0 = func_634(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_583(*uParam1, 8388608))
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

float func_612(var uParam0)
{
	return uParam0->f_26;
}

bool func_613(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_614(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_152(uParam0, 134217728);
	}
	else
	{
		func_153(uParam0, 134217728);
	}
}

void func_615()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_616(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_173(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_488(iVar0, 0)))
		{
			if (func_897(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_617(var uParam0)
{
	return uParam0->f_17;
}

bool func_618(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_583(*uParam0, 4194304))
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

int func_619(var uParam0)
{
	return uParam0->f_18;
}

bool func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_488(iVar0, 0)))
		{
			if (func_314(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_621(var uParam0)
{
	return uParam0->f_23;
}

int func_622(var uParam0)
{
	return uParam0->f_21;
}

int func_623(var uParam0)
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

bool func_624(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_898(iParam0, vParam4, 0.5f))
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

int func_625(int iParam0)
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
	if (func_899(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_626(int iParam0)
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

bool func_627(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_369(iParam1))
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

bool func_628(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_369(iParam1))
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

bool func_629(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_369(iParam1))
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

bool func_630(int iParam0, int iParam1)
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

bool func_631(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_900(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
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

bool func_632(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_633(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_294(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_634(int iParam0)
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

int func_635(int iParam0)
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

int func_636(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_630(Global_35, &iVar1))
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
		fVar2 = func_173(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_173(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_637(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_894(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_638(uParam1, iVar0))
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
				if (!bParam2 || !func_638(uParam1, iVar1))
				{
					if (func_294(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_638(var uParam0, int iParam1)
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

bool func_639(int iParam0)
{
	if (func_31())
	{
		return false;
	}
	return func_100(Global_1347702[58 /*49*/].f_15, 1);
}

int func_640(var uParam0)
{
	return uParam0->f_20;
}

int func_641(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_642(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_643(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_644(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_645(int iParam0)
{
	int iVar0;

	iVar0 = func_126(iParam0);
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

void func_646(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

int func_647(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_648(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

void func_649(int iParam0)
{
	int iVar0;

	if (!func_345(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_901(iParam0);
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

bool func_650(int iParam0)
{
	return func_902(iParam0, 2);
}

void func_651()
{
	Global_1911774 = 1;
}

void func_652(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

int func_653(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_670(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_654(int iParam0, int iParam1)
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

bool func_655(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_903();
	if (iParam2 == 39)
	{
		Var0 = { func_476(iParam0, 1, 0) };
		iParam2 = func_654(func_653(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_757(iParam0, 866047851) && func_904(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_658(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_905(func_670(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_906(iParam2);
	func_907(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_908(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_908(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_909(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_910(iParam0, iParam2, iParam1, func_24() != -1);
	if (bParam4)
	{
		func_911(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_911(&(Global_1946804.f_1378), 1, 0);
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
				func_672(func_670(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_656(bool bParam0, bool bParam1, bool bParam2)
{
	func_912(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_657(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_665(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_913(Var0);
}

bool func_658(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_659()
{
	func_914(&(Global_1946804.f_2776));
	func_915(32768);
	func_672(1108822547, 8, 6);
}

int func_660(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_654(iParam0, 1);
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

void func_661(int iParam0)
{
	struct<4> Var0;

	if (func_916(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_917(Var0);
}

void func_662(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_917(Var0);
}

int func_663(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_480(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_664(bParam6), &Var0, 0);
	return uVar4;
}

int func_664(bool bParam0)
{
	if (func_24() == -1)
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

void func_665(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_666(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_670(iParam1, 1);
	if (!bParam2 && iVar2 == GET_HASH_KEY("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_918(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
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
				PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_667(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_654(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_668(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_669(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_667(1108822547, 6))
	{
		if (bParam2)
		{
			func_666(iParam0, iVar0, func_24() != -1, 0, 0);
			func_671(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_672(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_670(int iParam0, int iParam1)
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

void func_671(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_654(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_654(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_672(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_654(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_654(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_654(iParam0, 1) /*11*/].f_10 && iParam1));
}

bool func_673(int iParam0, int iParam1)
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

bool func_674(int iParam0, int iParam1)
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

bool func_675(int iParam0, int iParam1)
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
	if (!func_673(iParam0, iVar0))
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

void func_676(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_677(bool bParam0)
{
	return func_480(GET_HASH_KEY("CHARACTER"), func_919(), -1591664384, bParam0);
}

int func_678(int iParam0)
{
	vector3 vVar0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_679(bool bParam0)
{
	int iVar0;

	iVar0 = func_664(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_480(923904168, func_677(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_480(923904168, func_677(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_480(923904168, func_677(bParam0), -740156546, 0);
}

bool func_680(int iParam0, bool bParam1)
{
	if (func_682(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_328(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_681(bool bParam0)
{
	int iVar0;

	iVar0 = func_664(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_480(271701509, func_677(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_480(271701509, func_677(bParam0), 12999093, 0);
}

int func_682(int iParam0)
{
	struct<2> Var0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_683(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_682(iParam0);
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

bool func_684(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_664(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_664(0);
	*uParam1 = { func_480(iParam0, func_679(0), iParam3, 0) };
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

bool func_686(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_687(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_688(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

float func_689(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_250(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_920(uParam0);
	}
	return func_250(uParam0);
}

float func_690(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_691()
{
	int iVar0;
	int iVar1;

	iVar0 = func_116(func_121());
	iVar1 = func_117(func_121());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

void func_692(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_130(iParam2, iParam3) };
	*uParam1 = func_131(iParam2, iParam3);
}

int func_693(int iParam0)
{
	int iVar0;

	iVar0 = func_654(func_921(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_694(var uParam0)
{
	if (func_695(81053684, uParam0))
	{
		return true;
	}
	if (func_695(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_695(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_654(func_921(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_682(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

var func_696()
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_922(GET_HASH_KEY("FAME"));
}

bool func_697()
{
	return Global_1347398.f_1 == 0;
}

void func_698(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_699()
{
	return Global_1347398.f_1 == 1000;
}

bool func_700()
{
	return Global_1347398.f_1 == 2000;
}

bool func_701()
{
	return Global_1347398.f_1 == 3000;
}

void func_702(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_703(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_923(iParam0);
	}
	else
	{
		func_924(iParam0, iParam1);
	}
	func_925();
}

int func_704(int iParam0)
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

int func_705(int iParam0)
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
	func_879(iParam0, Global_1898164.f_162);
	return 1;
}

void func_706(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_707(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_926(iParam0);
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

int func_708(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_720(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_709()
{
	return Global_40.f_11095.f_35;
}

void func_710(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_927(iParam0, 0);
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
		func_711(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_711(int iParam0)
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
			func_927(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_928(1);
	}
}

bool func_712(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_713()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38(Global_1347702[9 /*49*/].f_15);
	iVar1 = func_38(Global_1835011[69 /*74*/].f_1);
	if (func_122(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_714(int iParam0)
{
	if (!func_877(iParam0))
	{
		return false;
	}
	return func_100(Global_1835011[iParam0 /*74*/].f_1, 1);
}

int func_715(int iParam0)
{
	if (func_27(iParam0) == 1)
	{
		return func_106(iParam0);
	}
	return -1;
}

int func_716(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_929(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_930(iVar6);
	}
	return iVar5;
}

int func_717(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_931(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_718(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_932(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_719(int iParam0)
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

void func_720(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_718(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_721(2, *uParam0);
		}
		else
		{
			func_722(2, *uParam0);
		}
	}
	func_933(uParam0);
}

void func_721(int iParam0, int iParam1)
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

void func_722(int iParam0, int iParam1)
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

void func_723(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_934(iParam0, iParam1, bParam2);
}

int func_724(int iParam0)
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

int func_725(int iParam0)
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

void func_726(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_935();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_936(iParam0);
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
	if (func_328(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_31())
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
	Global_40.f_11095.f_35 = func_511(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_935();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_937(iVar1);
		func_939(func_938(), 0, 4000);
		func_940(Global_40.f_11095.f_35);
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
		func_941(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_216(func_394(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_725(14))
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
					sParam4 = func_942(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_216(func_394(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_725(4))
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
					sParam4 = func_942(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_394(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_565(10, 1);
	}
}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_728(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

bool func_729(int iParam0)
{
	if (!func_37(iParam0))
	{
		return false;
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (func_106(iParam0))
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
			switch (func_106(iParam0))
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

void func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_664(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_682(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_944(func_943(iParam0), 6);
}

void func_731(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_664(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_682(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_945(func_943(iParam0), 6);
}

int func_732(int iParam0)
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

int func_733(int iParam0)
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

void func_734(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_735()
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

int func_736(int iParam0)
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

void func_737(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_738(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_739(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_24() == -1)
	{
		if (func_946(iParam0) && func_947(iParam0))
		{
			func_948(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_740(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_949(iParam0, iParam1);
	Var0 = { func_476(iParam0, 0, 1) };
	iVar5 = func_950(iParam0, &Var0, 0, 0);
	iVar6 = func_951(iParam0, 0);
	if ((iVar5 > 1 && !func_523()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_757(iParam0, -2051813666))
		{
			func_532(583, 1);
		}
		else
		{
			func_532(582, 0);
		}
	}
	if (func_952(iParam0, &Var0, *iParam1, 0, 0))
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

void func_741(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_810(iParam0, -949239683))
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

int func_742(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_678(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_953(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_954(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_664(bParam2), iParam0, 0);
	return iVar2;
}

bool func_743(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_744(iParam0) != 0;
}

int func_744(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_955())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_956(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_745(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_955())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_745(iVar0))
		{
			if (func_550(func_956(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_747(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_957(48);
	func_392(0, -1);
}

bool func_748(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_100(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_749(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_750(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_751(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_100(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_752(int iParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_107(iParam0))
	{
		return false;
	}
	return func_260(Global_1347702[iParam0 /*49*/].f_15);
}

int func_753()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_550(func_958(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_754(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_331() && (func_752(38) || func_748(38)))
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
			if (func_331() && (func_752(39) || func_748(39)))
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
			iVar9 = func_959(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_331() && (func_752(41) || func_748(41)))
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
			if (func_331() && (func_752(49) || func_748(49)))
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
			iVar9 = func_959(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_960(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_961(iParam0, iVar13, iVar14))
	{
	}
	if (func_962(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_963(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_964(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_965(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_966(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_755(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_756(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_331() && (func_752(38) || func_748(38)))
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
			if (func_331() && (func_752(39) || func_748(39)))
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
			if (func_331() && (func_752(49) || func_748(49)))
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
		if (func_331() && (func_752(38) || func_748(38)))
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
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_318(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_968(func_750(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_331() && (func_752(39) || func_748(39)))
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
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_331() && (func_752(49) || func_748(49)))
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
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_967(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_757(int iParam0, int iParam1)
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

bool func_758(int iParam0, int iParam1)
{
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_759(int iParam0)
{
	if (!func_441(iParam0))
	{
		return;
	}
	func_969(iParam0);
	func_970(iParam0);
}

int func_760(int iParam0, bool bParam1)
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
	if (func_686(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_971(iVar0) || func_364(iVar0))
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

int func_761(int iParam0, bool bParam1)
{
	if (!func_686(iParam0, 0))
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

void func_762(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_363(iParam0))
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

bool func_763(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_761(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_24() == -1)
		{
			func_762(iVar0);
			if (iParam1 == 1248274121)
			{
				func_972(iVar0);
			}
		}
		if (!func_952(iParam0, &uVar1, 1, 0, 0))
		{
			func_948(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_973(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_365(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_365(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_365(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_31())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_367(iVar0))
				{
					func_365(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_365(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_974(Global_35, 2, 0, 1);
				if ((((func_363(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_328(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_363(iVar7) && func_328(24))
				{
					if (!func_365(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_365(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_365(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_532(480, 1);
	}
	return true;
}

bool func_764(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_688(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_363(iVar4))
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
	if (func_550(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_797(func_975(iParam0), func_796(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_24() == -1)
		{
			if (func_100(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_532(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_482(0))
	{
		if (func_483(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_802(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_765(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_32()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_976(Global_35, iParam0, &uVar0))
		{
			func_468(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_787();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_787();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_787();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_785();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_783();
			break;
	}
}

void func_766(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_783();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_784();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_785();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_786();
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
			func_787();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_977();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_978();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_767(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_768(int iParam0)
{
	bool bVar0;

	bVar0 = func_757(iParam0, -2017733358);
	if (func_979() < 3)
	{
		if (bVar0)
		{
			if (func_981(func_980(iParam0), iParam0))
			{
				func_797(79, func_796(func_980(iParam0)), 1);
			}
			else
			{
				func_797(78, func_796(func_980(iParam0)), 1);
			}
		}
		else
		{
			func_797(80, func_796(func_982(iParam0)), 1);
		}
	}
}

bool func_769()
{
	if (((((func_983(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_983(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_983(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_983(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_983(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_983(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_770(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_861(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_984(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_985(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_771(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_756(51, 0, 0, 0, 0, -1, 0);
			func_986(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_756(51, 0, 0, 0, 0, -1, 0);
			func_986(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_754(39, 0, 0, 0, 0, 0, 1, 0);
			func_756(39, 0, 0, 0, 0, -1, 0);
			func_987(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_754(41, 0, 0, 0, 0, 0, 1, 0);
			func_756(41, 0, 0, 0, 0, -1, 0);
			func_988(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_754(49, 0, 0, 0, 0, 0, 1, 0);
			func_756(49, 0, 0, 0, 0, -1, 0);
			func_989(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_754(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_990(1), 0, -1, 0);
			func_991(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_754(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_990(2), 0, -1, 0);
			func_991(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_754(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_990(4), 0, -1, 0);
			func_991(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_754(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_990(8), 0, -1, 0);
			func_991(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_754(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_990(16), 0, -1, 0);
			func_991(16);
			break;
	}
}

void func_772(int iParam0)
{
	if (func_992() == 1)
	{
		if (func_748(39))
		{
			func_532(342, 0);
		}
		else
		{
			func_532(343, 0);
			func_987(1);
		}
	}
	if (func_992() >= 30)
	{
		func_532(344, 0);
	}
	func_754(39, 0, 0, 0, 0, 0, -1, 0);
	func_756(39, 0, 0, func_992(), 30, 1, 0);
}

void func_773(int iParam0)
{
	if (func_993() == 1)
	{
		if (func_748(49))
		{
			func_532(409, 0);
		}
		else
		{
			func_532(410, 0);
			func_989(1);
		}
	}
	if (func_993() >= 10)
	{
		func_532(411, 0);
	}
	func_754(49, 0, 0, 0, 0, 0, -1, 0);
	func_756(49, 0, 0, func_993(), 10, 1, 0);
}

void func_774(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_532(437, 0);
			func_532(440, 0);
			func_994(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_986(1);
			func_102(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_994(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_986(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_994(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_986(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_994(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_986(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_532(438, 0);
			func_994(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_754(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_756(51, 0, 0, sVar0, func_959(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_986(32768);
			break;
		default:
			func_532(439, 0);
			break;
	}
}

void func_775()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_776(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_24() == -1)
	{
		if (!func_748(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_532(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_532(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_532(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_532(400, 0);
			}
		}
		else if (func_757(iParam0, 412399755))
		{
			func_995(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_996() == 0)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_748(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_532(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_532(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_532(401, 0);
			}
		}
		else if (func_757(iParam0, 709057512))
		{
			func_995(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_996() == 1)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_748(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_532(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_532(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_532(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_532(398, 0);
			}
		}
		else if (func_757(iParam0, -1478961327))
		{
			func_995(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_996() == 2)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_1000(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_1001(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_957(48);
					}
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_748(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_532(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_532(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_532(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_532(406, 0);
			}
		}
		else if (func_757(iParam0, -1238404098))
		{
			func_995(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_996() == 3)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_748(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_532(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_532(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_532(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_532(403, 0);
			}
		}
		else if (func_757(iParam0, 1160548794))
		{
			func_995(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_996() == 4)
			{
				func_392(0, 10);
				iVar1 = func_997(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_998(iParam0) < func_999(iParam0))
					{
						func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_756(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_777(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_1000(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_1001(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_957(48);
		}
	}
}

void func_778(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_550(func_1002(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1003(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1004(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_779(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_770(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_770(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_770(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_770(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_770(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_770(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_770(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_770(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_770(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_770(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_770(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_770(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_770(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_1005())
			{
				func_770(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_770(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_770(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_770(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_770(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_770(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_770(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_770(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_770(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_770(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_770(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_770(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_770(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_770(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_780(int iParam0)
{
	if (func_748(41))
	{
		func_532(363, 0);
	}
	else
	{
		func_532(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_392(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_1006(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_1007(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_1008(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_781(int iParam0, int iParam1)
{
	var uVar0;

	func_1009(iParam0, iParam1, &uVar0);
}

bool func_782(int iParam0, bool bParam1)
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
	iVar18 = func_974(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_974(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1010("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1011(&Var3, iVar2, iVar0, iVar1))
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
						func_1012(iVar0);
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

void func_783()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_784()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_785()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_786()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_787()
{
	func_1013();
	func_1014();
	func_1015();
}

void func_788(int iParam0, int iParam1, bool bParam2)
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

void func_789(int iParam0, bool bParam1)
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
	func_967(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_790(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_791(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_792(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_793(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_794(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_795(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_796(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_797(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_315(iParam0, &iVar0, &iVar1);
	if (!func_834(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1016(iParam0, 1024))
	{
		return;
	}
	func_835(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_798(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_315(iParam0, &iVar0, &iVar1);
	if (!func_834(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1016(iParam0, 1024))
	{
		return;
	}
	func_835(iVar0, iVar1);
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

int func_799()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_955())
	{
		return func_800();
	}
	iVar4 = (func_955() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_955())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1017(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_956(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_800()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_955());
	return func_956(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_801(int iParam0)
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

bool func_802(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_476(iParam0, 0, 1) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	return func_1018(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_803(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return;
	}
	switch (func_682(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_1019(81053684, 0) <= 0)
			{
				func_657(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_657(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1020(iParam0);
			if (func_1021(iVar0))
			{
				func_1022(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_657(30, iParam0, 0, 0, 0);
			}
			if (func_829() == -2125499975 || func_829() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_657(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_829() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_657(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1023(-525676072, 0))
			{
				if (func_1024(-525676072, &iVar1))
				{
					func_657(33, iVar1, 0, 0, 0);
				}
			}
			func_657(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_1025(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_468(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_759(24);
		if (func_782(&iVar2, 0))
		{
			func_365(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_804(int iParam0)
{
	if (func_757(iParam0, 943695443))
	{
		func_1026(0, iParam0);
	}
	else if (func_757(iParam0, -2096528786))
	{
		func_1026(1, iParam0);
	}
	else if (func_757(iParam0, -1094167013))
	{
		func_1026(2, iParam0);
	}
	else if (func_757(iParam0, 1936654645))
	{
		func_1026(3, iParam0);
	}
	else if (func_757(iParam0, 1306489306))
	{
		func_1026(4, iParam0);
	}
	else if (func_757(iParam0, 435762317))
	{
		func_1026(5, iParam0);
	}
	else if (func_757(iParam0, 1259363210))
	{
		func_1026(6, iParam0);
	}
	else if (func_757(iParam0, 881398259))
	{
		func_1026(7, iParam0);
	}
	else if (func_757(iParam0, -541549214))
	{
		func_1026(8, iParam0);
	}
	else if (func_757(iParam0, 130796156))
	{
		func_1026(-1, iParam0);
	}
}

int func_805(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1027(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_1028(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_806(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_686(iParam0, 0))
	{
		return Var0;
	}
	if (func_757(iParam0, -305066475))
	{
		if (func_24() == -1)
		{
			if (func_757(iParam0, -537818634))
			{
				return func_394(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_394(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_757(iParam0, -537818634))
	{
		return func_394(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_757(iParam0, 2084895747))
	{
		return func_394(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_807(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_24() == -1)
			{
				if (func_100(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_532(109, 1);
				}
			}
			break;
	}
}

void func_808(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1030(func_1029(0));
	func_843(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1031(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_809(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_686(iParam0, 0))
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
	if (!func_1032())
	{
		func_1033(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1034(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1034(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_758(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_678(iParam0);
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
	else if (!func_1035(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_330(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_796(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_757(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_796(iParam0));
	}
	func_843(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_810(int iParam0, int iParam1)
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

struct<10> func_811(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_812(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_813(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_814(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1036(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == GET_HASH_KEY("COST_TYPE_CRAFT") && func_1036(iParam0, Var2, 1))
				{
					if (func_1037(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1037(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_532(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_25(0, 0, 1))
		{
			func_392(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_815(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_816(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			iVar0 = 307;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			iVar0 = 308;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"):
			iVar0 = 309;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			iVar0 = 310;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SUPER_MEAL"):
			iVar0 = 311;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			iVar0 = 312;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			iVar0 = 313;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			iVar0 = 314;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			iVar0 = 315;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"):
			iVar0 = 316;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"):
			iVar0 = 317;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"):
			iVar0 = 319;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			iVar0 = 320;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"):
			iVar0 = 321;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"):
			iVar0 = 322;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_POISON_ARROW"):
			iVar0 = 323;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"):
			iVar0 = 324;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			iVar0 = 325;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"):
			iVar0 = 326;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			iVar0 = 327;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			iVar0 = 328;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"):
			iVar0 = 329;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"):
			iVar0 = 330;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"):
			iVar0 = 331;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"):
			iVar0 = 332;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"):
			iVar0 = 333;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_INCENDIARY_BUCKSHOT"):
			iVar0 = 334;
			break;
		case GET_HASH_KEY("DOCUMENT_PAMPHLET_SLUG_EXPLOSIVE"):
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_532(iVar0, 0);
	}
}

void func_817()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(GET_HASH_KEY("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(GET_HASH_KEY("CABR01"), 0);
			func_1038(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1039();
		}
		return;
	}
	if (!func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	func_1040();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(GET_HASH_KEY("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(GET_HASH_KEY("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(GET_HASH_KEY("CABR01"), 2);
		}
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1038(1);
}

void func_818()
{
	if (!func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_525(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_819()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(GET_HASH_KEY("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1041(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1041(1);
}

void func_820()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(GET_HASH_KEY("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_1042(15000, 0, 0, 0, 1);
			func_1041(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_853(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1041(1);
}

void func_821()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(GET_HASH_KEY("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_550(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !func_260(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_525(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1043(1))
			{
				func_793(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(GET_HASH_KEY("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_550(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !func_260(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_525(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1043(2))
			{
				func_793(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(GET_HASH_KEY("TREASURE_HUNT_LOOT_15")) > 0 && !func_1043(4))
		{
			func_793(4);
		}
		if (func_1043(0))
		{
			func_1044(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(GET_HASH_KEY("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_550(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_824(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(GET_HASH_KEY("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_550(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_824(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (func_1043(1))
		{
			func_1044(1);
		}
		if (func_1043(2))
		{
			func_1044(2);
		}
		if (func_1043(4))
		{
			func_1044(4);
		}
		if (!func_1043(0))
		{
			func_793(0);
		}
	}
}

void func_822()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!func_100(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { func_1045() };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_762(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_365(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1045() };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_1046(GET_HASH_KEY("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_1046(GET_HASH_KEY("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_1046(GET_HASH_KEY("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_491())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_363(iVar16))
			{
				if (iVar16 != GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_328(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_328(24) && func_363(iVar15)) && iVar15 != GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_363(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_328(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_823()
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
}

int func_824(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_953(iParam0, 1);
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
			func_809(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_550(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_806(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_742(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_742(iParam0, 0, 0) - iParam1) < 0)
		{
			func_824(iParam0, func_742(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_678(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_1047(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1048(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_482(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_809(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1049(iParam0, iParam1);
	return 1;
}

bool func_825(int iParam0)
{
	switch (func_682(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_826(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_682(iParam0))
	{
		case -2061583405:
			bVar0 = func_1050(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1050(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1050(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1050(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1050(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1050(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1051();
	}
	if (bParam1)
	{
		func_1052(0, 0);
	}
}

int func_827(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_476(iParam0, 1, 0) };
	return func_653(Var0.f_4);
}

void func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_24() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_654(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_908(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
		}
	}
}

int func_829()
{
	return Global_1946804.f_1;
}

bool func_830(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_1053(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1055(uParam0, func_1054(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_654(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, GET_HASH_KEY("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = GET_HASH_KEY("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1056(iVar3) && func_1057(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							func_909(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_831(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_832(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_831(iParam0, iParam1) };
	return vVar0.x;
}

void func_833(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

bool func_834(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1058(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1059(iParam0))
	{
		return false;
	}
	if (func_1060(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_1016(iParam0, 1)) || func_212(32768))
	{
		if (!func_1016(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_1061())
	{
		return false;
	}
	return true;
}

void func_835(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_836(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_837(int iParam0)
{
	func_908(&(Global_1946804.f_1497.f_1[func_654(iParam0, 1) /*3*/]), 2, 6);
	func_908(&(Global_1946804.f_1378.f_1[func_654(iParam0, 1) /*3*/]), 2, 6);
}

bool func_838(int iParam0)
{
	return iParam0 != 0;
}

int func_839(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_838(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_840(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_841(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_842(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_953(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1010("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1011(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_363(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_1012(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1012(iVar1);
	}
	return false;
}

var func_843(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1062(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_844()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1063(iVar1);
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_1064(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_845()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1063(iVar0);
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_1064(iVar1)))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(func_1064(iVar1), true);
		}
		iVar0++;
	}
}

void func_846(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_349(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_847(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_848()
{
	return (func_78(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("RESPAWN_DUMP_BODY")) > 0);
}

int func_849(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_686(iVar0, 0))
	{
		return 0;
	}
	if (!func_1065(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1066(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_757(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_476(iVar0, 0, 1) };
	iVar10 = func_1067(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1068(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1069(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_525(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1042(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_850(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 1, GET_HASH_KEY("COLOR_RED"), 0, 0, 0, 1);
}

var func_851(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_852(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_24() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_853(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_984(iParam0, sParam4, iParam5);
	}
	func_985(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_854(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1070())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, GET_HASH_KEY("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, GET_HASH_KEY("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1070())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(func_568(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_106(iParam0);
	if (func_27(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1071(1, iVar1);
					func_1071(8, iVar1);
					func_1071(7, iVar1);
					break;
				case 12:
					func_1071(6, iVar1);
					break;
				case 53:
					func_1071(3, iVar1);
					func_1071(7, iVar1);
					func_1071(4, iVar1);
					break;
				case 20:
					func_1071(8, iVar1);
					break;
				case 19:
					func_1071(1, iVar1);
					func_1071(2, iVar1);
					break;
				case 24:
					func_1071(3, iVar1);
					func_1071(9, iVar1);
					func_1071(20, iVar1);
					break;
				case 28:
					func_1071(1, iVar1);
					break;
				case 34:
					func_1071(23, iVar1);
					func_1071(2, iVar1);
					func_1071(18, iVar1);
					break;
				case 29:
					func_1071(0, iVar1);
					func_1071(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1071(0, iVar1);
					func_1071(3, iVar1);
					func_1071(2, iVar1);
					func_1071(11, iVar1);
					func_1071(6, iVar1);
					func_1071(25, iVar1);
					func_1071(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1071(5, iVar1);
					break;
				case 63:
					func_1071(1, iVar1);
					func_1071(3, iVar1);
					break;
				case 37:
					func_1071(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_566(0, 10, 11, GET_HASH_KEY("CABR01")))
			{
				func_1071(7, iVar1);
				func_1071(4, iVar1);
			}
			else if (iParam0 == func_566(0, 7, 11, GET_HASH_KEY("CACR02")))
			{
				func_1071(8, iVar1);
				func_1071(15, iVar1);
			}
			else if (iParam0 == func_566(0, 8, 11, GET_HASH_KEY("CACR03")))
			{
				func_1071(3, iVar1);
			}
			else if (iParam0 == func_566(0, 11, 11, GET_HASH_KEY("CACR01")))
			{
				func_1071(6, iVar1);
				func_1071(3, iVar1);
			}
			else if (iParam0 == func_566(0, 12, 11, GET_HASH_KEY("CACR04")))
			{
				func_1071(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1072()));
	if (!func_312(629))
	{
		func_532(629, 0);
	}
}

int func_855(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_856(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_857(int iParam0, int iParam1, int iParam2)
{
	if (!func_856(iParam0))
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

int func_858()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_859(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_860(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1073(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_858())
	{
		return -1;
	}
	iVar0 = func_859(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_703(iVar1, 0);
	func_575(iVar1, 0);
	func_1074(iVar1, 0);
	func_1075(iVar1, 0);
	func_1076(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1077(iVar1, iParam4);
	}
	return iVar1;
}

int func_861(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_550(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_686(iVar25, 0) && func_757(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_862()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1078(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_1079(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_863(vector3 vParam0, int iParam3)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_159(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(uVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(uVar1) };
			if (func_1080(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(uVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_864(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return func_583(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

int func_865()
{
	return 0;
}

void func_866(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

bool func_867(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_868(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_869(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_870(int iParam0, int iParam1)
{
	if (!func_218(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

bool func_871(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_872(int iParam0)
{
	if (!func_218(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_873(int iParam0)
{
	if (func_218(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_874(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_875(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_876(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_876(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1081(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_24() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

bool func_877(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_878(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_109(iParam0);
		func_1082(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}
}

void func_879(int iParam0, int iParam1)
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
			func_1083((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1083(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(Global_1898164.f_1[0 /*5*/]))
	{
		func_497(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_880(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		func_1084(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_881(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1084(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_882(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1084(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_883(bool bParam0)
{
	func_1084(&Global_1956614, bParam0);
}

void func_884(bool bParam0)
{
	func_1084(&(Global_1415412.f_3), bParam0);
}

void func_885(bool bParam0)
{
	if (func_1085(Global_1934051.f_33))
	{
		func_1086(Global_1934051.f_33, 7148155);
	}
	func_1084(&(Global_1934051.f_33), bParam0);
}

void func_886(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1088(func_1087(iVar0));
		if (iVar1 != 0)
		{
			func_1086(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		func_1084(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_887(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_589(iVar0, -1);
		func_590(iVar0, 0);
		func_591(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
		}
		iVar0++;
	}
}

void func_888(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_889(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_890(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

bool func_891(int iParam0, int iParam1)
{
	return func_583(Global_40.f_11864[iParam0 /*2*/].f_1, iParam1);
}

bool func_892()
{
	if (func_1089())
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

void func_893(var uParam0, var uParam1)
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

bool func_894(bool bParam0, int iParam1, int iParam2)
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

int func_895(var uParam0)
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

void func_896(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_153(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_152(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_897(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_314(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_898(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_899(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_900(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_901(int iParam0)
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

bool func_902(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_903()
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

int func_904(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_905(int iParam0)
{
	func_672(iParam0, 8, 6);
}

void func_906(int iParam0)
{
	func_1090(&(Global_1946804.f_2589), iParam0);
}

void func_907(int iParam0, int iParam1)
{
	func_1091(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_908(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_909(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_682(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_668(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_907(iVar1, iVar3);
		}
	}
	if (func_1025(-1586649372) && func_668(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_907(iVar1, iVar3);
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
						func_907(iVar1, iVar3);
					}
				}
			}
			func_1092(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1092(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_907(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1092(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == GET_HASH_KEY("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1092(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1092(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1092(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_907(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_682(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1093(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_682(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_757(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
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
						func_907(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_1093(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_757(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_907(iVar1, iVar3);
					}
				}
			}
			switch (func_682(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_682(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_682(uParam0->f_1[iVar1 /*3*/]) || func_757(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_907(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_910(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1094(0);
	if (iParam2 != 0 && func_1095(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1057(iParam0, func_670(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_911(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_24() != -1;
	iVar7 = func_1094(0);
	if (func_658(32768))
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
			iVar5 = func_670(iVar0, 1);
			if (func_667(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_667(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1096(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1097(uParam0);
				if (iVar3 > 0)
				{
					if (!func_658(524288))
					{
						func_665(524288);
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
							iVar5 = func_670(iVar0, 1);
							if (func_667(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_667(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1096(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_907(iVar0, iParam2);
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
					func_915(524288);
				}
			}
		}
	}
}

void func_912(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1098(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_24() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1099(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_1100(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_1100(Global_40.f_7729);
				Global_1946804.f_1378 = func_1100(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1101(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1052(0, 1);
	}
}

void func_913(struct<4> Param0)
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
			if (func_1102(Param0))
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
			func_1103(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_665(8);
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
			if (func_1102(Param0))
			{
				return;
			}
			func_1103(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_665(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_662(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_914(var uParam0)
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

void func_915(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_916(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_917(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_1102(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_1102(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1103(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_665(8);
}

int func_918(int iParam0)
{
	int iVar0;

	iVar0 = func_682(iParam0);
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

struct<4> func_919()
{
	struct<4> Var0;

	return Var0;
}

var func_920(var uParam0)
{
	return uParam0->f_25;
}

int func_921(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_653(iVar0);
}

var func_922(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_394(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_923(int iParam0)
{
	int iVar0;

	iVar0 = func_438(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1104(iVar0);
}

int func_924(int iParam0, int iParam1)
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
			func_1105(iVar2);
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

void func_925()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

bool func_926(int iParam0)
{
	int iVar0;
	int iVar1;

	func_932(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

void func_927(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_928(1);
	}
}

void func_928(bool bParam0)
{
	if (bParam0)
	{
		func_152(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_153(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_929(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_930(int iParam0)
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

bool func_931(vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
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

int func_932(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1106(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_933(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_934(int iParam0, int iParam1, bool bParam2)
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

int func_935()
{
	int iVar0;

	iVar0 = func_709();
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

int func_936(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_24() != -1)
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
	fVar1 = func_1107(MISC::ABSF(fVar1) < 1f, func_1107(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_937(int iParam0)
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

int func_938()
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

void func_939(int iParam0, bool bParam1, int iParam2)
{
	func_1108((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_1109(iParam0);
}

void func_940(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_1110(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_941(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1111(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1112(iVar5, &iVar2, &iVar0))
			{
				if (!func_686(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1113(iVar2);
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
							if (func_678(iVar2) == GET_HASH_KEY("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_935() <= -160;
								}
								else if (iVar0 == GET_HASH_KEY("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_935() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1114();
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

char* func_942(int iParam0)
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

int func_943(int iParam0)
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

void func_944(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

void func_945(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

bool func_946(int iParam0)
{
	return func_678(iParam0) == GET_HASH_KEY("WEAPON");
}

bool func_947(int iParam0)
{
	var uVar0;

	if (func_24() != -1)
	{
		return false;
	}
	if (func_758(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_952(iParam0, &uVar0, 1, 0, 0);
	}
	return func_550(iParam0, 1, 0);
}

void func_948(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_678(iParam0) != GET_HASH_KEY("WEAPON"))
	{
		return;
	}
	iVar0 = func_761(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_364(iVar0))
	{
		if (func_24() == -1)
		{
			func_762(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_742(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_809(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_949(int iParam0, int iParam1)
{
	int iVar0;

	if (func_757(iParam0, 58855631))
	{
		func_1066(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_950(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_1115(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_664(bParam3), iParam0);
}

int func_951(int iParam0, bool bParam1)
{
	if (func_688(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_664(bParam1), iParam0, 0);
}

bool func_952(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1116(&iParam0);
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (!func_482(0))
	{
		bParam3 = true;
	}
	if (func_946(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_679(0) };
			Var4.f_9 = -1591664384;
			if (!func_478(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_479(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_680(iParam0, 1))
			{
				if (!func_478(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_479(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1117(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_950(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_1115(iParam0))
	{
		iVar28 = func_663(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_664(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_953(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_678(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_757(iParam0, 1399091007))
	{
		func_1009(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_954(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1118(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1119(&Var0, func_679(0));
	}
	if (!func_1120(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_1012(iVar14);
	return iVar15;
}

int func_955()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_956(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_957(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_1121(iParam0);
	fVar1 = func_1122(iParam0);
	if ((Global_1347477.f_117 || !func_328(31)) || !func_1123(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1124(iVar0) >= 7)
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
	func_1125(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_843(MISC::VAR_STRING(6, func_1126(iParam0), fVar1), "itemtype_textures", func_1127(iVar0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_958(int iParam0)
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

int func_959(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1128(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_960(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_753() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1129(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1130(), 12);
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
			else if (func_992() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1131(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_992(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1132(), 13);
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
			else if (func_993() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1133(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_993(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_959(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_961(int iParam0, int iParam1, int iParam2)
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

bool func_962(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_963(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_964(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1134(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_550(iVar2, 1, 0) || func_1136(func_1135(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_968(func_1134(iVar0))), func_968(func_1134(iVar0)), bVar1, true, false);
		}
		if (iParam2 == GET_HASH_KEY("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_992() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1131() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1002(iParam3, func_1138(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_998(iVar2) - iParam7) >= func_959(iParam3, func_1139(iVar0));
				}
				else
				{
					bVar1 = func_998(iVar2) >= func_959(iParam3, func_1139(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_998(iVar2) + iParam7) >= func_959(iParam3, func_1139(iVar0));
			}
			else
			{
				bVar1 = func_998(iVar2) >= func_959(iParam3, func_1139(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1140(iVar2)), func_1140(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1141(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1142(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1142(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == GET_HASH_KEY("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_993() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1143(iVar0)), func_1143(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1133() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1143(iVar0)), func_1143(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1143(iVar0)), func_1143(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == GET_HASH_KEY("TAXIDERMY"))
		{
			iVar2 = func_1002(iParam3, func_1138(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_998(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1144(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1144(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1145(iVar2)), func_1145(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_965(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1132() >= 13)
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

bool func_966(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_37(func_26(0)) && ((func_1146(0) == 1 || func_1146(0) == 8) || func_1146(0) == 6))
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

var func_967(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_968(int iParam0)
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

void func_969(int iParam0)
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

void func_970(int iParam0)
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
			func_1147(1);
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
			func_1148(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1148(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1148(3);
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
			func_1149(1);
			break;
		case 34:
			func_1150(1);
			break;
		case 35:
			func_1151(1);
			break;
		case 36:
			break;
		case 37:
			func_1152(0);
			break;
		case 38:
			func_1153(0);
			break;
		case 39:
			func_1154(0);
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
			if ((!Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_532(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_532(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_532(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_331()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_532(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_24() == -1)
			{
				if (!func_1025(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1155(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_31())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = GET_HASH_KEY("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_550(iVar0, 1, 0))
					{
						func_802(iVar0, 1, 752097756);
					}
					func_468(Global_35, iVar0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_24() == -1)
			{
				if (!func_550(1013902307, 1, 0))
				{
					func_802(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_24() == -1)
			{
				if (!func_550(1013902307, 1, 0))
				{
					func_802(1013902307, 1, 752097756);
				}
				if (!func_550(142640135, 1, 0))
				{
					func_802(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_24() == -1)
			{
				if (!func_550(786809402, 1, 0))
				{
					func_802(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_24() == -1)
			{
				if (!func_550(786809402, 1, 0))
				{
					func_802(786809402, 1, 752097756);
				}
				if (!func_550(-518019409, 1, 0))
				{
					func_802(-518019409, 1, 752097756);
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
			func_1156();
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

bool func_971(int iParam0)
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

void func_972(int iParam0)
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
	iVar2 = func_121();
	func_40(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_973(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1157(iParam0))
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

int func_974(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_975(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_328(50))
			{
				if (!func_328(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_328(51))
			{
				if (!func_328(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_976(int iParam0, int iParam1, var uParam2)
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

	if (!func_686(iParam1, 0))
	{
		return false;
	}
	if (func_678(iParam1) != GET_HASH_KEY("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_24() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_682(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_827(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_757(iParam1, 866047851))
	{
		iVar5 = func_654(iVar4, 1);
		if (func_904(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_682(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_757(iParam1, -1638171711))
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
			if (func_695(1868067663, &uVar0))
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
				iVar10 = func_1096(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1096(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_682(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_757(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_1093(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
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

void func_977()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_978()
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

int func_979()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_550(func_1158(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_980(int iParam0)
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

bool func_981(int iParam0, int iParam1)
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
	if (func_550(iVar0, 1, 0) && func_550(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_982(int iParam0)
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

bool func_983(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1159(iParam0);
	if (iVar0 != -15)
	{
		func_40(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_41(iVar0, 1);
	}
	return false;
}

void func_984(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_985(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1070())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_843(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_TOTAL_TAKE"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1160(iVar0);
			func_1161(iVar0, 0, 0);
		}
		func_843(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_216(func_394(GET_HASH_KEY("CAREER_CASH")), iVar1);
	}
}

void func_986(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_987(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_988(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_989(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_990(int iParam0)
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
	iVar1 = func_998(iVar9);
	iVar2 = func_998(iVar10);
	iVar3 = func_998(iVar11);
	iVar5 = func_999(iVar9);
	iVar6 = func_999(iVar10);
	iVar7 = func_999(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_998(iVar12);
		iVar8 = func_999(iVar12);
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

void func_991(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_992()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1162(COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_993()
{
	return COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("ROCK_CARVINGS"), 0);
}

bool func_994(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1144(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1144(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1144(iVar0))
		{
			*sParam2++;
		}
		if (func_1144(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1144(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1144(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1144(iVar0))
		{
			*sParam2++;
		}
		if (func_1144(iVar1))
		{
			*sParam2++;
		}
		if (func_1144(iVar0) && func_1144(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1144(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1144(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1144(iVar0))
		{
			*sParam2++;
		}
		if (func_1144(iVar1))
		{
			*sParam2++;
		}
		if (func_1144(iVar2))
		{
			*sParam2++;
		}
		if ((func_1144(iVar0) && func_1144(iVar1)) && func_1144(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1144(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1144(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1144(iVar0))
		{
			*sParam2++;
		}
		if (func_1144(iVar1))
		{
			*sParam2++;
		}
		if (func_1144(iVar2))
		{
			*sParam2++;
		}
		if (func_1144(iVar3))
		{
			*sParam2++;
		}
		if (((func_1144(iVar0) && func_1144(iVar1)) && func_1144(iVar2)) && func_1144(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_995(int iParam0)
{
	if (!func_1163(iParam0))
	{
		func_1165(func_1164(iParam0));
	}
}

int func_996()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1163(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_997(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_998(iVar9);
	iVar2 = func_998(iVar10);
	iVar3 = func_998(iVar11);
	iVar5 = func_999(iVar9);
	iVar6 = func_999(iVar10);
	iVar7 = func_999(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_998(iVar12);
		iVar8 = func_999(iVar12);
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

int func_998(int iParam0)
{
	int iVar0;

	if (func_550(iParam0, 1, 0))
	{
		iVar0 = func_742(iParam0, 0, 0);
	}
	return iVar0;
}

int func_999(int iParam0)
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

int func_1000(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1001(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1002(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1128(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1003(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1002(iParam1, 5) || iParam0 == func_1002(iParam1, 6)) || iParam0 == func_1002(iParam1, 7)) || iParam0 == func_1002(iParam1, 8)) || iParam0 == func_1002(iParam1, 9))
	{
		func_994(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_754(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_756(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1004(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_1002(iParam1, 5) || iParam0 == func_1002(iParam1, 6)) || iParam0 == func_1002(iParam1, 7)) || iParam0 == func_1002(iParam1, 8)) || iParam0 == func_1002(iParam1, 9))
	{
		if (func_994(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_754(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_756(51, 0, 0, iVar0, func_959(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_754(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_756(51, 0, 0, iVar0, func_959(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1005()
{
	if (func_260(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_1006(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1007(int iParam0)
{
	if (!func_1166(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1008(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1009(int iParam0, int iParam1, var uParam2)
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

bool func_1010(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_664(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1011(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1012(int iParam0)
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

float func_1013()
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

	if (func_1167())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1168(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1168(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1169();
	fVar2 = func_1170();
	fVar3 = func_1171();
	fVar4 = func_1172();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1173()));
	fVar7 = (func_1168(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1174(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1175(3, fVar9, fVar9 > 100f);
	return func_1176(fVar7, -100f, 100f);
}

float func_1014()
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

	if (func_1167())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1168(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1168(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1169();
	fVar2 = func_1170();
	fVar3 = func_1171();
	fVar4 = func_1172();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1173()));
	fVar7 = (func_1168(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1174(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1175(2, fVar9, fVar9 > 100f);
	return func_1176(fVar7, -100f, 100f);
}

float func_1015()
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

	if (func_1167())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1168(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1177())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1178())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1168(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1169();
	fVar2 = func_1170();
	fVar3 = func_1171();
	fVar4 = func_1172();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1173()));
	fVar7 = (func_1168(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1174(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1175(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1168(0);
	}
	return func_1176(fVar7, -100f, 100f);
}

bool func_1016(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_1017(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1018(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_686(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_952(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_482(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_664(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1019(int iParam0, bool bParam1)
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
				return func_1179();
			}
			break;
	}
	return 0;
}

int func_1020(int iParam0)
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

bool func_1021(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1022(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1021(iParam0))
	{
		return;
	}
	if (func_1180(iParam0))
	{
		return;
	}
	if (!func_1181(iParam0))
	{
		func_1182(iParam0, 1, 0);
	}
	iVar0 = func_1100(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1183(iParam0, 512))
		{
			func_657(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1184() && !bParam1) && !func_25(0, 0, 1))
	{
		func_851(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1185(iParam0, 6);
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_392(1, 4);
		}
	}
}

bool func_1023(int iParam0, bool bParam1)
{
	return func_1019(iParam0, 0) < func_1186(iParam0, bParam1);
}

bool func_1024(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_682(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1025(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_654(iParam0, 1) /*3*/] != Global_1946804.f_57[func_654(iParam0, 1) /*11*/];
}

void func_1026(int iParam0, int iParam1)
{
	if (func_757(iParam1, 130796156))
	{
		func_1187(iParam1, 0);
	}
	else if (func_757(iParam1, 930141731))
	{
		func_1187(iParam1, 1);
		func_1188(iParam0);
	}
}

void func_1027(var uParam0, int iParam1)
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

int func_1028(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1189(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1190(uParam2, iParam0, Var1);
	return 1;
}

int func_1029(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_1030(int iParam0)
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

int func_1031(int iParam0)
{
	var uVar0;

	if (!func_1191(iParam0, &uVar0, GET_HASH_KEY("INVENTORY"), 0, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
	{
		return GET_HASH_KEY("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_1032()
{
	return !Global_1911774;
}

void func_1033(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1034(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1035(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1036(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_24() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_1192(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_1037(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_24() != -1)
	{
		return false;
	}
	if (func_1192(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1038(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_525(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1039();
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1193(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_528(GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"));
		func_824(GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		func_1195(146323340, func_1194());
		Var0 = { func_1196() };
		if (func_1197(&Var0) == -1387633835)
		{
			func_1198(&Var0);
			func_1199(Var0);
		}
		iVar7 = GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_1200(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1201(iVar6) == GET_HASH_KEY("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_1202(iVar6, iVar7);
				func_1203(iVar6, iVar8);
				func_1204(iVar6, iVar9);
				func_1205(iVar6, 0);
				if (func_1206(iVar6))
				{
					func_1207(iVar6);
				}
				iVar10 = func_1208(iVar8);
				func_1209(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_1039()
{
	if (!func_1210(-1898635967, func_1194(), 1))
	{
		return 0;
	}
	if (func_32())
	{
		if (!func_1210(146323340, func_1194(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1040()
{
	func_537(GET_HASH_KEY("WEAPON_PISTOL_VOLCANIC"));
	func_537(GET_HASH_KEY("WEAPON_SHOTGUN_PUMP"));
	func_537(GET_HASH_KEY("WEAPON_RIFLE_VARMINT"));
}

void func_1041(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_525(GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_525(GET_HASH_KEY("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_824(GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_824(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_824(GET_HASH_KEY("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_1200(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1201(iVar0) == GET_HASH_KEY("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_1202(iVar0, iVar1);
				func_1203(iVar0, iVar2);
				func_1204(iVar0, iVar3);
				func_1205(iVar0, 0);
				if (func_1206(iVar0))
				{
					func_1207(iVar0);
				}
				iVar4 = func_1208(iVar2);
				func_1209(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1039();
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_1042(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1211(iParam0);
	if (bParam3)
	{
		func_850(iParam0, sParam1, iParam2);
	}
}

bool func_1043(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1044(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1045()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1010("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1011(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_479(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1012(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1012(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1046(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1212(Param1, iParam5, &Var5, 0))
	{
		func_481(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1018(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1213(Var19, 1);
}

bool func_1047(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_1118(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1119(&Var0, func_679(0));
	}
	if (!func_1120(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1011(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_481(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1012(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1048(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_476(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1214(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_480(iParam0, Var0, Var0.f_4, bParam4) };
	return func_481(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1049(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_757(iParam0, 606799272))
		{
			func_1215(iParam0, iParam1);
		}
		if (func_757(iParam0, -1112814642) && func_757(iParam0, -1697809989))
		{
			func_778(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1050(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1216(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_682(iParam0) != -999503751)
		{
			func_1217(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_682(iParam0) != -999503751)
	{
		func_1217(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_1218(iParam0, 1);
	return 1;
}

void func_1051()
{
	int iVar0;

	if (func_24() == -1)
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

void func_1052(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1219(0);
	}
	if (bParam0)
	{
		func_665(8);
		func_665(512);
	}
	else
	{
		func_665(8);
		func_665(16);
	}
}

int func_1053(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_829();
	}
	if (func_24() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1054(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case GET_HASH_KEY("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1055(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1220(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_670(iVar0, 1);
			if (func_668(iVar0, iParam1))
			{
				vVar4 = { func_831(iVar0, -1) };
				if ((vVar4.x != Global_1946804.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_667(iVar7, 4))
				{
					func_672(iVar7, 4, 6);
				}
			}
			else
			{
				func_671(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946804.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_1056(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804.f_964.f_2 = 0;
	if (func_24() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1221(&(Global_1946804.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804.f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1057(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = GET_HASH_KEY("BASE");
	return true;
}

bool func_1058(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_1059(int iParam0)
{
	if (func_24() != -1)
	{
		if (func_1016(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1016(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1060(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1016(iParam0, 65536) && !func_1016(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1016(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1016(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1061()
{
	return Global_1905944.f_5694;
}

void func_1062(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

int func_1063(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return GET_HASH_KEY("SP_CHAL_BAND_ROOT");
		case 2:
			return GET_HASH_KEY("SP_CHAL_HERB_ROOT");
		case 4:
			return GET_HASH_KEY("SP_CHAL_HORSE_ROOT");
		case 8:
			return GET_HASH_KEY("SP_CHAL_SHOT_ROOT");
		case 16:
			return GET_HASH_KEY("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

bool func_1065(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_24() == -1)
	{
		if (func_946(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_1066(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_686(iParam0, 0))
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

int func_1067(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1116(&iParam0);
	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	if (!func_482(0))
	{
		bParam2 = true;
	}
	iVar0 = func_950(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2 || !func_1115(iParam0))
	{
		iVar1 = func_663(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_664(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1068(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_757(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
		}
		iVar49 = 0;
		if (func_1222(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == GET_HASH_KEY("CURRENCY_CASH") || Var0[iVar32 /*2*/] == GET_HASH_KEY("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_810(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_813(iVar62, iVar61);
					if (func_686(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1068(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1068(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1222(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == GET_HASH_KEY("CURRENCY_CASH") || Var0[iVar32 /*2*/] == GET_HASH_KEY("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1069(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1223(1);
}

bool func_1070()
{
	if (func_32())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_1071(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1224(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::VAR_STRING(2, func_531(iParam0, 0))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1224(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::VAR_STRING(2, func_531(iParam0, 0))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1072()
{
	return Global_40.f_4283.f_325;
}

bool func_1073(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1074(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_1075(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_1076(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_1077(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

int func_1078(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;

	if (!func_37(iParam0))
	{
		return 0;
	}
	cVar0 = func_570(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1079(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

bool func_1080(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_1081(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

void func_1082(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_110(iParam0);
	*uParam1 = func_238(iParam0);
	*uParam2 = func_728(iParam0);
}

void func_1083(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

void func_1084(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_589(*uParam0, -1);
		func_590(*uParam0, 0);
		func_591(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
		}
	}
	*uParam0 = -1;
}

bool func_1085(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_1086(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_1088(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

bool func_1089()
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

void func_1090(var uParam0, int iParam1)
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
			if ((func_1225(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1225(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1226(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_1091(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1227(uParam0, 1))
	{
		func_1228(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_1092(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_907(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_907(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == GET_HASH_KEY("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = GET_HASH_KEY("BASE");
		if (bParam3)
		{
			func_907(iVar2, iVar0);
		}
	}
}

bool func_1093(int iParam0)
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

int func_1094(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_829();
	}
	iVar0 = 0;
	if (iParam0 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1095(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_1096(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_654(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_658(524288))
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

int func_1097(var uParam0)
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

void func_1098(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_24() == -1)
	{
		func_833(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1229(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1099(int iParam0, int iParam1)
{
	if (func_24() == -1)
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

int func_1100(int iParam0)
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

void func_1101(int iParam0, bool bParam1, int iParam2)
{
	func_1230(&(Global_1946804.f_1378), iParam0);
	func_1231(2, iParam0, 6);
	if (bParam1)
	{
		func_1052(0, 1);
	}
}

bool func_1102(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_1103(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

int func_1104(int iParam0)
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

int func_1105(int iParam0)
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

int func_1106(int iParam0, int iParam1)
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

float func_1107(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1108(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_1232(bParam1);
	}
}

void func_1109(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("HONORMETERVALUE"), iParam0);
}

char* func_1110(int iParam0)
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

bool func_1111(int iParam0)
{
	vector3 vVar0;

	if (!func_1128(23, &vVar0))
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

bool func_1112(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1128(23, &Var0))
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

int func_1113(int iParam0)
{
	return iParam0;
}

int func_1114()
{
	int iVar0;

	iVar0 = func_935();
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

bool func_1115(int iParam0)
{
	if (func_1233(iParam0, GET_HASH_KEY("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_1116(int iParam0)
{
	if (!func_686(*iParam0, 0))
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

bool func_1117(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_476(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_477((398 + iVar29), 1);
		if (func_478(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_479(iParam0, &Var6, iVar5);
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

struct<14> func_1118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1119(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1120(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_664(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1121(int iParam0)
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

float func_1122(int iParam0)
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
			return func_1234(iParam0);
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
			return func_1234(iParam0);
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
			return func_1234(iParam0);
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

bool func_1123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_328(18);
		case 2:
			return func_328(20);
		case 1:
			return func_328(19);
		default:
			break;
	}
	return true;
}

int func_1124(int iParam0)
{
	return func_1235(Global_40.f_11095.f_11[iParam0]);
}

void func_1125(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_24() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_328(31))
	{
		return;
	}
	iVar0 = func_1124(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1124(iParam0);
	if (func_1236(iParam0) && func_1237(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1238(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1239(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_532(func_1240(iParam0), 0);
					}
					func_1241(iParam0, iVar2, iVar3);
					func_1242(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1126(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1127(int iParam0)
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

bool func_1128(int iParam0, var uParam1)
{
	if (!func_1243(iParam0))
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

int func_1129()
{
	return func_1244(Global_40.f_12019);
}

int func_1130()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_958(iVar1);
		if (func_550(iVar2, 1, 0) || func_1136(func_1135(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1131()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1245(COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1132()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1141(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1133()
{
	return COLLECTION::_0x3A65F4844913A047(GET_HASH_KEY("ROCK_CARVINGS"), 0);
}

int func_1134(int iParam0)
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

int func_1135(int iParam0)
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

bool func_1136(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1137(int iParam0)
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

int func_1138(int iParam0)
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

int func_1139(int iParam0)
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

char* func_1140(int iParam0)
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

bool func_1141(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1142(int iParam0)
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

char* func_1143(int iParam0)
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

bool func_1144(int iParam0)
{
	if (func_1246(iParam0) && func_550(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1247(iParam0) && func_1248(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1145(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_796(iParam0));
}

int func_1146(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1147(bool bParam0)
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

void func_1148(int iParam0)
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

void func_1149(bool bParam0)
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

void func_1150(bool bParam0)
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

void func_1151(bool bParam0)
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

void func_1152(bool bParam0)
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

void func_1153(bool bParam0)
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

void func_1154(bool bParam0)
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

int func_1155(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_654(iParam0, 1) /*3*/];
}

void func_1156()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1249();
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_762(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_802(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_762(GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"));
		func_802(GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_1157(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_1158(int iParam0)
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

int func_1159(int iParam0)
{
	return func_1250(iParam0, -1);
}

void func_1160(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1251((Global_40.f_4283.f_325 + iParam0));
}

void func_1161(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1070())
	{
		func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, GET_HASH_KEY("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_GANG_SAVINGS"), 0, GET_HASH_KEY("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1162(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1163(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1164(int iParam0)
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

void func_1165(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1166(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1167()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1168(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1169()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1252(13);
	iVar1 = func_1253(fVar0);
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

float func_1170()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1171()
{
	if (func_32())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1172()
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

float func_1173()
{
	return Global_1955565.f_3;
}

void func_1174(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1254(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1175(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1254(iParam0, 2, 0, 0);
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

float func_1176(float fParam0, float fParam1, float fParam2)
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

bool func_1177()
{
	return func_1252(12) <= -99f;
}

bool func_1178()
{
	return func_1252(12) >= 99f;
}

int func_1179()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_682(iVar1) == -999503751)
		{
			if (func_1255() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1180(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return false;
	}
	if (func_1183(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_1181(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return false;
	}
	if (func_1183(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_1182(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1021(iParam0))
	{
		return;
	}
	if (!func_1181(iParam0))
	{
		func_1185(iParam0, 2);
		if (bParam2)
		{
			if (!func_25(0, 0, 1))
			{
				func_392(1, 4);
			}
		}
		if ((!func_1184() && !bParam1) && !func_25(0, 0, 1))
		{
			func_851(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1256(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_1183(int iParam0, int iParam1)
{
	if (!func_1021(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1184()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1185(int iParam0, int iParam1)
{
	if (!func_1021(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1186(int iParam0, bool bParam1)
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

void func_1187(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1257(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_759(50);
			}
			else
			{
				func_759(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_759(51);
			}
			else
			{
				func_759(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1258(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_783();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_783();
			}
			break;
		case 3:
			func_759(24);
			if (bParam1)
			{
				if (!func_1258(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_783();
				}
			}
			break;
	}
}

void func_1188(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1259(0))
			{
				iVar0++;
			}
			if (func_1259(2))
			{
				iVar0++;
			}
			if (func_1259(4))
			{
				iVar0++;
			}
			if (!func_1260(16))
			{
				if (iVar0 == 1)
				{
					func_1261();
					func_532(456, 1);
					func_1262(16);
				}
			}
			if (!func_1260(32))
			{
				if (iVar0 >= 3)
				{
					func_1261();
					func_532(456, 1);
					func_1262(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1259(1))
			{
				iVar0++;
			}
			if (func_1259(3))
			{
				iVar0++;
			}
			if (func_1259(7))
			{
				iVar0++;
			}
			if (!func_1260(1))
			{
				if (iVar0 == 1)
				{
					func_1263();
					func_532(457, 1);
					func_1262(1);
				}
			}
			if (!func_1260(2))
			{
				if (iVar0 >= 3)
				{
					func_1263();
					func_532(457, 1);
					func_1262(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1259(5))
			{
				iVar0++;
			}
			if (func_1259(6))
			{
				iVar0++;
			}
			if (func_1259(8))
			{
				iVar0++;
			}
			if (!func_1260(4))
			{
				if (iVar0 == 1)
				{
					func_1264();
					func_532(455, 1);
					func_1262(4);
				}
			}
			if (!func_1260(8))
			{
				if (iVar0 >= 3)
				{
					func_1264();
					func_532(455, 1);
					func_1262(8);
				}
			}
			break;
	}
}

void func_1189(var uParam0)
{
	func_1027(uParam0, GET_HASH_KEY("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_1027(uParam0, GET_HASH_KEY("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_1027(uParam0, GET_HASH_KEY("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1190(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1265(uParam0))
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

bool func_1191(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_1192(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_1193(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_824(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1266(iParam0, &uVar18);
	func_1267(iParam0, &uVar18, &iVar34, 1);
	if (func_829() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1268(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_826(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_824(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (func_682(uVar18[iVar36]))
		{
			case -2061583405:
				func_1268(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1268(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1268(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1268(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1268(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_826(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = func_654(func_827(uVar18[iVar36]), 1);
		iVar36++;
	}
	func_1269(&(Global_1946804.f_1616));
	func_830(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_831(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_831(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_831(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_831(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_831(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_831(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_831(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_831(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_831(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == func_832(iVar0[iVar36], iVar35))
			{
				func_826(func_1270(iVar35), 1, 1);
				func_1271(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1220(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							func_833(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1020(iParam0))
	{
		if (!func_1272(8))
		{
			if (func_829() == -2125499975)
			{
				if (bVar17)
				{
					func_830(&(Global_1946804.f_1616), GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = GET_HASH_KEY("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_1230(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1231(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1020(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_830(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = GET_HASH_KEY("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_1230(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1231(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1020(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1020(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1273(Global_40.f_7729, 4096);
					func_1185(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_1274(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_830(&(Global_1946804.f_1616), GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_830(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

struct<4> func_1194()
{
	struct<4> Var0;

	Var0 = { func_677(0) };
	return func_480(856287005, Var0, -218846335, 0);
}

int func_1195(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_686(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_663(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1275(&uVar7);
					if (func_481(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1196()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1276(GET_HASH_KEY("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1276(GET_HASH_KEY("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1276(GET_HASH_KEY("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1276(GET_HASH_KEY("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1276(GET_HASH_KEY("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1276(GET_HASH_KEY("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1197(var uParam0)
{
	return uParam0->f_1;
}

void func_1198(var uParam0)
{
	func_1277(uParam0);
	func_1279(uParam0, func_1278(-1346384396));
	func_1280(uParam0, func_1278(-712836614));
	func_1281(uParam0, func_1278(-1629133289));
	func_1282(uParam0, func_1278(1302066700));
	func_1283(uParam0, func_1278(599669344));
	func_1284(uParam0, func_1278(-1555511632));
}

void func_1199(struct<6> Param0)
{
	if (!func_1285(Param0.f_4, 1))
	{
	}
	if (!func_1285(Param0, 1))
	{
	}
	if (!func_1285(Param0.f_2, 1))
	{
	}
	if (!func_1285(Param0.f_5, 1))
	{
	}
	if (!func_1285(Param0.f_3, 1))
	{
	}
	if (!func_1285(Param0.f_1, 1))
	{
	}
}

int func_1200(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_331())
	{
		if (func_506())
		{
			bVar0 = false;
			if (!func_100(Global_1835011[15 /*74*/].f_1, 1) && !func_328(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1286();
				*iParam1 = func_1287();
				*iParam2 = func_1288();
				return 1;
			}
			else
			{
				*iParam0 = func_1289();
				*iParam1 = func_1290();
				*iParam2 = func_1291();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_100(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = func_1292();
				*iParam1 = func_1293();
				*iParam2 = func_1294();
				return 1;
			}
			else
			{
				*iParam0 = func_1295();
				*iParam1 = func_1296();
				*iParam2 = func_1297();
				return 1;
			}
		}
	}
	else if (func_506())
	{
		*iParam0 = func_1298();
		*iParam1 = func_1299();
		*iParam2 = func_1300();
		return 1;
	}
	else if (func_31())
	{
		*iParam0 = func_1301();
		*iParam1 = func_1302();
		*iParam2 = func_1303();
		return 1;
	}
	return 0;
}

int func_1201(int iParam0)
{
	iParam0 = func_1304(iParam0);
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

void func_1202(int iParam0, int iParam1)
{
	iParam0 = func_1304(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
}

void func_1203(int iParam0, int iParam1)
{
	iParam0 = func_1304(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = iParam1;
}

void func_1204(int iParam0, int iParam1)
{
	iParam0 = func_1304(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
}

void func_1205(int iParam0, int iParam1)
{
	iParam0 = func_1304(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = iParam1;
}

bool func_1206(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1305(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_677(0) };
	if (func_1306(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1207(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1307(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_481(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1208(int iParam0)
{
	if (iParam0 == GET_HASH_KEY("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return GET_HASH_KEY("HORSE_BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("A_C_HORSE_AMERICANPAINT_OVERO"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANPAINT_OVERO");
		case GET_HASH_KEY("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANPAINT_TOBIANO");
		case GET_HASH_KEY("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
		case GET_HASH_KEY("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANPAINT_GREYOVERO");
		case GET_HASH_KEY("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
		case GET_HASH_KEY("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case GET_HASH_KEY("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case GET_HASH_KEY("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return GET_HASH_KEY("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case GET_HASH_KEY("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return GET_HASH_KEY("HORSE_BREED_ANDALUSIAN_DARKBAY");
		case GET_HASH_KEY("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return GET_HASH_KEY("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
		case GET_HASH_KEY("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return GET_HASH_KEY("HORSE_BREED_ANDALUSIAN_PERLINO");
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_BLANKET"):
			return GET_HASH_KEY("HORSE_BREED_APPALOOSA_BLANKET");
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return GET_HASH_KEY("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return GET_HASH_KEY("HORSE_BREED_APPALOOSA_FEWSPOTTED");
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return GET_HASH_KEY("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_LEOPARD"):
			return GET_HASH_KEY("HORSE_BREED_APPALOOSA_LEOPARD");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_BLACK"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_BLACK");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_REDCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_ROSEGREYBAY");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_WHITE"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_WHITE");
		case GET_HASH_KEY("A_C_HORSE_ARDENNES_BAYROAN"):
			return GET_HASH_KEY("HORSE_BREED_ARDENNES_BAYROAN");
		case GET_HASH_KEY("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return GET_HASH_KEY("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
		case GET_HASH_KEY("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return GET_HASH_KEY("HORSE_BREED_ARDENNES_IRONGREYROAN");
		case GET_HASH_KEY("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return GET_HASH_KEY("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case GET_HASH_KEY("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return GET_HASH_KEY("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
		case GET_HASH_KEY("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return GET_HASH_KEY("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case GET_HASH_KEY("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return GET_HASH_KEY("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case GET_HASH_KEY("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return GET_HASH_KEY("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return GET_HASH_KEY("HORSE_BREED_KENTUCKYSADDLE_BLACK");
		case GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return GET_HASH_KEY("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
		case GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return GET_HASH_KEY("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return GET_HASH_KEY("HORSE_BREED_KENTUCKYSADDLE_GREY");
		case GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return GET_HASH_KEY("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
		case GET_HASH_KEY("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return GET_HASH_KEY("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case GET_HASH_KEY("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return GET_HASH_KEY("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case GET_HASH_KEY("A_C_HORSE_MORGAN_BAY"):
			return GET_HASH_KEY("HORSE_BREED_MORGAN_BAY");
		case GET_HASH_KEY("A_C_HORSE_MORGAN_BAYROAN"):
			return GET_HASH_KEY("HORSE_BREED_MORGAN_BAYROAN");
		case GET_HASH_KEY("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return GET_HASH_KEY("HORSE_BREED_MORGAN_LIVERCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_MORGAN_PALOMINO"):
			return GET_HASH_KEY("HORSE_BREED_MORGAN_PALOMINO");
		case GET_HASH_KEY("A_C_HORSE_MUSTANG_GRULLODUN"):
			return GET_HASH_KEY("HORSE_BREED_MUSTANG_GRULLODUN");
		case GET_HASH_KEY("A_C_HORSE_MUSTANG_WILDBAY"):
			return GET_HASH_KEY("HORSE_BREED_MUSTANG_WILDBAY");
		case GET_HASH_KEY("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return GET_HASH_KEY("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
		case GET_HASH_KEY("A_C_HORSE_NOKOTA_BLUEROAN"):
			return GET_HASH_KEY("HORSE_BREED_NOKOTA_BLUEROAN");
		case GET_HASH_KEY("A_C_HORSE_NOKOTA_WHITEROAN"):
			return GET_HASH_KEY("HORSE_BREED_NOKOTA_WHITEROAN");
		case GET_HASH_KEY("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return GET_HASH_KEY("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
		case GET_HASH_KEY("A_C_HORSE_SHIRE_DARKBAY"):
			return GET_HASH_KEY("HORSE_BREED_SHIRE_DARKBAY");
		case GET_HASH_KEY("A_C_HORSE_SHIRE_LIGHTGREY"):
			return GET_HASH_KEY("HORSE_BREED_SHIRE_LIGHTGREY");
		case GET_HASH_KEY("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return GET_HASH_KEY("HORSE_BREED_SUFFOLKPUNCH_SORREL");
		case GET_HASH_KEY("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_REDROAN");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
		case GET_HASH_KEY("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return GET_HASH_KEY("HORSE_BREED_THOROUGHBRED_BLOODBAY");
		case GET_HASH_KEY("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return GET_HASH_KEY("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
		case GET_HASH_KEY("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return GET_HASH_KEY("HORSE_BREED_THOROUGHBRED_BRINDLE");
		case GET_HASH_KEY("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return GET_HASH_KEY("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case GET_HASH_KEY("A_C_HORSE_TURKOMAN_DARKBAY"):
			return GET_HASH_KEY("HORSE_BREED_TURKOMAN_DARKBAY");
		case GET_HASH_KEY("A_C_HORSE_TURKOMAN_GOLD"):
			return GET_HASH_KEY("HORSE_BREED_TURKOMAN_GOLD");
		case GET_HASH_KEY("A_C_HORSE_TURKOMAN_SILVER"):
			return GET_HASH_KEY("HORSE_BREED_TURKOMAN_SILVER");
		case GET_HASH_KEY("A_C_DONKEY_01"):
			return GET_HASH_KEY("HORSE_DONKEY");
		case GET_HASH_KEY("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return GET_HASH_KEY("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
		case GET_HASH_KEY("A_C_HORSE_ARABIAN_GREY"):
			return GET_HASH_KEY("HORSE_BREED_ARABIAN_GREY");
		case GET_HASH_KEY("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return GET_HASH_KEY("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case GET_HASH_KEY("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return GET_HASH_KEY("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case GET_HASH_KEY("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return GET_HASH_KEY("HORSE_BREED_MUSTANG_GOLDENDUN");
		case GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return GET_HASH_KEY("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case GET_HASH_KEY("A_C_HORSE_SHIRE_RAVENBLACK"):
			return GET_HASH_KEY("HORSE_BREED_SHIRE_RAVENBLACK");
		case GET_HASH_KEY("A_C_HORSE_BUELL_WARVETS"):
			return -41062704;
		case GET_HASH_KEY("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return 887669186;
		case GET_HASH_KEY("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return 2102774612;
		case GET_HASH_KEY("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return -2011111190;
		case GET_HASH_KEY("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1209(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_686(iParam1, 0))
	{
		return 0;
	}
	if (!func_1308(iParam1))
	{
		return 0;
	}
	if (func_1206(iParam0))
	{
		return 0;
	}
	iVar0 = func_1305(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_677(0) };
	Var1.f_4 = iVar0;
	if (!func_1018(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1210(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_686(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_663(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1275(&Var7);
					if (func_1018(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1213(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1211(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1223(1) < iParam0)
	{
		iParam0 = func_1223(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_394(GET_HASH_KEY("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

bool func_1212(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_664(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_684(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1213(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_482(0))
	{
		return func_1309(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_684(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_664(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1214(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_687(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_482(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_664(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1215(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() == -1)
	{
		if (func_748(43))
		{
			if (func_757(iParam0, 412399755))
			{
				func_995(GET_HASH_KEY("EXOTIC_STAGE_01"));
				if (func_996() == 0)
				{
					func_392(0, 10);
					iVar0 = func_1310(iParam0, iParam1, 1);
					if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_748(44))
		{
			if (func_757(iParam0, 709057512))
			{
				func_995(GET_HASH_KEY("EXOTIC_STAGE_02"));
				if (func_996() == 1)
				{
					func_392(0, 10);
					iVar0 = func_1310(iParam0, iParam1, 2);
					if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_748(45))
		{
			if (func_757(iParam0, -1478961327))
			{
				func_995(GET_HASH_KEY("EXOTIC_STAGE_03"));
				if (func_996() == 2)
				{
					func_392(0, 10);
					iVar0 = func_1310(iParam0, iParam1, 4);
					if (((iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_748(46))
		{
			if (func_757(iParam0, -1238404098))
			{
				func_995(GET_HASH_KEY("EXOTIC_STAGE_04"));
				if (func_996() == 3)
				{
					func_392(0, 10);
					iVar0 = func_1310(iParam0, iParam1, 8);
					if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_748(47))
		{
			if (func_757(iParam0, 1160548794))
			{
				func_995(GET_HASH_KEY("EXOTIC_STAGE_05"));
				if (func_996() == 4)
				{
					func_392(0, 10);
					iVar0 = func_1310(iParam0, iParam1, 16);
					if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_998(iParam0) < func_999(iParam0))
						{
							func_754(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1216(int iParam0, int iParam1)
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

void func_1217(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1311(iParam1);
	func_1312(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1313(&(uParam0->f_26), iVar1);
		if (func_1314(uParam0->f_26, &iVar0))
		{
			func_1315(iVar0, iVar1);
		}
	}
}

bool func_1218(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_476(iParam0, 0, 0) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	if (func_663(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_664(0), &Var5, iParam1);
	return true;
}

void func_1219(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

bool func_1220(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1222(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(uParam2[iVar47 /*2*/]) = { Var0.f_4[iVar47 /*2*/] };
		iVar47++;
	}
	if (bParam4)
	{
		func_1316(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1223(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

char* func_1224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

bool func_1225(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1226(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1227(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1228(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1229(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1230(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_833(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1229(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1231(int iParam0, int iParam1, int iParam2)
{
	if (func_24() == -1)
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

void func_1232(bool bParam0)
{
	func_1317(bParam0);
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

int func_1233(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_1234(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1121(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1235(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1318(iVar6) - func_1318(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1235(float fParam0)
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

int func_1236(int iParam0)
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

int func_1237(int iParam0)
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

int func_1238(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1235(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1318(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1318(iVar0 + 1));
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

int func_1239(int iParam0)
{
	int iVar0;

	if (func_1319(iParam0, &iVar0))
	{
		return func_1318(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1320())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1320())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1320())
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

int func_1240(int iParam0)
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

void func_1241(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1321(iParam0));
	sVar4 = func_1323(func_1322(iVar3, iParam2));
	sVar6 = func_1324(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1325(iParam0));
	iVar8 = func_1326(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1327(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_967(sVar7, sVar1, iVar8, iVar9, GET_HASH_KEY("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1328(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1242(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1243(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1244(int iParam0)
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

bool func_1245(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_1246(int iParam0)
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

int func_1247(int iParam0)
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

int func_1248(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1329(&iVar0, 0, iVar95, &Var1) && !func_1329(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1330(iVar0, &Var1);
			if (func_686(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1249()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1331(Global_35, &uVar0);
	Var30 = { func_677(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1332(0);
	func_1333(7);
	func_1334(GET_HASH_KEY("KIT_BANDANA"), 1, 1, 0);
	if (func_829() == 1160113249)
	{
		func_1334(GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1334(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1335(Global_35, &uVar0);
}

int func_1250(int iParam0, int iParam1)
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
		iParam1 = func_664(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_240(&uVar6, iVar0);
	func_241(&uVar6, iVar1);
	func_242(&uVar6, iVar2);
	func_243(&uVar6, iVar3);
	func_244(&uVar6, iVar4);
	func_245(&uVar6, iVar5);
	return uVar6;
}

void func_1251(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_394(GET_HASH_KEY("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

float func_1252(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1253(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1254(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1034(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1034(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1255()
{
	return Global_1946804.f_1497;
}

char* func_1256(int iParam0)
{
	int iVar0;

	iVar0 = func_1100(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1145(iVar0);
}

int func_1257(int iParam0)
{
	int iVar0;

	if (func_1336(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1337(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1338(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1339(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1258(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_550(func_1340(iVar0, iParam0), 1, 0))
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

bool func_1259(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_550(func_1341(iVar0, iParam0), 1, 0))
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

bool func_1260(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1261()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_802(GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_1124(1);
	func_1241(1, iVar0, 0);
}

void func_1262(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1263()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_802(GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_1124(2);
	func_1241(2, iVar0, 0);
}

void func_1264()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_802(GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_1124(0);
	func_1241(0, iVar0, 0);
}

bool func_1265(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1266(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_1342(iParam0, func_829()))
	{
		return 0;
	}
	Var1 = func_1053(func_829());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, GET_HASH_KEY("COMPONENT")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1267(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	iVar19 = func_1053(func_829());
	Var20 = { func_1118(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1120(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1011(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1020(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1221(&(Global_1946804.f_964), iVar19, Var5.f_4, GET_HASH_KEY("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = (*uParam1)[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_1012(iVar0);
	return 1;
}

void func_1268(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1216(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19 = (Global_26796.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26796.f_627.f_121[iVar0] = Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_1269(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_1270(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1343();
	}
	if (func_24() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

void func_1271(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_24() == -1)
	{
		Global_26796.f_26[iParam0 /*120*/] = 0;
		Global_26796.f_26[iParam0 /*120*/].f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = Global_1946804.f_57[iVar0 /*11*/];
			func_833(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = Global_1946804.f_57[iVar0 /*11*/];
		func_1229(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1272(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1273(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1021(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_1274(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1100(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1270(iParam1);
	}
	if ((bParam3 && func_1183(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1342(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1273(Global_40.f_7729, 4096);
		func_1185(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_676(iParam0);
	}
	func_1344();
	if (!func_1345(iParam1))
	{
		func_1347(iVar0, iParam0, func_1346(iParam1), 1, 0, 1);
	}
	func_1348(iParam0);
	return 1;
}

void func_1275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_1276(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_1349(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1194() };
	*iParam1 = func_1350(Var0, iParam0, 0);
	if (!func_686(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1277(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1278(int iParam0)
{
	if (func_506())
	{
		switch (iParam0)
		{
			case -1346384396:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000");
			case -712836614:
				return GET_HASH_KEY("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_NEW_SADDLE_000");
			case -1629133289:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORN_NEW_000");
			case 1302066700:
				return GET_HASH_KEY("HORSE_EQUIPMENT_STIRRUP_NEW_000");
			case 599669344:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORSE_BEDROLL_01_USED_000");
			case -1555511632:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000");
		}
	}
	else if (func_31())
	{
		switch (iParam0)
		{
			case -1346384396:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORSE_BLANKET_09_NEW_001");
			case -712836614:
				return GET_HASH_KEY("HORSE_EQUIPMENT_WESTERN_04_STOCK_NEW_SADDLE_005");
			case -1629133289:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORN_NEW_012");
			case 1302066700:
				return GET_HASH_KEY("HORSE_EQUIPMENT_STIRRUP_NEW_006");
			case 599669344:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_003");
			case -1555511632:
				return GET_HASH_KEY("HORSE_EQUIPMENT_HORSE_SADDLEBAG_NEW_003");
		}
	}
	return 0;
}

void func_1279(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1280(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1281(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1282(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1283(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1284(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_1285(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (!func_1351(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1194() };
	Var14 = { func_480(iParam0, Var10, iVar9, 0) };
	if (func_1213(Var14, iParam1))
	{
		if (func_1352(iParam0))
		{
			if (func_1276(GET_HASH_KEY("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_1285(iVar18, 0))
				{
				}
			}
		}
		else if (func_1353(iParam0))
		{
			if (func_1276(GET_HASH_KEY("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1285(iVar19, 0))
				{
				}
			}
			if (func_1276(GET_HASH_KEY("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1285(iVar20, 0))
				{
				}
			}
			iVar21 = func_1354(iParam0);
			if (func_686(iVar21, 0))
			{
				if (func_1285(iVar21, 1))
				{
				}
			}
		}
		func_1355();
		return true;
	}
	return false;
}

int func_1286()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1287()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1288()
{
	return 1;
}

int func_1289()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1290()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1291()
{
	return 1;
}

int func_1292()
{
	return GET_HASH_KEY("BREED_JOHN_ENDLESSSUMMER");
}

int func_1293()
{
	return GET_HASH_KEY("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_1294()
{
	return 2;
}

int func_1295()
{
	return GET_HASH_KEY("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1296()
{
	return GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1297()
{
	return 1;
}

int func_1298()
{
	return GET_HASH_KEY("BREED_MORGAN_BAY");
}

int func_1299()
{
	return GET_HASH_KEY("A_C_HORSE_MORGAN_BAY");
}

int func_1300()
{
	return 1;
}

int func_1301()
{
	return GET_HASH_KEY("BREED_KENTUCKYSADDLE_GREY");
}

int func_1302()
{
	return GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_1303()
{
	return 1;
}

int func_1304(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1305(int iParam0)
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

int func_1306(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_664(bParam2), uParam0, iParam1);
}

bool func_1307(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1206(iParam0))
	{
		return false;
	}
	iVar0 = func_1305(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_677(0) };
	if (!func_1356(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1357(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_1308(int iParam0)
{
	return func_678(iParam0) == GET_HASH_KEY("HORSE");
}

int func_1309(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_684(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_678(Var1.f_4);
	if (iVar15 == GET_HASH_KEY("HORSE"))
	{
		Var16 = { func_1358(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1359(GET_HASH_KEY("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == GET_HASH_KEY("CLOTHING"))
	{
		Var45 = { func_1360(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_1361(GET_HASH_KEY("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_1362(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_1363(GET_HASH_KEY("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1310(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_998(iVar9);
	iVar2 = func_998(iVar10);
	iVar3 = func_998(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_998(iVar12);
	}
	iVar5 = func_999(iVar9);
	iVar6 = func_999(iVar10);
	iVar7 = func_999(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_999(iVar12);
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

int func_1311(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_1312(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1313(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1364(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_1314(int iParam0, int iParam1)
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

void func_1315(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1316(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = (*uParam2)[iVar0 /*2*/];
		Var21[iVar0 /*2*/].f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (Var21[iVar0 /*2*/] == Var19)
							{
								Var21[iVar0 /*2*/].f_1 = (Var21[iVar0 /*2*/].f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0 /*2*/].f_1 != 1f)
		{
			(uParam2[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat((uParam2[iVar0 /*2*/])->f_1) * (Var21[iVar0 /*2*/].f_1 / 1f)));
		}
		iVar0++;
	}
}

void func_1317(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(GET_HASH_KEY("HONORMETERVISIBLE"), bParam0);
}

int func_1318(int iParam0)
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

bool func_1319(int iParam0, int iParam1)
{
	return false;
}

bool func_1320()
{
	return false;
}

int func_1321(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_664(0), GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_664(0), GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_664(0), GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_1322(int iParam0, int iParam1)
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

char* func_1323(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1324(int iParam0)
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

char* func_1325(int iParam0)
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

int func_1326(int iParam0)
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

int func_1327(int iParam0)
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

int func_1328(int iParam0)
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

bool func_1329(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1365(iParam1) && !func_1366(iParam1))
	{
		iVar0 = func_1367(iParam1);
	}
	else
	{
		return false;
	}
	func_1368(uParam3);
	iVar5 = func_1369(iParam2);
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

void func_1330(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1370(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1371(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1331(int iParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_363(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1332(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_686(iVar1, 0))
		{
			func_826(iVar1, 0, bParam0);
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

void func_1333(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_24() == -1)
	{
		func_1372(352481484);
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
		if (func_682(iVar2) != -999503751)
		{
			func_1373(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1218(iVar2, 0))
		{
			func_469(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1334(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1374(iParam0))
	{
		return;
	}
	iVar0 = func_682(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1375(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1375(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1375(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1375(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1375(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1375(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1376(0))
	{
		func_1377(iParam0, 1);
		if (func_829() == 1160113249)
		{
			func_1377(func_1376(-2125499975), 0);
		}
		else
		{
			func_1377(func_1376(1160113249), 0);
		}
	}
	func_1051();
	if (func_1378(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_664(0), iParam0, 0);
	}
	func_469(iParam0, bParam3);
	if (bParam2)
	{
		func_1052(0, 0);
	}
}

void func_1335(int iParam0, var uParam1)
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
		if ((*uParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*uParam1)[iVar0], 0, false))
			{
				if (func_364((*uParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*uParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*uParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*uParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1336(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (func_757(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1337(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (func_757(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1338(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (func_757(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1339(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (func_757(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1340(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1379(iParam0);
		case 1:
			return func_1380(iParam0);
		case 2:
			return func_1381(iParam0);
		case 3:
			return func_1382(iParam0);
	}
	return 0;
}

int func_1341(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1383(iParam0);
		case 1:
			return func_1384(iParam0);
		case 2:
			return func_1385(iParam0);
		case 3:
			return func_1386(iParam0);
		case 4:
			return func_1387(iParam0);
		case 5:
			return func_1388(iParam0);
		case 6:
			return func_1389(iParam0);
		case 7:
			return func_1390(iParam0);
		case 8:
			return func_1391(iParam0);
	}
	return 0;
}

bool func_1342(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1053(iParam1);
	func_1221(&(Global_1946804.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964));
}

int func_1343()
{
	if (func_24() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1344()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		return;
	}
	if (!func_658(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1392(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_915(1);
	STREAMING::REMOVE_ANIM_DICT(func_1392());
}

bool func_1345(int iParam0)
{
	return false;
}

int func_1346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1347(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_1020(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_24() != -1)
	{
		return;
	}
	func_903();
	if (bParam5)
	{
		if (!func_1393(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_658(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		func_659();
	}
	func_1394(iVar3, 1, 1, 1, 1, 1);
	func_657(31, 0, 0, 0, 0);
	func_661(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_657(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_657(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_470(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1348(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

bool func_1349(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_682(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1395(iParam0);
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

int func_1350(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1212(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1351(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_682(iParam1);
		iVar5 = func_1395(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_476(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_480(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_664(0);
			Var37 = { func_476(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_480(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_682(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_1212(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_1352(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
	}
	if (func_757(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1353(int iParam0)
{
	if (!func_686(iParam0, 0))
	{
		return false;
	}
	if (func_757(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1354(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case GET_HASH_KEY("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case GET_HASH_KEY("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case GET_HASH_KEY("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case GET_HASH_KEY("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_1355()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_476(856287005, 0, 0) };
	Var5 = { func_480(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_682(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_1350(Var5, GET_HASH_KEY("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_686(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1395(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1350(Var5, iVar11, 0);
			if (!func_686(iVar21, 0))
			{
				if (iVar11 == GET_HASH_KEY("SLOTID_HORSE_HORN"))
				{
					if (func_1353(iVar14) || func_1352(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == GET_HASH_KEY("SLOTID_HORSE_STIRRUP"))
						{
							if (func_1353(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == GET_HASH_KEY("SLOTID_HORSE_BLANKET"))
								{
									if (!func_1353(iVar14) && func_1396(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1397(iVar11, &Var16, 1))
									{
										if (!func_1213(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_1356(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_664(bParam7);
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

bool func_1357(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_664(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

struct<29> func_1358(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_664(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1362(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1359(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_1398(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1399(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1399(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1399(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_1360(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_664(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1362(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1361(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_1400(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1399(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1399(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1399(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1362(var uParam0)
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

int func_1363(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, GET_HASH_KEY("BASKET"), iParam0))
		{
			if (func_1401(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1399(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1399(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1399(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1364(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1402(&(uParam0->f_3));
}

bool func_1365(int iParam0)
{
	iParam0 = func_1304(iParam0);
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

bool func_1366(int iParam0)
{
	int iVar0;

	iParam0 = func_1304(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1365(iParam0))
	{
		return false;
	}
	iVar0 = func_1367(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1367(int iParam0)
{
	iParam0 = func_1304(iParam0);
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

void func_1368(var uParam0)
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

int func_1369(int iParam0)
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

void func_1370(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1371(var uParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1372(int iParam0)
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
	Var2 = { func_1118(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1120(&Var2, &iVar0, &iVar1, 0))
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
		func_1012(iVar0);
	}
}

void func_1373(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1403(iParam2, *uParam0);
	func_1404(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1374(int iParam0)
{
	if (func_24() == -1)
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

int func_1375(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1216(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1218(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_682(iParam0) != -999503751)
	{
		func_1373(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1376(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_829();
	}
	if (iParam0 == 1160113249)
	{
		return GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1377(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_476(iParam0, 0, 0) };
	Var5 = { func_480(iParam0, Var0, Var0.f_4, 0) };
	if (func_663(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_664(0), &Var5);
	return 1;
}

bool func_1378(int iParam0)
{
	return func_1405(func_943(iParam0));
}

int func_1379(int iParam0)
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

int func_1380(int iParam0)
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

int func_1381(int iParam0)
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

int func_1382(int iParam0)
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

int func_1383(int iParam0)
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

int func_1384(int iParam0)
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

int func_1385(int iParam0)
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

int func_1386(int iParam0)
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

int func_1387(int iParam0)
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

int func_1388(int iParam0)
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

int func_1389(int iParam0)
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

int func_1390(int iParam0)
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

int func_1391(int iParam0)
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

char* func_1392()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1393(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1406(uParam0, iParam3, iParam2) && !func_830(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_658(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			func_905(1108822547);
		}
		else
		{
			func_1407(1108822547);
		}
	}
	func_911(uParam0, 0, 0);
	func_1219(iParam5);
	return true;
}

void func_1394(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1343()) || bParam5)
		{
			func_1408();
		}
	}
	if (func_24() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1409(Global_1946804.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_1100(Global_40.f_7729);
				Global_1946804.f_1378 = func_1100(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1346(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1101(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1052(0, 1);
	}
	func_1219(0);
}

int func_1395(int iParam0)
{
	int iVar0;

	if (!func_686(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1396(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1397(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_1118(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1119(&Var2, func_1194());
	if (func_1120(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_1011(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_686(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1396(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_1012(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_1012(iVar0);
	}
	return false;
}

bool func_1398(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_1399(int iParam0, int iParam1)
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
	func_1410(iParam0, iParam1);
}

bool func_1400(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_1401(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1402(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1403(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1404(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1364(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_654(func_827(iParam1), 1);
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
		func_1411(uParam0);
	}
}

bool func_1405(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1406(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1270(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1099(2, iParam1))
	{
		func_1412(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1407(int iParam0)
{
	func_671(iParam0, 8, 6);
}

void func_1408()
{
	int iVar0;

	Global_1946804.f_1497 = Global_1946804.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_1409(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1053(0);
	iVar1 = 0;
	func_1221(&(Global_1946804.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804.f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_1410(int iParam0, int iParam1)
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

void func_1411(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1413(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1412(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uParam0->f_1[iVar0 /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_1413(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1414(func_829());
	if (*uParam0)
	{
		func_1402(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_24() != -1, uParam2);
	*uParam0 = 1;
}

int func_1414(int iParam0)
{
	if (func_24() == -1)
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

