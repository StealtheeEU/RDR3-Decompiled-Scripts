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
	struct<625> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 1, 2, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232348144, 0, 0, 0, 6, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	float fLocal_668 = 0f;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	float fLocal_672 = 0f;
	int iLocal_673 = 0;
	bool bLocal_674 = false;
	bool bLocal_675 = false;
	bool bLocal_676 = false;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	bool bLocal_680 = false;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	int iLocal_688 = 0;
	vector3 vLocal_689 = { 0f, 0f, 0f };
	vector3 vLocal_692 = { 0f, 0f, 0f };
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_641 = GET_HASH_KEY("CS_SHERIFFFREEMAN");
	iLocal_653 = -1;
	iLocal_681 = GET_HASH_KEY("A_F_M_TUMTOWNFOLK_02");
	iLocal_682 = GET_HASH_KEY("A_M_M_TUMTOWNFOLK_01");
	func_1(&(Local_14.f_205));
	func_2(&Local_14);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		func_4(&Local_14);
		func_5(&Local_14, Local_14);
		switch (Local_14.f_203)
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					func_7(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					func_7(&Local_14, 3);
				}
				if (Local_14.f_600 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
				{
					if (Local_14.f_202)
					{
						func_10(&Local_14);
					}
					if (Local_14.f_599)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
				}
				break;
			case 3:
				if (Local_14.f_202)
				{
					func_10(&Local_14);
				}
				func_13(&Local_14);
				if ((func_14(&Local_14) || func_15(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_622 == 0)
				{
					if (!func_16(&(Local_14.f_205), 8))
					{
						func_17(&(Local_14.f_205), 8, 0);
					}
				}
				else if (func_16(&(Local_14.f_205), 8))
				{
					func_18(&(Local_14.f_205), 8);
				}
				if ((func_16(&(Local_14.f_205), 2) || (Local_14.f_205.f_389 && func_16(&(Local_14.f_205), 1))) || Local_14.f_205.f_385 != 5)
				{
					if (func_19(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_624), 0, 1097859072 /* Float: 15f */, 0))
					{
						func_20(&Local_14);
					}
					if (Local_14.f_599)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
					func_21(&Local_14);
					func_22(&Local_14);
					if (func_23(&Local_14, 1))
					{
						func_7(&Local_14, 4);
					}
				}
				else if (func_23(&Local_14, 0))
				{
					func_7(&Local_14, 4);
				}
				break;
			case 4:
				func_3(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_393 = 2899;
	func_25(&(uParam0->f_217));
	func_25(&(uParam0->f_245));
	func_25(&(uParam0->f_273));
	func_25(&(uParam0->f_301));
	func_25(&(uParam0->f_329));
}

void func_2(var uParam0)
{
	func_26();
	func_27();
	uParam0->f_10 = 115;
	func_28(&(uParam0->f_601));
	func_29(&(Local_14.f_11));
	func_30(&(Local_14.f_11), 0);
	func_31(&(Local_14.f_11), 0);
	func_32(&(Local_14.f_11), 1);
	func_33(&(Local_14.f_11), 1);
	func_34(&(Local_14.f_11), 0);
	func_35(&(Local_14.f_11), 0);
	func_36(&(Local_14.f_11), 0);
	func_37(&(Local_14.f_11), 1);
	func_38(&(Local_14.f_11), 1);
	func_39(&(Local_14.f_11), 1);
	func_40(&(Local_14.f_11), 1);
	func_41(&(Local_14.f_11), 1);
	func_42(&(Local_14.f_11), 1);
	func_43(&(Local_14.f_11), 1);
	func_44(&(Local_14.f_11), 1);
	func_45(&(Local_14.f_11), 1);
	func_46(&(Local_14.f_11), 1);
	func_47(&(Local_14.f_11), 1);
	func_48(&Local_14, 1);
}

void func_3(int iParam0)
{
	func_49(iParam0);
	func_50(&(iParam0->f_205));
	ITEMSET::DESTROY_ITEMSET(iParam0->f_163);
	func_51(iParam0->f_161);
	func_51(iParam0->f_164);
	func_52(&(iParam0->f_601));
	func_53(*iParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
	vector3 vVar0;

	if (Local_14.f_203 == 3)
	{
		if (func_54(&Local_14) <= 15f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
			{
				PED::SET_PED_RESET_FLAG(Local_14.f_3, 49, true);
				PED::SET_PED_RESET_FLAG(Local_14.f_3, 53, true);
			}
		}
		if (((!func_55(Local_14.f_193, 2) && func_55(Local_14.f_193, 65536)) && func_56(&Local_14) == 1) && (((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0) && !func_57(Global_35, 1)) && func_54(&Local_14) <= 5f) && func_54(&Local_14) > 2.2f) && (!func_58(&uLocal_677) || func_59(&uLocal_677) >= 16f)) || func_55(Local_14.f_193, 1048576)))
		{
			func_60(Local_14, &(Local_14.f_3), &(Local_14.f_193), Local_14.f_194);
			func_61(&(Local_14.f_193), 2);
			func_61(&(Local_14.f_193), 524288);
			func_62(&(Local_14.f_193), 1048576);
			func_62(&(Local_14.f_193), 65536);
			if (Local_14.f_1 == 2 || bLocal_680)
			{
				func_61(&(Local_14.f_193), 2048);
			}
			func_17(&(Local_14.f_205), 4, 0);
		}
	}
	if (bLocal_676)
	{
		func_63(&Local_14, 0);
		func_64(&Local_14, 0);
		bLocal_676 = false;
		func_61(&(Local_14.f_193), 32);
	}
	vVar0 = { func_65(Local_14, Local_14.f_1, 0) };
	if (Local_14.f_1 == 1)
	{
		vVar0 = { -5497.847f, -2957.04f, -1.59251f };
	}
	if (func_66(Global_35, vVar0, 1) <= 7f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_DROP"), false);
	}
}

void func_5(int iParam0, var uParam1)
{
	if (func_67(iParam0))
	{
		func_3(iParam0);
	}
	if (!func_68(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_69(*iParam0, iParam0->f_1, &(iParam0->f_601), iParam0->f_3))
	{
		iParam0->f_622 = 1;
	}
	if (func_70(iParam0))
	{
		if (!func_58(&(iParam0->f_7)))
		{
			func_71(&(iParam0->f_7), 0);
		}
		else if (func_59(&(iParam0->f_7)) > 10f)
		{
			func_72(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (func_58(&(iParam0->f_7)))
	{
		func_72(&(iParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_73(uParam0))
	{
		uParam0->f_163 = ITEMSET::CREATE_ITEMSET(true);
		return true;
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_203 = iParam1;
}

bool func_8(var uParam0)
{
	if (func_74(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_75(uParam0))
	{
		return true;
	}
	return false;
}

void func_10(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		uParam0->f_201 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_11(int iParam0)
{
	if (((func_76(iParam0) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !Global_1935630.f_12) && ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || func_77(iParam0)))
	{
		if (func_78(iParam0, iParam0->f_160) > -1)
		{
			if (func_79(iParam0))
			{
				func_80(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				func_81(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				if (iParam0->f_623)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), false, 0, false, false);
				}
				func_60(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				func_82(iParam0, iParam0->f_160, -1);
				if (!func_83(iParam0, 2))
				{
					func_84(&(iParam0->f_3));
					func_85(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_86(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		func_84(&(iParam0->f_3));
		func_81(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		func_85(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_76(iParam0))
	{
		if (func_87(iParam0, iParam0->f_160) > -1)
		{
			if (func_79(iParam0))
			{
				func_80(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				func_84(&(iParam0->f_3));
				func_81(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
				func_85(&(iParam0->f_41[iParam0->f_160 /*59*/].f_21), 0, 0, 1, 0);
				if (iParam0->f_623)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), false, 0, false, false);
				}
				func_60(*iParam0, &(iParam0->f_3), &(iParam0->f_193), iParam0->f_194);
				func_82(iParam0, iParam0->f_160, -1);
			}
		}
	}
	else
	{
		func_80(&(iParam0->f_41[iParam0->f_160 /*59*/]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			MISC::_0xE98D55C5983F2509(iParam0->f_3);
		}
	}
}

void func_13(var uParam0)
{
	bool bVar0;

	if (func_88(uParam0))
	{
		if (uParam0->f_626)
		{
			bVar0 = func_89(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_625), 1101004800 /* Float: 20f */);
		}
		else
		{
			bVar0 = func_90(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_91(uParam0))
			{
				func_17(&(uParam0->f_205), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	func_92();
	if (fLocal_668 >= 80f)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_93())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_94(0) == 7 || func_95())
		{
			return 1;
		}
	}
	if (func_96(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return func_55(uParam0->f_388, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_388 = 0;
		func_61(&(uParam0->f_388), iParam1);
	}
	else
	{
		func_61(&(uParam0->f_388), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_62(&(uParam0->f_388), iParam1);
}

bool func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_97();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_98(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_58(uParam3))
	{
		func_99(uParam3, 0f);
	}
	else if (func_59(uParam3) >= 2f)
	{
		if (!func_100(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_101(iParam0);
			*uParam4 = 1;
			func_72(uParam3);
			return true;
		}
		else
		{
			func_101(iParam0);
			*uParam4 = 1;
			func_72(uParam3);
			return true;
		}
	}
	return false;
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
	if (!func_102(iParam0) || func_103(iParam0->f_193, iParam0->f_195))
	{
		return;
	}
	if (iParam0->f_196 < 2)
	{
		if (func_104(&(iParam0->f_3), 249295937))
		{
			func_105(iParam0);
			func_106(&(iParam0->f_193), iParam0->f_195);
		}
	}
}

void func_22(int iParam0)
{
	if (func_107(iParam0))
	{
		func_108(&(iParam0->f_163), iParam0->f_164, &(iParam0->f_3), &(iParam0->f_165), &(iParam0->f_190), 5000);
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_109(iParam0))
		{
			return true;
		}
	}
	func_110(&(iParam0->f_205));
	return false;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 17743;
	uParam0->f_24 = 17752;
	uParam0->f_25 = 17761;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	Local_14 = 22;
	Local_14.f_1 = func_114(22);
	func_115();
	Local_14.f_2 = func_117(Local_14, Local_14.f_1, 9, func_116(Local_14));
	if (Local_14.f_1 == 0)
	{
		Local_14.f_161 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5508.085f, -2932.673f, -2.634242f, 0f, 0f, -49.7522f, 4.560063f, 6.078531f, 5.547368f, "volTalkTrigger");
	}
	else if (Local_14.f_1 == 1)
	{
		Local_14.f_161 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5499.649f, -2953.863f, -2.634242f, 0f, 0f, -70.41862f, 4.560063f, 4.917511f, 5.547368f, "volTalkTrigger");
	}
	else
	{
		Local_14.f_161 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5495.711f, -2942.673f, -2.634242f, 0f, 0f, 36.36764f, 3.194005f, 5.214571f, 5.547368f, "volTalkTrigger");
	}
	Local_14.f_194 = 16384;
	Local_14.f_195 = 4;
	Local_14.f_205.f_393 = 19236;
}

void func_27()
{
	if (Local_14.f_1 == 0)
	{
		iLocal_643 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5508.085f, -2932.673f, -2.634242f, 0f, 0f, -49.7522f, 4.560063f, 6.078531f, 5.547368f, "m_volTrigger");
		iLocal_646 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5510.888f, -2929.929f, -3.760728f, 0f, 0f, 0f, 25.86575f, 23.33263f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5509.431f, -2932.574f, -2.987233f, 0f, 0f, 0f, 12.01924f, 10.87544f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5511.153f, -2929.652f, -2.776548f, 0f, 0f, -59.16267f, 2.746939f, 3.634164f, 8.927961f, "m_volStayAway");
		iLocal_642 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5511.153f, -2929.652f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
	else if (Local_14.f_1 == 1)
	{
		iLocal_643 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5499.649f, -2953.863f, -2.634242f, 0f, 0f, -70.41862f, 4.560063f, 4.917511f, 5.547368f, "m_volTrigger");
		iLocal_646 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5510.172f, -2946.772f, -3.760728f, 0f, 0f, 19.2469f, 22.05198f, 26.8289f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5502.124f, -2949.856f, -2.987233f, 0f, 0f, 6.290838f, 13.62729f, 11.91515f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5497.959f, -2957.207f, -2.776548f, 0f, 0f, -75.42225f, 1.296526f, 3.066641f, 8.927961f, "m_volStayAway");
		iLocal_642 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5497.959f, -2957.207f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
	else
	{
		iLocal_643 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5495.711f, -2942.673f, -2.634242f, 0f, 0f, 36.36764f, 3.194005f, 5.214571f, 5.547368f, "m_volTrigger");
		iLocal_646 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5505.143f, -2945.473f, -3.760728f, 0f, 0f, 19.2469f, 22.05198f, 26.8289f, 11.63066f, "m_volCalloverArea");
		iLocal_645 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5500.122f, -2945.972f, -2.987233f, 0f, 0f, 122.9969f, 14.78125f, 11.91515f, 11.34509f, "m_volSpeechArea");
		iLocal_644 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5493.419f, -2940.896f, -2.776548f, 0f, 0f, 36.69946f, 1.296526f, 2.754986f, 8.927961f, "m_volStayAway");
		iLocal_642 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-5493.419f, -2940.896f, -2.776548f, 0f, 0f, 0f, 40f, 40f, 40f, "m_volRandomEventBlock");
	}
}

void func_28(var uParam0)
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

void func_29(var uParam0)
{
	func_32(uParam0, 0);
	func_39(uParam0, 0);
	func_119(uParam0, 1);
	func_42(uParam0, 1);
	func_120(uParam0, 0);
	func_30(uParam0, 1);
	func_121(uParam0, 1, 1, 1);
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 256);
	}
	else
	{
		func_123(uParam0, 256);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 524288);
	}
	else
	{
		func_123(uParam0, 524288);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 16384);
	}
	else
	{
		func_122(&(uParam0->f_1), 16384);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 524288);
	}
	else
	{
		func_122(&(uParam0->f_1), 524288);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 131072);
	}
	else
	{
		func_122(&(uParam0->f_1), 131072);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 4);
	}
	else
	{
		func_123(uParam0, 4);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 2);
	}
	else
	{
		func_123(uParam0, 2);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 2);
	}
	else
	{
		func_122(&(uParam0->f_1), 2);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 8);
	}
	else
	{
		func_122(&(uParam0->f_1), 8);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 2048);
	}
	else
	{
		func_122(&(uParam0->f_1), 2048);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 128);
	}
	else
	{
		func_123(uParam0, 128);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 16);
	}
	else
	{
		func_122(&(uParam0->f_1), 16);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 16);
	}
	else
	{
		func_123(uParam0, 67108864);
		func_123(uParam0, 16);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 262144);
	}
	else
	{
		func_123(uParam0, 262144);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 1024);
	}
	else
	{
		func_122(&(uParam0->f_1), 1024);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 8);
	}
	else
	{
		func_123(uParam0, 8);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 32);
	}
	else
	{
		func_123(uParam0, 32);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 4);
	}
	else
	{
		func_122(&(uParam0->f_1), 4);
	}
}

void func_48(int iParam0, int iParam1)
{
	iParam0->f_202 = iParam1;
}

int func_49(int iParam0)
{
	func_124();
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "SheriffBubble");
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_698))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_698);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_699))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_699);
	}
	func_51(iLocal_643);
	func_51(iLocal_642);
	func_51(iLocal_646);
	func_51(iLocal_644);
	func_51(iLocal_645);
	func_125(0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_3, 0f);
	}
	AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
	func_126();
	func_127(Local_14.f_3);
	if (func_128(348, 0))
	{
		if (func_55(Local_14.f_193, 512))
		{
			func_129();
			func_130(348, 0, 0, 0, 0);
		}
		else
		{
			func_130(348, 0, 1, 0, 0);
		}
	}
	return 1;
}

void func_50(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

void func_51(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_52(var uParam0)
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
	if (func_58(&(uParam0->f_13)))
	{
		func_72(&(uParam0->f_13));
	}
}

void func_53(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_131(0, -1);
	}
	func_132();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

float func_54(int iParam0)
{
	return iParam0->f_201;
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_56(int iParam0)
{
	return iParam0->f_205.f_385;
}

bool func_57(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_133(iVar0) || func_134(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_58(var uParam0)
{
	return func_135(*uParam0, 1);
}

float func_59(var uParam0)
{
	if (!func_58(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_136(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_137() - uParam0->f_1);
}

void func_60(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_103(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_139(func_138(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_140(func_138(GET_HASH_KEY("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_97();
	func_106(uParam2, uParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_61(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

void func_62(var uParam0, int iParam1)
{
	func_141(uParam0, iParam1);
}

void func_63(int iParam0, int iParam1)
{
	if (!func_142(iParam1))
	{
		return;
	}
	iParam0->f_160 = iParam1;
}

void func_64(int iParam0, int iParam1)
{
	if (!func_142(iParam1))
	{
		return;
	}
	func_81(&(iParam0->f_41[iParam1 /*59*/]), 0);
}

struct<4> func_65(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_143(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_144(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
			}
			switch (func_143(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0 = { 1702.736f, 2168.096f, 318.9191f };
					Var0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_143(15))
			{
				case 7:
				case 9:
					Var0 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_3 = 177.0399f;
					break;
				case 13:
					Var0 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_3 = 181.815f;
					break;
				case 10:
					Var0 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
				default:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_3 = 167.5016f;
					break;
				case 1:
					Var0 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_3 = 167.5016f;
					break;
				case 2:
					Var0 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
				case 1:
					Var0 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_3 = 145.05f;
					break;
				default:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					Var0 = { -5511.039f, -2929.552f, -3.278f };
					Var0.f_3 = -131.907f;
					break;
				case 1:
					Var0 = { -5497.666f, -2957.426f, -1.708f };
					Var0.f_3 = 12.912f;
					break;
				case 2:
					Var0 = { -5493.435f, -2940.703f, -1.471f };
					Var0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (func_143(23))
			{
				case 0:
					Var0 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_3 = 254.7072f;
					break;
				case 2:
					Var0 = { 2445.841f, -463.2956f, 41.1018f };
					Var0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_3 = 208.7791f;
					break;
				case 1:
					Var0 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_3 = 292.1099f;
					break;
				case 2:
					Var0 = { -2927.12f, -2860.494f, 85.7312f };
					Var0.f_3 = 123.2795f;
					break;
				case 3:
					Var0 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_3 = 332.5893f;
					break;
				case 4:
					Var0 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_3 = 260.2986f;
					break;
				case 5:
					Var0 = { -4399.393f, -3606.746f, 48.6452f };
					Var0.f_3 = 348.5519f;
					break;
				case 6:
					Var0 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_3 = 163.9257f;
					break;
				case 7:
					Var0 = { -5333.317f, -3534.569f, 2.0586f };
					Var0.f_3 = 306.198f;
					break;
				case 8:
					Var0 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_3 = 170.3096f;
					break;
				case 9:
					Var0 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_3 = 255.0981f;
					break;
				case 10:
					Var0 = { -4956.249f, -3198.202f, 26.3575f };
					Var0.f_3 = 292.8281f;
					break;
				case 11:
					Var0 = { -4594.695f, -3045.041f, 6.5776f };
					Var0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

float func_66(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_67(var uParam0)
{
	return false;
}

bool func_68(int iParam0, int iParam1)
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
	if (func_55(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_69(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_94(0) == 1 || func_94(0) == 2) || func_94(0) == 8) || func_145(Global_1935630, 2048))
			{
				func_61(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_94(0) == 11)
			{
				func_61(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_94(0) == 6)
			{
				func_61(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_61(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_146(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_146(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_97();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_146(iVar2) > func_146(iVar1))
				{
					if (func_146(iVar0) > func_146(iVar2) + 1 || func_146(iVar0) < func_146(iVar1))
					{
						func_61(uParam2, 32);
					}
				}
				else if (func_146(iVar0) > func_146(iVar2) + 1 && func_146(iVar0) < func_146(iVar1))
				{
					func_61(uParam2, 32);
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
					if (((func_147(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_147(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_148(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_148(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_149(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_61(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_150(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_151(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_58(&(uParam2->f_13)))
					{
						func_99(&(uParam2->f_13), 0f);
					}
					else if (func_152(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_72(&(uParam2->f_13));
						func_61(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_58(&(uParam2->f_13)))
					{
						func_72(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_153())
			{
				func_61(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_154())
			{
				func_61(uParam2, 2048);
			}
		}
		if (func_145(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_61(uParam2, 128);
		}
		if (func_96(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_61(uParam2, 256);
		}
	}
	if ((((((((((func_55(*uParam2, 2) || func_55(*uParam2, 4)) || func_55(*uParam2, 8)) || func_55(*uParam2, 16)) || func_55(*uParam2, 32)) || func_55(*uParam2, 64)) || func_55(*uParam2, 128)) || func_55(*uParam2, 256)) || func_55(*uParam2, 512)) || func_55(*uParam2, 1024)) || func_55(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_70(int iParam0)
{
	if ((func_155(iParam0) || (func_156(iParam0->f_40, 1) && !func_157(Global_35, Global_1396257[*iParam0 /*638*/][iParam0->f_1 /*48*/].f_47, 0, 1))) || (func_158(iParam0->f_10) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_159(iParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

void func_71(var uParam0, bool bParam1)
{
	if (bParam1 || !func_58(uParam0))
	{
		func_160(uParam0);
	}
}

void func_72(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_73(var uParam0)
{
	HUD::TEXT_BLOCK_REQUEST("SPSOT");
	HUD::TEXT_BLOCK_REQUEST("SPDEF");
	HUD::TEXT_BLOCK_REQUEST("SPSOTAU");
	STREAMING::REQUEST_MODEL(iLocal_641, false);
	STREAMING::REQUEST_MODEL(iLocal_681, false);
	STREAMING::REQUEST_MODEL(iLocal_682, false);
	func_161(iLocal_642, "SP_Sheriff_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0xB56D41A694E42E86(iLocal_644, 2500607, 0, 0, -1, -1, 10);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_644, 0, 0, 0, -1, -1, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_HUMAN_FAN"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_HUMAN_SMOKE"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_HUMAN_STAND_WAITING"), 15, 0, 0);
	PED::_0xED9582B3DA8F02B4(3);
	return true;
}

bool func_74(var uParam0)
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPSOT"))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPDEF"))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPSOTAU"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_641))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_681))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_682))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(GET_HASH_KEY("WORLD_HUMAN_FAN"), false))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(GET_HASH_KEY("WORLD_HUMAN_SMOKE"), false))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC"), false))
	{
		return false;
	}
	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(GET_HASH_KEY("WORLD_HUMAN_STAND_WAITING"), false))
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() != 3)
	{
		return false;
	}
	return true;
}

bool func_75(var uParam0)
{
	vector3 vVar0;
	int iVar4;

	vVar0 = { func_65(Local_14, Local_14.f_1, 0) };
	if (!func_55(Local_14.f_193, 2097152))
	{
		if (func_162(&(Local_14.f_3), 348, vVar0, 0, 1320127128))
		{
			func_163(Local_14.f_3, 22);
			ENTITY::SET_ENTITY_HEADING(Local_14.f_3, vVar0.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_3, 5, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_14.f_3, 512, true);
			PED::_0xE1B3BE07D3AADDED(Local_14.f_3, 4, 1);
			func_61(&(Local_14.f_193), 2097152);
			Local_14.f_599 = 1;
			Local_14.f_600 = 1;
			func_63(&Local_14, 0);
			func_164(&Local_14, 0, 0, "SPD_UC_GRT", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
			func_164(&Local_14, 0, 1, "SPD_UC_ANT", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			func_166(&Local_14, 0, func_165(3, 0, 0), 0);
			func_167(&Local_14, 0, 0);
			if (Local_14.f_1 == 0)
			{
				func_164(&Local_14, 1, 0, "SPSOT_YES", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
				func_164(&Local_14, 1, 1, "SPSOT_NO", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			}
			else if (Local_14.f_1 == 1)
			{
				func_164(&Local_14, 1, 0, "SPSOT_NOT_JOKE", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
				func_164(&Local_14, 1, 1, "SPSOT_ARE_JOKE", "", GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
			}
			func_167(&Local_14, 1, 0);
			func_61(&(Local_14.f_193), 32);
			func_61(&(Local_14.f_193), 33554432);
		}
	}
	else if (!func_55(Local_14.f_193, 4194304))
	{
		if (Local_14.f_1 == 1)
		{
			vVar0 = { -5497.847f, -2957.04f, -1.59251f };
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_14.f_3, true, true);
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 120000, 0.25f, 0, 40000f);
		TASK::TASK_ACHIEVE_HEADING(0, vVar0.f_3, 0);
		func_168(Local_14.f_3, &iVar4, 0, 0, 1, 1);
		func_61(&(Local_14.f_193), 4194304);
	}
	else if (!func_55(Local_14.f_193, 8388608))
	{
		if (Local_14.f_1 == 1)
		{
			vVar0 = { -5497.847f, -2957.04f, -1.59251f };
		}
		if (func_66(Local_14.f_3, vVar0, 1) <= 13f && MISC::IS_POSITION_OCCUPIED(vVar0, 0.5f, false, true, true, false, false, Local_14.f_3, true))
		{
			if (!func_58(&uLocal_695))
			{
				func_160(&uLocal_695);
			}
		}
		else if (func_58(&uLocal_695))
		{
			func_72(&uLocal_695);
		}
		if (func_90(Local_14.f_3, 0, &(Local_14.f_11), &(Local_14.f_39), 0, 0) || func_169(&uLocal_695) >= 6f)
		{
			func_101(22);
			func_7(&Local_14, 4);
			return false;
		}
		if (!func_170(Local_14.f_3, 242628503))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_14.f_3, GET_HASH_KEY("WEAPON_SHOTGUN_DOUBLEBARREL"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Local_14.f_3, 1, 0, 0, 0);
			func_61(&(Local_14.f_193), 8388608);
		}
	}
	else if (!func_55(Local_14.f_193, 16777216))
	{
		if (func_90(Local_14.f_3, 0, &(Local_14.f_11), &(Local_14.f_39), 0, 0))
		{
			func_101(22);
			func_7(&Local_14, 4);
			return false;
		}
		if (!func_170(Local_14.f_3, 716706914))
		{
			func_61(&(Local_14.f_193), 16777216);
		}
	}
	if (func_55(Local_14.f_193, 16777216))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_3, "special_ped_group", 0f);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3, true);
		PED::_0x86F0B6730C32AC14(Local_14.f_3, 1);
		PED::_0xEF371232BC6053E1(Local_14.f_3);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, true);
		func_171();
		func_118(&(Local_14.f_205.f_217), func_172(5), func_173(59), &(Local_14.f_205.f_245));
		func_174(&(Local_14.f_205), 1, 1);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "SheriffBubble");
		return true;
	}
	return false;
}

bool func_76(int iParam0)
{
	if (func_55(Local_14.f_193, 32))
	{
		return true;
	}
	return false;
}

bool func_77(int iParam0)
{
	if (func_54(iParam0) <= 15f)
	{
		return true;
	}
	return false;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	iVar0 = func_175(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 2, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, iParam0->f_41[iParam1 /*59*/].f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_176(iParam0))
	{
		func_86(&(iParam0->f_41[iParam1 /*59*/]), 1);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		func_86(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_79(int iParam0)
{
	int iVar0;

	if (!func_55(Local_14.f_193, 524288))
	{
		if (func_177(iParam0, 0, &iVar0))
		{
			func_61(&(Local_14.f_193), 524288);
			func_61(&(Local_14.f_193), 1048576);
			if (Local_14.f_1 == 2)
			{
				func_61(&(Local_14.f_193), 2048);
			}
			func_178(iVar0);
		}
	}
	else if (Local_14.f_1 != 2)
	{
		if (func_177(iParam0, 1, &iVar0))
		{
			if (iVar0 == 0)
			{
				func_61(&(Local_14.f_193), 64);
			}
			else if (iVar0 == 1)
			{
				func_61(&(Local_14.f_193), 128);
			}
			bLocal_676 = true;
		}
	}
	return true;
}

void func_80(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_179(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_180(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_181(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && func_180(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_181(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_81(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_72(&(iParam0->f_18));
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2)
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_58 = iParam2;
}

bool func_83(int iParam0, int iParam1)
{
	return func_55(iParam0->f_197, iParam1);
}

void func_84(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_85(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_182((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_183(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_86(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_179(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_180(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_181(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && func_180(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_181(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return iVar0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_162))
	{
		iVar1 = iParam0->f_162;
	}
	if ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)) || func_77(iParam0))
	{
		func_80(&(iParam0->f_41[iParam1 /*59*/]), 1);
		iVar0 = func_175(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 3, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		func_80(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_88(var uParam0)
{
	return true;
}

int func_89(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
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
		if (func_90(*uParam2, 0, uParam0, uParam1, 0, 0))
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

bool func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_184(uParam2, 1, iVar0);
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
			if (func_185(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_187(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_188(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_189(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_190(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_191(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_192(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_193(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_194(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_194(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_195(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_196(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_197(uParam2, 4000))
				{
					if ((func_198(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_199(uParam2, iParam0)) && func_200(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_198(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_199(uParam2, iParam0)) && func_200(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_201(iParam0, Global_1935630.f_41))
							{
								func_202();
								*uParam3 = 2;
								func_186(iParam0, uParam2, *uParam3);
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
						if (func_201(iParam0, Global_1935630.f_41))
						{
							func_202();
							*uParam3 = 2;
							func_186(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_203(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_204() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_202();
						*uParam3 = 2;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_205())
					{
						if (func_201(iParam0, Global_1935630.f_42))
						{
							func_202();
							*uParam3 = 2;
							func_186(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_206(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_207(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_208(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_209(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_210(uParam2, 4000))
				{
					if (func_211(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_186(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_212(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_186(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_213(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_186(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_91(var uParam0)
{
	func_101(22);
	func_125(0);
	return true;
}

void func_92()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_14.f_3) && ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!func_58(&uLocal_665))
	{
		func_99(&uLocal_665, 0f);
	}
	else if (func_152(&uLocal_665) >= 1000)
	{
		fLocal_668 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_3, true, false), func_214(PLAYER::GET_PLAYER_INDEX()), true);
		func_72(&uLocal_665);
	}
}

bool func_93()
{
	int iVar0;

	if (func_215() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_216(Global_1392915[iVar0 /*12*/].f_4))
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

int func_94(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_95()
{
	return Global_1310750.f_16077 != 0;
}

bool func_96(var uParam0, int iParam1)
{
	return func_156(*uParam0, iParam1);
}

int func_97()
{
	return Global_1899515;
}

bool func_98(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_137() - fParam1);
	func_217(uParam0, 1);
	func_218(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_100(int iParam0)
{
	return iParam0 != -15;
}

void func_101(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_97();
}

bool func_102(int iParam0)
{
	return false;
}

bool func_103(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_104(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

void func_105(int iParam0)
{
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_107(int iParam0)
{
	return false;
}

void func_108(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
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
	if (!func_58(uParam4))
	{
		func_99(uParam4, 0f);
	}
	else if (func_152(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (func_219(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = uVar0[0];
				func_99(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			func_99(uParam4, 0f);
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

bool func_109(int iParam0)
{
	bool bVar0;

	func_220(Local_14.f_3, &(Local_14.f_193), 1024, 22, 0);
	func_221();
	func_222();
	bVar0 = func_190(PLAYER::PLAYER_ID(), 0, 0, 1);
	if (((func_16(&(Local_14.f_205), 2) || func_56(&Local_14) == 4) || func_55(Local_14.f_193, 512)) || bVar0)
	{
		func_61(&(Local_14.f_193), 512);
		return true;
	}
	if (func_55(Local_14.f_193, 8192))
	{
		return true;
	}
	if (iLocal_647 < 2 && iLocal_653 != func_223(&Local_14))
	{
		if (func_104(&(Local_14.f_3), 249295937))
		{
			iLocal_653 = func_223(&Local_14);
			iLocal_647++;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) || ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		return true;
	}
	if (!func_58(&uLocal_659))
	{
		func_160(&uLocal_659);
	}
	if (Local_14.f_622 && func_224(&(Local_14.f_601)))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	switch (uParam0->f_385)
	{
		case 1:
			if (func_225(uParam0, &(uParam0->f_217), uParam0->f_385))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_329));
					Stack.Push(uParam0->f_217.f_6);
					Stack.Push(uParam0->f_217.f_6.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 4, 1);
				}
				else if (uParam0->f_389 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_217.f_4);
					Stack.Push(uParam0->f_217.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_357));
					Stack.Push(uParam0->f_217.f_10);
					Stack.Push(uParam0->f_217.f_10.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_301));
					Stack.Push(uParam0->f_217.f_8);
					Stack.Push(uParam0->f_217.f_8.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_217.f_4);
					Stack.Push(uParam0->f_217.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_217));
					Stack.Push(uParam0->f_217.f_2);
					Stack.Push(uParam0->f_217.f_2.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_225(uParam0, &(uParam0->f_273), uParam0->f_385))
			{
				if (!uParam0->f_389)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_329));
						Stack.Push(uParam0->f_273.f_6);
						Stack.Push(uParam0->f_273.f_6.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_357));
						Stack.Push(uParam0->f_273.f_10);
						Stack.Push(uParam0->f_273.f_10.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_301));
						Stack.Push(uParam0->f_273.f_8);
						Stack.Push(uParam0->f_273.f_8.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 3, 1);
					}
					else
					{
						if (func_226(uParam0->f_273.f_2))
						{
							Stack.Push(&(uParam0->f_217));
							Stack.Push(uParam0->f_273.f_2);
							Stack.Push(uParam0->f_273.f_2.f_1);
							Stack.Push(&(uParam0->f_245));
							Call_Loc(uParam0->f_393);
						}
						func_174(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_390)
				{
					if (uParam0->f_391)
					{
						func_174(uParam0, 6, 1);
					}
					else
					{
						func_174(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_226(uParam0->f_273.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_273.f_2);
						Stack.Push(uParam0->f_273.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_225(uParam0, &(uParam0->f_301), uParam0->f_385))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_329));
					Stack.Push(uParam0->f_301.f_6);
					Stack.Push(uParam0->f_301.f_6.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 4, 1);
				}
				else if (uParam0->f_389 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_301.f_4);
					Stack.Push(uParam0->f_301.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_357));
					Stack.Push(uParam0->f_301.f_10);
					Stack.Push(uParam0->f_301.f_10.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_273));
					Stack.Push(uParam0->f_301.f_4);
					Stack.Push(uParam0->f_301.f_4.f_1);
					Stack.Push(&(uParam0->f_245));
					Call_Loc(uParam0->f_393);
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 2, 1);
				}
				else
				{
					if (func_226(uParam0->f_301.f_2))
					{
						Stack.Push(&(uParam0->f_217));
						Stack.Push(uParam0->f_301.f_2);
						Stack.Push(uParam0->f_301.f_2.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
					}
					func_174(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_225(uParam0, &(uParam0->f_329), uParam0->f_385))
			{
				if (uParam0->f_391)
				{
					func_174(uParam0, 6, 1);
				}
				else
				{
					func_174(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_392)
			{
				if (func_225(uParam0, &(uParam0->f_357), uParam0->f_385))
				{
					uParam0->f_392 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_329));
						Stack.Push(uParam0->f_357.f_6);
						Stack.Push(uParam0->f_357.f_6.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						uParam0->f_392 = 0;
						func_174(uParam0, 4, 0);
					}
					else if (uParam0->f_389 && func_16(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_273));
						Stack.Push(uParam0->f_357.f_4);
						Stack.Push(uParam0->f_357.f_4.f_1);
						Stack.Push(&(uParam0->f_245));
						Call_Loc(uParam0->f_393);
						uParam0->f_392 = 0;
						func_174(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_392 = 0;
						func_174(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_329));
				Stack.Push(uParam0->f_357.f_6);
				Stack.Push(uParam0->f_357.f_6.f_1);
				Stack.Push(&(uParam0->f_245));
				Call_Loc(uParam0->f_393);
				uParam0->f_392 = 0;
				func_174(uParam0, 4, 0);
			}
			else if (uParam0->f_389 && func_16(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_273));
				Stack.Push(uParam0->f_357.f_4);
				Stack.Push(uParam0->f_357.f_4.f_1);
				Stack.Push(&(uParam0->f_245));
				Call_Loc(uParam0->f_393);
				uParam0->f_392 = 0;
				func_174(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_392 = 0;
				func_174(uParam0, 1, 0);
			}
			break;
		case 6:
			func_227(uParam0);
			func_174(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

int func_111(var uParam0)
{
	return 1;
}

int func_112(var uParam0)
{
	return 1;
}

int func_113(var uParam0)
{
	return 1;
}

var func_114(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

void func_115()
{
	vector3 vVar0;
	vector3 vVar3;

	if (Local_14.f_1 == 0)
	{
		vVar0 = { -5511.039f, -2929.552f, -3.278f };
		vVar3 = { 0f, 0f, -131.907f };
	}
	else if (Local_14.f_1 == 1)
	{
		vVar0 = { -5497.666f, -2957.426f, -1.708f };
		vVar3 = { 0f, 0f, 12.912f };
	}
	else
	{
		vVar0 = { -5493.435f, -2940.703f, -1.471f };
		vVar3 = { 0f, 0f, 124.069f };
	}
	func_228(&(Local_14.f_205[0 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_1@ig_1", vVar0, vVar3, "pl_IG1_Enjoy_Your_Day", 0, 0, 0, 0, 0);
	func_228(&(Local_14.f_205[1 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_2@ig2", vVar0, vVar3, "Pl_IG1_Loop01", 0, 0, 0, 0, 0);
	func_228(&(Local_14.f_205[2 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_3@ig_3", vVar0, vVar3, "pl_IG3_Remember_People", 0, 0, 0, 0, 0);
	func_228(&(Local_14.f_205[3 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_4@ig_4", vVar0, vVar3, "pl_IG4_Get_The", 0, 0, 0, 0, 0);
	func_228(&(Local_14.f_205[4 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_5@ig5", vVar0, vVar3, "Pl_IG6_Loop01", 0, 0, 0, 0, 0);
	func_228(&(Local_14.f_205[5 /*36*/]), "script@specialped@pdsot_tumbleweed_sheriff@ig@ig_6@ig6", vVar0, vVar3, "pl_IG6_Aim_2_Stand", 0, 0, 0, 0, 0);
}

int func_116(int iParam0)
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

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_229())
	{
		iVar2 = func_229();
	}
	iVar5 = func_230(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_231(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_231(iVar6) == 0)
			{
				return func_232(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_231(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_231(iVar6) == 0)
			{
				return func_232(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_232(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_118(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_233(iParam1);
	iVar1 = func_234(iParam2);
	func_25(uParam0);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_235(uParam0, "pl_IG1_Welcome_To_Tumbleweed", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_Welcome_To_Tumbleweed", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_237(uParam0, 39054);
					func_239(uParam0, 39148);
					break;
				case 1:
					func_235(uParam0, "pl_IG1_People_Please_Obey", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_People_Please_Obey", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 2:
					func_235(uParam0, "pl_IG1_Enjoy_Your_Day", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_Enjoy_Your_Day", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 3:
					func_235(uParam0, "pl_IG1_Enjoy_Your_Time", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG1_Enjoy_Your_Time", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 4:
					func_235(uParam0, "pl_IG1_All_Of_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG1_All_Of_You", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 5:
					func_235(uParam0, "pl_IG1_This_Is_A_Law", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG1_This_Is_A_Law", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 6:
					func_235(uParam0, "pl_IG1_I_Hope_Youre_All", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG1_I_Hope_Youre_All", "s_IG1_Idle_Loop", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_242();
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 7:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39995);
					break;
				case 8:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39995);
					break;
				case 9:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.75f);
					func_124();
					func_245(uParam0, 40698);
					func_237(uParam0, 40737);
					func_239(uParam0, 39995);
					break;
				case 10:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.75f);
					func_124();
					func_245(uParam0, 40698);
					func_237(uParam0, 40737);
					func_239(uParam0, 39995);
					break;
				case 11:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					func_237(uParam0, 40849);
					break;
				case 12:
					func_235(uParam0, "Pl_IG1_Loop01", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "S_IG1_Loop01", "S_IG1_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39148);
					break;
				case 13:
					func_235(uParam0, "Pl_IG2_You_Tough_Guy", func_172(iVar0), func_173(iVar1), func_172(1), func_173(14), 0, "", 0, "b_breakout", 0, "S_IG2_You_Tough_Guy", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_237(uParam0, 40922);
					break;
				case 14:
					func_235(uParam0, "Pl_IG2_Here_In_Tumbleweed", func_172(iVar0), func_173(iVar1), func_172(1), func_173(15), 0, "", 0, "b_breakout", 0, "S_IG2_Here_In_Tumbleweed", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_237(uParam0, 40922);
					break;
				case 15:
					func_235(uParam0, "pl_IG2_Question", func_172(iVar0), func_173(iVar1), func_172(1), func_173(17), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG2_Question_Wait_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_237(uParam0, 41003);
					func_239(uParam0, 41038);
					break;
				case 16:
					func_235(uParam0, "Pl_IG2_Positive_Response", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_Positive_Response", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					break;
				case 17:
					func_235(uParam0, "Pl_IG2_Negative_Response", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_Negative_Response", "S_IG2_Negative_Response", 3, 0.92f);
					func_239(uParam0, 41380);
					break;
				case 18:
					func_235(uParam0, "Pl_IG2_You_Walk_Away", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_You_Walk_Away", "S_IG6_Loop01", 2, 1064514355 /* Float: 0.95f */);
					break;
				case 19:
					func_235(uParam0, "Pl_IG2_We_Are_A_Law", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_We_Are_A_Law", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 20:
					func_235(uParam0, "Pl_IG2_Together_We_Can", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_Together_We_Can", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 21:
					func_235(uParam0, "Pl_IG2_God_Expects", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_God_Expects", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_242();
					func_239(uParam0, 39826);
					break;
				case 22:
					func_235(uParam0, "Pl_IG2_This_Shall_Be", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_This_Shall_Be", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 23:
					func_235(uParam0, "Pl_IG2_I_Am_Watching_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG2_I_Am_Watching_You", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 24:
					func_235(uParam0, "pl_IG3_My_Authority_Is", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_My_Authority_Is", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_242();
					func_124();
					func_237(uParam0, 40922);
					break;
				case 25:
					func_235(uParam0, "pl_IG3_Remember_People", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG3_Remember_People", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 26:
					func_235(uParam0, "pl_IG3_This_Is_A_law", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG3_This_Is_A_law", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_240();
					break;
				case 27:
					func_235(uParam0, "pl_IG3_Let_Me_Tell_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_Let_Me_Tell_You", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 28:
					func_235(uParam0, "pl_IG3_I_Am_Not", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_I_Am_Not", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_239(uParam0, 39826);
					break;
				case 29:
					func_235(uParam0, "pl_IG3_Anyone_And_I", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_Anyone_And_I", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					iLocal_654++;
					func_240();
					func_242();
					break;
				case 30:
					func_235(uParam0, "pl_IG3_Whatever_The_Health", func_172(iVar0), func_173(iVar1), func_172(2), func_173(31), 0, "", 0, "b_breakout", 0, "s_IG3_Whatever_The_Health", "S_IG6_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 31:
					func_235(uParam0, "pl_IG3_Do_Not_Push", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG3_Do_Not_Push", "S_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 32:
					func_235(uParam0, "pl_IG4_No_Lingering", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_No_Lingering", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 33:
					func_235(uParam0, "pl_IG4_Get_The", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_Get_The", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 34:
					func_235(uParam0, "pl_IG4_Your_Starting", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_Your_Starting", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 35:
					func_235(uParam0, "pl_IG4_Dont_Take", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_Dont_Take", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41535);
					break;
				case 36:
					func_235(uParam0, "pl_IG4_What_Are_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "s_IG4_What_Are_You", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41535);
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 37:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(4), func_173(37), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.25f);
					func_124();
					func_239(uParam0, 39995);
					break;
				case 38:
					func_235(uParam0, "Pl_IG6_Loop01", func_172(iVar0), func_173(iVar1), func_172(4), func_173(37), 0, "", 0, "b_breakout", 0, "S_IG6_Loop01", "S_IG6_Loop01", 3, 0.75f);
					func_124();
					func_245(uParam0, 40698);
					func_237(uParam0, 40737);
					func_239(uParam0, 39995);
					break;
				case 39:
					func_235(uParam0, "Pl_IG5_Hey_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 40:
					func_235(uParam0, "Pl_IG5_Im_Watching_You_Tough_Guy", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 41:
					func_235(uParam0, "Pl_IG5_Im_Watching_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 42:
					func_235(uParam0, "Pl_IG5_I_Never_Sleep", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 43:
					func_235(uParam0, "Pl_IG5_Hey_You_Dont", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 44:
					func_235(uParam0, "Pl_IG5_As_Far_As", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 45:
					func_235(uParam0, "Pl_IG5_You_Your_Back", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 46:
					func_235(uParam0, "Pl_IG5_If_Youve_Come", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 47:
					func_235(uParam0, "Pl_IG5_I_Will_Give_You", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 48:
					func_235(uParam0, "Pl_IG5_Get_The_Hell", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 49:
					func_235(uParam0, "Pl_IG5_You_Get_Now", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 50:
					func_235(uParam0, "Pl_IG5_My_Reputation", func_172(iVar0), func_173(iVar1), func_172(1), func_173(9), 0, "", 0, "b_breakout", 0, "S_IG6_Rifle_Up_2_Two_Hands", "s_IG1_Loop_01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
			}
			break;
		case 5:
			switch (iVar1)
			{
				case 51:
					func_235(uParam0, "pl_IG6_Your_Dead", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Your_Dead", "s_IG6_Your_Dead", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 52:
					func_235(uParam0, "pl_IG6_I_Will_Strike", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_I_Will_Strike", "s_IG6_I_Will_Strike", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 53:
					func_235(uParam0, "pl_IG6_Now_Youll_Pay", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Now_Youll_Pay", "s_IG6_Now_Youll_Pay", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 54:
					func_235(uParam0, "pl_IG6_Your_Mine_Now", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Your_Mine_Now", "s_IG6_Your_Mine_Now", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 55:
					func_235(uParam0, "pl_IG6_You_Come_At", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_You_Come_At", "s_IG6_You_Come_At", 3, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41560);
					break;
				case 56:
					func_235(uParam0, "pl_IG6_Aim_2_Stand", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG6_Aim_2_Stand", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 57:
					func_235(uParam0, "pl_IG6_Rifle_Up_2_Two_Hands", func_172(iVar0), func_173(iVar1), func_172(1), func_173(8), 0, "", 0, "b_breakout", 0, "s_IG6_Rifle_Up_2_Two_Hands", "s_IG6_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					break;
				case 58:
					func_235(uParam0, "pl_IG6_Stand_2_Aim", func_172(iVar0), func_173(iVar1), -1, -1, 0, "", 0, "b_breakout", 0, "s_IG6_Stand_2_Aim", "s_IG6_Stand_2_Aim", 3, 1064514355 /* Float: 0.95f */);
					break;
				case 59:
					func_235(uParam0, "pl_IG6_Two_Hands_2_Rifle", func_172(iVar0), func_173(iVar1), func_172(1), func_173(7), 0, "", 0, "b_breakout", 0, "s_IG6_Two_Hands_2_Rifle", "s_IG1_Loop01", 2, 1064514355 /* Float: 0.95f */);
					func_124();
					func_239(uParam0, 41596);
					break;
			}
			break;
	}
	if (func_226(iParam1) && func_255(iParam2))
	{
		if (iVar0 != 5)
		{
			func_256(uParam0, func_172(1), func_173(7));
			if (!func_55(Local_14.f_193, 2))
			{
				iVar2 = func_257();
				if (iVar2 > 0)
				{
					bLocal_680 = true;
					func_258(uParam0, iVar2);
				}
				else if (Local_14.f_1 == 0)
				{
					bLocal_680 = false;
					func_259(uParam0, func_172(0), func_173(0));
				}
				else if (Local_14.f_1 == 1)
				{
					bLocal_680 = false;
					func_259(uParam0, func_172(1), func_173(13));
				}
				else
				{
					bLocal_680 = false;
					func_259(uParam0, func_172(2), func_173(24));
				}
			}
			if ((iVar1 == 0 || (iVar1 >= 13 && iVar1 <= 14)) || iVar1 == 24)
			{
				func_260(uParam0, func_172(1), func_173(18));
			}
		}
	}
	return 0;
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 256);
	}
	else
	{
		func_122(&(uParam0->f_1), 256);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_123(&(uParam0->f_1), 128);
	}
	else
	{
		func_122(&(uParam0->f_1), 128);
	}
}

void func_121(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_122(uParam0, 268435456);
	}
	else
	{
		func_123(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_122(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_123(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_122(uParam0, 536870912);
	}
	else
	{
		func_123(uParam0, 536870912);
	}
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_123(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_124()
{
	func_261(&iLocal_673);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_683))
		{
			func_262(&iLocal_683, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_684))
		{
			func_262(&iLocal_684, bParam0);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_683))
		{
			if (!TASK::_0xBEDBE39B5FD98FD6(iLocal_683) && !PED::IS_PED_RESPONDING_TO_THREAT(iLocal_683))
			{
				TASK::TASK_MOVE_IN_TRAFFIC(iLocal_683, -1082130432 /* Float: -1f */, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_683, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_683);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_684))
		{
			if (!TASK::_0xBEDBE39B5FD98FD6(iLocal_684) && !PED::IS_PED_RESPONDING_TO_THREAT(iLocal_684))
			{
				TASK::TASK_MOVE_IN_TRAFFIC(iLocal_684, -1082130432 /* Float: -1f */, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_684, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_684);
		}
		func_263();
	}
}

void func_126()
{
	func_264(&(Local_14.f_3), &(Local_14.f_41[0 /*59*/]), &(Local_14.f_41[0 /*59*/].f_21), 1, 1);
	func_264(&(Local_14.f_3), &(Local_14.f_41[1 /*59*/]), &(Local_14.f_41[1 /*59*/].f_21), 1, 1);
}

void func_127(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

bool func_128(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	if (!func_266(iParam0) && bParam1)
	{
		return false;
	}
	return func_267(iParam0, 1);
}

void func_129()
{
	int iVar0;

	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "SheriffBubble");
	PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_14.f_3, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(Local_14.f_3, true);
}

void func_130(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_265(iParam0))
	{
		return;
	}
	if (!func_267(iParam0, 1))
	{
		return;
	}
	if (!func_267(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_266(iParam0)) && func_268(iParam0))
	{
		return;
	}
	func_269(iParam0, 1);
	func_270(iParam0);
	if (func_272(func_271(iParam0)))
	{
		iVar0 = func_273(iParam0);
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
		func_269(iParam0, 16);
	}
	if (func_267(iParam0, 128) && !bParam3)
	{
		func_274(iParam0, 0);
	}
}

void func_131(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_275(&Global_0, 8);
	}
	if (!func_276() || func_215() != -1)
	{
		return;
	}
	func_275(&Global_0, 1);
}

void func_132()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

int func_133(int iParam0)
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

int func_134(int iParam0)
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

bool func_135(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_136(var uParam0)
{
	return func_135(*uParam0, 2);
}

float func_137()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

struct<2> func_138(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_139(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_142(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_277())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_277())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_277())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_277())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_277())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_277())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_277())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_278())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

bool func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_146(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_147(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_216(Global_1835011[iParam0 /*74*/].f_1);
}

int func_148(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_279(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_149(int iParam0)
{
	int iVar0;

	iVar0 = func_280();
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

bool func_150(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_281(iParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_151(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_282(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_283(iVar1, 0))
		{
			func_284(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return true;
	}
	return false;
}

int func_152(var uParam0)
{
	if (!func_58(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_136(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_204() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_153()
{
	return Global_1392040.f_6;
}

bool func_154()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_155(int iParam0)
{
	return false;
}

bool func_156(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_157(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_158(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_159(int iParam0)
{
	if (!func_158(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_160(var uParam0)
{
	func_99(uParam0, 0f);
}

int func_161(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_285(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_162(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (func_273(iParam1) == 0)
	{
		return false;
	}
	if (!func_68(*uParam0, 0))
	{
		*uParam0 = func_286(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			func_287(*uParam0, iParam6);
		}
		if (bParam5)
		{
			PERSCHAR::_0x59C7AD6FEA2AC449(func_273(iParam1), vParam2);
		}
		return true;
	}
	return false;
}

void func_163(int iParam0, int iParam1)
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

void func_164(int iParam0, int iParam1, int iParam2, char[4] cParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_142(iParam1))
	{
		return;
	}
	if (!func_288(iParam2))
	{
		return;
	}
	func_289(&(iParam0->f_41[iParam1 /*59*/].f_21[iParam2 /*17*/]), cParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		func_290(&(iParam0->f_41[iParam1 /*59*/]), iParam2, 1);
	}
}

int func_165(int iParam0, int iParam1, int iParam2)
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

void func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_64(iParam0, iParam1);
	}
	iParam0->f_41[iParam1 /*59*/].f_56 = iParam2;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	if (!func_142(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_57 = iParam2;
}

void func_168(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

float func_169(var uParam0)
{
	if (!func_58(uParam0))
	{
		return 0f;
	}
	if (func_136(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_137() - uParam0->f_1);
}

bool func_170(int iParam0, int iParam1)
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

void func_171()
{
	func_291(&(Local_14.f_205[0 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(&(Local_14.f_205[1 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "ARTHUR", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(&(Local_14.f_205[2 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(&(Local_14.f_205[3 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(&(Local_14.f_205[4 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_291(&(Local_14.f_205[5 /*36*/]), Local_14.f_3, "IG_SHERIFFFREEMAN", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 6)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_174(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_385 = iParam1;
	func_292(uParam0, 0, 1);
	if (bParam2)
	{
		func_293(uParam0);
	}
}

int func_175(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_294(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_295(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_160(&(iParam1->f_13));
		}
		if (func_296(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_297(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_175(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_84(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_298(*uParam0, 1, 1);
						}
					}
					else if (func_299(iParam1, 22))
					{
						func_298(*uParam0, 0, 1);
					}
				}
				if (func_300(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_301(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_302(iParam8);
					if (func_303(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_304(uParam3);
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
					func_305(iParam1, uParam3, fVar8);
					if (func_306(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_85(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_307(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_300(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_308(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_303(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_301(uParam0, func_300(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_302(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_85(uParam3, 0, 0, 1, 1);
					}
					func_309(iParam1, 1);
				}
				func_305(iParam1, uParam3, fVar8);
				if (func_307(uParam0, iParam1, fParam4, bVar6))
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
			func_310(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_176(int iParam0)
{
	if (!(VOLUME::DOES_VOLUME_EXIST(iParam0->f_161) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_161, true, 0)))
	{
		func_311(&Local_14, 0, 0);
		return false;
	}
	if (((((((func_55(Local_14.f_193, 32) && func_55(Local_14.f_193, 65536)) && !func_55(Local_14.f_193, 64)) && !func_55(Local_14.f_193, 128)) && !func_55(Local_14.f_193, 2048)) && (func_55(Local_14.f_193, 524288) || func_54(&Local_14) > 2.2f)) && !func_150(&(Local_14.f_3), &iLocal_698, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) && !func_312(&(Local_14.f_3), &iLocal_699, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */))
	{
		func_311(&Local_14, 0, 1);
		return true;
	}
	else
	{
		func_311(&Local_14, 0, 0);
	}
	return false;
}

bool func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_142(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1 /*59*/].f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1 /*59*/].f_58;
	if (!func_288(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

void func_178(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_313())
		{
			func_314(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
		else
		{
			func_314(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == 1)
	{
		if (func_313())
		{
			if (Local_14.f_1 == 0)
			{
				func_314(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else if (Local_14.f_1 == 1)
			{
				func_314(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 10, 1);
			}
			else if (Local_14.f_1 == 2)
			{
				func_314(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 20, 1);
			}
		}
		else
		{
			func_314(Global_35, "INSULT_MALE_CONV_PART2", -417894478, Local_14.f_3, 1, 0, 7, 1);
		}
	}
}

char* func_179(var uParam0)
{
	return uParam0;
}

bool func_180(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_182(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_315(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_181(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_316(iParam0, 13))
	{
		func_317(iParam0, 0);
	}
	else
	{
		func_318(iParam0, 0);
	}
	if (func_182(iParam0->f_6))
	{
		if (bParam2)
		{
			func_183(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_182(int iParam0)
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

void func_183(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_182(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_319(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_320(iVar0);
	*uParam0 = 0;
}

void func_184(var uParam0, bool bParam1, int iParam2)
{
	func_321(iParam2);
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
		uParam0->f_13 = func_322(0);
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
							func_122(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_323(1))
						{
							func_122(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_323(1) || *uParam0 & 8192 != 0))
				{
					func_123(uParam0, 33554432);
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
			if (func_324(uParam0))
			{
				uParam0->f_15 = func_204();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_204() - uParam0->f_15) > 500)
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
	func_325(uParam0);
}

bool func_185(int iParam0, var uParam1)
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
			if (!func_326(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_327(iParam0, iVar2) <= func_328(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_186(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_329(iParam2, 1, 1, 1, 0))
	{
		func_122(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_330(uParam1, 1);
	func_331();
}

bool func_187(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_332(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_333(uParam1);
			if (func_334(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_335(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_330(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_330(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_188(int iParam0, int iParam1, var uParam2)
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
	if (func_336(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_333(uParam2);
		if (func_334(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_335(uParam2)
				{
					func_330(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_189(int iParam0, var uParam1)
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
	if (func_326(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_335(uParam1)
		{
			fVar3 = func_333(uParam1);
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

int func_190(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_337(bParam1, bParam2, bParam3);
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

bool func_191(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_204();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_192(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_338(uParam2);
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
			if (func_200(uParam2, iParam1))
			{
				func_330(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_193(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_339(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_200(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_330(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_194(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_340(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_330(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_330(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_341(iParam1, vVar0, vVar4))
					{
						func_330(uParam2, 1);
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
					func_330(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_341(iParam1, vVar0, vVar7))
					{
						func_330(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_195(int iParam0, var uParam1)
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
		if (!func_326(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_342(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_343(Global_1935630.f_34[iVar0]))
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
			if (func_344(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_345(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_346(uParam1, iParam0, fVar1, iVar0))
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

bool func_196(int iParam0, var uParam1)
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

bool func_197(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_204();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_198(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_347(iVar0, &iVar2))
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
	if (func_348(iVar0, iParam0))
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

int func_199(var uParam0, int iParam1)
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

bool func_200(var uParam0, int iParam1)
{
	if (func_349(uParam0))
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

bool func_201(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_350(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_202()
{
}

bool func_203(var uParam0, int iParam1)
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
		if (func_351(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_204();
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
						if (func_66(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_204();
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

int func_204()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_205()
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
	if ((func_204() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_206(var uParam0, int iParam1)
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
	fVar0 = func_328(uParam0);
	if (uParam0->f_12 > func_352(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_353(iParam1);
	iVar1 = func_354(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_207(int iParam0, int iParam1, var uParam2)
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
	return func_355(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_208(int iParam0, var uParam1)
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
		if (func_356(iParam0, uParam1, 1))
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
					if (!func_357(uParam1, iParam0))
					{
						if (func_66(iVar4, Global_36, 1) < 7f)
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

bool func_209(int iParam0, var uParam1)
{
	if (!func_358(0))
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

bool func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_204();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_211(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_212(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_204();
	}
	else if (func_204() - uParam1->f_4) > func_359(uParam1)
	{
		return func_360(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_213(var uParam0, int iParam1)
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

Vector3 func_214(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_215()
{
	return Global_1572887.f_12;
}

bool func_216(int iParam0)
{
	int iVar0;

	iVar0 = func_361(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_219(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
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
				if (func_362(iVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(iVar1, "bIgnoreThisPed"))
				{
					if (!func_363(iVar1, uParam2))
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

void func_220(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_364(iParam3);
	if (fParam4 == 0f)
	{
		if (func_98(iParam0, Global_35, 15f, 1))
		{
			if (!func_103(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_106(uParam1, iParam2);
				}
			}
		}
		else if (func_103(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_141(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_103(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_106(uParam1, iParam2);
			}
		}
	}
	else if (func_103(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_141(uParam1, iParam2);
	}
}

int func_221()
{
	struct<6> Var0;
	struct<6> Var6;

	if (iLocal_688 >= 2)
	{
		return 1;
	}
	if (iLocal_688 == 0)
	{
		if (func_365())
		{
			Var0 = { func_366(1) };
			vLocal_689 = { Var0.f_1 };
			PED::SET_PED_CONFIG_FLAG(iLocal_683, 130, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_683, Var0, Var0.f_1, Var0.f_4, BUILTIN::FLOOR((Var0.f_5 * 1000f)), true, false, 0, -1f, false);
			func_160(&uLocal_685);
			iLocal_688++;
		}
	}
	else if (func_58(&uLocal_685) && func_59(&uLocal_685) >= 5f)
	{
		if (func_367())
		{
			func_72(&uLocal_685);
			Var6 = { func_366(0) };
			vLocal_692 = { Var6.f_1 };
			PED::SET_PED_CONFIG_FLAG(iLocal_684, 130, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_684, Var6, Var6.f_1, Var6.f_4, BUILTIN::FLOOR((Var6.f_5 * 1000f)), true, false, 0, -1f, false);
			iLocal_688++;
		}
	}
	return 0;
}

void func_222()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_683))
	{
		if (((func_368(iLocal_683, vLocal_689, 9f, 1, 1) && !TASK::_0xBEDBE39B5FD98FD6(iLocal_683)) && !PED::IS_PED_RESPONDING_TO_THREAT(iLocal_683)) && func_312(&(Local_14.f_3), &iLocal_699, 2.5f, 2.5f))
		{
			TASK::CLEAR_PED_TASKS(iLocal_683, true, false);
			TASK::TASK_MOVE_IN_TRAFFIC(iLocal_683, -1082130432 /* Float: -1f */, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_683, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_683);
		}
		else if (((!func_170(iLocal_683, -1098463898) || TASK::_0xBEDBE39B5FD98FD6(iLocal_683)) || PED::IS_PED_RESPONDING_TO_THREAT(iLocal_683)) || func_368(iLocal_683, vLocal_689, 1.5f, 1, 1))
		{
			PED::SET_PED_KEEP_TASK(iLocal_683, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_683);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_684))
	{
		if (((func_368(iLocal_684, vLocal_692, 9f, 1, 1) && !TASK::_0xBEDBE39B5FD98FD6(iLocal_684)) && !PED::IS_PED_RESPONDING_TO_THREAT(iLocal_684)) && func_312(&(Local_14.f_3), &iLocal_699, 2.5f, 2.5f))
		{
			TASK::CLEAR_PED_TASKS(iLocal_684, true, false);
			TASK::TASK_MOVE_IN_TRAFFIC(iLocal_684, -1082130432 /* Float: -1f */, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_684, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_684);
		}
		else if (((!func_170(iLocal_684, -1098463898) || TASK::_0xBEDBE39B5FD98FD6(iLocal_684)) || PED::IS_PED_RESPONDING_TO_THREAT(iLocal_684)) || func_368(iLocal_684, vLocal_692, 1.5f, 1, 1))
		{
			PED::SET_PED_KEEP_TASK(iLocal_684, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_684);
		}
	}
}

int func_223(int iParam0)
{
	switch (iParam0->f_205.f_385)
	{
		case 1:
			return iParam0->f_205.f_217.f_1;
		case 2:
			return iParam0->f_205.f_273.f_1;
		case 3:
			return iParam0->f_205.f_301.f_1;
		case 4:
			return iParam0->f_205.f_329.f_1;
	}
	return -1;
}

bool func_224(var uParam0)
{
	if (((((func_55(*uParam0, 2) || func_55(*uParam0, 4)) || func_55(*uParam0, 16)) || func_55(*uParam0, 128)) || func_55(*uParam0, 1024)) || func_55(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_386)
	{
		case 0:
			func_292(uParam0, func_369(uParam0, uParam1), 1);
			break;
		case 1:
			func_292(uParam0, func_370(uParam0, uParam1), 1);
			break;
		case 2:
			func_292(uParam0, func_371(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_372(uParam0, uParam1))
			{
				func_292(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_373(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 2);
				}
			}
			else
			{
				func_292(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_373(uParam0, 4))
			{
				if (func_375(uParam0, uParam1, iParam2))
				{
					func_374(uParam0, 4);
				}
			}
			if (!func_373(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 8);
				}
			}
			if (func_373(uParam0, 4) && func_373(uParam0, 8))
			{
				func_292(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_373(uParam0, 16))
			{
				if (func_376(uParam0, uParam1))
				{
					func_374(uParam0, 16);
				}
			}
			if (!func_373(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_374(uParam0, 32);
				}
			}
			if (func_373(uParam0, 16) && func_373(uParam0, 32))
			{
				func_292(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_226(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return false;
	}
	return true;
}

void func_227(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

void func_228(var uParam0, char* sParam1, vector3 vParam2, vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!MISC::IS_STRING_NULL(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 };
	uParam0->f_28 = { vParam5 };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

int func_229()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_231(int iParam0)
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

int func_232(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_377(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_229())
	{
		return -1;
	}
	iVar0 = func_230(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_378(iVar1, 0);
	func_379(iVar1, 0);
	func_380(iVar1, 0);
	func_381(iVar1, 0);
	func_382(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_383(iVar1, iParam4);
	}
	return iVar1;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 6)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 60)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_235(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_2.f_1 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_236(var uParam0)
{
	if (func_373(&(Local_14.f_205), 4))
	{
		func_62(&(Local_14.f_193), 32);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
	{
		func_17(&(Local_14.f_205), 1, 0);
		func_61(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

void func_237(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

int func_238(var uParam0)
{
	if (!func_55(Local_14.f_193, 2048))
	{
		func_63(&Local_14, 1);
	}
	if (!func_55(Local_14.f_193, 2048))
	{
		func_61(&(Local_14.f_193), 32);
		func_61(&(Local_14.f_193), 65536);
	}
	if (!func_58(&uLocal_650))
	{
		func_160(&uLocal_650);
		return 0;
	}
	if (!func_55(Local_14.f_193, 2048))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
		{
			func_384(uParam0, func_172(1), func_173(18));
			func_61(&(Local_14.f_193), 2048);
			func_62(&(Local_14.f_193), 32);
			bLocal_676 = true;
			func_242();
			return 1;
		}
		else if (func_55(Local_14.f_193, 64))
		{
			func_384(uParam0, func_172(1), func_173(7));
			func_61(&(Local_14.f_193), 2048);
			func_242();
			if (func_313())
			{
				func_314(Global_35, "GOT_MY_EYE_ON_YOU_POS", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 3, 1);
			}
			else
			{
				func_314(Global_35, "PLAYER_SURRENDER_AGAIN_NEAR", -417894478, Local_14.f_3, 1, "ARTHUR", 4, 1);
			}
			func_62(&(Local_14.f_193), 32);
			bLocal_676 = true;
		}
		else if (func_55(Local_14.f_193, 128))
		{
			func_384(uParam0, func_172(3), func_173(35));
			func_61(&(Local_14.f_193), 2048);
			func_242();
			if (func_313())
			{
				func_314(Global_35, "GOT_MY_EYE_ON_YOU_NEG", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_314(Global_35, "BUMP_MALE", -417894478, Local_14.f_3, 1, "ARTHUR", 7, 1);
			}
			func_62(&(Local_14.f_193), 32);
			bLocal_676 = true;
		}
		else if (func_59(&uLocal_650) >= 8f)
		{
			func_62(&(Local_14.f_193), 32);
			bLocal_676 = true;
			func_384(uParam0, func_172(3), func_173(35));
			func_61(&(Local_14.f_193), 2048);
			func_242();
			if (func_313())
			{
				func_314(Global_35, "GOT_MY_EYE_ON_YOU_NEG", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_314(Global_35, "BUMP_MALE", -417894478, Local_14.f_3, 1, "ARTHUR", 7, 1);
			}
		}
	}
	else if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

void func_240()
{
	if ((iLocal_673 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3)) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		iLocal_673 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(GET_HASH_KEY("EVENT_SHOCKING_BEAT_INTERESTING_NEW"), Local_14.f_3, 0f, 30f, 30f, -1f, -1f, 180f, false, false, 4, -1);
	}
}

int func_241(var uParam0)
{
	if (func_385())
	{
		func_384(uParam0, func_172(1), func_173(11));
		return 1;
	}
	if (func_386(uParam0, 1))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_645, true, 0))
	{
		func_384(uParam0, func_172(1), func_173(9));
	}
	return 1;
}

void func_242()
{
	if (!func_55(Local_14.f_193, 131072))
	{
		if (Local_14.f_1 == 0)
		{
			func_387(22, 1);
		}
		else if (Local_14.f_1 == 1)
		{
			func_387(22, 2);
		}
		else
		{
			func_387(22, 12);
		}
		func_61(&(Local_14.f_193), 131072);
		func_388(22);
	}
}

int func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_16(&(Local_14.f_205), 4))
	{
		return 1;
	}
	if (((Local_14.f_622 && func_389(&(Local_14.f_601))) && !func_224(&(Local_14.f_601))) && !func_16(&(Local_14.f_205), 4))
	{
		func_61(&(Local_14.f_193), 8192);
		func_384(uParam0, func_172(-1), func_173(-1));
		func_390(-1);
		return 1;
	}
	if (func_385())
	{
		func_384(uParam0, func_172(1), func_173(11));
		func_390(11);
		return 1;
	}
	if (!func_55(Local_14.f_193, 8) && !(func_54(&Local_14) <= 2.2f && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0)))
	{
		func_391(iLocal_654, &iVar0, &iVar1);
		if (iVar0 == -1 || iVar1 == -1)
		{
			func_242();
			func_61(&(Local_14.f_193), 8);
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_645, true, 0) && !func_57(Global_35, 1))
		{
			func_384(uParam0, func_172(iVar0), func_173(iVar1));
			func_390(iVar1);
			return 1;
		}
	}
	if (func_55(Local_14.f_193, 2) && func_55(Local_14.f_193, 8))
	{
		if (!func_58(&uLocal_662))
		{
			func_160(&uLocal_662);
		}
		if (func_392(&uLocal_662, 56f))
		{
			func_61(&(Local_14.f_193), 8192);
			func_384(uParam0, func_172(-1), func_173(-1));
			func_390(-1);
			func_242();
			return 1;
		}
	}
	if (func_386(uParam0, 0))
	{
		func_390(func_234(uParam0->f_2.f_1));
		return 1;
	}
	if (!func_55(Local_14.f_193, 8) && func_54(&Local_14) > 2.2f)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 100);
		if ((iVar2 >= 35 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_646, true, 0)) && !func_57(Global_35, 1))
		{
			iVar2 = func_393(0, 4, iLocal_648);
			iLocal_648 = iVar2;
			switch (iVar2)
			{
				case 0:
					func_384(uParam0, func_172(0), func_173(1));
					func_390(1);
					return 1;
				case 1:
					func_384(uParam0, func_172(0), func_173(2));
					func_390(2);
					return 1;
				case 2:
					func_384(uParam0, func_172(0), func_173(3));
					func_390(3);
					return 1;
				case 3:
					func_384(uParam0, func_172(2), func_173(25));
					func_390(25);
					return 1;
				case 4:
					func_384(uParam0, func_172(2), func_173(26));
					func_390(26);
					return 1;
			}
		}
	}
	return 0;
}

int func_244(var uParam0)
{
	func_394(1);
	func_72(&uLocal_669);
	func_395();
	return 1;
}

void func_245(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_246(var uParam0)
{
	if (!func_58(&uLocal_669))
	{
		func_160(&uLocal_669);
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return 0;
	}
	if ((func_396(&Local_14) && (func_59(&uLocal_669) >= fLocal_672 && func_397())) || func_398(&Local_14))
	{
		func_72(&uLocal_669);
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (!bLocal_675 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		bLocal_674 = true;
		func_399();
		bLocal_675 = true;
	}
	else if (bLocal_675 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		bLocal_675 = false;
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (Local_14.f_205.f_386 == 5)
	{
		if (func_373(&(Local_14.f_205), 4))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
	{
		func_17(&(Local_14.f_205), 1, 0);
		func_61(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_249(var uParam0)
{
	if (func_373(&(Local_14.f_205), 4))
	{
		func_62(&(Local_14.f_193), 32);
		return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	if (!func_55(Local_14.f_193, 2048))
	{
		func_63(&Local_14, 1);
		func_61(&(Local_14.f_193), 32);
		func_61(&(Local_14.f_193), 65536);
	}
	if (!func_58(&uLocal_650))
	{
		func_160(&uLocal_650);
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0))
	{
		func_384(uParam0, func_172(1), func_173(18));
		func_61(&(Local_14.f_193), 2048);
		func_62(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_242();
		return 1;
	}
	else if (func_55(Local_14.f_193, 64))
	{
		func_384(uParam0, func_172(1), func_173(16));
		func_61(&(Local_14.f_193), 2048);
		func_62(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_242();
		return 1;
	}
	else if (func_55(Local_14.f_193, 128))
	{
		func_384(uParam0, func_172(1), func_173(17));
		func_61(&(Local_14.f_193), 2048);
		func_62(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_242();
		return 1;
	}
	else if (func_59(&uLocal_650) >= 8f)
	{
		func_62(&(Local_14.f_193), 32);
		bLocal_676 = true;
		func_384(uParam0, func_172(1), func_173(16));
		func_61(&(Local_14.f_193), 2048);
		func_242();
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			func_384(uParam0, func_172(5), func_173(51));
			break;
		case 1:
			func_384(uParam0, func_172(5), func_173(52));
			break;
		case 2:
			func_384(uParam0, func_172(5), func_173(53));
			break;
		case 3:
			func_384(uParam0, func_172(5), func_173(54));
			break;
		case 4:
			func_384(uParam0, func_172(5), func_173(55));
			break;
	}
	return 1;
}

int func_252(var uParam0)
{
	if (iLocal_655 >= 3)
	{
		return func_251(uParam0);
	}
	return 1;
}

int func_253(var uParam0)
{
	func_61(&(Local_14.f_193), 512);
	func_384(uParam0, func_172(-1), func_173(-1));
	return 1;
}

int func_254(var uParam0)
{
	if (func_55(Local_14.f_193, 33554432))
	{
		func_243(uParam0);
		func_62(&(Local_14.f_193), 33554432);
	}
	return 1;
}

bool func_255(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 100)
	{
		return false;
	}
	return true;
}

void func_256(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_10 = iParam1;
	uParam0->f_10.f_1 = iParam2;
}

int func_257()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	int iVar19;

	iVar0 = 1200;
	iVar19 = 0;
	while (iVar19 < 24)
	{
		if (LAW::_0xB527099D1E1EED49(PLAYER::PLAYER_ID(), iVar19, &Var2))
		{
			if (func_400(115, 1, 1) != Var2.f_7)
			{
			}
			else
			{
				if (Var2.f_8 < iVar0)
				{
					if (LAW::_0xDAEFDFDB2AEECE37(Var2, 0) == 2)
					{
						iVar1 += 3;
					}
					else if (LAW::_0xDAEFDFDB2AEECE37(Var2, 0) == 1)
					{
						iVar1 += 2;
					}
					else
					{
						iVar1++;
					}
				}
				Jump @115; //curOff = 108
				iVar19 = 24;
			}
			iVar19++;
			if (iVar1 >= 6)
			{
				return 3;
			}
			else if (iVar1 >= 4)
			{
				return 2;
			}
			else if (iVar1 >= 2)
			{
				return 1;
			}
			return 0;
		}
	}
}

int func_258(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam1)
	{
		case 1:
			iVar1 = func_97();
			iVar2 = func_146(iVar1);
			if (iVar2 <= 5 || iVar2 >= 22)
			{
				func_259(uParam0, func_172(4), func_173(42));
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar0)
				{
					case 0:
						func_259(uParam0, func_172(4), func_173(39));
						break;
					case 1:
						func_259(uParam0, func_172(4), func_173(40));
						break;
					case 2:
						func_259(uParam0, func_172(4), func_173(41));
						break;
				}
			}
			break;
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					func_259(uParam0, func_172(4), func_173(43));
					break;
				case 1:
					func_259(uParam0, func_172(4), func_173(44));
					break;
				case 2:
					func_259(uParam0, func_172(4), func_173(45));
					break;
				case 3:
					func_259(uParam0, func_172(4), func_173(46));
					break;
			}
			break;
		case 3:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					func_259(uParam0, func_172(4), func_173(47));
					break;
				case 1:
					func_259(uParam0, func_172(4), func_173(48));
					break;
				case 2:
					func_259(uParam0, func_172(4), func_173(49));
					break;
				case 3:
					func_259(uParam0, func_172(4), func_173(50));
					break;
			}
			break;
	}
	return 1;
}

void func_259(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_8.f_1 = iParam2;
}

void func_260(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4 = iParam1;
	uParam0->f_4.f_1 = iParam2;
}

void func_261(int iParam0)
{
	if (*iParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*iParam0);
		*iParam0 = 0;
	}
}

void func_262(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_263()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	vVar7 = { func_65(Local_14, Local_14.f_1, 0) };
	iVar4 = ENTITY::_0x59B57C4B06531E1E(vVar7, 8f, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0);
		iVar2 = iVar1;
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if ((((PED::IS_PED_HUMAN(iVar2) && !PED::IS_PED_A_PLAYER(iVar2)) && iVar2 != Local_14.f_3) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true)) && ((((PED::IS_PED_USING_SCENARIO_HASH(iVar2, GET_HASH_KEY("WORLD_HUMAN_FAN")) || PED::IS_PED_USING_SCENARIO_HASH(iVar2, GET_HASH_KEY("WORLD_HUMAN_SMOKE"))) || PED::IS_PED_USING_SCENARIO_HASH(iVar2, GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC"))) || PED::IS_PED_USING_SCENARIO_HASH(iVar2, GET_HASH_KEY("WORLD_HUMAN_STAND_WAITING"))) || func_170(iVar2, -1098463898)))
			{
				if (!TASK::_0xBEDBE39B5FD98FD6(iVar2) && !PED::IS_PED_RESPONDING_TO_THREAT(iVar2))
				{
					TASK::TASK_MOVE_IN_TRAFFIC(iVar2, -1082130432 /* Float: -1f */, 0, 0);
					iVar6++;
				}
			}
			iVar5++;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_264(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_84(uParam0);
		func_310(iParam1, uParam2);
	}
	func_401(*uParam0, 1, bParam4);
}

bool func_265(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_266(int iParam0)
{
	if (!func_265(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_267(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

bool func_268(int iParam0)
{
	if (!func_265(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_269(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_265(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_270(int iParam0)
{
	int iVar0;

	if (!func_265(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_271(int iParam0)
{
	if (!func_265(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_272(int iParam0)
{
	return iParam0 != 0;
}

int func_273(int iParam0)
{
	if (!func_265(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_274(int iParam0, bool bParam1)
{
	if (!func_265(iParam0))
	{
		return 0;
	}
	if (!func_267(iParam0, 2))
	{
		return 0;
	}
	if (func_271(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_273(iParam0)))
	{
		return 1;
	}
	if (func_267(iParam0, 1) && !bParam1)
	{
		func_403(iParam0, 128);
		return 1;
	}
	func_269(iParam0, 129);
	func_270(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_273(iParam0));
	func_404(iParam0, 0);
	return 1;
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_276()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_277()
{
	return Global_1897952.f_41;
}

int func_278()
{
	return Global_1894899.f_2;
}

int func_279(int iParam0)
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
		iVar0 = func_405(iParam0);
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

int func_280()
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

bool func_281(int iParam0, vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, *iParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*iParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

bool func_282(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *iParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_406(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*iParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

bool func_283(int iParam0, bool bParam1)
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

void func_284(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_170(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

int func_285(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_407(vParam0))
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
		if (func_408(vParam0))
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
	func_409(iVar0, bParam8);
	return iVar0;
}

int func_286(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_410(iParam0, 1))
	{
		return 0;
	}
	if (func_272(func_271(iParam0)))
	{
		iVar1 = func_273(iParam0);
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
	if ((bParam4 && !func_266(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_403(iParam0, 1);
	func_411(iParam0);
	if (bParam3)
	{
		func_403(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_287(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_412(iParam0, iParam1))
		{
			if (func_413(iParam0, iParam1))
			{
				if (func_414(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_415(iParam0);
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

bool func_288(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_289(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_182(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_416(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_417(iParam0->f_6, iParam0->f_5, 0);
			}
			func_418(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_419(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_290(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_420(iParam0, 5);
		if (bParam2)
		{
			func_420(iParam0, 6);
		}
		else
		{
			func_309(iParam0, 6);
		}
	}
}

void func_291(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (func_313())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = iParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = iParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_292(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_386 = iParam1;
	if (bParam2)
	{
		func_421(uParam0);
	}
}

void func_293(var uParam0)
{
	uParam0->f_388 = 0;
}

void func_294(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_295(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_296(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_422(iParam0, iParam1))
		{
			if (!func_156(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_85(uParam2, 0, 0, 1, 0);
				func_122(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_156(iParam1->f_10, 1))
		{
			func_423(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_123(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_297(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_156(iParam4, 32);
		func_424(iParam1, uParam2, 0);
		iVar5 = func_425(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_85(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_156(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_156(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_156(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_156(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_156(iParam4, 8388608) || func_156(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_156(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_156(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_299(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_299(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_156(iParam4, 67108864))
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
				iParam6 = func_426(uParam0);
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
			if (func_156(iParam4, 268435456))
			{
				iVar8 = func_427(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_428(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_299(iParam1, 23))
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
			if (func_156(iParam4, 2) || func_156(iParam4, 16))
			{
				func_298(*uParam0, 1, 1);
			}
			else
			{
				func_298(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_298(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_299(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_300(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_429(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_301(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_430(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_156(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_302(int iParam0)
{
	if (func_156(iParam0, 4))
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
	if (func_156(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_156(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_303(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_431(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_432(Global_35)) || func_433(Global_35)) || func_434(Global_35));
	fVar12 = -1f;
	if (func_58(&(iParam1->f_13)))
	{
		fVar12 = func_59(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_182((uParam4[iVar0 /*17*/])->f_6);
		func_435(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_436(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_437(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_85(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_438(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_424(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_439(iParam1, fParam6, iParam1->f_9))
					{
						func_160(&(iParam1->f_18));
						if (bVar6)
						{
							func_438(uParam4, 0, 0);
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
		func_440(iParam1, fParam2);
	}
	return bVar5;
}

void func_304(var uParam0)
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

void func_305(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_441(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_440(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_306(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_442(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_420(iParam1, 0);
				func_424(iParam1, uParam2, func_299(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_307(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_160(&(iParam1->f_18));
			return false;
		}
		else if (func_58(&(iParam1->f_18)))
		{
			func_72(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_58(&(iParam1->f_18)))
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
	return func_392(&(iParam1->f_18), fParam2);
	return true;
}

void func_308(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_435(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_309(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_310(int* iParam0, var uParam1)
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
	func_424(iParam0, uParam1, 1);
	func_85(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	if (!func_142(iParam1))
	{
		return;
	}
	if (func_443(iParam0) == iParam1)
	{
		if (bParam2)
		{
			if (func_444(iParam0, iParam1) != 1)
			{
				func_166(iParam0, iParam1, 1, 1);
			}
		}
		else if (func_444(&Local_14, iParam1) != func_165(3, 0, 0))
		{
			func_166(&Local_14, iParam1, func_165(3, 0, 0), 1);
		}
	}
}

bool func_312(var uParam0, int iParam1, float fParam2, int iParam3)
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
	if (func_282(iParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_313()
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

bool func_314(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_445(iParam0, &Var0);
}

bool func_315(int iParam0, bool bParam1)
{
	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	return !func_446(iParam0, 4);
}

bool func_316(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_317(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_318(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_319(int iParam0)
{
	return iParam0;
}

void func_320(int iParam0)
{
	if (!func_447(iParam0))
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

void func_321(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_448();
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
			func_449(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_322(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_323(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_450(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_324(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_215() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_451(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_451(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_354(iVar0) == -1)
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

void func_325(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_452(uParam0);
	}
}

bool func_326(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_354(iParam2);
	}
	else
	{
		iVar1 = func_353(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_354(iParam0);
	}
	else
	{
		iVar0 = func_353(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_156(*uParam1, 8388608))
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

float func_327(int iParam0, int iParam1)
{
	return func_350(iParam0, iParam1, 1, 1);
}

float func_328(var uParam0)
{
	return uParam0->f_26;
}

bool func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_330(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_122(uParam0, 134217728);
	}
	else
	{
		func_123(uParam0, 134217728);
	}
}

void func_331()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_332(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_350(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_453(iVar0, 0)))
		{
			if (func_454(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_333(var uParam0)
{
	return uParam0->f_17;
}

bool func_334(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_156(*uParam0, 4194304))
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

int func_335(var uParam0)
{
	return uParam0->f_18;
}

bool func_336(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_453(iVar0, 0)))
		{
			if (func_455(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_337(bool bParam0, bool bParam1, bool bParam2)
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

float func_338(var uParam0)
{
	return uParam0->f_23;
}

int func_339(var uParam0)
{
	return uParam0->f_21;
}

int func_340(var uParam0)
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

bool func_341(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_456(iParam0, vParam4, 0.5f))
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

int func_342(int iParam0)
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
	if (func_457(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_343(int iParam0)
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

bool func_344(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_458(iParam1))
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

bool func_345(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_458(iParam1))
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

bool func_346(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_458(iParam1))
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

bool func_347(int iParam0, int iParam1)
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

bool func_348(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_459(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
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

bool func_349(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_350(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_351(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_66(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_352(var uParam0)
{
	return uParam0->f_24;
}

int func_353(int iParam0)
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

int func_354(int iParam0)
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

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_347(Global_35, &iVar1))
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
		fVar2 = func_350(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_350(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_356(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_450(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_357(uParam1, iVar0))
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
				if (!bParam2 || !func_357(uParam1, iVar1))
				{
					if (func_66(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_357(var uParam0, int iParam1)
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

bool func_358(int iParam0)
{
	if (func_313())
	{
		return false;
	}
	return func_460(Global_1347702[58 /*49*/].f_15, 1);
}

int func_359(var uParam0)
{
	return uParam0->f_20;
}

int func_360(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_361(int iParam0)
{
	if (!func_461(iParam0))
	{
		return -1;
	}
	return func_405(iParam0);
}

bool func_362(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_462(iParam0))
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
		if (func_463(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_363(int iParam0, var uParam1)
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

char* func_364(int iParam0)
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

bool func_365()
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { func_464() };
	if (!func_407(vVar0))
	{
		func_465(&iLocal_683, iLocal_682, &uVar3, vVar0, 0f, 1, 0, 1);
		return true;
	}
	return false;
}

struct<6> func_366(bool bParam0)
{
	struct<6> Var0;

	if (bParam0)
	{
		if (Local_14.f_1 == 0)
		{
			Var0 = GET_HASH_KEY("WORLD_HUMAN_SMOKE");
			Var0.f_1 = { -5508.813f, -2931.202f, -3.165f };
			Var0.f_4 = 41.901f;
			Var0.f_5 = 120f;
		}
		else if (Local_14.f_1 == 1)
		{
			Var0 = GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC");
			Var0.f_1 = { -5494.188f, -2953.978f, -2.872f };
			Var0.f_4 = 154.544f;
			Var0.f_5 = 120f;
		}
		else
		{
			Var0 = GET_HASH_KEY("WORLD_HUMAN_STARE_STOIC");
			Var0.f_1 = { -5496.852f, -2939.842f, -2.247f };
			Var0.f_4 = -78.588f;
			Var0.f_5 = 120f;
		}
	}
	else if (Local_14.f_1 == 0)
	{
		Var0 = GET_HASH_KEY("WORLD_HUMAN_FAN");
		Var0.f_1 = { -5511.769f, -2931.98f, -3.242f };
		Var0.f_4 = -1.995f;
		Var0.f_5 = 100f;
	}
	else if (Local_14.f_1 == 1)
	{
		Var0 = GET_HASH_KEY("WORLD_HUMAN_STAND_WAITING");
		Var0.f_1 = { -5496.233f, -2954.071f, -2.819f };
		Var0.f_4 = 167.403f;
		Var0.f_5 = 100f;
	}
	else
	{
		Var0 = GET_HASH_KEY("WORLD_HUMAN_FAN");
		Var0.f_1 = { -5495.7f, -2941.675f, -2.211f };
		Var0.f_4 = -48.996f;
		Var0.f_5 = 100f;
	}
	return Var0;
}

bool func_367()
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { func_466() };
	if (!func_407(vVar0))
	{
		func_465(&iLocal_684, iLocal_681, &uVar3, vVar0, 0f, 2, 0, 1);
		return true;
	}
	return false;
}

bool func_368(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_467(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_369(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	uParam1->f_27 = 0;
	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			func_470(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			func_470(uParam0[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_370(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_371(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_468(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		func_471(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_372(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_468(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		func_472(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

bool func_373(var uParam0, int iParam1)
{
	return func_55(uParam0->f_387, iParam1);
}

void func_374(var uParam0, int iParam1)
{
	func_61(&(uParam0->f_387), iParam1);
}

bool func_375(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = *uParam1;
	if (func_468(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_473(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_473(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_389 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_473(uParam0, uParam1);
				return true;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					func_473(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (func_474(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			func_473(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true)) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_0x34A0671BE613D3D0((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_376(var uParam0, var uParam1)
{
	func_475(uParam1, &(uParam0->f_245));
	return true;
}

bool func_377(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_378(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_476(iParam0);
	}
	else
	{
		func_477(iParam0, iParam1);
	}
	func_478();
}

void func_379(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_380(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_381(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_382(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_383(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

void func_384(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	uParam0->f_2.f_1 = iParam2;
}

bool func_385()
{
	if (!bLocal_674)
	{
		if (func_54(&Local_14) <= 15f && PED::IS_PED_FACING_PED(Local_14.f_3, Global_35, 120f))
		{
			if (func_479())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_386(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_643, true, 0) && !func_57(Global_35, 1))
	{
		if ((func_55(Local_14.f_193, 2) && func_55(Local_14.f_193, 8)) || func_54(&Local_14) <= 2.2f)
		{
			if (func_54(&Local_14) <= 2.2f || func_55(Local_14.f_193, 32768))
			{
				fVar0 = 0f;
			}
			else
			{
				fVar0 = 7f;
			}
			if (!func_58(&uLocal_656))
			{
				func_160(&uLocal_656);
			}
			if (func_392(&uLocal_656, fVar0) || bParam1)
			{
				if (bParam1)
				{
					func_72(&uLocal_656);
				}
				iVar1 = func_393(0, 5, iLocal_649);
				iLocal_649 = iVar1;
				switch (iVar1)
				{
					case 0:
						func_384(uParam0, func_172(3), func_173(32));
						break;
					case 1:
						func_384(uParam0, func_172(3), func_173(33));
						break;
					case 2:
						func_384(uParam0, func_172(3), func_173(34));
						break;
					case 3:
						func_384(uParam0, func_172(3), func_173(35));
						break;
					case 4:
						func_384(uParam0, func_172(3), func_173(36));
						break;
				}
				if (fVar0 == 0f)
				{
					iLocal_655++;
				}
				func_160(&uLocal_677);
				return true;
			}
		}
	}
	return false;
}

void func_387(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_388(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_389(var uParam0)
{
	if ((((func_55(*uParam0, 32) || func_55(*uParam0, 64)) || func_55(*uParam0, 512)) || func_55(*uParam0, 256)) || func_55(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_390(int iParam0)
{
	if ((iParam0 != 9 && iParam0 != 10) && iParam0 != 38)
	{
		func_394(0);
	}
}

void func_391(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (Local_14.f_1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 0;
				*iParam2 = 4;
				break;
			case 1:
				*iParam1 = 0;
				*iParam2 = 5;
				break;
			case 2:
				*iParam1 = 0;
				*iParam2 = 6;
				break;
		}
	}
	else if (Local_14.f_1 == 1)
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 1;
				*iParam2 = 19;
				break;
			case 1:
				*iParam1 = 1;
				*iParam2 = 20;
				break;
			case 2:
				*iParam1 = 1;
				*iParam2 = 21;
				break;
			case 3:
				*iParam1 = 1;
				*iParam2 = 22;
				break;
			case 4:
				*iParam1 = 1;
				*iParam2 = 23;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*iParam1 = 2;
				*iParam2 = 27;
				break;
			case 1:
				*iParam1 = 2;
				*iParam2 = 28;
				break;
			case 2:
				*iParam1 = 2;
				*iParam2 = 29;
				break;
		}
	}
}

bool func_392(var uParam0, float fParam1)
{
	if (func_480(uParam0, fParam1))
	{
		func_72(uParam0);
		return true;
	}
	return false;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_481())
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
			iVar0 = func_482(func_481(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_394(bool bParam0)
{
	if (!bParam0)
	{
		func_62(&(Local_14.f_193), 65536);
	}
	else
	{
		func_61(&(Local_14.f_193), 65536);
	}
}

void func_395()
{
	fLocal_672 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
}

bool func_396(var uParam0)
{
	if (uParam0->f_205.f_386 == 5)
	{
		if (func_373(&(uParam0->f_205), 4))
		{
			return true;
		}
	}
	return false;
}

bool func_397()
{
	float fVar0;

	if (MISC::ARE_STRINGS_EQUAL(Local_14.f_205.f_217.f_12, "Pl_IG1_Loop01"))
	{
		if (func_483(&Local_14))
		{
			fVar0 = func_484(&Local_14);
			if (fVar0 < 0.8188f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

bool func_398(var uParam0)
{
	if (((func_16(&(uParam0->f_205), 2) || func_16(&(uParam0->f_205), 4)) || func_16(&(uParam0->f_205), 1)) || func_16(&(uParam0->f_205), 8))
	{
		return true;
	}
	return false;
}

void func_399()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar0 = func_485(iVar0, 1, 2);
	func_314(Local_14.f_3, "GUN", -417894478, Global_35, 1, "TWD_Sheriff", iVar0, 1);
}

int func_400(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_486(iParam0))
			{
				return GET_HASH_KEY("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return GET_HASH_KEY("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_486(iParam0))
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
			if (func_487(45))
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
			if (func_487(45))
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
			if (func_460(Global_1835011[59 /*74*/].f_1, 1))
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
			if (func_460(Global_1347702[9 /*49*/].f_15, 1))
			{
				return GET_HASH_KEY("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_487(45))
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
			if (iParam0 == func_488())
			{
				return GET_HASH_KEY("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_215() != -1)
			{
				return GET_HASH_KEY("LAW_REGION_MANZANITA_POST");
			}
			if (func_487(45))
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
		iVar0 = func_489(iParam0);
		if (iVar0 != -1)
		{
			return func_490(iVar0, bParam1);
		}
	}
	return 0;
}

void func_401(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_402(int iParam0)
{
	int iVar0;

	iVar0 = func_273(iParam0);
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

void func_403(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_265(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_404(int iParam0, int iParam1)
{
	if (!func_265(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

int func_405(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_491(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_406(int iParam0, int iParam1, bool bParam2)
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

bool func_407(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_408(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_409(int iParam0, bool bParam1)
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

bool func_410(int iParam0, bool bParam1)
{
	if (!func_265(iParam0))
	{
		return false;
	}
	if ((func_267(iParam0, 1) && !func_266(iParam0)) && func_268(iParam0))
	{
		return false;
	}
	if (!func_267(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_492(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_411(int iParam0)
{
	if (!func_265(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_412(int iParam0, int iParam1)
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

bool func_413(int iParam0, int iParam1)
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

bool func_414(int iParam0, int iParam1)
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
	if (!func_412(iParam0, iVar0))
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

void func_415(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_416(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_417(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_418(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (bParam1)
	{
		func_493(iParam0, 4);
		func_494(iVar0, 1);
		func_495(iVar0, 1);
	}
	else
	{
		func_496(iParam0, 4);
		func_495(iVar0, 0);
	}
}

void func_419(int* iParam0, char* sParam1)
{
	if (func_182(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_417(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_318(iParam0, 1);
}

void func_420(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_421(var uParam0)
{
	uParam0->f_387 = 0;
}

bool func_422(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_497((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_423(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_441(uParam0[iVar0 /*17*/]))
		{
			func_317(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_424(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_183(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_81(iParam0, 0);
		}
	}
}

int func_425(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_498(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_182((uParam2[iVar0 /*17*/])->f_6))
		{
			func_317(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_426(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_499(*uParam0);
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

int func_427(var uParam0, int iParam1)
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

void func_428(int* iParam0, int* iParam1)
{
	if (!func_299(iParam0, 23))
	{
		if (iParam1->f_7 == GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_317(iParam1, 19);
			func_420(iParam0, 23);
			func_500(iParam1, 2);
		}
	}
}

bool func_429(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_501(16))
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
					func_502(16);
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

void func_430(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_498(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_431(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_432(int iParam0)
{
	return (func_503(iParam0, 4) || func_503(iParam0, 5));
}

int func_433(int iParam0)
{
	return func_503(iParam0, 7);
}

int func_434(int iParam0)
{
	return func_503(iParam0, 6);
}

void func_435(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_441(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_498(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_436(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_504(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_315(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_418(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_418(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_505(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_437(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_506(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_507(iParam1, 1))
	{
		func_508(iParam1, 1);
		return true;
	}
	return false;
}

void func_438(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_181(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_439(int* iParam0, float fParam1, bool bParam2)
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

void func_440(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_441(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_442(int iParam0)
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

int func_443(int iParam0)
{
	return iParam0->f_160;
}

int func_444(int iParam0, int iParam1)
{
	return iParam0->f_41[iParam1 /*59*/].f_56;
}

bool func_445(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_446(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_447(int iParam0)
{
	return func_446(iParam0, 2);
}

bool func_448()
{
	if (func_509())
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

void func_449(var uParam0, var uParam1)
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

bool func_450(bool bParam0, int iParam1, int iParam2)
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

int func_451(var uParam0)
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

void func_452(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_123(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_122(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_453(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_454(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_455(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_455(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_456(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_457(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_458(int iParam0)
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

int func_459(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_460(int iParam0, bool bParam1)
{
	switch (func_361(iParam0))
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

bool func_461(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_462(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_510(), 1))
	{
		return true;
	}
	return false;
}

int func_463(int iParam0, bool bParam1)
{
	return func_511(iParam0, Global_1894899.f_2, bParam1);
}

Vector3 func_464()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		vVar1 = { func_512(iVar0) };
		if (!CAM::IS_SPHERE_VISIBLE(vVar1, 1.5f))
		{
			return vVar1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

int func_465(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (!bParam8)
	{
		*iParam0 = func_513(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*iParam0 = func_513(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

Vector3 func_466()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		vVar1 = { func_514(iVar0) };
		if (!CAM::IS_SPHERE_VISIBLE(vVar1, 1.5f))
		{
			return vVar1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

float func_467(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_468(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return true;
		}
		if (func_16(uParam0, 1))
		{
			return true;
		}
	}
	if (!func_469(uVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

bool func_469(int iParam0, int iParam1)
{
	if (func_226(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

int func_470(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_471(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_472(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_12))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_16))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_20))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!func_407(uParam0->f_25) || !func_407(uParam0->f_28))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

int func_473(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_245.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_245;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_515(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_516(uParam0);
	}
	return 1;
}

bool func_474(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { func_517(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_407(vVar0))
					{
						if (func_518(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::IS_PED_CARRYING_SOMETHING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					func_168(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::TASK_FLEE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					func_168(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_170(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_475(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_476(int iParam0)
{
	int iVar0;

	iVar0 = func_491(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_519(iVar0);
}

int func_477(int iParam0, int iParam1)
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
			func_520(iVar2);
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

void func_478()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

bool func_479()
{
	if (Global_1935630.f_44 != 0 && Global_1935630.f_44 != GET_HASH_KEY("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

bool func_480(var uParam0, float fParam1)
{
	if (!func_58(uParam0))
	{
		return false;
	}
	if (func_59(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_481()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_482(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_483(var uParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_521(uParam0, &iVar0, 1))
	{
		return ANIMSCENE::_0x1F0E401031E20146(iVar0, func_522(uParam0));
	}
	return false;
}

float func_484(var uParam0)
{
	int iVar0;

	switch (uParam0->f_205.f_385)
	{
		case 1:
			iVar0 = uParam0->f_205[uParam0->f_205.f_217 /*36*/];
			break;
		case 2:
			iVar0 = uParam0->f_205[uParam0->f_205.f_273 /*36*/];
			break;
		case 3:
			iVar0 = uParam0->f_205[uParam0->f_205.f_301 /*36*/];
			break;
		case 4:
			iVar0 = uParam0->f_205[uParam0->f_205.f_329 /*36*/];
			break;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0f;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return 0f;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
	{
		return ANIMSCENE::GET_ANIM_SCENE_PHASE(iVar0);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		return 1f;
	}
	return 0f;
}

int func_485(int iParam0, int iParam1, int iParam2)
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

bool func_486(int iParam0)
{
	if (!func_158(iParam0))
	{
		return false;
	}
	return func_523(iParam0, 33554432);
}

bool func_487(int iParam0)
{
	if (!func_524(iParam0))
	{
		return false;
	}
	return func_525(iParam0);
}

int func_488()
{
	return Global_40.f_4283.f_1;
}

int func_489(int iParam0)
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

int func_490(int iParam0, bool bParam1)
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
			if (func_487(45))
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
			if (func_487(45))
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
			if (func_487(45))
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

int func_491(int iParam0)
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

bool func_492(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_265(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_273(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_402(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_273(iParam0));
}

void func_493(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_494(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_446(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_495(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_496(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

int func_497(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_498(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_182(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_183(&(iParam1->f_6), 0, 1);
	}
	if (!func_182(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_441(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_526(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_182(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_505(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_527(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_528(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_416(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_527(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_418(iParam1->f_6, 0, 1);
				}
				else
				{
					func_418(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_499(int iParam0)
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

void func_500(int* iParam0, int iParam1)
{
	if (!func_316(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_317(iParam0, 14);
		}
	}
}

bool func_501(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_502(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_503(int iParam0, int iParam1)
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

bool func_504(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_505(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	func_527(iParam0, 18, 0, 1);
	func_527(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_506(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_319(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_507(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_182(iParam0))
	{
		return false;
	}
	iVar0 = func_319(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_508(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_509()
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

int func_510()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_511(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_529(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_530(iParam0, uVar0, iVar1, bParam2);
}

Vector3 func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5511.963f, -2916.757f, -2.75131f;
		case 1:
			return -5509.715f, -2909.147f, 0.6699f;
		case 2:
			return -5488.088f, -2935.998f, -1.40398f;
		case 3:
			return -5482.864f, -2934.063f, -1.3961f;
		case 4:
			return -5532.449f, -2927.814f, -2.36092f;
		case 5:
			return -5526.629f, -2927.384f, -2.36093f;
		case 6:
			return -5483.338f, -2959.907f, -2.68245f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_513(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_531(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

Vector3 func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5511.963f, -2916.757f, -2.75131f;
		case 1:
			return -5509.715f, -2909.147f, 0.6699f;
		case 2:
			return -5488.088f, -2935.998f, -1.40398f;
		case 3:
			return -5482.864f, -2934.063f, -1.3961f;
		case 4:
			return -5489.375f, -2909.036f, -2.15232f;
		case 5:
			return -5530.926f, -2964.578f, -2.25008f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_515(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (*uParam2)
	{
		return 1;
	}
	if (!func_469(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_516(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_245;
	if (uParam0->f_245.f_27)
	{
		return 1;
	}
	if (func_469(iVar0, &iVar1))
	{
		if (func_532(uParam0[iVar1 /*36*/], uParam0->f_245.f_12) || uParam0->f_245.f_26 == 1)
		{
			uParam0->f_245.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_517(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_518(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_519(int iParam0)
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

int func_520(int iParam0)
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

bool func_521(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_205.f_385)
	{
		case 1:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_217 /*36*/];
			break;
		case 2:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_273 /*36*/];
			break;
		case 3:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_301 /*36*/];
			break;
		case 4:
			*iParam1 = uParam0->f_205[uParam0->f_205.f_329 /*36*/];
			break;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*iParam1))
	{
		*iParam1 = -1;
		return false;
	}
	if (bParam2 && ((!ANIMSCENE::IS_ANIM_SCENE_LOADED(*iParam1, true, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(*iParam1, false)) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(*iParam1, false)))
	{
		*iParam1 = -1;
		return false;
	}
	return true;
}

char* func_522(var uParam0)
{
	switch (uParam0->f_205.f_385)
	{
		case 1:
			return uParam0->f_205.f_217.f_12;
		case 2:
			return uParam0->f_205.f_273.f_12;
		case 3:
			return uParam0->f_205.f_301.f_12;
		case 4:
			return uParam0->f_205.f_329.f_12;
	}
	return "";
}

bool func_523(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_524(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_525(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_526(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_446(iVar0, 2))
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
				func_533(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_528(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_182(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_529(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_215() != -1;
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

int func_530(int iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_271(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_273(iVar2)))
		{
			if (func_273(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

void func_531(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_534(iParam1))
		{
			func_287(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_535(iParam0, 0, 1);
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
			func_536(iParam0, 0);
			bVar0 = true;
		}
		func_537(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_532(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return true;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return false;
}

void func_533(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_494(iParam0, 1);
	func_495(iParam0, 1);
	func_496(iParam0, 128);
}

bool func_534(int iParam0)
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

void func_535(int iParam0, int iParam1, bool bParam2)
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

void func_536(int iParam0, bool bParam1)
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

void func_537(int iParam0, bool bParam1)
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

