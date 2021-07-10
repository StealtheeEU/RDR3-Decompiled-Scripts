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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	char* sLocal_25 = NULL;
	char* sLocal_26 = NULL;
	char* sLocal_27 = NULL;
	char* sLocal_28 = NULL;
	var uLocal_29 = 0;
	struct<33> Local_30 = { 0, 1092616192, 1106247680, 1109393408, 1084227584, 1061158912, 0, 1065353216, 0, 1065353216, 15, 30, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 1097859072;
	var uLocal_77 = 0;
#endregion

void __EntryFunction__()
{
	struct<7> Var0[34];
	int iVar239;
	bool bVar240;
	int iVar241;
	int iVar242;
	int iVar243;
	float fVar244;
	int iVar245;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_23 = "beat_gang_camp_reminder";
	iLocal_24 = 23;
	sLocal_25 = "mech_skin@BUCK_BUTCHER";
	sLocal_26 = "PBL_BASE";
	sLocal_27 = "PBL_DUMP";
	sLocal_28 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1(8);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_2(&(Var0[0 /*7*/]));
	func_3(&(Var0[15 /*7*/]));
	func_4(&(Var0[20 /*7*/]));
	func_5(&(Var0[26 /*7*/]));
	func_6(&(Var0[1 /*7*/]));
	func_7(&(Var0[2 /*7*/]));
	func_8(&(Var0[3 /*7*/]));
	func_9(&(Var0[4 /*7*/]));
	func_10(&(Var0[5 /*7*/]));
	func_11(&(Var0[6 /*7*/]));
	func_12(&(Var0[7 /*7*/]));
	func_13(&(Var0[8 /*7*/]));
	func_14(&(Var0[9 /*7*/]));
	func_15(&(Var0[10 /*7*/]));
	func_16(&(Var0[13 /*7*/]));
	func_17(&(Var0[11 /*7*/]));
	func_18(&(Var0[17 /*7*/]));
	func_19(&(Var0[12 /*7*/]));
	func_20(&(Var0[14 /*7*/]));
	func_21(&(Var0[16 /*7*/]));
	func_22(&(Var0[18 /*7*/]));
	func_23(&(Var0[21 /*7*/]));
	func_24(&(Var0[22 /*7*/]));
	func_25(&(Var0[23 /*7*/]));
	func_26(&(Var0[24 /*7*/]));
	func_27(&(Var0[25 /*7*/]));
	func_28(&(Var0[19 /*7*/]));
	func_29(&(Var0[27 /*7*/]));
	func_30(&(Var0[28 /*7*/]));
	func_31(&(Var0[29 /*7*/]));
	func_32(&(Var0[30 /*7*/]));
	func_33(&(Var0[31 /*7*/]));
	func_34(&(Var0[32 /*7*/]));
	func_35(&(Var0[33 /*7*/]));
	func_36();
	func_37();
	while (!func_38(256))
	{
		BUILTIN::WAIT(0);
	}
	while (!func_38(128))
	{
		BUILTIN::WAIT(0);
	}
	while (!func_38(256) && Global_40)
	{
		BUILTIN::WAIT(0);
	}
	iVar239 = 0;
	while (iVar239 < Var0)
	{
		if (Var0[iVar239 /*7*/].f_6 & 2 != 0)
		{
			Call_Loc(Var0[iVar239 /*7*/]);
			func_39(&(Var0[iVar239 /*7*/].f_6), 1);
		}
		else
		{
			func_40(&(Var0[iVar239 /*7*/].f_6), 1);
		}
		iVar239++;
	}
	func_41(8);
	while (Global_1572887.f_8)
	{
		BUILTIN::WAIT(0);
	}
	while (!func_38(256))
	{
		BUILTIN::WAIT(0);
	}
	func_41(1);
	bVar240 = false;
	iVar241 = 34;
	iVar242 = 0;
	iVar243 = 0;
	iVar239 = 0;
	while (!bVar240)
	{
		bVar240 = SCRIPTS::IS_THREAD_EXIT_REQUESTED();
		fVar244 = func_42();
		if (fVar244 <= 0f)
		{
			fVar244 = 24f;
		}
		iVar242 = BUILTIN::ROUND((IntToFloat(iVar241) / fVar244));
		if (iVar242 <= 0)
		{
			iVar242 = 1;
		}
		iVar243 = 0;
		Global_1430242.f_9 = 0;
		iVar243 = 0;
		while (iVar243 < iVar242)
		{
			if (Var0[iVar239 /*7*/].f_6 & 1 != 0)
			{
				Call_Loc(Var0[iVar239 /*7*/].f_1);
			}
			iVar239 = (1 + iVar239);
			if (iVar239 >= iVar241)
			{
				iVar239 = 0;
			}
			iVar243++;
		}
		if (func_43(4))
		{
			func_44();
			func_45();
			iVar245 = func_46();
			if (func_47(iVar245))
			{
				func_48(iVar245, iVar245, 0);
			}
			func_49(4);
		}
		BUILTIN::WAIT(0);
	}
	func_50(&Var0);
	while (!SCRIPTS::_0x380FFA15B72408FB(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

void func_2(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 4691;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "PLAYER(L)", 24);
	uParam0->f_6 = 2;
}

void func_3(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5095;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "RPG(L)", 24);
	uParam0->f_6 = 2;
}

void func_4(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5147;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "LAW(L)", 24);
	uParam0->f_6 = 2;
}

void func_5(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 2565;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "DEED MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_6(var uParam0)
{
	*uParam0 = 5247;
	uParam0->f_1 = 5259;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BEAT MANAGER", 24);
	uParam0->f_6 = 2;
}

void func_7(var uParam0)
{
	*uParam0 = 5317;
	uParam0->f_1 = 5354;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BT VALIDATOR A", 24);
	uParam0->f_6 = 2;
}

void func_8(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5375;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "TUTORIAL", 24);
	uParam0->f_6 = 2;
}

void func_9(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5793;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "COMPANION TRUST", 24);
	uParam0->f_6 = 2;
}

void func_10(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5894;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "LOANSHARKING", 24);
	uParam0->f_6 = 2;
}

void func_11(var uParam0)
{
	*uParam0 = 6382;
	uParam0->f_1 = 6489;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BANK ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_12(var uParam0)
{
	*uParam0 = 7032;
	uParam0->f_1 = 7166;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "EVENT AREA", 24);
	uParam0->f_6 = 2;
}

void func_13(var uParam0)
{
	*uParam0 = 8453;
	uParam0->f_1 = 8466;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "VEHICLE ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_14(var uParam0)
{
	*uParam0 = 8492;
	uParam0->f_1 = 8511;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "TRAIN ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_15(var uParam0)
{
	*uParam0 = 8717;
	uParam0->f_1 = 8836;
	uParam0->f_2 = 9118;
	StringCopy(&(uParam0->f_3), "HOME ROBBERY", 24);
	uParam0->f_6 = 2;
}

void func_16(var uParam0)
{
	*uParam0 = 9130;
	uParam0->f_1 = 9276;
	uParam0->f_2 = 9424;
	StringCopy(&(uParam0->f_3), "COMPANIONS", 24);
	uParam0->f_6 = 2;
}

void func_17(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 9452;
	uParam0->f_2 = 9475;
	StringCopy(&(uParam0->f_3), "USE CONTEXT", 24);
	uParam0->f_6 = 2;
}

void func_18(var uParam0)
{
	*uParam0 = 9679;
	uParam0->f_1 = 9687;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "CARAVAN", 24);
	uParam0->f_6 = 2;
}

void func_19(var uParam0)
{
	*uParam0 = 9719;
	uParam0->f_1 = 9741;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "CARAVAN EVENT", 24);
	uParam0->f_6 = 2;
}

void func_20(var uParam0)
{
	*uParam0 = 9910;
	uParam0->f_1 = 9918;
	uParam0->f_2 = 9962;
	StringCopy(&(uParam0->f_3), "UNDERTAKER", 24);
	uParam0->f_6 = 2;
}

void func_21(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 9998;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "SATCHEL ITEMS", 24);
	uParam0->f_6 = 2;
}

void func_22(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 10014;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "GAME PERCENT", 24);
	uParam0->f_6 = 2;
}

void func_23(var uParam0)
{
	*uParam0 = 12766;
	uParam0->f_1 = 12814;
	uParam0->f_2 = 12830;
	StringCopy(&(uParam0->f_3), "Campfires", 24);
	uParam0->f_6 = 2;
}

void func_24(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 12954;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "Drunk Manager", 24);
	uParam0->f_6 = 2;
}

void func_25(var uParam0)
{
	*uParam0 = 13631;
	uParam0->f_1 = 13644;
	uParam0->f_2 = 13813;
	StringCopy(&(uParam0->f_3), "WS Manager", 24);
	uParam0->f_6 = 2;
}

void func_26(var uParam0)
{
	*uParam0 = 13821;
	uParam0->f_1 = 13877;
	uParam0->f_2 = 14359;
	StringCopy(&(uParam0->f_3), "Minigame Mger", 24);
	uParam0->f_6 = 2;
}

void func_27(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 14375;
	uParam0->f_2 = 15535;
	StringCopy(&(uParam0->f_3), "CompAct Deeds", 24);
	uParam0->f_6 = 2;
}

void func_28(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 15697;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "BLIP MANAGER LONG", 24);
	uParam0->f_6 = 2;
}

void func_29(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 15749;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "GUAMA LAW", 24);
	uParam0->f_6 = 2;
}

void func_30(var uParam0)
{
	*uParam0 = 15757;
	uParam0->f_1 = 15782;
	uParam0->f_2 = 16702;
	StringCopy(&(uParam0->f_3), "AMBVIG LONG", 24);
	uParam0->f_6 = 2;
}

void func_31(var uParam0)
{
	*uParam0 = 16723;
	uParam0->f_1 = 16731;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "COLLECTABLES", 24);
	uParam0->f_6 = 2;
}

void func_32(var uParam0)
{
	*uParam0 = 16927;
	uParam0->f_1 = 16990;
	uParam0->f_2 = 17026;
	StringCopy(&(uParam0->f_3), "FishingAmbient", 24);
	uParam0->f_6 = 2;
}

void func_33(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17064;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "RichPresenceMgr", 24);
	uParam0->f_6 = 2;
}

void func_34(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17123;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "AUTOSAVE", 24);
	uParam0->f_6 = 2;
}

void func_35(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17317;
	uParam0->f_2 = 4683;
	StringCopy(&(uParam0->f_3), "CONTENT_PASSED", 24);
	uParam0->f_6 = 2;
}

void func_36()
{
	if (func_112() != -1)
	{
		return;
	}
	Global_40.f_9074 = 0;
	Global_40.f_9074.f_1 = 0;
}

void func_37()
{
	int iVar0;

	iVar0 = func_113();
	if (iVar0 != 9)
	{
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(809554858);
	}
}

bool func_38(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_41(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

float func_42()
{
	return Global_1955565.f_3;
}

bool func_43(int iParam0)
{
	return (Global_1898164 && iParam0) != 0;
}

void func_44()
{
	Global_1898164.f_163 = func_114(0, 0, 0);
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	var uVar8[10];
	int iVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	int iVar28;

	iVar0 = func_112();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	if (iVar0 == -1)
	{
		func_115();
	}
	if (iVar0 == -1)
	{
		if (func_114(4096, func_43(4), !func_43(4)))
		{
			func_116();
			func_117();
			return;
		}
		if (func_118(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!func_119() || !func_120(6144))
			{
				func_121(0, 1, 0, 0);
				func_122();
			}
			else if (Global_1935630.f_18)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			return;
		}
	}
	if (iVar0 == -1)
	{
		Global_1430242.f_9 = 1;
	}
	if (iVar0 == -1)
	{
		iVar7 = Global_40.f_4283.f_1;
		if (func_47(iVar7) && func_123(iVar7))
		{
			bVar5 = true;
			bVar6 = func_124(iVar7);
		}
	}
	bVar20 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (iVar0 == -1)
	{
		iVar21 = func_125();
	}
	bVar22 = func_126();
	iVar3 = 0;
	while (iVar3 < Global_1898329)
	{
		if (!func_127(Global_1898330[iVar3]))
		{
		}
		else
		{
			iVar23 = func_128(Global_1898330[iVar3]);
			if (iVar23 == 3 || iVar23 == 4)
			{
			}
			else if (iVar23 != 1 && iVar23 != 2)
			{
				func_129(Global_1898330[iVar3]);
			}
			else
			{
				func_130(iVar3, 0);
				switch (Global_1898346[iVar3 /*6*/].f_3)
				{
					case 1:
						iVar24 = Global_1898346[iVar3 /*6*/].f_4;
						if (func_131(iVar24))
						{
							func_132(iVar24, iVar3, bVar22, iVar0, 0, bVar20);
							if (iVar0 == -1)
							{
								if (func_133(iVar24, bVar5, iVar7))
								{
									iVar4++;
									if (iVar19 < 10)
									{
										uVar8[iVar19] = Global_1898330[iVar3];
										iVar19++;
									}
								}
								Global_1430242.f_1++;
								if (func_134(iVar3, 64))
								{
									Global_1430242++;
								}
							}
						}
						break;
					case 4:
						if (iVar0 == -1)
						{
							func_135(Global_1898330[iVar3], iVar21, Global_1898346[iVar3 /*6*/].f_4, Global_1898346[iVar3 /*6*/].f_5);
							Global_1430242.f_4++;
						}
						break;
					case 2:
						iVar1 = Global_1898346[iVar3 /*6*/].f_4;
						switch (iVar1)
						{
							case 1:
								if (iVar0 == -1)
								{
									func_136(iVar3);
								}
								break;
							case 3:
								if (iVar0 == -1)
								{
									func_137(iVar3);
								}
								break;
							case 6:
								if (iVar0 == -1)
								{
									func_138(iVar3);
								}
								break;
							case 2:
								if (iVar0 == -1)
								{
									func_139(iVar3);
								}
								break;
						}
						if (iVar0 == -1)
						{
							Global_1430242.f_5++;
						}
						break;
					case 5:
						if (iVar0 == -1)
						{
							Global_1430242.f_6++;
						}
						break;
					case 6:
						iVar2 = Global_1898346[iVar3 /*6*/].f_4;
						if (iVar2 == 0)
						{
							if (iVar0 == -1)
							{
								func_140(iVar3);
							}
						}
						if (iVar0 == -1)
						{
							Global_1430242.f_7++;
						}
						break;
					case 8:
						if (iVar0 == -1)
						{
							iVar25 = Global_1898346[iVar3 /*6*/].f_4;
							if (func_141(iVar25))
							{
								if (func_142(Global_1347702[iVar25 /*49*/].f_13, 64))
								{
									Global_1430242.f_2++;
								}
								func_143(iVar25);
							}
						}
						break;
					case 10:
						break;
					case 11:
						func_144(Global_1898330[iVar3], iVar3);
						if (iVar0 == -1)
						{
							Global_1430242.f_8++;
						}
						break;
					case 12:
						break;
					default:
						break;
				}
			}
		}
		iVar3++;
	}
	if (iVar0 == -1)
	{
		iVar26 = 0;
		while (iVar26 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar26] > -1 && Global_40.f_450[iVar26] < 200)
			{
				if (Global_1347702[Global_40.f_450[iVar26] /*49*/].f_12 & 1 != 0)
				{
					Global_1430242.f_3++;
					if (func_145(Global_40.f_450[iVar26], bVar5, iVar7))
					{
						iVar4++;
						if (iVar19 < 10)
						{
							uVar8[iVar19] = Global_1347702[Global_40.f_450[iVar26] /*49*/].f_15;
							iVar19++;
						}
					}
				}
			}
		else
		{
			}
			else
			{
				iVar26++;
			}
		}
		if (Global_1357549.f_1709 != iVar4)
		{
			bVar27 = true;
		}
		Global_1357549.f_1709 = iVar4;
		iVar28 = 0;
		while (iVar28 < iVar4)
		{
			func_146(uVar8[iVar28], bVar6, bVar5, iVar7);
			iVar28++;
		}
		if (!func_147(bVar6, bVar27, bVar5))
		{
			func_148();
		}
	}
}

int func_46()
{
	return Global_1894899.f_2;
}

bool func_47(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = Global_1888801[iParam0 /*35*/].f_20;
	bVar1 = func_149(iParam0, 32);
	if (iVar0 == 8)
	{
		return;
	}
	if ((!bVar1 && iVar0 != 3) && iVar0 != 4)
	{
		return;
	}
	bVar2 = false;
	if (Global_1572887.f_12 == -1 && iParam0 == func_113())
	{
		if (((((((iParam0 != 58 || func_150()) && !func_151(4)) && !func_152(67)) && !func_153(67)) && !(func_154(43) && !func_154(44))) && !(func_154(59) && !func_154(60))) && !func_156(func_155(iParam0), 8192))
		{
			bVar2 = true;
			iVar3 = 52;
			if (func_154(70))
			{
				iVar3 = 46;
			}
			else
			{
				iVar3 = 52;
			}
		}
	}
	else
	{
		switch (Global_1888801[iParam0 /*35*/].f_20)
		{
			case 3:
				bVar2 = false;
				break;
			case 4:
				if (Global_1888801[iParam0 /*35*/].f_13 != -1)
				{
					func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
					Global_1888801[iParam0 /*35*/].f_13 = -1;
				}
				break;
			case 6:
				break;
		}
	}
	if (bVar2)
	{
	}
	if (bVar2 && !bParam2)
	{
		if (Global_1888801[iParam0 /*35*/].f_13 == -1)
		{
			Global_1888801[iParam0 /*35*/].f_14 = iVar3;
			Global_1888801[iParam0 /*35*/].f_13 = func_158(iParam0, iVar3, Global_1888801[iParam0 /*35*/].f_15, -1);
			func_159(iParam0, iVar3, Global_1888801[iParam0 /*35*/].f_15, &(Global_1888801[iParam0 /*35*/].f_22));
			if (iParam0 == 9)
			{
				if (MAP::DOES_BLIP_EXIST(Global_36308[Global_1888801[iParam0 /*35*/].f_13]))
				{
					MAP::SET_BLIP_COORDS(Global_36308[Global_1888801[iParam0 /*35*/].f_13], Global_1888801[iParam0 /*35*/].f_15);
					MAP::BLIP_ADD_MODIFIER(Global_36308[Global_1888801[iParam0 /*35*/].f_13], 1046501997);
				}
			}
			if (Global_1572887.f_12 == -1)
			{
				if (iVar3 == 52 && Global_1357549.f_1708)
				{
					func_160(Global_1888801[iParam0 /*35*/].f_13, 1720107185);
				}
			}
		}
		else if (Global_1888801[iParam0 /*35*/].f_14 != iVar3 || Global_1888801[iParam0 /*35*/].f_18)
		{
			func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
			Global_1888801[iParam0 /*35*/].f_13 = -1;
			func_161(iParam0, 1024);
			Global_1888801[iParam0 /*35*/].f_18 = 0;
		}
	}
	else if (Global_1888801[iParam0 /*35*/].f_13 != -1)
	{
		func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
		Global_1888801[iParam0 /*35*/].f_13 = -1;
		func_161(iParam0, 1024);
	}
	if (func_149(iParam0, 64))
	{
		func_161(iParam0, 64);
		func_162(iParam0);
	}
	if (bVar4)
	{
		if (!func_149(iParam0, 1024))
		{
			if (func_163(iParam0, iVar3, -1726569132))
			{
				func_164(iParam0, 1024);
			}
		}
	}
	else if (func_149(iParam0, 1024))
	{
		if (func_165(iParam0, iVar3, -1726569132))
		{
			func_161(iParam0, 1024);
		}
	}
}

void func_49(int iParam0)
{
	Global_1898164 = (Global_1898164 - (Global_1898164 && iParam0));
}

void func_50(int iParam0)
{
	if (func_112() == -1)
	{
		func_166(0);
		func_167(1);
	}
	func_168(iParam0);
}

void func_51()
{
}

void func_52()
{
	if (!Global_1935630.f_12)
	{
		func_169();
		func_170();
		if (!func_154(3))
		{
			func_171(-1336.415f, 2442.417f, 307.4014f, 0f, 0f, 0f, 165f, 165f, 100f, -1336.415f, 2442.417f, 307.4014f, 0f, 0f, 0f, 165f, 165f, 100f, 7);
		}
		else if (func_154(38) && !func_154(43))
		{
			func_171(2064.727f, -7778.147f, 50f, 0f, 0f, 30f, 1550f, 1900f, 890f, 2064.727f, -7778.147f, 50f, 0f, 0f, 30f, 1600f, 1900f, 890f, 8);
		}
		else
		{
			func_172();
		}
		func_173();
		if (Global_1935630.f_47)
		{
			func_174();
			Global_1935630.f_47 = 0;
		}
		func_175();
		func_176();
		func_177();
		func_178();
		func_179();
		func_180();
		func_181();
		func_182();
		func_183();
		if (func_112() == -1)
		{
			if (!func_184())
			{
				Global_1935630.f_54 = MISC::GET_GAME_TIMER();
			}
		}
		if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_GAMEPLAY_CAM_RENDERING()) && !func_185(128))
		{
			MAP::SET_MINIMAP_FOW_REVEAL_COORDINATE(Global_36, 911509858);
		}
		if (!Global_40.f_9421)
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0) && MISC::GET_GAME_TIMER() < Global_1430258 + 2000)
			{
				Global_40.f_9421 = 1;
			}
		}
	}
}

void func_53()
{
	Global_36616 = 0;
	if (func_112() != -1)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	func_186();
	func_187();
	func_188();
	func_189();
}

void func_54()
{
	bool bVar0;
	bool bVar1;

	bVar1 = func_190(PLAYER::PLAYER_ID(), 1, 0, 1);
	if (func_112() == -1)
	{
		bVar0 = func_191();
		func_192(bVar0);
		func_193(bVar0);
		func_194();
		func_195(bVar0);
		func_196();
	}
	if (!Global_1934266.f_61 == 1)
	{
		func_197(bVar1);
		if (func_112() == -1)
		{
			func_198(bVar0, bVar1);
			func_199(bVar0);
		}
	}
}

void func_55()
{
	func_200();
}

void func_56()
{
	if (func_112() != -1)
	{
		return;
	}
	func_201();
	if (func_202() == 0)
	{
		if (func_203(128))
		{
			func_200();
			func_204(128);
		}
	}
	func_205();
	func_206();
}

void func_57()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		Global_1326862.f_3 = 0;
	}
	else
	{
		Global_1326862 = 0;
		Global_1326862.f_3 = 1;
	}
}

void func_58()
{
	if (Global_1326862.f_3)
	{
		func_207();
	}
}

void func_59()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	bVar0 = Global_1905944.f_5696;
	Global_1905944.f_5696 = 0;
	func_208();
	if (func_185(32768))
	{
		return;
	}
	if (!func_209(0))
	{
		return;
	}
	if (func_119() && !func_114(0, 0, 1))
	{
		return;
	}
	func_210(&iVar1, &iVar2, 0, 1);
	if (iVar1 == -1 || iVar2 == -1)
	{
		return;
	}
	iVar3 = func_211(iVar1, iVar2);
	bVar4 = true;
	if (!func_212(iVar3, &bVar4, bVar0))
	{
		if (!func_213(iVar3, 64) || !bVar4)
		{
			func_214(iVar1, iVar2);
		}
		else
		{
			iVar5 = func_215(iVar3);
			func_210(&iVar1, &iVar2, iVar5 + 1, 0);
			if (iVar1 != -1 && iVar2 != -1)
			{
				func_216(func_211(iVar1, iVar2));
			}
		}
		return;
	}
	if (func_213(iVar3, 8))
	{
		func_217(iVar3);
	}
	bVar6 = func_213(iVar3, 1024);
	iVar7 = Global_1905944.f_22[iVar3 /*9*/];
	iVar9 = func_218(iVar3);
	if (iVar9 == 0)
	{
		iVar9 = -2;
	}
	if (iVar7 != 0)
	{
		if (bVar6)
		{
			Global_1905944.f_22[iVar3 /*9*/].f_1 = func_219(iVar7, iVar3, iVar9, iVar8);
		}
		else
		{
			Global_1905944.f_22[iVar3 /*9*/].f_1 = func_220(MISC::VAR_STRING(0, iVar7), iVar9, 0, 0, iVar8, 1);
		}
		func_221();
		if (func_222(iVar3))
		{
			func_216(func_223(iVar3));
		}
	}
	func_214(iVar1, iVar2);
	if (bVar6 && Global_1905944.f_22[iVar3 /*9*/].f_1 == 0)
	{
		return;
	}
	func_224(&iVar1, &iVar2);
}

void func_60()
{
	if (func_225() == 0)
	{
		if (func_226(Global_1391411.f_1, 1))
		{
			func_227(&(Global_1391411.f_1), 1);
		}
		return;
	}
	if (func_228())
	{
		return;
	}
	if (func_226(Global_1391411.f_1, 1))
	{
		func_229(Global_1391411, 1);
		Global_1391411 = -1;
		func_227(&(Global_1391411.f_1), 1);
		return;
	}
	func_230(1);
}

void func_61()
{
	int iVar0;
	bool bVar1;

	if (Global_1879534)
	{
		return;
	}
	else if (func_114(0, 0, 1))
	{
		if (func_120(0))
		{
			func_231();
			func_232();
		}
		return;
	}
	else if (Global_43891)
	{
		func_231();
		func_232();
		return;
	}
	else if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	else if (func_118(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_233(16384);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_234(iVar0))
		{
		}
		else if (!MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
		}
		else if (func_235(iVar0))
		{
			func_236(iVar0);
		}
		else if (func_237(Global_1392626[iVar0 /*32*/].f_9, 8))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & 2 != 0)
			{
				func_238(iVar0);
				func_239(iVar0);
			}
		}
		else if (!func_240(iVar0))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & 2 != 0)
			{
				func_238(iVar0);
				func_239(iVar0);
			}
			bVar1 = Global_1392626[iVar0 /*32*/].f_9 & 4096 == false;
			func_241(iVar0, 0, bVar1);
		}
		else
		{
			if (Global_1392626[iVar0 /*32*/].f_9 & 4096 != 0)
			{
				func_242(iVar0);
			}
			func_243(iVar0);
			func_244(iVar0);
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
			{
				if (func_245(iVar0, Global_1392626[iVar0 /*32*/].f_5))
				{
					if (!func_246(Global_1392626[iVar0 /*32*/].f_3))
					{
						func_247(Global_1392626[iVar0 /*32*/].f_3, 0);
						func_248(Global_1392626[iVar0 /*32*/].f_3);
					}
				}
				else if (func_246(Global_1392626[iVar0 /*32*/].f_3))
				{
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
					{
						func_129(Global_1392626[iVar0 /*32*/].f_3);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9079[iVar0] = 0;
		iVar0++;
	}
	switch (func_112())
	{
		case -1:
			func_250(0, 5, func_249(0), 0);
			func_250(1, 105, func_249(1), 0);
			func_250(2, 76, func_249(2), 0);
			func_250(3, 38, func_249(3), 0);
			break;
	}
}

void func_63()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_112() != -1)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	if (func_114(0, 0, 1))
	{
		if (func_114(4220662, 0, 1))
		{
			bVar0 = true;
			bVar1 = true;
		}
	}
	if (func_251(1073741824 /* Float: 2f */))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_252(iVar2))
		{
			if (!bVar1)
			{
				if (!func_253(iVar2))
				{
					if (func_254(iVar2))
					{
						if (func_255(iVar2))
						{
							if (!func_251(16))
							{
								if (Global_1934182[iVar2 /*18*/].f_16 == 0)
								{
									if (VOLUME::DOES_VOLUME_EXIST(Global_1934182[iVar2 /*18*/].f_7))
									{
										POPULATION::_0xB56D41A694E42E86(Global_1934182[iVar2 /*18*/].f_7, 26592, 0, 0, -1, GET_HASH_KEY("SHOP_PEDS_RHODES"), 0);
										POPULATION::_0x18262CAFEBB5FBE1(Global_1934182[iVar2 /*18*/].f_7, 0, 26592, 0, -1, GET_HASH_KEY("SHOP_PEDS_RHODES"), 0);
									}
									Global_1934182[iVar2 /*18*/].f_16 = 1;
								}
								if (!func_256(iVar2) && func_257(iVar2))
								{
									func_258(iVar2, 1);
									func_259(32);
									func_260(16);
								}
							}
						}
						else if (!func_251(32))
						{
							if (VOLUME::DOES_VOLUME_EXIST(Global_1934182[iVar2 /*18*/].f_7))
							{
								POPULATION::_0x74C2B3DC0B294102(Global_1934182[iVar2 /*18*/].f_7);
								POPULATION::_0xA1CFB35069D23C23(Global_1934182[iVar2 /*18*/].f_7);
							}
							Global_1934182[iVar2 /*18*/].f_16 = 0;
							if (func_257(iVar2))
							{
								func_261(iVar2);
								func_259(16);
								func_260(32);
							}
						}
					}
				}
			}
			if ((func_149(Global_1934182[iVar2 /*18*/], 2097152) || func_251(2)) || bVar0)
			{
				func_262(iVar2);
				if (func_246(Global_1934182[iVar2 /*18*/].f_5))
				{
					func_129(Global_1934182[iVar2 /*18*/].f_5);
				}
			}
			else if (func_263(iVar2))
			{
				if (func_264(iVar2))
				{
				}
				else if (!func_246(Global_1934182[iVar2 /*18*/].f_5) && func_266(func_265(iVar2), 0))
				{
					func_267(iVar2);
				}
			}
			else
			{
				fVar3 = BUILTIN::VDIST2(Global_1934182[iVar2 /*18*/].f_1, Global_36);
				func_268(iVar2, fVar3);
			}
		}
		iVar2++;
	}
}

void func_64()
{
	func_269();
	func_270(Global_1888801[11 /*35*/].f_3, "ea_logCampRestrict", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	func_270(Global_1888801[15 /*35*/].f_3, "ea_indReservRestrict", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	func_271();
	Global_1898092.f_2 = func_272();
	Global_1898092.f_26.f_6 = 0;
	Global_1898092.f_26.f_4 = 0;
	Global_1898092.f_26 = 0;
	Global_1898092.f_26.f_1 = -1;
	Global_1898092.f_26.f_2 = -1;
	Global_1898092.f_26.f_3 = -1;
}

void func_65()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	var uVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;

	iVar0 = Global_1898092.f_2;
	func_274(iVar0, func_273());
	func_275();
	switch (Global_1898092)
	{
		case 0:
			iVar5 = func_276(iVar0);
			func_277(&iVar0, &iVar5);
			func_278(iVar0, iVar5);
			if (func_279(iVar0, iVar5))
			{
				func_280(iVar0, 1073741824 /* Float: 2f */);
				func_280(iVar0, 268435456);
			}
			if ((!func_281(1) && !func_281(2)) && (func_282(iVar0) || func_283(iVar0, 1073741824 /* Float: 2f */)))
			{
				Global_1898092.f_36 = iVar5;
				if (Global_40.f_9096[iVar0 /*12*/].f_2 >= 0)
				{
					if (func_284(iVar0) && !func_285(iVar0, 8388608))
					{
						if (func_286(iVar0, iVar5))
						{
							if (Global_40.f_9096[iVar0 /*12*/].f_1 == -1)
							{
								if (iVar5 < func_287(iVar0))
								{
									Global_1898092.f_36 = iVar5 + 1;
								}
								else
								{
									Global_1898092.f_36 = func_287(iVar0);
								}
								func_288(iVar0, &(Global_1898092.f_36));
							}
							else
							{
								Global_1898092.f_36 = Global_40.f_9096[iVar0 /*12*/].f_1;
								func_288(iVar0, &(Global_1898092.f_36));
							}
							func_289(iVar0);
							func_290(4);
							func_291(1);
						}
					}
					else
					{
						func_292(iVar0, &uVar4, &uVar3, &uVar2, &uVar1);
					}
					if (func_283(iVar0, 1073741824 /* Float: 2f */) && (((func_283(iVar0, 268435456) || func_283(iVar0, 4194304)) || func_283(iVar0, -2147483648)) || !func_284(iVar0)))
					{
						if (func_286(iVar0, iVar5))
						{
							func_290(4);
							func_291(1);
						}
					}
				}
				else if (func_283(iVar0, 1073741824 /* Float: 2f */) && (((func_283(iVar0, 268435456) || func_283(iVar0, 4194304)) || func_283(iVar0, -2147483648)) || !func_284(iVar0)))
				{
					if (func_286(iVar0, iVar5))
					{
						func_290(4);
						func_291(1);
					}
				}
			}
			if (func_281(1))
			{
				func_291(5);
			}
			else if (func_281(2))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_291(4);
			}
			else if (!func_281(4))
			{
				uVar6 = Global_1898092.f_2;
				Global_1898092.f_2++;
				if (Global_1898092.f_2 >= 4)
				{
					Global_1898092.f_2 = 0;
				}
			}
			if (func_283(1, 2))
			{
				func_293();
			}
			break;
		case 1:
		case 2:
			if (func_283(1, 2))
			{
				func_293();
			}
			break;
		case 3:
			iVar0 = Global_1898092.f_2;
			Global_40.f_9096[iVar0 /*12*/].f_1 = -1;
			if (Global_1898092.f_36 > 0)
			{
				func_288(iVar0, &(Global_1898092.f_36));
				Global_40.f_9096[iVar0 /*12*/] = Global_1898092.f_36;
				Global_40.f_9096[iVar0 /*12*/].f_2 = -1;
				func_294(iVar0, Global_1898092.f_36);
			}
			func_291(0);
			func_295(iVar0, 1073741824 /* Float: 2f */);
			if (func_283(1, 2))
			{
				func_293();
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_291(5);
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				func_291(5);
			}
			break;
		case 5:
			if (Global_1898092.f_36 <= 0 || func_296(Global_1898092.f_35, Global_1898092.f_36, 1, 0, 0))
			{
				if (Global_1898092.f_36 > 0)
				{
					func_288(Global_1898092.f_35, &(Global_1898092.f_36));
					Global_40.f_9096[Global_1898092.f_35 /*12*/] = Global_1898092.f_36;
					Global_40.f_9096[Global_1898092.f_35 /*12*/].f_2 = -1;
					Global_40.f_9096[Global_1898092.f_35 /*12*/].f_1 = -1;
					func_294(Global_1898092.f_35, Global_1898092.f_36);
				}
				iVar7 = func_297(Global_1898092.f_35);
				if (func_47(iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_35))
					{
						if (!Global_1935630.f_12)
						{
							iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							iVar13 = func_276(Global_1898092.f_35);
							func_298(Global_1898092.f_35, &vVar8, &uVar11, iVar12, iVar13);
							func_299(Global_35, vVar8, uVar11, 4, 1073741824 /* Float: 2f */);
						}
					}
				}
				func_295(iVar0, 1073741824 /* Float: 2f */);
				func_291(6);
			}
			break;
		case 6:
			func_300(1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			func_291(7);
			break;
		case 7:
			vVar14 = { func_301(Global_1898092.f_35, func_276(Global_1898092.f_35)) };
			func_302(vVar14, 110f, 0);
			func_303(vVar14, 110f, 0);
			func_304(vVar14, 110f, 0, 0, 1, 1, 0);
			func_305(1);
			func_305(2);
			func_295(iVar0, 1073741824 /* Float: 2f */);
			Global_1898092.f_35 = -1;
			Global_1898092.f_36 = -1;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_291(0);
			break;
	}
}

void func_66()
{
	func_306(-1);
}

void func_67()
{
	if (func_307())
	{
		func_308();
		return;
	}
	func_309();
}

void func_68()
{
	if (func_112() != -1)
	{
		return;
	}
}

void func_69()
{
	int iVar0;
	float fVar1;
	var uVar2;

	if (!func_310())
	{
		return;
	}
	if (!func_127(Global_1392581.f_1))
	{
		Global_1392581.f_1 = func_311(2, 0, 2, 561818960);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
	{
		func_312(Global_1392581.f_1, 1, 2);
		if (func_226(Global_1392581.f_3, 16))
		{
			iVar0 = 14;
		}
		else
		{
			iVar0 = func_313(Global_36, 1);
		}
		if (func_226(Global_1392581.f_3, 16) || (func_314(iVar0) && !func_315(iVar0, 2)))
		{
			fVar1 = 200f;
			if (func_226(Global_1392581.f_3, 16) || func_316(iVar0, &uVar2, fVar1, -1))
			{
				func_248(Global_1392581.f_1);
			}
		}
	}
}

void func_70()
{
	func_317();
	if (func_112() != -1)
	{
		return;
	}
	func_319(0, 77, func_318(0));
	func_319(1, 64, func_318(1));
	func_319(2, 96, func_318(2));
	func_319(3, 42, func_318(3));
	func_319(4, 102, func_318(4));
	func_319(5, 91, func_318(5));
	func_319(6, 89, func_318(6));
	func_319(7, 29, func_318(7));
}

void func_71()
{
	int iVar0;
	bool bVar1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392240, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_320(Global_1392240.f_1[iVar0 /*18*/].f_4, iVar0))
		{
			if (func_246(Global_1392240.f_1[iVar0 /*18*/].f_13))
			{
				func_129(Global_1392240.f_1[iVar0 /*18*/].f_13);
			}
			func_321(iVar0, 1);
		}
		else if (!func_322(iVar0))
		{
			switch (iVar0)
			{
				case 6:
					if (func_323(1, 1))
					{
						func_324(6, 0);
					}
					break;
				case 7:
					if (BUILTIN::VDIST(Global_36, Global_1392240.f_1[iVar0 /*18*/]) < 200f)
					{
						func_324(7, 0);
					}
					break;
			}
		}
		else
		{
			bVar1 = func_325(iVar0);
			func_326(iVar0, bVar1);
			if (bVar1)
			{
				func_327(iVar0);
				func_328(iVar0);
				func_329(iVar0);
			}
			else
			{
				func_330(iVar0);
				if (func_246(Global_1392240.f_1[iVar0 /*18*/].f_13))
				{
					func_129(Global_1392240.f_1[iVar0 /*18*/].f_13);
				}
			}
		}
		iVar0++;
	}
}

void func_72()
{
	func_331();
}

void func_73()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1359489[iVar0] = -1;
		iVar0++;
	}
	Global_1359489.f_15 = 0;
	Global_1359489.f_16 = 0;
	Global_1359489.f_18 = 0;
	Global_1359453 = 0;
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DEF_COMP_BRAIN"));
	Global_1359489.f_38 = Global_40.f_4283.f_5;
	func_332(&(Global_1359489.f_25), 1, 1);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] == 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/] = func_333(iVar1);
		}
		iVar1++;
	}
}

void func_74()
{
	func_334();
	if (!func_335(Global_35, 0))
	{
		return;
	}
	if (func_336(131072))
	{
		if (!func_126())
		{
			if (PED::DOES_GROUP_EXIST(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())))
			{
				COMPANION::_0x0F1CD8CA9E65D5F6(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 234527101);
			}
			func_337(131072);
		}
		func_338();
	}
	else if (func_126())
	{
		func_339(131072);
	}
	func_340(&(Global_1391438.f_7[0 /*99*/]), 0);
	func_340(&(Global_1391438.f_7[1 /*99*/]), 1);
	func_341();
	func_342();
	func_343();
}

void func_75()
{
	Global_1357549.f_1497.f_8 |= 1;
}

void func_76()
{
	if (!func_344())
	{
		return;
	}
	func_345();
}

void func_77()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_DELETE(Global_1945938[iVar0 /*18*/].f_3);
		}
		Global_1945938[iVar0 /*18*/].f_3 = 0;
		Global_1945938[iVar0 /*18*/].f_4 = 0;
		Global_1945938[iVar0 /*18*/] = 1;
		Global_1945938[iVar0 /*18*/].f_16 = 0;
		Global_1945938[iVar0 /*18*/].f_1 = 0;
		Global_1945938[iVar0 /*18*/].f_6 = { 0f, 0f, 0f };
		Global_1945938[iVar0 /*18*/].f_9 = 0f;
		Global_1945938[iVar0 /*18*/].f_10 = 0;
		Global_1945938[iVar0 /*18*/].f_11 = 0;
		Global_1945938[iVar0 /*18*/].f_5 = -1;
		Global_1945938[iVar0 /*18*/].f_2 = 1;
		Global_1945938[iVar0 /*18*/].f_12 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1945938.f_865 = 0;
}

void func_78()
{
}

void func_79()
{
	if (func_112() == -1)
	{
		func_346();
		func_347();
		func_348();
		func_349();
	}
}

void func_80()
{
	Global_1327490.f_91 = -1;
	Global_1327490.f_89 = -1;
}

void func_81()
{
	if (func_114(8, 1, 1))
	{
		func_350();
		return;
	}
	if ((!func_351(func_113()) && !func_352(Global_1327490.f_91)) && !func_352(Global_1327490.f_89))
	{
		func_350();
		return;
	}
	if (func_352(Global_1327490.f_91))
	{
		if (Global_1327490.f_89 != Global_1327490.f_91)
		{
			if (func_352(Global_1327490.f_89))
			{
				func_350();
			}
			if (!func_353(Global_1327490.f_91))
			{
				return;
			}
		}
	}
	func_354();
	if (func_355())
	{
		if (!func_352(Global_1327490.f_89))
		{
			func_356();
		}
	}
}

void func_82()
{
}

void func_83()
{
	if (func_112() != -1)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
	}
	if (func_357())
	{
		func_358();
	}
}

void func_84()
{
	func_359();
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
		SCRIPTS::TERMINATE_THREAD(Global_1425351.f_19);
	}
}

void func_85()
{
	func_360();
	func_361();
}

void func_86()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_362(Global_1935630, 8192))
	{
		return;
	}
	if (func_185(32768))
	{
		return;
	}
	func_363(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * func_365(10f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * func_365(5f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * func_365(25f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * func_365(1f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * func_365(6f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * func_365(1f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("DISCOVERABLE_FOUND"))))));
	iVar1 = func_367();
	fVar0 = (fVar0 + (0.1111111f * func_365(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_ACTRESSES"))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_AMERICANS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_ANIMALS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_ARTISTS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_GIRLS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_GUNSLINGERS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_HORSES")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_INVENTIONS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_LANDMARKS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_PLANTS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_SPORTS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + func_365(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_365(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_369()))));
	if (func_370(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_370(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_370(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_370(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_370(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * func_365(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_365(5f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * func_365(5f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("KILLS"), GET_HASH_KEY("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(GET_HASH_KEY("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	func_372(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_365((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_365(1f, BUILTIN::TO_FLOAT(func_373(GET_HASH_KEY("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(func_374());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * func_365(5f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * func_365(1f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * func_365(1f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * func_365(1f, BUILTIN::TO_FLOAT(func_366(GET_HASH_KEY("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_365(1f, BUILTIN::TO_FLOAT(func_364(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("TRAIN"))))));
	Var6 = { func_375(GET_HASH_KEY("TOTAL_PROGRESS_MADE")) };
	fVar8 = func_376(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_127(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!func_127(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_128(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_129(Global_1898330[iVar61]);
				}
				else
				{
					func_130(iVar61, 0);
					if (func_377(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_378(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_378(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_378(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_87()
{
	if (Global_1393237.f_4 <= 0)
	{
		Global_1393237.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 40000);
	}
	func_379();
	STREAMING::REQUEST_NAMED_PTFX_ASSET(GET_HASH_KEY("SCR_DISTANCE_SMOKE"));
}

void func_88()
{
	func_380();
	func_381();
}

void func_89()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar0 /*30*/].f_22))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iVar0 /*30*/].f_22, false);
			Global_1393237.f_11[iVar0 /*30*/].f_22 = 0;
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar0 /*30*/].f_23))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iVar0 /*30*/].f_23, false);
			Global_1393237.f_11[iVar0 /*30*/].f_23 = 0;
		}
		iVar0++;
	}
}

void func_90()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	Global_1935436.f_10 = func_382(25);
	if (Global_1935436.f_1 != -1)
	{
		func_383();
	}
	if (Global_1935436 >= 1)
	{
		if (func_384())
		{
			func_385(1);
		}
	}
	if (Global_1935436 == Global_1935436.f_1)
	{
		Global_1935436.f_1 = -1;
	}
	if (Global_1935436.f_11)
	{
		if (func_382(25))
		{
			func_386(25);
		}
		Global_1935436.f_11 = 0;
	}
	switch (Global_1935436)
	{
		case 0:
			if (Global_1935436.f_9 >= 0.5f)
			{
				Global_1935436 = 1;
				func_387();
				PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
				PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 1);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
				{
					bVar0 = func_388();
					if (Global_1935436.f_6 < 0)
					{
						if (bVar0)
						{
							Global_1935436.f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						}
						else
						{
							Global_1935436.f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
						}
					}
					if (bVar0)
					{
						if (Global_1935436.f_6 > 1)
						{
							Global_1935436.f_6 = 0;
						}
					}
					Global_1935436.f_7 = 0;
					Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 50000));
				}
				else
				{
					Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + 9999999);
				}
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_5)
			{
				if (func_388())
				{
					iVar1 = 2;
				}
				else
				{
					iVar1 = 4;
				}
				if (Global_1935436.f_7 < iVar1)
				{
					if (func_389(&uVar2, &uVar3, 1))
					{
						func_390(Global_35, 0, "PLAYER_DRUNK_MERRY_SINGING", "", -1f, Global_1935436.f_6 + 1, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
						Global_1935436.f_6++;
						if (Global_1935436.f_6 >= iVar1)
						{
							Global_1935436.f_6 = 0;
						}
						Global_1935436.f_7++;
						Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 120000));
					}
					else
					{
						Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 23000));
					}
				}
			}
			if (Global_1935436.f_9 >= 0.75f)
			{
				Global_1935436 = 2;
				func_387();
			}
			else if (Global_1935436.f_9 < 0.5f && Global_1935436.f_12.f_1 == 0f)
			{
				func_385(0);
				Global_1935436 = 0;
			}
			break;
		case 2:
			if ((func_391(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || Global_1357549.f_1495 & 512 != 0)
			{
				func_392(1);
			}
			if (Global_1935436.f_9 < 0.75f)
			{
				Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + 9999999);
				Global_1935436 = 1;
			}
			break;
	}
	if (Global_1935436 >= 1)
	{
		func_393();
	}
	if (func_394() && func_395())
	{
		func_396();
	}
}

void func_91()
{
	func_397(0);
}

void func_92()
{
	int iVar0;
	bool bVar1;

	if (func_398())
	{
		return;
	}
	if (Global_1934765.f_273)
	{
		return;
	}
	iVar0 = func_46();
	if (func_47(iVar0))
	{
		if (Global_1888801[iVar0 /*35*/].f_20 == 3)
		{
			if (func_400(func_399(iVar0)))
			{
				if (func_401(iVar0, 0))
				{
					func_402(func_399(iVar0), 0, 0);
				}
			}
		}
	}
	func_403();
	bVar1 = func_404();
	if (Global_1934765.f_272)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_405(0, 0))
		{
			func_406();
			Global_1934765.f_272 = 0;
			Global_1934765.f_274 = 0;
			Global_1934765 = 0;
		}
	}
	func_407();
	func_408();
	func_409();
}

void func_93()
{
}

void func_94()
{
	int iVar0;

	func_410();
	func_411(&Global_1899778);
	iVar0 = 0;
	while (iVar0 < Global_1899528.f_45)
	{
		Global_1899528.f_45[iVar0] = -15;
		iVar0++;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_412(&Global_1899778);
	Global_1899528.f_214 = func_273();
	Global_1899528.f_215 = func_413(2057, 0);
	Global_1899528.f_209 = MISC::IS_MINIGAME_IN_PROGRESS();
	Global_1899528.f_218 = func_414(PLAYER::PLAYER_PED_ID());
	Global_1899528.f_221 = func_415(1);
	if (Global_1899528.f_217)
	{
		func_416();
	}
	if (Global_1899528.f_216 != Global_1899528.f_214)
	{
		if (Global_1899528.f_214)
		{
			func_417(0);
		}
		else
		{
			func_418(0);
		}
		Global_1899528.f_216 = Global_1899528.f_214;
	}
	if (func_419())
	{
		Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
		PED::SET_PED_RESET_FLAG(Global_35, 219, true);
		if (!func_420(5))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_DYNAMIC_SCENARIO"), false);
		}
	}
	if (MISC::GET_FRAME_COUNT() < Global_1899528.f_206 + 60 || MISC::GET_FRAME_COUNT() < Global_1899528.f_207 + 60)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
	}
	if (func_112() != -1)
	{
		return;
	}
	if (func_191())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		Global_1899528.f_219++;
		if (Global_1899528.f_219 >= 10)
		{
			Global_1899528.f_219 = 0;
		}
		if (!func_421(Global_1899528.f_219))
		{
			iVar0 = func_422(Global_1899528.f_219);
			if (Global_1894899.f_2 != func_423(Global_1899528.f_219) && !func_424(iVar0))
			{
				func_425(Global_1899528.f_219);
				func_426(Global_1899528.f_219);
				return;
			}
			if (!Global_1899528.f_214)
			{
				if (func_428(func_427(Global_1899528.f_219)) && func_429(iVar0))
				{
					iVar1 = func_430(iVar0);
					if (iVar1 == -1)
					{
						func_248(iVar0);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_96()
{
	func_431(&Global_1899778);
}

void func_97()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_432(&(Global_1391438.f_5), 8))
	{
		if (func_433(&(Global_1391438.f_414), Global_1572864.f_8, Global_1572864.f_9))
		{
			func_434(&(Global_1391438.f_5), 8, 0);
		}
		return;
	}
	if (Global_1391438.f_491 != -589165916)
	{
		if (func_435(Global_1391438.f_491, 0))
		{
			Global_1391438.f_491 = -589165916;
		}
		return;
	}
	if (func_432(&(Global_1391438.f_5), 64))
	{
		if (func_436(&(Global_1391438.f_209)))
		{
			func_434(&(Global_1391438.f_5), 64, 0);
			func_437(&(Global_1391438.f_209));
		}
		else
		{
			return;
		}
	}
	if (func_438() || func_185(32))
	{
		return;
	}
	iVar2 = func_439();
	switch (iVar2)
	{
		case 1:
			if (func_440(GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_440(GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (func_114(256, 0, 1) && !bVar1)
	{
		return;
	}
	switch (Global_1391438.f_4)
	{
		case 0:
			if (func_441(Global_1391438.f_594))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(Global_1391438.f_594) && !STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(Global_1391438.f_594, Global_36))
				{
					STREAMING::REMOVE_IPL_HASH(Global_1391438.f_594);
					Global_1391438.f_594 = func_442();
				}
			}
			if (bVar1)
			{
				if (!func_443(5000))
				{
					iVar3 = func_445(0, func_444(func_439()));
					if (!func_246(iVar3))
					{
						func_248(iVar3);
					}
					if (!func_446(iVar3) && !func_447(iVar3, 1))
					{
						if (BUILTIN::VDIST2(Global_36, func_448(func_439())) < 62500f)
						{
							func_450(func_449(func_439()), 0);
						}
					}
				}
			}
			if (!func_451(1))
			{
				return;
			}
			if (func_452())
			{
				Global_1391438.f_2 = CLOCK::GET_CLOCK_HOURS();
				Global_1391438.f_4 = 1;
			}
			else
			{
				Global_1391438.f_4 = 3;
				func_453(1, 3);
			}
			break;
		case 1:
			if (!func_413(256, 0))
			{
				func_454(&(Global_1391438.f_414));
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Global_1391438.f_7[iVar0 /*99*/].f_9 == -589165916)
				{
					func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
					if (func_455(&(Global_1391438.f_7[iVar0 /*99*/])))
					{
						Global_1391438.f_7[iVar0 /*99*/].f_12 = iVar0;
						if (!func_246(Global_1391438.f_7[iVar0 /*99*/].f_10) && !func_446(Global_1391438.f_7[iVar0 /*99*/].f_10))
						{
							func_248(Global_1391438.f_7[iVar0 /*99*/].f_10);
						}
						func_453(1, 1);
					}
					else
					{
						func_453(1, 2);
					}
				}
				iVar0++;
			}
			Global_1391438.f_4 = 3;
			break;
		case 3:
			if (!func_456(&(Global_1391438.f_595)))
			{
				func_457(&(Global_1391438.f_595), 1);
			}
			else if (func_458(&(Global_1391438.f_595)) > 5f)
			{
				Global_1391438.f_4 = 4;
				return;
			}
			if (func_459())
			{
				if (!func_114(0, 0, 1) && func_46() == func_113())
				{
					if (func_460(func_439()))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[0], false))
						{
							if (func_461(0))
							{
								if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_POKER_LIGHT")))
								{
									SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("ACT_CAMP_POKER_LIGHT"));
									return;
								}
								else
								{
									Global_1391438.f_598[0] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("ACT_CAMP_POKER_LIGHT"), 1024);
								}
							}
						}
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[1], false))
						{
							if (func_461(1))
							{
								if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_DOMINOES_LIGHT")))
								{
									SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("ACT_CAMP_DOMINOES_LIGHT"));
									return;
								}
								else
								{
									Global_1391438.f_598[1] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("ACT_CAMP_DOMINOES_LIGHT"), 1024);
								}
							}
						}
					}
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[2], false))
					{
						if (func_461(2))
						{
							if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_FFF_LIGHT")))
							{
								SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("ACT_CAMP_FFF_LIGHT"));
								return;
							}
							else
							{
								Global_1391438.f_598[2] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("ACT_CAMP_FFF_LIGHT"), 1024);
							}
						}
					}
				}
				Global_1391438.f_4 = 4;
			}
			break;
		case 4:
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_POKER_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_poker_light");
			}
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_DOMINOES_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_dominoes_light");
			}
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_FFF_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_fff_light");
			}
			func_462(&(Global_1391438.f_595));
			Global_1391438.f_4 = 0;
			break;
	}
}

void func_98()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[0], false))
	{
		func_437(&(Global_1391438.f_7[0 /*99*/]));
	}
	else
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1391438.f_206[0]);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[1], false))
	{
		func_437(&(Global_1391438.f_7[1 /*99*/]));
	}
	else
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1391438.f_206[1]);
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_POKER_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_poker_light");
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_DOMINOES_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_dominoes_light");
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("ACT_CAMP_FFF_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_fff_light");
	}
}

void func_99()
{
	func_463();
	func_464();
	func_465();
	func_466();
	func_467();
	func_468();
	func_469();
	func_470();
	func_471();
	func_472();
	func_473();
}

void func_100()
{
}

void func_101()
{
	Global_1415419.f_9720 = 0;
	func_474();
	func_475();
}

void func_102()
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	int iVar18;
	struct<13> Var19;

	func_476();
	if (((func_273() || CAM::IS_SCREEN_FADED_OUT()) && !Global_1415419.f_6) && (!func_226(Global_1415419.f_3, 1) || func_362(Global_1935630, 2097152)))
	{
		if (Global_1415419.f_9720 > 0)
		{
			func_477(0);
			func_478();
		}
		return;
	}
	switch (Global_1415419.f_2)
	{
		case 0:
			if (Global_1415419.f_9756 != func_479())
			{
				if (func_480(func_479()))
				{
					func_474();
					Global_1415419.f_9756 = func_479();
					func_481("ambient_vignette_manager_loader", 523);
					Var1.f_14 = 1024;
					StringCopy(&(Var1.f_10), "ambient_vignette_manager_loader", 32);
					func_482(Var1, 2);
				}
				return;
			}
			if (func_483(0, 0))
			{
				iVar0 = func_484();
				if (iVar0 != -1)
				{
					bVar17 = func_485();
					if (Global_1415419.f_16 != -1)
					{
						iVar18 = 0;
						if (bVar17 || func_486(Global_1415419.f_16, &iVar18, 1, 1, 0) != -1)
						{
							Global_1415419.f_17 = iVar0;
							Global_1415419.f_9721[iVar0 /*8*/] = Global_1415419.f_16;
							Global_1415419.f_9721[iVar0 /*8*/].f_2 = 1;
							Global_1415419.f_9720++;
							func_227(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 2);
							SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
							Global_1415419.f_9718 = !Global_1415419.f_9718;
							Global_1415419.f_2 = 1;
						}
						else
						{
							func_227(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 2);
							func_227(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 1);
							Global_1415419.f_9718 = !Global_1415419.f_9718;
						}
						return;
					}
				}
				Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_9718 = !Global_1415419.f_9718;
			break;
		case 1:
			if (func_487(Global_1415419.f_16))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
				if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]))
				{
					func_488(Global_1415419.f_16);
					Var19 = -1;
					Var19.f_11 = -1;
					Var19 = Global_1415419.f_16;
					Var19.f_1 = { Global_1415419.f_9 };
					Var19.f_4 = { Global_1415419.f_12 };
					Var19.f_7 = Global_1415419.f_15;
					Var19.f_11 = Global_1415419.f_17;
					Var19.f_12 = Global_1415419.f_18;
					if (!ENTITY::IS_ENTITY_DEAD(Global_1415419.f_9758))
					{
						Var19.f_8 = Global_1415419.f_9758;
						Var19.f_10 = 1;
						Global_1415419.f_9758 = 0;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_1415419.f_9759))
					{
						Var19.f_9 = Global_1415419.f_9759;
						Var19.f_10 = 1;
						Global_1415419.f_9759 = 0;
					}
					Global_1415419.f_9 = { 0f, 0f, 0f };
					Global_1415419.f_12 = { 0f, 0f, 0f };
					Global_1415419.f_15 = 0;
					Global_1415419.f_18 = 0;
					Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Global_1415419.f_19[Global_1415419.f_16 /*12*/], &Var19, 13, 1024);
					Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_3 = Global_1415419.f_6;
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
					Global_1415419.f_16 = -1;
					Global_1415419.f_17 = -1;
					Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
					Global_1415419.f_6 = 0;
					Global_1415419.f_2 = 0;
				}
			}
			else
			{
				Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_2 = 0;
				Global_1415419.f_16 = -1;
				Global_1415419.f_17 = -1;
				Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
				Global_1415419.f_2 = 0;
			}
			break;
	}
}

void func_103()
{
	func_477(1);
	func_478();
	func_474();
}

void func_104()
{
}

void func_105()
{
	if (func_112() == -1)
	{
		func_489();
		func_490();
		func_491();
		func_492();
		func_493();
		if (Global_40.f_9045.f_5)
		{
			if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_BAND_ROOT")) >= 1)
			{
				Global_40.f_9045.f_5 = 0;
			}
		}
		if (func_370(43))
		{
			if (func_370(47))
			{
				if (!func_370(48))
				{
					func_494();
				}
			}
			else if (func_370(46))
			{
				if (!func_370(47))
				{
					func_494();
				}
			}
			else if (func_370(45))
			{
				if (!func_370(46))
				{
					func_494();
				}
			}
			else if (func_370(44))
			{
				if (!func_370(45))
				{
					func_494();
				}
			}
			else if (!func_370(44))
			{
				func_494();
			}
		}
	}
}

void func_106()
{
	int iVar0;

	STREAMING::REQUEST_PTFX_ASSET();
	Local_30.f_12 = "MGFSH_Insect_Sounds";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_30.f_13[iVar0 /*9*/].f_8 = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	func_495(&(Local_30.f_32));
}

void func_107()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	func_496(&(Local_30.f_32));
	func_497(&Local_30);
}

void func_108()
{
	func_498(&Local_30);
	STREAMING::REMOVE_PTFX_ASSET();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_30.f_12))
	{
		AUDIO::_0x531A78D6BF27014B(Local_30.f_12);
	}
}

void func_109()
{
	switch (Global_1898077.f_1)
	{
		case 0:
			func_499();
			break;
		case 3:
			func_499();
			break;
		case 4:
			func_499();
			break;
	}
}

void func_110()
{
	func_500();
	if (!func_501())
	{
		func_502(&Global_0);
		return;
	}
	if (func_112() == -1)
	{
		if ((IntToFloat((MISC::GET_GAME_TIMER() - Global_0.f_6)) + (func_503(Global_36, Global_0.f_3) * 1000f)) > 300000f)
		{
			if (!func_119() && !func_504(&Global_0, 3))
			{
				func_505(0, -1);
			}
		}
		if (func_504(&Global_0, 1024))
		{
			func_506(0, 0);
			Global_0.f_6 = MISC::GET_GAME_TIMER();
			Global_0.f_3 = { Global_36 };
			func_507(&Global_0, 1024);
		}
	}
	if (func_504(&Global_0, 3))
	{
		func_508();
	}
	else if (func_504(&Global_0, 8))
	{
		func_509();
	}
}

void func_111()
{
	switch (Global_1879514)
	{
		case 0:
			if (!func_127(Global_1879514.f_1))
			{
				return;
			}
			if (func_510(Global_1879514.f_6, 16))
			{
				func_511(&(Global_1879514.f_6), 16);
				return;
			}
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				return;
			}
			if (func_185(32768))
			{
				return;
			}
			if (!func_38(64))
			{
				return;
			}
			if ((Global_1879514.f_13 && !func_119()) && func_512())
			{
				return;
			}
			if (func_443(1000))
			{
				return;
			}
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || CAM::IS_SCREEN_FADING_IN())
			{
				return;
			}
			if (HUD::_0x7EC0D68233E391AC(10) == 2 || HUD::_0x7EC0D68233E391AC(10) == 4)
			{
				return;
			}
			if (func_513())
			{
				Global_1879514.f_7 = MISC::GET_GAME_TIMER();
				return;
			}
			if (func_119() && Global_1879514.f_1 != func_514(76))
			{
				func_516(func_515(Global_1879514.f_1));
				func_517(2);
				return;
			}
			if (func_518(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(6)))
			{
				return;
			}
			if (Global_1879514.f_18 && (!CAM::IS_SCREEN_FADED_IN() || func_438()))
			{
				return;
			}
			if (Global_1879514.f_1 == func_514(76) && (!func_447(func_514(77), 1) || func_443(5000)))
			{
				return;
			}
			if (func_377(Global_1879514.f_1) == 8 && !func_520(Global_1347702[func_519(Global_1879514.f_1) /*49*/].f_12, 262144))
			{
				func_517(2);
			}
			else
			{
				if (func_521())
				{
					Global_1879514.f_10 = 1;
				}
				if (Global_1879514.f_18)
				{
					func_505(0, -1);
				}
				func_522();
				if (!Global_1879514.f_18 && Global_1879514.f_1 == func_514(58))
				{
					func_523(func_514(58), 600000, 1, 1f, 1, 0, 0, 1);
				}
				func_517(1);
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= Global_1879514.f_7 + 1000)
			{
				if ((UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(GET_HASH_KEY("PLAYER_MENU")) || !func_524(Global_1879514.f_17)) || MISC::GET_GAME_TIMER() >= Global_1879514.f_7 + 30000)
				{
					func_517(2);
				}
			}
			break;
		case 2:
			if (Global_1879514.f_9)
			{
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			}
			if (Global_1879514.f_17 != 0 && UIFEED::_0x59FA676177DBE4C9(Global_1879514.f_17) != 6)
			{
				UIFEED::UI_FEED_CLEAR_CHANNEL(6, 1, 0);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			func_525();
			func_517(0);
			break;
	}
}

int func_112()
{
	return Global_1572887.f_12;
}

int func_113()
{
	return Global_40.f_4283.f_1;
}

bool func_114(int iParam0, bool bParam1, bool bParam2)
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
		if (func_526())
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
		iVar0 = func_519(Global_1898164.f_1[0 /*5*/]);
		if (func_141(iVar0) && func_520(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_127(Global_1898164.f_1[0 /*5*/]))
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

void func_115()
{
	var uVar0;

	MISC::_COPY_MEMORY(&Global_1430242, &uVar0, 10);
}

void func_116()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	bVar5 = ENTITY::IS_ENTITY_DEAD(Global_35);
	iVar4 = 0;
	while (iVar4 < Global_1898330)
	{
		if (!func_127(Global_1898330[iVar4]))
		{
		}
		else
		{
			func_130(iVar4, 0);
			if (func_127(Global_1898330[iVar4]))
			{
				switch (func_377(Global_1898330[iVar4]))
				{
					case 1:
						if (!bVar0)
						{
							bVar1 = func_126();
							bVar0 = true;
						}
						if (!bVar2)
						{
							bVar3 = func_114(0, 1, 1);
							bVar2 = true;
						}
						iVar6 = Global_1898346[iVar4 /*6*/].f_4;
						func_132(iVar6, iVar4, bVar1, func_112(), bVar3, bVar5);
						break;
				}
			}
		}
		iVar4++;
	}
}

void func_117()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_185(4112);
	bVar1 = func_362(Global_1935630, 2048);
	iVar2 = 0;
	while (iVar2 < Global_1898330)
	{
		if (func_127(Global_1898330[iVar2]))
		{
			switch (func_377(Global_1898330[iVar2]))
			{
				case 8:
					iVar3 = func_519(Global_1898330[iVar2]);
					if (func_141(iVar3))
					{
						if (func_142(Global_1347702[iVar3 /*49*/].f_13, 256) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iVar3 /*49*/].f_42, false))
						{
							func_527(iVar3);
							func_143(iVar3);
							func_528(Global_1898330[iVar2], bVar0, bVar1);
						}
					}
					break;
			}
		}
		iVar2++;
	}
}

bool func_118(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_190(iParam0, bParam1, bParam2, bParam3))
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

bool func_119()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_529())
	{
		return false;
	}
	if (!func_447(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[2 /*74*/].f_1, 1) && func_447(Global_1347702[120 /*49*/].f_15, 1)) && !func_447(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[37 /*74*/].f_1, 1) && !func_447(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[57 /*74*/].f_1, 1) && !func_447(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[26 /*74*/].f_1, 1) && !func_447(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[62 /*74*/].f_1, 1) && func_447(Global_1835011[63 /*74*/].f_1, 1)) && !func_447(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[75 /*74*/].f_1, 1) && !func_447(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[76 /*74*/].f_1, 1) && !func_447(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[40 /*74*/].f_1, 1) && func_447(Global_1835011[41 /*74*/].f_1, 1)) && !func_447(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[62 /*74*/].f_1, 1) && func_447(Global_1835011[63 /*74*/].f_1, 1)) && !func_447(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[65 /*74*/].f_1, 1) && func_447(Global_1835011[66 /*74*/].f_1, 1)) && !func_447(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0)
{
	return (Global_1935630 && (-1 - iParam0) & 40959) != 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar4 = func_112() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_190(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!func_530(Global_1898439, 1024))
	{
		func_531();
		func_532(&Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_127(Global_1898330[iVar2]) && func_246(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581.f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!func_134(iVar2, 1024))
			{
				func_130(iVar2, 0);
				switch (Global_1898346[iVar2 /*6*/].f_3)
				{
					case 1:
						if (!Global_1835011[iVar0 /*74*/].f_71)
						{
							iVar0 = Global_1898346[iVar2 /*6*/].f_4;
							if (func_131(iVar0))
							{
								if (!bParam1)
								{
									func_533(iVar0, 0);
								}
								func_534(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_535(iVar0);
								if (bVar3 && !func_536(&(Global_1835011[iVar0 /*74*/]), 32768))
								{
									func_537(&(Global_1835011[iVar0 /*74*/]), 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899.f_2 == Global_1835011[iVar0 /*74*/].f_21)
									{
										Global_1835011[iVar0 /*74*/].f_64 = func_538();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = Global_1898346[iVar2 /*6*/].f_4;
						if (iVar5 == 0 && func_112() == -1)
						{
							iVar6 = Global_1898346[iVar2 /*6*/].f_5;
							if (Global_1392626[iVar6 /*32*/].f_3 != func_539(0))
							{
								if (bVar3)
								{
									func_540(iVar6, 0, 0);
								}
								else
								{
									func_540(iVar6, 1, 0);
								}
								if (func_246(Global_1392626[iVar6 /*32*/].f_3))
								{
									func_129(Global_1392626[iVar6 /*32*/].f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!func_530(Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				func_233(16384);
			}
			else
			{
				func_231();
			}
			func_532(&Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = Global_40.f_450[iVar7];
			if (func_141(iVar1) && Global_1347702[iVar1 /*49*/] != 45)
			{
				if (func_142(Global_1347702[iVar1 /*49*/].f_13, 256))
				{
				}
				else if (Global_1347702[iVar1 /*49*/].f_15 != func_539(0))
				{
					if (func_541(0) == 1 || func_541(0) == 8)
					{
						func_542(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_543(iVar1, 0);
					}
					if (func_246(Global_1347702[iVar1 /*49*/].f_15))
					{
						func_129(Global_1347702[iVar1 /*49*/].f_15);
					}
				}
				func_544(&(Global_1347702[iVar1 /*49*/].f_13), 2);
			}
			iVar7++;
		}
	}
	func_148();
	if (bParam2)
	{
		func_545();
	}
	func_44();
	func_546();
	return 1;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (func_127(Global_1898330[iVar0]))
		{
			if (!func_127(Global_1898330[iVar0]))
			{
			}
			else
			{
				iVar2 = func_128(Global_1898330[iVar0]);
				if (iVar2 == 3 || iVar2 == 4)
				{
				}
				else if (iVar2 != 1 && iVar2 != 2)
				{
					func_129(Global_1898330[iVar0]);
				}
				else
				{
					switch (func_377(Global_1898330[iVar0]))
					{
						case 2:
							iVar1 = Global_1898346[iVar0 /*6*/].f_4;
							if (func_547(iVar1) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
							{
								if (iVar1 == 2)
								{
									if (func_112() == -1)
									{
										func_139(iVar0);
										func_548(iVar0);
									}
								}
							}
							break;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_123(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_549(Global_1888801[iParam0 /*35*/].f_13))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (Global_1395601.f_5[iVar1 /*28*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if ((iVar0 > -1 && iVar0 < 17) && Global_40.f_9384[iVar0 /*2*/] & 8192 != 0)
	{
		return true;
	}
	return false;
}

bool func_124(int iParam0)
{
	if (!func_550(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_551(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_552(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_552(iParam0), false) <= func_553();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_553();
	}
	return func_554();
}

int func_125()
{
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (func_273())
	{
		return 1;
	}
	if (func_154(43) && !func_154(44))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		return 4;
	}
	if (func_555())
	{
		return 4;
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return 4;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 4;
	}
	if (PED::IS_PED_LASSOED(Global_35) || !ENTITY::IS_ENTITY_DEAD(PED::_GET_LASSO_TARGET(Global_35)))
	{
		return 4;
	}
	if (PED::IS_PED_HOGTIED(Global_35) || PED::IS_PED_HOGTYING(Global_35))
	{
		return 4;
	}
	if (func_556())
	{
		return 4;
	}
	if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return 0;
}

bool func_126()
{
	if (func_112() != -1)
	{
		return false;
	}
	return func_557(1) > 0;
}

bool func_127(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_128(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_558(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_246(iParam0))
	{
		func_312(iParam0, 0, 2);
	}
	iVar0 = func_430(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { Var2 };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { Var2 };
	}
	Global_1898329 = (Global_1898329 - 1);
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_130(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_559(Global_1898330[iParam0]);
		func_560(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

bool func_131(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_132(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;

	if (!Global_1835011[iParam0 /*74*/].f_71)
	{
		if (iParam3 == -1)
		{
			if (func_561(iParam0))
			{
				return;
			}
			if (bParam2)
			{
				func_534(iParam0, iParam1, 0, 1, 0, 0, bParam2);
				return;
			}
			if (iParam0 == 14 || iParam0 == 34)
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
				{
					if ((Global_1898346[iParam1 /*6*/].f_1 & 4194304 == 0 && func_562(iParam0)) || (Global_1898346[iParam1 /*6*/].f_1 & 4194304 != 0 && !func_562(iParam0)))
					{
						func_534(iParam0, -1, 0, 1, 0, 0, 0);
					}
				}
			}
			if (bParam4)
			{
				return;
			}
		}
		if (Global_1898346[iParam1 /*6*/].f_1 & 2097152 != 0)
		{
			func_563(iParam1, 2097152);
			func_534(iParam0, -1, 0, 1, 0, 0, 0);
			return;
		}
	}
	else if (!bParam4 && !Global_16)
	{
		Global_1835011[iParam0 /*74*/].f_71 = 0;
		func_565(iParam0, BUILTIN::VDIST2(func_564(iParam0), Global_36), iParam1, 0, 0);
	}
	if (iParam3 == -1)
	{
		if (iParam0 == 14)
		{
			if (!func_370(62))
			{
				return;
			}
			if (Global_1898346[iParam1 /*6*/].f_1 & 1 == 0)
			{
				if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
				{
					Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, func_566(iParam0), 1f);
				}
				else if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72))
				{
					return;
				}
			}
		}
		if ((func_154(37) && !func_154(43)) && func_567(iParam0))
		{
			return;
		}
	}
	func_568(iParam0, iParam1, iParam3, bParam5);
	if (iParam3 == -1)
	{
		if (iParam0 == 2)
		{
			if (!func_569(&(Global_1835011[iParam0 /*74*/].f_29), 8192))
			{
				if (!func_512())
				{
					if ((func_114(0, 1, 1) || Global_1572864.f_8 != -1) || func_370(120))
					{
						func_570(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
					}
					else if ((((MAP::DOES_BLIP_EXIST(Global_1835011[2 /*74*/].f_27) && MAP::DOES_BLIP_EXIST(Global_1347702[120 /*49*/].f_37)) && !func_571()) && HUD::_0x7EC0D68233E391AC(5) != 2) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_220(MISC::VAR_STRING(2, "WNT_FIRST", Global_1835011[2 /*74*/].f_27, Global_1347702[120 /*49*/].f_37), 10000, 0, 0, 0, 1);
						func_570(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
					}
				}
			}
		}
	}
	if ((func_572(iParam0, iParam3) && !Global_1835011[iParam0 /*74*/].f_70) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		if (iParam0 == 14 && func_562(iParam0))
		{
			return;
		}
		fVar0 = BUILTIN::VDIST2(func_573(iParam0), Global_36);
		if (fVar0 <= (func_574(iParam0) * func_574(iParam0)) || Global_1898346[iParam1 /*6*/].f_1 & 1048576 != 0)
		{
			if (ITEMSET::IS_ITEMSET_VALID(Global_1835011[iParam0 /*74*/].f_60))
			{
				iVar1 = ITEMSET::GET_ITEMSET_SIZE(Global_1835011[iParam0 /*74*/].f_60);
				if (iVar1 > 0)
				{
					iVar3 = 0;
					while (iVar3 < iVar1)
					{
						iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1835011[iParam0 /*74*/].f_60);
						iVar6 = iVar5;
						if (ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::IS_ENTITY_A_PED(iVar6))
						{
							iVar2++;
							bVar7 = iVar6;
							if (ENTITY::IS_ENTITY_DEAD(bVar7))
							{
							}
							else
							{
								if (!PED::_0x5102307CE88798EB(bVar7))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(bVar7);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(bVar7))
								{
								}
								else
								{
									bVar4 = true;
								}
								else
								{
									iVar3++;
								}
								if (iVar2 > 0)
								{
									if (!bVar4 && Global_1898346[iParam1 /*6*/].f_1 & 1048576 == 0)
									{
										return;
									}
								}
								iVar3 = 0;
								while (iVar3 < iVar1)
								{
									iVar8 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1835011[iParam0 /*74*/].f_60);
									bVar9 = iVar8;
									if (((ENTITY::DOES_ENTITY_EXIST(bVar9) && ENTITY::IS_ENTITY_A_PED(bVar9)) && !ENTITY::IS_ENTITY_DEAD(bVar9)) && PED::_0x5102307CE88798EB(bVar9))
									{
										PED::RELEASE_PED_VISIBILITY_TRACKING(bVar9);
									}
									iVar3++;
								}
								Global_1835011[iParam0 /*74*/].f_70 = 1;
								func_563(iParam1, 1048576);
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
								MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
								func_565(iParam0, fVar0, iParam1, 0, 1);
								Jump @1220; //curOff = 1160
								if ((!func_575(596) && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && MAP::IS_BLIP_ON_MINIMAP(Global_1835011[iParam0 /*74*/].f_27))
								{
									func_576(596, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_133(int iParam0, bool bParam1, int iParam2)
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

bool func_134(int iParam0, int iParam1)
{
	return (func_577(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	iVar0 = uParam2;
	if (!func_578(iVar0))
	{
		return;
	}
	iVar1 = uParam3;
	if (func_579(iVar1))
	{
		return;
	}
	iVar2 = func_580(iVar1);
	if (iVar2 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar2 /*20*/].f_18 = 1;
	if (iVar0 == 3)
	{
		Global_1392915[iVar2 /*12*/].f_10 = Global_1900325.f_24;
	}
	iVar3 = func_423(iVar2);
	switch (iParam1)
	{
		case 1:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_581(iVar1, 0);
			return;
		case 2:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_581(iVar1, 1);
			return;
		case 3:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_425(iVar2);
			func_426(iVar2);
			return;
		case 4:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_582(iVar2);
			return;
		default:
			break;
	}
	if (Global_1894899.f_2 != iVar3 && !func_424(iParam0))
	{
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		func_583(iVar1, 1);
		return;
	}
	if (!func_428(iVar0))
	{
		if (func_581(iVar1, 1))
		{
		}
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		return;
	}
	if (func_149(iVar3, 4194304))
	{
		if (func_581(iVar1, 1))
		{
		}
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		return;
	}
	if (func_584(iVar1))
	{
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
	}
}

void func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	vector3 vVar6;

	iVar0 = func_585(Global_1898330[iParam0]);
	iVar1 = func_265(iVar0);
	if (!func_586(iVar1))
	{
		return;
	}
	vVar2 = { Global_1934182[iVar0 /*18*/].f_1 };
	if (func_587(vVar2))
	{
		return;
	}
	if (!func_588(iVar0))
	{
		return;
	}
	if (BUILTIN::VDIST2(vVar2, Global_36) > 2025f)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934182.f_73, false))
	{
		return;
	}
	if (!func_266(iVar1, 0))
	{
		return;
	}
	iVar5 = func_589(iVar1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
			if (BUILTIN::VDIST2(vVar6, vVar2) > 225f)
			{
				return;
			}
		}
		else
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_590(iParam0);
}

void func_137(int iParam0)
{
	int iVar0;
	char cVar1[16];

	iVar0 = func_585(Global_1898330[iParam0]);
	if (func_591(iVar0) || !func_592(iVar0))
	{
		return;
	}
	if (func_593(iVar0) && !Global_40.f_9146.f_94[iVar0])
	{
		if (func_594(iVar0) && !UILOG::_UILOG_IS_ENTRY_REGISTERED(4, func_595(iVar0)))
		{
			func_596(iVar0);
			StringCopy(&cVar1, "READNOTE_", 16);
			StringConCat(&cVar1, func_597(iVar0), 16);
			func_598(iVar0, &cVar1, &cVar1, -1082130432 /* Float: -1f */);
		}
		return;
	}
	func_599(iVar0, 1);
}

void func_138(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = func_585(Global_1898330[iParam0]);
	if (!func_325(iVar0) || !func_600(iVar0))
	{
		func_601(iParam0, iVar0);
		return;
	}
	fVar1 = BUILTIN::VDIST(Global_36, Global_1392240.f_1[iVar0 /*18*/]);
	if (fVar1 > 200f)
	{
		func_601(iParam0, iVar0);
		return;
	}
	if (!func_602(iVar0, 8))
	{
		if (func_603(iVar0))
		{
			return;
		}
	}
	if (func_602(iVar0, 4))
	{
		return;
	}
	func_604(iParam0);
}

void func_139(int iParam0)
{
}

void func_140(int iParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_585(Global_1898330[iParam0]);
	if (!func_234(iVar0))
	{
		return;
	}
	func_605(iVar0);
}

bool func_141(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_143(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!func_246(Global_1347702[iParam0 /*49*/].f_15))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 == 0)
	{
		func_608(iParam0, CAM::IS_SCREEN_FADED_OUT(), func_606(), func_607());
		vVar0 = { func_609(iParam0) };
		fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
		func_610(iParam0, func_609(iParam0), fVar3);
	}
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;

	if (func_432(&(Global_1391438.f_5), 8))
	{
		return;
	}
	if (iParam0 == Global_1391438.f_493.f_10)
	{
		return;
	}
	if (iParam0 == func_445(0, func_444(func_439())))
	{
		return;
	}
	if (!func_611(iParam0, &iVar0))
	{
		func_612(iParam0);
		return;
	}
	uVar2 = Global_1391438.f_7[iVar0 /*99*/].f_31;
	if (func_613(&(Global_1391438.f_7[iVar0 /*99*/]), &bVar1, 1, 1, 1, 0))
	{
		func_563(iParam1, 16);
		func_563(iParam1, 32);
		func_563(iParam1, 64);
		func_614(&uVar2, 256, 0);
		if (!bVar1)
		{
			func_612(iParam0);
		}
		if (!bVar1 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar0], false))
		{
			func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
		}
		return;
	}
	sVar3 = func_615(&(Global_1391438.f_7[iVar0 /*99*/].f_42));
	sVar4 = func_615(&(Global_1391438.f_7[iVar0 /*99*/].f_58));
	sVar5 = func_615(&(Global_1391438.f_7[iVar0 /*99*/].f_50));
	if (!func_134(iParam1, 64))
	{
		if (!func_134(iParam1, 16))
		{
			if (!func_616(&uVar2, 256))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar3);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar5);
				}
				func_614(&uVar2, 256, 1);
			}
			func_617(iParam1, 16);
		}
		else if (!func_134(iParam1, 32))
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED(sVar4))
			{
				func_617(iParam1, 32);
			}
		}
	}
}

bool func_145(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

void func_146(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_127(iParam0))
	{
		return;
	}
	switch (func_377(iParam0))
	{
		case 1:
			iVar0 = func_519(iParam0);
			if (func_618(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_572(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_572(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
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
				if (!func_619(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (func_536(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_519(iParam0);
			if (func_620(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_621(iVar1))
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
				iVar2 = func_621(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_622(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_147(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_114(0, 0, 1))
	{
		return false;
	}
	if (func_185(62))
	{
		return false;
	}
	iVar0 = func_623(Global_40.f_4283);
	if (!func_47(iVar0))
	{
		return false;
	}
	if (iVar0 == 58)
	{
		return false;
	}
	if (!bParam2)
	{
		return false;
	}
	if (bParam0 || Global_1357549.f_1709 <= 1)
	{
		func_148();
	}
	else
	{
		Global_1357549.f_1708 = 1;
		if (!MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
		{
			Global_1357549.f_1711 = MAP::BLIP_ADD_FOR_COORDS(164094739, Global_1888801[iVar0 /*35*/].f_15);
			MAP::SET_BLIP_SPRITE(Global_1357549.f_1711, GET_HASH_KEY("BLIP_CAMP"), true);
			bParam1 = false;
			MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, -1986290853);
			if (func_549(Global_1888801[iVar0 /*35*/].f_13))
			{
				func_624(Global_1888801[iVar0 /*35*/].f_13, -1186550032);
				func_160(Global_1888801[iVar0 /*35*/].f_13, 1720107185);
			}
		}
		if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
		{
			if (bParam1)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, 580546400);
				Global_1357549.f_1712 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1357549.f_1712) >= 5000 && Global_1357549.f_1712 != 0)
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 580546400);
				Global_1357549.f_1712 = 0;
			}
			if (Global_1357549.f_1709 >= 5 && Global_1357549.f_1710 != 5)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
				Global_1357549.f_1710 = 5;
			}
			else if (Global_1357549.f_1709 == 4 && Global_1357549.f_1710 != 4)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
			}
			else if (Global_1357549.f_1709 == 3 && Global_1357549.f_1710 != 3)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
			}
			else if (Global_1357549.f_1709 == 2 && Global_1357549.f_1710 != 2)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -404791027);
			}
			else if (Global_1357549.f_1709 == 1 && Global_1357549.f_1710 != 1)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, -404791027);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1559275666);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, 198191338);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -41513897);
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, -1320029197);
			}
			Global_1357549.f_1710 = Global_1357549.f_1709;
			if (!func_575(570))
			{
				func_625(570, Global_1357549.f_1711, 0);
			}
		}
	}
	return true;
}

void func_148()
{
	int iVar0;

	if (func_112() != -1)
	{
		return;
	}
	Global_1357549.f_1708 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1711));
		iVar0 = func_623(Global_40.f_4283);
		if (func_47(iVar0) && func_549(Global_1888801[iVar0 /*35*/].f_13))
		{
			func_160(Global_1888801[iVar0 /*35*/].f_13, 1560611276);
		}
		Global_1357549.f_1710 = 0;
	}
}

bool func_149(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_150()
{
	if (!func_154(39))
	{
		return false;
	}
	if (func_154(43))
	{
		return false;
	}
	return true;
}

bool func_151(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_246(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_152(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	return func_446(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_153(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_446(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_154(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_447(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_156(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

void func_157(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0 && func_628(iVar0) == iParam1)
		{
			func_629(iVar0, -1);
			func_630(iVar0, 0);
			func_631(iVar0, 0);
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

int func_158(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_587(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_632(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_628(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_628(iVar0) == iParam1 && func_627(iVar0) == iParam0) && iVar2 == func_633(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_629(iVar1, iParam0);
		func_630(iVar1, iParam1);
		func_631(iVar1, iVar2);
		func_634(iVar1, iParam5);
		func_635(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(Global_36308[iVar1], iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_159(int iParam0, int iParam1, vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_632(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36308)
	{
		if ((func_627(iVar1) == iParam0 && func_628(iVar1) == iParam1) && func_633(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar1]))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[iVar1], sParam5);
			}
			return;
		}
		iVar1++;
	}
}

void func_160(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::_0xBD62D98799A3DAF0(Global_36308[iParam0], iParam1);
		}
	}
}

void func_161(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

void func_162(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], 580546400);
			}
			return;
		}
		iVar0++;
	}
}

bool func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0 && func_628(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_164(int iParam0, int iParam1)
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

bool func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0 && func_628(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::BLIP_REMOVE_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_166(bool bParam0)
{
	func_636(bParam0);
	func_637(bParam0);
	func_638(bParam0);
	func_639(bParam0);
	func_640(bParam0);
	func_641(bParam0);
	func_642(bParam0);
	func_643(bParam0);
}

void func_167(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_644())
	{
		if (func_559(iVar0) != 0)
		{
			if (!func_429(iVar0))
			{
				func_312(iVar0, bParam0, 2);
			}
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		Call_Loc((iParam0[iVar0 /*7*/])->f_2);
		iVar0++;
	}
}

void func_169()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	func_645("player_newWeaponType", "player_newWeaponTime");
	func_645("player_newPistolWeaponType", "player_newPistolWeaponTime");
	func_645("player_newRevolverWeaponType", "player_newRevolverWeaponTime");
	func_645("player_newRifleWeaponType", "player_newRifleWeaponTime");
	func_645("player_newShotgunWeaponType", "player_newShotgunWeaponTime");
}

void func_170()
{
	int iVar0;
	int iVar1;

	iVar0 = func_646(Global_36);
	if (iVar0 != -1)
	{
		iVar1 = Global_1888801[iVar0 /*35*/].f_4;
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			PERSISTENCE::_0xEFB5F34CC0953B27(iVar1);
		}
	}
}

void func_171(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, int iParam18)
{
	struct<16> Var0;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1897952.f_40)
	{
		return;
	}
	if ((Global_1879534 || Global_1879534.f_1) || !func_38(64))
	{
		func_172();
		return;
	}
	if (func_529() && CAM::IS_SCREEN_FADED_IN())
	{
		if (!Global_1935630.f_4)
		{
			if ((!func_114(0, 0, 1) && !func_362(Global_1935630, 2048)) && !func_438())
			{
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_38))
				{
					Global_1897952.f_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam9, vParam3, vParam15, "Intro Volume");
				}
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_39))
				{
					Global_1897952.f_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam12, vParam6, "Intro Warn Volume");
				}
				if (!func_647(Global_1897952.f_39, Global_36))
				{
					if (!func_647(Global_1897952.f_38, Global_36))
					{
						Global_1897952.f_40 = 1;
						StringCopy(&(Var0.f_10), "Grizzlies_Abandon", 32);
						Var0.f_14 = 512;
						Var0.f_15 = 1;
						Var0 = iParam18;
						func_482(Var0, 0);
					}
				}
			}
			else
			{
				func_172();
			}
		}
		else
		{
			func_172();
		}
	}
	else
	{
		func_172();
	}
}

void func_172()
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_38))
	{
		VOLUME::_DELETE_VOLUME(Global_1897952.f_38);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_39))
	{
		VOLUME::_DELETE_VOLUME(Global_1897952.f_39);
	}
	Global_1897952.f_40 = 0;
}

void func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::GET_PED_IS_GRAPPLED(Global_35))
	{
		iVar1 = PED::_0xD0B7AEB56229D317(Global_35);
		if (func_112() == -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == GET_HASH_KEY("A_C_BEAR_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == GET_HASH_KEY("A_C_BEARBLACK_01"))
				{
					Global_1347477.f_202 = iVar1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iVar1) && PED::IS_PED_HUMAN(iVar1))
		{
			if (!func_575(145))
			{
				func_576(145, 0);
			}
			else if (!DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_tutorial_played"))
			{
				if (!DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_start_time"))
				{
					DECORATOR::DECOR_SET_INT(Global_35, "grapple_start_time", iVar0);
					iVar2 = iVar0;
				}
				else
				{
					iVar2 = DECORATOR::DECOR_GET_INT(Global_35, "grapple_start_time");
				}
				if ((iVar0 - iVar2) > 5000)
				{
					func_576(145, 1);
					DECORATOR::DECOR_SET_BOOL(Global_35, "grapple_tutorial_played", true);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_start_time"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "grapple_start_time");
		}
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_tutorial_played"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "grapple_tutorial_played");
		}
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		iVar3 = PED::_GET_LASSO_TARGET(Global_35);
		if (iVar3 != 0)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_HUMAN(iVar3))
			{
				func_576(142, 0);
			}
		}
		if (PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false), GET_HASH_KEY("RCBOAT")))
			{
				func_576(113, 0);
			}
		}
		if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
		{
			func_576(196, 0);
		}
		else
		{
			func_648(196);
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!func_575(598))
			{
				if ((HUD::IS_RADAR_PREFERENCE_SWITCHED_ON() && !HUD::IS_RADAR_HIDDEN()) && !UITUTORIAL::_UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN())
				{
					func_576(598, 0);
				}
			}
			if (!func_575(599))
			{
				if (!HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
				{
					func_576(599, 0);
				}
			}
		}
		if (!func_575(607))
		{
			if (PLAYER::_0xAAED694CE814817F(PLAYER::PLAYER_ID()))
			{
				if (!func_649() && func_154(4))
				{
					if (MISC::GET_GAME_TIMER() >= Global_36614)
					{
						Global_40.f_11955++;
						if (!func_650() && !func_651())
						{
							if (Global_40.f_11955 >= 2)
							{
								func_576(607, 0);
							}
						}
						Global_36614 = (MISC::GET_GAME_TIMER() + 60000);
					}
				}
			}
		}
		iVar4 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4) && func_652(ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar4);
				if (WEAPON::GET_WEAPON_DEGRADATION(iVar5) > 0.75f && !DECORATOR::DECOR_EXIST_ON(iVar5, "worn_tutorial"))
				{
					func_576(150, 1);
					DECORATOR::DECOR_SET_BOOL(iVar5, "worn_tutorial", true);
				}
				if (!func_575(481))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar6, true, 0, false);
						if (WEAPON::IS_WEAPON_A_GUN(iVar6) && !WEAPON::_IS_WEAPON_SNIPER(iVar6))
						{
							if ((WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, GET_HASH_KEY("COMPONENT_RIFLE_SCOPE02")) || WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, GET_HASH_KEY("COMPONENT_RIFLE_SCOPE03"))) || WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, GET_HASH_KEY("COMPONENT_RIFLE_SCOPE04")))
							{
								func_576(481, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_174()
{
	if (Global_40.f_7860)
	{
		return;
	}
	func_653(3, 25, 0, 0);
	Global_40.f_7860 = 1;
}

void func_175()
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (iVar0 != Global_1935630.f_5)
			{
				if (func_654(&(Global_1935630.f_6), INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0)))
				{
					Global_1935630.f_5 = iVar0;
				}
			}
			if (func_655(iVar0) || func_656(iVar0))
			{
				Global_1935630.f_11 = 0;
			}
			else
			{
				Global_1935630.f_11 = 1;
			}
		}
		else
		{
			Global_1935630.f_11 = 0;
			if (INTERIOR::IS_VALID_INTERIOR(Global_1935630.f_5))
			{
				Global_1935630.f_5 = 0;
			}
		}
	}
	if ((Global_1430242 + Global_1430242.f_2) >= 3 && func_657())
	{
		func_658(1);
	}
	else
	{
		func_658(0);
	}
}

void func_176()
{
	if (func_112() != -1)
	{
		return;
	}
}

void func_177()
{
	int iVar0;

	if (func_112() == 0)
	{
		return;
	}
	if (Global_1935630.f_53 < 10)
	{
		Global_1935630.f_53++;
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_659(Global_40.f_7731[iVar0 /*5*/]);
		iVar0++;
	}
	Global_1935630.f_53 = 0;
	func_660("chinLong");
	func_660("chinShort");
	func_660("chopsLong");
	func_660("chopsShort");
	func_660("stacheLong");
	func_660("stacheShort");
	func_660("hairLong");
	func_660("hairShort");
}

void func_178()
{
	if (func_398())
	{
		return;
	}
	if (Global_1572887.f_8)
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	switch (func_46())
	{
		case 3:
		case 61:
		case 82:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_RURAL"), 1500);
			break;
		case 5:
		case 38:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_URBAN"), 1500);
			break;
		case 96:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_CATFISH_JACKSON"), 1500);
			break;
	}
	switch (func_479())
	{
		case 9:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_HEARTLAND"), 1500);
			break;
		case 11:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_SCARLETT_MEADOWS"), 1500);
			break;
		case 1:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_BIG_VALLEY"), 1500);
			break;
		case 15:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_CHOLLA_SPRINGS"), 1500);
			break;
		case 3:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_CUMBERLAND_FOREST"), 1500);
			break;
		case 0:
			MISC::_0xDE2C3B74D2B3705C(-348060143, 1500);
			break;
		case 4:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_GREAT_PLAINS"), 1500);
			break;
		case 6:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_GRIZZLIES_EAST"), 1500);
			break;
		case 7:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_GRIZZLIES_WEST"), 1500);
			break;
		case 10:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_ROANOKE_RIDGE"), 1500);
			break;
		case 12:
			MISC::_0xDE2C3B74D2B3705C(GET_HASH_KEY("ARS_TALL_TREES"), 1500);
			break;
	}
}

void func_179()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (func_112() != -1)
	{
		return;
	}
	if (!func_661(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 6))
	{
		if (Global_17 && !func_662())
		{
			if (func_663(24) && !Global_43891)
			{
				if (!PED::_IS_METAPED_USING_COMPONENT(Global_35, GET_HASH_KEY("HOLSTERS_LEFT")))
				{
					func_664(17, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 2, 0, 0);
				}
				if (PED::_IS_METAPED_USING_COMPONENT(Global_35, GET_HASH_KEY("HOLSTERS_LEFT")))
				{
					Global_17 = 0;
					WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, true);
				}
			}
			else
			{
				Global_17 = 0;
			}
		}
	}
	if (Global_43891)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || !PED::IS_PED_READY_TO_RENDER(Global_35))
	{
		return;
	}
	if (func_665(524288))
	{
		if (Global_1347698.f_1 != 0)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, -811108073, 0, false);
			Global_1347698.f_1 = 0;
			bVar2 = true;
		}
		if (Global_1347698.f_2 != 0)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, GET_HASH_KEY("AMMO_RIFLES"), 0, false);
			Global_1347698.f_2 = 0;
			bVar2 = true;
		}
		if (Global_1347698 != 0)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, GET_HASH_KEY("AMMO_PISTOLS"), 0, false);
			Global_1347698 = 0;
			bVar2 = true;
		}
		if (bVar2)
		{
			PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
		}
		return;
	}
	iVar6 = 25;
	if (Global_1946804.f_1497.f_1[iVar6 /*3*/] != Global_1946804.f_57[iVar6 /*11*/] && !func_661(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1))
	{
		if ((func_666(Global_1935630.f_44) && WEAPON::_IS_WEAPON_TWO_HANDED(Global_1935630.f_44)) || WEAPON::IS_WEAPON_SHOTGUN(Global_1935630.f_44))
		{
			iVar7 = Global_1935630.f_44;
		}
		else
		{
			iVar7 = func_667(Global_35, 9, 0, 0);
			if (!func_666(iVar7))
			{
				iVar7 = func_667(Global_35, 1, 0, 0);
				if ((func_666(iVar7) && WEAPON::_IS_WEAPON_ONE_HANDED(iVar7)) && !WEAPON::IS_WEAPON_SHOTGUN(iVar7))
				{
					iVar7 = 0;
				}
			}
		}
		iVar1 = func_668(iVar7, 5, 0);
		if (iVar1 != 0)
		{
			bVar5 = true;
			iVar0 = Global_1347698.f_1;
			if (WEAPON::IS_WEAPON_SHOTGUN(iVar7))
			{
				bVar5 = false;
				iVar0 = Global_1347698.f_2;
			}
			if (((iVar1 != iVar0 || func_665(262144)) || (bVar5 && Global_1347698.f_1 == 0)) || (!bVar5 && Global_1347698.f_2 == 0))
			{
				Global_1935630.f_49 = 1;
				bVar2 = true;
				if (bVar5)
				{
					PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, -811108073, 0, false);
					Global_1347698.f_2 = 0;
					Global_1347698.f_1 = iVar1;
				}
				else
				{
					PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, GET_HASH_KEY("AMMO_RIFLES"), 0, false);
					Global_1347698.f_1 = 0;
					Global_1347698.f_2 = iVar1;
				}
				PED::_APPLY_SHOP_ITEM_TO_PED(Global_35, func_669(bVar5), false, false, false);
				if (iVar1 != GET_HASH_KEY("BASE"))
				{
					PED::_0x66B957AAC2EAAEAB(Global_35, func_669(bVar5), iVar1, 0, false, 1);
				}
			}
		}
	}
	else if (Global_1935630.f_49)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, -811108073, 0, false);
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, GET_HASH_KEY("AMMO_RIFLES"), 0, false);
		bVar2 = true;
		Global_1935630.f_49 = 0;
		Global_1347698.f_1 = 0;
		Global_1347698.f_2 = 0;
	}
	iVar6 = 26;
	bVar3 = Global_40.f_7729 == 7;
	bVar4 = (Global_1946804.f_1497.f_1[iVar6 /*3*/] != Global_1946804.f_57[iVar6 /*11*/] && !bVar3);
	if ((bVar4 || bVar3) && !func_661(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_2"), 1))
	{
		if ((func_666(Global_1935630.f_44) && WEAPON::_IS_WEAPON_ONE_HANDED(Global_1935630.f_44)) && !WEAPON::IS_WEAPON_SHOTGUN(Global_1935630.f_44))
		{
			iVar8 = Global_1935630.f_44;
		}
		else
		{
			iVar8 = func_667(Global_35, 2, 0, 0);
		}
		iVar1 = func_668(iVar8, 5, bVar3);
		if (iVar1 != 0)
		{
			if (Global_1347698 != iVar1 || func_665(262144))
			{
				Global_1347698 = iVar1;
				Global_1935630.f_48 = 1;
				bVar2 = true;
				PED::_APPLY_SHOP_ITEM_TO_PED(Global_35, 600894672, false, false, false);
				if (iVar1 != GET_HASH_KEY("BASE"))
				{
					PED::_0x66B957AAC2EAAEAB(Global_35, 600894672, iVar1, 0, false, 1);
				}
			}
		}
	}
	else if (Global_1935630.f_48)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, GET_HASH_KEY("AMMO_PISTOLS"), 0, false);
		bVar2 = true;
		Global_1935630.f_48 = 0;
		Global_1347698 = 0;
	}
	if (bVar2)
	{
		func_670(262144);
		PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_112() != -1)
	{
		return;
	}
	iVar0 = PED::_GET_PED_LAST_DROPPED_HAT(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PED::_0x7E02E4218D916B94(iVar0, 0, 0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) > 250f)
	{
		iVar2 = 10;
		if ((Global_1946804.f_1497.f_1[iVar2 /*3*/] == Global_1946804.f_57[iVar2 /*11*/] && !func_671(Global_35, GET_HASH_KEY("HATS"), 0)) && !Global_36619)
		{
			if (func_672(iVar1))
			{
				func_576(69, 0);
			}
			else
			{
				func_576(70, 0);
			}
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
		OBJECT::DELETE_OBJECT(&iVar0);
	}
}

void func_181()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_673(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_43894[iVar0], true, 0))
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
			if (iVar1 != -1)
			{
				if (Global_43894.f_12 == -1)
				{
					Global_43894.f_12 = iVar1;
				}
			}
			else if (Global_43894.f_12 != -1)
			{
				Global_43894.f_12 = -1;
			}
		}
	}
}

void func_182()
{
	int iVar0;
	int iVar1;

	if (Global_40.f_11095.f_38 < 5)
	{
		iVar0 = Global_40.f_11095.f_38 + 1 * 10000;
		iVar1 = func_674(func_479());
		if (func_675(iVar1) && iVar1 != 5)
		{
			if (func_676(iVar1) >= iVar0)
			{
				func_677(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				Global_40.f_11095.f_38++;
			}
		}
	}
}

void func_183()
{
	if ((ENTITY::IS_ENTITY_IN_AREA(Global_35, -6726.518f, -3810.308f, -11.33721f, -6684.747f, -3794.389f, -6.22488f, false, true, 0) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_678(Global_35, 0, 0);
	}
}

bool func_184()
{
	bool bVar0;
	var uVar1;
	struct<16> Var2;

	if (func_679())
	{
		return false;
	}
	if (!func_389(&bVar0, &uVar1, 0))
	{
		return !bVar0;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(0))
	{
		return false;
	}
	if (Global_1935630.f_56)
	{
		return false;
	}
	if (!func_680())
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) > 0)
		{
			return false;
		}
	}
	if ((Global_1935630.f_54 + 90000) < MISC::GET_GAME_TIMER() || func_680())
	{
		Global_1935630.f_56 = 1;
		StringCopy(&(Var2.f_10), "singing", 32);
		Var2.f_14 = 512;
		Var2.f_15 = 0;
		func_482(Var2, 0);
	}
	return true;
}

bool func_185(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_186()
{
	bool bVar0;

	if (func_112() != -1 || !func_663(15))
	{
		return;
	}
	if (func_681(Global_1347343.f_11, 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (!Global_1347477.f_6)
	{
		switch (Global_1347477.f_7)
		{
			case 0:
				func_682();
				break;
			case 1:
				if (!func_683(8388608))
				{
					bVar0 = func_684(Global_35);
				}
				if ((((PED::GET_PED_CONFIG_FLAG(Global_35, 227, true) || PED::IS_PED_SITTING(Global_35)) || func_685(Global_35)) || bVar0) || func_686())
				{
					if (bVar0)
					{
						func_687(14, 1);
					}
					else
					{
						if (!func_688() && !func_689())
						{
							if (Global_1347477.f_122 > func_690(0))
							{
								func_691(1f, 0, 0, 1);
							}
						}
						if (Global_1347477.f_123 > func_690(2))
						{
							func_692(1f, 0, 0, 1);
						}
						if (Global_1347477.f_124 > func_690(1))
						{
							func_693(1f, 0, 0, 1);
						}
						if (!Global_1347477.f_119)
						{
							TELEMETRY::_0x7E002A36AEFCFB55();
						}
					}
					Global_1347477.f_119 = 1;
				}
				else
				{
					Global_1347477.f_119 = 0;
				}
				break;
			case 2:
				if (func_694(18))
				{
					func_696(0, func_695(), 0);
					func_697();
				}
				break;
			case 3:
				if (func_694(19))
				{
					func_696(1, func_698(), 0);
				}
				break;
			case 4:
				if (func_694(20))
				{
					func_696(2, func_699(), 0);
				}
				break;
			case 5:
				if (!Global_16)
				{
					func_701(13, func_700());
					func_702(0);
					func_703();
					func_704();
				}
				break;
			case 6:
				if (!Global_16)
				{
					Global_40.f_11095.f_11[16] = func_705(ATTRIBUTE::GET_ATTRIBUTE_POINTS(Global_35, 16));
					func_706();
				}
				break;
		}
		Global_1347477.f_7++;
		if (Global_1347477.f_7 >= 7)
		{
			Global_1347477.f_7 = 0;
		}
	}
}

void func_187()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (func_112() != -1)
	{
		return;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 200f, 0) > 0)
	{
		Global_1347477.f_135 = 1;
	}
	else if (Global_1347477.f_135)
	{
		if (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)) < (50f * 0.5f))
		{
			func_707(24);
		}
		Global_1347477.f_135 = 0;
	}
	if (PED::IS_PED_JUMPING(Global_35))
	{
		if (!Global_1347477.f_132)
		{
			Global_1347477.f_131++;
			if ((Global_1347477.f_131 % 50) == 0)
			{
				func_707(1);
			}
			Global_1347477.f_132 = 1;
		}
	}
	else
	{
		Global_1347477.f_132 = 0;
	}
	fVar0 = func_708(GET_HASH_KEY("DIST"), GET_HASH_KEY("SPRINTING"));
	fVar1 = func_708(GET_HASH_KEY("TIME"), GET_HASH_KEY("SWIMMING_NOT_DROWNING"));
	fVar2 = func_708(GET_HASH_KEY("DIST_DRIVING_TYPE"), GET_HASH_KEY("ROWINGBOAT"));
	fVar3 = func_708(GET_HASH_KEY("DIST_DRIVING_TYPE"), GET_HASH_KEY("CANOE"));
	if (fVar0 > (Global_1347477.f_127 + 100f))
	{
		func_707(27);
		Global_1347477.f_127 = fVar0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_BOAT(Global_35))
	{
		if (fVar1 > (Global_1347477.f_128 + 15000f))
		{
			func_707(28);
			Global_1347477.f_128 = fVar1;
		}
	}
	else
	{
		Global_1347477.f_128 = fVar1;
	}
	if (fVar2 + fVar3) > (Global_1347477.f_129 + 1000f)
	{
		func_707(2);
		Global_1347477.f_129 = (fVar2 + fVar3);
	}
	PED::_0x6B67320E0D57856A(Global_35, &iVar4, 2, 0);
	if (ENTITY::IS_ENTITY_A_PED(iVar4))
	{
		if (func_709(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4)))
		{
			func_710();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && PED::GET_SEAT_PED_IS_USING(Global_35) == -1)
	{
		if (!Global_36604)
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false, false) && VEHICLE::_0xB9D5BDDA88E1BB66(ENTITY::GET_ENTITY_MODEL(iVar6))) && !DECORATOR::DECOR_EXIST_ON(iVar6, "wagon_block_honor")) && (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6) || func_711(iVar6)))
			{
				VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar6, &iVar7, &iVar8);
				if (iVar7 == 0 || iVar8 > 0)
				{
					func_677(0, GET_HASH_KEY("HONOR_EVENT_STEAL_WAGON"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					iVar9 = 0;
					while (iVar9 < 6)
					{
						iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar6, iVar9);
						if (!PED::IS_PED_INJURED(iVar10))
						{
							DECORATOR::DECOR_SET_BOOL(iVar10, "bHorseHasBeenStolen", true);
						}
						iVar9++;
					}
				}
			}
			DECORATOR::DECOR_SET_BOOL(iVar6, "wagon_block_honor", true);
			Global_36604 = 1;
		}
	}
	else if (Global_36604)
	{
		Global_36604 = 0;
	}
}

void func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1911859[iVar0 /*3*/].f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Global_1911859[iVar0 /*3*/]) >= Global_1911859[iVar0 /*3*/].f_1)
			{
				Global_1911859[iVar0 /*3*/].f_2 = 0;
				switch (iVar0)
				{
					case 0:
						func_576(581, 1);
						PED::_SET_PED_SCENT(Global_35, 1f);
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_189()
{
}

bool func_190(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_712(bParam1, bParam2, bParam3);
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

bool func_191()
{
	if (func_112() == -1)
	{
		if (func_513() || func_713())
		{
			return true;
		}
	}
	else if (func_714(1, 255))
	{
		return true;
	}
	return false;
}

void func_192(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_46();
	iVar1 = Global_1934266.f_57;
	iVar2 = 5;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1++;
		if (iVar1 >= 130)
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
		}
		else
		{
			if (!bParam0)
			{
				if (func_715(iVar1))
				{
					if (func_717(func_716(iVar1)) >= 4320 || func_720(func_719(func_718(iVar1, 1, 1))) <= 0)
					{
						func_721(iVar1, 0);
					}
				}
				if (func_722(iVar1))
				{
					if (func_723(iVar1))
					{
						if (!func_724(iVar1))
						{
							if (func_725(iVar1))
							{
								func_726(iVar1, 0, 350);
							}
						}
					}
					else if (func_724(iVar1))
					{
						func_726(iVar1, 1, 350);
					}
				}
			}
			Global_1934266.f_57 = iVar1;
		}
		iVar3++;
	}
}

void func_193(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return;
	}
	iVar0 = func_479();
	if ((((((!func_190(PLAYER::PLAYER_ID(), 0, 0, 1) || iVar0 == 8) && func_727()) && func_728()) && !func_657()) && !PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID())) && !func_114(0, 0, 1))
	{
		if (iVar0 != 8)
		{
			if (!Global_1934266)
			{
				if ((func_729(2, 0) && func_729(3, 0)) || (func_729(4, 0) && (iVar0 == 12 || iVar0 == 4)))
				{
					if (iVar0 == 12 || (iVar0 == 4 && !func_663(45)))
					{
						if ((!func_153(13) && !Global_1934266.f_56) && !PED::_0xDC88D06719070C39(Global_35))
						{
							func_730(4, func_46());
						}
					}
					else if (Global_1934266.f_1 + Global_1934266.f_2) < MISC::GET_GAME_TIMER()
					{
						fVar1 = 200f;
						iVar2 = 5;
						iVar3 = ITEMSET::CREATE_ITEMSET(true);
						LAW::_0x0C392DB374655176(Global_36, fVar1, iVar3);
						iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
						ITEMSET::DESTROY_ITEMSET(iVar3);
						if (iVar4 > iVar2)
						{
							return;
						}
						if ((MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f && func_731() >= 4) && func_732())
						{
							func_730(3, func_46());
						}
						else
						{
							func_730(2, func_46());
						}
					}
				}
			}
		}
		else if (iVar0 == 8)
		{
			if (((func_729(9, 0) && !func_413(1, 0)) && !func_413(8, 0)) && func_46() != 59)
			{
				func_730(9, func_46());
			}
		}
	}
	else
	{
		Global_1934266.f_1 = MISC::GET_GAME_TIMER();
		if (iVar0 == 12 || iVar0 == 4)
		{
			Global_1934266.f_2 = 1000;
		}
		else
		{
			Global_1934266.f_2 = 15000;
		}
	}
}

void func_194()
{
}

void func_195(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	iVar1 = func_46();
	bVar2 = func_722(iVar1);
	if (func_47(iVar1) && (bVar2 || func_724(iVar1)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!func_149(iVar1, 33554432))
		{
			if (!func_724(iVar1) && bVar2)
			{
				if ((!bParam0 && !PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID())) && !func_413(2049, 0))
				{
					if (func_733(iVar1))
					{
						func_726(iVar1, 1, 350);
					}
				}
			}
		}
		else if (!func_724(iVar1) || !bVar2)
		{
			if (func_725(iVar1))
			{
				func_726(iVar1, 0, 350);
			}
		}
	}
}

void func_196()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;

	if (!func_530(Global_1934266.f_154, 2))
	{
		if (func_154(13))
		{
			func_532(&(Global_1934266.f_154), 2);
			return;
		}
		if (MISC::GET_GAME_TIMER() >= Global_1934266.f_155)
		{
			if (func_734(13))
			{
				func_532(&(Global_1934266.f_154), 1);
			}
			else
			{
				func_735(&(Global_1934266.f_154), 1);
			}
			Global_1934266.f_155 = MISC::GET_GAME_TIMER() + 10000;
		}
		bVar0 = false;
		sVar1 = "pre_sean1_law";
		if (func_530(Global_1934266.f_154, 1))
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar1)) <= 0)
			{
				iVar2 = func_541(0);
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1934266.f_153))
				{
					Global_1934266.f_153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1409f, -958f, 68f, 0f, 0f, 29f, 1000f, 500f, 100f, "pre_sean1_law");
				}
				bVar3 = (func_736(Global_35, Global_1934266.f_153, 1, 0) || func_479() == 4);
				if (!bVar3)
				{
					func_532(&(Global_1934266.f_154), 8);
				}
				if (((bVar3 && func_530(Global_1934266.f_154, 8)) && iVar2 != 1) && iVar2 != 8)
				{
					if (!func_530(Global_1934266.f_154, 4))
					{
						SCRIPTS::REQUEST_SCRIPT(sVar1);
						func_532(&(Global_1934266.f_154), 4);
					}
					if (SCRIPTS::HAS_SCRIPT_LOADED(sVar1))
					{
						func_735(&(Global_1934266.f_154), 8);
						SCRIPTS::START_NEW_SCRIPT(sVar1, 512);
						VOLUME::_DELETE_VOLUME(Global_1934266.f_153);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (func_530(Global_1934266.f_154, 4))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar1);
				func_735(&(Global_1934266.f_154), 4);
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() >= Global_1934266.f_155)
	{
		if (!func_154(13))
		{
			func_735(&(Global_1934266.f_154), 2);
		}
		Global_1934266.f_155 = MISC::GET_GAME_TIMER() + 10000;
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_479() != 8)
	{
		if (!func_575(546))
		{
			if (!func_724(func_46()) && func_723(func_46()))
			{
				func_576(546, 0);
			}
		}
		else if (!func_575(547) && func_723(func_46()))
		{
			func_576(547, 0);
		}
	}
	if (!bParam0)
	{
		if (!func_737(1))
		{
			return;
		}
		if (func_112() == -1)
		{
			if (!func_663(28))
			{
				func_738(28);
			}
		}
		if (!func_575(282))
		{
			if (!func_651() && !func_650())
			{
				iVar0 = (MISC::GET_GAME_TIMER() - LAW::_0x7FC667F6DDFBCDCC(PLAYER::PLAYER_ID()));
				if (iVar0 > 2000 && iVar0 < 10000)
				{
					func_576(282, 0);
				}
			}
		}
		else if (!func_575(283))
		{
			if (func_740(func_739(), 4))
			{
				func_576(283, 0);
			}
		}
		else if (!func_575(281))
		{
			func_576(281, 0);
		}
		return;
	}
	else
	{
		if (!Global_1935630.f_13)
		{
			if (!func_575(263))
			{
				if (((Global_1935630.f_17 > 0 && !Global_1935630.f_16) && !func_651()) && !func_650())
				{
					if (func_479() == 8)
					{
						func_576(265, 0);
					}
					else
					{
						func_576(263, 0);
					}
					return;
				}
			}
			else if (!func_575(264))
			{
				if (LAW::_0x7FC667F6DDFBCDCC(PLAYER::PLAYER_ID()) > 30000)
				{
					if (func_479() == 8)
					{
						func_576(266, 0);
					}
					else
					{
						func_576(264, 0);
					}
				}
			}
		}
		if (!func_575(269))
		{
			if (Global_1935630.f_20 == 0)
			{
				if (!func_651() && !func_650())
				{
					LAW::_0x6ABC50979655BEE7(PLAYER::PLAYER_ID(), &iVar1, 1);
					if (iVar1 == GET_HASH_KEY("CRIME_LOITERING"))
					{
						func_576(269, 0);
					}
				}
			}
		}
		if (Global_1935630.f_15 == 2118174520 || Global_1935630.f_15 == GET_HASH_KEY("LAW_BOUNTY_HUNTERS_CSI"))
		{
			if (LAW::_0x9945A3E2528A02E8(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!func_575(273))
				{
					func_576(273, 0);
				}
			}
		}
		if (!func_575(268))
		{
			if (!func_651() && !func_650())
			{
				if (PLAYER::_0xB15CD2F9932C9AB5(PLAYER::PLAYER_ID()) > 0)
				{
					func_576(268, 0);
				}
			}
		}
		else if (func_741(268))
		{
			if (PLAYER::_0xB15CD2F9932C9AB5(PLAYER::PLAYER_ID()) <= 0)
			{
				func_648(268);
			}
		}
	}
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return;
	}
	func_742(func_739(), bParam1);
}

void func_199(bool bParam0)
{
	if (func_114(0, 1, 1) || bParam0)
	{
		func_743();
		return;
	}
	if (Global_1934266.f_76)
	{
		return;
	}
	if (!func_456(&(Global_1934266.f_70)))
	{
		if (func_127(Global_1879514.f_1))
		{
			func_457(&(Global_1934266.f_70), 0);
			if (func_554())
			{
				Global_1934266.f_76 = 1;
				return;
			}
			if (func_377(Global_1879514.f_1) == 8)
			{
				if (Global_1879514.f_1 == Global_1347702[63 /*49*/].f_15 || Global_1879514.f_1 == Global_1347702[65 /*49*/].f_15)
				{
					if (!func_575(541))
					{
						func_576(541, 0);
					}
					if (Global_1879514.f_1 == Global_1347702[63 /*49*/].f_15)
					{
						Global_1934266.f_73 = { -45f, 1227f, 172f };
					}
					if (Global_1879514.f_1 == Global_1347702[65 /*49*/].f_15)
					{
						Global_1934266.f_73 = { -2197f, 711f, 122f };
					}
				}
			}
			else if (func_377(Global_1879514.f_1) == 1)
			{
				if (((Global_1879514.f_1 == Global_1835011[13 /*74*/].f_1 || Global_1879514.f_1 == Global_1835011[12 /*74*/].f_1) || Global_1879514.f_1 == Global_1835011[53 /*74*/].f_1) || Global_1879514.f_1 == Global_1835011[56 /*74*/].f_1)
				{
					if (!func_575(541))
					{
						func_576(541, 0);
					}
					if (Global_1879514.f_1 == Global_1835011[13 /*74*/].f_1)
					{
						Global_1934266.f_73 = { -1502f, -774f, 105f };
					}
					if (Global_1879514.f_1 == Global_1835011[12 /*74*/].f_1)
					{
						Global_1934266.f_73 = { -1176f, -8f, 42f };
					}
					if (Global_1879514.f_1 == Global_1835011[53 /*74*/].f_1)
					{
						Global_1934266.f_73 = { 1168f, -620f, 80f };
					}
					if (Global_1879514.f_1 == Global_1835011[56 /*74*/].f_1)
					{
						Global_1934266.f_73 = { 566f, 1697f, 187f };
					}
				}
			}
		}
	}
	else if ((func_458(&(Global_1934266.f_70)) >= func_744() && !func_587(Global_1934266.f_73)) && func_745(Global_35, Global_1934266.f_73, 1) <= 60f)
	{
		if (func_554())
		{
			Global_1934266.f_76 = 1;
			return;
		}
		func_746(1);
		func_747(0);
		LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_MURDER"), 0, 0, false);
		func_743();
		Global_1934266.f_76 = 1;
	}
}

void func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		iVar2 = Global_17504.f_2084[iVar0 /*5*/].f_3;
		if (iVar2 != -1)
		{
			vVar3 = { Global_17504.f_2084[iVar0 /*5*/] };
			if (!func_587(vVar3))
			{
				if (func_748(iVar2, 1) && !func_748(iVar2, 34))
				{
					fVar6 = 30f;
					if (!VOLUME::_0x769BB7626B8CDB06(vVar3, 1f, 0, 16, 0))
					{
						Global_1310750.f_16078[iVar0] = VOLUME::_0x00BBF7CEAE8C666A(vVar3, fVar6, iVar1, 16);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_201()
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	if (!func_456(&(Global_1310750.f_16040)))
	{
		func_457(&(Global_1310750.f_16040), 0);
	}
	fVar0 = 7f;
	if (func_657())
	{
		fVar0 = (7f / 2f);
	}
	if (func_749(&(Global_1310750.f_16040), fVar0) && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = Global_1310750.f_16068;
		iVar2 = func_750(iVar1 + 1 >= 8, 0, iVar1 + 1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(Global_35);
		vVar3 = { vVar3 - Vector(3f, 3f, 3f) * Vector(0f, BUILTIN::COS(fVar6), -BUILTIN::SIN(fVar6)) };
		Global_1310750.f_16043[iVar1 /*3*/] = { vVar3 };
		Global_1310750.f_16068 = iVar2;
		func_751(&(Global_1310750.f_16040));
	}
}

int func_202()
{
	return Global_1310750.f_16037;
}

bool func_203(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

void func_204(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

void func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		iVar1 = Global_17504.f_2084[iVar0 /*5*/].f_3;
		if (iVar1 != -1)
		{
			Global_17504.f_2084[iVar0 /*5*/].f_4 = (Global_17504.f_2084[iVar0 /*5*/].f_4 - 1);
			if (Global_17504.f_2084[iVar0 /*5*/].f_4 <= 0)
			{
				func_752(Global_17504.f_2084[iVar0 /*5*/], 30f);
			}
		}
		iVar0++;
	}
}

void func_206()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_753(Global_1310750.f_13321[iVar0 /*9*/]))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_13321[iVar0 /*9*/].f_5, false))
			{
				if (Global_1310750.f_13321[iVar0 /*9*/].f_5 == Global_1310750.f_16077)
				{
					func_754(Global_1310750.f_13321[iVar0 /*9*/]);
				}
				Global_1310750[Global_1310750.f_13321[iVar0 /*9*/] /*111*/].f_48 = 0;
				func_755(iVar0);
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (Global_1310750.f_16077 != 0)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_16077, false))
		{
			func_754(Global_1310750.f_16071);
		}
	}
	Global_1310750.f_16037 = iVar1;
	if (func_756())
	{
		iVar0 = (iVar1 - 1);
		while (iVar0 >= 0)
		{
			if (func_753(Global_1310750.f_13321[iVar0 /*9*/]))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_13321[iVar0 /*9*/].f_5, false) && Global_1310750.f_13321[iVar0 /*9*/].f_5 != Global_1310750.f_16077)
				{
					func_757(iVar0);
				}
				else
				{
					iVar0 = (iVar0 + -1);
				}
			}
		}
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	Global_1326862.f_4 = 0;
	if (!func_758(&iVar1, &iVar2))
	{
		return;
	}
	if (((!CAM::IS_SCREEN_FADED_IN() || PED::IS_PED_INJURED(Global_35)) || func_759()) || !func_480(func_479()))
	{
		return;
	}
	if (!func_203(256) && PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		func_760();
		func_761(Global_1310750.f_16071, 0, 0, 0, 0);
		return;
	}
	bVar5 = func_273();
	if (Global_1326862 <= iVar1)
	{
		Global_1326862 = iVar1;
		func_762();
		Global_1310750.f_16111 = MISC::GET_GAME_TIMER();
	}
	iVar6 = 0;
	MISC::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL();
	iVar3 = Global_1326862;
	while (iVar3 <= iVar2)
	{
		iVar0 = Global_1326862.f_11[iVar3];
		if (!bVar5 || func_763(iVar0))
		{
			Global_1310750[iVar0 /*111*/].f_45 = func_764(iVar0, 1);
			if (Global_1310750[iVar0 /*111*/].f_45)
			{
				if (func_765(iVar0, 8) && !Global_1327479.f_9)
				{
					Global_1327479.f_7 = ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 1000);
					func_766(iVar0, 1, 0f, 0f, 0f, -1, 0, 0);
				}
				bVar4 = false;
				if (Global_1310750[iVar0 /*111*/].f_110 & 15 != 0)
				{
					func_767(iVar0);
					bVar4 = true;
				}
				if (Global_1310750[iVar0 /*111*/].f_110 & 16 != 0)
				{
					func_768(iVar0);
					bVar4 = true;
				}
				if (Global_1310750[iVar0 /*111*/].f_110 & 32 != 0 || Global_1326862.f_5)
				{
					func_769(iVar0);
					bVar4 = true;
				}
				if (bVar4)
				{
					func_770(iVar0, 1);
				}
				Global_1310750[iVar0 /*111*/].f_110 = 0;
			}
		}
		else
		{
			Global_1310750[iVar0 /*111*/].f_45 = 0;
		}
		iVar6 = (iVar6 + MISC::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL());
		if (iVar6 > 50)
		{
			Global_1326862 = iVar3 + 1;
			return;
		}
		iVar3++;
	}
	Global_1326862 = iVar1;
	Global_1326862.f_4 = 1;
	Global_1326862.f_5 = 0;
}

void func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = Global_1905944.f_5697;
	iVar2 = iVar1 + 9;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (iVar0 >= 630)
		{
			Global_1905944.f_5697 = 0;
			return;
		}
		Global_1905944.f_5697++;
		iVar3 = iVar0;
		if (iVar3 == -1 || iVar3 == 630)
		{
		}
		else if (Global_1905944.f_22[iVar3 /*9*/].f_3[0 /*2*/].f_1 != 3)
		{
		}
		else if (func_741(iVar3))
		{
		}
		else if (func_771(iVar3))
		{
		}
		else if (!func_213(iVar3, 16384))
		{
		}
		else
		{
			iVar4 = Global_1905944.f_22[iVar3 /*9*/].f_3[0 /*2*/];
			if (MAP::DOES_BLIP_EXIST(iVar4))
			{
				MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
				MAP::REMOVE_BLIP(&iVar4);
			}
		}
		iVar0++;
	}
}

bool func_209(bool bParam0)
{
	if (func_571())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_651())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_772())
	{
		return false;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return false;
	}
	if (func_773())
	{
		return false;
	}
	return true;
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_774() && bParam3)
	{
		func_775(Global_1905944.f_5693, iParam0, iParam1);
		return;
	}
	*iParam0 = 0;
	while (*iParam0 < 21)
	{
		*iParam1 = 0;
		while (*iParam1 < 31)
		{
			if (MISC::IS_BIT_SET(Global_1905944[*iParam0], *iParam1))
			{
				if (iVar0 == iParam2)
				{
					return;
				}
				iVar0++;
			}
			*iParam1++;
		}
		*iParam0++;
	}
	*iParam0 = -1;
	*iParam1 = -1;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0 * 31;
	iVar0 = (iVar0 + iParam1);
	return iVar0;
}

bool func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (PED::_0x5407B7288D0478B7(Global_35, 0) > 0 && !func_213(iParam0, 512))
		{
			return false;
		}
	}
	if (!func_776(iParam0))
	{
		return false;
	}
	if (!func_213(iParam0, 1) && func_114(0, 0, 1))
	{
		if (!func_213(iParam0, 262144) || !bParam2)
		{
			return false;
		}
	}
	if (func_213(iParam0, 32) && func_657())
	{
		return false;
	}
	if (func_213(iParam0, 16))
	{
		if (!func_777(iParam0))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = Global_1905944.f_22[iParam0 /*9*/].f_3[iVar0 /*2*/].f_1;
		if (iVar1 == 3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1905944.f_22[iParam0 /*9*/].f_3[iVar0 /*2*/]))
			{
				*iParam1 = 0;
				return false;
			}
		}
		iVar0++;
	}
	if (func_778() && !func_779(Global_1914319.f_16855.f_1))
	{
		if (!func_213(iParam0, 128))
		{
			return false;
		}
	}
	if (func_213(iParam0, 98304))
	{
		bVar2 = func_780(iParam0);
		if (!bVar2)
		{
			*iParam1 = 0;
			return false;
		}
	}
	return true;
}

bool func_213(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_214(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 21)
	{
		iVar2 = 0;
		while (iVar2 < 31)
		{
			if (MISC::IS_BIT_SET(Global_1905944[iVar1], iVar2))
			{
				if (func_211(iVar1, iVar2) == iParam0)
				{
					return iVar0;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	return -1;
}

void func_216(int iParam0)
{
	Global_1905944.f_5693 = iParam0;
}

void func_217(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	if (func_213(iParam0, 8))
	{
		sVar0 = "JOURNAL_WRITE";
		sVar1 = "HUD_FRONTEND_DEFAULT_SOUNDSET";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FRONTEND(sVar0, sVar1, true, 0);
}

int func_218(int iParam0)
{
	if (func_213(iParam0, 8192))
	{
		return 10000;
	}
	else if (func_213(iParam0, 4096))
	{
		return 7000;
	}
	else if (func_213(iParam0, 2048))
	{
		return 5000;
	}
	return 0;
}

int func_219(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = Global_1905944.f_22[iParam1 /*9*/].f_3[0 /*2*/];
	iVar1 = Global_1905944.f_22[iParam1 /*9*/].f_3[1 /*2*/];
	iVar2 = Global_1905944.f_22[iParam1 /*9*/].f_3[0 /*2*/].f_1;
	iVar3 = Global_1905944.f_22[iParam1 /*9*/].f_3[1 /*2*/].f_1;
	if (iVar3 != 0)
	{
		switch (iVar3)
		{
			case 1:
			case 3:
				switch (iVar2)
				{
					case 1:
						return func_220(MISC::VAR_STRING(0, sParam0, sVar0, iVar1), iParam2, 0, 0, iParam3, 1);
					case 3:
						if (MAP::DOES_BLIP_EXIST(sVar0))
						{
							Global_1905944.f_5698 = sVar0;
							return func_220(MISC::VAR_STRING(0, sParam0, sVar0, iVar1), iParam2, 0, 0, iParam3, 1);
						}
						break;
					case 2:
						return func_220(MISC::VAR_STRING(8, sParam0, MISC::VAR_STRING(0, sVar0), iVar1), iParam2, 0, 0, iParam3, 1);
				}
				break;
			case 2:
				switch (iVar2)
				{
					case 1:
						return func_220(MISC::VAR_STRING(32, sParam0, sVar0, MISC::VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
					case 3:
						if (MAP::DOES_BLIP_EXIST(sVar0))
						{
							Global_1905944.f_5698 = sVar0;
							return func_220(MISC::VAR_STRING(32, sParam0, sVar0, MISC::VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
						}
						break;
					case 2:
						return func_220(MISC::VAR_STRING(40, sParam0, MISC::VAR_STRING(0, sVar0), MISC::VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
				}
				break;
			case 4:
				func_677(sVar0, 0, iVar1 == 1, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				return func_220(MISC::VAR_STRING(0, sParam0), iParam2, 0, 0, iParam3, 1);
		}
	}
	else
	{
		switch (iVar2)
		{
			case 1:
				return func_220(MISC::VAR_STRING(0, sParam0, sVar0), iParam2, 0, 0, iParam3, 1);
			case 5:
				return func_220(MISC::VAR_STRING(0, sVar0), iParam2, 0, 0, iParam3, 1);
			case 2:
				return func_220(MISC::VAR_STRING(8, sParam0, MISC::VAR_STRING(0, sVar0)), iParam2, 0, 0, iParam3, 1);
			case 3:
				if (MAP::DOES_BLIP_EXIST(sVar0))
				{
					Global_1905944.f_5698 = sVar0;
					return func_220(MISC::VAR_STRING(0, sParam0, sVar0), iParam2, 0, 0, iParam3, 1);
				}
				break;
		}
	}
	return 0;
}

var func_220(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_221()
{
	Global_1905944.f_5693 = -1;
}

bool func_222(int iParam0)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_8 != -1;
}

int func_223(int iParam0)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_8;
}

void func_224(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (func_112() != -1)
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

int func_225()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (Global_1391411.f_2[iVar1 /*2*/].f_1 != 234527101)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_226(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_228()
{
	return func_518(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1391411.f_2[iVar0 /*2*/].f_1 != 234527101)
		{
			iVar2 = func_781(iParam0, iVar0);
			if (iVar2 == 1)
			{
				iVar1 += 5;
			}
			else if (iVar2 == 2)
			{
				iVar1 += 2;
			}
			else if (iVar2 == 3)
			{
				iVar1 -= 3;
			}
		}
		iVar0++;
	}
	func_782(iParam0, iVar1, bParam1);
	func_783();
}

void func_230(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_784();
	if (iVar0 == -1)
	{
		func_783();
		return;
	}
	iVar3 = 234527101;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (iVar3 == 234527101)
		{
			iVar2 = iVar1;
			iVar3 = Global_1391411.f_2[iVar1 /*2*/].f_1;
		}
		iVar1++;
	}
	if (iVar3 == 234527101)
	{
		return;
	}
	iVar4 = func_781(iVar0, iVar3);
	iVar5 = 0;
	if (iVar4 == 1)
	{
		iVar5 += 5;
	}
	else if (iVar4 == 2)
	{
		iVar5 += 2;
	}
	else if (iVar4 == 3)
	{
		iVar5 -= 3;
	}
	func_782(iVar0, iVar5, bParam0);
	Global_1391411.f_2[iVar2 /*2*/].f_1 = 234527101;
}

void func_231()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (func_234(iVar0))
		{
			func_785(iVar0);
		}
		iVar0++;
	}
}

void func_232()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (func_234(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_40.f_9052, iVar0) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
			{
				func_786(&(Global_1392626[iVar0 /*32*/].f_8), 1);
			}
		}
		iVar0++;
	}
}

void func_233(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (func_234(iVar0) && MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
			if ((Global_1392626[iVar0 /*32*/].f_10 && iParam0) == 0)
			{
				func_787(iVar0, iParam0);
			}
			func_238(iVar0);
		}
		iVar0++;
	}
}

bool func_234(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_235(int iParam0)
{
	if (!func_234(iParam0))
	{
		return true;
	}
	return func_447(Global_1392626[iParam0 /*32*/].f_3, 1);
}

void func_236(int iParam0)
{
	if (func_246(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_129(Global_1392626[iParam0 /*32*/].f_3);
	}
	func_241(iParam0, 1, 1);
	if (MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	}
}

bool func_237(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_238(int iParam0)
{
	bool bVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_788(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 4096 != 0)
	{
		if (bVar0)
		{
			return;
		}
	}
	if (func_788(iParam0, 4))
	{
		if (!bVar0)
		{
			func_789(iParam0, &(Global_1392626[iParam0 /*32*/]), Global_1392626[iParam0 /*32*/].f_24);
		}
		MAP::BLIP_ADD_MODIFIER(Global_1392626[iParam0 /*32*/], 724623647);
	}
	else
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bVar0)
		{
			MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
		}
		func_789(iParam0, &(Global_1392626[iParam0 /*32*/].f_1), Global_1392626[iParam0 /*32*/].f_27);
		MAP::BLIP_ADD_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, 724623647);
	}
	func_790(&(Global_1392626[iParam0 /*32*/].f_9), 4096);
}

void func_239(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_788(iParam0, 4))
	{
		iVar0 = Global_1392626[iParam0 /*32*/];
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	else
	{
		iVar0 = Global_1392626[iParam0 /*32*/].f_1;
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 4096 == 0)
	{
		return;
	}
	if (func_788(iParam0, 4))
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_24);
	}
	else
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_27);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & 8192 != 0)
	{
		if (fVar1 > 45f)
		{
			iVar2 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
			if (iVar2 != Global_1392626[iParam0 /*32*/].f_23)
			{
				UIFEED::_0x2F901291EF177B02(Global_1392626[iParam0 /*32*/].f_23, 0);
			}
			func_791(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
		}
	}
	else if (fVar1 <= 25f)
	{
		if (Global_1392626[iParam0 /*32*/].f_10 & 1024 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_ANTAGONIZE", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		func_790(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_240(int iParam0)
{
	if (iParam0 == func_792(Global_1572864.f_8))
	{
		return true;
	}
	if (Global_40.f_9052.f_1[iParam0] != -15)
	{
		if (!func_793(Global_40.f_9052.f_1[iParam0], 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		return true;
	}
	if (func_794(iParam0))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_723(26))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & 2048 == 0)
			{
				func_787(iParam0, 2048);
			}
			return false;
		}
		else if (func_715(26))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & 2048 == 0)
			{
				func_787(iParam0, 2048);
			}
			return false;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_12 != -1)
	{
		if (func_723(Global_1392626[iParam0 /*32*/].f_12))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & 2048 == 0)
			{
				func_787(iParam0, 2048);
			}
			return false;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_22 != -1)
	{
		if (!func_795(Global_1392626[iParam0 /*32*/].f_22))
		{
			return false;
		}
	}
	if (func_796(Global_1392626[iParam0 /*32*/].f_8, 1))
	{
		if (!func_797() && func_245(iParam0, Global_1392626[iParam0 /*32*/].f_6))
		{
			return false;
		}
		else if (!CAM::IS_SPHERE_VISIBLE(Global_1392626[iParam0 /*32*/].f_24, Global_1392626[iParam0 /*32*/].f_5))
		{
			func_798(&(Global_1392626[iParam0 /*32*/].f_8), 1);
		}
	}
	return true;
}

void func_241(int iParam0, int iParam1, bool bParam2)
{
	if (!func_234(iParam0))
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1392626[iParam0 /*32*/].f_21, 523);
	}
	func_540(iParam0, bParam2, iParam1);
}

void func_242(int iParam0)
{
	bool bVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (func_788(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1);
	}
	func_799(&(Global_1392626[iParam0 /*32*/].f_10));
	func_798(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	func_791(&(Global_1392626[iParam0 /*32*/].f_9), 4096);
	if (bVar0)
	{
		if (!func_788(iParam0, 4))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
			if (!func_788(iParam0, 8))
			{
				func_800(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
			}
			else
			{
				func_801(iParam0);
			}
			MAP::BLIP_REMOVE_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, 724623647);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1392626[iParam0 /*32*/], 724623647);
		}
	}
}

void func_243(int iParam0)
{
	if ((Global_1879534 || HUD::IS_RADAR_HIDDEN_BY_SCRIPT()) || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_788(iParam0, 4))
	{
		func_802(&(Global_1392626[iParam0 /*32*/].f_1));
		if (!MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
		{
			func_789(iParam0, &(Global_1392626[iParam0 /*32*/]), Global_1392626[iParam0 /*32*/].f_24);
		}
	}
	else if (!func_788(iParam0, 8))
	{
		func_800(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
	}
	else
	{
		func_801(iParam0);
	}
}

void func_244(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	char cVar8[32];

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		fVar0 = 25f;
		vVar1 = { Global_1392626[iParam0 /*32*/].f_24 };
		if (!func_788(iParam0, 4) && Global_1392626[iParam0 /*32*/].f_4 > 0f)
		{
			fVar0 = (Global_1392626[iParam0 /*32*/].f_4 + 5f);
			vVar1 = { Global_1392626[iParam0 /*32*/].f_27 };
		}
		else if (func_803(iParam0))
		{
			fVar0 = 15f;
		}
		Global_1392626[iParam0 /*32*/].f_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar1, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_804(iParam0));
		func_270(Global_1392626[iParam0 /*32*/].f_30, func_804(iParam0), 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	}
	if ((iParam0 == 1 || iParam0 == 4) || iParam0 == 5)
	{
		if (iParam0 == 1)
		{
			fVar4 = 100f;
		}
		else if (iParam0 == 4)
		{
			fVar4 = 200f;
			func_805(1411.856f, 1166.743f, 184.1507f, 200f, 0, 0, 5);
		}
		else if (iParam0 == 5)
		{
			fVar4 = 100f;
		}
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
		{
			vVar5 = { Global_1392626[iParam0 /*32*/].f_24 };
			StringCopy(&cVar8, func_804(iParam0), 32);
			StringConCat(&cVar8, "Extra", 32);
			Global_1392626[iParam0 /*32*/].f_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar4, fVar4, fVar4, &cVar8);
			func_270(Global_1392626[iParam0 /*32*/].f_31, &cVar8, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
}

bool func_245(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_792(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_246(int iParam0)
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
		iVar0 = func_128(iParam0);
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

void func_247(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_806(iParam0, iParam1);
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_429(iParam0))
	{
		return -1;
	}
	if (func_112() != -1)
	{
		iVar2 = func_430(iParam0);
		if (iVar2 >= 0)
		{
			func_807(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			func_130(iVar1, 1);
			func_807(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_430(iParam0);
		if (iVar2 >= 0)
		{
			func_807(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_127(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					func_130(iVar0, 1);
					func_807(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

Vector3 func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2638.87f, -1289.67f, 51.32f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -307.3165f, 776.0316f, 118.7f;
		case 3:
			return -813.4f, -1275.6f, 44.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_250(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_587(vParam2))
	{
		return;
	}
	if (!func_47(iParam1))
	{
		return;
	}
	Global_1934182[iParam0 /*18*/].f_1 = { vParam2 };
	Global_1934182[iParam0 /*18*/].f_5 = func_311(1, iParam0, 2, func_808(iParam0));
	Global_1934182[iParam0 /*18*/] = iParam1;
	if (bParam5)
	{
		Global_1934182[iParam0 /*18*/].f_7 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_809(iParam0), func_810(iParam0), func_811(iParam0), func_812(iParam0));
		VOLUME::_0x128FC3A893BF853A(Global_1934182[iParam0 /*18*/].f_7);
	}
	switch (iParam0)
	{
		case 2:
			func_813(170);
			break;
	}
}

bool func_251(int iParam0)
{
	return (Global_1934182.f_74 && iParam0) != 0;
}

bool func_252(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_587(Global_1934182[iParam0 /*18*/].f_1))
	{
		return false;
	}
	if (!func_127(Global_1934182[iParam0 /*18*/].f_5))
	{
		return false;
	}
	return true;
}

bool func_253(int iParam0)
{
	return Global_1934182[iParam0 /*18*/].f_15;
}

bool func_254(int iParam0)
{
	if (func_46() != Global_1934182[iParam0 /*18*/])
	{
		return false;
	}
	return true;
}

bool func_255(int iParam0)
{
	int iVar0;

	if (Global_1934182[iParam0 /*18*/].f_14)
	{
		return false;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 519;
			break;
		case 0:
			iVar0 = 208;
			break;
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 12;
			break;
	}
	if (!func_266(iVar0, 0))
	{
		return true;
	}
	if (!func_814())
	{
		return true;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1934182[iParam0 /*18*/].f_7))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(Global_1934182[iParam0 /*18*/].f_7, iVar1, 1);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar1) <= 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar1);
			return false;
		}
		switch (iParam0)
		{
			case 3:
				iVar4 = 519;
				break;
			case 0:
				iVar4 = 208;
				break;
			case 1:
				iVar4 = 76;
				break;
			case 2:
				iVar4 = 12;
				break;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
			{
				iVar5 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_HUMAN(iVar5))
				{
					if (iVar5 != func_815(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar5))
					{
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

bool func_257(int iParam0)
{
	if (iParam0 != 2)
	{
		return true;
	}
	if (CAM::IS_SPHERE_VISIBLE(-308.1361f, 780.5737f, 118.7622f, 2f))
	{
		return false;
	}
	return true;
}

void func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1934182[iParam0 /*18*/].f_1);
	if (!INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_816(iParam0, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_817(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
		{
			if (!func_818(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
			{
				if (!func_819(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
				{
					func_820(Global_1934182[iParam0 /*18*/].f_8[iVar1], 1, 0f, 0, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
	}
}

void func_259(int iParam0)
{
	Global_1934182.f_74 = (Global_1934182.f_74 - (Global_1934182.f_74 && iParam0));
}

void func_260(int iParam0)
{
	Global_1934182.f_74 = (Global_1934182.f_74 || iParam0);
}

void func_261(int iParam0)
{
	int iVar0;

	func_816(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_817(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
		{
			if (!func_821(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
			{
				func_820(Global_1934182[iParam0 /*18*/].f_8[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_262(int iParam0)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_46() != 76)
	{
		if (Global_1934182[iParam0 /*18*/].f_4 != -1)
		{
			func_157(func_822(iParam0), 15, Global_1934182[iParam0 /*18*/].f_1, 0);
			Global_1934182[iParam0 /*18*/].f_4 = -1;
		}
	}
}

bool func_263(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return Global_40.f_9079[iParam0] & 1 != 0;
}

bool func_264(int iParam0)
{
	int iVar0;

	if (!func_588(iParam0))
	{
		return false;
	}
	iVar0 = Global_40.f_9079.f_10[iParam0];
	if (iVar0 == -15 || iVar0 == 0)
	{
		return false;
	}
	func_823(&iVar0, 0, 0, 0, 1, 0, 0, 0);
	return !func_793(iVar0, 1);
}

int func_265(int iParam0)
{
	if (!func_588(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 208;
		case 1:
			return 76;
		case 2:
			return 12;
		case 3:
			return 519;
	}
	return -1;
}

bool func_266(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_586(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_824(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_815(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_824(iParam0));
}

void func_267(int iParam0)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_446(Global_1934182[iParam0 /*18*/].f_5))
	{
		return;
	}
	if (func_246(Global_1934182[iParam0 /*18*/].f_5))
	{
		return;
	}
	Global_40.f_9079.f_5[iParam0] = 1;
	func_248(Global_1934182[iParam0 /*18*/].f_5);
}

void func_268(int iParam0, float fParam1)
{
	if (fParam1 < 400f)
	{
		if (!func_263(iParam0))
		{
			func_825(iParam0);
		}
	}
}

void func_269()
{
	func_288(0, &(Global_40.f_9096[0 /*12*/]));
	func_280(0, 1073741824 /* Float: 2f */);
	func_280(0, 268435456);
	Global_1392194[0 /*10*/].f_9 = MISC::GET_FRAME_COUNT();
	func_288(3, &(Global_40.f_9096[3 /*12*/]));
	func_280(3, 1073741824 /* Float: 2f */);
	func_280(3, 268435456);
	Global_1392194[3 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 360;
	func_288(1, &(Global_40.f_9096[1 /*12*/]));
	func_280(1, 1073741824 /* Float: 2f */);
	func_280(1, 268435456);
	Global_1392194[1 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 720;
	func_288(2, &(Global_40.f_9096[2 /*12*/]));
	func_280(2, 1073741824 /* Float: 2f */);
	func_280(2, 268435456);
	Global_1392194[2 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 1080;
	func_826();
}

int func_270(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_827(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_271()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_828(iVar0, -1);
		iVar0++;
	}
}

int func_272()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	fVar2 = func_829(func_301(iVar0, func_276(iVar0)), 0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == iVar0)
		{
		}
		else
		{
			fVar3 = func_829(func_301(iVar1, func_276(iVar1)), 0);
			if (fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	Global_1898092.f_4 = fVar2;
	return iVar0;
}

bool func_273()
{
	return Global_1898164.f_163;
}

void func_274(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_283(iParam0, 134217728))
	{
		return;
	}
	if (Global_1898092.f_26.f_2 == iParam0)
	{
		bVar1 = true;
	}
	if (func_283(iParam0, 1))
	{
		bVar0 = true;
	}
	if (func_283(iParam0, 134217728))
	{
		bVar2 = true;
	}
	bVar3 = true;
	if ((!bVar1 && !bVar0) && !bVar2)
	{
		bVar3 = false;
	}
	if (func_830(Global_36, iParam0))
	{
		func_295(iParam0, 134217728);
		if (iParam0 == 3)
		{
			func_280(iParam0, 65536);
		}
		bVar3 = false;
	}
	if (func_283(iParam0, 65536) && Global_1898092.f_26.f_2 != iParam0)
	{
		bVar3 = false;
	}
	if (func_283(iParam0, 1048576))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		iVar4 = func_831(iParam0);
	}
	if (bVar3 && !bParam1)
	{
		if (Global_1392194[iParam0 /*10*/].f_2 == -1)
		{
			Global_1392194[iParam0 /*10*/].f_3 = iVar4;
			Global_1392194[iParam0 /*10*/].f_2 = func_158(func_297(iParam0), iVar4, func_301(iParam0, func_276(iParam0)), -1);
			func_159(func_297(iParam0), iVar4, func_301(iParam0, func_276(iParam0)), func_832(iParam0));
		}
		else if (Global_1392194[iParam0 /*10*/].f_3 != iVar4)
		{
			func_157(func_297(iParam0), Global_1392194[iParam0 /*10*/].f_3, func_301(iParam0, func_276(iParam0)), 0);
			Global_1392194[iParam0 /*10*/].f_2 = -1;
		}
	}
	else if (Global_1392194[iParam0 /*10*/].f_2 != -1)
	{
		func_157(func_297(iParam0), Global_1392194[iParam0 /*10*/].f_3, func_301(iParam0, func_276(iParam0)), 0);
		Global_1392194[iParam0 /*10*/].f_2 = -1;
	}
}

void func_275()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1898092.f_3;
	Global_1898092.f_3 = func_272();
	if (iVar0 != Global_1898092.f_3)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar1 = (64 * func_750(iVar2 == 0, 1, (2 * iVar2)));
			func_833(&(Global_1898092.f_5[iVar2 /*6*/]), iVar1, 1);
			iVar2++;
		}
	}
}

int func_276(int iParam0)
{
	if (!func_834(iParam0))
	{
		return -1;
	}
	return Global_40.f_9096[iParam0 /*12*/];
}

void func_277(int iParam0, int iParam1)
{
	if (func_835(iParam0, iParam1))
	{
		*iParam1 = func_287(*iParam0);
		func_836(*iParam0, *iParam1);
		func_837(*iParam0, 0);
		if (func_283(*iParam0, 4194304))
		{
			func_295(*iParam0, 4194304);
		}
		if (func_283(*iParam0, 8388608))
		{
			func_295(*iParam0, 8388608);
		}
		func_838(*iParam0);
		func_280(*iParam0, -2147483648);
		func_280(*iParam0, 1073741824 /* Float: 2f */);
	}
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		iVar0 = iParam1;
		switch (iVar0)
		{
			case 1:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					if (func_283(1, 2))
					{
						func_840(iParam0, 1, 0);
					}
					else
					{
						func_840(iParam0, 2, 0);
					}
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 4, 0);
				}
				break;
			case 3:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 14, 0);
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}
	else if (iParam0 == 1)
	{
		iVar1 = iParam1;
		switch (iVar1)
		{
			case 1:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 5, 0);
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 5, 0);
				}
				break;
			case 3:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					if (!func_283(iParam0, 128))
					{
						func_840(iParam0, 15, 0);
					}
					else
					{
						func_840(iParam0, 2, 0);
					}
				}
				break;
			case 4:
				if (func_285(iParam0, 128) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 0, 0);
				}
				break;
		}
	}
	else if (iParam0 == 3)
	{
		iVar2 = iParam1;
		switch (iVar2)
		{
			case 1:
				if ((func_285(iParam0, 4) && !func_285(iParam0, 131072)) && !func_283(iParam0, 32))
				{
					func_839(iParam0, 131072);
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
				}
				break;
		}
	}
	else if (iParam0 == 2)
	{
		iVar3 = iParam1;
		switch (iVar3)
		{
			case 1:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 2, 0);
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 12, 0);
				}
				break;
			case 3:
				if (func_285(iParam0, 4) && !func_285(iParam0, 131072))
				{
					func_839(iParam0, 131072);
					func_840(iParam0, 4, 0);
				}
				break;
			case 4:
				break;
		}
	}
	func_841(iParam0);
}

bool func_279(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() - Global_1392194[iParam0 /*10*/].f_9) > 1800)
	{
		Global_1392194[iParam0 /*10*/].f_9 = MISC::GET_FRAME_COUNT();
		if (!func_842(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_280(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	if (func_283(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 = (Global_40.f_9096[iParam0 /*12*/].f_5 || iParam1);
}

bool func_281(int iParam0)
{
	return (Global_1898092.f_1 && iParam0) != 0;
}

bool func_282(int iParam0)
{
	if ((!func_285(iParam0, 524288) && !func_285(iParam0, 1048576)) && !func_285(iParam0, 2097152))
	{
		return true;
	}
	if ((func_843(Global_36, iParam0) || func_149(func_297(iParam0), 8)) || func_226(Global_1392194[iParam0 /*10*/].f_1, 1))
	{
		return false;
	}
	if (Global_40.f_9096[iParam0 /*12*/].f_11 < 0)
	{
		if (Global_40.f_9096[iParam0 /*12*/].f_8 >= 3 && func_283(iParam0, 2097152))
		{
			if (!func_283(iParam0, 4194304))
			{
				func_280(iParam0, 4194304);
				func_280(iParam0, 1073741824 /* Float: 2f */);
				func_839(iParam0, 8388608);
				func_844(iParam0);
				return false;
			}
			else if (!func_283(iParam0, 8388608))
			{
				func_280(iParam0, 8388608);
				func_280(iParam0, 1073741824 /* Float: 2f */);
				return false;
			}
		}
		else
		{
			func_838(iParam0);
			func_845(iParam0, 3);
			return true;
		}
	}
	if (func_846(iParam0))
	{
		if (Global_40.f_9096[iParam0 /*12*/].f_8 >= 3 && func_283(iParam0, 2097152))
		{
			if (!func_283(iParam0, 4194304))
			{
				func_280(iParam0, 4194304);
				func_280(iParam0, 1073741824 /* Float: 2f */);
				func_839(iParam0, 8388608);
				func_844(iParam0);
				return false;
			}
			else if (!func_283(iParam0, 8388608))
			{
				func_280(iParam0, 8388608);
				func_280(iParam0, 1073741824 /* Float: 2f */);
				return false;
			}
		}
		else
		{
			func_838(iParam0);
		}
		return false;
	}
	return false;
}

bool func_283(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_284(int iParam0)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_2;
}

bool func_285(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/].f_4 && iParam1) != 0;
}

bool func_286(int iParam0, int iParam1)
{
	int iVar0;

	if (func_283(iParam0, 268435456))
	{
		return true;
	}
	if (func_281(2) || func_281(1))
	{
		return true;
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		func_290(8);
		return false;
	}
	if (func_273())
	{
		func_290(8);
		return false;
	}
	if (func_226(Global_1392194[iParam0 /*10*/].f_1, 1))
	{
		func_290(8);
		return false;
	}
	if (BUILTIN::VDIST2(func_301(iParam0, iParam1), Global_36) <= 90000f)
	{
		func_839(iParam0, 2048);
		return false;
	}
	iVar0 = func_297(iParam0);
	if (iParam0 != 1 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
	{
		func_839(iParam0, 2048);
		return false;
	}
	if (func_847(iParam0, iParam1))
	{
		func_290(8);
		return false;
	}
	return true;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_288(int iParam0, var uParam1)
{
	if (func_848(iParam0, *uParam1))
	{
		return;
	}
	if (func_663(45))
	{
		*uParam1 = func_287(iParam0);
		return;
	}
	*uParam1 = func_849(iParam0);
}

void func_289(int iParam0)
{
	if (!func_834(iParam0))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = 0;
}

void func_290(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 || iParam0);
}

void func_291(int iParam0)
{
	Global_1898092 = iParam0;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_834(iParam0))
	{
		return;
	}
	func_850(iParam0, Global_40.f_9096[iParam0 /*12*/].f_2, iParam1, iParam2, iParam3, iParam4);
}

void func_293()
{
	int iVar0;

	if (!Global_1935630.f_12)
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !func_283(1, 8192)) && !(PED::IS_PED_IN_COMBAT(Global_35, 0) || func_851()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (func_852(&iVar0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(Global_35, "bGPSEnabled"))
				{
					DECORATOR::DECOR_SET_BOOL(Global_35, "bGPSEnabled", true);
					if (!MAP::DOES_BLIP_EXIST(Global_1392194[1 /*10*/].f_4))
					{
						func_854(func_853(), &(Global_1392194[1 /*10*/].f_4), 1631143573, 0, func_832(1), 0);
					}
					func_576(458, (MISC::GET_FRAME_COUNT() - Global_1392194[1 /*10*/].f_8) > 2700);
				}
			}
		}
		else if (DECORATOR::DECOR_EXIST_ON(Global_35, "bGPSEnabled"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "bGPSEnabled");
			func_802(&(Global_1392194[1 /*10*/].f_4));
			Global_1392194[1 /*10*/].f_8 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_294(int iParam0, int iParam1)
{
	if (iParam1 < func_855(iParam0))
	{
		func_295(iParam0, 65536);
	}
	switch (iParam0)
	{
		case 0:
			Global_40.f_9096[0 /*12*/].f_6 = 0;
			if (iParam1 == 2)
			{
				func_840(iParam0, 10, 0);
			}
			else if (iParam1 == 3)
			{
				if (!func_285(iParam0, 128))
				{
					if (!func_285(iParam0, 8388608))
					{
						func_839(iParam0, 8388608);
					}
				}
				else if (func_285(iParam0, 8388608) && !func_283(iParam0, 4194304))
				{
					func_856(iParam0, 8388608);
				}
			}
			else if (iParam1 == 4)
			{
				func_839(iParam0, 8388608);
			}
			else if (iParam1 == 5)
			{
				func_839(iParam0, 8388608);
			}
			break;
		case 1:
			if (iParam1 == 2)
			{
				if (!func_285(iParam0, 4))
				{
					if (!func_285(iParam0, 8388608))
					{
						func_839(iParam0, 8388608);
					}
				}
				else if (func_285(iParam0, 8388608) && !func_283(iParam0, 4194304))
				{
					func_856(iParam0, 8388608);
				}
			}
			else if (iParam1 == 4)
			{
				func_840(iParam0, 30, 0);
				if (func_285(iParam0, 8388608) && !func_283(iParam0, 4194304))
				{
					func_856(iParam0, 8388608);
				}
			}
			else if (iParam1 == 5)
			{
				if (!func_285(iParam0, 8388608))
				{
					func_839(iParam0, 8388608);
				}
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
			}
			else if (iParam1 == 2)
			{
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				if (!func_285(iParam0, 128))
				{
					if (!func_285(iParam0, 8388608))
					{
						func_839(iParam0, 8388608);
					}
				}
				else if (func_285(iParam0, 8388608) && !func_283(iParam0, 4194304))
				{
					func_856(iParam0, 8388608);
				}
			}
			else if (iParam1 == 4)
			{
				if (!func_285(iParam0, 256))
				{
					func_839(iParam0, 256);
				}
			}
			break;
	}
	func_856(iParam0, 131072);
}

void func_295(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	if (!func_283(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 = (Global_40.f_9096[iParam0 /*12*/].f_5 - (Global_40.f_9096[iParam0 /*12*/].f_5 && iParam1));
}

bool func_296(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!func_834(iParam0))
	{
		func_290(8);
		return false;
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		func_290(8);
		return false;
	}
	if (func_281(2) || func_281(1))
	{
		bParam2 = true;
	}
	if (func_283(iParam0, 268435456))
	{
		bParam2 = true;
		bParam4 = false;
	}
	iVar0 = func_297(iParam0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (!func_281(32))
	{
		func_290(32);
	}
	switch (iParam0)
	{
		case 0:
			iVar1 = 14;
			switch (iParam1)
			{
				case 1:
					bVar2 = func_285(0, 128);
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, bVar2, bParam4, func_858(0), func_283(0, 4194304), iVar1))
						{
							func_295(iParam0, 1048576);
							func_860(iParam1);
							func_861(0, iParam1);
							if (!func_858(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					bVar2 = func_283(0, 512);
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, func_858(0), func_283(0, 4194304), iVar1))
						{
							func_295(iParam0, 1048576);
							func_860(iParam1);
							func_861(0, iParam1);
							if (!func_858(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, func_858(0), func_283(0, 4194304), iVar1))
						{
							func_295(iParam0, 1048576);
							func_860(iParam1);
							func_861(0, iParam1);
							if (!func_858(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							func_280(iParam0, 1048576);
							func_860(iParam1);
							func_861(0, iParam1);
							AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_04", true, true);
							MISC::_0xCC3EDC5614B03F61(0);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							func_280(iParam0, 1048576);
							func_860(iParam1);
							func_402(-1062490780, 1, 0);
							func_861(0, iParam1);
							AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_05", true, true);
							MISC::_0xCC3EDC5614B03F61(0);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 1:
			iVar1 = 4;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, func_283(1, 4194304), func_283(1, 8388608), bParam4, func_858(1), iVar1))
						{
							func_295(iParam0, 1048576);
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, func_283(1, 4194304), func_283(1, 8388608), bParam4, func_858(1), iVar1))
						{
							func_295(iParam0, 1048576);
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, func_283(1, 128), func_283(1, 4194304), func_283(1, 8388608), bParam4, func_858(1), iVar1))
						{
							func_295(iParam0, 1048576);
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							func_295(iParam0, 1048576);
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_04", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							func_280(iParam0, 1048576);
							func_861(1, iParam1);
							MISC::_0xCC3EDC5614B03F61(1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 3:
			iVar1 = 2;
			iVar3 = iParam1;
			switch (iVar3)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_865(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_866(iParam1, bParam4, iVar1))
						{
							func_861(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_865(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_866(iParam1, bParam4, iVar1))
						{
							func_861(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 2:
			iVar1 = 13;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 2f))
						{
							func_290(8);
							return false;
						}
						if (!bParam2 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							func_290(8);
							return false;
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						bVar2 = func_872(iParam1);
						if (func_873(iParam1, bVar2, bParam4, func_283(2, 4194304), iVar1))
						{
							if (bVar2)
							{
								func_839(2, 134217728);
							}
							func_295(iParam0, 1048576);
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 2244.843f, 721.3605f, 95.94753f, 0f, 0f, 0f, 40f, 40f, 30f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 2122.792f, 1063.288f, 129.0717f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							PATHFIND::SET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false, false, false);
							func_861(2, iParam1);
							if (!func_858(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 1.5f))
						{
							func_290(8);
							return false;
						}
						if (!bParam2 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							func_290(8);
							return false;
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						bVar2 = func_872(iParam1);
						if (func_873(iParam1, bVar2, bParam4, func_283(2, 4194304), iVar1))
						{
							if (bVar2)
							{
								func_839(2, 134217728);
							}
							func_295(iParam0, 1048576);
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 2122.792f, 1063.288f, 129.0717f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							PATHFIND::SET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false, false, false);
							func_861(2, iParam1);
							if (!func_858(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 1065353216 /* Float: 1f */))
						{
							func_290(8);
							return false;
						}
						if (!bParam2 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							func_290(8);
							return false;
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_873(iParam1, 0, bParam4, func_283(2, 4194304), iVar1))
						{
							func_295(iParam0, 1048576);
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0f, 0f, 0f, 10f, 10f, 10f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0f, 0f, 0f, 10f, 10f, 10f);
							PATHFIND::SET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false, false, false);
							func_861(2, iParam1);
							if (!func_858(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 1065353216 /* Float: 1f */))
						{
							func_290(8);
							return false;
						}
						if (!bParam2)
						{
							if (func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
							{
								func_290(8);
								return false;
							}
							if (CAM::IS_SPHERE_VISIBLE(1846.298f, 887.8817f, 113.5422f, 115f) || func_829(1846.298f, 887.8817f, 113.5422f, 1) < 200f)
							{
								func_290(8);
								return false;
							}
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_873(iParam1, bVar2, bParam4, 0, iVar1))
						{
							func_280(iParam0, 1048576);
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::_0xD17672447692478E(Global_1392194[2 /*10*/].f_7, 0);
								VOLUME::_DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							func_280(iParam0, 65536);
							func_875(iVar0);
							func_876(4, 1);
							func_877("railroad_stage4");
							func_861(2, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
	}
	func_295(iParam0, 268435456);
	func_305(32);
	return true;
}

int func_297(int iParam0)
{
	if (!func_834(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

void func_298(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -1261.231f, -310.1417f, 100.7263f };
					*uParam2 = 71.3469f;
					return;
				case 1:
					*uParam1 = { -1474.719f, -79.4687f, 109.0108f };
					*uParam2 = 211.465f;
					return;
				case 2:
					*uParam1 = { -1376.806f, -60.8017f, 79.2619f };
					*uParam2 = 168.8738f;
					return;
				case 3:
					*uParam1 = { -1497.011f, -363.2157f, 134.0955f };
					*uParam2 = 331.0784f;
					return;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -570.3791f, 416.2931f, 87.4048f };
					*uParam2 = 300.6946f;
					return;
				case 1:
					*uParam1 = { -311.3359f, 560.101f, 98.8341f };
					*uParam2 = 113.9066f;
					return;
				case 2:
					*uParam1 = { -418.9164f, 668.0876f, 114.5171f };
					*uParam2 = 177.6395f;
					return;
				case 3:
					*uParam1 = { -308.2228f, 510.0672f, 91.1515f };
					*uParam2 = 89.967f;
					return;
			}
			break;
		case 2:
			switch (iParam4)
			{
				case 1:
				case default:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2248.901f, 535.688f, 74.7152f };
							*uParam2 = 22.0801f;
							return;
						case 1:
							*uParam1 = { 2223.725f, 798.5815f, 107.6169f };
							*uParam2 = 159.1932f;
							return;
						case 2:
							*uParam1 = { 2340.829f, 736.3986f, 73.1578f };
							*uParam2 = 127.9038f;
							return;
						case 3:
							*uParam1 = { 2119.933f, 649.0927f, 133.1353f };
							*uParam2 = 274.3134f;
							return;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2249.599f, 667.4967f, 87.6821f };
							*uParam2 = 24.2233f;
							return;
						case 1:
							*uParam1 = { 2112.95f, 995.3058f, 110.7093f };
							*uParam2 = 204.0536f;
							return;
						case 2:
							*uParam1 = { 2328.921f, 724.4437f, 75.8784f };
							*uParam2 = 55.6839f;
							return;
						case 3:
							*uParam1 = { 2156.616f, 672.2913f, 121.7241f };
							*uParam2 = 325.4661f;
							return;
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2122.964f, 965.6495f, 114.3117f };
							*uParam2 = 101.8466f;
							return;
						case 1:
							*uParam1 = { 1824.587f, 886.397f, 110.226f };
							*uParam2 = 294.963f;
							return;
						case 2:
							*uParam1 = { 1896.055f, 994.3648f, 119.4357f };
							*uParam2 = 237.7192f;
							return;
						case 3:
							*uParam1 = { 1885.696f, 832.0124f, 123.1121f };
							*uParam2 = 343.0453f;
							return;
					}
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -1647.109f, -1045.513f, 71.1557f };
					*uParam2 = 315.9918f;
					return;
				case 1:
					*uParam1 = { -1700.649f, -807.9653f, 101.8737f };
					*uParam2 = 236.2661f;
					return;
				case 2:
					*uParam1 = { -1417.209f, -817.977f, 99.2119f };
					*uParam2 = 130.1669f;
					return;
				case 3:
					*uParam1 = { -1486.81f, -905.7153f, 85.2737f };
					*uParam2 = 82.6837f;
					return;
			}
			break;
	}
}

void func_299(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_878(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_879(iParam0))
	{
		if (func_880(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_530(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_299(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_299(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_530(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_530(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_530(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_530(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_530(iParam5, 129))
	{
		if (func_530(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_530(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_530(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_530(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_879(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_530(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_530(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_300(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_881())
	{
		if (func_882(255))
		{
			if (!func_714(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_47(Global_1894899.f_2) && func_351(Global_1894899.f_2))
		{
			func_883(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_884(16);
			}
		}
		else if (func_47(Global_1894899.f_2) && !func_149(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899.f_7 = 0;
		func_885(16);
		func_886();
		if (bVar0)
		{
			func_885(1);
		}
	}
}

Vector3 func_301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_302(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
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

void func_304(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_305(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 - (Global_1898092.f_1 && iParam0));
}

void func_306(int iParam0)
{
	if (func_594(iParam0))
	{
		if (func_887(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_40.f_9146.f_1 = -1;
			}
			else
			{
				Global_40.f_9146.f_1 = iParam0 + 1;
			}
		}
		else if (func_888(iParam0))
		{
			if (iParam0 == 3)
			{
				Global_40.f_9146.f_2 = -1;
			}
			else
			{
				Global_40.f_9146.f_2 = iParam0 + 1;
			}
		}
	}
	func_889(Global_40.f_9146.f_2);
	func_889(Global_40.f_9146.f_1);
}

bool func_307()
{
	if (func_273())
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
		{
			return true;
		}
	}
	return false;
}

void func_308()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_10))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_10));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_11))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_11));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_12))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_12));
		}
		if (func_890(Global_1392388.f_10[iVar0 /*13*/].f_5))
		{
			func_891(Global_1392388.f_10[iVar0 /*13*/].f_5, 0);
		}
		iVar0++;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388, false))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies");
	}
}

void func_309()
{
	struct<4> Var0;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	bVar5 = false;
	if (Global_40.f_9146.f_3 == -1)
	{
		iVar6 = 0;
		while (iVar6 < 14)
		{
			if (!func_591(iVar6))
			{
				if (func_892(iVar6))
				{
					if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar6 /*13*/].f_12))
					{
						if (func_893(iVar6))
						{
							Global_1392388.f_10[iVar6 /*13*/].f_12 = MAP::BLIP_ADD_FOR_COORDS(-936216634, Global_1392388.f_10[iVar6 /*13*/].f_2);
							MAP::SET_BLIP_SPRITE(Global_1392388.f_10[iVar6 /*13*/].f_12, GET_HASH_KEY("BLIP_AMBIENT_COACH"), true);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392388.f_10[iVar6 /*13*/].f_12, "PROC_BLIP_CRTIP");
						}
					}
					if (func_894(iVar6))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
						{
							bVar5 = true;
							SCRIPTS::REQUEST_SCRIPT("coachrobberies_intro");
							if (SCRIPTS::HAS_SCRIPT_LOADED("coachrobberies_intro"))
							{
								Var0.f_2 = Global_1392388.f_10[iVar6 /*13*/].f_12;
								Var0 = iVar6;
								Var0.f_3 = 0;
								Var0.f_1 = Global_1392388.f_10[iVar6 /*13*/];
								Global_1392388 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("coachrobberies_intro", &Var0, 5, 1024);
								SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
							}
						}
					}
				}
			}
			iVar6++;
		}
	}
	else
	{
		iVar7 = Global_40.f_9146.f_3;
		if (func_592(iVar7) || func_895(iVar7))
		{
			if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_12))
			{
				MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_12));
			}
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
			{
				if (BUILTIN::VDIST(Global_36, func_896(iVar7)) < func_897(iVar7))
				{
					if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_10))
					{
						MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_10));
					}
					if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_11))
					{
						MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_11));
					}
				}
			}
			else if (func_592(iVar7))
			{
				if (!func_898(iVar7))
				{
					func_248(Global_1392388.f_10[iVar7 /*13*/].f_8);
				}
			}
			if (iVar7 != 13)
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
				{
					if (func_793(Global_40.f_9146.f_79[iVar7], 1))
					{
						if (func_594(iVar7))
						{
							func_899(iVar7);
						}
						func_900(iVar7, 1);
						func_220("PROC_H_CROB_EXP", 10000, 0, 0, 0, 1);
						func_901();
						if (func_887(iVar7))
						{
							func_902(1024);
						}
						else if (func_888(iVar7))
						{
							func_902(2048);
						}
						return;
					}
				}
			}
		}
	}
	bVar8 = false;
	if ((((Global_40.f_9146.f_3 != -1 || func_273()) || func_903(128, 0)) || !func_904(2, -1)) || func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		bVar8 = true;
	}
	iVar9 = 0;
	while (iVar9 < 7)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar9 /*13*/].f_12))
		{
			if (((bVar8 || (func_47(Global_1392388.f_10[iVar9 /*13*/].f_1) && func_149(Global_1392388.f_10[iVar9 /*13*/].f_1, 33554432))) || (func_586(Global_1392388.f_10[iVar9 /*13*/]) && !func_266(Global_1392388.f_10[iVar9 /*13*/], 0))) || (func_351(Global_1392388.f_10[iVar9 /*13*/].f_1) && func_905(iVar9)))
			{
				MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar9 /*13*/].f_12));
			}
		}
		iVar9++;
	}
	if (!bVar5)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
	}
}

bool func_310()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_154(4) && func_529())
	{
		return false;
	}
	if (func_114(144, 0, 1) || func_362(Global_1935630, 2048))
	{
		return false;
	}
	return true;
}

int func_311(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_644())
	{
		iVar2 = func_644();
	}
	iVar5 = func_906(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_559(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_559(iVar6) == 0)
			{
				return func_907(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_559(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_559(iVar6) == 0)
			{
				return func_907(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_907(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_312(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_127(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_446(iParam0) && !func_246(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_378(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_446(iParam0))
	{
		iParam2 = -1;
	}
	if (func_128(iParam0) == 3 || (func_128(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_378(iParam0))))
	{
		func_908(func_377(iParam0), func_378(iParam0), iParam2);
		if ((!func_127(Global_1572864.f_8) && !func_114(0, 1, 0)) && !func_362(Global_1935630, 32768))
		{
			iVar0 = func_909(iParam0);
			if (iVar0 != -1)
			{
				func_910(0);
			}
			else if (func_377(iParam0) == 8)
			{
				iVar0 = func_911();
				if (iVar0 != -1)
				{
					func_910(0);
				}
			}
		}
	}
	func_247(iParam0, 0);
	if (func_539(0) == iParam0)
	{
		func_746(1);
		func_912(0);
		func_913(1);
	}
	func_914(iParam0, 1);
	func_915(iParam0);
}

int func_313(vector3 vParam0, bool bParam3)
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
		if (!bParam3 || func_314(iVar0))
		{
			fVar3 = func_916(iVar0, vParam0);
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

bool func_314(int iParam0)
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

bool func_315(int iParam0, int iParam1)
{
	if (!func_917(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] && iParam1) != 0;
}

bool func_316(int iParam0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_918(iParam0) && iParam0 != 14)
	{
		return false;
	}
	if (iParam0 != 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (func_919(Global_35, VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), 1) < (fParam2 * fParam2))
			{
				return true;
			}
			*uParam1 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[iParam0 /*373*/].f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (func_920(Global_35, *uParam1, 1) < (fParam2 * fParam2))
		{
			return true;
		}
		if (iParam3 < 0)
		{
			iVar0 = VEHICLE::_0x671A07C9A1CD50A5(*uParam1);
		}
		else
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iParam3);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (func_920(Global_35, iVar0, 1) < (fParam2 * fParam2))
			{
				return true;
			}
		}
		iVar1 = VEHICLE::_0x60B7D1DCC312697D(*uParam1);
		if (iVar1 > 3)
		{
			iVar1 = (iVar1 / 2);
			iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_920(Global_35, iVar2, 1) < (fParam2 * fParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_317()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_921(iVar0);
		iVar0++;
	}
}

Vector3 func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1789f, -81.2f, 56.8f;
		case 1:
			return 777.0469f, 848.3318f, 117.9097f;
		case 2:
			return 1319.072f, -2281.907f, 51.31572f;
		case 3:
			return -415.0638f, 1752.658f, 217.6675f;
		case 4:
			return 1623.045f, -364.0234f, 75.39715f;
		case 5:
			return 2820.866f, 275.3142f, 51.84647f;
		case 6:
			return 2990.484f, 2188.289f, 165.7838f;
		case 7:
			return -1817.371f, 657.6644f, 130.8627f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_319(int iParam0, int iParam1, vector3 vParam2)
{
	Global_1392240.f_1[iParam0 /*18*/] = { vParam2 };
	Global_1392240.f_1[iParam0 /*18*/].f_4 = iParam1;
	Global_1392240.f_1[iParam0 /*18*/].f_13 = func_311(6, iParam0, 2, MISC::GET_HASH_KEY(func_922(iParam0)));
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_923(iParam0) == 0)
		{
			func_924(iParam0, -15, 1, 2, 0);
		}
	}
}

bool func_320(int iParam0, int iParam1)
{
	if (func_114(0, 0, 1) && !func_925(iParam1, 1))
	{
		return false;
	}
	if (!func_926() || func_149(iParam0, 2097152))
	{
		return false;
	}
	return true;
}

void func_321(int iParam0, bool bParam1)
{
	if (!func_927(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		MAP::REMOVE_BLIP(&(Global_1392240.f_1[iParam0 /*18*/].f_5));
	}
	if (bParam1)
	{
		func_928(iParam0);
	}
}

bool func_322(int iParam0)
{
	return func_929(iParam0, 1);
}

bool func_323(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_930(6, 8))
		{
			return false;
		}
	}
	if (!func_370(58))
	{
		return false;
	}
	if (bParam0)
	{
		if (func_930(6, 1))
		{
			if (func_679() && !func_930(6, 8))
			{
				return true;
			}
			else if (!func_679())
			{
				return false;
			}
		}
	}
	return true;
}

void func_324(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		func_931(iParam0);
	}
	func_932(iParam0);
	Global_1392240.f_146 = 0;
	func_933(iParam0, 512);
}

bool func_325(int iParam0)
{
	if (!func_926())
	{
		return false;
	}
	if (!func_927(iParam0))
	{
		return false;
	}
	if (func_587(Global_1392240.f_1[iParam0 /*18*/]))
	{
		return false;
	}
	if (func_930(iParam0, 2))
	{
		func_934(iParam0);
		func_935(iParam0);
		return false;
	}
	if (func_149(Global_1392240.f_1[iParam0 /*18*/].f_4, 2097152))
	{
		return false;
	}
	if (!func_936(iParam0))
	{
		return false;
	}
	if (func_937())
	{
		return false;
	}
	if (!func_602(iParam0, 8))
	{
		if (func_603(iParam0))
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 2:
			if (func_938(2))
			{
				return false;
			}
			break;
		case 4:
			if (!func_929(4, 8192) && func_829(func_318(4), 1) < 20f)
			{
				func_939(4, 8192);
			}
			if (func_940() || (func_930(4, 8) && !func_941()))
			{
				return false;
			}
			break;
		case 6:
			if (!func_323(1, 1))
			{
				return false;
			}
			break;
		case 3:
			if (func_388())
			{
				if (func_930(3, 134217728) && func_942() != 565221344)
				{
					return false;
				}
			}
			else
			{
				if (func_930(3, 16))
				{
					return false;
				}
				if (func_930(3, 134217728))
				{
					return false;
				}
			}
			break;
		case 5:
			if (func_930(3, 16) && !func_388())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_326(int iParam0, bool bParam1)
{
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (func_930(0, 2) || (func_679() && func_930(0, 16)))
			{
				func_943(216214729);
			}
			else
			{
				func_944(216214729);
			}
			func_945(iParam0, 262144);
			break;
		case 2:
			if (func_946(iParam0, 262144))
			{
				return;
			}
			if (func_930(2, 2))
			{
				func_943(-1532653291);
			}
			else
			{
				func_944(-1532653291);
			}
			func_945(iParam0, 262144);
			break;
		case 1:
			if (func_946(iParam0, 262144))
			{
				return;
			}
			func_944(-389510791);
			func_945(iParam0, 262144);
			break;
		case 4:
			if (func_925(iParam0, 512) || bParam1)
			{
				if ((func_940() || func_941()) || bParam1)
				{
					func_944(1401474740);
					func_945(iParam0, 262144);
				}
				else if (((!func_940() && !func_370(95)) && !func_941()) || func_930(4, 8))
				{
					func_943(1401474740);
					func_947(iParam0, 262144);
				}
			}
			else if (func_946(iParam0, 262144))
			{
				func_943(1401474740);
				func_947(iParam0, 262144);
			}
			break;
		case 6:
			if ((func_323(1, 1) && !func_929(6, 16384)) && !func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_944(585407854);
			}
			else
			{
				func_943(585407854);
			}
			break;
		case 5:
			if (func_946(iParam0, 262144))
			{
				return;
			}
			if (func_936(5))
			{
				func_944(-2035177903);
			}
			else
			{
				func_943(-2035177903);
			}
			func_945(iParam0, 262144);
			break;
		case 7:
			if (func_946(iParam0, 262144))
			{
				return;
			}
			if ((func_929(iParam0, 4194304) || func_929(iParam0, 8388608)) || (((func_929(iParam0, 2048) && func_930(7, 16)) && func_679()) && func_929(iParam0, 2097152)))
			{
				func_943(-622475043);
				func_945(iParam0, 262144);
			}
			else
			{
				func_944(-622475043);
				func_945(iParam0, 262144);
			}
			break;
		default:
			if (func_925(iParam0, 512))
			{
				func_945(iParam0, 262144);
			}
			break;
	}
}

void func_327(int iParam0)
{
	if (func_246(Global_1392240.f_1[iParam0 /*18*/].f_13))
	{
		return;
	}
	if (!func_429(Global_1392240.f_1[iParam0 /*18*/].f_13))
	{
		func_247(Global_1392240.f_1[iParam0 /*18*/].f_13, 0);
	}
	func_248(Global_1392240.f_1[iParam0 /*18*/].f_13);
}

void func_328(int iParam0)
{
	if (func_925(iParam0, 1024))
	{
		func_928(iParam0);
		return;
	}
	if (func_602(iParam0, 4))
	{
		return;
	}
	if (!func_929(iParam0, 8))
	{
		func_948(iParam0, 0);
		func_939(iParam0, 8);
	}
	else
	{
		func_948(iParam0, 0);
	}
}

void func_329(int iParam0)
{
	float fVar0;

	if (!func_925(iParam0, 1))
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392240, false))
	{
		return;
	}
	fVar0 = BUILTIN::VDIST(Global_36, Global_1392240.f_1[iParam0 /*18*/]);
	if (fVar0 > 200f)
	{
		return;
	}
	func_949(iParam0);
}

void func_330(int iParam0)
{
	int iVar0;

	if (iParam0 == 2)
	{
		if (func_938(2))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_817(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]))
		{
			if (!func_821(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]))
			{
				func_820(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_331()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_950(iVar0, 0);
		switch (iVar0)
		{
			case 0:
				func_857(0, 1);
				func_951();
				break;
			case 1:
				func_863(0, 1);
				func_952();
				break;
			case 3:
				func_865(0, 1);
				break;
			case 2:
				func_871(0, 1);
				func_944(2077623691);
				func_870(func_867(1), func_868(1), func_869(1), 1, 1, 2f);
				func_953();
				func_954();
				break;
		}
		iVar0++;
	}
}

void func_332(var uParam0, int iParam1, bool bParam2)
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

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_2");
		case 1:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_3");
		case 2:
			return GET_HASH_KEY("PERSCHAR_COMP_HORSE_COMMON_4");
	}
	return 0;
}

void func_334()
{
	int iVar0;

	iVar0 = Global_1359489.f_10;
	if (!func_955(iVar0))
	{
		return;
	}
	switch (Global_40.f_4942[iVar0 /*60*/].f_49)
	{
		case 4:
			if (func_956(func_538(), Global_40.f_4942[iVar0 /*60*/].f_46, 1))
			{
				if (func_957(iVar0, 1, 1))
				{
					WEAPON::_0x899A04AFCC725D04(func_958(iVar0), func_959(iVar0));
				}
				func_960(iVar0, func_113(), 0);
				Global_40.f_4942[iVar0 /*60*/].f_46 = -15;
				Global_40.f_4942[iVar0 /*60*/].f_49 = 0;
			}
			break;
	}
}

bool func_335(bool bParam0, int iParam1)
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
	if (func_530(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_530(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_530(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_336(int iParam0)
{
	return (Global_1359489.f_16 && iParam0) != 0;
}

void func_337(int iParam0)
{
	Global_1359489.f_16 = (Global_1359489.f_16 - (Global_1359489.f_16 && iParam0));
}

void func_338()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_961(&(Global_1359489.f_63[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_962(&(Global_1359489.f_63.f_242[iVar0 /*18*/]), iVar0);
		iVar0++;
	}
}

void func_339(int iParam0)
{
	Global_1359489.f_16 = (Global_1359489.f_16 || iParam0);
}

void func_340(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	char cVar2[64];
	int iVar10;

	bVar0 = MAP::DOES_BLIP_EXIST(Global_1391438.f_308[iParam1]);
	bVar1 = true;
	if (uParam0->f_9 == -589165916)
	{
		bVar1 = false;
	}
	if (func_335(uParam0->f_1, 0))
	{
		if (!(PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_1, uParam0->f_33) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 0)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_1, -1))
		{
			bVar1 = false;
		}
	}
	if (func_273())
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		if (!bVar0 && !Global_1391438.f_311[uParam0->f_12])
		{
			Global_1391438.f_308[iParam1] = MAP::BLIP_ADD_FOR_COORDS(-1337945352, uParam0->f_14);
			MAP::SET_BLIP_SPRITE(Global_1391438.f_308[iParam1], func_963(uParam0->f_8), true);
			StringCopy(&cVar2, MISC::VAR_STRING(2, func_964(uParam0->f_8)), 64);
			StringConCat(&cVar2, " - ", 64);
			StringConCat(&cVar2, MISC::VAR_STRING(2, func_965(*uParam0, 0)), 64);
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1391438.f_308[iParam1], &cVar2);
			iVar10 = func_966(uParam0->f_8);
			if (iVar10 != 0)
			{
				MAP::SET_BLIP_FLASH_TIMER(Global_1391438.f_308[iParam1], iVar10, uParam0->f_9);
			}
			if (func_967(*uParam0) != 0)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1391438.f_308[iParam1], func_967(*uParam0));
			}
		}
		if (Global_1391438.f_311[iParam1])
		{
			MAP::BLIP_ADD_MODIFIER(Global_1391438.f_308[iParam1], 724623647);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1391438.f_308[iParam1], 724623647);
		}
	}
	else if (bVar0)
	{
		MAP::REMOVE_BLIP(&(Global_1391438.f_308[iParam1]));
	}
}

void func_341()
{
	float fVar0;

	if (func_968(524288) || func_443(5000))
	{
		func_462(&(Global_1359489.f_52));
		func_969(524288);
	}
	if (func_968(32768))
	{
		if (!func_456(&(Global_1359489.f_52)))
		{
			Global_1357549.f_1485 = func_970(&(Global_1359489.f_55));
			func_462(&(Global_1359489.f_55));
			func_457(&(Global_1359489.f_52), 0);
		}
		else if (func_114(0, 0, 1) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_971(&(Global_1359489.f_52)))
			{
				func_972(&(Global_1359489.f_52));
			}
		}
		else if (func_971(&(Global_1359489.f_52)))
		{
			func_973(&(Global_1359489.f_52));
		}
		if (func_458(&(Global_1359489.f_52)) > 60f)
		{
			if (func_440(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1))
			{
				func_974(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1, 0);
			}
		}
		fVar0 = func_975(func_439());
		if (func_458(&(Global_1359489.f_52)) > fVar0)
		{
			if (func_458(&(Global_1359489.f_52)) < 1920f)
			{
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 1);
				if (!func_440(GET_HASH_KEY("CSTAG_LOITERING"), 1))
				{
					func_976(GET_HASH_KEY("CSTAG_LOITERING"), GET_HASH_KEY("CSTP_NEXT_VISIT"), -469960592, 4, 1, 1, 0);
				}
			}
			else
			{
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
			}
		}
	}
	else if (func_456(&(Global_1359489.f_52)))
	{
		if (!func_971(&(Global_1359489.f_52)))
		{
			func_972(&(Global_1359489.f_52));
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_977(func_113()), true, 0))
		{
			if (!func_456(&(Global_1359489.f_55)))
			{
				Global_1357549.f_1485 = 0f;
				func_751(&(Global_1359489.f_55));
			}
			if (func_458(&(Global_1359489.f_55)) > 20f)
			{
				func_462(&(Global_1359489.f_52));
				func_978();
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
			}
		}
	}
}

void func_342()
{
	int iVar0;

	if (((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_977(func_113()), true, 0) && !func_273()) && !func_190(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1)) && !LAW::_0xF46108C50A22B029())
	{
		if (!func_456(&(Global_1359489.f_55)))
		{
			func_457(&(Global_1359489.f_55), 0);
			Global_1359489.f_58 = Global_1899515;
			if (func_679())
			{
				func_823(&(Global_1359489.f_58), 0, 0, 0, 5, 0, 0, 0);
			}
			else
			{
				func_823(&(Global_1359489.f_58), 0, 0, 0, 2, 0, 0, 0);
			}
		}
		if (func_679())
		{
			iVar0 = 9000;
		}
		else
		{
			iVar0 = 4500;
		}
		if (func_458(&(Global_1359489.f_55)) > IntToFloat(iVar0) || (Global_1359489.f_58 != -15 && func_979(Global_1359489.f_58)))
		{
			if (!func_440(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), 1))
			{
				func_976(GET_HASH_KEY("CSTAG_PLAYER_AWAY"), GET_HASH_KEY("CSTP_NEXT_VISIT"), -1235532919, -1, 1, 1, 0);
			}
		}
	}
	else if (Global_1359489.f_31 == 0)
	{
		if (Global_1359489.f_32 == 1)
		{
			Global_1359489.f_32 = 0;
		}
		if (func_456(&(Global_1359489.f_55)))
		{
			Global_1357549.f_1485 = func_970(&(Global_1359489.f_55));
			func_462(&(Global_1359489.f_55));
		}
	}
	else
	{
		Global_1359489.f_31 = 4;
		if (func_456(&(Global_1359489.f_55)))
		{
			Global_1357549.f_1485 = func_970(&(Global_1359489.f_55));
			Global_1359489.f_58 = -15;
			func_462(&(Global_1359489.f_55));
		}
	}
}

void func_343()
{
	if (func_336(2))
	{
		if (!func_554())
		{
			func_337(2);
		}
	}
	else if (func_554())
	{
		func_339(2);
		func_980();
	}
}

bool func_344()
{
	if (Global_1945938.f_865 & 2 != 0)
	{
		return false;
	}
	if (Global_16)
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!func_981(255))
		{
			return false;
		}
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return false;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_12)
		{
			return false;
		}
	}
	return true;
}

void func_345()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < Global_1945938)
	{
		fVar1 = 0f;
		vVar2 = { 0f, 0f, 0f };
		if (func_982(iVar0))
		{
			if (func_983(iVar0, &fVar1, &vVar2))
			{
				func_984(iVar0);
			}
		}
		iVar0++;
	}
}

void func_346()
{
	switch (Global_1357549)
	{
		case 0:
			if (func_968(1))
			{
				if ((!Global_1879534 && func_985()) && !STREAMING::IS_LOAD_SCENE_ACTIVE())
				{
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
					func_986();
					func_987();
					func_988(func_439(), 0, 0);
					func_989();
					Global_1357549.f_1 = 0;
					Global_1357549 = 1;
				}
			}
			break;
		case 1:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (Global_1357549.f_1 != func_439())
				{
					func_988(Global_1357549.f_1, 0, 0);
				}
				if (Global_1357549.f_1 == 8)
				{
					Global_1357549 = 2;
				}
				else
				{
					Global_1357549.f_1++;
				}
			}
			break;
		case 2:
			func_969(1);
			Global_1357549.f_1 = -1;
			Global_1357549 = 0;
			break;
	}
	func_990();
}

void func_347()
{
	if (!func_991(func_439()))
	{
		return;
	}
	if (func_992())
	{
		return;
	}
	if (Global_40.f_4283.f_331 == -15)
	{
		func_993(&(Global_40.f_4283.f_331));
	}
	if (func_994(Global_40.f_4283.f_331) && func_979(Global_40.f_4283.f_331))
	{
		func_995();
		func_993(&(Global_40.f_4283.f_331));
	}
}

void func_348()
{
	if (Global_40.f_4283.f_329 == -15)
	{
		func_996(&(Global_40.f_4283.f_329));
	}
	if (func_994(Global_40.f_4283.f_329) && func_979(Global_40.f_4283.f_329))
	{
		func_997();
		func_996(&(Global_40.f_4283.f_329));
	}
}

void func_349()
{
	bool bVar0;

	if (!func_998(456315479))
	{
		bVar0 = true;
		if (!func_998(1486898918))
		{
			if (func_999(12, 0) > 1)
			{
				func_1000(1486898918);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_998(1500419820))
		{
			if (func_999(3, 0) > 2)
			{
				func_1000(1500419820);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_998(-1642438278))
		{
			if (func_999(4, 0) > 2)
			{
				func_1000(-1642438278);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_998(-1784068921))
		{
			if (func_1001())
			{
				func_1000(-1784068921);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_1000(456315479);
		}
	}
}

void func_350()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1327490.f_89.f_1, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1327490.f_89.f_1, 1);
		Global_1327490.f_89.f_1 = 0;
	}
}

bool func_351(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_149(iParam0, 8);
}

bool func_352(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 6);
}

bool func_353(int iParam0)
{
	Global_1327490.f_89 = iParam0;
	func_1002(iParam0, 1);
	return true;
}

int func_354()
{
	vector3 vVar0;
	int iVar6;
	int iVar7;

	vVar0.f_2 = 3;
	iVar6 = Global_1327490.f_89;
	if (func_352(iVar6))
	{
		switch (Global_1327490[iVar6 /*11*/].f_1)
		{
			case 1:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1327490[iVar6 /*11*/].f_5)))
				{
					SCRIPTS::REQUEST_SCRIPT(&(Global_1327490[iVar6 /*11*/].f_5));
					func_1002(iVar6, 2);
				}
				break;
			case 2:
				if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1327490[iVar6 /*11*/].f_5)))
				{
					vVar0.x = iVar6;
					if (func_1003(iVar6, 128))
					{
						vVar0.f_2[0] = Global_1327490[iVar6 /*11*/].f_10;
					}
					iVar7 = 1024;
					if (func_1004(iVar6, 2))
					{
						Global_1327490.f_89.f_1 = SCRIPTS::START_NEW_SCRIPT(&(Global_1327490[iVar6 /*11*/].f_5), 1024);
					}
					else
					{
						Global_1327490.f_89.f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1327490[iVar6 /*11*/].f_5), &vVar0, 6, iVar7);
					}
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1327490[iVar6 /*11*/].f_5));
					if (iVar6 == Global_1327490.f_91)
					{
						Global_1327490.f_91 = -1;
					}
					func_1002(iVar6, 3);
				}
				break;
			case 3:
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1327490.f_89.f_1, false))
				{
					Global_1327490.f_89 = -1;
					func_1002(iVar6, 0);
				}
				break;
			case 0:
				break;
		}
	}
	return 1;
}

bool func_355()
{
	if (func_1005() + Global_1327490.f_92) > MISC::GET_GAME_TIMER()
	{
		return false;
	}
	else
	{
		Global_1327490.f_92 = 0;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (MISC::GET_GAME_TIMER() < Global_1327490.f_96)
	{
		return false;
	}
	return true;
}

void func_356()
{
	int iVar0;

	if (!func_1006())
	{
		return;
	}
	iVar0 = func_1007();
	if (!func_352(iVar0))
	{
		return;
	}
	if (!func_353(iVar0))
	{
		return;
	}
}

bool func_357()
{
	if (!func_1008(1))
	{
		return false;
	}
	if (Global_1425351.f_18 != func_46())
	{
		func_359();
		Global_1425351.f_18 = -1;
		return false;
	}
	return true;
}

void func_358()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	bVar0 = false;
	iVar1 = func_1009();
	if (iVar1 == 0)
	{
		return;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
		if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
		{
			Global_1425351.f_19 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar2, 10, 1024);
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
	}
}

void func_359()
{
	Global_1425351.f_17 = 0;
}

void func_360()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];

	if (Global_1914296.f_21 == 0)
	{
		return;
	}
	if (Global_1935689.f_1 || Global_1914319.f_17369)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_1914296[iVar1 /*5*/] != 0)
		{
			iVar2 = func_1010(Global_1914296[iVar1 /*5*/]);
			if (Global_1914296[iVar1 /*5*/].f_1 > 0)
			{
				if (Global_1914296[iVar1 /*5*/].f_1 > 1)
				{
					func_1011(MISC::VAR_STRING(2, "ITEM_GET_MULT", iVar2, Global_1914296[iVar1 /*5*/].f_1), -2, 0, 0, 0, 1);
				}
				else
				{
					func_1011(MISC::VAR_STRING(10, "ITEM_GET", MISC::VAR_STRING(0, iVar2)), -2, 0, 0, 0, 1);
				}
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("ITEM_TICKER_GENERIC", "HUD_REWARD_SOUNDSET", true, 0);
					bVar0 = true;
				}
			}
			else
			{
				if (Global_1914296[iVar1 /*5*/].f_3)
				{
					StringCopy(&cVar3, "ITEM_SELL", 32);
				}
				else if (Global_1914296[iVar1 /*5*/].f_4)
				{
					StringCopy(&cVar3, "ITEM_GIVEN", 32);
				}
				else if (func_1012(Global_1914296[iVar1 /*5*/], 2097152))
				{
					StringCopy(&cVar3, func_1013(Global_1914296[iVar1 /*5*/].f_2, "ITEM_READ", "ITEM_LOST"), 32);
				}
				else
				{
					StringCopy(&cVar3, func_1013(Global_1914296[iVar1 /*5*/].f_2, "ITEM_USED", "ITEM_LOST"), 32);
				}
				if (Global_1914296[iVar1 /*5*/].f_1 < -1)
				{
					StringConCat(&cVar3, "_MULT", 32);
					func_1011(MISC::VAR_STRING(10, &cVar3, MISC::VAR_STRING(0, iVar2), MISC::ABSI(Global_1914296[iVar1 /*5*/].f_1)), -2, 0, 0, 0, 1);
				}
				else
				{
					func_1011(MISC::VAR_STRING(10, &cVar3, MISC::VAR_STRING(0, iVar2)), -2, 0, 0, 0, 1);
				}
			}
			Global_1914296[iVar1 /*5*/] = 0;
			Global_1914296[iVar1 /*5*/].f_1 = 0;
			Global_1914296[iVar1 /*5*/].f_2 = 0;
			Global_1914296.f_21 = (Global_1914296.f_21 - 1);
			return;
		}
		iVar1++;
	}
}

void func_361()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_112() != -1)
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
	if (!func_38(64))
	{
		return;
	}
	else if (func_362(Global_1935630, 131072))
	{
		return;
	}
	else if ((func_114(0, 0, 1) || func_438()) || func_119())
	{
		return;
	}
	iVar0 = func_911();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1014(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_1015(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_1015(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), GET_HASH_KEY("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1016(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_505(0, -1);
	}
	if (iVar2 > 0)
	{
		func_220("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1017(1, 0);
	Global_1956575.f_4 = 1;
}

bool func_362(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_363(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_364(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_1018(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_365(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_366(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_375(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_367()
{
	int iVar0;

	if (func_530(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_368(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1019(iVar0);
		if (func_530(func_1020(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_370(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	return func_447(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_371(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_372(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 += 6;
	iVar0 = func_1021(GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_1021(GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_1021(GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*uParam0 = (*uParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_373(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_1022(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1023(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_375(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

var func_376(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

int func_377(int iParam0)
{
	if (!func_127(iParam0))
	{
		return 0;
	}
	return func_1024(func_559(iParam0));
}

int func_378(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_379()
{
	func_1025(0, 4);
	func_1025(2, 3);
	func_1025(3, 2);
	func_1025(1, 2);
}

void func_380()
{
	var uVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;

	if (Global_1393237.f_208)
	{
		if ((Global_1935630.f_12 || func_114(0, 0, 1)) || func_203(1))
		{
			Global_1393237.f_208 = !Global_1393237.f_208;
			return;
		}
		iVar1 = func_1026(func_479(), &(Global_1393237.f_205));
		if (func_1027(iVar1) > 0)
		{
			func_1028(iVar1, &uVar0);
			if (Global_1393237.f_204 >= func_1027(iVar1))
			{
				Global_1393237.f_204 = 0;
				Global_1393237.f_205++;
			}
			Stack.Push(Global_1393237.f_204);
			Call_Loc(uVar0);
			vVar3 = { StackVal, StackVal, StackVal };
			if ((func_1029(iVar1, Global_1393237.f_204) && !func_1030(vVar3)) && !func_1031(vVar3))
			{
				fVar6 = func_1032(Global_36, vVar3);
				if (fVar6 > 562500f && fVar6 < 2250000f)
				{
					bVar2 = false;
					iVar7 = func_1033(vVar3, &bVar2, 0);
					if (bVar2)
					{
						if (func_795(8192))
						{
							iVar8 = (2 - 1);
						}
						else
						{
							iVar8 = 2;
						}
						if (iVar7 != -1 && iVar7 < iVar8)
						{
							if (func_1034(0, vVar3, -1, -1))
							{
								if ((func_1035(vVar3, Global_35) && !func_1036(vVar3, 0, 0, 0)) && !func_1037(vVar3))
								{
									func_1038(iVar7, 128, 0);
									Global_1393237.f_11[iVar7 /*30*/].f_3 = { vVar3 };
									Global_1393237.f_11[iVar7 /*30*/].f_2 = 1;
									Global_1393237.f_11[iVar7 /*30*/].f_11 = -10;
									iVar9 = func_538();
									func_1039(&iVar9, 0, 0, 20, 0, 0, 0);
									Global_1393237.f_11[iVar7 /*30*/] = iVar9;
									Global_1393237.f_11[iVar7 /*30*/].f_1 = MISC::GET_GAME_TIMER();
									func_1040(vVar3);
									Global_1393237.f_11[iVar7 /*30*/].f_21 = func_827(vVar3, func_1041(vVar3, -1), "DIST_CAMP", 1, 0, 1, 0, -1082130432 /* Float: -1f */);
								}
							}
						}
					}
				}
			}
		}
		Global_1393237.f_204++;
	}
	else
	{
		func_1042();
		iVar10 = Global_1393237.f_206;
		bVar11 = false;
		bVar12 = false;
		if (func_1043(iVar10))
		{
			if (!func_1044(iVar10, 65536))
			{
				bVar12 = true;
			}
			bVar11 = true;
		}
		if (bVar11)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar10 /*30*/].f_22))
			{
				func_1045(iVar10);
			}
		}
		else
		{
			func_1046(iVar10);
		}
		if (bVar12)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar10 /*30*/].f_23))
			{
				func_1047(iVar10);
			}
		}
		else
		{
			func_1048(iVar10);
		}
		Global_1393237.f_206++;
		if (Global_1393237.f_206 > 5)
		{
			Global_1393237.f_206 = 0;
		}
	}
	Global_1393237.f_208 = !Global_1393237.f_208;
}

void func_381()
{
	if (Global_1357522.f_10[0] || Global_1357522.f_10[1])
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED("CAMP"))
		{
			HUD::TEXT_BLOCK_REQUEST("CAMP");
		}
		Global_1357522.f_26 = (MISC::GET_GAME_TIMER() - Global_1357522.f_25);
	}
	if (Global_1357522.f_10[0])
	{
		func_1049(0);
	}
	else
	{
		func_1050(0);
		func_1051(0);
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[0]));
	}
	if (Global_1357522.f_10[1])
	{
		func_1049(1);
	}
	else
	{
		func_1050(1);
		func_1051(1);
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[1]));
	}
	if (((func_114(0, 1, 1) && !func_1052(1)) || Global_1357522.f_26 >= 300000) || func_226(Global_1396257[25 /*638*/].f_626, 32768))
	{
		Global_1357522.f_10[0] = 0;
		Global_1357522.f_10[1] = 0;
		if (!(func_114(0, 1, 1) && !func_1052(1)))
		{
			if (Global_1357522.f_10[0])
			{
				func_220("CAMP_FIRE_FULL_OUT", 10000, 0, 0, 0, 1);
			}
			if (Global_1357522.f_10[1])
			{
				func_220("CAMP_FIRE_OUT", 10000, 0, 0, 0, 1);
			}
		}
	}
}

bool func_382(int iParam0)
{
	return func_1053(&Global_1425247, iParam0, 2);
}

void func_383()
{
	if (!func_382(25))
	{
		return;
	}
	func_386(25);
}

bool func_384()
{
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_35) || func_1054(Global_35, 0)) || (func_684(Global_35) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (PED::IS_PED_USING_SCENARIO_HASH(Global_35, GET_HASH_KEY("PROP_PLAYER_SLEEP_BED")) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || !func_394())
	{
		return true;
	}
	return false;
}

void func_385(bool bParam0)
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
	func_1055(0f);
	Global_1935436.f_11 = 1;
	if (func_388())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_1056();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_386(int iParam0)
{
	if (func_1057(iParam0))
	{
		func_1058(13);
		return;
	}
	func_1059(iParam0);
	func_1060(iParam0, 5);
}

void func_387()
{
	Global_1935436.f_4 = (MISC::GET_GAME_TIMER() + 90000);
}

bool func_388()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_389(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = 1;
	*uParam0 = 0;
	*uParam1 = 1;
	if (func_1061(0))
	{
		iVar0 = 0;
	}
	if (!bParam2)
	{
		if (func_1062())
		{
			iVar0 = 0;
		}
	}
	if ((func_273() || func_759()) || func_1063(&Global_1393447, 16))
	{
		*uParam0 = 1;
		*uParam1 = 0;
		iVar0 = 0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!bParam2)
		{
			if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
			{
				Global_1935630.f_55 = MISC::GET_GAME_TIMER();
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (TASK::IS_PED_SPRINTING(iVar1) || func_1064(iVar1))
			{
				iVar0 = 0;
			}
		}
		if (PED::IS_PED_FALLING(iVar1))
		{
			iVar0 = 0;
			*uParam0 = 1;
			*uParam1 = 0;
		}
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		iVar0 = 0;
		*uParam0 = 1;
		*uParam1 = 0;
	}
	if (!bParam2)
	{
		if (Global_1935630.f_55 + 30000 > MISC::GET_GAME_TIMER())
		{
			iVar0 = 0;
		}
	}
	if (func_557(1) > 0)
	{
		iVar0 = 0;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &uVar2, true, true))
	{
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (!bParam2)
	{
		if (!func_1065(func_607()))
		{
			iVar0 = 0;
		}
		if (func_795(128))
		{
			iVar0 = 0;
		}
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		*uParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (Global_1935630.f_28 + 30000 > MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (PED::_0x285D36C5C72B0569(Global_35) + 30000f) > IntToFloat(MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (bParam2)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		{
			*uParam0 = 1;
			iVar0 = 0;
			*uParam1 = 1;
		}
	}
	if (!bParam2)
	{
		if (func_46() != -1)
		{
			if (func_1066(func_46()))
			{
				*uParam0 = 1;
			}
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_390(bool bParam0, bool bParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
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
		if (func_657())
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
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_1067(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_1068(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_751(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_1069(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = bParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_750(func_1070(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_391(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

void func_392(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_393()
{
	float fVar0;

	fVar0 = ((Global_1935436.f_12.f_1 * 200f) - 100f);
	func_1055(fVar0);
	if (!Global_1935436.f_12.f_4)
	{
		if (Global_1935436 == 2)
		{
			Global_1935436.f_12.f_4 = 1;
			if (func_388())
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR_WASTED");
			}
			else
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER_WASTED");
			}
		}
	}
	else if (Global_1935436 != 2)
	{
		Global_1935436.f_12.f_4 = 0;
		if (func_388())
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
		}
		else
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
		}
	}
}

bool func_394()
{
	if (func_114(0, 0, 1))
	{
		switch (func_541(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return false;
			default:
				break;
		}
		if (func_112() == -1)
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("HOMEINVASION")) > 0)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_395()
{
	if (Global_1935436.f_18.f_1)
	{
		return true;
	}
	if ((Global_1935436.f_8 >= 10f && func_1071()) && func_394())
	{
		func_1072();
		return true;
	}
	return false;
}

void func_396()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_385(1);
		func_1073();
	}
	func_1074();
	switch (Global_1935436.f_18.f_11)
	{
		case 0:
			func_1075(1);
			Global_1935436.f_18.f_4 = 0;
			break;
		case 1:
			if (!Global_1935436.f_18.f_4)
			{
				STREAMING::REQUEST_ANIM_DICT(func_1076());
				Global_1935436.f_18.f_4 = 1;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_1076()))
			{
				func_1075(2);
			}
			break;
		case 2:
			GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01_PassOut");
			Global_1935436.f_18.f_7 = MISC::GET_GAME_TIMER();
			func_1075(3);
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_18.f_7 + 3400)
			{
				if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35))
				{
					bVar0 = true;
				}
				if (func_414(Global_35))
				{
					bVar0 = false;
				}
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == GET_HASH_KEY("WORLD_PLAYER_DYNAMIC_KNEEL"))
				{
					bVar0 = false;
				}
				if (bVar0 && !Global_1935436.f_18)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_1076(), func_1077(), 4f, -2f, 5000, 0, 0f, false, 0, false, 0, false);
					Global_1935436.f_18 = 1;
				}
				if (Global_1935436.f_18.f_4)
				{
					STREAMING::REMOVE_ANIM_DICT(func_1076());
					Global_1935436.f_18.f_4 = 0;
				}
				func_1075(4);
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_18.f_7 + 5500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1935436.f_18.f_6, true, false))
				{
					bVar4 = func_992();
					iVar1 = func_538();
					func_823(&iVar1, 0, 0, 8, 0, 0, 0, 0);
					func_1078(iVar1);
					if (bVar4)
					{
						func_1079(1, 0, 0);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
					Global_1935436.f_18.f_8 = { func_1080(PLAYER::GET_PLAYER_INDEX()) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_1935436.f_18.f_8, &uVar2, false))
					{
						Global_1935436.f_18.f_8 = { Global_1935436.f_18.f_8, Global_1935436.f_18.f_8.f_1, uVar2 };
					}
					Global_1935436.f_18.f_2 = 0;
					Global_1935436.f_18.f_5 = 0;
					func_1075(5);
				}
			}
			break;
		case 5:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (Global_43891)
			{
				Global_1935436.f_18.f_12.f_3 = { 1421.257f, -7328.976f, 80.5118f };
				Global_1935436.f_18.f_12.f_6 = { 0f, 0f, 240f };
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1935436.f_18.f_6, Global_1935436.f_18.f_12.f_3, Global_1935436.f_18.f_12.f_6, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1935436.f_18.f_6, "player_zero", Global_35, 0);
				func_1075(6);
			}
			else if (func_1081(Global_1935436.f_18.f_8, &(Global_1935436.f_18.f_12), &(Global_1935436.f_18.f_2), 1, 1, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -0.01f, 40f, 0))
			{
				if (!func_1082(Global_1935436.f_18.f_8, 1103626240 /* Float: 25f */) && !func_1083(Global_1935436.f_18.f_8, 1103626240 /* Float: 25f */))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1935436.f_18.f_6, Global_1935436.f_18.f_12.f_3, Global_1935436.f_18.f_12.f_6, 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1935436.f_18.f_6, "player_zero", Global_35, 0);
					func_1075(6);
				}
				else
				{
					func_1075(8);
				}
			}
			else if (Global_1935436.f_18.f_2)
			{
				if (Global_1935436.f_18.f_5 < 3)
				{
					Global_1935436.f_18.f_2 = 0;
					Global_1935436.f_18.f_5++;
					func_1084(&(Global_1935436.f_18.f_12), 1, 0);
				}
				else
				{
					func_1075(8);
				}
			}
			break;
		case 6:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1935436.f_18.f_6, false))
			{
				if (!func_190(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
				{
					CAM::DO_SCREEN_FADE_IN(0);
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerWakeUpDrunk");
					func_385(1);
					ANIMSCENE::START_ANIM_SCENE(Global_1935436.f_18.f_6);
					func_1075(7);
				}
				else
				{
					func_385(1);
					func_1073();
					ANIMSCENE::RESET_ANIM_SCENE(Global_1935436.f_18.f_6, 0);
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1935436.f_18.f_6);
					}
					func_1084(&(Global_1935436.f_18.f_12), 1, 0);
					Global_1934266.f_59 = 1;
					func_1085();
					func_1086(2);
				}
			}
			break;
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(Global_1935436.f_18.f_6, false))
			{
				func_1075(8);
			}
			break;
		case 8:
			if (func_992())
			{
				iVar3 = func_1087(func_1080(PLAYER::GET_PLAYER_INDEX()), 15f, -1);
				bVar5 = func_958(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(bVar5) && !ENTITY::IS_ENTITY_DEAD(bVar5))
				{
					func_1070(bVar5, "POST_PASSOUT_COMMENT", GET_HASH_KEY("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
				}
			}
			func_1084(&(Global_1935436.f_18.f_12), 1, 0);
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(3000);
			}
			func_385(1);
			func_1073();
			ANIMSCENE::RESET_ANIM_SCENE(Global_1935436.f_18.f_6, 0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1935436.f_18.f_6);
			}
			break;
	}
}

void func_397(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_405(1, bParam0))
	{
	}
	func_406();
	Global_1934765 = 0;
}

bool func_398()
{
	return false;
}

int func_399(int iParam0)
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

bool func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1088(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_401(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_1089(iParam0))
	{
		return false;
	}
	if (func_112() == -1)
	{
		if (func_114(6206, 1, 1))
		{
			iVar0 = func_539(0);
			iVar1 = func_377(iVar0);
			return false;
		}
		if (bParam1)
		{
			if (func_113() == iParam0)
			{
				return false;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_370(63))
					{
						return false;
					}
					if (func_154(76) || func_679())
					{
						return false;
					}
					break;
				case 125:
					if (!func_1090())
					{
						return false;
					}
					break;
				case 129:
					if (!func_1091())
					{
						return false;
					}
					if (func_903(19, 0))
					{
						return false;
					}
					break;
				case 114:
					if (!func_1091())
					{
						return false;
					}
					if (func_903(20, 0))
					{
						return false;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_112() == 0)
	{
		return false;
	}
	else
	{
		return false;
	}
	if (func_149(iParam0, 256))
	{
		return false;
	}
	if (bParam1)
	{
		iVar2 = func_1092(iParam0);
		if (!func_127(iVar2))
		{
			return false;
		}
		iVar3 = func_1093(iVar2);
		if (func_994(iVar3))
		{
			func_823(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_793(iVar3, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_402(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1094(1497516462);
			func_1095(2016141805);
			func_1095(1010885152);
			func_1095(-502324015);
			break;
		case 2016141805:
			func_1095(1497516462);
			func_1094(2016141805);
			func_1095(1010885152);
			func_1095(-502324015);
			break;
		case 1010885152:
			func_1095(1497516462);
			func_1095(2016141805);
			func_1094(1010885152);
			func_1095(-502324015);
			break;
		case -502324015:
			func_1095(1497516462);
			func_1095(2016141805);
			func_1095(1010885152);
			func_1094(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1095(-538889627);
			func_1095(-538880323);
			func_1095(-1056767524);
			func_1094(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1096();
			func_1094(iParam0);
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
			func_1097();
			func_1094(iParam0);
			break;
		case 2019386373:
			func_1095(-664252410);
			func_1095(2109952320);
			func_1094(2019386373);
			break;
		case -664252410:
			func_1095(2019386373);
			func_1095(2109952320);
			func_1094(-664252410);
			break;
		case 2109952320:
			func_1095(2019386373);
			func_1095(-664252410);
			func_1094(2109952320);
			break;
		case -1674179981:
			func_1095(-1835851517);
			func_1095(-1838352012);
			func_1094(-1674179981);
			break;
		case -1835851517:
			func_1095(-1674179981);
			func_1095(-1838352012);
			func_1094(-1835851517);
			break;
		case -1838352012:
			func_1095(-1674179981);
			func_1095(-1835851517);
			func_1094(-1838352012);
			break;
		case -1717960576:
			func_1095(210001842);
			func_1094(-1717960576);
			break;
		case 210001842:
			func_1095(-1717960576);
			func_1094(210001842);
			break;
		case -150493654:
			func_1095(-1271608261);
			func_1095(1846061697);
			func_1095(-1145519186);
			func_1094(-150493654);
			break;
		case -1271608261:
			func_1095(-150493654);
			func_1095(1846061697);
			func_1095(-1145519186);
			func_1094(-1271608261);
			break;
		case 1846061697:
			func_1095(-150493654);
			func_1095(-1271608261);
			func_1095(-1145519186);
			func_1094(1846061697);
			break;
		case -1145519186:
			func_1095(-150493654);
			func_1095(-1271608261);
			func_1095(1846061697);
			func_1094(-1145519186);
			break;
		case 1766284049:
			func_1095(280705402);
			func_1095(1926308480);
			func_1094(1766284049);
			break;
		case 280705402:
			func_1095(1766284049);
			func_1095(1926308480);
			func_1094(280705402);
			break;
		case 1926308480:
			func_1095(1766284049);
			func_1095(280705402);
			func_1094(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1095(439465264);
				func_1094(1609506757);
			}
			else
			{
				func_1095(1609506757);
				func_1095(439465264);
			}
			break;
		case 439465264:
			if (func_400(1609506757))
			{
				if (bParam1)
				{
					func_1094(439465264);
				}
				else
				{
					func_1095(439465264);
				}
			}
			break;
		case 1822001510:
			func_1095(-1612662716);
			func_1094(1822001510);
			break;
		case -1612662716:
			func_1095(1822001510);
			func_1094(-1612662716);
			break;
		case 1306158345:
			func_1095(1952610440);
			func_1095(-223469678);
			func_1095(-404698347);
			func_1095(1517904467);
			func_1094(1306158345);
			break;
		case 1952610440:
			func_1095(1306158345);
			func_1095(-223469678);
			func_1095(-404698347);
			func_1095(1517904467);
			func_1094(1952610440);
			break;
		case -223469678:
			func_1095(1306158345);
			func_1095(1952610440);
			func_1095(-404698347);
			func_1095(1517904467);
			func_1094(-223469678);
			break;
		case -404698347:
			func_1095(1306158345);
			func_1095(1952610440);
			func_1095(-223469678);
			func_1095(1517904467);
			func_1094(-404698347);
			break;
		case 1517904467:
			func_1095(1306158345);
			func_1095(1952610440);
			func_1095(-223469678);
			func_1095(-404698347);
			func_1094(1517904467);
			break;
		case 1376646519:
			func_1095(931649776);
			func_1095(-434590080);
			func_1095(1743048395);
			func_1095(449774763);
			func_1094(1376646519);
			break;
		case 931649776:
			func_1095(1376646519);
			func_1095(-434590080);
			func_1095(1743048395);
			func_1095(449774763);
			func_1094(931649776);
			break;
		case -434590080:
			func_1095(1376646519);
			func_1095(931649776);
			func_1095(1743048395);
			func_1095(449774763);
			func_1094(-434590080);
			break;
		case 1743048395:
			func_1095(1376646519);
			func_1095(931649776);
			func_1095(-434590080);
			func_1095(449774763);
			func_1094(1743048395);
			break;
		case 449774763:
			func_1095(1376646519);
			func_1095(931649776);
			func_1095(-434590080);
			func_1095(1743048395);
			func_1094(449774763);
			break;
		case -1414537028:
			func_1095(38162571);
			func_1095(1350391819);
			func_1095(54073871);
			func_1094(-1414537028);
			break;
		case 38162571:
			func_1095(-1414537028);
			func_1095(1350391819);
			func_1095(54073871);
			func_1094(38162571);
			break;
		case 1350391819:
			func_1095(-1414537028);
			func_1095(38162571);
			func_1095(54073871);
			func_1094(1350391819);
			break;
		case 54073871:
			func_1095(-1414537028);
			func_1095(38162571);
			func_1095(1350391819);
			func_1094(54073871);
			break;
		case 198200492:
			func_1094(198200492);
			func_1095(-1124061431);
			func_1095(52706132);
			func_1095(-259123672);
			break;
		case -1124061431:
			func_1095(198200492);
			func_1094(-1124061431);
			func_1095(52706132);
			func_1095(-259123672);
			break;
		case 52706132:
			func_1095(198200492);
			func_1095(-1124061431);
			func_1094(52706132);
			func_1095(-259123672);
			break;
		case -259123672:
			func_1095(198200492);
			func_1095(-1124061431);
			func_1095(52706132);
			func_1094(-259123672);
			break;
		case -919512195:
			func_1094(-919512195);
			func_1095(-1925798111);
			func_1095(420709909);
			func_1095(1703426636);
			break;
		case -1925798111:
			func_1094(-1925798111);
			func_1095(-919512195);
			func_1095(420709909);
			func_1095(1703426636);
			break;
		case 420709909:
			func_1094(420709909);
			func_1095(-919512195);
			func_1095(-1925798111);
			func_1095(1703426636);
			break;
		case 1703426636:
			func_1094(1703426636);
			func_1095(-919512195);
			func_1095(-1925798111);
			func_1095(420709909);
			break;
		case -1223121209:
			func_1094(-1223121209);
			func_1095(630808005);
			break;
		case 630808005:
			func_1094(630808005);
			func_1095(-1223121209);
			break;
		case 1453909576:
			func_1094(1453909576);
			func_1095(1643531967);
			break;
		case 1643531967:
			func_1094(1643531967);
			func_1095(1453909576);
			break;
		case 0:
			func_1094(0);
			func_1095(473295046);
			func_1095(-1738165526);
			break;
		case 473295046:
			func_1094(473295046);
			func_1095(0);
			func_1095(-1738165526);
			break;
		case -1738165526:
			func_1094(-1738165526);
			func_1095(0);
			func_1095(473295046);
			break;
		case 932909855:
			func_1094(932909855);
			func_1095(2051822093);
			break;
		case 2051822093:
			func_1094(2051822093);
			func_1095(932909855);
			break;
		case 405586984:
			func_1094(405586984);
			func_1095(1509509592);
			func_1095(-959357075);
			func_1095(-1311865656);
			break;
		case 1509509592:
			func_1094(1509509592);
			func_1095(405586984);
			func_1095(-959357075);
			func_1095(-1311865656);
			break;
		case -959357075:
			func_1094(-959357075);
			func_1095(1509509592);
			func_1095(405586984);
			func_1095(-1311865656);
			break;
		case -1311865656:
			func_1094(-1311865656);
			func_1095(1509509592);
			func_1095(-959357075);
			func_1095(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1094(-524145696);
			}
			else
			{
				func_1095(-524145696);
			}
			func_1095(1626481264);
			func_1095(282809459);
			break;
		case 282809459:
			func_1094(282809459);
			func_1095(1626481264);
			func_1095(-524145696);
			break;
		case 1626481264:
			func_1094(1626481264);
			func_1095(-524145696);
			func_1095(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1094(885203519);
			}
			else
			{
				func_1095(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1094(-1080627546);
			}
			else
			{
				func_1095(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_400(iParam0))
				{
					func_1094(iParam0);
				}
			}
			else if (func_400(iParam0))
			{
				func_1095(iParam0);
			}
			break;
	}
}

void func_403()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1098(iVar0);
		if (iVar1 == -1)
		{
			return;
		}
		if (func_1099(iVar1))
		{
			if (func_1100(iVar1))
			{
				func_1095(iVar1);
				func_1101(iVar0);
			}
		}
		iVar0++;
	}
}

int func_404()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			if (Global_1934765.f_39[iVar0] != Global_40.f_283[iVar0])
			{
				return 1;
			}
		}
		else if (Global_1934765.f_39[iVar0] != Global_1058888.f_40567[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_405(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];

	if (!bParam0)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			return false;
		}
		if (func_1102())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !func_185(32768))
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				return false;
			}
		}
	}
	switch (Global_1934765)
	{
		case 0:
			func_944(666617953);
			func_944(1733948592);
			func_944(1700234797);
			func_944(1305074360);
			func_944(-436566493);
			func_944(-1995815064);
			func_944(-483649675);
			func_944(212587871);
			func_944(GET_HASH_KEY("TAX_SHUTTERS_CLOSED"));
			func_944(1190076410);
			func_944(350100475);
			func_944(2033090463);
			func_944(-688011628);
			func_944(-787042507);
			func_944(1688216398);
			func_944(669655585);
			func_944(-895099271);
			func_944(556610581);
			func_944(GET_HASH_KEY("ARM_05_CHOLERA"));
			if (func_1091())
			{
				func_944(-693659956);
				func_944(GET_HASH_KEY("SPPACK_A1SUP_OBELISK"));
				func_944(-400238535);
				func_944(1416512144);
			}
			func_944(GET_HASH_KEY("SPPACK_A4SUP_AQUADUCT"));
			func_944(-846479900);
			func_944(-866774384);
			if (!Global_1934765.f_288)
			{
				func_813(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			func_1103();
			func_1104();
			func_1105();
			return false;
		case 1:
			func_1106();
			func_1105();
			return false;
		case 2:
			func_1107();
			func_1105();
			return false;
		case 3:
			break;
	}
	if (!func_400(514932331))
	{
		func_944(1892122519);
	}
	if (func_400(-1414537028))
	{
		if (!func_226(Global_1934765.f_20, 1))
		{
			func_1108(5, 1);
			func_1108(7, 1);
			func_1108(6, 1);
			func_1108(1, 1);
			func_1109(&(Global_1934765.f_20), 1);
		}
	}
	else if (func_226(Global_1934765.f_20, 1))
	{
		func_1108(5, 2);
		func_1108(1, 2);
		func_227(&(Global_1934765.f_20), 1);
	}
	if (func_400(269047710))
	{
		func_943(382484708);
		func_944(-910880980);
	}
	else
	{
		func_943(-910880980);
		func_944(382484708);
	}
	if (func_400(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (func_400(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (func_400(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (func_400(-683458244))
	{
		func_1110(203);
		func_813(204);
	}
	else
	{
		func_1110(204);
		func_813(203);
	}
	func_1111(273461605, 79, 2, 4096);
	func_1111(-868076593, 9, 32, 4096);
	func_1111(1205826474, 36, 64, 4096);
	if (func_400(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_0xA657EC9DBC6CC900(GET_HASH_KEY("GUARMA"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = 1;
	}
	else
	{
		if (func_400(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_0xA657EC9DBC6CC900(GET_HASH_KEY("WORLD"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!func_185(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (func_400(-2058120606))
	{
		if (func_112() == -1)
		{
		}
	}
	else if (func_112() == -1)
	{
	}
	if (func_400(311708813))
	{
		func_944(-1786365097);
		func_813(178);
	}
	else
	{
		func_943(-1786365097);
		func_1110(178);
	}
	if (!func_400(1399676951))
	{
		func_943(1934919499);
		func_943(993595204);
		func_943(-515396642);
		func_943(1291083725);
		func_943(GET_HASH_KEY("DES_STR_JAIL"));
		if (func_400(-1524512402))
		{
			func_944(GET_HASH_KEY("DES_STR_JAIL"));
			func_813(193);
		}
		else
		{
			iVar0 = func_1112(func_514(11));
			if (func_530(iVar0, 1))
			{
				func_944(GET_HASH_KEY("DES_STR_JAIL"));
				func_813(193);
			}
			else
			{
				func_1110(193);
				if (func_530(iVar0, 2))
				{
					func_944(1291083725);
				}
				else if (func_530(iVar0, 4))
				{
					func_944(993595204);
				}
			}
		}
	}
	if (func_400(1497516462))
	{
		if (func_112() == -1)
		{
			func_161(68, 16);
			func_1113(557, 32);
			func_1113(563, 32);
			func_1113(560, 32);
			func_1113(561, 32);
			func_1113(562, 32);
			func_1114(565, 32);
			func_1115(565, 0);
			func_1114(564, 32);
			func_1115(564, 0);
			func_1114(554, 32);
			func_1115(554, 0);
			func_1114(555, 32);
			func_1115(555, 0);
			func_1114(556, 32);
			func_1115(556, 0);
		}
		func_1110(199);
		func_813(198);
	}
	else if (func_400(2016141805))
	{
		if (func_112() == -1)
		{
			func_161(68, 16);
			func_1113(557, 32);
			func_1113(563, 32);
			func_1114(560, 32);
			func_1115(560, 0);
			func_1114(561, 32);
			func_1115(561, 0);
			func_1114(562, 32);
			func_1115(562, 0);
			func_1114(554, 32);
			func_1115(554, 0);
			func_1114(555, 32);
			func_1115(555, 0);
			func_1114(556, 32);
			func_1115(556, 0);
			func_1114(565, 32);
			func_1115(565, 0);
			func_1114(564, 32);
			func_1115(564, 0);
		}
		func_1110(199);
		func_1110(198);
	}
	else if (func_400(1010885152))
	{
		if (func_112() == -1)
		{
			func_164(68, 16);
			func_1115(554, 0);
			func_1115(555, 0);
			func_1115(556, 0);
			func_1115(557, 0);
			func_1115(563, 0);
			func_1115(560, 0);
			func_1115(561, 0);
			func_1115(562, 0);
			func_1115(565, 0);
			func_1115(564, 0);
		}
		func_1110(199);
		func_813(198);
	}
	else if (func_400(-502324015))
	{
		if (func_112() == -1)
		{
			func_161(68, 16);
			func_1114(554, 32);
			func_1114(555, 32);
			func_1114(556, 32);
			func_1114(557, 32);
			func_1114(563, 32);
			func_1115(554, 0);
			func_1115(555, 0);
			func_1115(556, 0);
			func_1115(557, 0);
			func_1115(563, 0);
			func_1113(565, 32);
			func_1113(564, 32);
			func_1113(560, 32);
			func_1113(561, 32);
			func_1113(562, 32);
		}
		func_1110(198);
		func_813(199);
	}
	if (func_400(440043364))
	{
		func_943(376665102);
	}
	else
	{
		func_944(376665102);
	}
	if (func_400(-1425209566))
	{
		if (func_112() == -1)
		{
			func_1113(800, 32);
		}
	}
	else if (func_112() == -1)
	{
		func_1114(800, 32);
		func_1115(800, 0);
	}
	func_1116();
	if (func_400(0))
	{
		func_944(1149195254);
		func_944(2016081133);
		func_944(363257921);
		func_944(58066174);
		func_944(-1521525254);
		func_944(-761186147);
		func_944(-1872939092);
		func_944(-964156415);
		func_1117(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_1118(-434746250, 1);
		if (func_400(-699277634))
		{
			func_944(-2137633069);
			func_813(121);
			func_813(123);
			func_813(125);
			if (func_112() == -1)
			{
				func_164(93, 16);
				func_1119(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
			}
		}
		else
		{
			func_944(1944013855);
			func_813(120);
			func_813(122);
			func_813(124);
			func_161(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (func_400(473295046))
	{
		func_944(-1643869063);
		func_944(-1108618313);
		func_944(-787678727);
		func_1117(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_1118(-434746250, 1);
		if (func_400(-699277634))
		{
			func_877("bra_man_burned_bra3");
		}
		else
		{
			func_877("bra_man_burned");
		}
		func_161(93, 16);
		if (func_112() == -1)
		{
			func_1113(621, 32);
			func_1113(622, 32);
			func_1113(623, 32);
			func_1113(624, 32);
			func_1114(909, 32);
			func_1115(909, 0);
			func_1114(910, 32);
			func_1115(910, 0);
			func_1114(911, 32);
			func_1115(911, 0);
			func_1114(912, 32);
			func_1115(912, 0);
			func_1114(913, 32);
			func_1115(913, 0);
			func_1114(914, 32);
			func_1115(914, 0);
			func_1114(617, 32);
			func_1115(617, 0);
			func_1114(618, 32);
			func_1115(618, 0);
			func_1114(619, 32);
			func_1115(619, 0);
			func_1114(620, 32);
			func_1115(620, 0);
			func_1114(915, 32);
			func_1115(915, 0);
			func_1114(916, 32);
			func_1115(916, 0);
			func_1114(917, 32);
			func_1115(917, 0);
			func_1114(625, 32);
			func_1115(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (func_400(-1738165526))
	{
		func_944(-1643869063);
		func_944(622597018);
		func_944(1649275138);
		func_1117(1);
		func_877("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_1120(-434746250, 1);
		func_164(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
		}
	}
	if (!func_400(-270094635))
	{
		func_944(1355914142);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_16, 7);
		}
	}
	else
	{
		func_943(1355914142);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_16);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (func_400(-1666278201))
	{
		func_943(706203603);
		func_944(937192284);
	}
	else
	{
		func_943(937192284);
		func_944(706203603);
	}
	if (func_400(405586984))
	{
		func_943(-1052023588);
		func_943(-745087561);
		func_1121("old_nav_wall_hole");
		func_1121("old_nav_nts3_start");
		func_1121("old_nav_nts3_end");
		func_944(944314155);
		func_877("old_nav_wall_fill");
	}
	else if (func_400(1509509592))
	{
		func_943(-1052023588);
		func_1121("old_nav_wall_fill");
		func_1121("old_nav_wall_hole");
		func_1121("old_nav_nts3_end");
		func_944(944314155);
		func_944(-745087561);
		func_877("old_nav_nts3_start");
	}
	else if (func_400(-959357075))
	{
		func_943(944314155);
		func_1121("old_nav_wall_fill");
		func_1121("old_nav_nts3_start");
		func_1121("old_nav_wall_hole");
		func_944(-1052023588);
		func_944(-745087561);
		func_877("old_nav_nts3_end");
	}
	else if (func_400(-1311865656))
	{
		func_943(944314155);
		func_943(-745087561);
		func_1121("old_nav_wall_fill");
		func_1121("old_nav_nts3_start");
		func_1121("old_nav_nts3_end");
		func_944(-1052023588);
		func_877("old_nav_wall_hole");
	}
	if (func_400(2091701359))
	{
		func_944(GET_HASH_KEY("VAN_02_HORSEBOAT"));
	}
	else
	{
		func_943(GET_HASH_KEY("VAN_02_HORSEBOAT"));
	}
	if (func_400(1376646519))
	{
		func_943(-920505696);
		func_943(281772765);
		func_943(-516683274);
		func_1110(135);
		func_1110(136);
		func_1110(137);
		func_1110(138);
		func_1121("nav_std_bank_start");
		func_1121("nav_std_bank_shootout");
		func_1121("nav_std_bank_dest");
		func_813(134);
		func_944(1017355491);
		func_944(-1004522372);
	}
	else if (func_400(931649776))
	{
		func_943(-920505696);
		func_943(-516683274);
		func_1110(135);
		func_1110(136);
		func_1110(137);
		func_1110(138);
		func_1121("nav_std_bank_shootout");
		func_1121("nav_std_bank_dest");
		func_944(-1004522372);
		func_813(134);
		func_944(1017355491);
		func_944(281772765);
		func_877("nav_std_bank_start");
	}
	else if (func_400(-434590080))
	{
		func_943(-920505696);
		func_943(-516683274);
		func_1110(134);
		func_1110(137);
		func_1121("nav_std_bank_start");
		func_1121("nav_std_bank_dest");
		func_944(-1004522372);
		func_813(135);
		func_813(136);
		func_813(138);
		func_944(1017355491);
		func_944(281772765);
		func_877("nav_std_bank_shootout");
	}
	else if (func_400(1743048395))
	{
		func_943(1017355491);
		func_943(281772765);
		func_943(-1004522372);
		func_1110(134);
		func_1110(135);
		func_813(137);
		func_813(138);
		func_1121("nav_std_bank_start");
		func_1121("nav_std_bank_shootout");
		func_944(-516683274);
		func_944(-920505696);
		func_877("nav_std_bank_dest");
	}
	else if (func_400(449774763))
	{
		func_943(1017355491);
		func_943(-516683274);
		func_943(281772765);
		func_1110(134);
		func_1110(135);
		func_1110(136);
		func_1110(138);
		func_944(-1004522372);
		func_813(137);
	}
	if (func_400(-764163380))
	{
		func_1110(140);
		func_813(139);
	}
	else
	{
		func_1110(139);
		func_813(140);
	}
	if (func_400(-349064220))
	{
		func_944(140744122);
		func_944(-1795618779);
		func_877("hso_post_caravan");
	}
	else
	{
		func_943(140744122);
		func_943(-1795618779);
		func_1121("hso_post_caravan");
	}
	if (func_400(1776302352))
	{
		func_944(1691578074);
		func_944(-1936937394);
		func_877("dewclm_post_caravan");
	}
	else
	{
		func_943(1691578074);
		func_943(-1936937394);
		func_1121("dewclm_post_caravan");
	}
	if (func_400(-523522517))
	{
		func_944(-1130111983);
		func_944(-1015786727);
	}
	else
	{
		func_943(-1130111983);
		func_943(-1015786727);
	}
	if (func_400(1591451572))
	{
		func_944(560821199);
	}
	else
	{
		func_943(560821199);
	}
	if (func_400(1177464213))
	{
		func_943(-313831898);
		func_943(634920011);
		func_944(1694736240);
		func_944(2035758463);
	}
	else
	{
		func_943(1694736240);
		func_943(2035758463);
		func_944(-313831898);
		func_944(634920011);
	}
	func_1122();
	func_1123();
	if (func_400(459290420))
	{
		func_944(474287981);
		func_944(-338553155);
		func_944(-1636879249);
		func_944(205214733);
		func_943(GET_HASH_KEY("WEATHERVOL_CHPT1_SNOWSTORM"));
		func_813(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_1095(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (func_400(1884271742))
	{
		func_944(867231253);
		func_944(-323126593);
		func_944(-1316886711);
		func_944(205214733);
		func_943(GET_HASH_KEY("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_400(-2038424081))
	{
		func_944(867231253);
		func_944(-1670453688);
		func_944(-323126593);
		func_944(-1316886711);
		func_944(205214733);
		func_877("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(753127042))
	{
		func_944(1248111234);
		func_944(-1670453688);
		func_944(-323126593);
		func_944(-1316886711);
		func_944(205214733);
		func_877("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(-1187950766))
	{
		func_944(474287981);
		func_944(-1670453688);
		func_944(-1636879249);
		func_944(-338553155);
		func_813(186);
		func_877("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(356365161))
	{
		func_944(474287981);
		func_944(-1670453688);
		func_944(-338553155);
		func_944(-1636879249);
		func_877("col_nav_wint1_cabin_prefire");
		func_813(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(-939420910))
	{
		func_944(GET_HASH_KEY("WIN1_INTRO_CUTSCENE"));
		func_944(474287981);
		func_944(-717025835);
		func_944(-338553155);
		func_944(-1636879249);
		func_813(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_1095(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (func_400(-1170496998))
	{
		func_944(-1306375743);
		func_944(-743781837);
		func_944(2114706334);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_15, 7);
		}
		func_813(149);
		func_813(150);
		func_813(151);
		func_813(152);
	}
	else
	{
		func_943(-1306375743);
		func_943(-743781837);
		func_943(2114706334);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_15);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_15);
		}
		func_1110(149);
		func_1110(150);
		func_1110(151);
		func_1110(152);
	}
	func_1124();
	if (func_400(2080210939))
	{
		func_944(-1055748784);
	}
	else
	{
		func_943(-1055748784);
	}
	if (func_400(1485195808))
	{
		func_813(147);
		func_1110(148);
	}
	else
	{
		func_1110(147);
		func_813(148);
	}
	if (func_400(-1532284567))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (func_400(2127577956))
	{
		func_944(GET_HASH_KEY("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		func_943(GET_HASH_KEY("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		func_944(GET_HASH_KEY("SHA_EXT_SHUTTERS_NORMAL"));
		func_943(GET_HASH_KEY("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (func_400(-524145696))
	{
		func_944(809554858);
		func_944(1810083187);
		func_943(159921796);
		func_943(-1739900853);
		func_944(2113454609);
		func_944(-520163372);
		func_943(-90228526);
		func_1110(17);
		func_1110(2);
		func_1110(4);
		func_813(1);
		func_813(5);
		func_820(931206119, 1, 0, 0, 0, 0, 0, 0);
		func_820(1783003505, 1, 0, 0, 0, 0, 0, 0);
		func_944(-646014955);
		func_1121("shb_nav_camp_running");
		func_1121("shb_nav_camp_teardown");
		func_943(1265596420);
		func_1121("shb_nav_camp_01");
		func_877("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		func_1121("shb_nav_camp_00");
		func_1121("shb_nav_camp_01");
		func_943(809554858);
		func_943(1265596420);
		func_943(1810083187);
		func_820(931206119, 0, 0, 0, 1, 0, 0, 0);
		func_820(1783003505, 0, 0, 0, 1, 0, 0, 0);
		func_943(-646014955);
		if (func_400(282809459))
		{
			func_1110(5);
			func_1110(17);
			func_1110(1);
			func_1110(2);
			func_813(4);
			func_943(-520163372);
			func_944(-90228526);
			func_944(159921796);
			func_943(-1739900853);
			func_943(2113454609);
		}
		else if (func_400(1626481264))
		{
			func_1110(5);
			func_1110(4);
			func_1110(1);
			func_1110(2);
			func_813(17);
			func_943(-520163372);
			func_944(-90228526);
			func_944(159921796);
			func_944(-1739900853);
			func_943(2113454609);
		}
		else
		{
			func_943(-90228526);
			func_943(159921796);
			func_943(-1739900853);
			func_944(2113454609);
		}
		func_1110(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (func_400(-63926460))
	{
		func_943(1929440211);
		func_943(2126897368);
		func_944(-833857740);
		func_944(-825836321);
		if (func_400(1665756137))
		{
			func_944(-1718055184);
			func_1121("han_nav_endless_summer");
			func_877("han_nav_endless_summer_marston4");
		}
		else
		{
			func_943(-1718055184);
			func_1121("han_nav_endless_summer_marston4");
			func_877("han_nav_endless_summer");
		}
	}
	else
	{
		func_943(-833857740);
		func_943(-825836321);
		func_943(-1718055184);
		func_1121("han_nav_endless_summer");
		func_1121("han_nav_endless_summer_marston4");
		func_944(1929440211);
	}
	if (func_400(374115931))
	{
		func_813(164);
		func_877("bvh_nav_endless_summer");
	}
	else
	{
		func_1110(164);
		func_1121("bvh_nav_endless_summer");
	}
	if (func_400(1982676972))
	{
		func_813(20);
	}
	else
	{
		func_1110(20);
	}
	if (func_400(-2034257789))
	{
		STREAMING::REQUEST_IPL_HASH(GET_HASH_KEY("SIX_POINT_LIGHTS_ON"));
		func_1110(22);
		func_1110(24);
		func_813(21);
		func_813(23);
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(GET_HASH_KEY("SIX_POINT_LIGHTS_ON"));
		func_1110(21);
		func_1110(23);
		func_813(22);
		func_813(24);
	}
	if (func_400(-1014145132))
	{
		func_813(200);
	}
	else
	{
		func_1110(200);
	}
	if (func_400(-1840704908))
	{
		func_813(201);
	}
	else
	{
		func_1110(201);
	}
	if (func_112() == -1)
	{
		if (func_400(-1053549743))
		{
			func_1125(65536, 1);
		}
		else
		{
			func_1125(65536, 0);
		}
	}
	func_1126();
	if (func_400(-2073072369))
	{
		func_944(1343484786);
		func_944(1989074279);
		func_877("sad3_nav_rhodes_shootout_00");
	}
	else if (func_400(-1674179981))
	{
		if (func_400(-1053549743))
		{
			func_944(1871051363);
			func_944(-2144587490);
			func_944(1033721560);
			func_877("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_944(1343484786);
			func_944(-1671953459);
			func_944(1871051363);
			func_944(-2144587490);
			func_877("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_400(-1835851517))
	{
		if (func_400(-1053549743))
		{
			func_944(-2144587490);
			func_944(1033721560);
			func_877("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_944(1343484786);
			func_944(-1671953459);
			func_944(-2144587490);
			func_877("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_400(-1838352012))
	{
		if (func_400(-1053549743))
		{
			func_944(146746575);
			func_944(1033721560);
			func_877("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_944(1343484786);
			func_944(-1671953459);
			func_944(146746575);
			func_877("rho_nav_grave_norm_gry3_off");
		}
	}
	if (func_400(-644722288))
	{
		func_943(1882605165);
		func_944(869642051);
	}
	else
	{
		func_943(869642051);
		func_944(1882605165);
	}
	if (func_400(1691618738))
	{
		func_943(-184821200);
		func_944(-490818122);
		func_944(1412515639);
		func_944(-1377139506);
	}
	else
	{
		func_944(-184821200);
		func_943(-490818122);
		func_943(1412515639);
		func_943(-1377139506);
	}
	if (func_400(-741351766))
	{
		func_1110(130);
		func_813(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		func_1110(131);
		func_813(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (func_400(-1717960576))
	{
		func_1110(133);
		func_813(132);
	}
	else if (func_400(210001842))
	{
		func_1110(132);
		func_813(133);
	}
	if (func_400(-1164215952))
	{
		func_943(1603294144);
		func_944(349486662);
		func_1110(144);
		func_813(143);
	}
	else
	{
		func_943(349486662);
		func_944(1603294144);
		func_1110(143);
		func_813(144);
	}
	if (func_400(-1236261996))
	{
		func_943(897455211);
		func_943(774477221);
		func_944(1136898294);
		func_944(1097534152);
		func_1110(146);
		func_813(145);
	}
	else
	{
		func_943(1136898294);
		func_943(1097534152);
		func_944(897455211);
		func_944(774477221);
		func_1110(145);
		func_813(146);
	}
	if (func_400(-1799960545))
	{
		func_1110(170);
		func_813(169);
	}
	else
	{
		func_1110(169);
		func_813(170);
	}
	if (func_400(-628542779))
	{
		func_813(180);
	}
	else
	{
		func_1110(180);
	}
	if (func_400(1500064347))
	{
		func_944(724436573);
		func_943(-1475403379);
	}
	else
	{
		func_944(-1475403379);
		func_943(724436573);
	}
	if (func_400(-1741667789))
	{
		func_1110(179);
	}
	else
	{
		func_813(179);
	}
	if (func_400(-853383233))
	{
		if (func_112() == -1)
		{
			if (!func_1127(70, 32))
			{
				func_1114(70, 32);
				func_1128(70);
			}
		}
	}
	else if (func_112() == -1)
	{
		if (func_1127(70, 32))
		{
			func_1113(70, 32);
			func_1129(70);
		}
	}
	if (func_400(-334729750))
	{
		func_944(1138093977);
		func_877("wat_nav_grave");
	}
	else
	{
		func_943(1138093977);
		func_1121("wat_nav_grave");
	}
	if (func_400(1926308480))
	{
		func_943(1849913721);
		func_944(573576705);
	}
	else if (func_400(280705402))
	{
		func_944(1849913721);
		func_943(573576705);
	}
	else if (func_400(1766284049))
	{
		func_943(1849913721);
		func_943(573576705);
	}
	if (func_400(-150493654))
	{
		func_943(-848315456);
		func_943(105426297);
		func_943(2095421392);
		func_943(-1614141377);
		func_943(45121961);
		func_943(-7594117);
		func_943(1388161943);
		func_944(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		func_1121("utp2_nav_tree_fallen");
	}
	else if (func_400(-1271608261))
	{
		func_943(-642132908);
		func_943(105426297);
		func_943(-1614141377);
		func_943(45121961);
		func_943(-7594117);
		func_943(1388161943);
		func_944(2095421392);
		func_944(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		func_1121("utp2_nav_tree_fallen");
	}
	else if (func_400(1846061697))
	{
		func_943(-642132908);
		func_943(2095421392);
		func_943(105426297);
		func_943(-7594117);
		func_944(45121961);
		func_944(-1614141377);
		func_944(-848315456);
		func_944(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		func_877("utp2_nav_tree_fallen");
	}
	else if (func_400(-1145519186))
	{
		func_943(-642132908);
		func_943(-848315456);
		func_943(-1614141377);
		func_943(45121961);
		func_943(2095421392);
		func_943(-7594117);
		func_943(1388161943);
		func_944(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		func_1121("utp2_nav_tree_fallen");
	}
	if (!func_153(51))
	{
		if (func_400(1485494263))
		{
			func_943(1672215059);
			func_943(-1177027698);
			func_943(23211744);
			func_943(604668055);
			func_943(GET_HASH_KEY("DES_NTVS2_TREEFALL"));
			func_944(1708195603);
			func_877("nts2_fallen_tree_ridge");
		}
		else
		{
			func_943(23211744);
			func_943(604668055);
			func_943(1708195603);
			func_944(GET_HASH_KEY("DES_NTVS2_TREEFALL"));
			func_944(1672215059);
			func_944(-1177027698);
			func_1121("nts2_fallen_tree_ridge");
		}
	}
	if (func_112() == -1)
	{
		if (func_400(-811637947))
		{
			if (func_1127(497, 32))
			{
				func_1113(497, 32);
				func_1129(497);
			}
			if (func_1127(498, 32))
			{
				func_1113(498, 32);
				func_1129(498);
			}
		}
		else
		{
			if (!func_1127(497, 32))
			{
				func_1114(497, 32);
				func_1128(497);
			}
			if (!func_1127(498, 32))
			{
				func_1114(498, 32);
				func_1128(498);
			}
		}
	}
	if (func_400(106479759))
	{
		func_943(-1403908542);
		func_943(1598834669);
		func_943(1299817544);
		func_943(1204787444);
		func_943(66523468);
		func_943(2040259178);
		func_943(1947806010);
		func_1121("str_nav_construction_stage_0");
		func_1121("str_nav_construction_stage_1");
		func_1121("str_nav_construction_stage_2");
		func_1121("str_nav_construction_stage_3");
		func_944(1924458218);
		func_877("utp1_bridge_cover");
	}
	else
	{
		func_943(1924458218);
		func_1121("utp1_bridge_cover");
		if (func_400(198200492))
		{
			func_943(1299817544);
			func_943(1204787444);
			func_943(66523468);
			func_943(2040259178);
			func_943(1947806010);
			func_1121("str_nav_construction_stage_1");
			func_1121("str_nav_construction_stage_2");
			func_1121("str_nav_construction_stage_3");
			func_944(-1403908542);
			func_944(1598834669);
			func_877("str_nav_construction_stage_0");
			if (func_112() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_400(-1124061431))
		{
			func_943(-1403908542);
			func_943(1598834669);
			func_943(1204787444);
			func_943(66523468);
			func_943(2040259178);
			func_943(1947806010);
			func_1121("str_nav_construction_stage_0");
			func_1121("str_nav_construction_stage_2");
			func_1121("str_nav_construction_stage_3");
			func_944(1299817544);
			func_877("str_nav_construction_stage_1");
			if (func_112() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_400(52706132))
		{
			func_943(-1403908542);
			func_943(1598834669);
			func_943(1299817544);
			func_943(66523468);
			func_943(2040259178);
			func_943(1947806010);
			func_1121("str_nav_construction_stage_0");
			func_1121("str_nav_construction_stage_1");
			func_1121("str_nav_construction_stage_3");
			func_944(1204787444);
			func_877("str_nav_construction_stage_2");
			if (func_112() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_400(-259123672))
		{
			func_943(-1403908542);
			func_943(1598834669);
			func_943(1299817544);
			func_943(1204787444);
			func_1121("str_nav_construction_stage_0");
			func_1121("str_nav_construction_stage_1");
			func_1121("str_nav_construction_stage_2");
			func_944(66523468);
			func_944(2040259178);
			func_944(1947806010);
			func_877("str_nav_construction_stage_3");
			if (func_112() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (func_400(-356975260))
	{
		func_943(73781828);
		func_944(-391567710);
	}
	else
	{
		func_943(-391567710);
		func_944(73781828);
	}
	if (func_400(-2106214197))
	{
	}
	else if (func_400(-1029225159))
	{
	}
	if (func_400(757752139))
	{
		func_1110(168);
	}
	else
	{
		func_813(168);
	}
	if (func_400(1609506757))
	{
		func_944(-205116461);
		func_944(-1490034522);
		func_943(-1473336090);
		func_943(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		func_1110(158);
		if (!func_153(47))
		{
			func_813(159);
		}
		else
		{
			func_1110(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (func_400(439465264))
		{
			func_813(155);
			func_1110(154);
			func_813(157);
			func_1110(156);
		}
		else
		{
			func_813(156);
			func_1130(156);
			func_813(154);
			func_1110(155);
			func_1110(157);
		}
	}
	else
	{
		func_944(-1473336090);
		func_944(-1013403664);
		func_943(-205116461);
		func_943(-1490034522);
		Global_1934765.f_289 = 0;
		func_1110(154);
		func_1110(155);
		func_1110(157);
		func_1110(156);
		func_1110(159);
		func_813(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_1131(-179f), false, 7);
		}
	}
	if (func_400(-2021582629) && func_679())
	{
		func_943(432272547);
		func_944(204868257);
		func_877("nav_sdn_fundraiser");
	}
	else
	{
		func_943(204868257);
		func_944(432272547);
		func_1121("nav_sdn_fundraiser");
	}
	if (func_400(-1232809834))
	{
		func_943(206289712);
		func_944(-1225383143);
	}
	else
	{
		func_943(-1225383143);
		func_944(206289712);
	}
	if (func_400(141950038))
	{
		func_943(-473077489);
		func_944(619024057);
		func_944(-836433697);
		func_1118(586229709, 1);
	}
	else
	{
		func_943(-836433697);
		func_943(619024057);
		func_944(-473077489);
		func_1120(586229709, 1);
	}
	if (func_400(544152906))
	{
		func_943(1821956151);
		func_944(-704461521);
	}
	else
	{
		func_943(-704461521);
		func_944(1821956151);
	}
	if (func_400(26054262))
	{
		func_813(166);
	}
	else
	{
		func_1110(166);
	}
	if (func_400(-503955743))
	{
		func_813(167);
	}
	else
	{
		func_1110(167);
	}
	if (func_400(945612176))
	{
		func_813(161);
		func_813(163);
		func_1110(160);
		func_1110(162);
	}
	else
	{
		func_813(160);
		func_813(162);
		func_1110(161);
		func_1110(163);
	}
	if (func_400(-1706438978))
	{
		func_813(142);
		func_1110(141);
	}
	else
	{
		func_1110(141);
		func_1110(142);
	}
	if (func_400(94263042))
	{
		func_944(-1499162505);
		func_944(GET_HASH_KEY("AMB_CAMP_GRZ_FINALE2"));
		if (func_400(-2106445152))
		{
			func_943(-1832103801);
			func_1110(230);
			func_1121("fin2_micah_hideout");
			func_877("fin2_micah_hideout_abandon");
		}
		else
		{
			func_944(-1832103801);
			func_813(230);
			func_1121("fin2_micah_hideout_abandon");
			func_877("fin2_micah_hideout");
		}
	}
	else
	{
		func_943(-1499162505);
		func_943(GET_HASH_KEY("AMB_CAMP_GRZ_FINALE2"));
		func_943(-1832103801);
		func_1110(230);
		func_1121("fin2_micah_hideout");
		func_1121("fin2_micah_hideout_abandon");
	}
	if (func_400(-25901845))
	{
		func_943(-468702164);
		func_1110(192);
		func_944(-1436188587);
		func_813(191);
	}
	else
	{
		func_943(-1436188587);
		func_1110(191);
		func_944(-468702164);
		func_813(192);
	}
	if (func_400(-75024673))
	{
		func_944(1573766063);
	}
	else
	{
		func_943(1573766063);
	}
	if (func_400(1250636944))
	{
		func_944(-892659042);
	}
	else
	{
		func_943(-892659042);
	}
	if (func_400(-1831552326))
	{
		func_813(194);
		func_1110(195);
	}
	else
	{
		func_813(195);
		func_1110(194);
	}
	if (func_400(-1151084372))
	{
		func_813(196);
	}
	else
	{
		func_1110(196);
	}
	if (func_400(1064154891))
	{
		func_813(19);
		func_1110(18);
	}
	else
	{
		func_813(18);
		func_1110(19);
	}
	if (func_400(1822001510))
	{
	}
	else if (func_400(-1612662716))
	{
	}
	if (func_400(689930684))
	{
		func_813(176);
	}
	else
	{
		func_1110(176);
	}
	if (func_400(-1957523409))
	{
		func_813(177);
	}
	else
	{
		func_1110(177);
	}
	if (func_400(1306158345))
	{
		func_943(943998860);
		func_943(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(580700069);
		func_943(1347068672);
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Part_Fixed");
		func_1121("HKK_Camp_Only");
		func_1132(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(1952610440))
	{
		func_943(943998860);
		func_944(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_944(580700069);
		func_944(1347068672);
		func_1121("HKK_Part_Fixed");
		func_1121("HKK_Camp_Only");
		func_877("HKK_Trashed_Wagons");
		func_1133(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(-223469678))
	{
		func_944(943998860);
		func_944(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(580700069);
		func_943(1347068672);
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Camp_Only");
		func_877("HKK_Part_Fixed");
		func_1133(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(-404698347))
	{
		func_944(943998860);
		func_943(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(580700069);
		func_943(1347068672);
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Part_Fixed");
		func_877("HKK_Camp_Only");
		func_1133(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(1517904467))
	{
		func_943(943998860);
		func_943(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(580700069);
		func_943(1347068672);
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Part_Fixed");
		func_1121("HKK_Camp_Only");
		func_1132(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (func_400(-1405998267))
	{
		func_944(2015532863);
	}
	else
	{
		func_943(2015532863);
	}
	if (func_400(-468693731))
	{
		func_943(-800942395);
		func_944(-741366935);
	}
	else
	{
		func_943(-741366935);
		func_944(-800942395);
	}
	if (func_400(-238080464))
	{
		func_944(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		func_943(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (func_400(1607768502))
	{
		func_944(808576710);
		func_943(-775951892);
		func_943(1547403545);
		func_943(1431947993);
		func_943(137316925);
		func_943(-660075384);
	}
	else if (func_400(-1852605133))
	{
		func_944(1547403545);
		func_943(-775951892);
		func_943(808576710);
		func_943(1431947993);
		func_943(137316925);
		func_943(-660075384);
	}
	else if (func_400(-129643890))
	{
		func_944(-660075384);
		func_943(-775951892);
		func_943(1547403545);
		func_943(808576710);
		func_943(1431947993);
		func_943(137316925);
	}
	else if (func_400(-1433686245))
	{
		func_944(137316925);
		func_943(-775951892);
		func_943(1547403545);
		func_943(808576710);
		func_943(1431947993);
		func_943(-660075384);
	}
	else
	{
		func_944(-775951892);
		func_943(1547403545);
		func_943(808576710);
		func_943(1431947993);
		func_943(137316925);
		func_943(-660075384);
	}
	if (func_400(192515737))
	{
		func_944(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(1879779330);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(426191476))
	{
		func_944(-2142987163);
		func_943(1104143966);
		func_943(1027093524);
		func_943(1879779330);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(187862543))
	{
		func_944(1027093524);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1879779330);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(417081698))
	{
		func_944(1879779330);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(791041526))
	{
		func_944(-1617847332);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(1879779330);
		func_943(317070801);
	}
	else
	{
		func_944(317070801);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(1879779330);
		func_943(-1617847332);
	}
	if (func_663(45))
	{
		if (func_400(-1838712533))
		{
			func_944(-771786794);
			func_943(-1267247536);
			func_943(-468635897);
			func_943(535384482);
			func_943(1088045886);
			func_943(-1678761663);
			func_943(1724413302);
			func_943(-626641013);
		}
		else if (func_400(1140218954))
		{
			func_944(-1267247536);
			func_943(-468635897);
			func_943(-771786794);
			func_943(535384482);
			func_943(1088045886);
			func_943(-1678761663);
			func_943(1724413302);
			func_943(-626641013);
		}
		else
		{
			func_944(-468635897);
			func_943(-771786794);
			func_943(-1267247536);
			func_943(535384482);
			func_943(1088045886);
			func_943(-1678761663);
			func_943(1724413302);
			func_943(-626641013);
		}
	}
	else if (func_400(-1257057567))
	{
		func_944(1088045886);
		func_943(-1678761663);
		func_943(1724413302);
		func_943(-626641013);
		func_943(535384482);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else if (func_400(-1419919497))
	{
		func_944(-1678761663);
		func_943(1724413302);
		func_943(-626641013);
		func_943(535384482);
		func_943(1088045886);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else if (func_400(-1718674470))
	{
		func_944(1724413302);
		func_943(-626641013);
		func_943(535384482);
		func_943(1088045886);
		func_943(-1678761663);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else if (func_400(-35658630))
	{
		func_944(-626641013);
		func_943(535384482);
		func_943(1088045886);
		func_943(-1678761663);
		func_943(1724413302);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else
	{
		func_944(535384482);
		func_943(1088045886);
		func_943(-1678761663);
		func_943(1724413302);
		func_943(-626641013);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	if (func_400(-108307814))
	{
		func_943(-205505701);
		func_944(-51262018);
	}
	else
	{
		func_943(-51262018);
		func_944(-205505701);
	}
	if (func_400(-1123615607))
	{
		func_943(874022542);
		func_943(GET_HASH_KEY("DES_DIS_ALCHEMIST"));
		func_944(552030279);
		func_877("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_943(552030279);
		func_1121("disco_nav_alchemist_house_burnt");
		func_944(874022542);
		func_944(GET_HASH_KEY("DES_DIS_ALCHEMIST"));
	}
	if (func_400(-261141318))
	{
		func_944(-531198053);
	}
	else
	{
		func_943(-531198053);
	}
	func_944(-791673850);
	func_944(-395621323);
	func_944(-1799943886);
	func_944(-1436313374);
	func_944(1473078398);
	func_943(-2116659774);
	func_944(-953275122);
	func_944(-893624314);
	func_944(1193359531);
	func_944(1145227353);
	func_944(1915867459);
	func_944(98482444);
	func_944(26932594);
	func_944(-1930879809);
	func_944(46370274);
	func_944(-1279036865);
	func_944(781058494);
	func_944(1467466015);
	func_944(-363626454);
	func_944(-1314125880);
	func_944(1763246099);
	func_944(-593457329);
	func_944(274045919);
	func_944(-1047394327);
	func_944(-1535282356);
	func_944(-1816233372);
	func_944(-551038153);
	func_944(-1022426685);
	func_944(-262759679);
	func_944(976641588);
	func_944(1601053042);
	func_943(453346329);
	func_944(-1233192626);
	func_943(-620856989);
	func_944(1262164851);
	func_944(-755250900);
	func_1121("disco_nav_circus_wagon_off");
	func_944(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	func_813(202);
	func_813(231);
	if (func_400(1015669983))
	{
		func_943(317070801);
		func_944(-763477089);
	}
	else
	{
		func_943(-763477089);
		func_944(317070801);
	}
	if (func_400(1867912207))
	{
		func_1110(175);
		func_813(174);
	}
	else
	{
		func_1110(174);
		func_813(175);
	}
	if (func_400(-534215902))
	{
		func_1110(197);
	}
	else
	{
		func_813(197);
	}
	if (func_400(-9438024))
	{
		func_1110(173);
		func_813(171);
		func_813(172);
	}
	else
	{
		func_813(173);
		func_1110(171);
		func_1110(172);
	}
	if (func_400(-1223121209))
	{
		func_943(1886602884);
		func_943(-1640200357);
		func_944(-1280884206);
	}
	else if (func_400(630808005))
	{
		func_943(-1280884206);
		func_944(1886602884);
		func_944(-1640200357);
	}
	else
	{
		func_943(-1280884206);
		func_943(-1640200357);
		func_944(1886602884);
	}
	if (func_400(1453909576))
	{
		func_943(-2127665186);
		func_943(-451832572);
		func_943(-689352221);
		func_943(1854980771);
		func_943(325677491);
		func_943(-391187090);
		func_943(1513363974);
		func_943(-1349539327);
		func_943(1963724330);
		func_944(-1902184438);
		func_944(1236921921);
		func_944(740012805);
	}
	else if (func_400(1643531967))
	{
		func_943(-1902184438);
		func_943(-689352221);
		func_943(1236921921);
		func_943(-391187090);
		func_943(740012805);
		func_943(1963724330);
		func_944(-2127665186);
		func_944(-451832572);
		func_944(1854980771);
		func_944(325677491);
		func_944(1513363974);
		func_944(-1349539327);
	}
	else
	{
		func_943(-1902184438);
		func_943(-451832572);
		func_943(1236921921);
		func_943(325677491);
		func_943(740012805);
		func_943(-1349539327);
		func_944(-2127665186);
		func_944(-689352221);
		func_944(1854980771);
		func_944(-391187090);
		func_944(1513363974);
		func_944(1963724330);
	}
	if (func_400(1164928979))
	{
		func_943(-1366431554);
		func_944(-960136064);
	}
	else
	{
		func_943(-960136064);
		func_944(-1366431554);
	}
	if (func_400(527226204))
	{
		func_943(-2122914678);
		func_944(-518004776);
	}
	else
	{
		func_943(-518004776);
		func_944(-2122914678);
	}
	if (func_400(1944170089))
	{
		func_944(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		func_943(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (func_400(1213993593))
	{
		func_944(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		func_943(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (func_400(1216784232))
	{
		func_944(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		func_943(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (func_400(1410198831))
	{
		func_944(GET_HASH_KEY("REG_HRT_HUNTING02"));
		func_1133(GET_HASH_KEY("REG_HRT_HUNTING02"));
	}
	else
	{
		func_943(GET_HASH_KEY("REG_HRT_HUNTING02"));
		func_1132(GET_HASH_KEY("REG_HRT_HUNTING02"));
	}
	if (func_400(-538889627))
	{
		if (func_1134(536870912) == 0)
		{
			func_1135(536870912);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		func_943(1221694281);
		func_943(-1552951782);
		func_943(-1142569437);
		func_943(474113610);
		func_943(-297340751);
		func_943(1802934313);
		func_943(2108112010);
		func_943(1208537422);
		func_943(361734047);
		func_943(446554495);
		func_943(-118700196);
		func_943(-735136865);
		func_943(636278554);
		func_1121("pro_empty_nav");
		func_1121("pro_fence_fixed_nav");
		func_1121("pro_burned_nav");
		func_944(1423681694);
		func_944(775893260);
		func_944(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_944(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_944(1031662866);
		func_944(-1041976064);
		func_944(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_944(-436084091);
		func_944(-868830916);
		func_944(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_944(-262959893);
		func_944(1049886174);
		func_944(-1042390616);
		func_944(2038589758);
		func_877("pro_fence_broken_nav");
		if (func_112() == -1)
		{
			func_161(22, 16);
			func_1136(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_400(-1056767524))
	{
		if (func_1134(536870912) == 0)
		{
			func_1135(536870912);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		func_943(-436084091);
		func_943(-1552951782);
		func_943(-1142569437);
		func_943(474113610);
		func_943(-297340751);
		func_943(1802934313);
		func_943(2108112010);
		func_943(1208537422);
		func_943(361734047);
		func_943(446554495);
		func_943(-118700196);
		func_943(-735136865);
		func_943(636278554);
		func_1121("pro_empty_nav");
		func_1121("pro_fence_broken_nav");
		func_1121("pro_burned_nav");
		func_944(1423681694);
		func_944(775893260);
		func_944(-329355129);
		func_944(2117211184);
		func_944(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_944(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_944(1031662866);
		func_944(-1041976064);
		func_944(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_944(1221694281);
		func_944(-868830916);
		func_944(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_944(-262959893);
		func_944(1049886174);
		func_944(-1042390616);
		func_944(2038589758);
		func_877("pro_fence_fixed_nav");
		if (func_112() == -1)
		{
			func_161(22, 16);
			func_1136(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_400(-182889087))
	{
		if (func_1134(536870912) == 0)
		{
			func_1135(536870912);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		func_943(-436084091);
		func_943(-1552951782);
		func_943(-1142569437);
		func_943(474113610);
		func_943(-297340751);
		func_943(1802934313);
		func_943(2108112010);
		func_943(1208537422);
		func_943(361734047);
		func_943(446554495);
		func_943(-1042390616);
		func_1121("pro_empty_nav");
		func_1121("pro_fence_broken_nav");
		func_1121("pro_fence_fixed_nav");
		func_944(1423681694);
		func_944(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_944(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_944(1031662866);
		func_944(-1041976064);
		func_944(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_944(1221694281);
		func_944(-868830916);
		func_944(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_944(-262959893);
		func_944(1049886174);
		func_944(-118700196);
		func_944(-735136865);
		func_944(636278554);
		func_944(2038589758);
		func_877("pro_burned_nav");
		if (func_112() == -1)
		{
			func_161(22, 16);
			func_1136(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (func_1134(536870912))
		{
			func_1137(536870912);
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"));
		}
		func_943(1423681694);
		func_943(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_943(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_943(1031662866);
		func_943(-1041976064);
		func_943(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_943(1221694281);
		func_943(-436084091);
		func_943(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_943(-262959893);
		func_943(1049886174);
		func_943(-1042390616);
		func_943(-118700196);
		func_943(-735136865);
		func_943(636278554);
		func_943(2038589758);
		func_943(775893260);
		func_1121("pro_fence_broken_nav");
		func_1121("pro_fence_fixed_nav");
		func_1121("pro_burned_nav");
		func_944(-1552951782);
		func_944(-1142569437);
		func_944(474113610);
		func_944(-297340751);
		func_944(-868830916);
		func_944(1802934313);
		func_944(2108112010);
		func_944(1208537422);
		func_944(361734047);
		func_944(446554495);
		func_877("pro_empty_nav");
		if (func_112() == -1)
		{
			func_164(22, 16);
			func_1138(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_0x4C39C95AE5DB1329(Global_1888801[22 /*35*/].f_4, false, 15);
			}
		}
	}
	if (func_400(2019386373))
	{
		func_943(-217646849);
		func_943(-694809996);
		func_943(-2053475031);
		func_944(-279703229);
		func_944(-623091266);
	}
	else if (func_400(-664252410))
	{
		func_943(-279703229);
		func_943(-2053475031);
		func_944(-217646849);
		func_944(-694809996);
		func_944(-623091266);
	}
	else if (func_400(2109952320))
	{
		func_943(-279703229);
		func_943(-217646849);
		func_943(-623091266);
		func_944(-694809996);
		func_944(-2053475031);
	}
	if (func_400(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (func_400(-1077783786))
	{
		func_943(-961488528);
		func_944(-1569624057);
	}
	else
	{
		func_943(-1569624057);
		func_944(-961488528);
	}
	if (func_400(-299522880))
	{
		func_944(131323483);
		func_943(-134556459);
	}
	else
	{
		func_943(131323483);
		func_944(-134556459);
	}
	if (func_663(45))
	{
		func_943(GET_HASH_KEY("WAP_RAINSFALLS_BASE"));
		func_943(661576070);
		func_943(795060201);
		func_943(1003623269);
		func_943(-395621323);
		func_943(-924329535);
		func_944(739805687);
		func_944(-243627670);
		func_944(-198004806);
		func_877("nav_wapiti_es");
	}
	else
	{
		func_943(739805687);
		func_943(-243627670);
		func_943(-198004806);
		func_1121("nav_wapiti_es");
		func_944(1003623269);
		func_944(-924329535);
		func_944(-395621323);
		if (func_400(-389056691))
		{
			func_943(661576070);
			func_944(GET_HASH_KEY("WAP_RAINSFALLS_BASE"));
			func_944(795060201);
		}
		else
		{
			func_943(795060201);
			func_944(GET_HASH_KEY("WAP_RAINSFALLS_BASE"));
			func_944(661576070);
		}
	}
	if (func_400(-1824738758))
	{
		func_944(1489268640);
	}
	else
	{
		func_943(1489268640);
	}
	func_1139();
	if (func_400(1221801385))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_HOUSEBOAT"), 2300f, -330f, 0, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_HOUSEBOAT"));
		Global_1934765.f_297 = 0;
	}
	if (func_400(-306246697))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_VANHORNBOAT"), 3012.5f, 507.5f, 0, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_VANHORNBOAT"));
		Global_1934765.f_298 = 0;
	}
	if (func_400(-1847672446))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_STDENISBOAT"), 2700f, -1600f, 0, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_STDENISBOAT"));
		Global_1934765.f_299 = 0;
	}
	if (!func_400(-789397228))
	{
		func_944(-614421509);
		func_944(604920544);
		func_944(GET_HASH_KEY("SER_01_GRANDKOR3"));
		if (func_400(-2022369555))
		{
			func_944(-1716205818);
			func_943(-276259505);
		}
		else
		{
			func_944(-276259505);
			func_943(-1716205818);
		}
		if (!Global_1934765.f_295 && func_1140(5))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOAT"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		func_943(-614421509);
		func_943(604920544);
		func_943(GET_HASH_KEY("SER_01_GRANDKOR3"));
		func_943(-276259505);
		func_943(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}
	if (func_400(1358491857))
	{
		func_944(1056170594);
		func_944(-873881483);
		func_944(146172383);
		if (func_400(723021499))
		{
			func_944(GET_HASH_KEY("NEW_BOATS_01_GRANDKOR3"));
			func_943(1157695860);
		}
		else
		{
			func_944(1157695860);
			func_943(GET_HASH_KEY("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && func_1140(5))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		func_943(1056170594);
		func_943(-873881483);
		func_943(GET_HASH_KEY("NEW_BOATS_01_GRANDKOR3"));
		func_943(1157695860);
		func_943(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}
	func_1141();
	StringCopy(&cVar1, "nav_sdn_docks_", 64);
	if (func_400(1358491857))
	{
		StringConCat(&cVar1, "korrigan_", 64);
	}
	if (func_400(-1825294305))
	{
		StringConCat(&cVar1, "antenor_", 64);
		func_944(-445068262);
		func_944(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		func_943(-445068262);
		func_943(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (func_400(522677506))
	{
		func_944(1048677741);
		func_944(-2035101386);
		func_944(1284188544);
		func_944(1520435387);
		func_944(876228895);
		StringConCat(&cVar1, "trains_", 64);
	}
	else
	{
		func_943(1048677741);
		func_943(-2035101386);
		func_943(1284188544);
		func_943(1520435387);
		func_943(876228895);
	}
	if (!func_663(45))
	{
		func_943(-274080837);
		func_943(-1036688493);
		func_943(-1512794226);
		func_943(913995529);
		func_944(481139295);
		func_944(165972019);
		func_944(1679182807);
		func_944(-1986089134);
		StringConCat(&cVar1, "pre_es", 64);
	}
	else
	{
		func_943(481139295);
		func_943(165972019);
		func_943(1679182807);
		func_943(-1986089134);
		func_944(-274080837);
		func_944(-1036688493);
		func_944(-1512794226);
		func_944(913995529);
		StringConCat(&cVar1, "es", 64);
	}
	func_877(&cVar1);
	if (func_400(171499483))
	{
		func_943(-890900091);
		func_944(-1758697759);
	}
	else
	{
		func_943(-1758697759);
		func_944(-890900091);
	}
	if (func_400(235928616))
	{
		func_943(GET_HASH_KEY("COM_MULESHED"));
		func_943(1926336063);
		func_943(-800534102);
		func_1121("nav_crn1_barn");
		func_944(-886310806);
		func_877("nav_crn1_barn_burnt");
	}
	else
	{
		func_943(-886310806);
		func_1121("nav_crn1_barn_burnt");
		func_944(GET_HASH_KEY("COM_MULESHED"));
		func_944(1926336063);
		func_944(-800534102);
		func_877("nav_crn1_barn");
	}
	if (func_400(345808947))
	{
		func_1110(190);
		func_813(189);
	}
	else
	{
		func_1110(189);
		func_813(190);
	}
	if (func_400(1167397384))
	{
		func_943(1736386364);
	}
	else
	{
		func_944(1736386364);
	}
	if (func_400(2024769126))
	{
		func_943(516817794);
	}
	else
	{
		func_944(516817794);
	}
	if (func_400(-154581735))
	{
		func_943(-262371610);
	}
	else
	{
		func_944(-262371610);
	}
	if (func_400(-1530132748))
	{
		func_943(-389510791);
	}
	else
	{
		func_944(-389510791);
	}
	if (func_400(976539083))
	{
		func_943(71064384);
	}
	else
	{
		func_944(71064384);
	}
	func_944(579127040);
	func_944(-2011620387);
	if (func_400(409602249))
	{
		func_944(677191274);
	}
	else
	{
		func_943(677191274);
	}
	if (func_400(651395116))
	{
		func_944(GET_HASH_KEY("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		func_943(GET_HASH_KEY("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (func_400(1488286867))
	{
		func_944(516308968);
	}
	else
	{
		func_943(516308968);
	}
	if (func_400(665676602))
	{
		func_944(1308321372);
	}
	else
	{
		func_943(1308321372);
	}
	if (func_400(8924991))
	{
		func_944(-449454773);
	}
	else
	{
		func_943(-449454773);
	}
	if (func_400(932909855))
	{
		func_944(-1754541271);
		func_944(-1363999915);
		func_944(-1116430120);
	}
	else
	{
		func_943(-1754541271);
		func_943(-1363999915);
		func_943(-1116430120);
	}
	if (func_400(2051822093))
	{
		func_944(-163883900);
	}
	else
	{
		func_943(-163883900);
	}
	if (func_400(-1241340344))
	{
		func_944(-1010679388);
	}
	else
	{
		func_943(-1010679388);
	}
	if (func_400(-1558439474))
	{
		func_944(1033367448);
	}
	else
	{
		func_943(1033367448);
	}
	if (func_400(2077022393))
	{
		func_943(391022529);
		func_943(-1560636071);
		func_943(1870870569);
		func_943(-904833761);
		func_943(1713084298);
		func_943(928528900);
		func_944(-2118853492);
		func_944(-597126658);
	}
	else
	{
		func_943(-2118853492);
		func_943(-597126658);
		if (func_400(1583012985))
		{
			func_943(391022529);
			func_943(-1560636071);
			func_944(1713084298);
		}
		else
		{
			func_943(1713084298);
			func_944(391022529);
			func_944(-1560636071);
		}
		if (func_400(479419429))
		{
			func_943(1870870569);
			func_943(-904833761);
			func_944(928528900);
		}
		else
		{
			func_943(928528900);
			func_944(1870870569);
			func_944(-904833761);
		}
	}
	if (func_400(-1556423728))
	{
		func_944(-1023331176);
	}
	else
	{
		func_943(-1023331176);
	}
	if (func_400(-144653976))
	{
		func_944(-1809571159);
	}
	else
	{
		func_943(-1809571159);
	}
	if (func_400(-351362068))
	{
		func_944(-2071756699);
	}
	else
	{
		func_943(-2071756699);
	}
	if (func_400(-939114198))
	{
		func_944(-1625703283);
	}
	else
	{
		func_943(-1625703283);
	}
	if (func_400(-1318987693))
	{
		func_944(-1696865897);
	}
	else
	{
		func_943(-1696865897);
	}
	if (func_400(-545450213))
	{
		func_943(-1950049852);
		func_944(-724913398);
	}
	else
	{
		func_943(-724913398);
		func_944(-1950049852);
	}
	func_1121("railroad_stageMP");
	if (func_400(-2101264851))
	{
		func_944(1858796535);
		func_944(945532872);
		func_944(-2043326480);
		func_944(992791293);
		func_944(-1815023148);
		func_944(731209239);
		func_944(1531008020);
		func_944(-952533419);
		func_944(582879672);
		func_944(1750312025);
		func_944(-759698431);
		func_944(59954835);
		func_944(-1461922204);
		func_944(2079207010);
		func_944(-1360840312);
		func_944(-816857367);
	}
	else
	{
		func_943(1858796535);
		func_943(945532872);
		func_943(-2043326480);
		func_943(992791293);
		func_943(-1815023148);
		func_943(731209239);
		func_943(1531008020);
		func_943(-952533419);
		func_943(582879672);
		func_943(1750312025);
		func_943(-759698431);
		func_943(59954835);
		func_943(-1461922204);
		func_943(2079207010);
		func_943(-1360840312);
		func_943(-816857367);
	}
	if (func_400(434558613))
	{
		func_944(-715865581);
		func_943(-1387511711);
		func_943(1901132483);
		func_943(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_1121("rmllr_cabin_normal");
		func_877("rmllr_cabin_burnt");
	}
	else
	{
		func_944(-1387511711);
		func_944(1901132483);
		func_943(-2082345587);
		func_943(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_1121("rmllr_cabin_burnt");
		func_877("rmllr_cabin_normal");
	}
	if (func_400(1186594126))
	{
		func_944(GET_HASH_KEY("CVB_MURDERTREE"));
	}
	else
	{
		func_943(GET_HASH_KEY("CVB_MURDERTREE"));
	}
	if (func_400(469053995))
	{
		func_944(GET_HASH_KEY("M_07_P_MURDERROCK"));
	}
	else
	{
		func_943(GET_HASH_KEY("M_07_P_MURDERROCK"));
	}
	if (func_400(476714362))
	{
		func_944(GET_HASH_KEY("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		func_943(GET_HASH_KEY("M_09_P_CAMPFIREMURDER"));
	}
	if (func_400(1947931439))
	{
		func_944(1628286919);
		func_943(GET_HASH_KEY("NEW_COM_07_NOHOTEL"));
		func_943(GET_HASH_KEY("NEW_COM_07_WIN"));
	}
	else
	{
		func_944(GET_HASH_KEY("NEW_COM_07_NOHOTEL"));
		func_944(GET_HASH_KEY("NEW_COM_07_WIN"));
		func_943(1628286919);
	}
	if (func_400(-879507474))
	{
		func_943(1928252407);
		func_944(-98843293);
	}
	else
	{
		func_943(-98843293);
		func_944(1928252407);
	}
	if (func_400(1050128548))
	{
		func_944(GET_HASH_KEY("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		func_943(GET_HASH_KEY("RE_SP_SAVAGEWARNING_01"));
	}
	if (func_400(868326136))
	{
		func_944(GET_HASH_KEY("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		func_943(GET_HASH_KEY("RE_SP_SAVAGEWARNING_02"));
	}
	if (func_400(-515561750))
	{
		func_943(-892659042);
		func_943(30201771);
		func_944(517553365);
		func_877("mud4_saloon_fight");
	}
	else if (func_400(26245360))
	{
		func_1121("mud4_saloon_fight");
		func_943(30201771);
		func_944(-2083943324);
		func_944(517553365);
		func_877("mud4_saloon_fight_start");
	}
	else
	{
		func_1121("mud4_saloon_fight_start");
		func_1121("mud4_saloon_fight");
		func_943(517553365);
		func_943(-2083943324);
		func_944(30201771);
	}
	if (func_400(-1060078174))
	{
		if (func_663(45))
		{
			func_943(GET_HASH_KEY("K_11_P_MARY1_CAMP"));
			func_1121("MS_MARY1_CAMP");
			func_944(GET_HASH_KEY("K_11_P_CHELONIAN_CAMP"));
			func_877("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_943(GET_HASH_KEY("K_11_P_CHELONIAN_CAMP"));
			func_1121("MS_CHELONIAN_CAMP");
			func_944(GET_HASH_KEY("K_11_P_MARY1_CAMP"));
			func_877("MS_MARY1_CAMP");
		}
		func_1142(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		func_1142(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		func_1142(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		func_943(GET_HASH_KEY("K_11_P_MARY1_CAMP"));
		func_943(GET_HASH_KEY("K_11_P_CHELONIAN_CAMP"));
		func_1143(&(Global_1934765.f_17), 1);
		func_1143(&(Global_1934765.f_18), 1);
		func_1143(&(Global_1934765.f_19), 1);
	}
	if (func_400(817925178))
	{
		func_944(-1417469821);
	}
	else
	{
		func_943(-1417469821);
	}
	if (func_400(-785605431))
	{
	}
	else
	{
		func_943(146172383);
	}
	if (func_400(1557082963))
	{
		func_943(GET_HASH_KEY("C_13_NOTRAP_01"));
		func_943(765343099);
		func_944(-909306169);
	}
	else if (func_400(-350863510))
	{
		func_943(GET_HASH_KEY("C_13_NOTRAP_01"));
		func_943(-909306169);
		func_944(765343099);
	}
	else
	{
		func_943(765343099);
		func_943(-909306169);
		func_944(GET_HASH_KEY("C_13_NOTRAP_01"));
	}
	if (func_400(-1952856164))
	{
		func_943(-890900091);
		func_943(-1758697759);
		func_944(591001924);
	}
	else if (func_400(249726958))
	{
		func_943(-890900091);
		func_943(591001924);
		func_944(-1758697759);
	}
	else
	{
		func_943(-1758697759);
		func_943(591001924);
		func_944(-890900091);
	}
	if (func_400(-99303535))
	{
		func_943(-2092712551);
		func_944(-1307469679);
	}
	else if (func_400(1433244935))
	{
		func_943(-1307469679);
		func_944(-2092712551);
	}
	else
	{
		func_943(-2092712551);
		func_943(-1307469679);
	}
	func_1144(1512816328, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC01_01"));
	func_1144(1207048789, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC02_01"));
	func_1144(-1230112817, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC03_01"));
	func_1144(-1278074582, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC01_02"));
	func_1144(-1436021162, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC02_02"));
	func_1144(407136781, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC03_02"));
	if (func_400(-978957786))
	{
		func_944(1111220101);
		func_944(1372565859);
		func_944(1644962309);
		if (!Global_1934765.f_296 && func_1140(127))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_THIEVESLANDINGBOAT"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		func_943(1111220101);
		func_943(1372565859);
		func_943(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (func_400(559573222))
	{
		func_943(1137646647);
		func_944(-898081380);
	}
	else
	{
		func_943(-898081380);
		func_944(1137646647);
	}
	if (func_400(-1818850842))
	{
		func_943(1584946069);
	}
	else
	{
		func_944(1584946069);
	}
	if (func_400(-792853067))
	{
		func_943(-1828030290);
		func_944(827269092);
	}
	else
	{
		func_944(-1828030290);
		func_943(827269092);
	}
	if (func_400(1151197909))
	{
		func_813(165);
	}
	else
	{
		func_1110(165);
	}
	if (func_400(-828139293))
	{
		func_943(1364392658);
		func_944(-794503195);
		func_877("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BRIDGEDESTROYED"), 512f, 1756f, 0, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		func_943(-794503195);
		func_944(1364392658);
		func_1121("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (func_400(-464836488))
	{
		func_943(-1192199739);
		func_944(-65072454);
	}
	else
	{
		func_943(-65072454);
		func_944(-1192199739);
	}
	if (func_400(-233743613))
	{
		func_944(1692451176);
	}
	else
	{
		func_943(1692451176);
	}
	if (func_400(1203043430))
	{
		func_944(-102951407);
	}
	else
	{
		func_943(-102951407);
	}
	if (func_400(299694527))
	{
		func_944(1833824812);
	}
	else
	{
		func_943(1833824812);
	}
	if (func_439() == 2)
	{
		if (func_400(-1949204933))
		{
			func_943(1734859244);
			func_944(719147410);
		}
		else
		{
			func_944(1734859244);
			func_943(719147410);
		}
	}
	if (!func_153(4))
	{
		if (func_439() == 1 && func_1145() == 1)
		{
			if (func_400(442317566))
			{
				func_943(1948051928);
				func_944(1453569688);
			}
			else
			{
				func_944(1948051928);
				func_943(1453569688);
			}
		}
		else
		{
			func_943(1453569688);
			func_943(1948051928);
		}
	}
	if (func_400(-736853952))
	{
		func_944(GET_HASH_KEY("MISSION_SEAN_1"));
		func_1133(GET_HASH_KEY("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		func_943(GET_HASH_KEY("MISSION_SEAN_1"));
		func_1132(GET_HASH_KEY("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (func_400(1478132521))
	{
		func_943(1759143160);
		func_944(398639187);
		func_1121("reservation_abandoned");
		func_877("nav_sean1_camp");
	}
	else
	{
		func_943(398639187);
		func_944(1759143160);
	}
	if (func_400(-360036154))
	{
		func_943(1136457806);
		func_944(1255880931);
	}
	else
	{
		func_944(1136457806);
		func_943(1255880931);
	}
	if (func_400(2024383613))
	{
		func_943(-753844687);
		func_944(GET_HASH_KEY("NAT_NATIVE1_COH_02"));
		func_877("ntv1_cohutta");
	}
	else
	{
		func_944(-753844687);
		func_943(GET_HASH_KEY("NAT_NATIVE1_COH_02"));
		func_1121("ntv1_cohutta");
	}
	if (func_400(-622554983))
	{
		func_944(GET_HASH_KEY("NAT_NATIVE1_ARMY_01"));
		func_877("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			func_827(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		func_943(GET_HASH_KEY("NAT_NATIVE1_ARMY_01"));
		func_1121("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			func_891(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (func_400(1954026328))
	{
		func_944(-1835067413);
		func_943(-1392150519);
		func_813(226);
	}
	else
	{
		func_944(-1392150519);
		func_943(-1835067413);
		func_1110(226);
	}
	if (func_400(-330120947))
	{
		func_944(GET_HASH_KEY("SDS_WELL_COVER"));
	}
	else
	{
		func_943(GET_HASH_KEY("SDS_WELL_COVER"));
	}
	if (func_400(-1764522338))
	{
		func_943(GET_HASH_KEY("N_1114_WATERTOWER01_FEUD1"));
		func_944(GET_HASH_KEY("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		func_944(GET_HASH_KEY("N_1114_WATERTOWER01_FEUD1"));
		func_943(GET_HASH_KEY("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (func_400(-76237062))
	{
		func_944(-1085363933);
		func_944(-537740003);
		func_877("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_943(-1085363933);
		func_943(-537740003);
		func_1121("trn1_nav_ann_shootout_00");
	}
	if (func_400(-333135263))
	{
		func_944(728046625);
	}
	else
	{
		func_943(728046625);
	}
	if (func_400(885203519))
	{
		func_813(228);
	}
	else
	{
		func_1110(228);
	}
	if (func_400(-1080627546))
	{
		func_813(227);
	}
	else
	{
		func_1110(227);
	}
	if (func_400(1522511407))
	{
		func_944(-929277449);
		func_944(-723094901);
		func_944(-801609437);
	}
	else
	{
		func_943(-929277449);
		func_943(-723094901);
		func_943(-801609437);
	}
	if (func_400(1446719356))
	{
		func_944(GET_HASH_KEY("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		func_943(GET_HASH_KEY("P_12P_BLACKWHITE_CAMP"));
	}
	if (func_400(171107021))
	{
		func_944(GET_HASH_KEY("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		func_943(GET_HASH_KEY("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

void func_406()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			Global_1934765.f_39[iVar0] = Global_40.f_283[iVar0];
		}
		else
		{
			Global_1934765.f_39[iVar0] = Global_1058888.f_40567[iVar0];
		}
		iVar0++;
	}
}

void func_407()
{
	var uVar0;
	int iVar1;

	if (func_112() != -1)
	{
		return;
	}
	if (((((CAM::IS_SCREEN_FADED_OUT() || Global_1879534.f_1) || Global_1879534) || func_513()) || func_119()) || func_185(128))
	{
		return;
	}
	if (func_1146(8))
	{
		MISC::_0xDD560ABEF5D3784C(&uVar0, &iVar1);
		if (iVar1 == 0)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			func_1147(8);
			if (func_1146(16))
			{
				MISC::SET_RANDOM_WEATHER_TYPE(true, true);
				func_1147(16);
			}
		}
	}
	func_1148();
	func_1149();
	func_1150();
	func_1151();
	func_1152();
	func_1153();
	func_1154();
}

void func_408()
{
	if (func_185(256))
	{
		func_1155(256);
		return;
	}
	if (func_185(128))
	{
		return;
	}
	func_1156(&(Global_1934765.f_402));
	func_1157(&(Global_1934765.f_402));
	func_1158(&(Global_1934765.f_402));
	func_1159();
}

void func_409()
{
	int iVar0;
	bool bVar1;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1934765.f_275[iVar0 /*2*/].f_1 > 0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[iVar0 /*2*/], false))
		{
			Global_1934765.f_286 = (Global_1934765.f_286 + Global_1934765.f_275[iVar0 /*2*/].f_1);
			Global_1934765.f_275[iVar0 /*2*/].f_1 = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (STREAMING::GET_POPULATION_BUDGET_MULTIPLIER() != func_1160())
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		func_1161();
	}
}

void func_410()
{
	Global_1899528.f_202 = 0;
	Global_1899528.f_203 = 0;
}

void func_411(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_412(var uParam0)
{
	int iVar0;

	if (func_112() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		func_1162(uParam0, iVar0);
		iVar0++;
	}
}

bool func_413(int iParam0, bool bParam1)
{
	if (func_1163(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_443(5000))
		{
			return true;
		}
	}
	switch (func_541(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_414(int iParam0)
{
	vector3 vVar0[3];
	vector3 vVar10;
	float fVar13;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return true;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
	{
		return false;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return false;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0f, 0f, 0f) };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - vVar0[2 /*3*/].f_2) > 0.7f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0f, 0f, 0f) };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = func_1164(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0f, 0f, 0f) };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0f, 0f, 0f) };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_1164(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

int func_415(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_416()
{
	func_300(0, 8);
	Global_1899528.f_217 = 0;
}

void func_417(int iParam0)
{
	int iVar0;

	if (Global_1899528.f_213 == 0 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_1165(func_628(iVar0)))
		{
			if (!func_627(iVar0) == -1)
			{
				if (func_633(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
					{
						if (MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], -1186550032))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_213 = 0;
}

void func_418(int iParam0)
{
	int iVar0;

	if (Global_1899528.f_213 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_1165(func_628(iVar0)))
		{
			if (!func_627(iVar0) == -1)
			{
				if (func_633(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
					{
						if (MAP::BLIP_REMOVE_MODIFIER(Global_36308[iVar0], -1186550032))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_213 = 1;
}

bool func_419()
{
	int iVar0;

	if (func_112() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_446(Global_1392915[iVar0 /*12*/].f_4))
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

bool func_420(int iParam0)
{
	int iVar0;

	if (func_112() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_1392915[iVar0 /*12*/].f_1 == iParam0)
			{
				if (func_446(Global_1392915[iVar0 /*12*/].f_4))
				{
					return true;
				}
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

bool func_421(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

int func_422(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_4;
}

int func_423(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_2;
}

bool func_424(int iParam0)
{
	return func_1166(iParam0) == 2;
}

void func_425(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_421(iParam0))
	{
		return;
	}
	if (func_127(Global_1392915[iParam0 /*12*/].f_4))
	{
		func_312(Global_1392915[iParam0 /*12*/].f_4, 1, 2);
	}
	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_1167(iVar0, -1);
}

void func_426(int iParam0)
{
	func_1168(&(Global_1392915[iParam0 /*12*/]));
	func_1169(&(Global_1392915.f_121[iParam0 /*20*/]));
}

int func_427(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_428(int iParam0)
{
	if (!func_578(iParam0))
	{
		return false;
	}
	return (!func_529() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_429(int iParam0)
{
	return func_1166(iParam0) == 0;
}

int func_430(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_431(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		if (func_549(uParam0->f_34[iVar0]))
		{
			func_1170(&(uParam0->f_34[iVar0]), 0);
		}
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

bool func_432(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

bool func_433(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_127(iParam1))
	{
		return true;
	}
	switch (Global_1391438.f_413)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (func_246(Global_1391438.f_7[iVar0 /*99*/].f_10))
				{
					func_312(Global_1391438.f_7[iVar0 /*99*/].f_10, 0, 2);
				}
				iVar0++;
			}
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				SCRIPTS::_0x7DE4643157AD646C(Global_1391438.f_490);
			}
			func_454(uParam0);
			func_1171();
			iVar1 = func_1172(func_585(iParam1), 1);
			func_1173(&uVar2, &(Global_1391438.f_314), iVar1);
			func_1174(uParam0, &(Global_1391438.f_314));
			if (!func_246(uParam0->f_5) && !func_446(uParam0->f_5))
			{
				func_248(uParam0->f_5);
			}
			if (!func_446(uParam0->f_5))
			{
				func_1175(uParam0->f_5, 1, 0);
			}
			uParam0->f_7 = uParam2;
			func_1176(&(uParam0->f_9), 128, 1);
			Global_1391438.f_413 = 1;
			break;
		case 1:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1391438.f_314.f_42)))
			{
				SCRIPTS::REQUEST_SCRIPT(&(Global_1391438.f_314.f_42));
			}
			Global_1391438.f_413 = 2;
			break;
		case 2:
			if (!SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1391438.f_314.f_42)))
			{
				return false;
			}
			else
			{
				Global_1391438.f_413 = 3;
			}
			break;
		case 3:
			Global_1391438.f_490 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(Global_1391438.f_314.f_42)), uParam0, 76, Global_1391438.f_314.f_66);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1391438.f_314.f_42));
			Global_1391438.f_413 = 4;
			break;
		case 4:
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_434(var uParam0, int iParam1, bool bParam2)
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

bool func_435(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<20> Var5;

	switch (Global_1391438.f_492)
	{
		case 0:
			if (func_351(func_113()))
			{
				if (bParam1)
				{
					if (func_1177(0))
					{
						func_437(&(Global_1391438.f_493));
						Global_1391438.f_492 = 1;
					}
				}
				else
				{
					func_437(&(Global_1391438.f_493));
					Global_1391438.f_492 = 1;
				}
			}
			break;
		case 1:
			Var0 = Global_1359489.f_21;
			if (iParam0 == -589165916)
			{
				Global_1391438.f_492 = 6;
				return true;
			}
			Var5.f_11 = 1;
			func_1178(&Var5, iParam0);
			Var0.f_1 = 0;
			func_1173(&Var0, &(Global_1391438.f_493), iParam0);
			if (func_1179(Global_1391438.f_493, 2) == 0)
			{
				func_1180(Global_1391438.f_493, 2, 0, -1);
			}
			func_1180(Global_1391438.f_493, -2147483648, 1, -1);
			Global_1391438.f_493.f_12 = 0;
			Global_1391438.f_493.f_78 = { Var5 };
			Global_1391438.f_493.f_78.f_15 = 1;
			Global_1391438.f_492 = 2;
			break;
		case 2:
			SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58)));
			Global_1391438.f_492 = 3;
		case 3:
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58))))
			{
				Global_1391438.f_492 = 4;
			}
			break;
		case 4:
			if (!func_246(Global_1391438.f_493.f_10) && !func_446(Global_1391438.f_493.f_10))
			{
				func_248(Global_1391438.f_493.f_10);
			}
			Global_1391438.f_592 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58)), &(Global_1391438.f_493), 99, 6003);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1391438.f_493.f_58));
			if (func_432(&(Global_1391438.f_5), 4096))
			{
				Global_1391438.f_492 = 5;
			}
			else
			{
				Global_1391438.f_492 = 6;
			}
			break;
		case 5:
			Global_1359489.f_672 = 1;
			Global_1391438.f_492 = 6;
			break;
		case 6:
			Global_1391438.f_492 = 0;
			return true;
	}
	return false;
}

bool func_436(var uParam0)
{
	struct<76> Var0;

	if (!func_616(&(uParam0->f_31), 512))
	{
		SCRIPTS::REQUEST_SCRIPT(&(uParam0->f_42));
		func_614(&(uParam0->f_31), 512, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_42)))
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_42)))
		{
			return false;
		}
		else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(uParam0->f_42))) > 0)
		{
			SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(uParam0->f_42)));
			return false;
		}
		else
		{
			Var0.f_41 = 1101004800;
			func_1174(&Var0, uParam0);
			Global_1391438.f_490 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(uParam0->f_42)), &Var0, 76, uParam0->f_66);
			Global_1391438.f_414 = { Var0 };
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
	}
	return true;
}

void func_437(int* iParam0)
{
	struct<79> Var0;

	Var0.f_9 = -589165916;
	Var0.f_78.f_11 = 1;
	MISC::_COPY_MEMORY(iParam0, &Var0, 99);
}

bool func_438()
{
	return (func_362(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("RESPAWN_DUMP_BODY")) > 0);
}

int func_439()
{
	return Global_40.f_4283;
}

bool func_440(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1181(iParam0);
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

bool func_441(int iParam0)
{
	return iParam0 != 0;
}

int func_442()
{
	return 0;
}

bool func_443(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2061320468;
		case 2:
			return -709866131;
		case 3:
			return -1348173149;
		default:
			break;
	}
	return -589165916;
}

int func_445(int iParam0, int iParam1)
{
	if (iParam1 == GET_HASH_KEY("HAI_BANK_ROBBERY_01"))
	{
		return func_311(0, func_1182(iParam1, 1), 11, GET_HASH_KEY("CABR01"));
	}
	return func_311(0, func_1182(iParam1, 1), 11, iParam1);
}

bool func_446(int iParam0)
{
	int iVar0;

	iVar0 = func_1166(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_447(int iParam0, bool bParam1)
{
	switch (func_1166(iParam0))
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

Vector3 func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_1183();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 14;
		case 3:
			return 15;
		default:
			break;
	}
	return -1;
}

void func_450(int iParam0, int iParam1)
{
	if (func_1184())
	{
		return;
	}
	if (func_1185())
	{
		return;
	}
	Global_1327590.f_9 = iParam0;
	Global_1327590.f_10.f_11 = iParam1;
	Global_1327590.f_10.f_1 = { func_1186(Global_1327590.f_9) };
	SCRIPTS::REQUEST_SCRIPT(&(Global_1327590.f_10.f_1));
}

bool func_451(int iParam0)
{
	if (Global_1359453 != 8)
	{
		return false;
	}
	return func_1187() == iParam0;
}

bool func_452()
{
	bool bVar0;
	int iVar1;

	if (((func_440(GET_HASH_KEY("CSTAG_FLOW_BRT3_PRE"), 1) && func_439() == 2) || func_440(GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) || func_440(GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		return false;
	}
	switch (func_439())
	{
		case 3:
			if (!func_154(28))
			{
				return false;
			}
			break;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_592, false))
	{
		Global_1391438.f_6 = 6;
		return false;
	}
	if (!func_335(Global_35, 0))
	{
		Global_1391438.f_6 = 7;
		return false;
	}
	if (PED::_IS_PED_DRUNK(Global_35))
	{
		Global_1391438.f_6 = 12;
		return false;
	}
	if (func_432(&(Global_1391438.f_5), 32))
	{
		Global_1391438.f_2 = -1;
		func_434(&(Global_1391438.f_5), 32, 0);
		Global_1391438.f_6 = 2;
		return true;
	}
	if (func_114(258, 0, 1))
	{
		Global_1391438.f_6 = 9;
		return false;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar1], false))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		Global_1391438.f_6 = 11;
		return false;
	}
	Global_1391438.f_6 = 1;
	return true;
}

void func_453(int iParam0, int iParam1)
{
	if (func_451(iParam0))
	{
		Global_1359453.f_15 = iParam1;
	}
}

void func_454(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (func_1188(uParam0->f_44))
	{
		func_1189(&(uParam0->f_44), 1, 1);
	}
	if (func_456(&(uParam0->f_45)))
	{
		func_462(&(uParam0->f_45));
	}
}

bool func_455(int* iParam0)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	int iVar19;

	func_1190("Attemping to find a valid activity to launch....", 1, 1);
	iVar11 = 0;
	iVar12 = 0;
	while (iVar12 < Global_40.f_6563.f_273)
	{
		if (func_1191(&(Global_40.f_6563.f_274[iVar12 /*20*/])))
		{
			iVar0[iVar11] = iVar12;
			iVar11++;
		}
		Global_40.f_6563.f_274[iVar12 /*20*/].f_18 = func_1192(&(Global_40.f_6563.f_274[iVar12 /*20*/]));
		iVar12++;
	}
	if (iVar11 <= 0)
	{
		func_1190("--------------------------------------------------------", 1, 1);
		return false;
	}
	iVar13 = iVar0[0];
	func_1190("Found ", 0, 1);
	func_1190(func_1193(iVar11), 1, 0);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (Global_40.f_6563.f_274[iVar0[iVar12] /*20*/].f_18 > Global_40.f_6563.f_274[iVar13 /*20*/].f_18)
		{
			iVar13 = iVar0[iVar12];
		}
		iVar12++;
	}
	func_1173(&uVar14, iParam0, Global_40.f_6563.f_274[iVar13 /*20*/].f_1);
	iParam0->f_78 = { Global_40.f_6563.f_274[iVar13 /*20*/] };
	iParam0->f_13 = iVar13;
	Global_40.f_6563.f_274[iVar13 /*20*/].f_19++;
	iVar19 = func_1194(iParam0->f_8);
	Global_40.f_7039[func_1195(iVar19, 1) /*2*/].f_1 = 1;
	func_1180(Global_40.f_6563.f_274[iVar13 /*20*/].f_2, 2, 0, -1);
	func_1190("Launching ", 0, 1);
	func_1190("--------------------------------------------------------", 1, 1);
	Global_40.f_6563.f_274[iVar13 /*20*/].f_14 = 0;
	return true;
}

bool func_456(var uParam0)
{
	return func_1196(*uParam0, 1);
}

void func_457(var uParam0, bool bParam1)
{
	if (bParam1 || !func_456(uParam0))
	{
		func_751(uParam0);
	}
}

float func_458(var uParam0)
{
	if (!func_456(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_971(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1197() - uParam0->f_1);
}

bool func_459()
{
	if (Global_1391438.f_7[0 /*99*/].f_9 != -589165916 && !(func_246(Global_1391438.f_7[0 /*99*/].f_10) || func_446(Global_1391438.f_7[0 /*99*/].f_10)))
	{
		return false;
	}
	if (Global_1391438.f_7[1 /*99*/].f_9 != -589165916 && !(func_246(Global_1391438.f_7[1 /*99*/].f_10) || func_446(Global_1391438.f_7[1 /*99*/].f_10)))
	{
		return false;
	}
	return true;
}

bool func_460(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_461(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_1199(func_1198(iParam0, func_439()), 6f, 4, 1))
	{
		return false;
	}
	if (func_432(&(Global_1391438.f_5), 2048))
	{
		return false;
	}
	if (func_1200(iParam0) == 0)
	{
		return false;
	}
	iVar0 = func_439();
	if (iVar0 == 3 && !func_154(28))
	{
		return false;
	}
	switch (iVar0)
	{
		case 1:
			if (func_440(GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_440(GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		return false;
	}
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (iVar2 >= 17 && iVar2 < 21)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (func_432(&(Global_1391438.f_5), 256))
			{
				return false;
			}
			if (!func_1201(-1341684320))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 10))
			{
				return false;
			}
			if (func_1202(-1341684320))
			{
				return false;
			}
			break;
		case 1:
			if (func_1203(GET_HASH_KEY("HAI_DOMINOES_01")) == 0 && func_439() == 2)
			{
				return false;
			}
			if (func_432(&(Global_1391438.f_5), 512))
			{
				return false;
			}
			if (func_440(GET_HASH_KEY("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				return false;
			}
			if (!func_1201(-1567081107))
			{
				return false;
			}
			if (!(iVar2 > 6 && iVar2 < 20))
			{
				return false;
			}
			if (func_1202(-1567081107))
			{
				return false;
			}
			break;
		case 2:
			if (!(func_1203(GET_HASH_KEY("HAI_FIVE_FINGER_FILLET_01")) || func_1203(GET_HASH_KEY("HAI_FIVE_FINGER_FILLET_02"))) && func_439() < 2)
			{
				return false;
			}
			if (func_432(&(Global_1391438.f_5), 1024))
			{
				return false;
			}
			if (!func_1201(-1511391406))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 20))
			{
				return false;
			}
			if (func_1202(-1511391406))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_462(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_463()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		iVar0 = func_1204(iVar1);
		if (func_1140(iVar0) && !func_1205(iVar1, iVar0))
		{
		}
		iVar1++;
	}
}

void func_464()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_549(Global_1934051.f_33))
	{
		iVar0 = func_627(Global_1934051.f_33);
		if (iVar0 != func_113())
		{
			func_1207(Global_1934051.f_33, func_1206(iVar0));
			func_1170(&(Global_1934051.f_33), 0);
		}
	}
	if (!func_549(Global_1934051.f_33))
	{
		iVar1 = func_113();
		if (func_47(iVar1))
		{
			vVar2 = { func_448(func_439()) };
			Global_1934051.f_33 = func_158(iVar1, 62, vVar2, -1);
			func_624(Global_1934051.f_33, -1186550032);
			func_624(Global_1934051.f_33, func_1206(iVar1));
		}
	}
}

void func_465()
{
	if (Global_1572887.f_8)
	{
		return;
	}
	if (func_398())
	{
		return;
	}
	func_1208();
	func_1209();
}

void func_466()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	iVar2 = 2;
	Global_1934051.f_110 = 0;
	iVar3 = Global_1934051.f_114;
	while (iVar3 <= (9 - 1))
	{
		if (Global_1934051.f_110 >= iVar2)
		{
		}
		else
		{
			iVar0 = iVar3;
			if (iVar0 == -1)
			{
			}
			else
			{
				iVar1 = func_1210(iVar0);
				if (!func_1140(iVar1))
				{
				}
				else
				{
					vVar4 = { func_1211(iVar0) };
					if (func_587(vVar4))
					{
					}
					else
					{
						if (!func_549(Global_1934051.f_23[iVar3]) && Global_1934051.f_94[iVar3])
						{
							Global_1934051.f_94[iVar3] = 0;
						}
						if (!Global_1934051.f_94[iVar3])
						{
							Global_1934051.f_23[iVar3] = func_158(func_46(), 27, vVar4, -1);
							func_160(Global_1934051.f_23[iVar3], GET_HASH_KEY("BLIP_STYLE_SHOP"));
							func_1212(Global_1934051.f_23[iVar3], GET_HASH_KEY("BLIP_SALOON"));
							func_1213(Global_1934051.f_23[iVar3], iVar1);
							Global_1934051.f_94[iVar3] = 1;
						}
						else
						{
							if (iVar1 == func_46())
							{
							}
							else
							{
								if (!func_1215(iVar1, 1, func_1214(iVar0)))
								{
									func_1207(Global_1934051.f_23[iVar3], 724623647);
								}
								else
								{
									func_624(Global_1934051.f_23[iVar3], 724623647);
								}
								Global_1934051.f_110++;
							}
							iVar3++;
							Global_1934051.f_114 = iVar3;
							if (Global_1934051.f_114 >= 9)
							{
								Global_1934051.f_114 = 0;
							}
						}
					}
				}
			}
		}
	}
}

void func_467()
{
	struct<6> Var0;
	int iVar10;
	int iVar11;
	int iVar12;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	iVar11 = 1;
	Global_1934051.f_110 = 0;
	iVar12 = Global_1934051.f_112;
	while (iVar12 <= (33 - 1))
	{
		if (Global_1934051.f_110 >= iVar11)
		{
		}
		else
		{
			iVar10 = iVar12;
			if (iVar10 == -1)
			{
			}
			else if (!func_1140(Var0.f_2))
			{
			}
			else
			{
				if (func_1216(iVar10, &Var0, 0))
				{
					if (func_1217(&Var0))
					{
						if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_34[iVar10]))
						{
							Global_1934051.f_34[iVar10] = MAP::BLIP_ADD_FOR_COORDS(func_1219(func_1218(Var0.f_1, Var0.f_2)), Var0.f_5);
							if (MAP::DOES_BLIP_EXIST(Global_1934051.f_34[iVar10]))
							{
								MAP::SET_BLIP_SPRITE(Global_1934051.f_34[iVar10], func_1220(func_1218(Var0.f_1, Var0.f_2)), true);
								MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_34[iVar10], func_1218(Var0.f_1, Var0.f_2), -1);
								func_1221(Global_1934051.f_34[iVar10], Var0.f_2);
							}
						}
					}
				}
				Global_1934051.f_110++;
			}
			iVar12++;
		}
	}
	Global_1934051.f_112 = iVar12;
	if (Global_1934051.f_112 > 33)
	{
		Global_1934051.f_112 = 0;
	}
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 1;
	Global_1934051.f_110 = 0;
	iVar2 = Global_1934051.f_113;
	while (iVar2 <= 6)
	{
		if (Global_1934051.f_110 >= iVar1)
		{
		}
		else
		{
			iVar0 = iVar2;
			if (iVar0 == 0 && !func_1222(iVar0))
			{
			}
			else
			{
				iVar3 = func_1223(iVar0);
				if (!func_1140(iVar3))
				{
				}
				else
				{
					if (func_1224(iVar3, -1, 1) && func_1225(iVar3, iVar0))
					{
						if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
						{
							Global_1934051.f_68[iVar0] = MAP::BLIP_ADD_FOR_COORDS(-936216634, func_1226(iVar0));
							if (MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
							{
								MAP::SET_BLIP_SPRITE(Global_1934051.f_68[iVar0], GET_HASH_KEY("BLIP_PROC_BOUNTY_POSTER"), true);
								MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_68[iVar0], 16, -1);
								func_1221(Global_1934051.f_68[iVar0], iVar3);
							}
						}
					}
					else if (MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
					{
						MAP::REMOVE_BLIP(&(Global_1934051.f_68[iVar0]));
					}
					Global_1934051.f_110++;
				}
			}
			iVar2++;
		}
	}
	Global_1934051.f_113 = iVar2;
	if (Global_1934051.f_113 >= 7)
	{
		Global_1934051.f_113 = 1;
	}
}

void func_469()
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	vector3 vVar5;

	iVar4 = 0;
	while (iVar4 < 11)
	{
		iVar1 = iVar4;
		iVar2 = func_1227(iVar1);
		bVar3 = func_1228(iVar2, &uVar0, -1f);
		if (func_1229(iVar2))
		{
			vVar5 = { func_1230(iVar2) };
			if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
			{
				Global_1934051.f_82[iVar4] = MAP::BLIP_ADD_FOR_COORDS(GET_HASH_KEY("BLIP_STYLE_SHOP"), vVar5);
				MAP::SET_BLIP_SPRITE(Global_1934051.f_82[iVar4], GET_HASH_KEY("BLIP_AMBIENT_WARP"), true);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1934051.f_82[iVar4], "STAGE_COACH_BLIP");
				MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_82[iVar4], 50, -1);
			}
			if (MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
			{
				if (bVar3)
				{
					if (MAP::BLIP_REMOVE_MODIFIER(Global_1934051.f_82[iVar4], 724623647))
					{
					}
				}
				else if (MAP::BLIP_ADD_MODIFIER(Global_1934051.f_82[iVar4], 724623647))
				{
				}
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
		{
			MAP::REMOVE_BLIP(&(Global_1934051.f_82[iVar4]));
		}
		iVar4++;
	}
}

void func_470()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_388())
	{
		if (MAP::DOES_BLIP_EXIST(Global_1394141.f_1279[4 /*8*/].f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1394141.f_1279[4 /*8*/].f_1));
		}
	}
	iVar0 = Global_1934051.f_111;
	bVar1 = false;
	if (iVar0 != -1)
	{
		iVar2 = func_1232(func_1231(iVar0), 1);
		if (func_1140(iVar2))
		{
			if (iVar2 == 5)
			{
				if (func_663(45))
				{
					if (iVar0 == 0 || iVar0 == 2)
					{
						bVar1 = true;
					}
				}
				else if (iVar0 == 0 || iVar0 == 1)
				{
					bVar1 = true;
				}
			}
			else if (iVar2 == 38)
			{
				if (func_679() && iVar0 == 4)
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_76[iVar0]))
				{
					Global_1934051.f_76[iVar0] = MAP::BLIP_ADD_FOR_COORDS(GET_HASH_KEY("BLIP_STYLE_SHOP"), func_1231(iVar0));
					if (MAP::DOES_BLIP_EXIST(Global_1934051.f_76[iVar0]))
					{
						MAP::SET_BLIP_SPRITE(Global_1934051.f_76[iVar0], func_1220(func_1233(iVar0)), true);
						MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_76[iVar0], func_1233(iVar0), -1);
						func_1221(Global_1934051.f_76[iVar0], iVar2);
						if (!Global_1394141.f_1279[iVar0 /*8*/].f_4)
						{
							MAP::BLIP_ADD_MODIFIER(Global_1934051.f_76[iVar0], 1191951699);
							Global_1934051.f_104[iVar0] = 1;
						}
					}
				}
				else if (Global_1394141.f_1279[iVar0 /*8*/].f_4 && !Global_1394141.f_1279[iVar0 /*8*/].f_5)
				{
					if (Global_1934051.f_104[iVar0])
					{
						MAP::BLIP_REMOVE_MODIFIER(Global_1934051.f_76[iVar0], 1191951699);
						Global_1934051.f_104[iVar0] = 0;
					}
				}
				else if (!Global_1934051.f_104[iVar0])
				{
					MAP::BLIP_ADD_MODIFIER(Global_1934051.f_76[iVar0], 1191951699);
					Global_1934051.f_104[iVar0] = 1;
				}
			}
		}
	}
	Global_1934051.f_111++;
	if (Global_1934051.f_111 >= 5)
	{
		Global_1934051.f_111 = 0;
	}
}

void func_471()
{
	if (Global_1956614.f_5)
	{
		if (func_575(127))
		{
			Global_1956614.f_5 = 0;
			return;
		}
		if (!func_1234())
		{
			return;
		}
		if (func_651())
		{
			return;
		}
		if (func_571())
		{
			return;
		}
		func_576(127, 0);
		Global_1956614.f_6 = MISC::GET_GAME_TIMER();
		Global_1956614.f_5 = 0;
	}
	if (Global_1956614.f_6 > 0 && (MISC::GET_GAME_TIMER() - Global_1956614.f_6) > 40000)
	{
		Global_1956614.f_6 = 0;
	}
	if (func_1235(1) || Global_1956614.f_6 > 0)
	{
		if (!func_549(Global_1956614))
		{
			Global_1956614 = func_158(97, 38, func_1236(), -1);
			Global_1956614.f_1 = 0;
		}
		if (!Global_1956614.f_1)
		{
			if (!func_1235(0))
			{
				func_163(97, 38, 724623647);
				Global_1956614.f_1 = 1;
			}
		}
		else if (func_1235(0))
		{
			func_165(97, 38, 724623647);
			Global_1956614.f_1 = 0;
		}
	}
	else if (func_549(Global_1956614))
	{
		func_1170(&Global_1956614, 0);
	}
}

void func_472()
{
	if (Global_1415412.f_5)
	{
		if (func_575(121))
		{
			Global_1415412.f_5 = 0;
			return;
		}
		if (!func_1234())
		{
			return;
		}
		if (func_651())
		{
			return;
		}
		if (func_571())
		{
			return;
		}
		func_576(121, 0);
		func_576(131, 1);
		Global_1415412.f_6 = MISC::GET_GAME_TIMER();
		Global_1415412.f_5 = 0;
	}
	if (Global_1415412.f_6 > 0 && (MISC::GET_GAME_TIMER() - Global_1415412.f_6) > 40000)
	{
		Global_1415412.f_6 = 0;
	}
	if (func_1237(1) || Global_1415412.f_6 > 0)
	{
		if (!func_549(Global_1415412.f_3))
		{
			Global_1415412.f_3 = func_158(69, 24, func_1238(), -1);
			Global_1415412.f_4 = 0;
			if (Global_1415412.f_6 == 0)
			{
				func_576(122, 0);
			}
		}
		if (!Global_1415412.f_4)
		{
			if (!func_1237(0))
			{
				func_163(69, 24, 724623647);
				Global_1415412.f_4 = 1;
			}
		}
		else if (func_1237(0))
		{
			func_165(69, 24, 724623647);
			Global_1415412.f_4 = 0;
		}
	}
	else if (func_549(Global_1415412.f_3))
	{
		func_1170(&(Global_1415412.f_3), 0);
	}
}

void func_473()
{
	if (Global_1934051.f_118)
	{
		if (func_575(Global_1934051.f_115))
		{
			Global_1934051.f_118 = 0;
			return;
		}
		if (!func_1234())
		{
			return;
		}
		if (func_651())
		{
			return;
		}
		if (func_571())
		{
			return;
		}
		Global_1934051.f_117 = (Global_1934051.f_117 + MISC::GET_GAME_TIMER());
		Global_1934051.f_118 = 0;
		func_576(Global_1934051.f_115, 0);
		func_1240(Global_1934051.f_116, func_1239(Global_1934051.f_116));
	}
	else if (Global_1934051.f_116 != -1 && func_549(Global_1914319.f_15936[Global_1934051.f_116 /*6*/]))
	{
		if ((MISC::GET_GAME_TIMER() - Global_1934051.f_117) > 0)
		{
			func_165(func_1239(Global_1934051.f_116), func_1242(func_1241(Global_1934051.f_116)), 580546400);
			func_165(func_1239(Global_1934051.f_116), func_1242(func_1241(Global_1934051.f_116)), 847579139);
			Global_1934051.f_116 = -1;
			Global_1934051.f_117 = 0;
		}
	}
}

void func_474()
{
	int iVar0;

	Global_1415419.f_9717 = 0;
	iVar0 = 0;
	while (iVar0 < 248)
	{
		Global_1415419.f_19[iVar0 /*12*/].f_8 = -1;
		Global_1415419.f_19[iVar0 /*12*/].f_9 = -1;
		func_227(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
		func_227(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 1);
		func_1109(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 8);
		iVar0++;
	}
}

int func_475()
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	Var0 = Global_1415419;
	Var0.f_2 = 217083545;
	iVar12 = func_479();
	Global_1415419.f_9756 = iVar12;
	Global_1415419.f_9717 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		uVar5 = Var0.f_1;
		iVar10 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			Var0.f_2 = 1275853848;
			Var0.f_3 = iVar9;
			if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
			{
				uVar6 = Var0.f_1;
				Var0.f_2 = -713081767;
				iVar7 = 0;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar7, &Var0))
				{
					iVar8 = func_1243(iVar7);
					if (func_487(iVar8))
					{
						Global_1415419.f_19[iVar8 /*12*/].f_10 = uVar6;
						Var0.f_2 = -1341709093;
						if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar11, &Var0))
						{
							Global_1415419.f_19[iVar8 /*12*/].f_7 = uVar11;
						}
						if (iVar12 != -1)
						{
							func_1245(iVar8, &Var0, &(Global_1415419.f_9717), func_1244(iVar12));
							Var0.f_1 = uVar6;
						}
					}
				}
			}
			Var0.f_1 = uVar5;
			iVar9++;
		}
	}
	return 1;
}

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (Global_1415419.f_9721[iVar0 /*8*/] != -1)
			{
				if (Global_1415419.f_16 != Global_1415419.f_9721[iVar0 /*8*/])
				{
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1415419.f_9721[iVar0 /*8*/].f_1, false))
					{
						Global_1415419.f_9720 = (Global_1415419.f_9720 - 1);
						Global_1415419.f_9721[iVar0 /*8*/].f_2 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_1 = 0;
						Global_1415419.f_9721[iVar0 /*8*/] = -1;
						Global_1415419.f_9721[iVar0 /*8*/].f_3 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_7 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_4 = { 0f, 0f, 0f };
					}
				}
			}
		}
		iVar0++;
	}
}

void func_477(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2 && (!Global_1415419.f_9721[iVar0 /*8*/].f_3 || bParam0))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415419.f_9721[iVar0 /*8*/].f_1, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1415419.f_9721[iVar0 /*8*/].f_1, 523);
			}
		}
		iVar0++;
	}
}

void func_478()
{
	if (Global_1415419.f_16 != -1)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
		Global_1415419.f_16 = -1;
		Global_1415419.f_17 = -1;
		Global_1415419.f_2 = 0;
		Global_1415419.f_18 = 0;
		Global_1415419.f_9758 = 0;
		Global_1415419.f_9759 = 0;
		Global_1415419.f_9 = { 0f, 0f, 0f };
		Global_1415419.f_12 = { 0f, 0f, 0f };
	}
}

int func_479()
{
	return Global_1897952.f_41;
}

bool func_480(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_481(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	func_1246(MISC::GET_HASH_KEY(sParam0), iParam1);
}

void func_482(struct<16> Param0, int iParam16)
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
	if (!func_1247(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_1248(&(Param0.f_10)))
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
			func_1249(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_483(bool bParam0, bool bParam1)
{
	if (Global_1879534)
	{
		return false;
	}
	if (Global_1415419.f_6)
	{
		return true;
	}
	if (!Global_1415419.f_4)
	{
		return false;
	}
	if (bParam0)
	{
		if ((MISC::GET_GAME_TIMER() - Global_1415419.f_9719) <= 5000)
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (MISC::GET_GAME_TIMER() < Global_1415419.f_7 && MISC::GET_GAME_TIMER() < Global_1415419.f_8)
		{
			return false;
		}
	}
	else if (Global_1415419.f_9718)
	{
		if (func_226(Global_1415419.f_3, 16))
		{
			return false;
		}
		if (MISC::GET_GAME_TIMER() < Global_1415419.f_8)
		{
			return false;
		}
	}
	else
	{
		if (func_226(Global_1415419.f_3, 8))
		{
			return false;
		}
		if (MISC::GET_GAME_TIMER() < Global_1415419.f_7)
		{
			return false;
		}
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	return true;
}

int func_484()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 3;
	if (!Global_1415419.f_6)
	{
		if (Global_1415419.f_9718)
		{
			if (!func_1250())
			{
				iVar0 = 0;
				iVar1 = 1;
			}
			else
			{
				iVar0 = 0;
				iVar1 = func_1252(func_1251(func_46()));
			}
		}
		else if (!func_1250())
		{
			iVar0 = 2;
			iVar1 = 3;
		}
		else
		{
			iVar0 = func_1252(func_1251(func_46()));
			iVar1 = ((func_1252(func_1251(func_46())) + func_1253(func_1251(func_46()))) - 1);
		}
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (!Global_1415419.f_9721[iVar2 /*8*/].f_2)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_485()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3[15];
	int iVar19;
	int iVar20;
	int iVar21;

	fVar2 = -1f;
	if (Global_1415419.f_5 != -1)
	{
		if (Global_1415419.f_6 || func_1254(Global_1415419.f_5, 0, 1))
		{
			Global_1415419.f_16 = Global_1415419.f_5;
			Global_1415419.f_5 = -1;
			return 1;
		}
		else
		{
			Global_1415419.f_9758 = 0;
			Global_1415419.f_9759 = 0;
			Global_1415419.f_9 = { 0f, 0f, 0f };
			Global_1415419.f_12 = { 0f, 0f, 0f };
			Global_1415419.f_15 = 0;
		}
		Global_1415419.f_5 = -1;
		return 0;
	}
	if (func_1255())
	{
		if (func_1256(&iVar3, func_46()))
		{
			iVar19 = 0;
			while (iVar19 < iVar3)
			{
				if (iVar3[iVar19] != -1)
				{
					if (func_226(Global_1415419.f_19[iVar3[iVar19] /*12*/].f_11, 2))
					{
						if (Global_1415419.f_19[iVar3[iVar19] /*12*/].f_3 > fVar2)
						{
							if (func_226(Global_1415419.f_19[iVar3[iVar19] /*12*/].f_11, 1))
							{
								fVar2 = Global_1415419.f_19[iVar3[iVar19] /*12*/].f_3;
								iVar1 = iVar3[iVar19];
							}
						}
					}
				}
				iVar19++;
			}
			if (fVar2 != -1f)
			{
				Global_1415419.f_16 = iVar1;
			}
			return 0;
		}
	}
	if (Global_1415419.f_9718)
	{
		iVar20 = 75;
		iVar21 = 247;
	}
	else
	{
		if (func_657())
		{
			iVar20 = 0;
		}
		else
		{
			iVar20 = 34;
		}
		iVar21 = 74;
	}
	iVar0 = iVar20;
	while (iVar0 <= iVar21)
	{
		if (func_226(Global_1415419.f_19[iVar0 /*12*/].f_11, 2))
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_3 > fVar2)
			{
				if (func_226(Global_1415419.f_19[iVar0 /*12*/].f_11, 1))
				{
					fVar2 = Global_1415419.f_19[iVar0 /*12*/].f_3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 != -1f)
	{
		Global_1415419.f_16 = iVar1;
	}
	else
	{
		Global_1415419.f_16 = -1;
	}
	return 0;
}

int func_486(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	float fVar6;

	iVar1 = -1;
	fVar2 = 1E+09f;
	if ((Global_1415419.f_19[bParam0 /*12*/].f_8 != -1 && Global_1415419.f_19[bParam0 /*12*/].f_9 < 960) && Global_1415419.f_19[bParam0 /*12*/].f_9 >= Global_1415419.f_19[bParam0 /*12*/].f_8)
	{
		bVar3 = func_1257(bParam0);
		bVar3 = (bVar3 * bVar3);
		bVar4 = func_1258(bParam0);
		bVar4 = (bVar4 * bVar4);
		iVar0 = Global_1415419.f_19[bParam0 /*12*/].f_8;
		while (iVar0 <= Global_1415419.f_19[bParam0 /*12*/].f_9)
		{
			*iParam1++;
			if (!func_1259(bParam0, Global_1415419.f_2996[iVar0 /*7*/]))
			{
			}
			else
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Global_1415419.f_2996[iVar0 /*7*/]);
				if (bParam2 && bParam0 != 34)
				{
					iVar5 = func_1260(Global_35, Global_1415419.f_2996[iVar0 /*7*/], 1060437492 /* Float: 0.707f */);
					if (iVar5 == 1)
					{
					}
					else if (fVar6 < fVar2)
					{
						if (func_1261(Global_1415419.f_2996[iVar0 /*7*/], fVar6, (bParam0 <= 33 || bParam0 == 72), fParam4, bVar3, bVar4, bParam0))
						{
							iVar1 = iVar0;
							fVar2 = fVar6;
							if (bParam3)
							{
							}
							else
							{
								iVar0++;
							}
							return iVar1;
						}
					}
				}
			}
		}
	}
}

bool func_487(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_488(int iParam0)
{
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_1262();
	if (iParam0 <= 74)
	{
		Global_1415419.f_7 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1415419.f_8 = MISC::GET_GAME_TIMER();
	}
	func_823(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 12, 0, 0, 0, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_1++;
	Global_32074.f_2697++;
}

void func_489()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 14)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar3, -940661134, 0);
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar3, 1995362678, 0);
		iVar2 = func_1263(iVar1, 5);
		if (func_1264(iVar2))
		{
			if (!(func_529() && func_911() == 0))
			{
				if (!func_1265(iVar1))
				{
					if (func_1266(iVar0))
					{
						if (func_1267(iVar2, 1, 0))
						{
							MAP::_MAP_DISCOVERY_SET_ENABLED(func_1268(iVar0));
							MAP::_0xD8C7162AB2E2AF45(func_1269(iVar0));
						}
						else
						{
							MAP::_MAP_DISCOVERY_SET_ENABLED(func_1269(iVar0));
							MAP::_0xD8C7162AB2E2AF45(func_1268(iVar0));
						}
					}
				}
			}
		}
		iVar3++;
	}
}

void func_490()
{
	if (!Global_40.f_9045)
	{
		if (func_1270(4))
		{
			if (!func_903(40, 0) && !func_370(40))
			{
				func_1271(40, 1);
			}
			Global_40.f_9045 = func_1270(4);
		}
	}
	if (!Global_40.f_9045.f_1)
	{
		if (func_1272(8))
		{
			if ((!func_903(42, 0) && !func_370(42)) && func_679())
			{
				func_402(-683458244, 1, 0);
				func_1271(42, 1);
			}
			Global_40.f_9045.f_1 = func_1272(8);
		}
	}
	if (!Global_40.f_9045.f_2)
	{
		if (func_1273(4))
		{
			if (!func_903(50, 0) && !func_370(50))
			{
				func_1271(50, 1);
			}
			Global_40.f_9045.f_2 = func_1273(4);
		}
	}
	if (!Global_40.f_9045.f_3)
	{
		if (func_1274(2))
		{
			if (!func_903(51, 0) && !func_370(51))
			{
				func_1271(51, 1);
			}
			Global_40.f_9045.f_3 = func_1274(2);
		}
	}
}

void func_491()
{
	int iVar0;

	if (!Global_40.f_9045.f_4)
	{
		if (func_1275(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("CAROLINA_PARAKEETS"), 0)) >= 25)
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_CAROLINAPARAKEET_01"), true);
			Global_40.f_9045.f_4 = func_1275(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("CAROLINA_PARAKEETS"), 0)) >= 25;
		}
	}
}

void func_492()
{
	if ((UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_CHAL_LEGENDARY_PANTHER")) && !Global_40.f_9319[13 /*4*/].f_1) && !VOLUME::DOES_VOLUME_EXIST(Global_1425228))
	{
		Global_1425228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1686.575f, -1973.868f, 45.094f, 0f, 0f, 0f, 100f, 100f, 100f, "Tracking Zones - volLegendaryPantherRestriction");
		func_270(Global_1425228, "Legendary Panther Restriction", 0, 0, 4096, 0, -1082130432 /* Float: -1f */);
	}
	else if (Global_40.f_9319[13 /*4*/].f_1 && VOLUME::DOES_VOLUME_EXIST(Global_1425228))
	{
		func_1276(Global_1425228);
		VOLUME::_DELETE_VOLUME(Global_1425228);
	}
	if ((func_154(15) && !Global_40.f_9319[1 /*4*/].f_1) && !VOLUME::DOES_VOLUME_EXIST(Global_1425228.f_1))
	{
		Global_1425228.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2430.609f, 515.414f, 73.861f, 0f, 0f, 0f, 140f, 140f, 140f, "Tracking Zones - volLegendaryBeaverRestriction");
		func_270(Global_1425228.f_1, "Legendary Beaver Restriction", 0, 0, 4096, 0, -1082130432 /* Float: -1f */);
	}
	else if (Global_40.f_9319[1 /*4*/].f_1 && VOLUME::DOES_VOLUME_EXIST(Global_1425228.f_1))
	{
		func_1276(Global_1425228.f_1);
		VOLUME::_DELETE_VOLUME(Global_1425228.f_1);
	}
}

void func_493()
{
	int iVar0;

	iVar0 = func_1277();
	if (iVar0 > 0 && iVar0 < 24)
	{
		if (iVar0 > Global_40.f_12019.f_45.f_1)
		{
			func_1278(7);
			Global_40.f_12019.f_45.f_1 = iVar0;
		}
		else if (func_1279(Global_40.f_12019.f_45))
		{
			if (func_793(Global_40.f_12019.f_45, 0))
			{
				func_576(340, 1);
				func_1278(30);
			}
		}
	}
}

void func_494()
{
	Global_1901328.f_90 = func_1280();
	if (func_1282(func_1281(Global_1901328.f_90)))
	{
		if (func_1284(func_1283(Global_1901328.f_90)))
		{
			if (!func_903(func_1285(Global_1901328.f_90), 0) && !func_370(func_1285(Global_1901328.f_90)))
			{
				func_1271(func_1285(Global_1901328.f_90), 0);
			}
			func_576(358, 1);
			func_1286(func_1281(Global_1901328.f_90));
		}
		else
		{
			func_1286(func_1281(Global_1901328.f_90));
		}
	}
}

void func_495(var uParam0)
{
	uParam0->f_1 = TASK::_0xE1C105E6BBA48270();
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_10 = 0;
	*uParam0 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_2 = 0;
}

void func_496(var uParam0)
{
	int iVar0;

	func_1287();
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, GET_HASH_KEY("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	func_1288(uParam0);
	iVar0 = func_1289(0);
	if (Global_1900073.f_17 == 1)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(iVar0, GET_HASH_KEY("WEAPON_FISHINGROD"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(iVar0, GET_HASH_KEY("WEAPON_FISHINGROD"));
		}
	}
	else if (!INVENTORY::_0x3D10D7179D7034AF(iVar0, GET_HASH_KEY("WEAPON_FISHINGROD"), 0))
	{
		INVENTORY::_0x766315A564594401(iVar0, GET_HASH_KEY("WEAPON_FISHINGROD"), -1323131777 /* GXTEntry: "The Fishing Rod cannot be equipped here." */);
	}
}

void func_497(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if (((((Global_1900073.f_17 == 0 || func_273()) || func_657()) || func_554()) || !CAM::IS_SCREEN_FADED_IN()) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_498(uParam0);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_587(uParam0->f_13[iVar0 /*9*/].f_1))
		{
			if (func_970(&(uParam0->f_13[iVar0 /*9*/].f_5)) > IntToFloat(uParam0->f_13[iVar0 /*9*/].f_4) || func_503(Global_36, uParam0->f_13[iVar0 /*9*/].f_1) > uParam0->f_3)
			{
				func_1290(&(uParam0->f_13[iVar0 /*9*/]));
			}
		}
		iVar0++;
	}
	*uParam0 = func_1291(uParam0);
	if (*uParam0 == -1)
	{
		return;
	}
	if (!AUDIO::PREPARE_SOUNDSET(uParam0->f_12, true))
	{
		return;
	}
	vVar1 = { func_1292(uParam0) };
	if (func_587(vVar1))
	{
		return;
	}
	vVar1 = { func_1293(vVar1) };
	if (func_587(vVar1))
	{
		return;
	}
	vVar1.f_2 = (vVar1.z + uParam0->f_5);
	func_1294(uParam0, vVar1);
}

void func_498(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1290(&(uParam0->f_13[iVar0 /*9*/]));
		iVar0++;
	}
	*uParam0 = 0;
}

void func_499()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1295(Global_1897952.f_41);
	iVar1 = func_1296(Global_1894899.f_2);
	iVar2 = func_1297(Global_1894899.f_3);
	if (func_1298(Global_1894899.f_2) && !func_663(45))
	{
		iVar1 = 0;
	}
	if (func_1299(Global_1894899.f_3) && !func_663(45))
	{
		iVar2 = -1;
	}
	iVar3 = 0;
	if (func_112() != -1)
	{
		iVar3 = 1;
	}
	if ((((iVar1 == Global_1898077.f_9 && iVar2 == Global_1898077.f_10) && iVar0 == Global_1898077.f_11) && iVar3 == Global_1898077.f_7) && !Global_1898077)
	{
		return;
	}
	Global_1898077.f_11 = iVar0;
	Global_1898077.f_10 = iVar2;
	Global_1898077.f_9 = iVar1;
	Global_1898077.f_7 = iVar3;
	Global_1898077 = 0;
	if (Global_1898077.f_1 == 4)
	{
		func_1300(Global_1898077.f_7, Global_1898077.f_12);
	}
	else if (Global_1898077.f_1 == 2)
	{
		func_1301(Global_1898077.f_7, Global_1898077.f_3);
	}
	else if (Global_1898077.f_1 == 1)
	{
		func_1302(Global_1898077.f_6);
	}
	else if (Global_1898077.f_1 == 5)
	{
		func_1303(Global_1898077.f_7, Global_1898077.f_4);
	}
	else if (Global_1898077.f_10 != -1)
	{
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_10);
	}
	else if (Global_1898077.f_9 != -1 && iVar1 != 0)
	{
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	else if (Global_1898077.f_11 != -1)
	{
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_11);
	}
}

void func_500()
{
	struct<4> Var0;

	if (func_1305() >= 1 && func_1305() < 6)
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	switch (func_1305())
	{
		case 0:
			if (func_1306())
			{
				if (!func_456(&(Global_0.f_9)))
				{
					func_457(&(Global_0.f_9), 0);
				}
			}
			else if (func_456(&(Global_0.f_9)))
			{
				func_462(&(Global_0.f_9));
			}
			if (func_456(&(Global_0.f_9)))
			{
				if (func_458(&(Global_0.f_9)) >= 10f)
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					func_1307(1);
				}
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PLAYER::FORCE_CLEANUP(2);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				HUD::_HIDE_HUD_COMPONENT(-1679307491);
				Global_0.f_12 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
				}
				else
				{
					Global_0.f_12 = PED::_GET_LAST_MOUNT(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Global_0.f_12, true, false)) > 50f)
						{
							Global_0.f_12 = 0;
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
						}
					}
				}
				Global_0.f_13 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					PED::DETACH_CARRIABLE_ENTITY(Global_0.f_13, false, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, true);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 797.0328f, 1780.719f, 279.8931f, 6.2684f, true, false, true);
				func_505(0, -1);
				Global_0.f_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@fin3@arthurs_grave", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(Global_0.f_8);
				UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ARTHURS_GRAVE_SCENE"), true);
				func_1307(2);
			}
			break;
		case 2:
			if (!func_504(&Global_0, 3) || func_458(&(Global_0.f_9)) >= 15f)
			{
				func_1307(3);
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_0.f_8, true, false))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Global_0.f_8, "JOHN", &Var0, false, 0, 2))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					func_1307(4);
				}
				else
				{
					ANIMSCENE::GET_ANIM_SCENE_ORIGIN(Global_0.f_8, &Var0, &(Var0.f_9), 2);
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					func_1307(4);
				}
			}
			break;
		case 4:
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX())) || func_458(&(Global_0.f_9)) >= 15f)
			{
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_0.f_12, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_0.f_13, false);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_0.f_8, "JOHN", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(Global_0.f_8);
				func_1307(5);
			}
			break;
		case 5:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(Global_0.f_8, false))
			{
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
				if (func_400(932909855))
				{
					func_1308(GET_HASH_KEY("JOURNAL_ENTRY_100_PERCENT_HIGH"), 0);
				}
				else
				{
					func_1308(GET_HASH_KEY("JOURNAL_ENTRY_100_PERCENT_LOW"), 0);
				}
				func_1309(0);
				func_1307(6);
			}
			break;
		case 6:
			break;
	}
}

bool func_501()
{
	if (Global_1572887.f_12 == -1)
	{
		if (!func_529())
		{
			return false;
		}
		else if (!func_154(0))
		{
			return false;
		}
		else if (func_1310())
		{
			return false;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return false;
	}
	if (func_185(32898))
	{
		return false;
	}
	if (func_127(Global_1572864.f_8))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (func_504(&Global_0, 32))
	{
		if (func_504(&Global_0, 2))
		{
			return true;
		}
		if (func_504(&Global_0, 64))
		{
			return true;
		}
	}
	if (func_114(0, 1, 1))
	{
		return false;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return false;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (UISTICKYFEED::_0xC5C395C60B542A3C(1))
	{
		return false;
	}
	if (func_1311() != 2 && func_1311() != 3)
	{
		return false;
	}
	if (func_438())
	{
		return false;
	}
	return true;
}

void func_502(var uParam0)
{
	uParam0->f_2 = 0;
}

float func_503(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_504(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_505(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1312(&Global_0, 8);
	}
	if (!func_529() || func_112() != -1)
	{
		return;
	}
	func_1312(&Global_0, 1);
}

void func_506(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_185(32768))
	{
		return;
	}
	if (!func_185(32768))
	{
		func_1313(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (func_185(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_538();
	}
}

void func_507(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_508()
{
	if (!func_504(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			func_507(&Global_0, 1);
			return 0;
		}
		if (!func_529())
		{
			func_507(&Global_0, 1);
			return 0;
		}
		if (func_127(func_539(0)))
		{
			return 0;
		}
		if (Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_362(Global_1935630, 2048) || func_185(38))
		{
			return 0;
		}
		if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
		{
			return 0;
		}
		if (SAVE::SAVEGAME_IS_SAVE_PENDING())
		{
			return 0;
		}
		if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != Global_1905941)
		{
			return 0;
		}
		if (func_504(&Global_0, 16))
		{
			func_507(&Global_0, 16);
			return 0;
		}
		if (Global_1914319.f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_1314(0);
	}
	if (SAVE::SAVEGAME_IS_SAVE_PENDING())
	{
		return 0;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return 0;
	}
	func_506(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	func_1312(&Global_0, 4);
	func_507(&Global_0, 2);
	func_507(&Global_0, 32);
	func_507(&Global_0, 64);
	return 1;
}

void func_509()
{
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		Global_0.f_1 = -1;
		return;
	}
	func_507(&Global_0, 8);
	Global_0.f_1 = -1;
}

bool func_510(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) > 0;
}

void func_511(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_512()
{
	int iVar0;

	if (func_127(Global_1898437) && func_377(Global_1898437) == 1)
	{
		iVar0 = func_519(Global_1898437);
		if ((func_131(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_513()
{
	return func_362(Global_1935630, 4096);
}

int func_514(int iParam0)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

char[] func_515(int iParam0)
{
	char[] cVar0[8];

	if (!func_127(iParam0))
	{
		return cVar0;
	}
	switch (func_377(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_1315(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_519(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_311(0, 10, 11, GET_HASH_KEY("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_516(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_1316();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_377(Global_1879514.f_1) == 1)
			{
				func_1317(5, 1);
			}
			else if (func_377(Global_1879514.f_1) == 8 && (func_520(Global_1347702[func_519(Global_1879514.f_1) /*49*/].f_12, 1) || func_520(Global_1347702[func_519(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_1317(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_517(int iParam0)
{
	Global_1879514 = iParam0;
}

bool func_518(int iParam0)
{
	return iParam0 != 0;
}

int func_519(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_1318(func_559(iParam0));
}

bool func_520(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_521()
{
	int iVar0;

	if ((func_377(Global_1879514.f_1) != 8 && func_377(Global_1879514.f_1) != 1) && (func_377(Global_1879514.f_1) == 11 && Global_1879514.f_1 != func_311(0, 10, 11, GET_HASH_KEY("CABR01"))))
	{
		return false;
	}
	iVar0 = func_1319(Global_1879514.f_1);
	if (func_1320(iVar0))
	{
		return true;
	}
	return false;
}

void func_522()
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	char cVar4[64];

	if (!Global_1879514.f_11)
	{
		iVar1 = func_1316();
	}
	else
	{
		iVar1 = 3;
	}
	switch (iVar1)
	{
		case 5:
			if (Global_1879514.f_12)
			{
				iVar0 = 2037639424;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -1124518777;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -1124518777;
			}
			else
			{
				iVar0 = GET_HASH_KEY("TOAST_MEDAL_GOLD");
			}
			break;
		case 4:
			if (Global_1879514.f_12)
			{
				iVar0 = 1343627222;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -2060979717;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -2060979717;
			}
			else
			{
				iVar0 = GET_HASH_KEY("TOAST_MEDAL_SILVER");
			}
			break;
		case 0:
			if (Global_1879514.f_12)
			{
				iVar0 = 68997297;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -1523540536;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -1523540536;
			}
			else
			{
				iVar0 = 1249997984;
			}
			break;
		default:
			if (Global_1879514.f_12)
			{
				iVar0 = -1241747389;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = 562132112;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = 562132112;
			}
			else
			{
				iVar0 = GET_HASH_KEY("TOAST_MEDAL_BRONZE");
			}
			break;
	}
	cVar2 = func_515(Global_1879514.f_1);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar3);
	func_516(cVar2);
	StringCopy(&cVar4, "MISSION_COMPLETE_DETAILS", 64);
	if (Global_1879514.f_1 == func_514(1))
	{
		StringCopy(&cVar4, "MISSION_COMPLETE_DETAILS_WNT1", 64);
	}
	Global_1879514.f_17 = func_1321("MISSION_COMPLETE", &cVar2, GET_HASH_KEY("HUD_TOASTS"), iVar0, GET_HASH_KEY("PLAYER_MENU"), &cVar4, GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
	Global_1879514.f_7 = MISC::GET_GAME_TIMER();
}

void func_523(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_185(32768))
	{
		return;
	}
	func_1322(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_1323(iParam0, iParam1, fParam3, iParam4);
	}
}

bool func_524(int iParam0)
{
	int iVar0;

	if (func_518(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_525()
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Global_1879514, &Var0, 20);
}

bool func_526()
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

void func_527(int iParam0)
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_1324(iParam0);
	func_1325(iParam0);
	func_1326(iParam0);
	VOLUME::_0x748C5F51A18CB8F0(1);
	if (iParam0 == 4)
	{
		func_1327();
	}
	else if (iParam0 == 22)
	{
		func_1328();
	}
	else if (iParam0 == 27)
	{
		if (!func_1329(26, 64))
		{
			func_1330(26, 64);
			func_1331(26, 0);
			func_1332(26);
		}
	}
	else if (iParam0 == 28)
	{
		if (!func_400(-789397228))
		{
			func_1094(-789397228);
		}
		if (!func_400(1358491857))
		{
			func_1094(1358491857);
		}
	}
	else if (iParam0 == 43)
	{
		func_1333();
	}
	else if (iParam0 == 96)
	{
		if (iParam0 == func_606())
		{
		}
		else
		{
			func_1334();
		}
	}
	else if (iParam0 == 97)
	{
		func_1335(0);
	}
	else if (iParam0 == 112)
	{
		func_1336(0);
	}
}

int func_528(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_519(iParam0);
	if (!func_141(iVar0))
	{
		return 0;
	}
	if (!func_1337(iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_1310720.f_6 == 0)
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 0;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		func_1338(iVar0);
		func_1339(iVar0);
	}
	if (func_1340(iVar0))
	{
		if (func_1341(iVar0))
		{
			func_1342(iVar0);
			return 1;
		}
	}
	return 0;
}

bool func_529()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_530(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_531()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = 0;
	bVar3 = func_112() == -1;
	iVar1 = 0;
	while (iVar1 < Global_1898329)
	{
		if (func_127(Global_1898330[iVar1]) && func_246(Global_1898330[iVar1]))
		{
			if (Global_1898346[iVar1 /*6*/].f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = Global_1898346[iVar1 /*6*/].f_5;
					if (func_581(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

void func_532(var uParam0, int iParam1)
{
	func_1343(uParam0, iParam1);
}

void func_533(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_131(iParam0))
	{
		return;
	}
	if (func_536(&(Global_1835011[iParam0 /*74*/]), 8192))
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

void func_534(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_577(iParam1))
	{
		iParam1 = func_430(func_514(iParam0));
		if (!func_577(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		if ((bParam2 || bParam6) && (!func_572(iParam0, -1) || Global_1835011[iParam0 /*74*/].f_70))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
		}
		else
		{
			if (func_650())
			{
				if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
				{
					if (Global_1835011[iParam0 /*74*/].f_27 == Global_1905944.f_5698)
					{
						func_1344(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
			if (func_572(iParam0, -1) && func_561(iParam0))
			{
				func_565(iParam0, fParam5, iParam1, bParam2, 1);
				func_537(&(Global_1835011[iParam0 /*74*/]), 2);
			}
		}
	}
	else if ((bParam2 && !func_567(iParam0)) && !Global_43891)
	{
		func_565(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_134(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*74*/].f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false) && !func_153(iParam0)) && !func_134(iParam1, 1024))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
	}
	if (bParam4)
	{
		func_129(Global_1835011[iParam0 /*74*/].f_1);
	}
	else
	{
		func_563(iParam1, 3831);
	}
	Global_1835011[iParam0 /*74*/].f_73 = 0;
}

void func_535(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {Global_1835011[iParam0 /*74*/].f_3}, 3);
	if ((func_112() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_7, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1835011[iParam0 /*74*/].f_7);
	}
}

bool func_536(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_537(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_538()
{
	return Global_1899515;
}

int func_539(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_540(int iParam0, bool bParam1, int iParam2)
{
	if (func_446(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (bParam1)
	{
		func_785(iParam0);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		if (iParam2 == 1)
		{
			func_1345(iParam0);
		}
		func_1346(&(Global_1392626[iParam0 /*32*/].f_11), 1, 0, 1);
		Global_1392626[iParam0 /*32*/].f_11 = 0;
	}
	func_791(&(Global_1392626[iParam0 /*32*/].f_9), 1);
	if (!func_796(Global_1392626[iParam0 /*32*/].f_8, 1))
	{
		func_786(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	}
	func_791(&(Global_1392626[iParam0 /*32*/].f_9), 2);
}

int func_541(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_542(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_141(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1347(iParam0);
	}
	if (func_142(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		func_544(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	if (func_520(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		func_1348(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_543(iParam0, 0);
	}
	func_1349(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, iParam4);
		}
		else
		{
			Global_1347702[iParam0 /*49*/].f_43 = 0;
		}
	}
}

void func_543(int iParam0, bool bParam1)
{
	if (!func_141(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		func_1350(&(Global_1347702[iParam0 /*49*/].f_14));
		func_544(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		func_1351(iParam0);
		if ((!func_118(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			func_544(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			func_802(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			func_1352(iParam0, 16384);
			func_1353(iParam0, 1, func_609(iParam0));
		}
	}
}

void func_544(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_545()
{
	int iVar0;
	int iVar1;

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
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2;
						if (func_131(iVar1))
						{
							func_533(iVar1, 0);
							func_534(iVar1, -1, 0, 1, 0, 0, 0);
							if (MAP::DOES_BLIP_EXIST(Global_1835011[iVar1 /*74*/].f_27))
							{
								MAP::REMOVE_BLIP(&(Global_1835011[iVar1 /*74*/].f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_546()
{
	Global_1898164.f_164 = func_114(0, 1, 0);
}

bool func_547(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

int func_548(int iParam0)
{
	vector3 vVar0;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT("trainrobbery_ambient");
	if (SCRIPTS::HAS_SCRIPT_LOADED("trainrobbery_ambient"))
	{
		if (func_226(Global_1392581.f_3, 16))
		{
			vVar0.x = 14;
		}
		else
		{
			vVar0.x = func_313(Global_36, 1);
		}
		vVar0.f_1 = Global_1898330[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392581.f_44))
		{
			vVar0.f_2 = Global_1392581.f_44;
		}
		Global_1392581 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("trainrobbery_ambient", &vVar0, 3, 2300);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("trainrobbery_ambient");
		func_129(vVar0.y);
		return 1;
	}
	return 0;
}

bool func_549(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_550(int iParam0)
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

bool func_551(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_552(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_553()
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

bool func_554()
{
	return Global_1894899 & 2 != 0;
}

bool func_555()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("DOC_PLAYER_JOURNAL")) > 0;
}

bool func_556()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

int func_557(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_1354(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_1355(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_1355(), iVar3);
		if (func_1356(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_558(int iParam0)
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

int func_559(int iParam0)
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

void func_560(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_1024(iParam0);
	*uParam1 = func_1318(iParam0);
	*uParam2 = func_1357(iParam0);
}

bool func_561(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_63 & 64512 != 0;
}

bool func_562(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1358(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

void func_563(int iParam0, int iParam1)
{
	if (!func_577(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 - (Global_1898346[iParam0 /*6*/].f_1 && iParam1));
}

Vector3 func_564(int iParam0)
{
	if (func_562(iParam0))
	{
		return func_1359(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_565(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_185(32768))
	{
		return false;
	}
	iVar0 = func_112();
	if ((bParam4 && func_569(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !func_569(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (func_650())
		{
			return false;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return false;
	}
	if (!func_1360(iParam0))
	{
		return false;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_447(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_1005()) <= 2000)
			{
				return false;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_447(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_1005()) <= 2000)
			{
				return false;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_447(Global_1347702[62 /*49*/].f_15, 1))
			{
				return false;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (func_572(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_536(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (func_562(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_1359(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_564(iParam0));
				}
			}
			else if (func_562(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, func_1359(iParam0), func_1361(iParam0), func_1362(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(1673015813, func_1363(iParam0), func_1364(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_562(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_573(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_1359(iParam0));
				bVar2 = true;
			}
		}
		else if (func_619(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(-1337945352, func_564(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_564(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_564(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_562(iParam0))
			{
				func_617(iParam2, 4194304);
			}
			else
			{
				func_563(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return false;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!func_569(&(Global_1835011[iParam0 /*74*/].f_29), 1024) && !func_619(iParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 580546400);
			func_570(&(Global_1835011[iParam0 /*74*/].f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return true;
	}
	if (!func_619(iParam0))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, -1986290853);
	}
	if (bParam3 || func_536(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	iVar4 = func_623(Global_40.f_4283);
	if (func_47(iVar4) && func_549(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = func_124(iVar4);
	}
	if (func_133(iParam0, bVar5, iVar4))
	{
		func_146(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_575(579))
	{
		func_625(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return true;
	}
	if (((((((func_569(&(Global_1835011[iParam0 /*74*/].f_29), 4096) && !func_569(&(Global_1835011[iParam0 /*74*/].f_29), 8192)) && IntToFloat(func_1005()) >= 10f) && !Global_1935630.f_12) && !Global_16) && !func_1365(Global_35, GET_HASH_KEY("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, GET_HASH_KEY("PROP_PLAYER_SLEEP_BED"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, GET_HASH_KEY("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!func_572(iParam0, iVar0) || (fParam1 >= (func_574(iParam0) * func_574(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_220(&cVar7, 10000, 0, 0, 0, 1);
			func_570(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
		}
	}
	return true;
}

Vector3 func_566(int iParam0)
{
	return func_564(iParam0);
}

bool func_567(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

void func_568(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	struct<4> Var3;
	bool bVar7;
	bool bVar8;
	struct<2> Var9;
	bool bVar12;
	int iVar13;
	int iVar14;
	vector3 vVar16;

	if (Global_12106[Global_1835011[iParam0 /*74*/].f_1 /*7*/].f_1 == 2)
	{
		return;
	}
	bVar0 = false;
	if (Global_1898346[iParam1 /*6*/].f_1 & 1 != 0)
	{
		bVar1 = true;
	}
	fVar2 = BUILTIN::VDIST2(func_564(iParam0), Global_36);
	if (!Global_1835011[iParam0 /*74*/].f_71)
	{
		if (!bVar1)
		{
			if (func_1366(iParam0, fVar2, bVar0))
			{
				if (func_565(iParam0, fVar2, iParam1, 0, 1))
				{
					func_617(iParam1, 1);
				}
			}
			else if (!bVar0 && (iParam0 == 18 || iParam0 == 44))
			{
				if (fVar2 >= (Global_1835011[iParam0 /*74*/].f_67 * Global_1835011[iParam0 /*74*/].f_67))
				{
					func_617(iParam1, 1);
				}
			}
			else if (bVar0)
			{
				if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), 2048) || func_569(&(Global_1835011[iParam0 /*74*/].f_29), 32768))
				{
					func_617(iParam1, 1);
				}
			}
		}
		else if (!bVar0)
		{
			if (((iParam0 == 18 && func_370(21)) || (iParam0 == 44 && func_370(83))) && !MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
			{
				func_565(iParam0, fVar2, iParam1, 0, 1);
			}
		}
	}
	else
	{
		if (Global_1898346[iParam1 /*6*/].f_1 & 1 == 0)
		{
			func_617(iParam1, 1);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iParam1 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iParam1 /*6*/]));
		}
	}
	Var3 = { Global_1835011[iParam0 /*74*/].f_12 };
	if (!bVar1)
	{
		return;
	}
	if (!bVar0)
	{
		if (Global_1835011[iParam0 /*74*/].f_17 && func_529())
		{
			bVar7 = SCRIPTS::DOES_THREAD_EXIST(Global_1835011[iParam0 /*74*/].f_16);
			if (bVar7)
			{
				if (fVar2 > (Global_1835011[iParam0 /*74*/].f_66 * Global_1835011[iParam0 /*74*/].f_66) && Global_1898346[iParam1 /*6*/].f_1 & 256 == 0)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var3);
					func_563(iParam1, 212);
				}
			}
			else if (!bParam3)
			{
				if (Global_1898346[iParam1 /*6*/].f_1 & 16 != 0)
				{
					bVar8 = true;
				}
				if ((bVar8 || fVar2 < (Global_1835011[iParam0 /*74*/].f_65 * Global_1835011[iParam0 /*74*/].f_65)) || Global_1898346[iParam1 /*6*/].f_1 & 256 != 0)
				{
					if (!bVar8)
					{
						SCRIPTS::REQUEST_SCRIPT(&Var3);
						func_617(iParam1, 16);
					}
					if (SCRIPTS::HAS_SCRIPT_LOADED(&Var3))
					{
						Var9.f_1 = -1;
						Var9 = iParam0;
						Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&Var3, &Var9, 3, 6000);
						SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var3);
						func_563(iParam1, 16);
					}
				}
			}
		}
		return;
	}
	if (Global_1835011[iParam0 /*74*/].f_17)
	{
		if (Global_1898346[iParam1 /*6*/].f_1 & 64 != 0)
		{
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1835011[iParam0 /*74*/].f_16))
			{
				func_563(iParam1, 196);
			}
		}
		else if (Global_1898346[iParam1 /*6*/].f_1 & 32 != 0)
		{
			if (!SCRIPTS::HAS_SCRIPT_LOADED(&Var3))
			{
				func_563(iParam1, 32);
				return;
			}
			bVar12 = func_1367(iParam0);
			if ((fVar2 < (Global_1835011[iParam0 /*74*/].f_65 * Global_1835011[iParam0 /*74*/].f_65) || func_569(&(Global_1835011[iParam0 /*74*/].f_29), 32768)) || bVar12)
			{
				iVar13 = 0;
				if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), 131072))
				{
					SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
					iVar13 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
					while (iVar13 != 0)
					{
						if (SCRIPTS::_GET_HASH_OF_THREAD(iVar13) == GET_HASH_KEY("MP_INTRO"))
						{
						}
						else
						{
							iVar13 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
						}
					}
				}
				if (SCRIPTS::DOES_THREAD_EXIST(iVar13) && SCRIPTS::IS_THREAD_ACTIVE(iVar13, false))
				{
					Global_1835011[iParam0 /*74*/].f_16 = iVar13;
				}
				else if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), 65536))
				{
					iVar14 = iParam0;
					Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&Var3, &iVar14, 2, 63250);
				}
				else
				{
					vVar16.f_1 = -1;
					vVar16.x = iParam0;
					if (bVar12)
					{
						func_1368(&(vVar16.f_2), 0);
					}
					Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&Var3, &vVar16, 3, 6000);
				}
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Var3);
				func_617(iParam1, 64);
				func_563(iParam1, 32);
			}
		}
		else
		{
			SCRIPTS::REQUEST_SCRIPT(&Var3);
			func_617(iParam1, 16);
			if (SCRIPTS::HAS_SCRIPT_LOADED(&Var3))
			{
				func_617(iParam1, 32);
				func_563(iParam1, 16);
			}
		}
	}
}

bool func_569(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_570(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_571()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_572(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_562(iParam0))
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

Vector3 func_573(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_574(int iParam0)
{
	return (func_1364(iParam0) / 2f);
}

bool func_575(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_112() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_576(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_775(iParam0, &iVar0, &iVar1);
	if (!func_1369(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1370(iVar0, iVar1);
}

bool func_577(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_578(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_579(int iParam0)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_446(func_422(iVar0)))
	{
		return true;
	}
	return false;
}

int func_580(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

bool func_581(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_427(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	if (func_1371(iParam0))
	{
		return true;
	}
	func_1372(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	func_582(iVar0);
	iVar2 = func_430(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_129(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		func_617(iVar2, 0);
		return true;
	}
	return false;
}

int func_582(int iParam0)
{
	if (func_1188(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		func_1189(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

int func_583(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_581(iParam0, 1);
	func_425(iVar0);
	if (bParam1)
	{
		func_1373(&Global_1899778, iVar0);
	}
	func_426(iVar0);
	return 1;
}

bool func_584(int iParam0)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		return false;
	}
	return PED::_0xA1FBAC56D38563E2(Global_1392915.f_121[iVar0 /*20*/].f_8);
}

int func_585(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_1357(func_559(iParam0));
}

bool func_586(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_587(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_588(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

int func_589(int iParam0)
{
	if (!func_586(iParam0))
	{
		return 0;
	}
	if (!func_1127(iParam0, 2))
	{
		return 0;
	}
	if (func_1375(func_1374(iParam0)))
	{
		return func_815(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_1376(iParam0), 0);
}

void func_590(int iParam0)
{
	int iVar0;

	iVar0 = func_585(Global_1898330[iParam0]);
}

bool func_591(int iParam0)
{
	if (!func_1377(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 3;
}

bool func_592(int iParam0)
{
	if (!func_1377(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 1;
}

bool func_593(int iParam0)
{
	if (((((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 0) || iParam0 == 1) || iParam0 == 2)
	{
		return true;
	}
	return false;
}

bool func_594(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

int func_595(int iParam0)
{
	char[] cVar0[8];

	StringCopy(&cVar0, func_597(iParam0), 8);
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_596(int iParam0)
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar8 = GET_HASH_KEY("BLIP_ROBBERY_COACH");
	iVar9 = iVar8;
	iVar10 = MISC::GET_HASH_KEY("CR_COACH_TO");
	StringCopy(&cVar0, func_597(iParam0), 64);
	StringConCat(&cVar0, "_DESC", 64);
	iVar11 = 4;
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar11, func_595(iParam0), func_1378(iParam0), iVar10, MISC::GET_HASH_KEY(&cVar0), 0);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar11, func_595(iParam0), iVar9, MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar11, func_595(iParam0), MISC::GET_HASH_KEY("MISSION_COACH_ROBBERY"), MISC::GET_HASH_KEY("SP_MISSIONS_4"));
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar11, func_595(iParam0)))
	{
	}
}

char* func_597(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "CRRH1";
		case 5:
			return "CRRH2";
		case 6:
			return "CRRH3";
		case 0:
			return "CRST1";
		case 1:
			return "CRST2";
		case 2:
			return "CRST3";
		default:
			break;
	}
	return "PRCCH";
}

void func_598(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	iVar0 = 4;
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_595(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_595(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_599(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		vVar0 = { func_896(iParam0) };
		if (func_587(vVar0))
		{
			return;
		}
		func_827(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, "CoachRob", 0, 0, 0, 0, -1082130432 /* Float: -1f */);
		func_805(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 0, 0, 5);
		Global_1392388.f_10[iParam0 /*13*/].f_10 = MAP::BLIP_ADD_FOR_RADIUS(-1559907306, vVar0, func_897(iParam0));
		Global_1392388.f_10[iParam0 /*13*/].f_11 = MAP::BLIP_ADD_FOR_COORDS(1673015813, vVar0);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392388.f_10[iParam0 /*13*/].f_11, "PROC_BLIP_CHROB");
		MAP::SET_BLIP_SPRITE(Global_1392388.f_10[iParam0 /*13*/].f_11, GET_HASH_KEY("BLIP_AMBIENT_COACH"), false);
		if (iParam0 == 13)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1392388.f_10[iParam0 /*13*/].f_11, -1186550032);
		}
		if (bParam1)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1392388.f_10[iParam0 /*13*/].f_11, 580546400);
		}
		func_1379(Global_1392388.f_10[iParam0 /*13*/].f_10, bParam1);
		if (func_594(iParam0))
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(4, func_595(iParam0)))
			{
				func_596(iParam0);
			}
			func_598(iParam0, "CR_O_GOAMBUSH", "CR_O_GOAMBUSH", -1082130432 /* Float: -1f */);
		}
	}
}

bool func_600(int iParam0)
{
	if (iParam0 == 1)
	{
		return false;
	}
	return true;
}

void func_601(int iParam0, int iParam1)
{
	if (func_1380(iParam1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1898346[iParam0 /*6*/]))
	{
		Global_1898346[iParam0 /*6*/] = 0;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam1 /*18*/].f_5))
	{
		func_321(iParam1, 0);
	}
}

bool func_602(int iParam0, int iParam1)
{
	return (Global_1392240.f_1[iParam0 /*18*/].f_16 && iParam1) != 0;
}

bool func_603(int iParam0)
{
	if (Global_1879534)
	{
		return true;
	}
	if (Global_1879534.f_1)
	{
		return true;
	}
	return false;
}

void func_604(int iParam0)
{
	int iVar0;

	iVar0 = func_585(Global_1898330[iParam0]);
	if (!func_1380(iVar0))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iVar0 /*18*/].f_5))
	{
		func_948(iVar0, 0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1898346[iParam0 /*6*/]))
	{
		Global_1898346[iParam0 /*6*/] = Global_1392240.f_1[iVar0 /*18*/].f_5;
	}
}

void func_605(int iParam0)
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		return;
	}
	func_790(&(Global_1392626[iParam0 /*32*/].f_9), 2);
}

int func_606()
{
	return func_1382(func_1381());
}

int func_607()
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

void func_608(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (iParam0 != iParam2)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 8192 == 0)
		{
			if (func_1383(iParam0))
			{
				func_1384(iParam0, 0, 1, 1, 1);
				if (Global_1347702[iParam0 /*49*/].f_13 & 16384 == 0)
				{
					func_1385(iParam0, 1);
					func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 16384);
				}
				return;
			}
			else if (Global_1347702[iParam0 /*49*/].f_13 & 16384 != 0)
			{
				func_1385(iParam0, 0);
				func_544(&(Global_1347702[iParam0 /*49*/].f_13), 16384);
			}
		}
	}
	func_527(iParam0);
	vVar0 = { func_609(iParam0) };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	bVar4 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	if (iParam0 != iParam2 && Global_1347702[iParam0 /*49*/].f_13 & 8192 == 0)
	{
		if (func_447(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			func_1384(iParam0, 1, 1, 1, 1);
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
		{
			func_1353(iParam0, bVar4, vVar0);
			func_1387(iParam0, bVar4, fVar3);
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			return;
		}
		if (func_1388(iParam0))
		{
			func_1389(iParam0);
		}
		else
		{
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 8388608 != 0)
		{
			iVar5 = func_1390(iParam0);
			if (iVar5 != -1)
			{
				if (func_723(iVar5))
				{
					if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
					{
						if (Global_1347702[iParam0 /*49*/].f_14 & 32768 == 0)
						{
							func_1352(iParam0, 32768);
							func_1353(iParam0, bVar4, vVar0);
						}
					}
					func_1384(iParam0, 0, 0, 0, 0);
					return;
				}
				else if (func_715(iVar5))
				{
					if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
					{
						if (Global_1347702[iParam0 /*49*/].f_14 & 32768 == 0)
						{
							func_1352(iParam0, 32768);
							func_1353(iParam0, bVar4, vVar0);
						}
					}
					func_1384(iParam0, 0, 0, 0, 0);
					return;
				}
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_45 != -1)
		{
			if (func_723(Global_1347702[iParam0 /*49*/].f_45))
			{
				if (Global_1347702[iParam0 /*49*/].f_14 & 2048 == 0)
				{
					func_1352(iParam0, 2048);
					func_1353(iParam0, bVar4, vVar0);
				}
				func_1384(iParam0, 0, 0, 0, 0);
				return;
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_46 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 268435456 == 0)
			{
				if (!func_1391(iParam3, Global_1347702[iParam0 /*49*/].f_46))
				{
					func_1384(iParam0, 0, 1, 0, 0);
					return;
				}
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 65536 == 0 && !func_1392(iParam0))
		{
			func_1393(iParam0);
			func_1384(iParam0, 0, 0, 0, 0);
			return;
		}
		else if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			fVar6 = func_1394(iParam0);
			if (iParam0 == 155)
			{
				fVar6 = Global_1347702[iParam0 /*49*/].f_19;
			}
			if (fVar3 > (fVar6 * fVar6) || !func_1395(iParam0, bParam1))
			{
				func_544(&(Global_1347702[iParam0 /*49*/].f_13), 16);
				if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					func_1396(iParam0, vVar0, 1, 0);
				}
				else
				{
					func_1397(iParam0);
				}
			}
			else
			{
				return;
			}
		}
		if (!bParam1)
		{
			if (!func_1398(iParam0, 0, 1, 1, 1))
			{
				if (Global_1347702[iParam0 /*49*/].f_14 & 2 == 0)
				{
					func_1384(iParam0, 0, 1, 0, 1);
				}
				return;
			}
		}
		if (func_1395(iParam0, bParam1))
		{
			if (iParam0 == 24 && func_1399(Global_1347702[24 /*49*/].f_15) == 1)
			{
				if (fVar3 >= (250f * 250f))
				{
					func_1400(Global_1347702[24 /*49*/].f_15, 0);
				}
				else
				{
					fVar6 = 250f;
				}
			}
			else if (iParam0 == 134 && func_1112(Global_1347702[134 /*49*/].f_15) == 1)
			{
				if (fVar3 >= (350f * 350f))
				{
					func_1401(Global_1347702[134 /*49*/].f_15, 0);
				}
				else
				{
					fVar6 = 350f;
				}
			}
			else
			{
				fVar6 = func_1394(iParam0);
			}
			if (fVar3 < (fVar6 * fVar6))
			{
				iVar7 = 1;
				if (func_142(Global_1347702[iParam0 /*49*/].f_13, 32) || func_142(Global_1347702[iParam0 /*49*/].f_13, 4096))
				{
					iVar7 = 0;
				}
				func_1384(iParam0, 0, iVar7, 0, 0);
				return;
			}
			else
			{
				if (Global_1347702[iParam0 /*49*/].f_12 & 16384 != 0)
				{
					func_1348(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
				}
				if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
				{
					func_1402(iParam0, !bVar4, 1);
				}
			}
		}
		else
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 16384 != 0)
			{
				func_1348(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
			}
			if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
			{
				func_1402(iParam0, !bVar4, 1);
			}
		}
	}
	else if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
	{
		return;
	}
	fVar8 = func_1403(iParam0);
	if ((fVar3 < (fVar8 * fVar8) || Global_1347702[iParam0 /*49*/].f_12 & 32 != 0) || iParam0 == iParam2)
	{
		if (!func_246(Global_1347702[iParam0 /*49*/].f_15))
		{
			func_248(Global_1347702[iParam0 /*49*/].f_15);
			if (func_1404(iParam0, &iVar10, &iVar9))
			{
				func_1405(iVar10, iVar9, 1, 977356591, -1);
			}
		}
		else if (func_1406(Global_1347702[iParam0 /*49*/].f_14, 2))
		{
		}
		else if (!bVar4)
		{
			func_1396(iParam0, vVar0, 1, 0);
		}
	}
	else
	{
		if (func_246(Global_1347702[iParam0 /*49*/].f_15))
		{
			if (fVar3 > (Global_1347702[iParam0 /*49*/].f_17 * Global_1347702[iParam0 /*49*/].f_17))
			{
				func_129(Global_1347702[iParam0 /*49*/].f_15);
				func_542(iParam0, 0, 1, 1, 32);
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
		{
			func_1402(iParam0, bVar4, 1);
			bVar4 = true;
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_36 != GET_HASH_KEY("BLIP_RC"))
		{
			if (!bVar4)
			{
				func_1396(iParam0, vVar0, 1, 0);
			}
		}
		else if (bVar4)
		{
			func_543(iParam0, 0);
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 1024 != 0)
		{
			func_1348(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
		}
	}
}

Vector3 func_609(int iParam0)
{
	vector3 vVar0;

	if (!func_141(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1407(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_610(int iParam0, vector3 vParam1, float fParam4)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 == 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 2048 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 < 0f)
	{
		func_1348(&(Global_1347702[iParam0 /*49*/].f_12), 1048576);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	if (func_1408(iParam0, fParam4))
	{
		func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 2048);
		func_544(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		func_543(iParam0, 0);
		func_1396(iParam0, vParam1, 1, 0);
	}
}

bool func_611(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1409(iParam0);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (Global_1391438.f_7[iVar1 /*99*/].f_9 == iVar0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_612(int iParam0)
{
	if (func_246(iParam0))
	{
		func_312(iParam0, 0, 2);
	}
}

bool func_613(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1391438.f_1)
	{
		return true;
	}
	uParam0->f_98++;
	if (uParam0->f_98 < 10)
	{
		return false;
	}
	uParam0->f_98 = 0;
	if (func_114(0, 1, 1) && !func_446(uParam0->f_10))
	{
		return true;
	}
	if (bParam4)
	{
		if ((func_1410(*uParam0) && !func_1411(*uParam0, Global_1391438.f_206[0], 0)) && !func_1411(*uParam0, Global_1391438.f_206[1], 0))
		{
			return true;
		}
	}
	if (func_1145() != 1)
	{
		return true;
	}
	if (func_1412(*uParam0, 29, 1))
	{
		return true;
	}
	if (!func_335(Global_35, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (!func_335(func_958(*uParam0), 0))
		{
			*uParam1 = 1;
		}
	}
	if (uParam0->f_9 == GET_HASH_KEY("HAI_FIVE_FINGER_FILLET_01") || uParam0->f_9 == GET_HASH_KEY("HAI_FIVE_FINGER_FILLET_02"))
	{
		if (func_415(1) < 10)
		{
			return true;
		}
	}
	if (func_335(uParam0->f_1, 0) && PED::_0x331550B212014B92(uParam0->f_1, Global_35))
	{
		return true;
	}
	if (func_1413())
	{
		return true;
	}
	if (bParam3)
	{
		if (func_46() != func_113())
		{
			*uParam1 = 1;
		}
		if (!func_587(uParam0->f_14) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_14, true) > 200f)
		{
			*uParam1 = 1;
		}
	}
	if (((!func_1414(&(uParam0->f_78)) && !uParam0->f_78.f_15) && !func_440(GET_HASH_KEY("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) && !func_440(GET_HASH_KEY("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		func_1190("Time window expired for ", 0, 1);
		func_1190(" - Cancelling launch.", 1, 0);
		*uParam1 = 0;
		return true;
	}
	if (bParam5)
	{
		if (!func_587(uParam0->f_14))
		{
			if (func_1199(uParam0->f_14, 6f, 4, 1))
			{
				func_1190("A lock volume now blocks ", 0, 1);
				func_1190(" - Cancelling launch.", 1, 0);
				*uParam1 = 0;
				return true;
			}
		}
	}
	if (*uParam1)
	{
		return true;
	}
	return false;
}

void func_614(var uParam0, int iParam1, bool bParam2)
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

char* func_615(char* sParam0)
{
	return sParam0;
}

bool func_616(var uParam0, int iParam1)
{
	if ((*uParam0 && iParam1) != 0)
	{
		return true;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	if (!func_577(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

bool func_618(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_133(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_619(int iParam0)
{
	return func_567(iParam0);
}

bool func_620(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_145(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_621(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_141(iParam0))
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

void func_622(int iParam0)
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

int func_623(int iParam0)
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

void func_624(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		MAP::BLIP_ADD_MODIFIER(Global_36308[iParam0], iParam1);
	}
}

void func_625(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_775(iParam0, &iVar0, &iVar1);
	if (!func_1369(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_213(iParam0, 1024))
	{
		return;
	}
	func_1370(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

bool func_626(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_627(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_628(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

void func_629(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_630(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_631(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

int func_632(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_633(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

void func_634(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_3 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_635(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_1415(func_633(iParam0)) };
	Global_36308[iParam0] = MAP::BLIP_ADD_FOR_COORDS(func_1219(func_628(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_36308[iParam0], func_1220(func_628(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_36308[iParam0], func_628(iParam0), iParam0);
}

void func_636(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		func_1170(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_637(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1170(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_638(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1170(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_639(bool bParam0)
{
	func_1170(&Global_1956614, bParam0);
}

void func_640(bool bParam0)
{
	func_1170(&(Global_1415412.f_3), bParam0);
}

void func_641(bool bParam0)
{
	if (func_549(Global_1934051.f_33))
	{
		func_1207(Global_1934051.f_33, 7148155);
	}
	func_1170(&(Global_1934051.f_33), bParam0);
}

void func_642(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1206(func_1204(iVar0));
		if (iVar1 != 0)
		{
			func_1207(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		func_1170(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_643(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_629(iVar0, -1);
		func_630(iVar0, 0);
		func_631(iVar0, 0);
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

int func_644()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

void func_645(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	if (DECORATOR::DECOR_EXIST_ON(Global_35, sParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(Global_35, sParam0);
		if (!func_666(iVar0))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
			DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			return;
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
			DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			return;
		}
		iVar1 = DECORATOR::DECOR_GET_INT(Global_35, sParam1);
		if (func_1279(iVar1))
		{
			if (func_793(iVar1, 0))
			{
				DECORATOR::DECOR_REMOVE(Global_35, sParam0);
				DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			}
		}
	}
}

int func_646(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_587(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1894899.f_161)
	{
		iVar2 = Global_1894899.f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, Global_1888801[iVar2 /*35*/].f_6);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_47(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

bool func_647(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_648(int iParam0)
{
	if (!func_741(iParam0))
	{
		return;
	}
	func_1416(1);
}

bool func_649()
{
	return (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_650()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_651()
{
	int iVar0;

	if (func_774())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_652(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("W_SP_BOWARROW_CHARLES"):
		case GET_HASH_KEY("W_MELEE_HATCHET04"):
		case GET_HASH_KEY("W_REPEATER_CARBINE01"):
		case GET_HASH_KEY("W_MELEE_TOMAHAWK02"):
		case GET_HASH_KEY("W_MELEE_KNIFE08"):
		case GET_HASH_KEY("W_MELEE_KNIFE20"):
		case GET_HASH_KEY("W_MELEE_HATCHET05"):
		case GET_HASH_KEY("W_MELEE_LASSO03"):
		case GET_HASH_KEY("W_MELEE_KNIFE10"):
		case GET_HASH_KEY("W_MELEE_KNIFE09"):
		case GET_HASH_KEY("W_MELEE_KNIFE17"):
		case GET_HASH_KEY("W_MELEE_HATCHET02"):
		case GET_HASH_KEY("W_MELEE_HATCHET03"):
		case GET_HASH_KEY("W_REVOLVER_SCHOFIELD01"):
		case GET_HASH_KEY("W_MELEE_LASSO01"):
		case GET_HASH_KEY("W_SHOTGUN_REPEATING01"):
		case GET_HASH_KEY("W_REPEATER_WINCHESTER01"):
		case GET_HASH_KEY("W_MELEE_TOMAHAWK01"):
		case GET_HASH_KEY("W_PISTOL_MAUSER01"):
		case GET_HASH_KEY("W_REVOLVER_CATTLEMAN01"):
		case GET_HASH_KEY("W_MELEE_KNIFE16"):
		case GET_HASH_KEY("W_SHOTGUN_SEMIAUTO01"):
		case GET_HASH_KEY("W_MELEE_KNIFE15"):
		case GET_HASH_KEY("W_MELEE_KNIFE03"):
		case GET_HASH_KEY("W_MELEE_BROKENSWORD01"):
		case GET_HASH_KEY("W_SHOTGUN_PUMPACTION01"):
		case GET_HASH_KEY("W_MELEE_KNIFE01"):
		case GET_HASH_KEY("W_MELEE_KNIFE02"):
		case GET_HASH_KEY("W_MELEE_KNIFE04"):
		case GET_HASH_KEY("W_PISTOL_VOLCANIC01"):
		case GET_HASH_KEY("W_MELEE_KNIFE19"):
		case GET_HASH_KEY("W_PISTOL_SEMIAUTO01"):
		case GET_HASH_KEY("W_RIFLE_BOLTACTION01"):
		case GET_HASH_KEY("W_MELEE_KNIFE18"):
		case GET_HASH_KEY("W_REVOLVER_DOUBLEACTION06"):
		case GET_HASH_KEY("W_MELEE_KNIFE06"):
		case GET_HASH_KEY("W_RIFLE_CARCANO01"):
		case GET_HASH_KEY("W_REVOLVER_SCHO