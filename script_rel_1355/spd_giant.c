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
	int iLocal_15 = 0;
	var uLocal_16 = 24;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = GET_HASH_KEY("A_M_M_ARMTOWNFOLK_01");
	iLocal_122 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2();
		func_3();
		func_4(12, iLocal_14, &iLocal_146, &uLocal_150, &uLocal_124, 0, 1097859072 /* Float: 15f */, 0);
		func_5(iLocal_146, &iLocal_120, 8, 12, 0);
		if (iLocal_114 == 4)
		{
			func_6();
		}
		switch (iLocal_114)
		{
			case 0:
				func_7();
				func_8(1);
				break;
			case 1:
				if (func_9())
				{
					func_8(2);
				}
				break;
			case 2:
				if (func_10())
				{
					func_8(3);
				}
				break;
			case 3:
				func_11();
				break;
			case 4:
				func_12();
				break;
		}
	}
}

void func_1()
{
	func_13(12);
	if (iLocal_114 >= 4)
	{
		func_14(12, &iLocal_146, &iLocal_120, 16);
		if (iLocal_14 == 3)
		{
			func_15(12, 12);
		}
		else
		{
			func_15(12, iLocal_14 + 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		PED::DELETE_PED(&iLocal_146);
	}
	func_16(&uLocal_125);
	AUDIO::_0x36559148B78853B3(1, 1, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (!func_17(Global_35, 0))
	{
		func_1();
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iLocal_117) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_117, true, 0))
	{
		if (!func_18(&uLocal_147))
		{
			func_19(&uLocal_147, 0);
		}
		else if (func_20(&uLocal_147) > 10f)
		{
			func_1();
		}
	}
	else if (func_21(12, iLocal_14, &uLocal_125, iLocal_146))
	{
		func_1();
	}
}

void func_3()
{
	if (iLocal_114 == 4 && MISC::GET_GAME_TIMER() >= iLocal_123 + 1000)
	{
		if (!PED::IS_PED_HEADTRACKING_ENTITY(Global_35, iLocal_146))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_146, -1, 2048, 51, 0);
		}
	}
	else if (PED::IS_PED_HEADTRACKING_ENTITY(Global_35, iLocal_146))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
}

int func_4(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_22();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_23(Global_35, *iParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_18(uParam3))
	{
		func_24(uParam3, 0f);
	}
	else if (func_20(uParam3) >= 2f)
	{
		if (!func_25(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_26(iParam0);
			*uParam4 = 1;
			func_27(uParam3);
			return 1;
		}
		else
		{
			func_26(iParam0);
			*uParam4 = 1;
			func_27(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_28(iParam3);
	if (fParam4 == 0f)
	{
		if (func_23(iParam0, Global_35, 15f, 1))
		{
			if (!func_29(*iParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_30(iParam1, iParam2);
				}
			}
		}
		else if (func_29(*iParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_31(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_29(*iParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_30(iParam1, iParam2);
			}
		}
	}
	else if (func_29(*iParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_31(iParam1, iParam2);
	}
}

void func_6()
{
	if (!func_32(iLocal_120, 1))
	{
		if (func_33(&iLocal_146, 1715123483))
		{
			func_34(&iLocal_120, 1);
		}
	}
}

void func_7()
{
	iLocal_14 = func_35(12);
	func_36(&uLocal_125);
	HUD::TEXT_BLOCK_REQUEST("SPGATAU");
	STREAMING::REQUEST_MODEL(iLocal_15, false);
	PED::_0xED9582B3DA8F02B4(1);
}

void func_8(int iParam0)
{
	iLocal_114 = iParam0;
	switch (iParam0)
	{
		case 4:
			iLocal_123 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_9()
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPGATAU"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_15))
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
		return false;
	}
	return true;
}

bool func_10()
{
	var uVar0;

	if (func_37(&uVar0, 1706.732f, 2183.457f, 323.2325f, 177f))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_146, GET_HASH_KEY("PLAYER"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_146, true);
		PED::SET_PED_KEEP_TASK(iLocal_146, true);
		PED::SET_PED_CAN_RAGDOLL(iLocal_146, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_146, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_146, false, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_146, false);
		AUDIO::STOP_PED_SPEAKING(iLocal_146, true);
		func_38(iLocal_146, 0);
		func_39(iLocal_146, 12);
		if (func_40())
		{
			func_41(&uLocal_16, Global_35, "JOHN", 0);
		}
		else
		{
			func_41(&uLocal_16, Global_35, "ARTHUR", 0);
		}
		func_41(&uLocal_16, iLocal_146, "GIANT", 0);
		iLocal_115 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 324f, 0f, 0f, 0f, 15f, 21f, 8f, "giant_speak");
		iLocal_116 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 320f, 0f, 0f, 0f, 35f, 40f, 8f, "giant_stop");
		iLocal_117 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1710f, 2148f, 319f, 0f, 0f, 0f, 160f, 160f, 80f, "giant_end");
		iLocal_119 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 320f, 0f, 0f, 0f, 26f, 32f, 8f, "m_volStayAway");
		POPULATION::_0xB56D41A694E42E86(iLocal_119, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_119, 0, 0, 0, -1, -1, 0);
		iLocal_118 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1710f, 2148f, 319f, 0f, 0f, 0f, 110f, 110f, 110f, "m_volRandomEventBlock");
		func_42(iLocal_118, "SP_Giant_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		return true;
	}
	return false;
}

void func_11()
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_115, true, 0))
	{
		func_8(4);
	}
}

void func_12()
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	if (iLocal_121 < func_43())
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_116, true, 0))
		{
			sVar0 = "";
			bVar1 = false;
			iVar2 = -1;
			sVar0 = func_44(iLocal_121, &iVar2);
			if (iVar2 < 0)
			{
				if (func_45(sVar0))
				{
					bVar1 = true;
					iLocal_121++;
				}
			}
			else if (func_46(sVar0, iVar2))
			{
				bVar1 = true;
				iLocal_121++;
			}
			if (!func_32(iLocal_120, 4))
			{
				if (bVar1)
				{
					func_48(12, func_47());
					func_34(&iLocal_120, 4);
				}
			}
		}
		else if (!func_32(iLocal_120, 2))
		{
			AUDIO::_0x36559148B78853B3(1, 1, 0);
			iLocal_121 = func_43();
			func_34(&iLocal_120, 2);
		}
	}
	else if (!func_49(1))
	{
		if (iLocal_122 < 0)
		{
			iLocal_122 = MISC::GET_GAME_TIMER() + 1100;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_122)
		{
			func_1();
		}
	}
}

void func_13(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_50(0, -1);
	}
	func_51();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

void func_14(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (func_29(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_53(func_52(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_54(func_52(GET_HASH_KEY("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_22();
	func_30(iParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_15(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_16(var uParam0)
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
	if (func_18(&(uParam0->f_13)))
	{
		func_27(&(uParam0->f_13));
	}
}

bool func_17(int iParam0, int iParam1)
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
	if (func_32(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_32(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_32(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_32(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_18(var uParam0)
{
	return func_55(*uParam0, 1);
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1 || !func_18(uParam0))
	{
		func_56(uParam0);
	}
}

float func_20(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_57(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_58() - uParam0->f_1);
}

bool func_21(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_59(0) == 1 || func_59(0) == 2) || func_59(0) == 8) || func_60(Global_1935630, 2048))
			{
				func_34(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_59(0) == 11)
			{
				func_34(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_59(0) == 6)
			{
				func_34(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_34(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_61(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_61(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_22();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_61(iVar2) > func_61(iVar1))
				{
					if (func_61(iVar0) > func_61(iVar2) + 1 || func_61(iVar0) < func_61(iVar1))
					{
						func_34(iParam2, 32);
					}
				}
				else if (func_61(iVar0) > func_61(iVar2) + 1 && func_61(iVar0) < func_61(iVar1))
				{
					func_34(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_62(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_62(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_63(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_63(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_64(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_34(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (func_65(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_66(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_18(&(iParam2->f_13)))
					{
						func_24(&(iParam2->f_13), 0f);
					}
					else if (func_67(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_27(&(iParam2->f_13));
						func_34(iParam2, 512);
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_18(&(iParam2->f_13)))
					{
						func_27(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_68())
			{
				func_34(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_69())
			{
				func_34(iParam2, 2048);
			}
		}
		if (func_60(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_34(iParam2, 128);
		}
		if (func_70(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_34(iParam2, 256);
		}
	}
	if ((((((((((func_32(*iParam2, 2) || func_32(*iParam2, 4)) || func_32(*iParam2, 8)) || func_32(*iParam2, 16)) || func_32(*iParam2, 32)) || func_32(*iParam2, 64)) || func_32(*iParam2, 128)) || func_32(*iParam2, 256)) || func_32(*iParam2, 512)) || func_32(*iParam2, 1024)) || func_32(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

int func_22()
{
	return Global_1899515;
}

bool func_23(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_24(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_58() - fParam1);
	func_71(uParam0, 1);
	func_72(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_25(int iParam0)
{
	return iParam0 != -15;
}

void func_26(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_22();
}

void func_27(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

char* func_28(int iParam0)
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

bool func_29(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_30(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_31(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_32(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_33(int iParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *iParam0);
		return true;
	}
	return false;
}

void func_34(int iParam0, int iParam1)
{
	func_30(iParam0, iParam1);
}

int func_35(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

void func_36(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

bool func_37(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		return true;
	}
	iLocal_146 = func_73(iLocal_15, vParam1, fParam4, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		*uParam0 = 1;
		return true;
	}
	return false;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_74(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_39(int iParam0, int iParam1)
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

bool func_40()
{
	if (func_75() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_41(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_76(uParam0, iParam1, sParam2))
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

int func_42(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_77(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_43()
{
	switch (iLocal_14)
	{
		case 0:
			return 6;
		case 1:
			return 15;
		case 2:
			return 2;
		case 3:
			return 5;
	}
	return 1;
}

char* func_44(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV1_ART";
					*iParam1 = -1;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV2_ART";
					*iParam1 = -1;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV3_JHN";
					*iParam1 = -1;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					sVar0 = "SPGAT_CNV4_JHN";
					*iParam1 = -1;
					break;
			}
			break;
	}
	return sVar0;
}

bool func_45(char* sParam0)
{
	vector3 vVar0[24];

	if (!func_49(1))
	{
		StringCopy(&cVar0, sParam0, 24);
		return func_78(&uLocal_16, cVar0, 0, -1, 0, 0);
	}
	return false;
}

bool func_46(char* sParam0, int iParam1)
{
	vector3 vVar0[24];

	if (!func_49(1))
	{
		StringCopy(&cVar0, sParam0, 24);
		return func_78(&uLocal_16, cVar0, 1, iParam1, 0, 0);
	}
	return false;
}

bool func_47()
{
	if (func_75() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_48(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_AR"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_AGNES_DOWD_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_CASSIDY_AR"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_CASSIDY_JN"), 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_RC_CRKPT4_1_AR"), 0);
			}
			else if (func_80(55))
			{
				func_79(GET_HASH_KEY("JOURNAL_RC_CRKPT4_1B_JN"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_RC_CRKPT4_1A_JN"), 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_GIANT_AR"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_GIANT_JN"), 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_AR"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_PHILOSOPHER_CAVE_JN"), 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_AR"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_TREE_MONKEY_JN"), 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_AR"), 0);
			}
			else
			{
				func_79(GET_HASH_KEY("JOURNAL_SPECIAL_PEDS_CABIN_HERMIT_JN"), 0);
			}
			break;
		default:
			break;
	}
}

bool func_49(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_50(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_81(&Global_0, 8);
	}
	if (!func_82() || func_75() != -1)
	{
		return;
	}
	func_81(&Global_0, 1);
}

void func_51()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

struct<2> func_52(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_53(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56(var uParam0)
{
	func_24(uParam0, 0f);
}

bool func_57(var uParam0)
{
	return func_55(*uParam0, 2);
}

float func_58()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_59(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_60(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_61(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_62(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_83(Global_1835011[iParam0 /*74*/].f_1);
}

int func_63(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_84(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_64(int iParam0)
{
	int iVar0;

	iVar0 = func_85();
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

int func_65(int iParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_86(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_87(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
		if (!func_88(iVar1, 0))
		{
			func_89(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_67(var uParam0)
{
	if (!func_18(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_57(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_90() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_68()
{
	return Global_1392040.f_6;
}

bool func_69()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_70(var uParam0, int iParam1)
{
	return func_91(*uParam0, iParam1);
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_73(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_92(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_74(int iParam0)
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

int func_75()
{
	return Global_1572887.f_12;
}

bool func_76(var uParam0, int iParam1, char* sParam2)
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

int func_77(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_93(vParam0))
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
		if (func_94(vParam0))
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
	func_95(iVar0, bParam8);
	return iVar0;
}

bool func_78(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_96(cParam1, cParam0);
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

void func_79(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_97(iParam0, 0);
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
		func_98(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_80(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

void func_81(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_82()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_99(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_84(int iParam0)
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
		iVar0 = func_100(iParam0);
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

int func_85()
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

bool func_86(var uParam0, vector3 vParam1, float fParam4)
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

bool func_87(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_101(Global_35, *iParam1, 0))
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

bool func_88(int iParam0, bool bParam1)
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

void func_89(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_102(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

int func_90()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_91(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_103(iParam1))
		{
			func_104(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_105(iParam0, 0, 1);
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
			func_106(iParam0, 0);
			bVar0 = true;
		}
		func_107(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_93(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_94(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_95(int iParam0, bool bParam1)
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

void func_96(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
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

void func_97(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_108(1);
	}
}

void func_98(int iParam0)
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
			func_97(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_108(1);
	}
}

int func_99(int iParam0)
{
	if (!func_109(iParam0))
	{
		return -1;
	}
	return func_100(iParam0);
}

int func_100(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_110(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_101(int iParam0, int iParam1, bool bParam2)
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

bool func_102(int iParam0, int iParam1)
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

bool func_103(int iParam0)
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

void func_104(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_111(iParam0, iParam1))
		{
			if (func_112(iParam0, iParam1))
			{
				if (func_113(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_114(iParam0);
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

void func_105(int iParam0, int iParam1, bool bParam2)
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

void func_106(int iParam0, bool bParam1)
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

void func_107(int iParam0, int iParam1)
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

void func_108(bool bParam0)
{
	if (bParam0)
	{
		func_115(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_116(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_109(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_110(int iParam0)
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

bool func_111(int iParam0, int iParam1)
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

bool func_112(int iParam0, int iParam1)
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

bool func_113(int iParam0, int iParam1)
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
	if (!func_111(iParam0, iVar0))
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

void func_114(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

