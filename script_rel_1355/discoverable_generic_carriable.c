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
	var uLocal_15 = 0;
	int iLocal_16[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_47[4] = { 0, 0, 0, 0 };
	var uLocal_52[2] = { 0, 0 };
	int iLocal_55[4] = { 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 5;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 5;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	struct<5> Local_81 = { 0, 0, 0, 0, -1 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 2;
	var uLocal_106 = 1;
	var uLocal_107 = 1;
	var uLocal_108 = 1;
	var uLocal_109 = 0;
	var uLocal_110 = 1;
	var uLocal_111 = 2;
	var uLocal_112 = 2;
	var uLocal_113 = 3;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 3;
	var uLocal_117 = 1;
	var uLocal_118 = 3;
	var uLocal_119 = 3;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_80 = ScriptParam_0;
	Local_81.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_81);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_81);
	}
	while (func_2())
	{
		switch (iLocal_79)
		{
			case 0:
				if (func_3(&Local_81))
				{
					iLocal_79 = 1;
					if (Local_81.f_4 == -1)
					{
						Local_81.f_4 = func_4(&Local_81);
					}
				}
				break;
			case 1:
				if (func_5(&Local_81))
				{
					func_6(&Local_81);
				}
				func_7(&Local_81);
				func_8(&Local_81);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_81);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(uLocal_80);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	int iVar0;

	if (Local_81 == 0)
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		Local_81 = func_10(iVar0);
		return false;
	}
	if (func_11(Local_81, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}
	func_12(uParam0);
	return true;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar2 = -1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (*uParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*uParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*uParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > func_14(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

bool func_5(var uParam0)
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
		case 677950956:
			if (func_15())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1861313914:
			if (func_16(59))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!func_17(uParam0))
		{
			func_18(uParam0);
			func_19(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!func_17(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (func_20(uParam0))
				{
					func_19(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (func_22(uParam0->f_6.f_2))
			{
				func_19(uParam0, 7);
				return;
			}
			func_19(uParam0, 1);
			break;
		case 1:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				func_23(&(uParam0->f_6.f_5));
				if ((((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && func_20(uParam0)))
				{
					func_19(uParam0, 3);
				}
				else
				{
					func_19(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_24(&(uParam0->f_6.f_5)))
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				func_25(&(uParam0->f_6.f_5));
			}
			else if (func_26(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				func_19(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 0))
			{
				func_28(uParam0);
				if ((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || (*uParam0 == -1761578407 && func_20(uParam0)))
				{
					func_19(uParam0, 6);
				}
				else
				{
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			else if (func_31(uParam0))
			{
				if (!func_11(*uParam0, 16))
				{
					func_32(*uParam0, 16);
					if (func_33(uParam0->f_6.f_8))
					{
						func_34(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == -321841939)
					{
						func_37(1, -1);
					}
				}
				else if (func_33(uParam0->f_6.f_8))
				{
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				func_25(&(uParam0->f_6.f_5));
				func_19(uParam0, 5);
			}
			else if (func_38(uParam0->f_6.f_8, 1) > 0f)
			{
				if (!func_11(*uParam0, 16))
				{
					if (!func_39(uParam0->f_3, 2))
					{
						func_40(&(uParam0->f_3), 2);
						if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(uParam0);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				func_43(&(uParam0->f_3), 2);
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				func_42(uParam0);
			}
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_Y")))
			{
			}
			else if (func_26(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (func_39(uParam0->f_3, 2))
				{
					func_43(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					func_44(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					func_18(uParam0);
					func_19(uParam0, 7);
				}
				else
				{
					func_19(uParam0, 6);
				}
			}
			break;
		case 6:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;

	if (!func_39(uParam0->f_3, 8))
	{
		if (func_45(*uParam0) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_40(&(uParam0->f_3), 8);
				if (*uParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iLocal_62 > 0 && iLocal_62 < 13)
	{
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
			{
				func_43(&(uParam0->f_3), 1);
			}
			if (*uParam0 == 870958936 || *uParam0 == 513110082)
			{
				if (func_48(*uParam0))
				{
					if (func_20(uParam0))
					{
						func_49(&iLocal_62, 13, 1);
						return;
					}
					func_49(&iLocal_62, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 1284679164 || *uParam0 == -1494823099)
			{
				if (*uParam0 == 1284679164)
				{
					if (!func_52(func_50(uParam0, 0), func_51(uParam0, uParam0->f_4), 1))
					{
						return;
					}
					if (func_48(*uParam0))
					{
						func_49(&iLocal_62, 13, 1);
						return;
					}
				}
				else if (*uParam0 == -1494823099)
				{
					if (func_48(*uParam0))
					{
						func_49(&iLocal_62, 13, 1);
						return;
					}
					if (!func_52(func_50(uParam0, 0), func_53(uParam0, 0), 1))
					{
						return;
					}
				}
			}
			else if (*uParam0 == 118535038)
			{
				if (!func_54(uParam0))
				{
					return;
				}
				if (func_48(*uParam0))
				{
					func_55(1766284049, 1, 0);
					func_49(&iLocal_62, 13, 1);
					return;
				}
			}
			else
			{
				if (func_48(*uParam0))
				{
					func_49(&iLocal_62, 13, 1);
					return;
				}
				if (*uParam0 == 373034311)
				{
					if (!func_48(-321841939))
					{
						if (func_56() >= 20)
						{
							if (!func_48(-321841939))
							{
								func_57(-321841939);
							}
						}
						return;
					}
				}
				else if (*uParam0 == 464413478)
				{
					if (!func_58(Global_35, func_53(uParam0, 1), 75f, 1, 1))
					{
						return;
					}
				}
				else if (*uParam0 == 1187689415)
				{
					func_59();
				}
				else if (*uParam0 == -261997819)
				{
					if (!func_60())
					{
						return;
					}
				}
			}
			func_61(uParam0);
			func_49(&iLocal_62, 1, 1);
			break;
		case 1:
			func_62(uParam0);
			func_49(&iLocal_62, 2, 1);
			break;
		case 2:
			if (!func_63(uParam0) || func_64())
			{
				return;
			}
			func_49(&iLocal_62, 3, 1);
			break;
		case 3:
			if (func_65(uParam0))
			{
				func_49(&iLocal_62, 10, 1);
			}
			break;
		case 10:
			if (!func_39(uParam0->f_3, 1))
			{
				func_40(&(uParam0->f_3), 1);
			}
			if (*uParam0 == -1427565340)
			{
				if (!iLocal_55[0])
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_66[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_66[0], Global_35, 1, 1))
					{
						if (func_67(&uLocal_66, func_53(uParam0, 1), func_66(uParam0, 1), 1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
							{
								ENTITY::SET_ENTITY_VELOCITY(uLocal_66[1], 0f, 0f, 0.25f);
								iLocal_55[0] = 1;
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (!iLocal_55[1])
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) > 0.2f)
						{
							iLocal_55[1] = 1;
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) < 0.01f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
						TASK::_0x78B4567E18B54480(uLocal_66[1]);
						iLocal_55[1] = 0;
						func_49(&iLocal_62, 11, 1);
					}
				}
			}
			else if (*uParam0 == 464413478)
			{
				if (!iLocal_55[0])
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_66[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_66[0], Global_35, 1, 1))
					{
						iLocal_55[0] = 1;
					}
				}
				else if (!iLocal_55[1])
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) > 0.1f)
						{
							iLocal_55[1] = 1;
						}
					}
				}
				else if (!iLocal_55[2])
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) < 0.1f)
						{
							iLocal_55[2] = 1;
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
							TASK::_0x78B4567E18B54480(uLocal_66[1]);
						}
					}
				}
				if (iLocal_55[2])
				{
					if (!func_48(*uParam0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && PED::_GET_CARRIER_AS_PED(uLocal_66[1]) == Global_35)
						{
							func_68(uParam0);
							func_69(uParam0);
							func_49(&iLocal_62, 13, 1);
						}
						else if (func_70())
						{
							if (func_71(GET_HASH_KEY("PROVISION_GOLD_NUGGET")))
							{
								func_68(uParam0);
								func_69(uParam0);
								func_49(&iLocal_62, 13, 1);
							}
						}
					}
				}
			}
			else if (*uParam0 == 733338689)
			{
				if (!func_39(Global_40.f_8863.f_149, 32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						func_40(&(Global_40.f_8863.f_149), 32);
						func_73(func_72(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
				if (!func_39(Global_40.f_8863.f_149, 64))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
					{
						if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							func_49(&iLocal_62, 11, 1);
						}
					}
				}
				if (func_39(Global_40.f_8863.f_149, 32) && func_39(Global_40.f_8863.f_149, 64))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if ((*uParam0 == -261997819 || *uParam0 == -599506500) || *uParam0 == 1424723727)
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_16[0]))
				{
					func_68(uParam0);
					if (!func_75(func_74(uParam0, uParam0->f_4)))
					{
						func_76(func_74(uParam0, uParam0->f_4));
					}
					func_73(func_74(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 1187689415)
			{
				if (!func_11(*uParam0, 32))
				{
					if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_77(*uParam0);
					}
				}
				iVar0 = 0;
				while (iVar0 <= (30 - 1))
				{
					if (!func_78(iVar0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[iVar0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_16[iVar0]))
						{
							func_79(iVar0);
							func_80(uParam0);
						}
					}
					iVar0++;
				}
				if (func_81())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 870958936 || *uParam0 == 2072029413)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_49(&iLocal_62, 11, 1);
					}
				}
			}
			else if (*uParam0 == 2135153015)
			{
				if (!func_39(Global_40.f_8863.f_149, 1024))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						func_40(&(Global_40.f_8863.f_149), 1024);
						func_73(func_72(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]) && !TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_47[0]))
						{
							TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_47[0], true);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (func_58(Global_35, func_53(uParam0, 1), 15f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(uLocal_66[1], func_82(uParam0, 0));
					}
				}
				if (!func_39(Global_40.f_8863.f_149, 2048))
				{
					if (func_70())
					{
						if (func_71(func_82(uParam0, 0)))
						{
							func_40(&(Global_40.f_8863.f_149), 2048);
						}
					}
				}
				if (func_39(Global_40.f_8863.f_149, 2048) && func_39(Global_40.f_8863.f_149, 1024))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 513110082)
			{
				if (uParam0->f_4 == 2)
				{
					iVar1 = 3;
					while (iVar1 <= 7)
					{
						if (!func_83(uParam0, iVar1))
						{
							if (func_70())
							{
								if (func_71(func_82(uParam0, iVar1)))
								{
									func_84(uParam0, iVar1);
								}
							}
						}
						iVar1++;
					}
					if (!func_83(uParam0, 2))
					{
						if (!iLocal_55[3])
						{
							if (func_58(Global_35, func_85(uParam0, 0), 15f, 1, 1))
							{
								if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
								{
									iLocal_47[0] = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_86(uParam0, 2), func_87(uParam0, 0), 1f, 0, false);
									if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
									{
										OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(iLocal_16[0], 1);
									}
								}
								else if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									iLocal_55[3] = 1;
									if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
									{
										OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(iLocal_16[0], 0);
									}
								}
							}
						}
						else if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_16[0]))
						{
							func_84(uParam0, 2);
							if (!func_75(func_74(uParam0, 0)))
							{
								func_76(func_74(uParam0, 0));
							}
							func_73(func_74(uParam0, 0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							func_73(func_88(uParam0), WEAPON::GET_WEAPON_CLIP_SIZE(func_74(uParam0, 0)) * 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
					if ((((((((func_39(Global_40.f_8863.f_150, 1) && func_39(Global_40.f_8863.f_150, 2)) && func_39(Global_40.f_8863.f_150, 8)) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128)) && func_39(Global_40.f_8863.f_150, 4)) && !func_70())
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
					else if ((((((func_39(Global_40.f_8863.f_150, 8) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128)) && func_39(Global_40.f_8863.f_150, 4)) && !func_70())
					{
						func_77(*uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
				{
					if (func_58(Global_35, func_53(uParam0, 0), 15f, 1, 1))
					{
						if (uParam0->f_4 == 0)
						{
							if (func_39(Global_40.f_8863.f_150, 2))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 1));
							}
							else
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 0));
							}
						}
						else if (uParam0->f_4 == 1)
						{
							if (func_39(Global_40.f_8863.f_150, 1))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 1));
							}
							else
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 0));
							}
						}
						if (func_70())
						{
							if (func_71(func_82(uParam0, 0)) || func_71(func_82(uParam0, 1)))
							{
								if (uParam0->f_4 == 0)
								{
									func_84(uParam0, 0);
								}
								else if (uParam0->f_4 == 1)
								{
									func_84(uParam0, 1);
								}
								func_80(uParam0);
								func_77(*uParam0);
								if (uParam0->f_4 == 0)
								{
									if (func_39(Global_40.f_8863.f_150, 2))
									{
										if (func_89(func_82(uParam0, 0), 1, 0))
										{
											func_90(func_82(uParam0, 0), 1, 1, -142743235, 0);
										}
									}
								}
								else if (uParam0->f_4 == 1)
								{
									if (func_39(Global_40.f_8863.f_150, 1))
									{
										if (func_89(func_82(uParam0, 0), 1, 0))
										{
											func_90(func_82(uParam0, 0), 1, 1, -142743235, 0);
										}
									}
								}
							}
						}
						else if (func_39(Global_40.f_8863.f_150, 1) && func_39(Global_40.f_8863.f_150, 2))
						{
							if (func_89(func_82(uParam0, 1), 1, 0))
							{
								func_90(func_82(uParam0, 1), 1, 1, -142743235, 0);
							}
							func_73(func_82(uParam0, 2), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
							func_69(uParam0);
							func_49(&iLocal_62, 13, 1);
						}
					}
				}
			}
			else if (*uParam0 == 247563739)
			{
				if (func_39(Global_40.f_8863.f_150, 256))
				{
					if (func_11(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
				else
				{
					if ((!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_91(uParam0);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
					{
						if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							func_49(&iLocal_62, 11, 1);
						}
					}
				}
			}
			else if (*uParam0 == 1284679164)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
				{
					func_77(*uParam0);
				}
				if (((func_39(Global_40.f_8863.f_149, 131072) && func_39(Global_40.f_8863.f_149, 262144)) && func_39(Global_40.f_8863.f_149, 524288)) && func_39(Global_40.f_8863.f_149, 1048576))
				{
					if (func_11(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
				else
				{
					iVar2 = 0;
					while (iVar2 <= 3)
					{
						if (!func_83(uParam0, iVar2))
						{
							if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[iVar2]))
							{
								func_92(uParam0, &(iLocal_47[iVar2]), &uLocal_66, iVar2);
								if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[iVar2]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									func_84(uParam0, iVar2);
									func_49(&iLocal_62, 11, 1);
								}
							}
						}
						iVar2++;
					}
				}
			}
			else if (*uParam0 == -1859413640)
			{
				iVar3 = 0;
				while (iVar3 <= 1)
				{
					if (!func_83(uParam0, iVar3))
					{
						if (func_58(Global_35, func_53(uParam0, 0), 15f, 1, 1))
						{
							if (func_70())
							{
								if (func_71(func_93(uParam0, iVar3)))
								{
									func_84(uParam0, iVar3);
									func_47(0, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
								}
							}
						}
					}
					iVar3++;
				}
				if ((func_39(Global_40.f_8863.f_149, 134217728) && func_39(Global_40.f_8863.f_149, 67108864)) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 373034311)
			{
				if (!func_39(Global_40.f_8863.f_148, 2097152))
				{
					if (func_11(*uParam0, 16))
					{
						func_40(&(Global_40.f_8863.f_148), 2097152);
						func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0);
					}
				}
				else if (!iLocal_55[3])
				{
					if (func_70())
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && func_71(func_93(uParam0, 0)))
						{
							iLocal_55[3] = 1;
						}
					}
				}
				else if (!func_70())
				{
					Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.5f);
					func_94();
					func_49(&iLocal_62, 11, 1);
				}
			}
			else if (*uParam0 == -1061274876)
			{
				iVar4 = 0;
				while (iVar4 <= 4)
				{
					if (!func_83(uParam0, iVar4))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar4]))
						{
							if (func_58(Global_35, func_53(uParam0, 0), 15f, 1, 1))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[iVar4], func_82(uParam0, iVar4));
							}
						}
						if (func_70())
						{
							if (func_71(func_82(uParam0, iVar4)))
							{
								func_84(uParam0, iVar4);
							}
						}
					}
					iVar4++;
				}
				if (((((func_39(Global_40.f_8863.f_149, 4096) && func_39(Global_40.f_8863.f_149, 8192)) && func_39(Global_40.f_8863.f_149, 16384)) && func_39(Global_40.f_8863.f_149, 32768)) && func_39(Global_40.f_8863.f_149, 65536)) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 118535038)
			{
				iVar5 = 0;
				while (iVar5 <= 2)
				{
					if (!func_83(uParam0, iVar5))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar5]))
						{
							if (func_58(Global_35, func_53(uParam0, 0), 15f, 1, 1))
							{
								TASK::_0xA6A76D666A281F2D(uLocal_66[iVar5], func_82(uParam0, iVar5));
							}
						}
						if (func_70())
						{
							if (func_71(func_82(uParam0, iVar5)))
							{
								func_84(uParam0, iVar5);
							}
						}
					}
					iVar5++;
				}
				if (((func_39(Global_40.f_8863.f_149, 128) && func_39(Global_40.f_8863.f_149, 256)) && func_39(Global_40.f_8863.f_149, 512)) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (((*uParam0 == -357364973 || *uParam0 == -1481450947) || *uParam0 == -657632) || *uParam0 == 435290930)
			{
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == -1494823099)
			{
				if (!func_39(Global_40.f_8863.f_149, 2097152))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (func_58(Global_35, func_53(uParam0, 0), 5f, 1, 1))
						{
							TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_95(uParam0, 0));
						}
					}
					if (func_70())
					{
						if (func_71(func_95(uParam0, 0)))
						{
							func_40(&(Global_40.f_8863.f_149), 2097152);
						}
					}
				}
				if (!func_39(Global_40.f_8863.f_149, 4194304))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (func_58(Global_35, func_53(uParam0, 1), 5f, 1, 1))
						{
							TASK::_0xA6A76D666A281F2D(uLocal_66[1], func_95(uParam0, 1));
						}
					}
					if (func_70())
					{
						if (func_71(func_95(uParam0, 1)))
						{
							func_40(&(Global_40.f_8863.f_149), 4194304);
						}
					}
				}
				if ((func_39(Global_40.f_8863.f_149, 2097152) && func_39(Global_40.f_8863.f_149, 4194304)) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == -780455182)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
				{
					func_77(*uParam0);
				}
				if (!func_39(Global_40.f_8863.f_149, 16777216))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (func_58(Global_35, func_53(uParam0, 0), 15f, 1, 1))
						{
							TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 0));
						}
						if (func_70())
						{
							if (func_71(func_82(uParam0, 0)))
							{
								func_40(&(Global_40.f_8863.f_149), 16777216);
							}
						}
					}
				}
				if ((func_39(Global_40.f_8863.f_149, 16777216) && func_11(*uParam0, 16)) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == -709811179)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
				{
					func_77(*uParam0);
				}
				if (!func_39(Global_40.f_8863.f_149, 33554432))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (func_70())
						{
							if (func_71(func_95(uParam0, 0)))
							{
								func_40(&(Global_40.f_8863.f_149), 33554432);
							}
						}
					}
				}
				if ((func_39(Global_40.f_8863.f_149, 33554432) && func_11(*uParam0, 16)) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
			{
				func_73(func_72(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_68(uParam0);
				func_69(uParam0);
				func_49(&iLocal_62, 13, 1);
			}
			break;
		case 11:
			if (*uParam0 == -1427565340)
			{
				if (!func_48(*uParam0))
				{
					if (func_70())
					{
						if (func_71(func_93(uParam0, 1)))
						{
							iLocal_55[3] = 1;
						}
					}
					if (iLocal_55[3] && !func_70())
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 247563739)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
				{
					func_77(*uParam0);
				}
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (!func_39(Global_40.f_8863.f_150, 256))
					{
						if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("ObjectExchange")))
							{
								func_40(&(Global_40.f_8863.f_150), 256);
								func_96(1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
							}
						}
					}
					else if (((TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]) && !PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0])) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && func_11(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 1284679164)
			{
				iVar6 = 0;
				while (iVar6 <= 0)
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[iVar6]))
					{
						if ((!PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[iVar6]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
						{
							if ((((func_11(*uParam0, 16) && func_39(Global_40.f_8863.f_149, 131072)) && func_39(Global_40.f_8863.f_149, 262144)) && func_39(Global_40.f_8863.f_149, 524288)) && func_39(Global_40.f_8863.f_149, 1048576))
							{
								func_68(uParam0);
								func_69(uParam0);
								func_49(&iLocal_62, 13, 1);
							}
							else
							{
								func_49(&iLocal_62, 10, 1);
							}
						}
					}
					iVar6++;
				}
			}
			else if (*uParam0 == 2072029413)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_68(uParam0);
						if (!func_75(func_74(uParam0, uParam0->f_4)))
						{
							func_76(func_74(uParam0, uParam0->f_4));
						}
						func_73(func_74(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 870958936)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_97(uParam0);
						func_80(uParam0);
						func_77(*uParam0);
						if ((((func_39(Global_40.f_8863.f_149, 1) && func_39(Global_40.f_8863.f_149, 2)) && func_39(Global_40.f_8863.f_149, 4)) && func_39(Global_40.f_8863.f_149, 8)) && func_39(Global_40.f_8863.f_149, 16))
						{
							func_32(*uParam0, 2);
						}
						if (!func_75(func_74(uParam0, uParam0->f_4)))
						{
							func_76(func_74(uParam0, uParam0->f_4));
						}
						func_73(func_74(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, 1);
					}
				}
			}
			else if (*uParam0 == 733338689)
			{
				if (!func_39(Global_40.f_8863.f_149, 32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						func_40(&(Global_40.f_8863.f_149), 32);
						func_73(func_72(uParam0), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
				if (!func_39(Global_40.f_8863.f_149, 64))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
					{
						if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							func_40(&(Global_40.f_8863.f_149), 64);
							if (!func_75(func_74(uParam0, uParam0->f_4)))
							{
								func_76(func_74(uParam0, uParam0->f_4));
							}
							func_73(func_74(uParam0, uParam0->f_4), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
					}
				}
				if (func_39(Global_40.f_8863.f_149, 32) && func_39(Global_40.f_8863.f_149, 64))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, 1);
				}
			}
			else if (*uParam0 == 373034311)
			{
				func_68(uParam0);
				iVar7 = func_98();
				func_99(-321841939, iVar7, 20);
				func_100(MISC::VAR_STRING(2, "MISSION_COMPLETE"));
				func_37(1, -1);
				func_69(uParam0);
				func_49(&iLocal_62, 13, 1);
			}
			break;
		case 13:
			break;
		default:
			break;
	}
}

void func_9(var uParam0)
{
	int iVar0;

	func_69(uParam0);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_14))
	{
		VOLUME::_DELETE_VOLUME(iLocal_14);
	}
	iVar0 = 0;
	while (iVar0 <= (30 - 1))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_16[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_16[iVar0]);
		}
		iVar0++;
	}
	if (*uParam0 == 1284679164)
	{
		func_52(func_50(uParam0, 0), func_51(uParam0, uParam0->f_4), 0);
	}
	else if (*uParam0 == -1494823099)
	{
		func_52(func_50(uParam0, 0), func_53(uParam0, 0), 0);
	}
	if (*uParam0 == 464413478 || *uParam0 == -1494823099)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!uLocal_52[iVar0] == 0 && ENTITY::IS_MAP_ENTITY_PINNED(uLocal_52[iVar0]))
			{
				ENTITY::_UNPIN_MAP_ENTITY(uLocal_52[iVar0]);
			}
			iVar0++;
		}
	}
	func_101(&uLocal_66, 1);
	func_102(uParam0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("WB_DISCO_CEREMONIAL_HATCHET"):
			return -261997819;
		case GET_HASH_KEY("WB_DISCO_AXE_IN_TREE"):
			return 870958936;
		case GET_HASH_KEY("WB_DISCO_AZTEC_MASK"):
			return 677950956;
		case GET_HASH_KEY("WB_DISCO_BLACK_SHEEP"):
			return -35775921;
		case GET_HASH_KEY("WB_DISCO_BOAT_IN_TREE"):
			return -1084929085;
		case GET_HASH_KEY("WB_DISCO_BOOTS_NOTE_RANGE"):
			return 2135153015;
		case GET_HASH_KEY("WB_DISCO_CIV_WAR_FORT"):
			return 1347913620;
		case GET_HASH_KEY("WB_DISCO_CIV_WAR_KNIFE"):
			return -599506500;
		case GET_HASH_KEY("WB_DISCO_CORPSE_PIT"):
			return -1568839185;
		case GET_HASH_KEY("WB_DISCO_DEAD_CIV_WAR"):
			return 1937333853;
		case GET_HASH_KEY("WB_DISCO_DREAMCATCHERS"):
			return -321841939;
		case GET_HASH_KEY("WB_DISCO_EASEL"):
			return 1034793488;
		case GET_HASH_KEY("WB_DISCO_FACE_IN_CLIFF"):
			return -2009137002;
		case GET_HASH_KEY("WB_DISCO_FOSSILIZED_MAN"):
			return -1646022773;
		case GET_HASH_KEY("WB_DISCO_GIANT_REMAINS"):
			return -1787770845;
		case GET_HASH_KEY("WB_DISCO_GRAVE"):
			return -1761578407;
		case GET_HASH_KEY("WB_DISCO_ARTHUR_GRAVE"):
			return 404434344;
		case GET_HASH_KEY("WB_DISCO_KILL_ZONE"):
			return 503180747;
		case GET_HASH_KEY("WB_DISCO_HIDDEN_TUNNEL"):
			return 308500632;
		case GET_HASH_KEY("WB_DISCO_LOVE_MESSAGE"):
			return 74587361;
		case GET_HASH_KEY("WB_DISCO_METEORITE"):
			return -709811179;
		case GET_HASH_KEY("WB_DISCO_MICAH_CAMP"):
			return 118535038;
		case GET_HASH_KEY("WB_DISCO_OLD_WORLD_SCRIPT"):
			return -1609238411;
		case GET_HASH_KEY("WB_DISCO_PHONOGRAPH_HOUSE"):
			return -1614148516;
		case GET_HASH_KEY("WB_DISCO_PILE_SKULLS"):
			return 173549940;
		case GET_HASH_KEY("WB_DISCO_PIRATE_KNIFE"):
			return 1424723727;
		case GET_HASH_KEY("WB_DISCO_POWDER_KEG"):
			return -1308658310;
		case GET_HASH_KEY("WB_DISCO_REGISTER_ROCK"):
			return -1761189332;
		case GET_HASH_KEY("WB_DISCO_SCARECROW_1"):
			return -1420566543;
		case GET_HASH_KEY("WB_DISCO_SCARECROW_2"):
			return -1208846034;
		case GET_HASH_KEY("WB_DISCO_SCARECROW_3"):
			return 1048086072;
		case GET_HASH_KEY("WB_DISCO_SCARECROW_4"):
			return 939555152;
		case GET_HASH_KEY("WB_DISCO_STONEHENGE"):
			return -161804536;
		case GET_HASH_KEY("WB_DISCO_SUN_DIAL"):
			return -30872859;
		case GET_HASH_KEY("WB_DISCO_SWAMP_HAND"):
			return 1519228573;
		case GET_HASH_KEY("WB_DISCO_TREE_STRUCK"):
			return -1505275983;
		case GET_HASH_KEY("WB_DISCO_VAMPIRE_CLUES"):
			return -890175011;
		case GET_HASH_KEY("WB_DISCO_VIKING_GEAR"):
			return 733338689;
		case GET_HASH_KEY("WB_DISCO_WHALE_BONE"):
			return -986176781;
		case GET_HASH_KEY("WB_DISCO_BUCK_CARCASS"):
			return -1824429070;
		case GET_HASH_KEY("WB_DISCO_BRUSH_FIRE"):
			return 1734766691;
		case GET_HASH_KEY("WB_DISCO_FLATTENED_CABIN"):
			return -920971071;
		case GET_HASH_KEY("WB_DISCO_OBELISK"):
			return -979575591;
		case GET_HASH_KEY("WB_DISCO_WHISKEY_TREE"):
			return 464413478;
		case GET_HASH_KEY("WB_DISCO_CIRCUS_WAGON"):
			return 657666087;
		case GET_HASH_KEY("WB_DISCO_LIGHTNING_TREES"):
			return -715636193;
		case GET_HASH_KEY("WB_DISCO_SERPENT_MOUND"):
			return -607940493;
		case GET_HASH_KEY("WB_DISCO_DEAD_MINER"):
			return 425000526;
		case GET_HASH_KEY("WB_DISCO_OLD_FIREPIT"):
			return -544327665;
		case GET_HASH_KEY("WB_DISCO_FLYING_MACHINE"):
			return -1053108445;
		case GET_HASH_KEY("WB_DISCO_OLD_GRAVESTONES"):
			return 230001763;
		case GET_HASH_KEY("WB_DISCO_STRANGE_STATUES"):
			return 2000209669;
		case GET_HASH_KEY("WB_DISCO_BROKEN_WAGONS"):
			return -1859023693;
		case GET_HASH_KEY("WB_DISCO_BRA_SECRET"):
			return 1861313914;
		case GET_HASH_KEY("WB_DISCO_BRAITH_3"):
			return -2108030724;
		case GET_HASH_KEY("WB_DISCO_CRASHED_AIRSHIP"):
			return 58958195;
		case GET_HASH_KEY("WB_DISCO_UTE_WICKUP"):
			return -1891628345;
		case GET_HASH_KEY("WB_DISCO_WITCHES_CAULDRON"):
			return 1464664327;
		case GET_HASH_KEY("WB_DISCO_OLD_DIRTY_CABIN"):
			return -654238687;
		case GET_HASH_KEY("WB_DISCO_SPERM_WHALE"):
			return 1986618633;
		case GET_HASH_KEY("WB_DISCO_FIRE_LOOKOUT_TOWER"):
			return 918206817;
		case GET_HASH_KEY("WB_DISCO_BATS_IN_BARN"):
			return -2008558277;
		case GET_HASH_KEY("WB_DISCO_HORNET_NESTS"):
			return -834293086;
		case GET_HASH_KEY("WB_DISCO_BANK_STAGECOACH"):
			return 1335921989;
		case GET_HASH_KEY("WB_DISCO_PAGAN_RITUAL"):
			return -739986731;
		case GET_HASH_KEY("WB_DISCO_MAMMOTH"):
			return -148407339;
		case GET_HASH_KEY("WB_DISCO_UTOPIAN_COLONY"):
			return -1960242214;
		case GET_HASH_KEY("WB_DISCO_WAGON_CIRCLE"):
			return 1187689415;
		case GET_HASH_KEY("WB_DISCO_METEOR_HOUSE"):
			return 1673499939;
		case GET_HASH_KEY("WB_DISCO_WATER_DIVINER"):
			return -1177787273;
		case GET_HASH_KEY("WB_DISCO_DEAD_CHINESE_TRAVELLER"):
			return 1342653896;
		case GET_HASH_KEY("WB_DISCO_DEAD_SNAKE"):
			return -1714262909;
		case GET_HASH_KEY("WB_DISCO_DESERT_WAGON"):
			return -1283611369;
		case GET_HASH_KEY("WB_DISCO_MEDITATING_MONK"):
			return -415839138;
		case GET_HASH_KEY("WB_DISCO_PIG_MASK"):
			return -763376358;
		case GET_HASH_KEY("WB_DISCO_CAT_MASK"):
			return 1801731633;
		case GET_HASH_KEY("WB_DISCO_RAM_MASK"):
			return 1490223565;
		case GET_HASH_KEY("WB_DISCO_ANCIENT_SEALED_CLAY_URN"):
			return -1427565340;
		case GET_HASH_KEY("WB_DISCO_TRADING_POST"):
			return -232974724;
		case GET_HASH_KEY("WB_DISCO_TRAIL_TREES"):
			return -1272862985;
		case GET_HASH_KEY("WB_DISCO_MAIL_TRUCK"):
			return -1061274876;
		case GET_HASH_KEY("WB_DISCO_WHISPERING_TREES"):
			return 221420861;
		case GET_HASH_KEY("WB_DISCO_CIV_WAR_BATTLEFIELD"):
			return 1535254161;
		case GET_HASH_KEY("WB_DISCO_ABANDONED_MISSION"):
			return 683269210;
		case GET_HASH_KEY("WB_DISCO_ANCIENT_ARROW_HEADS"):
			return 373034311;
		case GET_HASH_KEY("WB_DISCO_ANCIENT_TOMAHAWK"):
			return 2072029413;
		case GET_HASH_KEY("WB_DISCO_ANCIENT_URN"):
			return -1427565340;
		case GET_HASH_KEY("WB_DISCO_DEAD_CHAIN_GANG"):
			return -499529359;
		case GET_HASH_KEY("WB_DISCO_DEFACED_GRAVE"):
			return -780455182;
		case GET_HASH_KEY("WB_DISCO_DERAILED_TRAIN"):
			return -2019711818;
		case GET_HASH_KEY("WB_DISCO_DONKEY_LADY"):
			return -1636964661;
		case GET_HASH_KEY("WB_DISCO_FACTORY_IN_SWAMP"):
			return 1154568952;
		case GET_HASH_KEY("WB_DISCO_FROZEN_SETTLER"):
			return 2134589549;
		case GET_HASH_KEY("WB_DISCO_DEAD_TOWN"):
			return -1109016944;
		case GET_HASH_KEY("WB_DISCO_OBJECT_IN_TREE"):
			return 1124200691;
		case GET_HASH_KEY("WB_DISCO_PIRATE_RUM"):
			return -357364973;
		case GET_HASH_KEY("WB_DISCO_RUNAWAY_CORPSE"):
			return -641229542;
		case GET_HASH_KEY("WB_DISCO_SHEEP_GUY"):
			return -777592153;
		case GET_HASH_KEY("WB_DISCO_SHRINE"):
			return -1859413640;
		case GET_HASH_KEY("WB_DISCO_POTS_TREE"):
			return -1686810506;
		case GET_HASH_KEY("WB_DISCO_DEAD_BEAR"):
			return 2072069278;
		case GET_HASH_KEY("WB_DISCO_OLD_FIREPLACE"):
			return 1120968795;
		case GET_HASH_KEY("WB_DISCO_GRAVESTONE_TREE"):
			return -409986722;
		case GET_HASH_KEY("WB_DISCO_ABANDONED_FURNITURE"):
			return -1882503209;
		case GET_HASH_KEY("WB_DISCO_EARLY_SETTLERS"):
			return 1431862613;
		case GET_HASH_KEY("WB_DISCO_RAILROAD_GRAVESTONE"):
			return -657632;
		case GET_HASH_KEY("WB_DISCO_ABANDONED_CHURCH"):
			return -1958832660;
		case GET_HASH_KEY("WB_DISCO_ABANDONED_WELL"):
			return -1481450947;
		case GET_HASH_KEY("WB_DISCO_HERMIT_WOMAN"):
			return 1982045664;
		case GET_HASH_KEY("WB_DISCO_INDIAN_BURIAL"):
			return -849582265;
		case GET_HASH_KEY("WB_DISCO_BURNED_SETTLEMENT"):
			return 149709049;
		case GET_HASH_KEY("WB_DISCO_FRANKENSTEIN_BOOK"):
			return 1284679164;
		case GET_HASH_KEY("WB_DISCO_ROPE_BRIDGE"):
			return -1923503631;
		case GET_HASH_KEY("WB_DISCO_PIRATE_SKELETON"):
			return -1144800837;
		case GET_HASH_KEY("WB_DISCO_GRAYS_SECRET"):
			return -1887999095;
		case GET_HASH_KEY("WB_DISCO_TREE_TRUNK_BOAT"):
			return -1457751321;
		case GET_HASH_KEY("WB_DISCO_CONESTOGA_WAGON"):
			return 1187917501;
		case GET_HASH_KEY("WB_DISCO_TREE_HOUSE"):
			return 1091556515;
		case GET_HASH_KEY("WB_DISCO_GEYSER"):
			return 1351526287;
		case GET_HASH_KEY("WB_DISCO_ABANDONED_OIL_WELL"):
			return -1300082860;
		case GET_HASH_KEY("WB_DISCO_GHOST_TRAIN"):
			return 397377585;
		case GET_HASH_KEY("WB_DISCO_METEOR_SHOWER"):
			return -777150535;
		case GET_HASH_KEY("WB_DISCO_DESERTED_FARM"):
			return -919236330;
		case GET_HASH_KEY("WB_DISCO_CATTLE_CARCASSES"):
			return -968854939;
		case GET_HASH_KEY("WB_DISCO_BROKEN_BRIDGE"):
			return 1519472817;
		case GET_HASH_KEY("WB_DISCO_ABANDONED_TRADING_POST"):
			return 247563739;
		case GET_HASH_KEY("WB_DISCO_QUARRY"):
			return -1848895400;
		case GET_HASH_KEY("WB_DISCO_ROADSIDE_BROTHEL"):
			return -2060865802;
		case GET_HASH_KEY("WB_DISCO_LIGHTNING_ALLEY"):
			return -1841331114;
		case GET_HASH_KEY("WB_DISCO_OVERTURNED_HEARSE"):
			return 949011950;
		case GET_HASH_KEY("WB_DISCO_DESERT_SKELETONS"):
			return 1505050944;
		case GET_HASH_KEY("WB_DISCO_FACE_TREES"):
			return -1243267511;
		case GET_HASH_KEY("WB_DISCO_ALCHEMIST"):
			return 233600584;
		case GET_HASH_KEY("WB_DISCO_JESUIT_MISSIONARY"):
			return 429544447;
		case GET_HASH_KEY("WB_DISCO_MOUNTAIN_CLIMB"):
			return 1833243216;
		case GET_HASH_KEY("WB_DISCO_BLACK_FLOWER"):
			return -1494823099;
		case GET_HASH_KEY("WB_DISCO_ONE_ROOM_CHURCH"):
			return 921081956;
		case GET_HASH_KEY("WB_DISCO_TREASURE_MAP_HALVES"):
			return 513110082;
		case GET_HASH_KEY("WB_DISCO_STUFFED_GORILLA"):
			return -490142739;
		case GET_HASH_KEY("WB_DISCO_OLD_RAILROAD_CAMP"):
			return 330993088;
		case GET_HASH_KEY("WB_DISCO_BIRD_NEST"):
			return 435290930;
		case GET_HASH_KEY("WB_DISCO_BARREL_RIDER"):
			return -1287911066;
		case GET_HASH_KEY("WB_DISCO_DEAD_MICAH"):
			return -1240932004;
		case GET_HASH_KEY("WB_DISCO_WAGON_CHEST"):
			return -1829339703;
		default:
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_104(iParam0, 1)] && iParam1) != 0;
}

void func_12(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* sVar9;

	if (func_45(*uParam0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case 683269210:
					vVar0 = { -5576.82f, -2583.934f, -9.541f };
					vVar3 = { 0f, 0f, 30.534f };
					vVar6 = { 13.524f, 10.157f, 15.906f };
					sVar9 = "DLAM_Attack";
					break;
				case 2072029413:
					vVar0 = { 808.518f, 2299.105f, 250.32f };
					vVar3 = { 0f, 0f, 21.51f };
					vVar6 = { 5f, 4f, 9f };
					sVar9 = "DLAT_Attack";
					break;
				case -849582265:
					vVar0 = { -2587.832f, -81.85f, 166.262f };
					vVar3 = { 0f, 0f, 9.056f };
					vVar6 = { 52.076f, 56.679f, 16.103f };
					sVar9 = "DLIB_Attack";
					break;
				case 1861313914:
					vVar0 = { 894.559f, -1969.353f, 43.7f };
					vVar3 = { 0f, 0f, 51.997f };
					vVar6 = { 4.5f, 4.5f, 6f };
					sVar9 = "DLBS_Attack";
					break;
				case -641229542:
					vVar0 = { 1750.836f, -2091.653f, 40.941f };
					vVar3 = { 0f, 0f, -30.078f };
					vVar6 = { 2.215f, 3.182f, 2.394f };
					sVar9 = "DLRC_Attack";
					break;
				case -499529359:
					vVar0 = { 2285.546f, 97.363f, 49.583f };
					vVar3 = { 0f, 0f, -30.998f };
					vVar6 = { 7.132f, 4.645f, 4.596f };
					sVar9 = "DLDCG_Attack";
					break;
				case -780455182:
					vVar0 = { -988.307f, 1692.387f, 243.864f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 4.673f, 3.887f, 3.06f };
					sVar9 = "DLDG_Attack";
					break;
				case 429544447:
					vVar0 = { -6314.771f, -3467f, -11.247f };
					vVar3 = { 0f, 0f, 32.675f };
					vVar6 = { 2.852f, 3.164f, 3.06f };
					sVar9 = "DLJM_Attack";
					break;
				case 230001763:
					vVar0 = { 2133.283f, 145.452f, 75.745f };
					vVar3 = { 0f, 0f, 58.303f };
					vVar6 = { 17.167f, 17.176f, 9.904f };
					sVar9 = "DLOG_Attack";
					break;
				case 921081956:
					vVar0 = { 2415.271f, -738.691f, 41f };
					vVar3 = { 0f, 0f, 89.245f };
					vVar6 = { 6.662f, 6.841f, 12.231f };
					sVar9 = "DLORC_Attack";
					break;
				case 949011950:
					vVar0 = { -2341.024f, -2180.015f, 70f };
					vVar3 = { 0f, 0f, 123.618f };
					vVar6 = { 7.322f, 10.134f, 10.231f };
					sVar9 = "DLOH_Attack";
					break;
				case -739986731:
					vVar0 = { -2905.353f, -254.294f, 186.571f };
					vVar3 = { 0f, 0f, 129.763f };
					vVar6 = { 7.64f, 7.534f, 4f };
					sVar9 = "DLPR_Attack";
					break;
				case -657632:
					vVar0 = { 2684.651f, 71.256f, 59f };
					vVar3 = { 0f, 0f, 111.493f };
					vVar6 = { 4.343f, 3.084f, 3.303f };
					sVar9 = "DLRG_Attack";
					break;
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case 404434344:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case -1891628345:
					vVar0 = { -2694.572f, -1500.398f, 150f };
					vVar3 = { 0f, 0f, 1.841f };
					vVar6 = { 16.663f, 12.967f, 11.141f };
					sVar9 = "DLUW_Attack";
					break;
				case -1859413640:
					vVar0 = { 2195.32f, -554.613f, 40.995f };
					vVar3 = { 0f, 0f, -74.605f };
					vVar6 = { 1.691f, 1.755f, 2.318f };
					sVar9 = "DLSW_Attack";
					break;
			}
			uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, sVar9);
		}
	}
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return func_105(uParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_51(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_86(uParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_51(uParam0, iParam1);
		case -1272862985:
			return func_51(uParam0, iParam1);
		case -1243267511:
			return func_51(uParam0, iParam1);
		case -321841939:
			return func_51(uParam0, iParam1);
		case -890175011:
			return func_51(uParam0, iParam1);
		case 677950956:
			return func_51(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_15()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_107(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_17(var uParam0)
{
	if (func_39(uParam0->f_3, 1))
	{
		return true;
	}
	return false;
}

void func_18(var uParam0)
{
	if (func_33(uParam0->f_6.f_8))
	{
		func_108(&(uParam0->f_6.f_8), 1, 1);
	}
	func_25(&(uParam0->f_6.f_5));
	if (func_39(uParam0->f_3, 2))
	{
		func_43(&(uParam0->f_3), 2);
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_20(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 4))
				{
					return true;
				}
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_152, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_152, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_152, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_152, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_152, 16384))
				{
					return true;
				}
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2048))
				{
					return true;
				}
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 8388608))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 16777216))
				{
					return true;
				}
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 512))
				{
					return true;
				}
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 2097152))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_153, 4194304))
				{
					return true;
				}
			}
			break;
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
			{
				return true;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_154, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_154, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_154, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_154, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_154, 1024))
				{
					return true;
				}
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_148, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_148, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_148, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_148, 16))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_148, 32))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_148, 64))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_148, 128))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_148, 256))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_148, 512))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_148, 1024))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_148, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_148, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 12)
			{
				if (func_39(Global_40.f_8863.f_148, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 13)
			{
				if (func_39(Global_40.f_8863.f_148, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 14)
			{
				if (func_39(Global_40.f_8863.f_148, 32768))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 15)
			{
				if (func_39(Global_40.f_8863.f_148, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 16)
			{
				if (func_39(Global_40.f_8863.f_148, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 17)
			{
				if (func_39(Global_40.f_8863.f_148, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 18)
			{
				if (func_39(Global_40.f_8863.f_148, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 19)
			{
				if (func_39(Global_40.f_8863.f_148, 1048576))
				{
					return true;
				}
			}
			break;
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_149, 1))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_149, 2))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_149, 4))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_149, 8))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_149, 16))
				{
					return true;
				}
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (((((func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8)) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 2048))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 4096))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 8192))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 16384))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 32768))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 65536))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 131072))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 2097152))
				{
					return true;
				}
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 262144))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 524288))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 1048576))
				{
					return true;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 2097152))
				{
					return true;
				}
			}
			break;
		default:
			break;
	}
	return false;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_51(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;
	switch (*uParam0)
	{
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_109(uParam0);
			break;
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			uParam0->f_6 = 10f;
			func_109(uParam0);
			break;
		case -607940493:
			uParam0->f_6 = 30f;
			func_109(uParam0);
			break;
		case -321841939:
			uParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			func_109(uParam0);
			break;
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				func_109(uParam0);
			}
			break;
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				func_109(uParam0);
			}
			break;
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}
}

bool func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_24(var uParam0)
{
	return func_110(*uParam0, 1);
}

void func_25(var uParam0)
{
	func_111(uParam0, 0f);
}

int func_26(var uParam0)
{
	if (!func_24(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_112(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_113() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_27(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
		{
			return true;
		}
		if (func_114(uParam0))
		{
			return true;
		}
		if (!func_115(uParam0, 0))
		{
			return true;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return true;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_116(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6.f_1 + 0.5f) || !func_116(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_114(uParam0))
		{
			return false;
		}
		if (!func_115(uParam0, 0))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return false;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_116(Global_35, uParam0->f_6.f_2, 0))
			{
				return true;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6.f_1 && func_116(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	return false;
}

void func_28(var uParam0)
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_48(*uParam0))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("PLAYER_FOCUS_TIMING"), 0, 0);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_117("DISCO_FOCUS", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0, 0);
			func_34(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", GET_HASH_KEY("INPUT_CONTEXT_Y"), Global_35, 0, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("PLAYER_FOCUS_TIMING"), 0, 0);
		}
		func_118(uParam0->f_6.f_8, 13, 1, 1);
		func_119(uParam0->f_6.f_8);
	}
}

char* func_29(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (func_48(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (func_20(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (func_16(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

void func_30(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_33(iParam1))
	{
		return;
	}
	iVar0 = func_120(iParam1);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		if ((!*uParam0 == -890175011 && !*uParam0 == 677950956) && !*uParam0 == -1308658310)
		{
			if (bParam3)
			{
				func_40(&iVar1, 12);
			}
			else
			{
				func_40(&iVar1, 8);
			}
		}
		if ((*uParam0 == 1861313914 || *uParam0 == -1308658310) || *uParam0 == -415839138)
		{
			if (func_11(*uParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, iVar2, 1, 1710353528, sParam2, iVar1);
	}
}

bool func_31(var uParam0)
{
	if (func_121(uParam0->f_6.f_8, 1))
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_104(iParam0, 1)] = (Global_40.f_8863[func_104(iParam0, 1)] || iParam1);
}

bool func_33(int iParam0)
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

void func_34(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_120(iParam0);
	func_122(iVar0, bParam1);
}

void func_35(var uParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (*uParam0 == -321841939)
	{
		if (func_123(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
			{
				MAP::_0xD8C7162AB2E2AF45(func_123(uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_124(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_124(*uParam0, uParam0->f_4)))
			{
				MAP::_0xD8C7162AB2E2AF45(func_124(*uParam0, uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
		func_91(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;

	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (func_98() < (20 - 1))
			{
				return;
			}
		}
		else if (!func_125())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = func_127(*uParam0, func_126(), uParam0->f_4);
	}
	else
	{
		iVar0 = func_128(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			func_129(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (func_130() == (5 - 1))
				{
					if (func_126())
					{
						func_129(GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMPMAP_AR"), 0);
						iVar0 = GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMPMAP_AR");
					}
					else
					{
						func_129(GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMPMAP_JN"), 0);
						iVar0 = GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMPMAP_JN");
					}
				}
			}
		}
		if (func_131())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_132(&Global_0, 8);
	}
	if (!func_133() || func_106() != -1)
	{
		return;
	}
	func_132(&Global_0, 1);
}

float func_38(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_33(iParam0))
	{
		return 0f;
	}
	iVar0 = func_120(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_40(int iParam0, int iParam1)
{
	func_134(iParam0, iParam1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_51(uParam0, uParam0->f_4) };
}

void func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		IK::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_6.f_10));
	}
}

void func_43(var uParam0, int iParam1)
{
	func_135(uParam0, iParam1);
}

void func_44(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		IK::_0x0EABF182FBB63D72(Global_35, 6, 0);
	}
}

bool func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return true;
	}
	return false;
}

bool func_46(var uParam0)
{
	struct<7> Var0;
	vector3 vVar7;

	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		func_136(*uParam0, &Var0);
		if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, Var0, Var0.f_3, Var0.f_6) == func_137(Global_35))
		{
			return true;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, true))
		{
			vVar7 = { 0f, 0f, 0f };
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &vVar7))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_106() != -1)
	{
		return;
	}
	if ((Global_36616 && func_138(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_139(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_140(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_141(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_140(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_48(int iParam0)
{
	return func_11(iParam0, 2);
}

void func_49(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(iParam0->f_1));
	}
}

char* func_50(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1284679164:
			return "van_farmhouse_monster";
		case -1494823099:
			return "scr_shack_jewlerybox";
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return "m05_mine_collapse_rocks";
				case 1:
					return "m05_mine_explosive";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_51(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -780455182:
			return func_53(uParam0, 1);
		case -1614148516:
			return func_53(uParam0, 0);
		case 2134589549:
			return func_53(uParam0, 0);
		case 373034311:
			return func_53(uParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return func_142(uParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return func_105(uParam0, 11);
			}
			else
			{
				return func_105(uParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}

bool func_52(char* sParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
			}
			return true;
		}
	}
	return false;
}

Vector3 func_53(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
				case 1:
					return -2351.106f, 111.0932f, 217f;
				case 2:
					return -2351.33f, 110.337f, 216.825f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
				case 1:
					return -2366.67f, 124.726f, 215.914f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
				case 1:
					return 2195.38f, -554.33f, 41.02f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.89f, 70.2216f, 58.3001f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
				case 1:
					return 180.267f, 1304.62f, 178.607f;
				case 2:
					return 180.387f, 1304.79f, 178.601f;
				case 3:
					return 180.397f, 1304.7f, 178.605f;
				case 4:
					return 180.437f, 1304.66f, 178.599f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.628f, 1173.581f, 225.1708f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.864f, 996.6885f, 53.9353f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.902f, 170.799f;
				case 1:
					return -161.862f, 1734.9f, 170.687f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
				case 1:
					return 494.1373f, -301.9945f, 147f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.751f, -2181.372f, 73.3274f;
				case 1:
					return -2343.751f, -2181.372f, 73.3274f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.121f, -5.0027f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
				case 1:
					return -988.1135f, 1692.075f, 243.3826f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
				case 1:
					return 830.641f, 1924.09f, 258.798f;
				case 2:
					return 830.611f, 1924.12f, 258.825f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
				default:
					break;
			}
			break;
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.592f, -330.3333f, 41.6732f;
				default:
					break;
			}
			break;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.019f, -3745.071f, -25.5216f;
				case 1:
					return -5854.012f, -3744.898f, -25.519f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.689f, -308.1162f, 141.4804f;
				case 1:
					return -1532.051f, -308.3718f, 141.5067f;
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
				default:
					break;
			}
			break;
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.601f, -1500.248f, 150.5708f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.078f, -1623.864f, 90.579f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.735f, 1294.358f, 216.0961f;
				case 1:
					return 1259.735f, 1294.358f, 216.0961f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.799f, 1696.725f, 95.7555f;
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
				default:
					break;
			}
			break;
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.472f, 44.5668f;
				default:
					break;
			}
			break;
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.58f, 2097.729f, 172.2719f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_54(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			if (!func_143() && !func_144())
			{
				if (!func_143())
				{
				}
				if (!func_144())
				{
				}
				return false;
			}
			else if (func_145(77))
			{
				return false;
			}
			else if (func_146() != 0)
			{
				return false;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!func_143() && !func_144())
				{
					if (!func_143())
					{
					}
					if (!func_144())
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_147(8924991) && !func_147(665676602))
				{
					if (!func_147(8924991))
					{
					}
					if (!func_147(665676602))
					{
					}
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_147(1488286867))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_147(651395116))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_147(-1241340344))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_147(409602249))
				{
					return false;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!func_16(26))
			{
				return false;
			}
			break;
		case -1887999095:
			if (!func_16(21))
			{
				return false;
			}
			break;
		case -1240932004:
			if (!func_16(77))
			{
				return false;
			}
			break;
		case 118535038:
			if (!func_16(12))
			{
				return false;
			}
			break;
		case -2008558277:
			if (func_148(19))
			{
				return false;
			}
			break;
		case 221420861:
			if (func_148(29))
			{
				return false;
			}
			break;
		case -1308658310:
			if (func_148(11))
			{
				return false;
			}
			break;
		case 308500632:
			if (!Global_40.f_11623[20 /*8*/] > 0)
			{
				return false;
			}
			break;
		case 1861313914:
			if (func_145(19) || func_148(4))
			{
				return false;
			}
			break;
		case 1982045664:
			if (func_145(66))
			{
				return false;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_55(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_149(1497516462);
			func_150(2016141805);
			func_150(1010885152);
			func_150(-502324015);
			break;
		case 2016141805:
			func_150(1497516462);
			func_149(2016141805);
			func_150(1010885152);
			func_150(-502324015);
			break;
		case 1010885152:
			func_150(1497516462);
			func_150(2016141805);
			func_149(1010885152);
			func_150(-502324015);
			break;
		case -502324015:
			func_150(1497516462);
			func_150(2016141805);
			func_150(1010885152);
			func_149(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_150(-538889627);
			func_150(-538880323);
			func_150(-1056767524);
			func_149(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_151();
			func_149(iParam0);
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
			func_152();
			func_149(iParam0);
			break;
		case 2019386373:
			func_150(-664252410);
			func_150(2109952320);
			func_149(2019386373);
			break;
		case -664252410:
			func_150(2019386373);
			func_150(2109952320);
			func_149(-664252410);
			break;
		case 2109952320:
			func_150(2019386373);
			func_150(-664252410);
			func_149(2109952320);
			break;
		case -1674179981:
			func_150(-1835851517);
			func_150(-1838352012);
			func_149(-1674179981);
			break;
		case -1835851517:
			func_150(-1674179981);
			func_150(-1838352012);
			func_149(-1835851517);
			break;
		case -1838352012:
			func_150(-1674179981);
			func_150(-1835851517);
			func_149(-1838352012);
			break;
		case -1717960576:
			func_150(210001842);
			func_149(-1717960576);
			break;
		case 210001842:
			func_150(-1717960576);
			func_149(210001842);
			break;
		case -150493654:
			func_150(-1271608261);
			func_150(1846061697);
			func_150(-1145519186);
			func_149(-150493654);
			break;
		case -1271608261:
			func_150(-150493654);
			func_150(1846061697);
			func_150(-1145519186);
			func_149(-1271608261);
			break;
		case 1846061697:
			func_150(-150493654);
			func_150(-1271608261);
			func_150(-1145519186);
			func_149(1846061697);
			break;
		case -1145519186:
			func_150(-150493654);
			func_150(-1271608261);
			func_150(1846061697);
			func_149(-1145519186);
			break;
		case 1766284049:
			func_150(280705402);
			func_150(1926308480);
			func_149(1766284049);
			break;
		case 280705402:
			func_150(1766284049);
			func_150(1926308480);
			func_149(280705402);
			break;
		case 1926308480:
			func_150(1766284049);
			func_150(280705402);
			func_149(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_150(439465264);
				func_149(1609506757);
			}
			else
			{
				func_150(1609506757);
				func_150(439465264);
			}
			break;
		case 439465264:
			if (func_147(1609506757))
			{
				if (bParam1)
				{
					func_149(439465264);
				}
				else
				{
					func_150(439465264);
				}
			}
			break;
		case 1822001510:
			func_150(-1612662716);
			func_149(1822001510);
			break;
		case -1612662716:
			func_150(1822001510);
			func_149(-1612662716);
			break;
		case 1306158345:
			func_150(1952610440);
			func_150(-223469678);
			func_150(-404698347);
			func_150(1517904467);
			func_149(1306158345);
			break;
		case 1952610440:
			func_150(1306158345);
			func_150(-223469678);
			func_150(-404698347);
			func_150(1517904467);
			func_149(1952610440);
			break;
		case -223469678:
			func_150(1306158345);
			func_150(1952610440);
			func_150(-404698347);
			func_150(1517904467);
			func_149(-223469678);
			break;
		case -404698347:
			func_150(1306158345);
			func_150(1952610440);
			func_150(-223469678);
			func_150(1517904467);
			func_149(-404698347);
			break;
		case 1517904467:
			func_150(1306158345);
			func_150(1952610440);
			func_150(-223469678);
			func_150(-404698347);
			func_149(1517904467);
			break;
		case 1376646519:
			func_150(931649776);
			func_150(-434590080);
			func_150(1743048395);
			func_150(449774763);
			func_149(1376646519);
			break;
		case 931649776:
			func_150(1376646519);
			func_150(-434590080);
			func_150(1743048395);
			func_150(449774763);
			func_149(931649776);
			break;
		case -434590080:
			func_150(1376646519);
			func_150(931649776);
			func_150(1743048395);
			func_150(449774763);
			func_149(-434590080);
			break;
		case 1743048395:
			func_150(1376646519);
			func_150(931649776);
			func_150(-434590080);
			func_150(449774763);
			func_149(1743048395);
			break;
		case 449774763:
			func_150(1376646519);
			func_150(931649776);
			func_150(-434590080);
			func_150(1743048395);
			func_149(449774763);
			break;
		case -1414537028:
			func_150(38162571);
			func_150(1350391819);
			func_150(54073871);
			func_149(-1414537028);
			break;
		case 38162571:
			func_150(-1414537028);
			func_150(1350391819);
			func_150(54073871);
			func_149(38162571);
			break;
		case 1350391819:
			func_150(-1414537028);
			func_150(38162571);
			func_150(54073871);
			func_149(1350391819);
			break;
		case 54073871:
			func_150(-1414537028);
			func_150(38162571);
			func_150(1350391819);
			func_149(54073871);
			break;
		case 198200492:
			func_149(198200492);
			func_150(-1124061431);
			func_150(52706132);
			func_150(-259123672);
			break;
		case -1124061431:
			func_150(198200492);
			func_149(-1124061431);
			func_150(52706132);
			func_150(-259123672);
			break;
		case 52706132:
			func_150(198200492);
			func_150(-1124061431);
			func_149(52706132);
			func_150(-259123672);
			break;
		case -259123672:
			func_150(198200492);
			func_150(-1124061431);
			func_150(52706132);
			func_149(-259123672);
			break;
		case -919512195:
			func_149(-919512195);
			func_150(-1925798111);
			func_150(420709909);
			func_150(1703426636);
			break;
		case -1925798111:
			func_149(-1925798111);
			func_150(-919512195);
			func_150(420709909);
			func_150(1703426636);
			break;
		case 420709909:
			func_149(420709909);
			func_150(-919512195);
			func_150(-1925798111);
			func_150(1703426636);
			break;
		case 1703426636:
			func_149(1703426636);
			func_150(-919512195);
			func_150(-1925798111);
			func_150(420709909);
			break;
		case -1223121209:
			func_149(-1223121209);
			func_150(630808005);
			break;
		case 630808005:
			func_149(630808005);
			func_150(-1223121209);
			break;
		case 1453909576:
			func_149(1453909576);
			func_150(1643531967);
			break;
		case 1643531967:
			func_149(1643531967);
			func_150(1453909576);
			break;
		case 0:
			func_149(0);
			func_150(473295046);
			func_150(-1738165526);
			break;
		case 473295046:
			func_149(473295046);
			func_150(0);
			func_150(-1738165526);
			break;
		case -1738165526:
			func_149(-1738165526);
			func_150(0);
			func_150(473295046);
			break;
		case 932909855:
			func_149(932909855);
			func_150(2051822093);
			break;
		case 2051822093:
			func_149(2051822093);
			func_150(932909855);
			break;
		case 405586984:
			func_149(405586984);
			func_150(1509509592);
			func_150(-959357075);
			func_150(-1311865656);
			break;
		case 1509509592:
			func_149(1509509592);
			func_150(405586984);
			func_150(-959357075);
			func_150(-1311865656);
			break;
		case -959357075:
			func_149(-959357075);
			func_150(1509509592);
			func_150(405586984);
			func_150(-1311865656);
			break;
		case -1311865656:
			func_149(-1311865656);
			func_150(1509509592);
			func_150(-959357075);
			func_150(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_149(-524145696);
			}
			else
			{
				func_150(-524145696);
			}
			func_150(1626481264);
			func_150(282809459);
			break;
		case 282809459:
			func_149(282809459);
			func_150(1626481264);
			func_150(-524145696);
			break;
		case 1626481264:
			func_149(1626481264);
			func_150(-524145696);
			func_150(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_149(885203519);
			}
			else
			{
				func_150(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_149(-1080627546);
			}
			else
			{
				func_150(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_147(iParam0))
				{
					func_149(iParam0);
				}
			}
			else if (func_147(iParam0))
			{
				func_150(iParam0);
			}
			break;
	}
}

int func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_153(iVar0);
		if (func_39(func_154(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_57(int iParam0)
{
	func_32(iParam0, 2);
	func_77(iParam0);
}

bool func_58(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_155(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_59()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (30 - 1))
	{
		if (iVar0 == 0)
		{
			iVar1 = 1;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 2;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 4;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 8;
		}
		else if (iVar0 == 4)
		{
			iVar1 = 16;
		}
		else if (iVar0 == 5)
		{
			iVar1 = 32;
		}
		else if (iVar0 == 6)
		{
			iVar1 = 64;
		}
		else if (iVar0 == 7)
		{
			iVar1 = 128;
		}
		else if (iVar0 == 8)
		{
			iVar1 = 256;
		}
		else if (iVar0 == 9)
		{
			iVar1 = 512;
		}
		else if (iVar0 == 10)
		{
			iVar1 = 1024;
		}
		else if (iVar0 == 11)
		{
			iVar1 = 2048;
		}
		else if (iVar0 == 12)
		{
			iVar1 = 4096;
		}
		else if (iVar0 == 13)
		{
			iVar1 = 8192;
		}
		else if (iVar0 == 14)
		{
			iVar1 = 16384;
		}
		else if (iVar0 == 15)
		{
			iVar1 = 32768;
		}
		else if (iVar0 == 16)
		{
			iVar1 = 65536;
		}
		else if (iVar0 == 17)
		{
			iVar1 = 131072;
		}
		else if (iVar0 == 18)
		{
			iVar1 = 262144;
		}
		else if (iVar0 == 19)
		{
			iVar1 = 524288;
		}
		else if (iVar0 == 20)
		{
			iVar1 = 1048576;
		}
		else if (iVar0 == 21)
		{
			iVar1 = 2097152;
		}
		else if (iVar0 == 22)
		{
			iVar1 = 4194304;
		}
		else if (iVar0 == 23)
		{
			iVar1 = 8388608;
		}
		else if (iVar0 == 24)
		{
			iVar1 = 16777216;
		}
		else if (iVar0 == 25)
		{
			iVar1 = 33554432;
		}
		else if (iVar0 == 26)
		{
			iVar1 = 67108864;
		}
		else if (iVar0 == 27)
		{
			iVar1 = 134217728;
		}
		else if (iVar0 == 28)
		{
			iVar1 = 268435456;
		}
		else if (iVar0 == 29)
		{
			iVar1 = 536870912;
		}
		if (func_39(Global_40.f_8863.f_151, iVar1))
		{
		}
		iVar0++;
	}
}

bool func_60()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_CROSS_PROMOTION_HATCHET"));
}

void func_61(var uParam0)
{
	func_156(uParam0);
	func_157(uParam0);
}

void func_62(var uParam0)
{
	int iVar0;

	func_158(&uLocal_66);
	if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		uLocal_15 = func_159(uParam0);
	}
	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!func_160(uParam0, iVar0) == -1)
			{
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, iVar0)))
				{
					TXD::REQUEST_STREAMED_TXD(func_160(uParam0, iVar0), false);
				}
			}
			iVar0++;
		}
	}
}

bool func_63(var uParam0)
{
	int iVar0;

	if (!func_161(&uLocal_66))
	{
		return false;
	}
	if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		if (!func_162(&uLocal_15))
		{
			return false;
		}
	}
	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!func_160(uParam0, iVar0) == -1)
			{
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, iVar0)) && !TXD::HAS_STREAMED_TXD_LOADED(func_160(uParam0, iVar0)))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_64()
{
	return func_163(Global_1935630, 4096);
}

bool func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (*uParam0 == -1427565340 || *uParam0 == 464413478)
	{
		if (*uParam0 == 464413478)
		{
			if (func_58(Global_35, func_53(uParam0, 0), 75f, 1, 1))
			{
				if (func_164(uParam0, &(uLocal_52[0]), &uLocal_66, 0, 11))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (!func_67(&uLocal_66, func_53(uParam0, 1), func_66(uParam0, 1), 1))
						{
							return false;
						}
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_66[1], uLocal_66[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uLocal_66[0], "disWiskeyTreeBottle1"), 0f, 0f, -0.265f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							TASK::_0x78B4567E18B54480(uLocal_66[1]);
							if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]))
							{
								PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1], 0);
								PLAYER::_0x6ECFC621A168424C(uLocal_66[1], uLocal_66[1], 0, 0);
							}
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else if (!func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == -1494823099)
	{
		if (func_58(Global_35, func_53(uParam0, 0), 75f, 1, 1))
		{
			if (func_164(uParam0, &(uLocal_52[0]), &uLocal_66, 0, 7))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
				{
					if (!func_39(Global_40.f_8863.f_149, 2097152))
					{
					}
					else
					{
						func_165(&uLocal_66, 1, 0);
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		if (func_58(Global_35, func_53(uParam0, 1), 75f, 1, 1))
		{
			if (func_164(uParam0, &(uLocal_52[1]), &uLocal_66, 1, 7))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (!func_39(Global_40.f_8863.f_149, 4194304))
					{
					}
					else
					{
						func_165(&uLocal_66, 1, 1);
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (*uParam0 == 247563739)
	{
		if (!func_39(Global_40.f_8863.f_150, 256))
		{
			if (func_58(Global_35, func_53(uParam0, 0), 75f, 1, 1))
			{
				if (func_164(uParam0, &(uLocal_52[0]), &uLocal_66, 0, 11))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
						{
							iLocal_47[0] = func_166(uLocal_66[0], func_87(uParam0, 0), 0f, 0f, 0f, 0, 0, 0, 1);
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
	}
	else if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		if (*uParam0 == 733338689)
		{
			if (!func_39(Global_40.f_8863.f_149, 32))
			{
				if (!func_167(uParam0, &uLocal_66))
				{
					return false;
				}
			}
			if (!func_39(Global_40.f_8863.f_149, 64))
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
				}
			}
		}
		else if (*uParam0 == 2135153015)
		{
			if (!func_39(Global_40.f_8863.f_149, 1024))
			{
				if (!func_167(uParam0, &uLocal_66))
				{
					return false;
				}
			}
			if (!func_39(Global_40.f_8863.f_149, 2048))
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
				{
					iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
					if (!func_39(Global_40.f_8863.f_149, 1024))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_47[0], false);
					}
				}
				if (!func_67(&uLocal_66, func_53(uParam0, 1), func_66(uParam0, 1), 1))
				{
					return false;
				}
			}
		}
		else if (!func_167(uParam0, &uLocal_66))
		{
			return false;
		}
	}
	else if ((*uParam0 == -261997819 || *uParam0 == -599506500) || *uParam0 == 1424723727)
	{
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
		{
			func_40(&iLocal_60, 2);
			iLocal_16[0] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, uParam0->f_4), func_85(uParam0, uParam0->f_4), func_171(uParam0, uParam0->f_4), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
		}
	}
	else if (*uParam0 == 1187689415)
	{
		if (!func_172(uParam0, &iLocal_16, &uLocal_78, 0))
		{
			return false;
		}
	}
	else if (*uParam0 == 513110082)
	{
		if (uParam0->f_4 == 2)
		{
			iVar0 = 2;
			while (iVar0 <= 7)
			{
				if (!func_83(uParam0, iVar0))
				{
					if (iVar0 == 2)
					{
						if (!OBJECT::DOES_PICKUP_EXIST(iLocal_16[0]))
						{
							func_40(&iLocal_60, 2);
							iLocal_16[0] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, 0), func_85(uParam0, 0), func_171(uParam0, 0), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
						}
					}
					else
					{
						if (iVar0 == 3)
						{
							iVar1 = 0;
						}
						else if (iVar0 == 4)
						{
							iVar1 = 1;
						}
						else if (iVar0 == 5)
						{
							iVar1 = 2;
						}
						else if (iVar0 == 6)
						{
							iVar1 = 3;
						}
						else if (iVar0 == 7)
						{
							iVar1 = 4;
						}
						if (!func_67(&uLocal_66, func_53(uParam0, iVar1), func_66(uParam0, iVar1), iVar1))
						{
							return false;
						}
					}
				}
				iVar0++;
			}
		}
		else if (!func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == 870958936 || *uParam0 == 2072029413)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
		{
			iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
		}
	}
	else if (*uParam0 == 1284679164)
	{
	}
	else if (*uParam0 == 373034311)
	{
		if (func_39(Global_40.f_8863.f_148, 2097152))
		{
			if (!func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0))
			{
				return false;
			}
		}
	}
	else if (*uParam0 == -1061274876)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			if (!func_83(uParam0, iVar2))
			{
				if (!func_67(&uLocal_66, func_53(uParam0, iVar2), func_66(uParam0, iVar2), iVar2))
				{
					return false;
				}
			}
			iVar2++;
		}
	}
	else if (*uParam0 == 118535038)
	{
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			if (!func_83(uParam0, iVar3))
			{
				if (!func_67(&uLocal_66, func_53(uParam0, iVar3), func_66(uParam0, iVar3), iVar3))
				{
					return false;
				}
			}
			iVar3++;
		}
	}
	else if (*uParam0 == -1859413640)
	{
		iVar4 = 0;
		while (iVar4 <= 1)
		{
			if (!func_83(uParam0, iVar4))
			{
				if (!func_67(&uLocal_66, func_53(uParam0, iVar4), func_66(uParam0, iVar4), iVar4))
				{
					return false;
				}
			}
			iVar4++;
		}
	}
	else if (!func_173(uParam0, &uLocal_66))
	{
		return false;
	}
	if (*uParam0 == -1859413640 || *uParam0 == -1427565340)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[0]))
		{
			iLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, 0);
		}
	}
	else if (*uParam0 == 1284679164)
	{
		iVar5 = 0;
		while (iVar5 <= (4 - 1))
		{
			if (!func_83(uParam0, iVar5))
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_47[iVar5]))
				{
					iLocal_47[iVar5] = func_174(uParam0, iVar5);
				}
			}
			iVar5++;
		}
	}
	if ((*uParam0 == 1335921989 || *uParam0 == -709811179) || *uParam0 == -780455182)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			if (!*uParam0 == -780455182)
			{
				TASK::_0x78B4567E18B54480(uLocal_66[0]);
			}
			if (*uParam0 == -780455182)
			{
				if (!func_160(uParam0, 0) == -1)
				{
					if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, 0)))
					{
						OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uLocal_66[0], func_160(uParam0, 0), 0, 0);
					}
				}
			}
		}
	}
	else if (*uParam0 == 513110082)
	{
		if (uParam0->f_4 == 2)
		{
			iVar6 = 0;
			while (iVar6 <= 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar6]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[iVar6], true);
					TASK::_0x78B4567E18B54480(uLocal_66[iVar6]);
				}
				iVar6++;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_0x78B4567E18B54480(uLocal_66[0]);
		}
	}
	else if (*uParam0 == 373034311)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_0x78B4567E18B54480(uLocal_66[0]);
		}
	}
	else if (*uParam0 == -1061274876)
	{
		iVar7 = 0;
		while (iVar7 <= 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[iVar7]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[iVar7], true);
				TASK::_0x78B4567E18B54480(uLocal_66[iVar7]);
			}
			iVar7++;
		}
	}
	else if (((((((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 1124200691) || *uParam0 == -1420566543) || *uParam0 == -1208846034) || *uParam0 == 1048086072) || *uParam0 == 939555152) || *uParam0 == 2135153015)
	{
		func_175(&uLocal_15);
		if ((((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689) || *uParam0 == 2135153015)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
			{
				if (((*uParam0 == -763376358 || *uParam0 == 1801731633) || *uParam0 == 1490223565) || *uParam0 == 733338689)
				{
					MISC::_0xF63FA29D4A9ACA86(uLocal_66[0], func_176(uParam0));
				}
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			}
			if (*uParam0 == 2135153015)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
					TASK::_0x78B4567E18B54480(uLocal_66[1]);
				}
			}
		}
	}
	else if (*uParam0 == -1427565340)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
		}
	}
	else if (*uParam0 == -1859413640)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_0x78B4567E18B54480(uLocal_66[0]);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
			TASK::_0x78B4567E18B54480(uLocal_66[1]);
		}
	}
	return true;
}

Vector3 func_66(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 5f, 0f, 213f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 20f, 88.84f, -94.66f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 65f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, -42f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return 25f, 0f, -75f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 155f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -95f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -144.36f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -35.981f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return -10f, 0f, 33f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, 0f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 1.24f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 12f;
				case 1:
					return 180f, 0f, 108f;
				case 2:
					return 180f, 0f, 208f;
				case 3:
					return 0f, 0f, 30f;
				case 4:
					return 180f, 0f, 35f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -45f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -110f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -49.418f;
					case 1:
						return 0f, 0f, -33.718f;
					case 2:
						return 0f, 0f, -26.718f;
					case 3:
						return 0f, 0f, -41.7187f;
					case 4:
						return 0f, 0f, -33.718f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 105f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return 30f, 5f, 99f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 169f;
				case 1:
					return 0f, 0f, 169f;
				case 2:
					return 0f, 0f, 169f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 116f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -55f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return -10f, 90f, 30f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1891628345:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1494823099:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 657666087:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_67(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!uParam0->f_6[iParam7] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam7]))
		{
			(*uParam0)[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_6[iParam7], vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS((*uParam0)[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION((*uParam0)[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

void func_68(var uParam0)
{
	if (!func_48(*uParam0))
	{
		func_57(*uParam0);
		func_91(uParam0);
	}
}

void func_69(var uParam0)
{
	func_177(&iLocal_47);
	if (*uParam0 == 464413478)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]);
		}
	}
}

bool func_70()
{
	int iVar0;

	iVar0 = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

bool func_71(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

int func_72(var uParam0)
{
	switch (*uParam0)
	{
		case -763376358:
			return GET_HASH_KEY("CLOTHING_ITEM_MASK_PIG_001");
		case -739986731:
			return GET_HASH_KEY("CLOTHING_ITEM_SKULLMASK_MR1_001_1");
		case 1801731633:
			return GET_HASH_KEY("CLOTHING_ITEM_SKULLMASK_MR1_002_1");
		case 1490223565:
			return GET_HASH_KEY("CLOTHING_ITEM_SKULLMASK_MR1_000_1");
		case -1144800837:
			return GET_HASH_KEY("CLOTHING_ITEM_PZ_HAT_PIRATE_01");
		case 1342653896:
			return GET_HASH_KEY("CLOTHING_SP_CHINESE_LABOR_HAT_000_1");
		case 1124200691:
			return GET_HASH_KEY("CLOTHING_SP_CIVIL_WAR_HAT_000_1");
		case 2134589549:
			return GET_HASH_KEY("CLOTHING_SP_CONQUISTADOR_HAT_000_1");
		case 425000526:
			return GET_HASH_KEY("CLOTHING_SP_DEAD_MINER_HAT_000_1");
		case -1420566543:
			return GET_HASH_KEY("CLOTHING_SP_SCARECROW_01_HAT_000_1");
		case -1208846034:
			return GET_HASH_KEY("CLOTHING_SP_SCARECROW_02_HAT_000_1");
		case 1048086072:
			return GET_HASH_KEY("CLOTHING_SP_SCARECROW_03_HAT_000_1");
		case 939555152:
			return GET_HASH_KEY("CLOTHING_SP_SCARECROW_04_HAT_000_1");
		case -657632:
			return GET_HASH_KEY("CLOTHING_SP_CHINESE_LABOR_HAT_000_1");
		case 733338689:
			return GET_HASH_KEY("CLOTHING_SP_VIKING_HAT_000_1");
		case 2135153015:
			return GET_HASH_KEY("CLOTHING_ITEM_SP_VALSHERIFF_HAT_000");
		default:
			break;
	}
	return 0;
}

int func_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	if (!func_179(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_180(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_181(iParam0, bParam2);
	iVar2 = 0;
	if (func_182(iParam0, 0, 0) == 0)
	{
		if (func_183(iParam0))
		{
			iVar5 = func_184(iParam0);
			iVar6 = func_185(iVar5);
			iVar7 = func_186(iVar6) + 1;
			func_187(iVar5);
			if (func_188(38))
			{
				func_189(483, 0);
			}
			else
			{
				func_189(482, 0);
			}
			if (iVar7 == func_190(iVar6))
			{
				func_73(func_191(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_133() && func_192(4))
				{
					if (func_133() && (func_193(38) || func_188(38)))
					{
						func_195(38, func_191(iVar6), 0, 0, func_194(), 0, -1, 0);
						func_196(2);
					}
					else
					{
						func_195(38, func_191(iVar6), 0, 0, func_194(), 0, -1, 0);
						func_196(1);
					}
				}
			}
			else if (func_133() && func_192(4))
			{
				if (func_133() && (func_193(38) || func_188(38)))
				{
					func_195(38, 0, 0, 0, func_194(), 0, -1, 0);
					func_196(2);
				}
				else
				{
					func_195(38, 0, 0, 0, func_194(), 0, -1, 0);
					func_196(1);
				}
			}
			if (func_133() && func_192(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_133() && (func_193(38) || func_188(38)))
					{
						func_197(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_197(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_198(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_199(iParam0, 866047851) && !func_199(iParam0, -1979000645)) && !func_199(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_200(iParam0, 8388608) && !func_201(28))
	{
		func_202(28);
	}
	if (!bVar3)
	{
		if (func_199(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_203(iParam0) == -1447088266)
			{
				iVar1 = func_205(func_204(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_106() == -1)
					{
						func_76(iVar1);
					}
					if (func_206(0) && func_207(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_208(iParam0, iVar0, iParam5);
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
					if (func_106() == -1)
					{
						func_76(iParam0);
					}
					if (func_206(0) && func_207(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_208(iVar1, iVar0, iParam5);
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
			if (!func_209(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_198(iParam0) == GET_HASH_KEY("AMMO") && func_210(iParam0))
		{
			if (!func_211(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_199(iParam0, 866047851))
		{
			func_212(iParam0);
		}
		else if (func_199(iParam0, 2000026003))
		{
			func_213(iParam0);
		}
		else if (func_199(iParam0, -103750053))
		{
			func_215(func_214(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_215(func_216(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_199(iParam0, -121341956) && !func_199(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_107(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_189(498, 0);
				}
			}
			if (func_199(iParam0, -2017733358) || func_199(iParam0, -1369131378))
			{
				func_217(iParam0);
			}
		}
		else if (func_199(iParam0, -136654233))
		{
			if (func_199(iParam0, -1021472396))
			{
			}
		}
		else if (func_199(iParam0, -1466706512) && func_199(iParam0, 1147021565))
		{
			func_189(484, 0);
		}
		else if (func_199(iParam0, 1147021565) && func_199(iParam0, -524514947))
		{
		}
		else if (func_199(iParam0, 554195525))
		{
		}
		else if (func_199(iParam0, 589988438))
		{
			if (func_218())
			{
				func_219(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_199(iParam0, 787083290) && func_199(iParam0, 949916894))
		{
			func_220(iParam0);
		}
		else if (func_199(iParam0, -1718133314))
		{
			func_221(iParam0);
		}
		else if (func_199(iParam0, -1738650224))
		{
			func_222(iParam0);
		}
		else if (func_199(iParam0, -1112814642) && func_199(iParam0, 949916894))
		{
			func_223(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_199(iParam0, 1841149704))
		{
			func_224();
		}
		else if (func_199(iParam0, 606799272))
		{
			func_225(iParam0, iParam1);
			func_226(iParam0);
		}
		else if (func_199(iParam0, -1112814642) && func_199(iParam0, -1697809989))
		{
			func_227(iParam0, 0, 0, 0);
		}
		else if (func_199(iParam0, -2017733358) || func_199(iParam0, -1369131378))
		{
			func_217(iParam0);
		}
		else if (func_199(iParam0, -1921346699))
		{
			if (func_106() != -1)
			{
				return 0;
			}
			func_228(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_199(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_89(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_73(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_89(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_73(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_89(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_73(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_89(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_73(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_89(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_73(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_89(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_73(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_199(iParam0, -839724752) && func_200(iParam0, 4))
		{
			if (!func_188(42))
			{
				func_229(iParam0);
			}
		}
		else if (func_199(iParam0, 1399091007))
		{
			func_230(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_199(iParam0, 1248798204))
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
				func_73(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_202(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_231(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_232(&iVar9, 0))
				{
					func_207(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_106() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_231(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_189(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_233();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_234();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_235();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_236();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_237();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_238(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_239(499813453, 0);
				func_240(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_238(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_239(499813453, 0);
				func_240(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_238(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_239(499813453, 0);
				func_240(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_238(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_239(666607663, 0);
				func_241(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_238(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_239(666607663, 0);
				func_241(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_238(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_239(666607663, 0);
				func_241(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_238(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_239(-220219788, 0);
				func_242(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_238(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_239(-220219788, 0);
				func_242(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_238(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_239(-220219788, 0);
				func_242(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_238(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_239(218622660, 0);
				func_243(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_238(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_239(218622660, 0);
				func_243(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_238(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_239(390004462, 0);
				func_244(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_238(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_239(390004462, 0);
				func_244(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_238(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_239(390004462, 0);
				func_244(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_238(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_239(6410548, 0);
				func_245(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_238(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_239(6410548, 0);
				func_245(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_238(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_239(6410548, 0);
				func_245(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_238(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_239(6410548, 0);
				func_245(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_247(242, func_246(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_247(240, func_246(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_247(241, func_246(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_248(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_248(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_248(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_248(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_248(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_248(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_189(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_189(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_189(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_73(func_249(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_73(func_250(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_201(1))
				{
					func_189(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_189(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_106() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_189(496, 0);
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
		func_251(&iVar10);
		if (!func_252(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_206(0))
		{
			return 1;
		}
		if (func_198(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_253(iParam0);
		}
		if (func_199(iParam0, -1979000645))
		{
			func_254(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_206(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_73(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_255(iVar2, 0);
		}
	}
	Var35 = { func_256(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_257(iParam0);
	if (fParam6 > 0f)
	{
		if (func_199(iParam0, -839724752))
		{
			func_258(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_259(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_74(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return GET_HASH_KEY("WEAPON_MELEE_ANCIENT_HATCHET");
		case 2072029413:
			return GET_HASH_KEY("WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 425000526:
			return GET_HASH_KEY("WEAPON_MELEE_KNIFE_MINER");
		case 733338689:
			return GET_HASH_KEY("WEAPON_MELEE_HATCHET_VIKING");
		case -599506500:
			return GET_HASH_KEY("WEAPON_MELEE_KNIFE_CIVIL_WAR");
		case 1424723727:
			return GET_HASH_KEY("WEAPON_MELEE_BROKEN_SWORD");
		case 513110082:
			return GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD_GOLDEN");
		case 2072069278:
			return GET_HASH_KEY("WEAPON_MELEE_KNIFE_BEAR");
		case -1240932004:
			return GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_MICAH");
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return GET_HASH_KEY("WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return GET_HASH_KEY("WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return GET_HASH_KEY("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return GET_HASH_KEY("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_75(int iParam0)
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

void func_76(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_260(iParam0))
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

void func_77(int iParam0)
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_0xF5EAD898EF387E73(iParam0);
		if (func_261(iParam0))
		{
			func_215(func_262(GET_HASH_KEY("DISCOVERABLE_FOUND")), 1);
		}
	}
}

bool func_78(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 9)
	{
		iVar0 = 512;
	}
	else if (iParam0 == 10)
	{
		iVar0 = 1024;
	}
	else if (iParam0 == 11)
	{
		iVar0 = 2048;
	}
	else if (iParam0 == 12)
	{
		iVar0 = 4096;
	}
	else if (iParam0 == 13)
	{
		iVar0 = 8192;
	}
	else if (iParam0 == 14)
	{
		iVar0 = 16384;
	}
	else if (iParam0 == 15)
	{
		iVar0 = 32768;
	}
	else if (iParam0 == 16)
	{
		iVar0 = 65536;
	}
	else if (iParam0 == 17)
	{
		iVar0 = 131072;
	}
	else if (iParam0 == 18)
	{
		iVar0 = 262144;
	}
	else if (iParam0 == 19)
	{
		iVar0 = 524288;
	}
	else if (iParam0 == 20)
	{
		iVar0 = 1048576;
	}
	else if (iParam0 == 21)
	{
		iVar0 = 2097152;
	}
	else if (iParam0 == 22)
	{
		iVar0 = 4194304;
	}
	else if (iParam0 == 23)
	{
		iVar0 = 8388608;
	}
	else if (iParam0 == 24)
	{
		iVar0 = 16777216;
	}
	else if (iParam0 == 25)
	{
		iVar0 = 33554432;
	}
	else if (iParam0 == 26)
	{
		iVar0 = 67108864;
	}
	else if (iParam0 == 27)
	{
		iVar0 = 134217728;
	}
	else if (iParam0 == 28)
	{
		iVar0 = 268435456;
	}
	else if (iParam0 == 29)
	{
		iVar0 = 536870912;
	}
	if (func_39(Global_40.f_8863.f_151, iVar0))
	{
		return true;
	}
	return false;
}

void func_79(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 9)
	{
		iVar0 = 512;
	}
	else if (iParam0 == 10)
	{
		iVar0 = 1024;
	}
	else if (iParam0 == 11)
	{
		iVar0 = 2048;
	}
	else if (iParam0 == 12)
	{
		iVar0 = 4096;
	}
	else if (iParam0 == 13)
	{
		iVar0 = 8192;
	}
	else if (iParam0 == 14)
	{
		iVar0 = 16384;
	}
	else if (iParam0 == 15)
	{
		iVar0 = 32768;
	}
	else if (iParam0 == 16)
	{
		iVar0 = 65536;
	}
	else if (iParam0 == 17)
	{
		iVar0 = 131072;
	}
	else if (iParam0 == 18)
	{
		iVar0 = 262144;
	}
	else if (iParam0 == 19)
	{
		iVar0 = 524288;
	}
	else if (iParam0 == 20)
	{
		iVar0 = 1048576;
	}
	else if (iParam0 == 21)
	{
		iVar0 = 2097152;
	}
	else if (iParam0 == 22)
	{
		iVar0 = 4194304;
	}
	else if (iParam0 == 23)
	{
		iVar0 = 8388608;
	}
	else if (iParam0 == 24)
	{
		iVar0 = 16777216;
	}
	else if (iParam0 == 25)
	{
		iVar0 = 33554432;
	}
	else if (iParam0 == 26)
	{
		iVar0 = 67108864;
	}
	else if (iParam0 == 27)
	{
		iVar0 = 134217728;
	}
	else if (iParam0 == 28)
	{
		iVar0 = 268435456;
	}
	else if (iParam0 == 29)
	{
		iVar0 = 536870912;
	}
	else
	{
		return;
	}
	if (!func_39(Global_40.f_8863.f_151, iVar0))
	{
		func_40(&(Global_40.f_8863.f_151), iVar0);
	}
}

void func_80(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (*uParam0)
	{
		case 870958936:
			if (func_39(Global_40.f_8863.f_149, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 4))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 16))
			{
			}
			break;
		case 513110082:
			if (func_39(Global_40.f_8863.f_150, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 4))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_150, 128))
			{
			}
			break;
		case -1061274876:
			if (func_39(Global_40.f_8863.f_149, 4096))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 8192))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 16384))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 32768))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 65536))
			{
			}
			break;
		case 1284679164:
			if (func_39(Global_40.f_8863.f_149, 131072))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 262144))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 524288))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 1048576))
			{
			}
			break;
		case 1187689415:
			iVar0 = 0;
			while (iVar0 <= (30 - 1))
			{
				if (iVar0 == 0)
				{
					iVar1 = 1;
				}
				else if (iVar0 == 1)
				{
					iVar1 = 2;
				}
				else if (iVar0 == 2)
				{
					iVar1 = 4;
				}
				else if (iVar0 == 3)
				{
					iVar1 = 8;
				}
				else if (iVar0 == 4)
				{
					iVar1 = 16;
				}
				else if (iVar0 == 5)
				{
					iVar1 = 32;
				}
				else if (iVar0 == 6)
				{
					iVar1 = 64;
				}
				else if (iVar0 == 7)
				{
					iVar1 = 128;
				}
				else if (iVar0 == 8)
				{
					iVar1 = 256;
				}
				else if (iVar0 == 9)
				{
					iVar1 = 512;
				}
				else if (iVar0 == 10)
				{
					iVar1 = 1024;
				}
				else if (iVar0 == 11)
				{
					iVar1 = 2048;
				}
				else if (iVar0 == 12)
				{
					iVar1 = 4096;
				}
				else if (iVar0 == 13)
				{
					iVar1 = 8192;
				}
				else if (iVar0 == 14)
				{
					iVar1 = 16384;
				}
				else if (iVar0 == 15)
				{
					iVar1 = 32768;
				}
				else if (iVar0 == 16)
				{
					iVar1 = 65536;
				}
				else if (iVar0 == 17)
				{
					iVar1 = 131072;
				}
				else if (iVar0 == 18)
				{
					iVar1 = 262144;
				}
				else if (iVar0 == 19)
				{
					iVar1 = 524288;
				}
				else if (iVar0 == 20)
				{
					iVar1 = 1048576;
				}
				else if (iVar0 == 21)
				{
					iVar1 = 2097152;
				}
				else if (iVar0 == 22)
				{
					iVar1 = 4194304;
				}
				else if (iVar0 == 23)
				{
					iVar1 = 8388608;
				}
				else if (iVar0 == 24)
				{
					iVar1 = 16777216;
				}
				else if (iVar0 == 25)
				{
					iVar1 = 33554432;
				}
				else if (iVar0 == 26)
				{
					iVar1 = 67108864;
				}
				else if (iVar0 == 27)
				{
					iVar1 = 134217728;
				}
				else if (iVar0 == 28)
				{
					iVar1 = 268435456;
				}
				else if (iVar0 == 29)
				{
					iVar1 = 536870912;
				}
				if (func_39(Global_40.f_8863.f_151, iVar1))
				{
				}
				iVar0++;
			}
			break;
		case 118535038:
			if (func_39(Global_40.f_8863.f_149, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_149, 512))
			{
			}
			break;
		default:
			break;
	}
}

bool func_81()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (30 - 1))
	{
		if (iVar0 == 0)
		{
			iVar1 = 1;
		}
		else if (iVar0 == 1)
		{
			iVar1 = 2;
		}
		else if (iVar0 == 2)
		{
			iVar1 = 4;
		}
		else if (iVar0 == 3)
		{
			iVar1 = 8;
		}
		else if (iVar0 == 4)
		{
			iVar1 = 16;
		}
		else if (iVar0 == 5)
		{
			iVar1 = 32;
		}
		else if (iVar0 == 6)
		{
			iVar1 = 64;
		}
		else if (iVar0 == 7)
		{
			iVar1 = 128;
		}
		else if (iVar0 == 8)
		{
			iVar1 = 256;
		}
		else if (iVar0 == 9)
		{
			iVar1 = 512;
		}
		else if (iVar0 == 10)
		{
			iVar1 = 1024;
		}
		else if (iVar0 == 11)
		{
			iVar1 = 2048;
		}
		else if (iVar0 == 12)
		{
			iVar1 = 4096;
		}
		else if (iVar0 == 13)
		{
			iVar1 = 8192;
		}
		else if (iVar0 == 14)
		{
			iVar1 = 16384;
		}
		else if (iVar0 == 15)
		{
			iVar1 = 32768;
		}
		else if (iVar0 == 16)
		{
			iVar1 = 65536;
		}
		else if (iVar0 == 17)
		{
			iVar1 = 131072;
		}
		else if (iVar0 == 18)
		{
			iVar1 = 262144;
		}
		else if (iVar0 == 19)
		{
			iVar1 = 524288;
		}
		else if (iVar0 == 20)
		{
			iVar1 = 1048576;
		}
		else if (iVar0 == 21)
		{
			iVar1 = 2097152;
		}
		else if (iVar0 == 22)
		{
			iVar1 = 4194304;
		}
		else if (iVar0 == 23)
		{
			iVar1 = 8388608;
		}
		else if (iVar0 == 24)
		{
			iVar1 = 16777216;
		}
		else if (iVar0 == 25)
		{
			iVar1 = 33554432;
		}
		else if (iVar0 == 26)
		{
			iVar1 = 67108864;
		}
		else if (iVar0 == 27)
		{
			iVar1 = 134217728;
		}
		else if (iVar0 == 28)
		{
			iVar1 = 268435456;
		}
		else if (iVar0 == 29)
		{
			iVar1 = 536870912;
		}
		if (!func_39(Global_40.f_8863.f_151, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_82(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -641229542:
			return GET_HASH_KEY("DOCUMENT_DISCO_RUNAWAY_LETTER");
		case 1937333853:
			return GET_HASH_KEY("DOCUMENT_DISCO_DEAD_SOLDIER_LETTER");
		case -1300082860:
			return GET_HASH_KEY("DOCUMENT_DISCO_ABANDONED_OILDRILL_LETTER");
		case 429544447:
			return GET_HASH_KEY("DOCUMENT_DISCO_LETTER_JESUIT");
		case 1347913620:
			return GET_HASH_KEY("DOCUMENT_CWFORT_JOURNAL");
		case -2009137002:
			return GET_HASH_KEY("DOCUMENT_DISCO_FACE_IN_CLIFF_LETTER");
		case -780455182:
			return GET_HASH_KEY("DOCUMENT_DISCO_GRAVE_NEWSCLIP");
		case 2135153015:
			return GET_HASH_KEY("DOCUMENT_DISCO_BOOTS_LETTER");
		case 1342653896:
			return GET_HASH_KEY("DOCUMENT_LETTER_CHINESE_TRAVELLER");
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_1");
				case 1:
					return GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_2");
				case 2:
					return GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_3");
				case 3:
					return GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_4");
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("DOCUMENT_DISCO_MAIL_WAGON_1");
				case 1:
					return GET_HASH_KEY("DOCUMENT_DISCO_MAIL_WAGON_2");
				case 2:
					return GET_HASH_KEY("DOCUMENT_DISCO_MAIL_WAGON_3");
				case 3:
					return GET_HASH_KEY("DOCUMENT_DISCO_MAIL_WAGON_4");
				case 4:
					return GET_HASH_KEY("DOCUMENT_DISCO_MAIL_WAGON_5");
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 925382142 /* GXTEntry: "Micah Newspaper Scrap" */;
				case 1:
					return -1411632109 /* GXTEntry: "Blackwater Ledger Scrap" */;
				case 2:
					return GET_HASH_KEY("DOCUMENT_DUTCH_BURNED_POSTER");
				default:
					break;
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return GET_HASH_KEY("DOCUMENT_DISCO_MAP_HALF_1");
						case 1:
							return GET_HASH_KEY("DOCUMENT_DISCO_MAP_HALF_2");
						case 2:
							return GET_HASH_KEY("DOCUMENT_DISCO_MAP_FULL");
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return GET_HASH_KEY("DOCUMENT_DISCO_MAP_HALF_1");
						case 1:
							return GET_HASH_KEY("DOCUMENT_DISCO_MAP_HALF_2");
						case 2:
							return GET_HASH_KEY("DOCUMENT_DISCO_MAP_FULL");
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return GET_HASH_KEY("DOCUMENT_BARE_LADY_PHOTO_01");
						case 4:
							return GET_HASH_KEY("DOCUMENT_BARE_LADY_PHOTO_02");
						case 5:
							return GET_HASH_KEY("DOCUMENT_BARE_LADY_PHOTO_03");
						case 6:
							return GET_HASH_KEY("DOCUMENT_BARE_LADY_PHOTO_04");
						case 7:
							return GET_HASH_KEY("DOCUMENT_BARE_LADY_PHOTO_05");
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_83(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 4096))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_149, 8192))
					{
						return true;
					}
					break;
				case 2:
					if (func_39(Global_40.f_8863.f_149, 16384))
					{
						return true;
					}
					break;
				case 3:
					if (func_39(Global_40.f_8863.f_149, 32768))
					{
						return true;
					}
					break;
				case 4:
					if (func_39(Global_40.f_8863.f_149, 65536))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 131072))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_149, 262144))
					{
						return true;
					}
					break;
				case 2:
					if (func_39(Global_40.f_8863.f_149, 524288))
					{
						return true;
					}
					break;
				case 3:
					if (func_39(Global_40.f_8863.f_149, 1048576))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 128))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_149, 256))
					{
						return true;
					}
					break;
				case 2:
					if (func_39(Global_40.f_8863.f_149, 512))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 1))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_149, 2))
					{
						return true;
					}
					break;
				case 2:
					if (func_39(Global_40.f_8863.f_149, 4))
					{
						return true;
					}
					break;
				case 3:
					if (func_39(Global_40.f_8863.f_149, 8))
					{
						return true;
					}
					break;
				case 4:
					if (func_39(Global_40.f_8863.f_149, 16))
					{
						return true;
					}
					break;
				default:
					break;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
					{
						return true;
					}
					break;
				case 2:
					if (func_39(Global_40.f_8863.f_150, 4))
					{
						return true;
					}
					break;
				case 3:
					if (func_39(Global_40.f_8863.f_150, 8))
					{
						return true;
					}
					break;
				case 4:
					if (func_39(Global_40.f_8863.f_150, 16))
					{
						return true;
					}
					break;
				case 5:
					if (func_39(Global_40.f_8863.f_150, 32))
					{
						return true;
					}
					break;
				case 6:
					if (func_39(Global_40.f_8863.f_150, 64))
					{
						return true;
					}
					break;
				case 7:
					if (func_39(Global_40.f_8863.f_150, 128))
					{
						return true;
					}
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 134217728))
					{
						return true;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_149, 67108864))
					{
						return true;
					}
					break;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_84(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 4096))
					{
						func_40(&(Global_40.f_8863.f_149), 4096);
					}
					break;
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 8192))
					{
						func_40(&(Global_40.f_8863.f_149), 8192);
					}
					break;
				case 2:
					if (!func_39(Global_40.f_8863.f_149, 16384))
					{
						func_40(&(Global_40.f_8863.f_149), 16384);
					}
					break;
				case 3:
					if (!func_39(Global_40.f_8863.f_149, 32768))
					{
						func_40(&(Global_40.f_8863.f_149), 32768);
					}
					break;
				case 4:
					if (!func_39(Global_40.f_8863.f_149, 65536))
					{
						func_40(&(Global_40.f_8863.f_149), 65536);
					}
					break;
				default:
					break;
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 131072))
					{
						func_40(&(Global_40.f_8863.f_149), 131072);
					}
					break;
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 262144))
					{
						func_40(&(Global_40.f_8863.f_149), 262144);
					}
					break;
				case 2:
					if (!func_39(Global_40.f_8863.f_149, 524288))
					{
						func_40(&(Global_40.f_8863.f_149), 524288);
					}
					break;
				case 3:
					if (!func_39(Global_40.f_8863.f_149, 1048576))
					{
						func_40(&(Global_40.f_8863.f_149), 1048576);
					}
					break;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 128))
					{
						func_40(&(Global_40.f_8863.f_149), 128);
					}
					break;
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 256))
					{
						func_40(&(Global_40.f_8863.f_149), 256);
					}
					break;
				case 2:
					if (!func_39(Global_40.f_8863.f_149, 512))
					{
						func_40(&(Global_40.f_8863.f_149), 512);
					}
					break;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_150, 1))
					{
						func_40(&(Global_40.f_8863.f_150), 1);
					}
					break;
				case 1:
					if (!func_39(Global_40.f_8863.f_150, 2))
					{
						func_40(&(Global_40.f_8863.f_150), 2);
					}
					break;
				case 2:
					if (!func_39(Global_40.f_8863.f_150, 4))
					{
						func_40(&(Global_40.f_8863.f_150), 4);
					}
					break;
				case 3:
					if (!func_39(Global_40.f_8863.f_150, 8))
					{
						func_40(&(Global_40.f_8863.f_150), 8);
					}
					break;
				case 4:
					if (!func_39(Global_40.f_8863.f_150, 16))
					{
						func_40(&(Global_40.f_8863.f_150), 16);
					}
					break;
				case 5:
					if (!func_39(Global_40.f_8863.f_150, 32))
					{
						func_40(&(Global_40.f_8863.f_150), 32);
					}
					break;
				case 6:
					if (!func_39(Global_40.f_8863.f_150, 64))
					{
						func_40(&(Global_40.f_8863.f_150), 64);
					}
					break;
				case 7:
					if (!func_39(Global_40.f_8863.f_150, 128))
					{
						func_40(&(Global_40.f_8863.f_150), 128);
					}
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 134217728))
					{
						func_40(&(Global_40.f_8863.f_149), 134217728);
					}
					break;
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 67108864))
					{
						func_40(&(Global_40.f_8863.f_149), 67108864);
					}
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

Vector3 func_85(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return -2588.29f, -93.565f, 167.61f;
		case 2072029413:
			return 808.621f, 2299.72f, 251.43f;
		case 425000526:
			return -2367.267f, 124.251f, 216.25f;
		case 733338689:
			return 2378.344f, 1687.092f, 95.406f;
		case -599506500:
			return 2446.8f, 290.5534f, 67.249f;
		case 1424723727:
			return 2152.94f, -1647.566f, 41.22f;
		case 513110082:
			return -4394.59f, -2159.13f, 47.51f;
		case 2072069278:
			return -2333.5f, 904.52f, 157.39f;
		case -1240932004:
			return -1498.01f, 1251.11f, 313.1f;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1518.59f, 533.08f, 102.17f;
				case 1:
					return 1251.912f, 1165.28f, 150.0559f;
				case 2:
					return 2450.56f, 295.432f, 69.77f;
				case 3:
					return 2939.745f, 1422.05f, 45.06f;
				case 4:
					return 1972.995f, 1193.078f, 171.39f;
				default:
					break;
			}
			break;
		case 1187689415:
			switch (iParam1)
			{
				case 0:
					return -4587.193f, -2905.12f, -17.048f;
				case 1:
					return -4587.294f, -2905.708f, -17.239f;
				case 2:
					return -4587.391f, -2906.739f, -18.052f;
				case 3:
					return -4587.547f, -2907.744f, -18.05f;
				case 4:
					return -4587.42f, -2906.782f, -17.7f;
				case 5:
					return -4587.257f, -2906.639f, -18.052f;
				case 6:
					return -4587.304f, -2905.708f, -17.4f;
				case 7:
					return -4586.647f, -2910.855f, -17.212f;
				case 8:
					return -4585.916f, -2911.216f, -17.174f;
				case 9:
					return -4585.063f, -2911.622f, -17.679f;
				case 10:
					return -4584.339f, -2912.104f, -17.25f;
				case 11:
					return -4578.494f, -2906.926f, -17.843f;
				case 12:
					return -4578.637f, -2906.571f, -17.622f;
				case 13:
					return -4579.098f, -2905.573f, -17.374f;
				case 14:
					return -4579.32f, -2905.219f, -17.182f;
				case 15:
					return -4579.203f, -2905.305f, -17.263f;
				case 16:
					return -4579.212f, -2905.34f, -17.814f;
				case 17:
					return -4579.466f, -2905.34f, -17.814f;
				case 18:
					return -4579.286f, -2905.159f, -17.047f;
				case 19:
					return -4582.325f, -2902.774f, -17.303f;
				case 20:
					return -4582.924f, -2902.892f, -17.19f;
				case 21:
					return -4583.114f, -2902.857f, -17.264f;
				case 22:
					return -4583.964f, -2902.846f, -17.452f;
				case 23:
					return -4584.25f, -2902.846f, -17.452f;
				case 24:
					return -4584.875f, -2902.983f, -17.161f;
				case 25:
					return -4583.506f, -2908.181f, -18.329f;
				case 26:
					return -4585.07f, -2907.85f, -17.752f;
				case 27:
					return -4583.453f, -2905.564f, -18.192f;
				case 28:
					return -4582.923f, -2905.564f, -18.052f;
				case 29:
					return -4579.606f, -2907.844f, -17.995f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_86(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

int func_87(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return GET_HASH_KEY("RANSACK_VOLUME_NARROW_0M5_0M5_2M0");
		case -2008558277:
			return GET_HASH_KEY("WORLD_ANIMAL_BAT_HANGING");
		case -1481450947:
			return GET_HASH_KEY("RANSACK_REACH_OVER_VOLUME_NARROW_0M5_0M5_2M0");
		case -1427565340:
			return GET_HASH_KEY("RANSACK_REACH_OVER_VOLUME_0M8_0M5_2M0");
		case -1887999095:
			return GET_HASH_KEY("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
		case 2000209669:
			return GET_HASH_KEY("RANSACK_STRANGE_STATUES_STASH");
		case -161804536:
			return GET_HASH_KEY("RANSACK_VOLUME_0M8_0M5_2M0");
		case 733338689:
			return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_VIKING");
		case 2072029413:
			return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 247563739:
			return GET_HASH_KEY("PROP_PLAYER_LNS_FLOOR_STASH");
		case -35775921:
			return GET_HASH_KEY("RANSACK_REACH_OVER_CENTERED_GROUND_PICKUP");
		case 2135153015:
			return GET_HASH_KEY("RANSACK_REACH_OVER_GENERIC_LETTER_PROMPT_0M5_0M5_2M0");
		case 513110082:
			return GET_HASH_KEY("RANSACK_ATTACHED_CHEST_MEDIUM_OPEN_ONLY");
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("WORLD_PLAYER_DRINK_WITCHES_BREW");
				case 1:
					return GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND");
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return GET_HASH_KEY("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return GET_HASH_KEY("WORLD_PLAYER_PICKUP_WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			return 0;
		}

int func_88(var uParam0)
{
	switch (*uParam0)
	{
		case 1187689415:
			return GET_HASH_KEY("AMMO_ARROW");
		case 513110082:
			return GET_HASH_KEY("AMMO_REVOLVER");
		default:
			break;
	}
	return 0;
}

bool func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_178(iParam0, 0))
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
		if (!func_263(iParam0, 1))
		{
			return false;
		}
	}
	return func_182(iParam0, 0, bParam2) >= iParam1;
}

int func_90(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_264(iParam0, 1);
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
			func_259(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_89(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_256(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_182(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_182(iParam0, 0, 0) - iParam1) < 0)
		{
			func_90(iParam0, func_182(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_198(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_265(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_266(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_206(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_259(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_267(iParam0, iParam1);
	return 1;
}

void func_91(var uParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (func_268(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_268(*uParam0)))
		{
			MAP::_0xD8C7162AB2E2AF45(func_268(*uParam0));
		}
		func_32(*uParam0, 8);
	}
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (func_58(Global_35, func_86(uParam0, uParam0->f_4), 15f, 1, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
		{
			(*uParam2)[iParam3] = func_269(uParam1, "PrimaryItem");
		}
		else if (!DECORATOR::DECOR_EXIST_ON((*uParam2)[iParam3], "letter_item"))
		{
			if (!func_160(uParam0, iParam3) == -1)
			{
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, iParam3)))
				{
					OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT((*uParam2)[iParam3], func_160(uParam0, iParam3), 0, 0);
				}
			}
			if (*uParam0 == 1284679164)
			{
				if (iParam3 == 0)
				{
					iVar0 = GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_1");
				}
				else if (iParam3 == 1)
				{
					iVar0 = GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_2");
				}
				else if (iParam3 == 2)
				{
					iVar0 = GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_3");
				}
				else if (iParam3 == 3)
				{
					iVar0 = GET_HASH_KEY("DOCUMENT_NOTE_FRANKENSTEIN_4");
				}
			}
			else if (*uParam0 == -1887999095)
			{
				iVar0 = GET_HASH_KEY("DOCUMENT_DISCO_GRAYS_SECRET_LETTER");
			}
			DECORATOR::DECOR_SET_INT((*uParam2)[iParam3], "letter_item", iVar0);
		}
	}
}

int func_93(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1427565340:
			switch (iParam1)
			{
				case 1:
					return GET_HASH_KEY("PROVISION_DISCO_SHRUNKEN_HEAD");
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("CONSUMABLE_WHISKEY");
				case 1:
					return GET_HASH_KEY("CONSUMABLE_APPLE");
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("PROVISION_GOLDBAR_LARGE");
				case 1:
					return GET_HASH_KEY("PROVISION_GOLDBAR_LARGE");
				case 2:
					return GET_HASH_KEY("PROVISION_GOLDBAR_LARGE");
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("PROVISION_DISCO_ARROWHEAD_02");
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("PROVISION_DISCO_FERTILITY_STATUE");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_94()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

int func_95(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -2108030724:
			return GET_HASH_KEY("PROVISION_CATHERINES_NECKLACE");
		case -777592153:
		case -35775921:
			return GET_HASH_KEY("PROVISION_GOLDRING");
		case 425000526:
		case 464413478:
			return GET_HASH_KEY("PROVISION_GOLD_NUGGET");
		case -161804536:
			return GET_HASH_KEY("PROVISION_DISCO_VIKING_COMB");
		case -1177787273:
			return GET_HASH_KEY("PROVISION_JEWELRYBAG_SM");
		case -709811179:
		case 1673499939:
			return GET_HASH_KEY("PROVISION_ASTEROID_CHUNK");
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("PROVISION_RING_PLATINUM");
				case 1:
					return GET_HASH_KEY("PROVISION_DISCO_ANCIENT_NECKLACE");
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_96(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_270(iParam0, sParam4, iParam5);
	}
	func_271(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_97(var uParam0)
{
	int iVar0;

	switch (*uParam0)
	{
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar0 = 16;
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if (!func_39(Global_40.f_8863.f_149, iVar0))
	{
		func_40(&(Global_40.f_8863.f_149), iVar0);
	}
}

int func_98()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_153(iVar0);
		if (func_39(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_272(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, 0f, 0f, 0f, func_273(iParam0), func_274(iParam0), 0);
	}
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(0, func_275(iParam0), iParam1, iParam2));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 0, MISC::VAR_STRING(0, func_276(iParam0), iParam1, iParam2), iParam1 == iParam2, false, false);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(func_277(iParam0, 0)), MISC::GET_HASH_KEY(func_278(iParam0, 0)));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(func_277(iParam0, 1)), MISC::GET_HASH_KEY(func_278(iParam0, 1)));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 0, func_279(iParam0, 0), iParam1 == iParam2, true, false);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 1, func_279(iParam0, 1), func_48(373034311), true, false);
}

void func_100(char* sParam0)
{
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_272(-321841939));
	func_280(MISC::VAR_STRING(2, "DISCO_DREAM"), sParam0, GET_HASH_KEY("HUD_TOASTS"), GET_HASH_KEY("TOAST_DREAMCATCHER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, "COL_CTX_PLAYER_LOG"), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_101(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_165(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_102(var uParam0)
{
	int iVar0;

	func_281(&uLocal_66);
	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (!func_160(uParam0, iVar0) == -1)
			{
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, iVar0)))
				{
					TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(func_160(uParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
}

bool func_103(int iParam0)
{
	int iVar0;

	iVar0 = func_104(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

int func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
		case -2060865802:
			return 116;
		case -2019711818:
			return 9;
		case -2009137002:
			return 34;
		case -2008558277:
			return 59;
		case -1960242214:
			return 125;
		case -1958832660:
			return 49;
		case -1923503631:
			return 117;
		case -1891628345:
			return 124;
		case -1887999095:
			return 89;
		case -1882503209:
			return 50;
		case -1859413640:
			return 28;
		case -1859023693:
			return 64;
		case -1848895400:
			return 113;
		case -1841331114:
			return 94;
		case -1829339703:
			return 141;
		case -1824429070:
			return 66;
		case -1787770845:
			return 16;
		case -1761578407:
			return 17;
		case -1761189332:
			return 115;
		case -1714262909:
			return 76;
		case -1686810506:
			return 112;
		case -1646022773:
			return 13;
		case -1636964661:
			return 10;
		case -1614148516:
			return 48;
		case -1609238411:
			return 21;
		case -1568839185:
			return 6;
		case -1505275983:
			return 31;
		case -1494823099:
			return 61;
		case -1481450947:
			return 53;
		case -1457751321:
			return 123;
		case -1427565340:
			return 47;
		case -1420566543:
			return 23;
		case -1308658310:
			return 45;
		case -1300082860:
			return 51;
		case -1287911066:
			return 2;
		case -1283611369:
			return 78;
		case -1272862985:
			return 139;
		case -1243267511:
			return 81;
		case -1240932004:
			return 140;
		case -1208846034:
			return 24;
		case -1177787273:
			return 127;
		case -1144800837:
			return 111;
		case -1109016944:
			return 15;
		case -1084929085:
			return 4;
		case -1061274876:
			return 96;
		case -1053108445:
			return 84;
		case -986176781:
			return 25;
		case -979575591:
			return 103;
		case -968854939:
			return 68;
		case -920971071:
			return 83;
		case -919236330:
			return 79;
		case -890175011:
			return 137;
		case -849582265:
			return 92;
		case -834293086:
			return 91;
		case -780455182:
			return 8;
		case -777592153:
			return 3;
		case -777150535:
			return 100;
		case -763376358:
			return 55;
		case -739986731:
			return 110;
		case -715636193:
			return 95;
		case -709811179:
			return 20;
		case -654238687:
			return 104;
		case -641229542:
			return 46;
		case -607940493:
			return 118;
		case -599506500:
			return 38;
		case -544327665:
			return 106;
		case -499529359:
			return 74;
		case -490142739:
			return 130;
		case -415839138:
			return 98;
		case -409986722:
			return 88;
		case -357364973:
			return 44;
		case -321841939:
			return 11;
		case -261997819:
			return 37;
		case -232974724:
			return 135;
		case -161804536:
			return 29;
		case -148407339:
			return 97;
		case -35775921:
			return 40;
		case -30872859:
			return 30;
		case -657632:
			return 114;
		case 0:
			return 143;
		case 58958195:
			return 72;
		case 74587361:
			return 35;
		case 118535038:
			return 101;
		case 149709049:
			return 67;
		case 173549940:
			return 22;
		case 221420861:
			return 132;
		case 230001763:
			return 107;
		case 233600584:
			return 54;
		case 247563739:
			return 52;
		case 308500632:
			return 136;
		case 330993088:
			return 131;
		case 373034311:
			return 0;
		case 397377585:
			return 87;
		case 404434344:
			return 18;
		case 425000526:
			return 75;
		case 429544447:
			return 93;
		case 435290930:
			return 60;
		case 464413478:
			return 128;
		case 503180747:
			return 19;
		case 513110082:
			return 121;
		case 657666087:
			return 70;
		case 677950956:
			return 142;
		case 683269210:
			return 134;
		case 733338689:
			return 32;
		case 870958936:
			return 1;
		case 918206817:
			return 82;
		case 921081956:
			return 108;
		case 939555152:
			return 27;
		case 949011950:
			return 109;
		case 1034793488:
			return 33;
		case 1048086072:
			return 26;
		case 1091556515:
			return 122;
		case 1120968795:
			return 105;
		case 1124200691:
			return 43;
		case 1154568952:
			return 12;
		case 1187689415:
			return 126;
		case 1187917501:
			return 71;
		case 1284679164:
			return 85;
		case 1335921989:
			return 58;
		case 1342653896:
			return 69;
		case 1347913620:
			return 5;
		case 1351526287:
			return 86;
		case 1424723727:
			return 39;
		case 1431862613:
			return 80;
		case 1464664327:
			return 129;
		case 1490223565:
			return 57;
		case 1505050944:
			return 77;
		case 1519228573:
			return 42;
		case 1519472817:
			return 63;
		case 1535254161:
			return 133;
		case 1673499939:
			return 99;
		case 1734766691:
			return 65;
		case 1801731633:
			return 56;
		case 1833243216:
			return 102;
		case 1861313914:
			return 62;
		case 1937333853:
			return 7;
		case 1982045664:
			return 90;
		case 1986618633:
			return 119;
		case 2000209669:
			return 120;
		case 2072029413:
			return 36;
		case 2072069278:
			return 73;
		case 2134589549:
			return 14;
		case 2135153015:
			return 41;
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

Vector3 func_105(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 827.9519f, 1925.23f, 258.7208f;
			}
			else if (iParam1 == 1)
			{
				return 832.673f, 1922.286f, 258.7208f;
			}
			else if (iParam1 == 2)
			{
				return 829.6969f, 1926.987f, 258.7208f;
			}
			else if (iParam1 == 3)
			{
				return 832.1583f, 1926.718f, 258.7208f;
			}
			else if (iParam1 == 4)
			{
				return 828.2374f, 1922.771f, 258.7208f;
			}
			else if (iParam1 == 5)
			{
				return 830.3385f, 1921.46f, 258.7208f;
			}
			else if (iParam1 == 6)
			{
				return 833.4829f, 1924.626f, 258.7208f;
			}
			else if (iParam1 == 7)
			{
				return 830.591f, 1924.07f, 258.795f;
			}
			else if (iParam1 == 11)
			{
				return -160.9032f, 1599.633f, 180.2413f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_106()
{
	return Global_1572887.f_12;
}

bool func_107(int iParam0, bool bParam1)
{
	switch (func_282(iParam0))
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

void func_108(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_120(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_283(iVar0);
	*uParam0 = 0;
}

void func_109(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (*uParam0 == 404434344)
	{
		vVar0 = { 796.1158f, 1777.652f, 281.4886f };
		vVar3 = { 0f, 0f, -74.42887f };
		vVar6 = { 2.5f, 3f, 5f };
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_284(uParam0));
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 796.1158f, 1777.652f, 281.4886f };
			vVar3 = { 0f, 0f, -74.42887f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { -1279.247f, 2896.268f, 386.576f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 2)
		{
			vVar0 = { 2576.871f, -628.9302f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2578.758f, -629.6465f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 673.9809f, -974.8455f, 54.0894f };
			vVar3 = { 0f, 0f, -23.06569f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -1305.871f, 2468.329f, 309.4034f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 6)
		{
			vVar0 = { 1734.58f, -1895.353f, 45.189f };
			vVar3 = { 0f, 0f, -41.82871f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 7)
		{
			vVar0 = { 2155.717f, 794.849f, 156.1776f };
			vVar3 = { 0f, 0f, 280f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 8)
		{
			vVar0 = { 512.7686f, 1932.379f, 199.7092f };
			vVar3 = { 0f, 0f, -2.622487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_284(uParam0));
		}
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == 1535254161) || *uParam0 == -607940493)
	{
		if (*uParam0 == -1243267511)
		{
			vVar0 = { -2691.41f, -407.6143f, 146.533f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 5f, 5f, 5f };
		}
		else if (*uParam0 == 1535254161)
		{
			vVar0 = { 1503.231f, -1819.476f, 56.89473f };
			vVar3 = { 0f, 0f, 31.7625f };
			vVar6 = { 44.60546f, 27.38259f, 6f };
		}
		else if (*uParam0 == -607940493)
		{
			vVar0 = { 2704.939f, 435.9636f, 91.37785f };
			vVar3 = { 0f, 0f, -54.20028f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			if (*uParam0 == -607940493)
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_284(uParam0));
			}
			else
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_284(uParam0));
			}
		}
	}
	else if (*uParam0 == -890175011)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 2825.817f, -1322.569f, 45.7557f };
			vVar3 = { 0f, 0f, -40.04137f };
			vVar6 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { 2736.975f, -1340.535f, 46.51682f };
			vVar3 = { 0f, 0f, -44.91362f };
			vVar6 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2773.553f, -1183.345f, 48.74084f };
			vVar3 = { 0f, 0f, -23.65903f };
			vVar6 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 2821.369f, -1229.302f, 46.5088f };
			vVar3 = { 0f, 0f, -34.54109f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_284(uParam0));
		}
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vVar0 = { -781.6985f, -1321.918f, 42.8842f };
			vVar3 = { 0f, 0f, -90.32019f };
			vVar6 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -816.7859f, -1313.109f, 44.64705f };
			vVar3 = { 0f, 0f, -89.95428f };
			vVar6 = { 2.607229f, 7.43211f, 4.408258f };
		}
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_284(uParam0));
		}
	}
}

bool func_110(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_111(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_285() - fParam1);
	func_286(uParam0, 1);
	func_287(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_112(var uParam0)
{
	return func_110(*uParam0, 2);
}

int func_113()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_114(var uParam0)
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_58(Global_35, func_53(uParam0, 0), 3f, 1, 1))
			{
				return true;
			}
			break;
		case -890175011:
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_115(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!func_288(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
		if (TASK::_IS_PED_DUELLING(Global_35))
		{
			return false;
		}
	}
	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
	{
		return false;
	}
	if (!func_288(iParam1, 2) && !func_289())
	{
		return false;
	}
	if (!func_288(iParam1, 4) && !func_290())
	{
		return false;
	}
	if (!func_288(iParam1, 128) && !func_291())
	{
		return false;
	}
	if (!func_288(iParam1, 2048) && !func_292(0))
	{
		return false;
	}
	if (!func_288(iParam1, 32) && !func_293(iParam1))
	{
		return false;
	}
	if (!func_288(iParam1, 64) && !func_294())
	{
		return false;
	}
	if (!func_288(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (!func_288(iParam1, 512))
	{
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return false;
		}
	}
	if (!func_288(iParam1, 1024))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
		{
			return false;
		}
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		return false;
	}
	else if (func_295(Global_35, 1369124074))
	{
		return false;
	}
	else if (func_295(Global_35, 713668775))
	{
		return false;
	}
	return true;
}

bool func_116(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_117(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_296(iVar0, 2))
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
				func_297(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_118(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_120(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_119(int iParam0)
{
	int iVar0;

	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_120(iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, 1710353528, 0);
	}
}

int func_120(int iParam0)
{
	return iParam0;
}

bool func_121(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_120(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_122(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_296(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
		case 1:
			return 437457038;
		case 2:
			return 787823186;
		case 3:
			return -22914651;
		case 4:
			return -207797345;
		case 5:
			return 152333965;
		case 6:
			return -705591224;
		case 7:
			return -307775564;
		case 8:
			return -1166159519;
		case 9:
			return -164804701;
		case 10:
			return -1562042092;
		case 11:
			return -1717629304;
		case 12:
			return -1669917636;
		case 13:
			return -884608551;
		case 14:
			return -1143188730;
		case 15:
			return 1856092306;
		case 16:
			return 1445824426;
		case 17:
			return -2082446577;
		case 18:
			return 2030128465;
		case 19:
			return -597126414;
		default:
			break;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -780455182:
			return 1614617630;
		case -1287911066:
			return -617882357;
		case -1636964661:
			return 1599532233;
		case -1646022773:
			return -65357919;
		case 2134589549:
			return 2004715705;
		case -1109016944:
			return -1451193020;
		case 308500632:
			return 1553391542;
		case -709811179:
			return 317656811;
		case -1609238411:
			return 1910189712;
		case -986176781:
			return -1896654834;
		case -161804536:
			return -126421233;
		case -2009137002:
			return -440810089;
		case 1519228573:
			return -703551507;
		case -1614148516:
			return -1705330644;
		case -1958832660:
			return -245016475;
		case -1300082860:
			return 1529964155;
		case 247563739:
			return 325616917;
		case 1861313914:
			return 1067266077;
		case 1734766691:
			return 1292039078;
		case 657666087:
			return -1721762433;
		case 58958195:
			return 712585684;
		case -1243267511:
			return -1482291365;
		case -1053108445:
			return -1576735250;
		case 1982045664:
			return -1173476934;
		case -849582265:
			return 2097588565;
		case 429544447:
			return -159963867;
		case -148407339:
			return -1155213091;
		case -415839138:
			return 979428630;
		case 1673499939:
			return -720689005;
		case -979575591:
			return 463289412;
		case 921081956:
			return 731487006;
		case -739986731:
			return 371066;
		case -1761189332:
			return 270899202;
		case -607940493:
			return 894739389;
		case 1986618633:
			return -2113673964;
		case -1891628345:
			return -804420153;
		case -1960242214:
			return 1747567809;
		case -232974724:
			return -792295257;
		case 1535254161:
			return -452661064;
		case -1505275983:
			return 387715582;
		case 1284679164:
			return -1245190585;
		case -1787770845:
			return 422665644;
		case -1887999095:
			return -95543768;
		case 1034793488:
			return 120200140;
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
				default:
					break;
			}
			return -866955093;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
				case 1:
					return 1378917331;
				case 2:
					return -1267048347;
				case 3:
					return 1840337620;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = func_153(iVar0);
		if (!func_39(Global_40.f_8863.f_148, iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_126()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case -321841939:
				return GET_HASH_KEY("JOURNAL_DISC_DREAMCATCHER_MAP_AR");
			case -1958832660:
				return GET_HASH_KEY("JOURNAL_DISC_ABANDONED_CHURCH_AR");
			case 247563739:
				return GET_HASH_KEY("JOURNAL_DISC_ABANDONED_TRADING_POST_AR");
			case -1300082860:
				return GET_HASH_KEY("JOURNAL_DISC_OIL_WELL_AR");
			case -1287911066:
				return GET_HASH_KEY("JOURNAL_DISC_BARREL_RIDER_AR");
			case 1861313914:
				return GET_HASH_KEY("JOURNAL_DISC_BRAITHWAITE_SECRET_AR");
			case 1734766691:
				return GET_HASH_KEY("JOURNAL_DISC_BRUSH_FIRE_AR");
			case 657666087:
				return GET_HASH_KEY("JOURNAL_DISC_CIRCUS_WAGONS_AR");
			case 1535254161:
				return GET_HASH_KEY("JOURNAL_DISC_CIVIL_WAR_AR");
			case 58958195:
				return GET_HASH_KEY("JOURNAL_DISC_CRASHED_AIRSHIP_AR");
			case -1109016944:
				return GET_HASH_KEY("JOURNAL_DISC_DEAD_TOWN_AR");
			case -780455182:
				return GET_HASH_KEY("JOURNAL_DISC_DEFACED_GRAVE_AR");
			case -1636964661:
				return GET_HASH_KEY("JOURNAL_DISC_DONKEY_LADY_AR");
			case -2009137002:
				return GET_HASH_KEY("JOURNAL_DISC_FACE_CLIFF_AR");
			case -1243267511:
				return GET_HASH_KEY("JOURNAL_DISC_FACE_TREES_AR");
			case -1053108445:
				return GET_HASH_KEY("JOURNAL_DISC_FLYING_MACHINE_AR");
			case -1646022773:
				return GET_HASH_KEY("JOURNAL_DISC_FOSSILISED_MAN_AR");
			case 1284679164:
				return GET_HASH_KEY("JOURNAL_DISC_FRANKENSTEIN_AR");
			case 2134589549:
				return GET_HASH_KEY("JOURNAL_DISC_FROZEN_SETTLER_AR");
			case -1787770845:
				return GET_HASH_KEY("JOURNAL_DISC_GIANT_REMAINS_AR");
			case -1887999095:
				return GET_HASH_KEY("JOURNAL_DISC_GRAYS_SECRET_AR");
			case 1519228573:
				return GET_HASH_KEY("JOURNAL_DISC_HAND_SWAMP_AR");
			case 1982045664:
				return GET_HASH_KEY("JOURNAL_DISC_HERMIT_WOMAN_AR");
			case 308500632:
				return GET_HASH_KEY("JOURNAL_DISC_HIDDEN_TUNNEL_AR");
			case -849582265:
				return GET_HASH_KEY("JOURNAL_DISC_INDIAN_BURIAL_AR");
			case 429544447:
				return GET_HASH_KEY("JOURNAL_DISC_JESUIT_AR");
			case -148407339:
				return GET_HASH_KEY("JOURNAL_DISC_MAMMOTH_AR");
			case -415839138:
				return GET_HASH_KEY("JOURNAL_DISC_MEDITATING_MONK_AR");
			case -709811179:
				return GET_HASH_KEY("JOURNAL_DISC_METEORITE_AR");
			case 1673499939:
				return GET_HASH_KEY("JOURNAL_DISC_METEOR_HOUSE_AR");
			case -979575591:
				return GET_HASH_KEY("JOURNAL_DISC_OBELISK_AR");
			case -1609238411:
				return GET_HASH_KEY("JOURNAL_DISC_OLD_SCRIPTS_AR");
			case 921081956:
				return GET_HASH_KEY("JOURNAL_DISC_ONE_ROOM_CHURCH_AR");
			case -739986731:
				return GET_HASH_KEY("JOURNAL_DISC_PAGAN_RITUAL_AR");
			case 1034793488:
				return GET_HASH_KEY("JOURNAL_DISC_PAINTING_CABIN_AR");
			case -1614148516:
				return GET_HASH_KEY("JOURNAL_DISC_PHONOGRAPH_AR");
			case -1761189332:
				return GET_HASH_KEY("JOURNAL_DISC_REGISTER_ROCK_AR");
			case -607940493:
				return GET_HASH_KEY("JOURNAL_DISC_SERPENT_MOUND_AR");
			case 1986618633:
				return GET_HASH_KEY("JOURNAL_DISC_SPERM_WHALE_AR");
			case -161804536:
				return GET_HASH_KEY("JOURNAL_DISC_STONEHENGE_AR");
			case 2000209669:
				if (iParam2 == 11)
				{
					return GET_HASH_KEY("JOURNAL_DISC_STRANGE_STATUES_PAINTING_AR");
				}
				else
				{
					return GET_HASH_KEY("JOURNAL_DISC_STRANGE_STATUES_AR");
				}
				break;
			case -232974724:
				return GET_HASH_KEY("JOURNAL_DISC_TRADING_POST_AR");
			case -1272862985:
				if (iParam2 == 0)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_AR");
				}
				else if (iParam2 == 1)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_AR");
				}
				else if (iParam2 == 2)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_AR");
				}
				else if (iParam2 == 3)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_AR");
				}
				break;
			case -1891628345:
				return GET_HASH_KEY("JOURNAL_DISC_UTE_WICKIUP");
			case -1960242214:
				return GET_HASH_KEY("JOURNAL_DISC_COLONY_AR");
			case -1505275983:
				return GET_HASH_KEY("JOURNAL_DISC_WARPED_TREE_AR");
			case -890175011:
				if (iParam2 == 0)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP2_AR");
				}
				else if (iParam2 == 1)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP1_AR");
				}
				else if (iParam2 == 2)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP5_AR");
				}
				else if (iParam2 == 3)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP4_AR");
				}
				else if (iParam2 == 4)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP3_AR");
				}
				break;
			case -986176781:
				return GET_HASH_KEY("JOURNAL_DISC_WHALE_BONE_AR");
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -321841939:
				return GET_HASH_KEY("JOURNAL_DISC_DREAMCATCHER_MAP_JN");
			case -1958832660:
				return GET_HASH_KEY("JOURNAL_DISC_ABANDONED_CHURCH_JN");
			case 247563739:
				return GET_HASH_KEY("JOURNAL_DISC_ABANDONED_TRADING_POST_JN");
			case -1300082860:
				return GET_HASH_KEY("JOURNAL_DISC_OIL_WELL_JN");
			case 677950956:
				if (iParam2 == 0)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_AZTEC_1_JN");
				}
				else if (iParam2 == 1)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_AZTEC_2_JN");
				}
				else if (iParam2 == 2)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_AZTEC_3_JN");
				}
				else if (iParam2 == 3)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_AZTEC_4_JN");
				}
				else if (iParam2 == 4)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_AZTEC_5_JN");
				}
				else if (iParam2 == 5)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_AZTEC_6_JN");
				}
				break;
			case -1287911066:
				return GET_HASH_KEY("JOURNAL_DISC_BARREL_RIDER_JN");
			case 1734766691:
				return GET_HASH_KEY("JOURNAL_DISC_BRUSH_FIRE_JN");
			case 657666087:
				return GET_HASH_KEY("JOURNAL_DISC_CIRCUS_WAGONS_JN");
			case 1535254161:
				return GET_HASH_KEY("JOURNAL_DISC_CIVIL_WAR_JN");
			case 58958195:
				return GET_HASH_KEY("JOURNAL_DISC_CRASHED_AIRSHIP_JN");
			case -1109016944:
				return GET_HASH_KEY("JOURNAL_DISC_DEAD_TOWN_JN");
			case -780455182:
				return GET_HASH_KEY("JOURNAL_DISC_DEFACED_GRAVE_JN");
			case -1636964661:
				return GET_HASH_KEY("JOURNAL_DISC_DONKEY_LADY_JN");
			case -2009137002:
				return GET_HASH_KEY("JOURNAL_DISC_FACE_CLIFF_JN");
			case -1243267511:
				return GET_HASH_KEY("JOURNAL_DISC_FACE_TREES_JN");
			case -1053108445:
				return GET_HASH_KEY("JOURNAL_DISC_FLYING_MACHINE_JN");
			case -1646022773:
				return GET_HASH_KEY("JOURNAL_DISC_FOSSILISED_MAN_JN");
			case 1284679164:
				return GET_HASH_KEY("JOURNAL_DISC_FRANKENSTEIN_JN");
			case 2134589549:
				return GET_HASH_KEY("JOURNAL_DISC_FROZEN_SETTLER_JN");
			case -1787770845:
				return GET_HASH_KEY("JOURNAL_DISC_GIANT_REMAINS_JN");
			case -1887999095:
				return GET_HASH_KEY("JOURNAL_DISC_GRAYS_SECRET_JN");
			case 1519228573:
				return GET_HASH_KEY("JOURNAL_DISC_HAND_SWAMP_JN");
			case 1982045664:
				return GET_HASH_KEY("JOURNAL_DISC_HERMIT_WOMAN_JN");
			case 308500632:
				return GET_HASH_KEY("JOURNAL_DISC_HIDDEN_TUNNEL_JN");
			case -849582265:
				return GET_HASH_KEY("JOURNAL_DISC_INDIAN_BURIAL_JN");
			case 429544447:
				return GET_HASH_KEY("JOURNAL_DISC_JESUIT_JN");
			case -148407339:
				return GET_HASH_KEY("JOURNAL_DISC_MAMMOTH_JN");
			case -415839138:
				return GET_HASH_KEY("JOURNAL_DISC_MEDITATING_MONK_JN");
			case -709811179:
				return GET_HASH_KEY("JOURNAL_DISC_METEORITE_JN");
			case 1673499939:
				return GET_HASH_KEY("JOURNAL_DISC_METEOR_HOUSE_JN");
			case -979575591:
				return GET_HASH_KEY("JOURNAL_DISC_OBELISK_JN");
			case -1609238411:
				return GET_HASH_KEY("JOURNAL_DISC_OLD_SCRIPTS_JN");
			case 921081956:
				return GET_HASH_KEY("JOURNAL_DISC_ONE_ROOM_CHURCH_JN");
			case -739986731:
				return GET_HASH_KEY("JOURNAL_DISC_PAGAN_RITUAL_JN");
			case 1034793488:
				return GET_HASH_KEY("JOURNAL_DISC_PAINTING_CABIN_JN");
			case -1614148516:
				return GET_HASH_KEY("JOURNAL_DISC_PHONOGRAPH_JN");
			case -1761189332:
				return GET_HASH_KEY("JOURNAL_DISC_REGISTER_ROCK_JN");
			case -607940493:
				return GET_HASH_KEY("JOURNAL_DISC_SERPENT_MOUND_JN");
			case 1986618633:
				return GET_HASH_KEY("JOURNAL_DISC_SPERM_WHALE_JN");
			case -161804536:
				return GET_HASH_KEY("JOURNAL_DISC_STONEHENGE_JN");
			case 2000209669:
				if (iParam2 == 11)
				{
					return GET_HASH_KEY("JOURNAL_DISC_STRANGE_STATUES_PAINTING_JN");
				}
				else
				{
					return GET_HASH_KEY("JOURNAL_DISC_STRANGE_STATUES_JN");
				}
				break;
			case -232974724:
				return GET_HASH_KEY("JOURNAL_DISC_TRADING_POST_JN");
			case -1272862985:
				if (iParam2 == 0)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_01_JN");
				}
				else if (iParam2 == 1)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_02_JN");
				}
				else if (iParam2 == 2)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_03_JN");
				}
				else if (iParam2 == 3)
				{
					return GET_HASH_KEY("JOURNAL_DISCOVER_TRAIL_TREES_TREE_04_JN");
				}
				break;
			case -1891628345:
				return GET_HASH_KEY("JOURNAL_DISC_UTE_WICKIUP_JN");
			case -1960242214:
				return GET_HASH_KEY("JOURNAL_DISC_COLONY_JN");
			case -1505275983:
				return GET_HASH_KEY("JOURNAL_DISC_WARPED_TREE_JN");
			case -986176781:
				return GET_HASH_KEY("JOURNAL_DISC_WHALE_BONE_JN");
			case -890175011:
				if (iParam2 == 0)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP2_JN");
				}
				else if (iParam2 == 1)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP1_JN");
				}
				else if (iParam2 == 2)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP5_JN");
				}
				else if (iParam2 == 3)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP4_JN");
				}
				else if (iParam2 == 4)
				{
					return GET_HASH_KEY("JOURNAL_TOWN_SECRET_VAMP3_JN");
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_127(iParam0, 1, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_127(iParam0, 0, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_129(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_298(1);
	}
}

int func_130()
{
	int iVar0;

	iVar0 = 0;
	if (func_39(Global_40.f_8863.f_154, 2048))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 4096))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 8192))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 16384))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 32768))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_131()
{
	int iVar0;

	if (!func_89(GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"), 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (!func_299(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_295(Global_35, 1369124074))
	{
		return false;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_Y"))) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_A"))) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_B"))) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_LT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_RT"))) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_CONTEXT_ACTION")))
	{
		return false;
	}
	iVar0 = GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL");
	if (INVENTORY::_0x3D10D7179D7034AF(func_300(0), iVar0, 0))
	{
		return false;
	}
	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_301();
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_JOURNAL"), false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
	return true;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_133()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_134(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_136(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar6 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

int func_137(var uParam0)
{
	return uParam0;
}

int func_138(int iParam0)
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

int func_139(int iParam0)
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

void func_140(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_302();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_303(iParam0);
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
	if (func_201(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
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
	Global_40.f_11095.f_35 = func_304(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_302();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_305(iVar1);
		func_307(func_306(), 0, 4000);
		func_308(Global_40.f_11095.f_35);
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
		func_309(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_215(func_262(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_139(14))
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
					sParam4 = func_310(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_215(func_262(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_139(4))
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
					sParam4 = func_310(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_262(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_312(10, 1);
	}
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

Vector3 func_142(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.582f, 430.9633f, 96.2455f;
				case 1:
					return 1123.024f, 430.963f, 95.7573f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.886f, -2176.59f, 71.4468f;
				case 1:
					return -2337.024f, -2179.854f, 71.9464f;
				case 2:
					return -2343.997f, -2181.427f, 70.977f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.953f, -2500.892f, 1.8466f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.936f, 124.0762f, 216.8527f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.849f, -2982.679f, -5.7608f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.37f, -1769.114f, 51.5788f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.266f, -2671.288f, 41.17608f;
				case 1:
					return -1411.035f, -2671.661f, 41.17608f;
				case 2:
					return -1411.408f, -2672.634f, 41.1746f;
				case 3:
					return -1413.048f, -2671.595f, 41.1746f;
				case 4:
					return -1412.823f, -2670.672f, 41.1746f;
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
				case 6:
					return -1413.745f, -2671.585f, 41.1746f;
				case 7:
					return -1412.558f, -2671.803f, 41.1746f;
				case 8:
					return -1412.088f, -2671.957f, 41.1746f;
				case 9:
					return -1412.338f, -2671.517f, 41.1746f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
				case 1:
					return -328.35f, -147.69f, 52.62f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.68f, -1433.048f, 138.7403f;
				case 1:
					return -2261.088f, -1434.147f, 138.5787f;
				case 2:
					return -2261.852f, -1433.882f, 138.6091f;
				case 3:
					return -2261.244f, -1434.466f, 138.7101f;
				case 4:
					return -2261.025f, -1432.579f, 138.68f;
				case 5:
					return -2260.271f, -1432.243f, 138.9447f;
				case 6:
					return -2260.379f, -1433.973f, 138.763f;
				case 7:
					return -2259.772f, -1432.779f, 138.7855f;
				case 8:
					return -2262.282f, -1433.536f, 138.7945f;
				case 9:
					return -2259.818f, -1433.147f, 138.9421f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.028f, 1996.19f, 168.2534f;
				case 1:
					return 2475.049f, 1998.073f, 168.2685f;
				case 2:
					return 2474.894f, 1999.316f, 168.2582f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.078f, 1575.433f, 360.6882f;
				case 1:
					return 1080.511f, 1659.407f, 372.3716f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.918f, 7.61f;
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
				case 2:
					return -4756.033f, -2420.065f, 7.9381f;
				case 3:
					return -4757.72f, -2419.863f, 7.8109f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.07f, 127.9608f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
				case 1:
					return -5419.692f, -3651.995f, -20f;
				case 2:
					return -5419.692f, -3653.495f, -20f;
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
				case 5:
					return -5429.492f, -3655.095f, -20f;
				case 6:
					return -5429.492f, -3653.61f, -20f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.915f, 44.5785f;
				case 1:
					return 1047.956f, -1880.671f, 45.402f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.84f, -88.9414f, 97.5094f;
				case 1:
					return -1332.349f, -87.4579f, 97.4614f;
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.42f, 45.4395f;
				case 1:
					return -3712.339f, -3602.567f, 44.9224f;
				case 2:
					return -3716.815f, -3604.644f, 44.6678f;
				case 3:
					return -3716.111f, -3602.837f, 46.7136f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.339f, -1624.245f, 89.9356f;
				case 1:
					return -1755.518f, -1624.026f, 90.635f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.68f, 319.2006f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.926f, -3466.984f, -10.575f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
				default:
					break;
			}
			break;
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.535f, -560.0701f, 46.6156f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.788f, 1152.984f, 151.5137f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.723f, -254.32f, 186.8714f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.224f, -1764.319f, 46.4285f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.461f, -618.8527f, 135.3655f;
				case 1:
					return -2222.735f, -616.4194f, 135.0682f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.332f, -1360.154f, 44.1704f;
				default:
					break;
			}
			break;
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.309f, 225.1319f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.994f, 1257.913f, 171.0152f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.04f, 564.7737f, 70.937f;
				case 1:
					return 2519.439f, 562.9084f, 70.9917f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_143())
					{
						return 792.7722f, 1776.509f, 281.5611f;
					}
					else if (func_144())
					{
						return 794.3322f, 1778.012f, 280.3784f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.558f, 1251.074f, 313.1244f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_143()
{
	if (func_147(932909855))
	{
		return true;
	}
	return false;
}

bool func_144()
{
	if (func_147(2051822093))
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_313(Global_1835011[iParam0 /*74*/].f_1);
}

int func_146()
{
	return Global_0.f_7;
}

bool func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_314(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_148(int iParam0)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_315(iParam0))
	{
		return false;
	}
	return func_313(Global_1347702[iParam0 /*49*/].f_15);
}

void func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_314(iParam0, 1);
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

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_314(iParam0, 1);
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

void func_151()
{
	func_150(-939420910);
	func_150(-1187950766);
	func_150(356365161);
	func_150(753127042);
	func_150(-2038424081);
	func_150(1884271742);
	func_150(459290420);
}

void func_152()
{
	func_150(704802028);
	func_150(588987611);
	func_150(2008888900);
	func_150(1649996811);
	func_150(227918160);
	func_150(168171957);
	func_150(1193080109);
	func_150(-491981251);
	func_150(-639037538);
	func_150(-618620429);
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

var func_154()
{
	return Global_40.f_8863.f_148;
}

float func_155(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_156(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar3 = { 0f, 0f, 0f };
	if (((*uParam0 == -1427565340 || *uParam0 == -657632) || *uParam0 == 2135153015) || *uParam0 == -709811179)
	{
		vVar6.x = (2f * 2f);
		vVar6.f_1 = (2f * 2f);
		vVar6.f_2 = 3f;
	}
	else
	{
		vVar6.x = 2f;
		vVar6.f_1 = 2f;
		vVar6.f_2 = 3f;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
	}
	if (*uParam0 == 247563739)
	{
		vVar0 = { 2449.782f, 2098.213f, 172.2724f };
		vVar3 = { 0f, 0f, -45.764f };
		vVar6 = { 3.445997f, 4.034004f, 5.6249f };
	}
	if (!func_22(vVar0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_14))
		{
			if (*uParam0 == 247563739)
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_316(uParam0));
			}
			else
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_316(uParam0));
			}
		}
	}
}

void func_157(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		uLocal_66.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*uParam0)
	{
		case -1427565340:
			uLocal_66.f_6[0] = GET_HASH_KEY("S_URNDISCOVERABLE01X");
			uLocal_66.f_6[1] = GET_HASH_KEY("S_SHRUNKENHEAD01X");
			break;
		case -1859413640:
			uLocal_66.f_6[0] = GET_HASH_KEY("S_INV_WHISKEY01X");
			uLocal_66.f_6[1] = GET_HASH_KEY("P_APPLE01X");
			break;
		case -780455182:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_NEWSCLIP01X");
			break;
		case 1335921989:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_FOLDEDBILLSSMALL01X");
			break;
		case 2135153015:
			uLocal_66.f_6[1] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			break;
		case -709811179:
			uLocal_66.f_6[0] = GET_HASH_KEY("S_METEORITESHARD01X");
			break;
		case -1061274876:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[1] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[2] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[3] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			uLocal_66.f_6[4] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
					break;
				case 1:
					uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
					break;
				case 2:
					uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_PHOTONUDIE01X_4X6");
					uLocal_66.f_6[1] = GET_HASH_KEY("P_CS_PHOTONUDIE02X_4X6");
					uLocal_66.f_6[2] = GET_HASH_KEY("P_CS_PHOTONUDIE03X_4X6");
					uLocal_66.f_6[3] = GET_HASH_KEY("P_CS_PHOTONUDIE04X_4X6");
					uLocal_66.f_6[4] = GET_HASH_KEY("P_CS_PHOTONUDIE05X_4X6");
					break;
			}
			break;
		case 464413478:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_DISWISKEYTREEBOTTLEWIND01X");
			uLocal_66.f_6[1] = GET_HASH_KEY("P_GOLDNUGGET01X");
			break;
		case 373034311:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_ANCIENTARROWHEAD02X");
			break;
		case 1284679164:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_LETTER03X");
			uLocal_66.f_6[1] = GET_HASH_KEY("P_CS_LETTER03X");
			uLocal_66.f_6[2] = GET_HASH_KEY("P_CS_LETTER03X");
			uLocal_66.f_6[3] = GET_HASH_KEY("P_CS_LETTER03X");
			break;
		case -1494823099:
			uLocal_66.f_6[0] = GET_HASH_KEY("S_JEWLERYBOX_SM_PLAIN01X");
			uLocal_66.f_6[1] = GET_HASH_KEY("S_JEWLERYBOX_LRG_PLAIN01X");
			break;
		case 118535038:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_CS_NEWSCLIP01X");
			uLocal_66.f_6[1] = GET_HASH_KEY("P_CS_NEWSCLIP01X");
			uLocal_66.f_6[2] = GET_HASH_KEY("P_CS_RT_ENVELOPE01X");
			break;
		case 247563739:
			uLocal_66.f_6[0] = GET_HASH_KEY("P_LNNHOUSE_STASH02");
			break;
		case -1481450947:
		case -1420566543:
		case -1208846034:
		case -763376358:
		case -599506500:
		case -357364973:
		case -261997819:
		case -657632:
		case 435290930:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1424723727:
		case 1490223565:
		case 1801731633:
		case 2072029413:
			break;
		default:
			break;
	}
}

void func_158(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_6[iVar0], false);
		}
		iVar0++;
	}
}

var func_159(var uParam0)
{
	return PED::_0x91FE941F9FCFB702(func_317(uParam0, 0), 0);
}

int func_160(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1887999095:
			return GET_HASH_KEY("UI_LETTER_GRBR");
		case -780455182:
			return GET_HASH_KEY("UI_DOC_SKATENEWSP");
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("UI_NOTE_FRANKENSTEIN_1");
				case 1:
					return GET_HASH_KEY("UI_NOTE_FRANKENSTEIN_2");
				case 2:
					return GET_HASH_KEY("UI_NOTE_FRANKENSTEIN_3");
				case 3:
					return GET_HASH_KEY("UI_NOTE_FRANKENSTEIN_4");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return -1;
}

bool func_161(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_162(var uParam0)
{
	if (!PED::_0xB0B2C6D170B0E8E5(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (*uParam1 == 0)
	{
		*uParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam2->f_6[iParam3], func_53(uParam0, iParam3), iParam4);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam1) && !ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		(*uParam2)[iParam3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam1));
		if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iParam3]))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam3]))
	{
		return true;
	}
	return false;
}

void func_165(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam2]))
	{
		if (bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0[iParam2]);
		}
		else
		{
			OBJECT::DELETE_OBJECT(uParam0[iParam2]);
		}
	}
}

int func_166(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8)
{
	return TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iParam0, iParam1, vParam2, fParam5, iParam6, iParam7, iParam8);
}

bool func_167(var uParam0, var uParam1)
{
	if (!func_320(uParam1, func_317(uParam0, 0), func_53(uParam0, 0), func_66(uParam0, 0), 0, func_318(uParam0), func_319(uParam0)))
	{
		return false;
	}
	return true;
}

float func_168(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return -162.606f;
		case -1481450947:
			return 0f;
		case -1427565340:
			return -49.4f;
		case -1887999095:
			return 40f;
		case 2000209669:
			return -13f;
		case -161804536:
			return -160f;
		case 733338689:
			return -5.848f;
		case 2072029413:
			return -155.926f;
		case 2135153015:
			return 3.97f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
				case 1:
					return 103.5514f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				default:
					break;
			}
			Jump @410; //curOff = 250
			switch (iParam1)
			{
				case 0:
					return 108.929f;
				case 1:
					return -98.32f;
				case 2:
					return -76.119f;
				case 3:
					return -156.164f;
				default:
					break;
			}
			Jump @410; //curOff = 320
			switch (iParam1)
			{
				case 0:
					return -156f;
				case 1:
					return -156f;
				case 2:
					return 20f;
				case 3:
					return -142.537f;
				case 4:
					return 30f;
				default:
					break;
			}
			return 0f;
		}

int func_169(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

int func_170(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return GET_HASH_KEY("PICKUP_WEAPON_MELEE_ANCIENT_HATCHET");
		case 2072029413:
			return GET_HASH_KEY("PICKUP_WEAPON_THROWN_TOMAHAWK_ANCIENT");
		case 425000526:
			return GET_HASH_KEY("PICKUP_WEAPON_MELEE_KNIFE_MINER");
		case 733338689:
			return GET_HASH_KEY("PICKUP_WEAPON_MELEE_HATCHET_VIKING");
		case -599506500:
			return GET_HASH_KEY("PICKUP_WEAPON_MELEE_KNIFE_CIVIL_WAR");
		case 1424723727:
			return GET_HASH_KEY("PICKUP_WEAPON_MELEE_BROKEN_SWORD");
		case 1187689415:
			return GET_HASH_KEY("PICKUP_WEAPON_SINGLE_ARROW");
		case 513110082:
			return GET_HASH_KEY("PICKUP_WEAPON_REVOLVER_SCHOFIELD_GOLDEN");
		case 2072069278:
			return GET_HASH_KEY("PICKUP_WEAPON_MELEE_KNIFE_BEAR");
		case -1240932004:
			return GET_HASH_KEY("PICKUP_WEAPON_REVOLVER_DOUBLEACTION_MICAH");
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return GET_HASH_KEY("PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT");
				case 1:
					return GET_HASH_KEY("PICKUP_WEAPON_MELEE_HATCHET_HEWING");
				case 2:
					return GET_HASH_KEY("PICKUP_WEAPON_MELEE_HATCHET_HUNTER");
				case 3:
					return GET_HASH_KEY("PICKUP_WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
				case 4:
					return GET_HASH_KEY("PICKUP_WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
				default:
					break;
			}
			break;
	}
	return GET_HASH_KEY("PICKUP_CUSTOM_SCRIPT");
}

Vector3 func_171(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -261997819:
			return 90f, 0f, 90f;
		case 2072029413:
			return 90f, 90f, 15f;
		case 425000526:
			return 180f, 0f, -75f;
		case 733338689:
			return 90f, 0f, 0f;
		case -599506500:
			return -88.98f, 179.087f, 84.344f;
		case 1424723727:
			return 0f, -180f, -45f;
		case 513110082:
			return 85.548f, 2.5f, -213.718f;
		case 2072069278:
			return 10f, 120f, -90f;
		case -1240932004:
			return 95f, 1f, -90f;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return 61.619f, 90f, 0f;
				case 1:
					return -3.810202f, 107.6488f, -74.03042f;
				case 2:
					return -0.500274f, 100.8485f, -150.5197f;
				case 3:
					return 5.459759f, 110.1288f, -48.05038f;
				case 4:
					return 0f, 103f, 46.23f;
				default:
					break;
			}
			break;
		case 1187689415:
			switch (iParam1)
			{
				case 0:
					return -37.818f, 53.906f, -130.345f;
				case 1:
					return -8.56f, 62.259f, -105.296f;
				case 2:
					return -13.446f, 23.014f, -97.164f;
				case 3:
					return -8.56f, 62.259f, -105.296f;
				case 4:
					return -171.402f, 35.692f, 84.396f;
				case 5:
					return 4.618f, 149.374f, -73.049f;
				case 6:
					return -8.56f, 62.259f, -82.994f;
				case 7:
					return -27.425f, 53.226f, -60.111f;
				case 8:
					return -45.451f, 21.768f, -58.815f;
				case 9:
					return -56.331f, 36.756f, -80.348f;
				case 10:
					return -17.416f, 47.165f, -27.809f;
				case 11:
					return -36.161f, 44.38f, 67.587f;
				case 12:
					return -27.218f, 46.355f, 81.004f;
				case 13:
					return -27.218f, 46.355f, 81.004f;
				case 14:
					return -14.257f, 43.951f, 74.951f;
				case 15:
					return -28.903f, 48.441f, 73.874f;
				case 16:
					return -41.057f, 43.138f, 86.532f;
				case 17:
					return -8.856f, -52.929f, 131.499f;
				case 18:
					return -37.857f, 35.937f, 84.612f;
				case 19:
					return -20.811f, 40.799f, 165.466f;
				case 20:
					return -43.985f, 34.145f, 148.431f;
				case 21:
					return -56.443f, 32.913f, 146.922f;
				case 22:
					return -71.981f, 42.679f, 155.987f;
				case 23:
					return -57.427f, 33.942f, 152.594f;
				case 24:
					return -25.488f, 58.05f, -173.866f;
				case 25:
					return -56.451f, -30.396f, 106.864f;
				case 26:
					return -60.238f, -32.993f, 104.798f;
				case 27:
					return 68.817f, -141.339f, -79.397f;
				case 28:
					return -67.125f, 33.397f, 75.813f;
				case 29:
					return 15.27f, -174.558f, 87.363f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_172(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	if (bParam3)
	{
		while (iLocal_61 < 30)
		{
			if (!func_78(iLocal_61))
			{
				if (!OBJECT::DOES_PICKUP_EXIST((*iParam1)[iLocal_61]))
				{
					if (!func_22(func_85(uParam0, iLocal_61)))
					{
						func_40(&iLocal_60, 2);
						(*iParam1)[iLocal_61] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, uParam0->f_4), func_85(uParam0, iLocal_61), func_171(uParam0, iLocal_61), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
					}
				}
			}
			iLocal_61++;
		}
		func_321(uParam2, 2);
		return true;
	}
	else
	{
		switch (*uParam2)
		{
			case 0:
				func_321(uParam2, 1);
				break;
			case 1:
				if (iLocal_61 < 30)
				{
					if (!func_78(iLocal_61))
					{
						if (!OBJECT::DOES_PICKUP_EXIST((*iParam1)[iLocal_61]))
						{
							if (!func_22(func_85(uParam0, iLocal_61)))
							{
								func_40(&iLocal_60, 2);
								(*iParam1)[iLocal_61] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, uParam0->f_4), func_85(uParam0, iLocal_61), func_171(uParam0, iLocal_61), iLocal_60, -1, 0, true, 0, 0, 0f, 0);
							}
						}
					}
					iLocal_61++;
				}
				else
				{
					func_321(uParam2, 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

bool func_173(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!func_67(uParam1, func_53(uParam0, iVar0), func_66(uParam0, iVar0), iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_87(uParam0, iParam1) == 0)
	{
		iVar0 = func_169(func_87(uParam0, iParam1), func_86(uParam0, iParam1), func_168(uParam0, iParam1), 0, 0, 0);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_175(var uParam0)
{
	if (PED::_0xB0B2C6D170B0E8E5(*uParam0))
	{
		PED::_0x13E7320C762F0477(*uParam0);
	}
}

char* func_176(var uParam0)
{
	switch (*uParam0)
	{
		case -763376358:
			return "DISCO_MASK_AM";
		case -739986731:
			return "DISCO_MASK_PR";
		case 1801731633:
			return "DISCO_MASK_CAT";
		case 1490223565:
			return "DISCO_MASK_RAM";
		case 733338689:
		case 2134589549:
			return "DISCO_HELMET";
		default:
			break;
	}
	return "";
}

void func_177(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST((*iParam0)[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_178(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_179(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_106() == -1)
	{
		if (func_322(iParam0) && func_323(iParam0))
		{
			func_324(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_180(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_325(iParam0, iParam1);
	Var0 = { func_326(iParam0, 0, 1) };
	iVar5 = func_327(iParam0, &Var0, 0, 0);
	iVar6 = func_328(iParam0, 0);
	if ((iVar5 > 1 && !func_329()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_199(iParam0, -2051813666))
		{
			func_189(583, 1);
		}
		else
		{
			func_189(582, 0);
		}
	}
	if (func_330(iParam0, &Var0, *iParam1, 0, 0))
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

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_331(iParam0, -949239683))
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

int func_182(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_264(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_332(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_300(bParam2), iParam0, 0);
	return iVar2;
}

bool func_183(int iParam0)
{
	if (func_106() != -1)
	{
		return false;
	}
	return func_184(iParam0) != 0;
}

int func_184(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_333())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_334(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_185(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_333())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_185(iVar0))
		{
			if (func_89(func_334(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_187(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_335(48);
	func_37(0, -1);
}

bool func_188(int iParam0)
{
	if (func_106() != -1)
	{
		return false;
	}
	return func_107(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_189(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_336(iParam0, &iVar0, &iVar1);
	if (!func_337(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_338(iVar0, iVar1);
}

int func_190(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_191(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_192(int iParam0)
{
	if (func_106() != -1)
	{
		return false;
	}
	return func_107(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_193(int iParam0)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_315(iParam0))
	{
		return false;
	}
	return func_313(Global_1347702[iParam0 /*49*/].f_15);
}

int func_194()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_89(func_339(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_133() && (func_193(38) || func_188(38)))
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
			if (func_133() && (func_193(39) || func_188(39)))
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
			iVar9 = func_340(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_133() && (func_193(41) || func_188(41)))
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
			if (func_133() && (func_193(49) || func_188(49)))
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
			iVar9 = func_340(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_341(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_342(iParam0, iVar13, iVar14))
	{
	}
	if (func_343(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_344(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_345(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_346(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_347(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_196(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_133() && (func_193(38) || func_188(38)))
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
			if (func_133() && (func_193(39) || func_188(39)))
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
			if (func_133() && (func_193(49) || func_188(49)))
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
		if (func_133() && (func_193(38) || func_188(38)))
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
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_349(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_348(func_191(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_133() && (func_193(39) || func_188(39)))
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
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_133() && (func_193(49) || func_188(49)))
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
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_280(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_198(int iParam0)
{
	vector3 vVar0;

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_199(int iParam0, int iParam1)
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

bool func_200(int iParam0, int iParam1)
{
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_201(int iParam0)
{
	if (!func_350(iParam0))
	{
		return false;
	}
	return func_351(iParam0);
}

void func_202(int iParam0)
{
	if (!func_350(iParam0))
	{
		return;
	}
	func_352(iParam0);
	func_353(iParam0);
}

int func_203(int iParam0)
{
	struct<2> Var0;

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_204(int iParam0, bool bParam1)
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
	if (func_178(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_354(iVar0) || func_75(iVar0))
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

int func_205(int iParam0, bool bParam1)
{
	if (!func_178(iParam0, 0))
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

bool func_206(bool bParam0)
{
	if (func_106() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_300(bParam0));
}

bool func_207(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_326(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_355((398 + iVar28), 1);
			if (func_356(iParam0, &Var0, iVar5, 0))
			{
				if (func_357(iParam0, &Var6, iVar5))
				{
					Var29 = { func_358(iParam0, Var0, iVar5, 0) };
					func_359(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_206(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_208(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_360(iParam0, iParam1);
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

bool func_208(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_210(iParam0))
	{
		return false;
	}
	if (!func_206(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_209(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_205(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_106() == -1)
		{
			func_76(iVar0);
			if (iParam1 == 1248274121)
			{
				func_361(iVar0);
			}
		}
		if (!func_330(iParam0, &uVar1, 1, 0, 0))
		{
			func_324(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_362(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_207(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_207(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_207(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_15())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_363(iVar0))
				{
					func_207(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_207(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_364(Global_35, 2, 0, 1);
				if ((((func_260(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_201(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_260(iVar7) && func_201(24))
				{
					if (!func_207(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_207(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_207(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_189(480, 1);
	}
	return true;
}

bool func_210(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_211(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_210(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_260(iVar4))
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
	if (func_89(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_247(func_365(iParam0), func_246(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_106() == -1)
		{
			if (func_107(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_189(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_206(0))
	{
		if (func_208(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_252(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_212(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_366()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_367(Global_35, iParam0, &uVar0))
		{
			func_231(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_237();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_237();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_237();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_235();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_233();
			break;
	}
}

void func_213(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_233();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_234();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_235();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_236();
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
			func_237();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_94();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_368();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_214(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_215(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_216(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_217(int iParam0)
{
	bool bVar0;

	bVar0 = func_199(iParam0, -2017733358);
	if (func_369() < 3)
	{
		if (bVar0)
		{
			if (func_371(func_370(iParam0), iParam0))
			{
				func_247(79, func_246(func_370(iParam0)), 1);
			}
			else
			{
				func_247(78, func_246(func_370(iParam0)), 1);
			}
		}
		else
		{
			func_247(80, func_246(func_372(iParam0)), 1);
		}
	}
}

bool func_218()
{
	if (((((func_373(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_373(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_373(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_373(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_373(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_373(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_219(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_374(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_270(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_271(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_220(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_197(51, 0, 0, 0, 0, -1, 0);
			func_375(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_197(51, 0, 0, 0, 0, -1, 0);
			func_375(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_195(39, 0, 0, 0, 0, 0, 1, 0);
			func_197(39, 0, 0, 0, 0, -1, 0);
			func_376(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_195(41, 0, 0, 0, 0, 0, 1, 0);
			func_197(41, 0, 0, 0, 0, -1, 0);
			func_377(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_195(49, 0, 0, 0, 0, 0, 1, 0);
			func_197(49, 0, 0, 0, 0, -1, 0);
			func_378(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_195(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_379(1), 0, -1, 0);
			func_380(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_195(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_379(2), 0, -1, 0);
			func_380(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_195(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_379(4), 0, -1, 0);
			func_380(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_195(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_379(8), 0, -1, 0);
			func_380(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_195(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_379(16), 0, -1, 0);
			func_380(16);
			break;
	}
}

void func_221(int iParam0)
{
	if (func_381() == 1)
	{
		if (func_188(39))
		{
			func_189(342, 0);
		}
		else
		{
			func_189(343, 0);
			func_376(1);
		}
	}
	if (func_381() >= 30)
	{
		func_189(344, 0);
	}
	func_195(39, 0, 0, 0, 0, 0, -1, 0);
	func_197(39, 0, 0, func_381(), 30, 1, 0);
}

void func_222(int iParam0)
{
	if (func_382() == 1)
	{
		if (func_188(49))
		{
			func_189(409, 0);
		}
		else
		{
			func_189(410, 0);
			func_378(1);
		}
	}
	if (func_382() >= 10)
	{
		func_189(411, 0);
	}
	func_195(49, 0, 0, 0, 0, 0, -1, 0);
	func_197(49, 0, 0, func_382(), 10, 1, 0);
}

void func_223(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_189(437, 0);
			func_189(440, 0);
			func_383(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_197(51, 0, 0, sVar0, func_340(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_375(1);
			func_55(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_383(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_197(51, 0, 0, sVar0, func_340(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_375(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_383(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_197(51, 0, 0, sVar0, func_340(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_375(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_383(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_197(51, 0, 0, sVar0, func_340(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_375(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_189(438, 0);
			func_383(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_195(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_197(51, 0, 0, sVar0, func_340(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_375(32768);
			break;
		default:
			func_189(439, 0);
			break;
	}
}

void func_224()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_225(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_106() == -1)
	{
		if (!func_188(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_189(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_189(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_189(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_189(400, 0);
			}
		}
		else if (func_199(iParam0, 412399755))
		{
			func_384(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_385() == 0)
			{
				func_37(0, 10);
				iVar1 = func_386(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_387(iParam0) < func_388(iParam0))
					{
						func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_197(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_188(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_189(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_189(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_189(401, 0);
			}
		}
		else if (func_199(iParam0, 709057512))
		{
			func_384(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_385() == 1)
			{
				func_37(0, 10);
				iVar1 = func_386(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_387(iParam0) < func_388(iParam0))
					{
						func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_197(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_188(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_189(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_189(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_189(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_189(398, 0);
			}
		}
		else if (func_199(iParam0, -1478961327))
		{
			func_384(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_385() == 2)
			{
				func_37(0, 10);
				iVar1 = func_386(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_389(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_390(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_335(48);
					}
					if (func_387(iParam0) < func_388(iParam0))
					{
						func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_197(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_387(iParam0) < func_388(iParam0))
					{
						func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_197(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_188(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_189(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_189(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_189(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_189(406, 0);
			}
		}
		else if (func_199(iParam0, -1238404098))
		{
			func_384(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_385() == 3)
			{
				func_37(0, 10);
				iVar1 = func_386(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_387(iParam0) < func_388(iParam0))
					{
						func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_197(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_188(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_189(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_189(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_189(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_189(403, 0);
			}
		}
		else if (func_199(iParam0, 1160548794))
		{
			func_384(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_385() == 4)
			{
				func_37(0, 10);
				iVar1 = func_386(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_387(iParam0) < func_388(iParam0))
					{
						func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_197(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_226(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_389(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_390(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_335(48);
		}
	}
}

void func_227(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_89(func_391(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_392(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_393(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_106() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_219(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_219(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_219(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_219(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_219(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_219(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_219(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_219(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_219(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_219(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_219(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_219(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_219(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_394())
			{
				func_219(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_219(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_219(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_219(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_219(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_219(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_219(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_219(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_219(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_219(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_219(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_219(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_219(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_219(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_229(int iParam0)
{
	if (func_188(41))
	{
		func_189(363, 0);
	}
	else
	{
		func_189(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_37(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_395(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_396(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_397(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_230(int iParam0, int iParam1)
{
	var uVar0;

	func_398(iParam0, iParam1, &uVar0);
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_326(iParam1, 1, 0) };
		iParam3 = func_399(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_401(iParam1, iParam2, func_400(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_402(1, (func_106() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_400(iParam3, 1) /*11*/])
			{
				func_403(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_404(32768) && iParam1 != Global_1946804.f_57[func_400(iParam3, 1) /*11*/])
			{
				func_405();
				func_403(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_403(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_406(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_403(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_407(0);
			func_408(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_403(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_232(int iParam0, bool bParam1)
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
	iVar18 = func_364(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_364(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_409("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_410(&Var3, iVar2, iVar0, iVar1))
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
						func_411(iVar0);
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

void func_233()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_234()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_235()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_236()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_237()
{
	func_412();
	func_413();
	func_414();
}

void func_238(int iParam0, int iParam1, bool bParam2)
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

void func_239(int iParam0, bool bParam1)
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
	func_280(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_240(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_241(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_242(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_243(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_244(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_245(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_246(int iParam0)
{
	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_247(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_336(iParam0, &iVar0, &iVar1);
	if (!func_337(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_415(iParam0, 1024))
	{
		return;
	}
	func_338(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_248(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_336(iParam0, &iVar0, &iVar1);
	if (!func_337(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_415(iParam0, 1024))
	{
		return;
	}
	func_338(iVar0, iVar1);
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

int func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_333())
	{
		return func_250();
	}
	iVar4 = (func_333() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_333())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_416(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_334(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_250()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_333());
	return func_334(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_251(int iParam0)
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

int func_252(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_326(iParam0, 0, 1) };
	Var5 = { func_358(iParam0, Var0, Var0.f_4, 0) };
	return func_417(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_106() != -1)
	{
		return;
	}
	switch (func_203(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_418(81053684, 0) <= 0)
			{
				func_403(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_403(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_419(iParam0);
			if (func_420(iVar0))
			{
				func_421(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_403(30, iParam0, 0, 0, 0);
			}
			if (func_422() == -2125499975 || func_422() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_403(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_422() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_403(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_423(-525676072, 0))
			{
				if (func_424(-525676072, &iVar1))
				{
					func_403(33, iVar1, 0, 0, 0);
				}
			}
			func_403(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_425(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_231(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_202(24);
		if (func_232(&iVar2, 0))
		{
			func_207(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_254(int iParam0)
{
	if (func_199(iParam0, 943695443))
	{
		func_426(0, iParam0);
	}
	else if (func_199(iParam0, -2096528786))
	{
		func_426(1, iParam0);
	}
	else if (func_199(iParam0, -1094167013))
	{
		func_426(2, iParam0);
	}
	else if (func_199(iParam0, 1936654645))
	{
		func_426(3, iParam0);
	}
	else if (func_199(iParam0, 1306489306))
	{
		func_426(4, iParam0);
	}
	else if (func_199(iParam0, 435762317))
	{
		func_426(5, iParam0);
	}
	else if (func_199(iParam0, 1259363210))
	{
		func_426(6, iParam0);
	}
	else if (func_199(iParam0, 881398259))
	{
		func_426(7, iParam0);
	}
	else if (func_199(iParam0, -541549214))
	{
		func_426(8, iParam0);
	}
	else if (func_199(iParam0, 130796156))
	{
		func_426(-1, iParam0);
	}
}

int func_255(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_427(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_428(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_256(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_178(iParam0, 0))
	{
		return Var0;
	}
	if (func_199(iParam0, -305066475))
	{
		if (func_106() == -1)
		{
			if (func_199(iParam0, -537818634))
			{
				return func_262(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_262(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_199(iParam0, -537818634))
	{
		return func_262(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_199(iParam0, 2084895747))
	{
		return func_262(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_257(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_106() == -1)
			{
				if (func_107(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_189(109, 1);
				}
			}
			break;
	}
}

void func_258(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_430(func_429(0));
	func_311(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_431(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_259(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_178(iParam0, 0))
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
	if (!func_432())
	{
		func_433(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_434(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_434(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_200(iParam0, 2097152))
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
	else if (!func_435(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_436(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_246(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_199(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_246(iParam0));
	}
	func_311(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_260(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

bool func_261(int iParam0)
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	}
	return false;
}

struct<2> func_262(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_264(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_409("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_410(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_260(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_411(iVar1);
				return true;
			}
			iVar3++;
		}
		func_411(iVar1);
	}
	return false;
}

int func_264(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_178(iParam0, 0))
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
	if (func_199(iParam0, 1399091007))
	{
		func_398(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_265(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_437(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_439(&Var0, func_438(0));
	}
	if (!func_440(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_410(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_359(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_411(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_266(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_326(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_441(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_358(iParam0, Var0, Var0.f_4, bParam4) };
	return func_359(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_267(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_199(iParam0, 606799272))
		{
			func_442(iParam0, iParam1);
		}
		if (func_199(iParam0, -1112814642) && func_199(iParam0, -1697809989))
		{
			func_227(iParam0, iParam1, 1, 0);
		}
	}
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 683269210:
			return 993246734;
		case -1300082860:
			return -1212881551;
		case 247563739:
			return 1352537560;
		case 149709049:
			return 2021420613;
		case 1347913620:
			return 460210291;
		case -1109016944:
			return -2011320133;
		case -919236330:
			return 539572870;
		case 918206817:
			return -1262808306;
		case -920971071:
			return 1582457845;
		case 1673499939:
			return 1195199040;
		case -654238687:
			return 2056389698;
		case -2060865802:
			return -1988847961;
		case -232974724:
			return -942443338;
		case -1960242214:
			return 66159563;
		case 1464664327:
			return 387869270;
		case -1240932004:
			return -875696111;
		default:
			break;
	}
	return 0;
}

int func_269(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(*uParam0))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(*uParam0, sParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_270(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_311(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_271(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_443())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_311(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_TOTAL_TAKE"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_444(iVar0);
			func_445(iVar0, 0, 0);
		}
		func_311(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_CASH"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_215(func_262(GET_HASH_KEY("CAREER_CASH")), iVar1);
	}
}

int func_272(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case -321841939:
			sVar0 = "DISCO_DREAM";
			break;
		default:
			break;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return GET_HASH_KEY("DISCO_DREAM");
	}
	return 0;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return GET_HASH_KEY("DISCO_DRM_DESC");
	}
	return 0;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return GET_HASH_KEY("DISCO_DC_FOUND");
	}
	return 0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return GET_HASH_KEY("DISCO_DRM_OBJ");
	}
	return 0;
}

char* func_277(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "TOAST_DREAMCATCHER";
				case 1:
					return "MISSION_COLLECTDREAM";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_278(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "hud_toasts";
				case 1:
					return "SP_MISSIONS_13";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "DISCO_DRM_CHECK1";
				case 1:
					return "DISCO_DRM_CHECK2";
				default:
					break;
			}
			break;
	}
	return "";
}

var func_280(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

void func_281(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0]);
		}
		iVar0++;
	}
}

int func_282(int iParam0)
{
	if (!func_446(iParam0))
	{
		return -1;
	}
	return func_447(iParam0);
}

void func_283(int iParam0)
{
	if (!func_448(iParam0))
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

char* func_284(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_GRAVE_HOSEA_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_LENNY_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY_I";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN_I";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN_I";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE_I";
			}
			break;
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMP_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMP_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMP_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMP_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMP_CLUES_5_I";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUES_5_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUES_6_I";
			}
			break;
	}
	return "";
}

float func_285()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_288(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_289()
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_HOGTYING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_LASSOED(Global_35))
	{
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

bool func_290()
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		return false;
	}
	if (func_449(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return false;
	}
	return true;
}

bool func_291()
{
	if (func_450(Global_35) && !Global_1392040.f_2)
	{
		return false;
	}
	if (func_451(Global_35) && !Global_1392040.f_2)
	{
		return false;
	}
	return true;
}

bool func_292(bool bParam0)
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
		{
			func_452("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_293(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case GET_HASH_KEY("ROWBOAT"):
			case GET_HASH_KEY("HANDCART"):
				return false;
			case GET_HASH_KEY("BREACH_CANNON"):
			case GET_HASH_KEY("GATLING_GUN"):
			case GET_HASH_KEY("GATLINGMAXIM02"):
			case GET_HASH_KEY("HOTCHKISS_CANNON"):
				return false;
		}
		if ((!func_288(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35)) && VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == Global_35)
		{
			return false;
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_453(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_294()
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		return false;
	}
	return true;
}

bool func_295(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_296(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_297(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_122(iParam0, 1);
	func_454(iParam0, 1);
	func_455(iParam0, 128);
}

void func_298(bool bParam0)
{
	if (bParam0)
	{
		func_456(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_457(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_299(int iParam0)
{
	return func_458(iParam0);
}

int func_300(bool bParam0)
{
	if (func_106() == -1)
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

void func_301()
{
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CONTEXT_ACTION"), false);
}

int func_302()
{
	int iVar0;

	iVar0 = func_459();
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

int func_303(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_106() != -1)
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
	fVar1 = func_460(MISC::ABSF(fVar1) < 1f, func_460(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_304(int iParam0, int iParam1, int iParam2)
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

int func_305(int iParam0)
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

int func_306()
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

void func_307(int iParam0, bool bParam1, int iParam2)
{
	func_461((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_462(iParam0);
}

void func_308(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_463(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_309(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_464(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_465(iVar5, &iVar2, &iVar0))
			{
				if (!func_178(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_466(iVar2);
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
							if (func_198(iVar2) == GET_HASH_KEY("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_302() <= -160;
								}
								else if (iVar0 == GET_HASH_KEY("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_302() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_467();
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

char* func_310(int iParam0)
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

var func_311(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_468(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_469(iParam0))
	{
		return 0;
	}
	if (!func_133())
	{
		return 0;
	}
	if (!func_470(iParam0, &iVar0, &iVar1))
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

bool func_313(int iParam0)
{
	int iVar0;

	iVar0 = func_282(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_314(int iParam0, int iParam1)
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

bool func_315(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

char* func_316(var uParam0)
{
	switch (*uParam0)
	{
		case -1481450947:
			return "DISC_VOL_ABANDONED_WELL";
		case -1427565340:
			return "DISC_VOL_ANCIENT_URN";
		case -763376358:
			return "DISC_VOL_ANIMAL_MASK";
		case 1801731633:
			return "DISC_VOL_CAT_MASK";
		case 1490223565:
			return "DISC_VOL_RAM_MASK";
		case -261997819:
			return "DISC_VOL_ANCIENT_CLUB";
		case 2072029413:
			return "DISC_VOL_ANCIENT_TOMAHAWK";
		case 733338689:
			return "DISC_VOL_VIKING_GEAR";
		case 1124200691:
			return "DISC_VOL_CIVIL_WAR_HAT";
		case -1859413640:
			return "DISC_VOL_SHRINE_FOR_WIFE";
		case -599506500:
			return "DISC_VOL_CIVIL_WAR_SWORD";
		case 1424723727:
			return "DISC_VOL_PIRATE_SWORD";
		case 435290930:
			return "DISC_VOL_BIRD_NEST";
		case -1420566543:
			return "DISC_VOL_SCARECROW_1";
		case -1208846034:
			return "DISC_VOL_SCARECROW_2";
		case 1048086072:
			return "DISC_VOL_SCARECROW_3";
		case 939555152:
			return "DISC_VOL_SCARECROW_4";
		case 1187689415:
			return "DISC_VOL_WAGON_CIRCLE";
		case -657632:
			return "DISC_VOL_RAILROAD_GRAVESTONE";
			return "DISC_VOL_FRANKEN_BOOK";
			return "DISC_VOL_PIRATE_RUM";
			return "DISC_VOL_DEFACED_GRAVE";
			return "DISC_VOL_BLACK_FLOWER";
			return "DISC_VOL_MAIL_WAGON";
			return "DISC_VOL_BANK_STAGECOACH";
			return "DISC_VOL_BOOTS_NOTE";
			return "DISC_VOL_METEORITE";
			return "DISC_VOL_WHISKEY_TREE";
			return "DISC_VOL_ANCIENT_ARROWS";
			return "DISC_VOL_MICAH_CAMP";
			return "DISC_VOL_ABANDON_TRADING_POST";
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AXE_IN_TREE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AXE_IN_TREE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AXE_IN_TREE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AXE_IN_TREE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AXE_IN_TREE_5";
			}
			Jump @585; //curOff = 522
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_TREASURE_MAP_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_TREASURE_MAP_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_TREASURE_MAP_REWARD";
			}
			return "";
		}

int func_317(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -431554783;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 1325742934;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 1057717101;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return -342606109;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -987312756;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 847068642;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 495167306;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return -1025649252;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 599826636;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1106445381;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 553630040;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 614938185;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -1822543706;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 2102872632;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 1472702644;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return -431554783;
}

float func_318(var uParam0)
{
	return 0f;
}

float func_319(var uParam0)
{
	switch (*uParam0)
	{
		case 2134589549:
			return 0.6f;
		default:
			break;
	}
	return 0f;
}

bool func_320(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, float fParam10)
{
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam8]))
	{
		(*uParam0)[iParam8] = PED::_0x9641A9A20310F6B8(iParam1, vParam2, vParam5, 1, fParam9, fParam10);
		if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam8]))
		{
			ENTITY::SET_ENTITY_COORDS((*uParam0)[iParam8], vParam2, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION((*uParam0)[iParam8], vParam5, 2, true);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY((*uParam0)[iParam8], false);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_322(int iParam0)
{
	return func_198(iParam0) == GET_HASH_KEY("WEAPON");
}

bool func_323(int iParam0)
{
	var uVar0;

	if (func_106() != -1)
	{
		return false;
	}
	if (func_200(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_330(iParam0, &uVar0, 1, 0, 0);
	}
	return func_89(iParam0, 1, 0);
}

void func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_198(iParam0) != GET_HASH_KEY("WEAPON"))
	{
		return;
	}
	iVar0 = func_205(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_75(iVar0))
	{
		if (func_106() == -1)
		{
			func_76(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_182(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_259(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_325(int iParam0, int iParam1)
{
	int iVar0;

	if (func_199(iParam0, 58855631))
	{
		func_471(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_326(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_472(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_198(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_358(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_438(bParam1) };
			if (bParam2 && func_473(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_356(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_356(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_357(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_474(bParam1) };
			switch (func_203(iParam0))
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
			if (func_475(iParam0, -1823706425))
			{
				Var0 = { func_358(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_475(iParam0, -1483207246))
			{
				Var0 = { func_358(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_476(Var0, &Var27, bParam1, 0))
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

int func_327(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	if (!func_206(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_477(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_300(bParam3), iParam0);
}

int func_328(int iParam0, bool bParam1)
{
	if (func_210(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_300(bParam1), iParam0, 0);
}

bool func_329()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_133())
	{
		return false;
	}
	if (!func_107(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_107(Global_1835011[2 /*74*/].f_1, 1) && func_107(Global_1347702[120 /*49*/].f_15, 1)) && !func_107(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_107(Global_1835011[37 /*74*/].f_1, 1) && !func_107(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_107(Global_1835011[57 /*74*/].f_1, 1) && !func_107(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_107(Global_1835011[26 /*74*/].f_1, 1) && !func_107(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_107(Global_1835011[62 /*74*/].f_1, 1) && func_107(Global_1835011[63 /*74*/].f_1, 1)) && !func_107(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_107(Global_1835011[75 /*74*/].f_1, 1) && !func_107(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_107(Global_1835011[76 /*74*/].f_1, 1) && !func_107(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_107(Global_1835011[40 /*74*/].f_1, 1) && func_107(Global_1835011[41 /*74*/].f_1, 1)) && !func_107(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_107(Global_1835011[62 /*74*/].f_1, 1) && func_107(Global_1835011[63 /*74*/].f_1, 1)) && !func_107(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_107(Global_1835011[65 /*74*/].f_1, 1) && func_107(Global_1835011[66 /*74*/].f_1, 1)) && !func_107(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_478(&iParam0);
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (!func_206(0))
	{
		bParam3 = true;
	}
	if (func_322(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_438(0) };
			Var4.f_9 = -1591664384;
			if (!func_356(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_357(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_473(iParam0, 1))
			{
				if (!func_356(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_357(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_479(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_327(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_477(iParam0))
	{
		iVar28 = func_480(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_300(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_331(int iParam0, int iParam1)
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

int func_332(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_437(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_439(&Var0, func_438(0));
	}
	if (!func_440(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_411(iVar14);
	return iVar15;
}

int func_333()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_334(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_335(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_106() != -1)
	{
		return;
	}
	iVar0 = func_481(iParam0);
	fVar1 = func_482(iParam0);
	if ((Global_1347477.f_117 || !func_201(31)) || !func_483(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_484(iVar0) >= 7)
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
	func_485(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_311(MISC::VAR_STRING(6, func_486(iParam0), fVar1), "itemtype_textures", func_487(iVar0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_336(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_337(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_488(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_489(iParam0))
	{
		return false;
	}
	if (func_490(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_415(iParam0, 1)) || func_491(32768))
	{
		if (!func_415(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_492())
	{
		return false;
	}
	return true;
}

void func_338(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_339(int iParam0)
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

int func_340(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_493(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_341(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_194() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_494(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_495(), 12);
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
			else if (func_381() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_496(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_381(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_497(), 13);
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
			else if (func_382() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_498(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_382(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_340(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_342(int iParam0, int iParam1, int iParam2)
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

bool func_343(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_344(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_499(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_89(iVar2, 1, 0) || func_501(func_500(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_348(func_499(iVar0))), func_348(func_499(iVar0)), bVar1, true, false);
		}
		if (iParam2 == GET_HASH_KEY("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_381() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_502(iVar0)), func_502(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_496() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_502(iVar0)), func_502(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_502(iVar0)), func_502(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_391(iParam3, func_503(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_387(iVar2) - iParam7) >= func_340(iParam3, func_504(iVar0));
				}
				else
				{
					bVar1 = func_387(iVar2) >= func_340(iParam3, func_504(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_387(iVar2) + iParam7) >= func_340(iParam3, func_504(iVar0));
			}
			else
			{
				bVar1 = func_387(iVar2) >= func_340(iParam3, func_504(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_505(iVar2)), func_505(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_506(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_507(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_507(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == GET_HASH_KEY("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_382() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_508(iVar0)), func_508(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_498() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_508(iVar0)), func_508(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_508(iVar0)), func_508(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == GET_HASH_KEY("TAXIDERMY"))
		{
			iVar2 = func_391(iParam3, func_503(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_387(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_509(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_509(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_510(iVar2)), func_510(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_346(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_497() >= 13)
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

bool func_347(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_446(func_511(0)) && ((func_512(0) == 1 || func_512(0) == 8) || func_512(0) == 6))
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

char* func_348(int iParam0)
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

var func_349(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_350(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_352(int iParam0)
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

void func_353(int iParam0)
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
			func_513(1);
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
			func_514(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_514(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_514(3);
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
			func_515(1);
			break;
		case 34:
			func_516(1);
			break;
		case 35:
			func_517(1);
			break;
		case 36:
			break;
		case 37:
			func_518(0);
			break;
		case 38:
			func_519(0);
			break;
		case 39:
			func_520(0);
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
			if ((!Global_1879534 && func_133()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_189(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_133()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_189(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_133()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_189(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_133()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_189(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_106() == -1)
			{
				if (!func_425(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) || func_521(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_15())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = GET_HASH_KEY("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_89(iVar0, 1, 0))
					{
						func_252(iVar0, 1, 752097756);
					}
					func_231(Global_35, iVar0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_106() == -1)
			{
				if (!func_89(1013902307, 1, 0))
				{
					func_252(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_106() == -1)
			{
				if (!func_89(1013902307, 1, 0))
				{
					func_252(1013902307, 1, 752097756);
				}
				if (!func_89(142640135, 1, 0))
				{
					func_252(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_106() == -1)
			{
				if (!func_89(786809402, 1, 0))
				{
					func_252(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_106() == -1)
			{
				if (!func_89(786809402, 1, 0))
				{
					func_252(786809402, 1, 752097756);
				}
				if (!func_89(-518019409, 1, 0))
				{
					func_252(-518019409, 1, 752097756);
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
			func_522();
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

bool func_354(int iParam0)
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

int func_355(int iParam0, int iParam1)
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
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_356(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_480(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_357(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_523(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_358(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_178(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_300(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_359(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_524(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_476(*uParam1, &Var0, bParam6, 0))
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
	if (!func_206(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_300(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_360(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_525(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_361(int iParam0)
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
	iVar2 = func_526();
	func_527(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_362(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_528(iParam0))
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

bool func_363(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_364(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_365(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_201(50))
			{
				if (!func_201(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_201(51))
			{
				if (!func_201(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_366()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_367(int iParam0, int iParam1, var uParam2)
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

	if (!func_178(iParam1, 0))
	{
		return false;
	}
	if (func_198(iParam1) != GET_HASH_KEY("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_106() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_203(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_529(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_199(iParam1, 866047851))
	{
		iVar5 = func_400(iVar4, 1);
		if (func_530(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_203(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_199(iParam1, -1638171711))
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
			if (func_531(1868067663, &uVar0))
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
				iVar10 = func_532(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_532(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_203(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_199(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_533(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
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

void func_368()
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

int func_369()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_89(func_534(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_370(int iParam0)
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

bool func_371(int iParam0, int iParam1)
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
	if (func_89(iVar0, 1, 0) && func_89(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_372(int iParam0)
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

bool func_373(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_535(iParam0);
	if (iVar0 != -15)
	{
		func_527(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_536(iVar0, 1);
	}
	return false;
}

int func_374(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_89(GET_HASH_KEY("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_178(iVar25, 0) && func_199(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_375(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_376(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_377(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_378(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_379(int iParam0)
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
	iVar1 = func_387(iVar9);
	iVar2 = func_387(iVar10);
	iVar3 = func_387(iVar11);
	iVar5 = func_388(iVar9);
	iVar6 = func_388(iVar10);
	iVar7 = func_388(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_387(iVar12);
		iVar8 = func_388(iVar12);
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

void func_380(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_381()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_537(COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_382()
{
	return COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("ROCK_CARVINGS"), 0);
}

bool func_383(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_509(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_509(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_509(iVar0))
		{
			*sParam2++;
		}
		if (func_509(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_509(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_509(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_509(iVar0))
		{
			*sParam2++;
		}
		if (func_509(iVar1))
		{
			*sParam2++;
		}
		if (func_509(iVar0) && func_509(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == GET_HASH_KEY("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_509(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_509(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_509(iVar0))
		{
			*sParam2++;
		}
		if (func_509(iVar1))
		{
			*sParam2++;
		}
		if (func_509(iVar2))
		{
			*sParam2++;
		}
		if ((func_509(iVar0) && func_509(iVar1)) && func_509(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_509(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_509(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_509(iVar0))
		{
			*sParam2++;
		}
		if (func_509(iVar1))
		{
			*sParam2++;
		}
		if (func_509(iVar2))
		{
			*sParam2++;
		}
		if (func_509(iVar3))
		{
			*sParam2++;
		}
		if (((func_509(iVar0) && func_509(iVar1)) && func_509(iVar2)) && func_509(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_384(int iParam0)
{
	if (!func_538(iParam0))
	{
		func_540(func_539(iParam0));
	}
}

int func_385()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_538(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_386(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_387(iVar9);
	iVar2 = func_387(iVar10);
	iVar3 = func_387(iVar11);
	iVar5 = func_388(iVar9);
	iVar6 = func_388(iVar10);
	iVar7 = func_388(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_387(iVar12);
		iVar8 = func_388(iVar12);
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

int func_387(int iParam0)
{
	int iVar0;

	if (func_89(iParam0, 1, 0))
	{
		iVar0 = func_182(iParam0, 0, 0);
	}
	return iVar0;
}

int func_388(int iParam0)
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

int func_389(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_390(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_391(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_493(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_392(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_391(iParam1, 5) || iParam0 == func_391(iParam1, 6)) || iParam0 == func_391(iParam1, 7)) || iParam0 == func_391(iParam1, 8)) || iParam0 == func_391(iParam1, 9))
	{
		func_383(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_195(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_197(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_393(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_391(iParam1, 5) || iParam0 == func_391(iParam1, 6)) || iParam0 == func_391(iParam1, 7)) || iParam0 == func_391(iParam1, 8)) || iParam0 == func_391(iParam1, 9))
	{
		if (func_383(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_195(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_197(51, 0, 0, iVar0, func_340(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_195(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_197(51, 0, 0, iVar0, func_340(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_394()
{
	if (func_313(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_395(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_396(int iParam0)
{
	if (!func_541(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_397(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_398(int iParam0, int iParam1, var uParam2)
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

int func_399(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_542(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_400(int iParam0, int iParam1)
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

bool func_401(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_543();
	if (iParam2 == 39)
	{
		Var0 = { func_326(iParam0, 1, 0) };
		iParam2 = func_400(func_399(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_199(iParam0, 866047851) && func_530(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_404(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_544(func_542(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_545(iParam2);
	func_546(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_547(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_547(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_548(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_549(iParam0, iParam2, iParam1, func_106() != -1);
	if (bParam4)
	{
		func_550(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_550(&(Global_1946804.f_1378), 1, 0);
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
				func_551(func_542(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_402(bool bParam0, bool bParam1, bool bParam2)
{
	func_552(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_403(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_553(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_554(Var0);
}

bool func_404(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_405()
{
	func_555(&(Global_1946804.f_2776));
	func_556(32768);
	func_551(1108822547, 8, 6);
}

int func_406(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_400(iParam0, 1);
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

void func_407(int iParam0)
{
	struct<4> Var0;

	if (func_557(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_558(Var0);
}

void func_408(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_558(Var0);
}

bool func_409(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_300(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_410(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_411(int iParam0)
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

float func_412()
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

	if (func_559())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_560(2);
	}
	if (Global_1347477.f_119)
	{
		return func_560(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_561();
	fVar2 = func_562();
	fVar3 = func_563();
	fVar4 = func_564();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_565()));
	fVar7 = (func_560(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_566(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_567(3, fVar9, fVar9 > 100f);
	return func_568(fVar7, -100f, 100f);
}

float func_413()
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

	if (func_559())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_560(1);
	}
	if (Global_1347477.f_119)
	{
		return func_560(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_561();
	fVar2 = func_562();
	fVar3 = func_563();
	fVar4 = func_564();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_565()));
	fVar7 = (func_560(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_566(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_567(2, fVar9, fVar9 > 100f);
	return func_568(fVar7, -100f, 100f);
}

float func_414()
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

	if (func_559())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_560(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_569())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_570())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_560(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_561();
	fVar2 = func_562();
	fVar3 = func_563();
	fVar4 = func_564();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_565()));
	fVar7 = (func_560(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_566(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_567(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_560(0);
	}
	return func_568(fVar7, -100f, 100f);
}

bool func_415(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_416(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_417(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_178(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_330(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_206(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_300(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_418(int iParam0, bool bParam1)
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
				return func_571();
			}
			break;
	}
	return 0;
}

int func_419(int iParam0)
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

bool func_420(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_421(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_420(iParam0))
	{
		return;
	}
	if (func_572(iParam0))
	{
		return;
	}
	if (!func_573(iParam0))
	{
		func_574(iParam0, 1, 0);
	}
	iVar0 = func_575(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_576(iParam0, 512))
		{
			func_403(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_577() && !bParam1) && !func_578(0, 0, 1))
	{
		func_452(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_579(iParam0, 6);
	if (bParam2)
	{
		if (!func_578(0, 0, 1))
		{
			func_37(1, 4);
		}
	}
}

int func_422()
{
	return Global_1946804.f_1;
}

bool func_423(int iParam0, bool bParam1)
{
	return func_418(iParam0, 0) < func_580(iParam0, bParam1);
}

bool func_424(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_203(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_425(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_400(iParam0, 1) /*3*/] != Global_1946804.f_57[func_400(iParam0, 1) /*11*/];
}

void func_426(int iParam0, int iParam1)
{
	if (func_199(iParam1, 130796156))
	{
		func_581(iParam1, 0);
	}
	else if (func_199(iParam1, 930141731))
	{
		func_581(iParam1, 1);
		func_582(iParam0);
	}
}

void func_427(var uParam0, int iParam1)
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

int func_428(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_583(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_584(uParam2, iParam0, Var1);
	return 1;
}

int func_429(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_430(int iParam0)
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

int func_431(int iParam0)
{
	var uVar0;

	if (!func_585(iParam0, &uVar0, GET_HASH_KEY("INVENTORY"), 0, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
	{
		return GET_HASH_KEY("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_432()
{
	return !Global_1911774;
}

void func_433(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_434(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_435(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_436(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<14> func_437(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_438(bool bParam0)
{
	int iVar0;

	iVar0 = func_300(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_358(923904168, func_472(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_358(923904168, func_472(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_358(923904168, func_472(bParam0), -740156546, 0);
}

void func_439(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_440(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_300(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_441(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_524(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_206(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_300(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_442(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_106() == -1)
	{
		if (func_188(43))
		{
			if (func_199(iParam0, 412399755))
			{
				func_384(GET_HASH_KEY("EXOTIC_STAGE_01"));
				if (func_385() == 0)
				{
					func_37(0, 10);
					iVar0 = func_586(iParam0, iParam1, 1);
					if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_387(iParam0) < func_388(iParam0))
						{
							func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_188(44))
		{
			if (func_199(iParam0, 709057512))
			{
				func_384(GET_HASH_KEY("EXOTIC_STAGE_02"));
				if (func_385() == 1)
				{
					func_37(0, 10);
					iVar0 = func_586(iParam0, iParam1, 2);
					if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_387(iParam0) < func_388(iParam0))
						{
							func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_188(45))
		{
			if (func_199(iParam0, -1478961327))
			{
				func_384(GET_HASH_KEY("EXOTIC_STAGE_03"));
				if (func_385() == 2)
				{
					func_37(0, 10);
					iVar0 = func_586(iParam0, iParam1, 4);
					if (((iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_387(iParam0) < func_388(iParam0))
						{
							func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_188(46))
		{
			if (func_199(iParam0, -1238404098))
			{
				func_384(GET_HASH_KEY("EXOTIC_STAGE_04"));
				if (func_385() == 3)
				{
					func_37(0, 10);
					iVar0 = func_586(iParam0, iParam1, 8);
					if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_387(iParam0) < func_388(iParam0))
						{
							func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_188(47))
		{
			if (func_199(iParam0, 1160548794))
			{
				func_384(GET_HASH_KEY("EXOTIC_STAGE_05"));
				if (func_385() == 4)
				{
					func_37(0, 10);
					iVar0 = func_586(iParam0, iParam1, 16);
					if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_387(iParam0) < func_388(iParam0))
						{
							func_195(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_443()
{
	if (func_366())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_444(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_587((Global_40.f_4283.f_325 + iParam0));
}

void func_445(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_443())
	{
		func_311(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, GET_HASH_KEY("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_311(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", GET_HASH_KEY("ITEMTYPE_GANG_SAVINGS"), 0, GET_HASH_KEY("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_446(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_447(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_588(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_448(int iParam0)
{
	return func_296(iParam0, 2);
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

bool func_450(int iParam0)
{
	return (func_589(iParam0, 4) || func_589(iParam0, 5));
}

bool func_451(int iParam0)
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

var func_452(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_453(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_MOUNT(Global_35);
	if (!func_590(Global_35))
	{
		return false;
	}
	if (!func_288(iParam0, 16) && !func_591(iVar0, 0))
	{
		return false;
	}
	return true;
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

void func_456(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_457(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_458(int iParam0)
{
	return func_39(Global_1935496.f_27, iParam0);
}

int func_459()
{
	return Global_40.f_11095.f_35;
}

float func_460(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_461(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_592(bParam1);
	}
}

void func_462(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("HONORMETERVALUE"), iParam0);
}

char* func_463(int iParam0)
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

bool func_464(int iParam0)
{
	vector3 vVar0;

	if (!func_493(23, &vVar0))
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

bool func_465(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_493(23, &Var0))
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

int func_466(int iParam0)
{
	return iParam0;
}

int func_467()
{
	int iVar0;

	iVar0 = func_302();
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

void func_468(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

bool func_469(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_470(int iParam0, int iParam1, int iParam2)
{
	if (!func_469(iParam0))
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

int func_471(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_178(iParam0, 0))
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

struct<4> func_472(bool bParam0)
{
	return func_358(GET_HASH_KEY("CHARACTER"), func_593(), -1591664384, bParam0);
}

bool func_473(int iParam0, bool bParam1)
{
	if (func_203(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_201(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_474(bool bParam0)
{
	int iVar0;

	iVar0 = func_300(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_358(271701509, func_472(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_358(271701509, func_472(bParam0), 12999093, 0);
}

bool func_475(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_203(iParam0);
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

bool func_476(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_300(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_477(int iParam0)
{
	if (func_594(iParam0, GET_HASH_KEY("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_478(int iParam0)
{
	if (!func_178(*iParam0, 0))
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

bool func_479(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_178(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_326(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_355((398 + iVar29), 1);
		if (func_356(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_357(iParam0, &Var6, iVar5);
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

int func_480(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_178(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_358(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_300(bParam6), &Var0, 0);
	return uVar4;
}

int func_481(int iParam0)
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

float func_482(int iParam0)
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
			return func_595(iParam0);
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
			return func_595(iParam0);
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
			return func_595(iParam0);
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

bool func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_201(18);
		case 2:
			return func_201(20);
		case 1:
			return func_201(19);
		default:
			break;
	}
	return true;
}

int func_484(int iParam0)
{
	return func_596(Global_40.f_11095.f_11[iParam0]);
}

void func_485(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_106() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_201(31))
	{
		return;
	}
	iVar0 = func_484(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_484(iParam0);
	if (func_597(iParam0) && func_598(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_599(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_600(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_189(func_601(iParam0), 0);
					}
					func_602(iParam0, iVar2, iVar3);
					func_603(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_486(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_487(int iParam0)
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

bool func_488(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_489(int iParam0)
{
	if (func_106() != -1)
	{
		if (func_415(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_415(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_490(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_415(iParam0, 65536) && !func_415(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_415(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_415(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_491(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_492()
{
	return Global_1905944.f_5694;
}

bool func_493(int iParam0, var uParam1)
{
	if (!func_604(iParam0))
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

int func_494()
{
	return func_605(Global_40.f_12019);
}

int func_495()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_339(iVar1);
		if (func_89(iVar2, 1, 0) || func_501(func_500(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_496()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_606(COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_497()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_506(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_498()
{
	return COLLECTION::_0x3A65F4844913A047(GET_HASH_KEY("ROCK_CARVINGS"), 0);
}

int func_499(int iParam0)
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

int func_500(int iParam0)
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

bool func_501(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_502(int iParam0)
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

int func_503(int iParam0)
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

int func_504(int iParam0)
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

char* func_505(int iParam0)
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

bool func_506(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_507(int iParam0)
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

char* func_508(int iParam0)
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

bool func_509(int iParam0)
{
	if (func_607(iParam0) && func_89(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_608(iParam0) && func_609(iParam0))
	{
		return true;
	}
	return false;
}

char* func_510(int iParam0)
{
	if (!func_178(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_246(iParam0));
}

int func_511(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_512(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_513(bool bParam0)
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

void func_514(int iParam0)
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

void func_515(bool bParam0)
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

void func_516(bool bParam0)
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

void func_517(bool bParam0)
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

void func_518(bool bParam0)
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

void func_519(bool bParam0)
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

void func_520(bool bParam0)
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

int func_521(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_400(iParam0, 1) /*3*/];
}

void func_522()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_610();
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_76(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_252(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_76(GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"));
		func_252(GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_523(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_300(0);
	*uParam1 = { func_358(iParam0, func_438(0), iParam3, 0) };
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

bool func_524(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_525(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_526()
{
	return Global_1899515;
}

void func_527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_611(*iParam0);
	iVar1 = func_612(*iParam0);
	iVar2 = func_613(*iParam0);
	iVar3 = func_614(*iParam0);
	iVar4 = func_615(*iParam0);
	iVar5 = func_616(*iParam0);
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
	iVar6 = func_617(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_617(iVar1, iVar0);
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
	func_618(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_528(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_529(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_326(iParam0, 1, 0) };
	return func_399(Var0.f_4);
}

int func_530(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_531(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_400(func_619(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_203(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_532(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_400(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_404(524288))
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

bool func_533(int iParam0)
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

int func_534(int iParam0)
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

int func_535(int iParam0)
{
	return func_620(iParam0, -1);
}

bool func_536(int iParam0, bool bParam1)
{
	return func_621(func_526(), iParam0, bParam1);
}

bool func_537(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_538(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_539(int iParam0)
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

void func_540(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_541(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_542(int iParam0, int iParam1)
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

void func_543()
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

void func_544(int iParam0)
{
	func_551(iParam0, 8, 6);
}

void func_545(int iParam0)
{
	func_622(&(Global_1946804.f_2589), iParam0);
}

void func_546(int iParam0, int iParam1)
{
	func_623(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_547(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_548(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_203(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_624(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_546(iVar1, iVar3);
		}
	}
	if (func_425(-1586649372) && func_624(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_546(iVar1, iVar3);
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
						func_546(iVar1, iVar3);
					}
				}
			}
			func_625(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_625(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_546(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_625(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == GET_HASH_KEY("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_546(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_546(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_625(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_625(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_546(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_625(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_546(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_546(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_203(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_546(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_533(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_203(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_546(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_199(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_546(iVar1, iVar3);
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
						func_546(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_533(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_199(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_546(iVar1, iVar3);
					}
				}
			}
			switch (func_203(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_203(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_546(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_203(uParam0->f_1[iVar1 /*3*/]) || func_199(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_546(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_549(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_626(0);
	if (iParam2 != 0 && func_627(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_628(iParam0, func_542(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_550(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_106() != -1;
	iVar7 = func_626(0);
	if (func_404(32768))
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
			iVar5 = func_542(iVar0, 1);
			if (func_629(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_629(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_532(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_630(uParam0);
				if (iVar3 > 0)
				{
					if (!func_404(524288))
					{
						func_553(524288);
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
							iVar5 = func_542(iVar0, 1);
							if (func_629(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == GET_HASH_KEY("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_629(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_532(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_546(iVar0, iParam2);
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
					func_556(524288);
				}
			}
		}
	}
}

void func_551(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_400(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_400(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_400(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_552(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_631(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_106() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_632(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_575(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_575(Global_40.f_7729);
				Global_1946804.f_1378 = func_575(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_633(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_634(0, 1);
	}
}

void func_553(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_554(struct<4> Param0)
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
			if (func_635(Param0))
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
			func_636(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_553(8);
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
			if (func_635(Param0))
			{
				return;
			}
			func_636(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_553(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_408(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_555(var uParam0)
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

void func_556(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_557(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_558(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_635(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_635(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_636(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_553(8);
}

bool func_559()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_560(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_561()
{
	float fVar0;
	int iVar1;

	fVar0 = func_637(13);
	iVar1 = func_638(fVar0);
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

float func_562()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_563()
{
	if (func_366())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_564()
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

float func_565()
{
	return Global_1955565.f_3;
}

void func_566(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_639(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_567(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_639(iParam0, 2, 0, 0);
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

float func_568(float fParam0, float fParam1, float fParam2)
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

bool func_569()
{
	return func_637(12) <= -99f;
}

bool func_570()
{
	return func_637(12) >= 99f;
}

int func_571()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_203(iVar1) == -999503751)
		{
			if (func_640() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_572(int iParam0)
{
	if (!func_420(iParam0))
	{
		return false;
	}
	if (func_576(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_573(int iParam0)
{
	if (!func_420(iParam0))
	{
		return false;
	}
	if (func_576(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_420(iParam0))
	{
		return;
	}
	if (!func_573(iParam0))
	{
		func_579(iParam0, 2);
		if (bParam2)
		{
			if (!func_578(0, 0, 1))
			{
				func_37(1, 4);
			}
		}
		if ((!func_577() && !bParam1) && !func_578(0, 0, 1))
		{
			func_452(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_641(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_575(int iParam0)
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

bool func_576(int iParam0, int iParam1)
{
	if (!func_420(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_577()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_578(int iParam0, bool bParam1, bool bParam2)
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
		if (func_642())
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
		iVar0 = func_643(Global_1898164.f_1[0 /*5*/]);
		if (func_315(iVar0) && func_644(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_446(Global_1898164.f_1[0 /*5*/]))
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

void func_579(int iParam0, int iParam1)
{
	if (!func_420(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_580(int iParam0, bool bParam1)
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

void func_581(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_645(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_202(50);
			}
			else
			{
				func_202(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_202(51);
			}
			else
			{
				func_202(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_646(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_233();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_233();
			}
			break;
		case 3:
			func_202(24);
			if (bParam1)
			{
				if (!func_646(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_233();
				}
			}
			break;
	}
}

void func_582(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_647(0))
			{
				iVar0++;
			}
			if (func_647(2))
			{
				iVar0++;
			}
			if (func_647(4))
			{
				iVar0++;
			}
			if (!func_648(16))
			{
				if (iVar0 == 1)
				{
					func_649();
					func_189(456, 1);
					func_650(16);
				}
			}
			if (!func_648(32))
			{
				if (iVar0 >= 3)
				{
					func_649();
					func_189(456, 1);
					func_650(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_647(1))
			{
				iVar0++;
			}
			if (func_647(3))
			{
				iVar0++;
			}
			if (func_647(7))
			{
				iVar0++;
			}
			if (!func_648(1))
			{
				if (iVar0 == 1)
				{
					func_651();
					func_189(457, 1);
					func_650(1);
				}
			}
			if (!func_648(2))
			{
				if (iVar0 >= 3)
				{
					func_651();
					func_189(457, 1);
					func_650(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_647(5))
			{
				iVar0++;
			}
			if (func_647(6))
			{
				iVar0++;
			}
			if (func_647(8))
			{
				iVar0++;
			}
			if (!func_648(4))
			{
				if (iVar0 == 1)
				{
					func_652();
					func_189(455, 1);
					func_650(4);
				}
			}
			if (!func_648(8))
			{
				if (iVar0 >= 3)
				{
					func_652();
					func_189(455, 1);
					func_650(8);
				}
			}
			break;
	}
}

void func_583(var uParam0)
{
	func_427(uParam0, GET_HASH_KEY("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_427(uParam0, GET_HASH_KEY("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_427(uParam0, GET_HASH_KEY("LOOTER_PED_IS_FEMALE"));
	}
}

void func_584(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_653(uParam0))
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

bool func_585(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_586(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_387(iVar9);
	iVar2 = func_387(iVar10);
	iVar3 = func_387(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_387(iVar12);
	}
	iVar5 = func_388(iVar9);
	iVar6 = func_388(iVar10);
	iVar7 = func_388(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_388(iVar12);
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

void func_587(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_262(GET_HASH_KEY("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_588(int iParam0)
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

int func_589(int iParam0, int iParam1)
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

bool func_590(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_591(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

void func_592(bool bParam0)
{
	func_654(bParam0);
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

struct<4> func_593()
{
	struct<4> Var0;

	return Var0;
}

int func_594(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_595(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_481(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_596(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_655(iVar6) - func_655(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_596(float fParam0)
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

int func_597(int iParam0)
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

int func_598(int iParam0)
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

int func_599(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_596(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_655(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_655(iVar0 + 1));
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

int func_600(int iParam0)
{
	int iVar0;

	if (func_656(iParam0, &iVar0))
	{
		return func_655(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_657())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_657())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_657())
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

int func_601(int iParam0)
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

void func_602(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_658(iParam0));
	sVar4 = func_660(func_659(iVar3, iParam2));
	sVar6 = func_661(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_662(iParam0));
	iVar8 = func_663(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_664(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_280(sVar7, sVar1, iVar8, iVar9, GET_HASH_KEY("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_665(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_603(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_604(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_605(int iParam0)
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

bool func_606(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_607(int iParam0)
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

int func_608(int iParam0)
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

int func_609(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_666(&iVar0, 0, iVar95, &Var1) && !func_666(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_667(iVar0, &Var1);
			if (func_178(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_610()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_668(Global_35, &uVar0);
	Var30 = { func_472(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_669(0);
	func_670(7);
	func_671(GET_HASH_KEY("KIT_BANDANA"), 1, 1, 0);
	if (func_422() == 1160113249)
	{
		func_671(GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_671(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_672(Global_35, &uVar0);
}

int func_611(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_673(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_612(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_613(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_614(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_615(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_616(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_617(int iParam0, int iParam1)
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

void func_618(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_674(iParam0, iParam6);
	func_675(iParam0, iParam5);
	func_676(iParam0, iParam4);
	func_677(iParam0, iParam3);
	func_678(iParam0, iParam2);
	func_679(iParam0, iParam1);
}

int func_619(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_399(iVar0);
}

int func_620(int iParam0, int iParam1)
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
		iParam1 = func_300(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_674(&uVar6, iVar0);
	func_675(&uVar6, iVar1);
	func_676(&uVar6, iVar2);
	func_677(&uVar6, iVar3);
	func_678(&uVar6, iVar4);
	func_679(&uVar6, iVar5);
	return uVar6;
}

bool func_621(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_680(iParam1) || !func_680(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_622(var uParam0, int iParam1)
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
			if ((func_681(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_681(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_682(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_623(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_683(uParam0, 1))
	{
		func_684(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_624(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_625(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_546(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_546(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == GET_HASH_KEY("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = GET_HASH_KEY("BASE");
		if (bParam3)
		{
			func_546(iVar2, iVar0);
		}
	}
}

int func_626(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_422();
	}
	iVar0 = 0;
	if (iParam0 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_627(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_628(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = GET_HASH_KEY("BASE");
	return true;
}

bool func_629(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_400(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_630(var uParam0)
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

void func_631(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_106() == -1)
	{
		func_685(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_686(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_632(int iParam0, int iParam1)
{
	if (func_106() == -1)
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

void func_633(int iParam0, bool bParam1, int iParam2)
{
	func_687(&(Global_1946804.f_1378), iParam0);
	func_688(2, iParam0, 6);
	if (bParam1)
	{
		func_634(0, 1);
	}
}

void func_634(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_689(0);
	}
	if (bParam0)
	{
		func_553(8);
		func_553(512);
	}
	else
	{
		func_553(8);
		func_553(16);
	}
}

bool func_635(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_636(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

float func_637(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_638(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_639(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_434(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_434(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_640()
{
	return Global_1946804.f_1497;
}

char* func_641(int iParam0)
{
	int iVar0;

	iVar0 = func_575(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_510(iVar0);
}

bool func_642()
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

int func_643(int iParam0)
{
	if (!func_446(iParam0))
	{
		return -1;
	}
	return func_691(func_690(iParam0));
}

bool func_644(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_645(int iParam0)
{
	int iVar0;

	if (func_692(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_693(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_694(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_695(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_646(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_89(func_696(iVar0, iParam0), 1, 0))
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

bool func_647(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_89(func_697(iVar0, iParam0), 1, 0))
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

bool func_648(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_649()
{
	int iVar0;

	if (func_106() != -1)
	{
		return;
	}
	func_252(GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_484(1);
	func_602(1, iVar0, 0);
}

void func_650(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_651()
{
	int iVar0;

	if (func_106() != -1)
	{
		return;
	}
	func_252(GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_484(2);
	func_602(2, iVar0, 0);
}

void func_652()
{
	int iVar0;

	if (func_106() != -1)
	{
		return;
	}
	func_252(GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_484(0);
	func_602(0, iVar0, 0);
}

bool func_653(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_654(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(GET_HASH_KEY("HONORMETERVISIBLE"), bParam0);
}

int func_655(int iParam0)
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

bool func_656(int iParam0, int iParam1)
{
	return false;
}

bool func_657()
{
	return false;
}

int func_658(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_300(0), GET_HASH_KEY("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_300(0), GET_HASH_KEY("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_300(0), GET_HASH_KEY("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_659(int iParam0, int iParam1)
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

char* func_660(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_661(int iParam0)
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

char* func_662(int iParam0)
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

int func_663(int iParam0)
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

int func_664(int iParam0)
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

int func_665(int iParam0)
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

bool func_666(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_698(iParam1) && !func_699(iParam1))
	{
		iVar0 = func_700(iParam1);
	}
	else
	{
		return false;
	}
	func_701(uParam3);
	iVar5 = func_702(iParam2);
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

void func_667(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_703(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_704(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_668(int iParam0, var uParam1)
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
		if (func_260(iVar31))
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

void func_669(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_178(iVar1, 0))
		{
			func_705(iVar1, 0, bParam0);
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

void func_670(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_106() == -1)
	{
		func_706(352481484);
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
		if (func_203(iVar2) != -999503751)
		{
			func_707(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_708(iVar2, 0))
		{
			func_709(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_671(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_710(iParam0))
	{
		return;
	}
	iVar0 = func_203(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_711(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_711(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_711(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_711(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_711(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_711(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_712(0))
	{
		func_713(iParam0, 1);
		if (func_422() == 1160113249)
		{
			func_713(func_712(-2125499975), 0);
		}
		else
		{
			func_713(func_712(1160113249), 0);
		}
	}
	func_714();
	if (func_715(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_300(0), iParam0, 0);
	}
	func_709(iParam0, bParam3);
	if (bParam2)
	{
		func_634(0, 0);
	}
}

void func_672(int iParam0, var uParam1)
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
				if (func_75((*uParam1)[iVar0]))
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

int func_673(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_674(int iParam0, int iParam1)
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

void func_675(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_676(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_612(*iParam0);
	iVar1 = func_611(*iParam0);
	if (iParam1 < 1 || iParam1 > func_617(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_677(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_678(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_679(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_680(int iParam0)
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
	iVar0 = func_616(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_615(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_614(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_611(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_612(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_613(iParam0);
	if (iVar5 < 1 || iVar5 > func_617(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_681(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_682(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_683(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_684(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_685(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_686(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_687(var uParam0, int iParam1)
{
	int iVar0;

	if (func_106() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_685(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_686(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_688(int iParam0, int iParam1, int iParam2)
{
	if (func_106() == -1)
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

void func_689(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

int func_690(int iParam0)
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

int func_691(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_692(int iParam0)
{
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (func_199(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_693(int iParam0)
{
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (func_199(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_694(int iParam0)
{
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (func_199(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_695(int iParam0)
{
	if (!func_178(iParam0, 0))
	{
		return false;
	}
	if (func_199(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_696(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_716(iParam0);
		case 1:
			return func_717(iParam0);
		case 2:
			return func_718(iParam0);
		case 3:
			return func_719(iParam0);
	}
	return 0;
}

int func_697(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_720(iParam0);
		case 1:
			return func_721(iParam0);
		case 2:
			return func_722(iParam0);
		case 3:
			return func_723(iParam0);
		case 4:
			return func_724(iParam0);
		case 5:
			return func_725(iParam0);
		case 6:
			return func_726(iParam0);
		case 7:
			return func_727(iParam0);
		case 8:
			return func_728(iParam0);
	}
	return 0;
}

bool func_698(int iParam0)
{
	iParam0 = func_729(iParam0);
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

bool func_699(int iParam0)
{
	int iVar0;

	iParam0 = func_729(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_698(iParam0))
	{
		return false;
	}
	iVar0 = func_700(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_700(int iParam0)
{
	iParam0 = func_729(iParam0);
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

void func_701(var uParam0)
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

int func_702(int iParam0)
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

void func_703(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_704(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_705(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_203(iParam0))
	{
		case -2061583405:
			bVar0 = func_730(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_730(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_730(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_730(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_730(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_730(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_714();
	}
	if (bParam1)
	{
		func_634(0, 0);
	}
}

void func_706(int iParam0)
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
	Var2 = { func_437(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_440(&Var2, &iVar0, &iVar1, 0))
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
		func_411(iVar0);
	}
}

void func_707(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_731(iParam2, *uParam0);
	func_732(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_708(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_326(iParam0, 0, 0) };
	Var5 = { func_358(iParam0, Var0, Var0.f_4, 0) };
	if (func_480(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_300(0), &Var5, iParam1);
	return true;
}

void func_709(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_326(iParam0, 0, 0) };
	Var5 = { func_358(iParam0, Var0, Var0.f_4, 0) };
	if (func_480(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_300(0), &Var5, bParam1);
}

bool func_710(int iParam0)
{
	if (func_106() == -1)
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

int func_711(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_733(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_708(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_203(iParam0) != -999503751)
	{
		func_707(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_712(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_422();
	}
	if (iParam0 == 1160113249)
	{
		return GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_713(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_326(iParam0, 0, 0) };
	Var5 = { func_358(iParam0, Var0, Var0.f_4, 0) };
	if (func_480(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_300(0), &Var5);
	return 1;
}

void func_714()
{
	int iVar0;

	if (func_106() == -1)
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

bool func_715(int iParam0)
{
	return func_735(func_734(iParam0));
}

int func_716(int iParam0)
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

int func_717(int iParam0)
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

int func_718(int iParam0)
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

int func_719(int iParam0)
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

int func_720(int iParam0)
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

int func_721(int iParam0)
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

int func_722(int iParam0)
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

int func_723(int iParam0)
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

int func_724(int iParam0)
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

int func_725(int iParam0)
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

int func_726(int iParam0)
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

int func_727(int iParam0)
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

int func_728(int iParam0)
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

int func_729(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_730(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_733(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_203(iParam0) != -999503751)
		{
			func_736(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_203(iParam0) != -999503751)
	{
		func_736(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_708(iParam0, 1);
	return 1;
}

void func_731(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_732(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_737(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_400(func_529(iParam1), 1);
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
		func_738(uParam0);
	}
}

bool func_733(int iParam0, int iParam1)
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

int func_734(int iParam0)
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

bool func_735(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_736(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_739(iParam1);
	func_740(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_741(&(uParam0->f_26), iVar1);
		if (func_742(uParam0->f_26, &iVar0))
		{
			func_743(iVar0, iVar1);
		}
	}
}

void func_737(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_744(&(uParam0->f_3));
}

void func_738(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_745(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_739(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_740(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_741(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_737(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_742(int iParam0, int iParam1)
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

void func_743(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_744(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_745(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_746(func_422());
	if (*uParam0)
	{
		func_744(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_106() != -1, uParam2);
	*uParam0 = 1;
}

int func_746(int iParam0)
{
	if (func_106() == -1)
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

