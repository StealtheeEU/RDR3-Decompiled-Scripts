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
	struct<52> Local_15[8];
	struct<21> Local_432[8];
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	var uLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	bool bLocal_616 = false;
	bool bLocal_617 = false;
	bool bLocal_618 = false;
	bool bLocal_619 = false;
	float fLocal_620 = 0f;
	float fLocal_621 = 0f;
	int iLocal_622[4] = { 0, 0, 0, 0 };
	vector3 vLocal_627[22] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_694 = 0f;
	float fLocal_695 = 0f;
	vector3 vLocal_696 = { 0f, 0f, 0f };
	var uLocal_699 = 2;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	struct<1110> Local_718 = { 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 45, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 3, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	int iLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = -1;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 1097859072;
	var uLocal_1857 = 1000;
	var uLocal_1858 = 1067450368;
	var uLocal_1859 = 5000;
	var uLocal_1860 = 42;
	var uLocal_1861 = 1103626240;
	var uLocal_1862 = 1077936128;
	var uLocal_1863 = 1106247680;
	var uLocal_1864 = 1103101952;
	var uLocal_1865 = 1097859072;
	var uLocal_1866 = 1103626240;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_603 = -1;
	iLocal_604 = -1;
	iLocal_606 = -1;
	iLocal_607 = -1;
	iLocal_610 = -1;
	iLocal_614 = -1;
	fLocal_620 = 0f;
	fLocal_621 = 0f;
	if (func_1(vScriptParam_0.x) || vScriptParam_0.x == 14)
	{
		Local_718 = vScriptParam_0.x;
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(GET_HASH_KEY("TRAIN_AMB_BOX01"), true);
		func_2(&uLocal_1839, 1);
		func_3(&uLocal_1839, 1);
		func_4(&uLocal_1839, 1);
		func_5(&uLocal_1839, 1);
		func_6(&uLocal_1839, 1);
		func_7(&uLocal_1839, 1);
		func_8(&uLocal_1839, 1);
		func_9(&uLocal_1839, 1);
		func_10(&uLocal_1839, 0);
		if (func_11(Global_1392581.f_3, 8))
		{
			func_12(&iLocal_716, 1, 1);
		}
		if (vScriptParam_0.x != 14 && func_13(vScriptParam_0.x, 65536))
		{
			func_14(&uLocal_717, -2147483648);
		}
		func_15();
		iLocal_611 = func_16(GET_HASH_KEY("JUMPS_FROM_HORSE_TO"), GET_HASH_KEY("TRAIN"));
	}
	if (Local_718 == 14)
	{
		Local_718.f_1[0 /*22*/] = vScriptParam_0.z;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_616 = true;
		bLocal_617 = func_17(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP());
	}
	while (true)
	{
		func_19(bLocal_616, 1862, bLocal_618);
		if (func_20())
		{
			func_18();
		}
		func_21();
		if (func_22(&vScriptParam_0))
		{
			func_23(&iLocal_14, 5);
		}
		if ((MISC::GET_FRAME_COUNT() % 10) != 0)
		{
		}
		else
		{
			fLocal_695 = func_24();
		}
		func_12(&iLocal_716, 128, 0);
		iLocal_607 = -1;
		func_12(&iLocal_716, 268435456, 0);
		func_25(&Local_718, &uLocal_717, iLocal_603);
		func_26(iLocal_603, &iLocal_716);
		if (func_27(&Local_718, &iLocal_716, iLocal_603))
		{
			bLocal_618 = true;
			bLocal_616 = true;
		}
		if (iLocal_14 != 5 && Local_718 != 14)
		{
			func_28();
		}
		func_29();
		switch (iLocal_14)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
				{
					if (Local_718 == 14)
					{
						Local_718.f_1[0 /*22*/] = vScriptParam_0.z;
					}
					else
					{
						Local_718.f_1[0 /*22*/] = func_30(Local_718);
					}
				}
				else if (VEHICLE::_0xBD3C4A2ED509205E(Local_718.f_1[0 /*22*/]))
				{
					func_14(&uLocal_717, 536870912);
					func_31(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[0 /*22*/], true, false), 225f, 0);
					func_32(Local_718, 1, 0, 0);
					func_33(&Local_718, &(Local_718.f_1102));
					func_34(&(Global_40.f_8863[87]), 4);
					func_35();
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(GET_HASH_KEY("LEVDES_CMPTRAINROB_2"), true);
					func_36(&Local_718);
					func_37(&Local_718);
					func_38(&Local_718);
					func_39(&uLocal_699);
					iLocal_1836 = 0;
					func_23(&iLocal_14, 1);
				}
				break;
			case 1:
				if (func_40(&Local_718, &uLocal_699, &iLocal_1836))
				{
					func_41(&Local_718);
					BUILTIN::SETTIMERA(0);
					func_23(&iLocal_14, 2);
				}
				break;
			case 2:
				if (!func_11(Global_1392581.f_3, 8))
				{
					if (func_42(&Local_718))
					{
						if (func_43(iLocal_716, 1))
						{
							func_44();
							func_45(&Local_718, iLocal_603);
						}
						func_23(&iLocal_14, 3);
					}
				}
				break;
			case 3:
				if (func_46(&Local_718, 125f))
				{
					func_47();
					func_12(&iLocal_716, 64, func_48());
					func_49();
					if (func_43(iLocal_716, 64))
					{
						if (func_44())
						{
							func_12(&iLocal_716, 268435456, 1);
						}
						func_50(iLocal_603);
					}
					else
					{
						iLocal_603 = -1;
						func_12(&iLocal_716, 64, 0);
						func_12(&iLocal_716, 8, 0);
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
					}
					if (func_51(&Local_718, iLocal_603))
					{
						func_52(&Local_718, iLocal_603);
					}
					func_53();
					func_54();
					func_42(&Local_718);
					func_55(&Local_718, 1);
					func_56();
					func_57();
					func_58();
					func_59();
					func_60();
					func_61(1);
					func_62();
					if (func_63())
					{
						func_64();
						func_65(&iLocal_609);
						func_23(&iLocal_14, 4);
					}
				}
				break;
			case 4:
				if (!func_13(Local_718, 32768))
				{
					func_66(Local_718, 32768);
					func_66(Local_718, 65536);
				}
				func_47();
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				func_67(&iLocal_716, &vLocal_627);
				func_68(&Local_718, &vLocal_627, &iLocal_716, &uLocal_717, iLocal_603, &uLocal_605, &iLocal_609);
				func_59();
				func_60();
				func_61(0);
				func_69(&iLocal_716);
				func_58();
				func_49();
				func_70();
				if (func_44())
				{
					if (!func_11(Local_718.f_1[iLocal_603 /*22*/].f_4, 2))
					{
						func_34(&(Local_718.f_1[iLocal_603 /*22*/].f_4), 2);
					}
					func_12(&iLocal_716, 268435456, 1);
				}
				if (func_51(&Local_718, iLocal_603))
				{
					func_52(&Local_718, iLocal_603);
				}
				func_53();
				func_71(iLocal_603);
				func_50(iLocal_603);
				func_54();
				func_72();
				func_42(&Local_718);
				func_55(&Local_718, 0);
				func_62();
				func_73();
				break;
			case 5:
				func_18();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 8);
	}
	else
	{
		func_34(&(uParam0->f_1), 8);
	}
}

void func_3(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 4);
	}
	else
	{
		func_34(&(uParam0->f_1), 4);
	}
}

void func_4(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 2);
	}
	else
	{
		func_34(&(uParam0->f_1), 2);
	}
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 8);
	}
	else
	{
		func_74(uParam0, 8);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 16);
	}
	else
	{
		func_74(uParam0, 67108864);
		func_74(uParam0, 16);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 256);
	}
	else
	{
		func_34(&(uParam0->f_1), 256);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 524288);
	}
	else
	{
		func_74(uParam0, 524288);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 256);
	}
	else
	{
		func_74(uParam0, 256);
	}
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

bool func_11(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_12(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_11(*uParam0, iParam1))
		{
			func_34(uParam0, iParam1);
		}
	}
	else if (func_11(*uParam0, iParam1))
	{
		func_74(uParam0, iParam1);
	}
}

bool func_13(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] && iParam1) != 0;
}

void func_14(var uParam0, int iParam1)
{
	if (!func_75(uParam0, iParam1))
	{
		func_34(uParam0, iParam1);
	}
}

void func_15()
{
}

int func_16(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_76(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_17(int iParam0)
{
	if (((func_77(iParam0, 1) && func_77(iParam0, 2)) && func_77(iParam0, 8)) && func_77(iParam0, 512))
	{
		return true;
	}
	return false;
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]);
	func_74(&(Global_1392581.f_3), 4);
	func_74(&(Global_1392581.f_3), 16);
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_602))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_602);
	}
	if (func_75(&uLocal_717, 134217728))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (!bLocal_618)
	{
		if (func_13(Local_718, 16))
		{
			func_78();
			func_79(Local_718);
			func_80(Local_718, 32768);
		}
	}
	Global_1430221.f_2 = 0;
	if (!bLocal_618)
	{
		func_32(Local_718, 0, 0, 0);
		if (func_13(Local_718, 65536))
		{
			func_81(&(Global_1392581.f_4[Local_718 /*3*/]));
		}
	}
	func_82();
	if (func_43(iLocal_716, 536870912))
	{
		func_83(1);
		func_12(&iLocal_716, 536870912, 0);
	}
	func_74(&(Global_40.f_8863[87]), 4);
	iVar2 = 0;
	while (iVar2 < Local_718.f_1099)
	{
		iVar3 = Local_718.f_310[iVar2 /*14*/];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar3, false))
			{
				if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 32))
				{
					PED::RELEASE_PED_VISIBILITY_TRACKING(iVar3);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(iVar3, 32768, false);
				if (Local_718.f_310[iVar2 /*14*/].f_8 == Local_718.f_1102)
				{
					PED::SET_PED_KEEP_TASK(iVar3, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
				}
				else if (((bLocal_617 || bLocal_618) || !bVar0) && (Local_718.f_310[iVar2 /*14*/].f_3 != 0 || !bVar0))
				{
					func_84(&iVar3);
				}
				else
				{
					PED::SET_PED_KEEP_TASK(iVar3, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
					PED::_0x39A2FC5AF55A52B1(iVar3, 5000);
				}
			}
		}
		iVar2++;
	}
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (PED::_0x91A5F9CBEBB9D936(Local_718.f_1[iVar1 /*22*/].f_5))
		{
			iVar4 = PED::_0x6F46F8ACB44C4FC1(Local_718.f_1[iVar1 /*22*/].f_5);
			POPULATION::_0xA1CFB35069D23C23(iVar4);
			func_85(iVar4);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_718.f_1[iVar1 /*22*/].f_5, false);
		}
		if (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1[iVar1 /*22*/].f_1))
		{
			func_85(Local_718.f_1[iVar1 /*22*/].f_1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar1 /*22*/]))
		{
			if (bVar0)
			{
				VEHICLE::_0xD4907EF4334C7602(Local_718.f_1[iVar1 /*22*/], 0);
				VEHICLE::_0x68830738A6BFB370(Local_718.f_1[iVar1 /*22*/], 0);
			}
			ENTITY::_0x119A5714578F4E05(Local_718.f_1[iVar1 /*22*/], 0);
		}
		iVar5 = PED::_0x5C16855277819BBF();
		if (iVar5 > 0)
		{
			iVar6 = (func_86(&Local_718, iVar1) - Local_718.f_1[iVar1 /*22*/].f_9);
			if (iVar6 > 0)
			{
				if (iVar6 > iVar5)
				{
					iVar6 = iVar5;
				}
				PED::_0x7D4E70A67A651C71(iVar6);
			}
		}
		iVar1++;
	}
	if (!bLocal_618)
	{
		if (bVar0)
		{
			VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(Local_718.f_1[0 /*22*/], true);
			VEHICLE::_0xA72B1BF3857B94D7(Local_718.f_1[0 /*22*/], 0);
		}
	}
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(GET_HASH_KEY("TRAIN_AMB_BOX01"), true);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(GET_HASH_KEY("LEVDES_CMPTRAINROB_2"), false);
	iVar7 = 0;
	while (iVar7 < 4)
	{
		func_85(iLocal_622[iVar7]);
		iVar7++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_601);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1868);
	if (func_87(162))
	{
		func_88(162);
	}
	if (!bLocal_618)
	{
		LAW::_0x710448D44A64C213(1);
		if (LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::PLAYER_ID()))
		{
			LAW::_0x987BE590FB9D41E5(0);
			LAW::_0xDCF12B89624AAC96(0);
		}
	}
	func_89(2, 0, 0);
	func_89(1, 0, 0);
	Global_1392581.f_44 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_19(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_90(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_20()
{
	return false;
}

void func_21()
{
}

bool func_22(int iParam0)
{
	float fVar0;

	if (func_75(&uLocal_717, 536870912))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
		{
			return true;
		}
	}
	if (func_91(0, 0, 1) && func_92(0) != Global_1392581.f_1)
	{
		return true;
	}
	else if (*iParam0 == 14)
	{
		return false;
	}
	if (!func_1(*iParam0))
	{
		return true;
	}
	if (!VEHICLE::_0x0516FAE561276EFC(Global_1425371[*iParam0 /*373*/].f_1))
	{
		return true;
	}
	fVar0 = 300f;
	if (func_43(iLocal_716, 65536))
	{
		if (!func_93(&Local_718) || (Local_718.f_1099 - Local_718.f_1101) < (Local_718.f_1099 / 2))
		{
			fVar0 = 100f;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]) || func_13(*iParam0, 8192))
	{
		if (!func_46(&Local_718, fVar0))
		{
			return true;
		}
	}
	else if (func_94(*iParam0, fVar0, 0))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0, int iParam1)
{
	if (iParam1 != *iParam0)
	{
		*iParam0 = iParam1;
	}
}

float func_24()
{
	var uVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		return 9999f;
	}
	if (VEHICLE::_0xDE8C5B9F65017FA1(Local_718.f_1[0 /*22*/]) <= 0)
	{
		return 9999f;
	}
	uVar0 = VEHICLE::_0xAF787E081AC4A8EE(Local_718.f_1[0 /*22*/]);
	iVar1 = VEHICLE::_0x86FA6D8B48667D75(Local_718.f_1[0 /*22*/]);
	iVar2 = VEHICLE::_0x1180A2974D251B7B(Local_718.f_1[0 /*22*/]);
	fVar3 = 9999f;
	fVar4 = 9999f;
	if (iVar1 >= 0)
	{
		vVar5 = { VEHICLE::_0xBA958F68031DDBFC(uVar0, iVar1) };
		if (func_95(vVar5, 500f, 1))
		{
			fVar3 = func_96(Local_718.f_1[0 /*22*/], vVar5, 1);
		}
	}
	if (iVar2 >= 0)
	{
		vVar8 = { VEHICLE::_0xBA958F68031DDBFC(uVar0, iVar2) };
		if (func_95(vVar8, 500f, 1))
		{
			fVar4 = func_96(Local_718.f_1[0 /*22*/], vVar8, 1);
		}
	}
	if (fVar4 < fVar3)
	{
		fVar11 = fVar4;
		vLocal_696 = { vVar8 };
	}
	else
	{
		fVar11 = fVar3;
		vLocal_696 = { vVar5 };
	}
	return fVar11;
}

void func_25(int iParam0, var uParam1, int iParam2)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 60) != 0 || func_75(uParam1, 268435456))
	{
		return;
	}
	if (func_97())
	{
		if (!func_75(uParam1, 1073741824 /* Float: 2f */))
		{
			func_14(uParam1, 1073741824 /* Float: 2f */);
			bVar0 = true;
		}
	}
	else if (func_75(uParam1, 1073741824 /* Float: 2f */))
	{
		func_98(uParam1, 1073741824 /* Float: 2f */);
		bVar0 = true;
	}
	if (bVar0)
	{
		func_45(iParam0, iParam2);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (iParam0 > -1 && TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
	{
		func_99(uParam1);
	}
}

bool func_27(int iParam0, var uParam1, int iParam2)
{
	if (!func_43(*uParam1, 1))
	{
		if (func_11(Global_1392581.f_3, 8))
		{
			func_12(uParam1, 1, 1);
			return true;
		}
	}
	else if (!func_11(Global_1392581.f_3, 8))
	{
		if (!func_43(*uParam1, 64))
		{
			func_12(uParam1, 1, 0);
		}
		if (!func_43(*uParam1, -2147483648))
		{
			func_45(iParam0, iParam2);
			func_12(uParam1, -2147483648, 1);
		}
	}
	return false;
}

void func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (MISC::GET_FRAME_COUNT() % Local_718.f_1098);
	if ((iVar0 >= 0 && iVar0 < Local_718.f_1098) && !ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar0 /*22*/]))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1105))
		{
			VOLUME::_DELETE_VOLUME(Local_718.f_1105);
		}
		iVar0 = 1;
		while (iVar0 <= 13)
		{
			if (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1[iVar0 /*22*/].f_1))
			{
				VOLUME::_DELETE_VOLUME(Local_718.f_1[iVar0 /*22*/].f_1);
			}
			if (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1[iVar0 /*22*/].f_2))
			{
				VOLUME::_DELETE_VOLUME(Local_718.f_1[iVar0 /*22*/].f_2);
			}
			Local_718.f_1[iVar0 /*22*/].f_8 = 0;
			Local_718.f_1[iVar0 /*22*/].f_3 = 0;
			iVar1 = 0;
			while (iVar1 < 8)
			{
				Local_718.f_1[iVar0 /*22*/].f_11[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < 45)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]))
			{
				PED::SET_PED_KEEP_TASK(Local_718.f_310[iVar2 /*14*/], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_718.f_310[iVar2 /*14*/]));
				func_74(&(Local_718.f_310[iVar2 /*14*/].f_7), 16);
				Local_718.f_310[iVar2 /*14*/].f_4 = 0;
				Local_718.f_310[iVar2 /*14*/].f_6 = 0;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_622[iVar3]))
			{
				VOLUME::_DELETE_VOLUME(iLocal_622[iVar3]);
			}
			iVar3++;
		}
		iLocal_1836 = 0;
		Local_718.f_1099 = 0;
		func_23(&iLocal_14, 0);
	}
}

void func_29()
{
	if (!func_75(&uLocal_717, 268435456))
	{
		if (func_100() && !func_46(&Local_718, 100f))
		{
			func_14(&uLocal_717, 268435456);
		}
	}
	else if (!func_100() || func_46(&Local_718, 75f))
	{
		func_98(&uLocal_717, 268435456);
	}
}

int func_30(int iParam0)
{
	if (!func_1(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1))
	{
		return 0;
	}
	func_66(iParam0, 16);
	return VEHICLE::_0x6E585A616ABB8401(Global_1425371[iParam0 /*373*/].f_1);
}

void func_31(vector3 vParam0, float fParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_101(vVar0, vVar3, 0f) };
	vVar9 = { func_102(vVar0, vVar3, 0f) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, uParam4);
}

void func_32(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_1(iVar0))
		{
			if (iVar0 != iParam0)
			{
				if (bParam1)
				{
					func_66(iVar0, 2);
					if (bParam3)
					{
						if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
						{
							VEHICLE::_0x0D5FDF0D36FA10CD(Global_1425371[iVar0 /*373*/].f_1);
						}
					}
				}
				else
				{
					func_80(iVar0, 2);
				}
			}
			else
			{
				func_80(iVar0, 2);
				if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
				{
					if (bParam2)
					{
						VEHICLE::_0x718EB706B6E998A0(Global_1425371[iVar0 /*373*/].f_1);
					}
					else
					{
						VEHICLE::_0xE682002DB1F30669(Global_1425371[iVar0 /*373*/].f_1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, var uParam1)
{
	var uVar0[14];
	int iVar15;

	uVar0[0] = iParam0->f_1[0 /*22*/];
	func_103(iParam0, 0);
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[0 /*22*/].f_1))
	{
		func_104(&(iParam0->f_1[0 /*22*/]), &(iParam0->f_1[0 /*22*/].f_1), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 0, 0, 0);
	}
	iParam0->f_1098 = func_105(&uVar0);
	iVar15 = 1;
	while (iVar15 <= 13)
	{
		func_106(iParam0, iVar15);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar15]))
		{
			iParam0->f_1[iVar15 /*22*/] = uVar0[iVar15];
			func_103(iParam0, iVar15);
			if (iParam0->f_1[iVar15 /*22*/].f_6 == 3)
			{
				*uParam1 = iVar15;
			}
			if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iVar15 /*22*/].f_1))
			{
				func_104(&(iParam0->f_1[iVar15 /*22*/]), &(iParam0->f_1[iVar15 /*22*/].f_1), iVar15, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 0, 0, 0, 0);
			}
			if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iVar15 /*22*/].f_2))
			{
				func_104(&(iParam0->f_1[iVar15 /*22*/]), &(iParam0->f_1[iVar15 /*22*/].f_2), iVar15, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 0, 0, 0);
			}
			if (iParam0->f_1[iVar15 /*22*/].f_6 == 3)
			{
				func_104(&(iParam0->f_1[iVar15 /*22*/]), &(iParam0->f_1105), iVar15, 14f, 5f, 15f, 0, -4f, 1, "NOCABOOSEJUMP");
			}
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar15]))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar15 /*22*/]))
			{
			}
		}
		iVar15++;
	}
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35()
{
	if (iLocal_1868 == 0)
	{
		PED::ADD_RELATIONSHIP_GROUP("amb_train_guards", &iLocal_1868);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1868, GET_HASH_KEY("REL_GANG_LEMOYNE_RAIDERS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, GET_HASH_KEY("REL_GANG_LEMOYNE_RAIDERS"), iLocal_1868);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1868, GET_HASH_KEY("REL_GANG_DUTCHS"));
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_93(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < iParam0->f_1098)
		{
			if (func_51(iParam0, iVar1))
			{
				if (iVar0 >= 3)
				{
				}
				else
				{
					iParam0->f_941[iVar0 /*52*/] = iVar1;
					iVar0++;
					iVar1++;
				}
				iVar0 = iVar0;
				while (iVar0 <= 2)
				{
					iParam0->f_941[iVar0 /*52*/] = -1;
					iVar0++;
				}
			}
		}
	}
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = func_107();
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				switch (iVar2)
				{
					case 3:
						iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/].f_7 = iVar1;
						iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/] = { 1.51f, -0.77f, 1.77f };
						iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/].f_3 = 92f;
						func_108(&(iParam0->f_941[iVar0 /*52*/].f_3[3 /*12*/].f_11), 11);
					case 2:
						iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/].f_7 = iVar1;
						iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/] = { 1.51f, -0.69f, 1.77f };
						iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/].f_3 = 92f;
						func_108(&(iParam0->f_941[iVar0 /*52*/].f_3[2 /*12*/].f_11), 11);
					case 1:
						iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/].f_7 = iVar1;
						iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/] = { 1.54f, -0.29f, 1.77f };
						iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/].f_3 = 92f;
						func_108(&(iParam0->f_941[iVar0 /*52*/].f_3[1 /*12*/].f_11), 11);
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_109(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_110(iParam0, (iVar0 - 1), 0);
	iParam0->f_1[(iVar0 - 1) /*22*/].f_5 = func_111(iVar2);
	iVar1 = func_112(iParam0);
	if (iVar1 == -1 || iVar1 == iVar0)
	{
		return;
	}
	if (iVar1 + 1 >= iParam0->f_1098)
	{
		return;
	}
	if (iParam0->f_1[iVar1 + 1 /*22*/].f_6 != 3)
	{
		iVar2 = func_110(iParam0, iVar1 + 1, 1);
		iParam0->f_1[iVar1 + 1 /*22*/].f_5 = func_111(iVar2);
	}
}

void func_39(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy(uParam0[iVar0 /*8*/], "", 64);
		iVar0++;
	}
}

bool func_40(int iParam0, var uParam1, int iParam2)
{
	switch (*iParam2)
	{
		case 0:
			HUD::TEXT_BLOCK_REQUEST("TNRB");
			func_113(iParam0);
			func_114(uParam1);
			func_115();
			*iParam2 = 1;
			break;
		case 1:
			if (!HUD::TEXT_BLOCK_IS_LOADED("TNRB"))
			{
				return false;
			}
			if (!func_116(iParam0))
			{
				return false;
			}
			if (!func_115())
			{
				return false;
			}
			*iParam2 = 2;
			return true;
		case 2:
			return true;
	}
	return false;
}

void func_41(int iParam0)
{
	int iVar0;

	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				func_117(0f, 0f, 0f, &(iParam0->f_941[iVar0 /*52*/].f_3), 0, 0, 0, -1, 0);
				func_118(iParam0, iVar0);
			}
			iVar0++;
		}
	}
}

bool func_42(int iParam0)
{
	int iVar0;

	if (!func_75(&uLocal_717, -2147483648) || iParam0->f_1103 == 0)
	{
		if (iParam0->f_1103 != 1)
		{
			func_119(iParam0, iParam0->f_1103);
		}
		else
		{
			func_120(iParam0, iParam0->f_1103, 1);
		}
	}
	else
	{
		func_120(iParam0, iParam0->f_1103, 1);
	}
	iParam0->f_1103++;
	if (iParam0->f_1103 >= iParam0->f_1098)
	{
		iParam0->f_1103 = 0;
		if (func_11(iParam0->f_1[iParam0->f_1103 /*22*/].f_4, 4))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_43(int iParam0, int iParam1)
{
	return func_11(iParam0, iParam1);
}

bool func_44()
{
	bool bVar0;
	var uVar1;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	float fVar8;
	int iVar9;

	if (iLocal_603 >= 0)
	{
		if (!func_11(Local_718.f_1[iLocal_603 /*22*/].f_4, 2))
		{
			if (PED::IS_PED_SHOOTING(Global_35))
			{
				if (!func_43(iLocal_716, 4096) && !func_43(iLocal_716, 1048576))
				{
					func_64();
				}
				func_34(&(Local_718.f_1[iLocal_603 /*22*/].f_4), 2);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
		if (!func_43(iLocal_716, 524288))
		{
			bVar0 = false;
			if (iLocal_610 >= 0)
			{
				uVar1 = 1;
				if (PED::_0xF4860514AD354226(iLocal_610, Global_36, 40f, &uVar1) > 0)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				fLocal_620 = (fLocal_620 + (5f * BUILTIN::TIMESTEP()));
				if (fLocal_620 >= 10f)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_DISTURBANCE"), 0, 0, 0, 0, 0, 0, 0);
					func_12(&iLocal_716, 524288, 1);
				}
			}
			else
			{
				fLocal_620 = (fLocal_620 - (5f * BUILTIN::TIMESTEP()));
				if (fLocal_620 < 0f)
				{
					fLocal_620 = 0f;
				}
			}
		}
		iVar3 = 0;
		while (iVar3 < 14)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar3 /*22*/]))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, Local_718.f_1[iVar3 /*22*/]) || (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1[iVar3 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_718.f_1[iVar3 /*22*/].f_1, true, 0)))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_718.f_1[iVar3 /*22*/], true, false) };
					func_12(&iLocal_716, 64, 1);
					fVar8 = (Global_36.f_2 - vVar4.z);
					if (fVar8 > 4f)
					{
						if (!func_43(iLocal_716, 8))
						{
							EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
							iLocal_610 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(GET_HASH_KEY("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 0f, 30f, 40f, -1f, -1f, 180f, false, false, -1, -1);
							func_12(&iLocal_716, 8, 1);
						}
					}
					else if (func_43(iLocal_716, 8))
					{
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
						iLocal_610 = -1;
						func_12(&iLocal_716, 8, 0);
						EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(GET_HASH_KEY("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 10f, 10f, 15f, -1f, -1f, 180f, false, false, -1, -1);
						bVar7 = true;
					}
					if (iVar3 != iLocal_603 || bVar7)
					{
						iLocal_604 = iLocal_603;
						iLocal_603 = iVar3;
						func_121(&(vLocal_627[1 /*3*/]));
						func_45(&Local_718, iLocal_603);
						if (iLocal_603 == 1)
						{
							func_45(&Local_718, 0);
						}
						iVar9 = 0;
						while (iVar9 < 8)
						{
							func_122(&(Local_15[iVar9 /*52*/]), 0, 0, 1, 0);
							iVar9++;
						}
						func_81(&(vLocal_627[11 /*3*/]));
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			iVar3++;
		}
		if (iLocal_603 != -1)
		{
			func_12(&iLocal_716, 64, 0);
			func_12(&iLocal_716, 8, 0);
			iLocal_603 = -1;
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
			iLocal_610 = -1;
			func_81(&(vLocal_627[11 /*3*/]));
		}
	}
	return false;
}

void func_45(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= iParam0->f_1098)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1[iParam1 /*22*/].f_8)
	{
		iVar1 = iParam0->f_1[iParam1 /*22*/].f_11[iVar0];
		if (iVar1 >= 0)
		{
			func_34(&(iParam0->f_310[iVar1 /*14*/].f_7), 2048);
		}
		iVar0++;
	}
}

bool func_46(int iParam0, float fParam1)
{
	if (!func_123(*iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[0 /*22*/]) && *iParam0 != 14)
		{
			iParam0->f_1[0 /*22*/] = func_30(*iParam0);
		}
		return func_124(*iParam0, &(iParam0->f_1[0 /*22*/]), fParam1, iParam0->f_1102);
	}
	return false;
}

void func_47()
{
	float fVar0;

	bLocal_619 = false;
	if (func_43(iLocal_716, 1))
	{
		func_121(&(vLocal_627[17 /*3*/]));
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(Local_718.f_1[0 /*22*/]) <= 0.2f)
	{
		if (!func_125(&(vLocal_627[17 /*3*/])))
		{
			func_81(&(vLocal_627[17 /*3*/]));
		}
	}
	else
	{
		func_121(&(vLocal_627[17 /*3*/]));
		return;
	}
	if (func_126())
	{
		return;
	}
	if (func_43(iLocal_716, 16384))
	{
		fVar0 = 130f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (!func_127(&(vLocal_627[17 /*3*/]), fVar0))
	{
		return;
	}
	bLocal_619 = true;
}

bool func_48()
{
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return func_128(&Local_718, &Global_35);
}

void func_49()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		if (!func_43(iLocal_716, 16384))
		{
			if (func_129(&Local_718))
			{
				if (!func_125(&(vLocal_627[16 /*3*/])))
				{
					func_81(&(vLocal_627[16 /*3*/]));
				}
				if (func_125(&(vLocal_627[5 /*3*/])))
				{
					func_121(&(vLocal_627[5 /*3*/]));
				}
				func_12(&iLocal_716, 16384, 1);
			}
		}
		else if (!func_129(&Local_718))
		{
			if (!func_125(&(vLocal_627[5 /*3*/])))
			{
				func_81(&(vLocal_627[5 /*3*/]));
			}
			if (func_125(&(vLocal_627[16 /*3*/])))
			{
				func_121(&(vLocal_627[16 /*3*/]));
			}
			if (func_130(&(vLocal_627[5 /*3*/]), 5f))
			{
				func_12(&iLocal_716, 16384, 0);
			}
		}
	}
}

void func_50(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	int iVar4;

	if (!func_43(iLocal_716, 8) && iParam0 > -1)
	{
		if (iParam0 != 0)
		{
			if ((func_43(iLocal_716, 4096) && func_131(iParam0)) && func_43(iLocal_716, 268435456))
			{
				iVar0 = func_132(iParam0);
				if (iVar0 != 0)
				{
					if (Local_718.f_1[iParam0 /*22*/].f_8 > 1)
					{
						StringCopy(&cVar1, func_133(1), 24);
					}
					else
					{
						StringCopy(&cVar1, func_133(0), 24);
					}
					func_65(&iLocal_609);
					func_134(iVar0, Global_35, &cVar1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2))
			{
				if (bLocal_619)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_613)
					{
						iVar4 = func_132(iParam0);
						if (iVar4 != 0)
						{
							func_65(&iLocal_609);
							func_134(iVar4, Global_35, func_135(func_11(Local_718.f_1[iParam0 /*22*/].f_4, 32)), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&(Local_718.f_1[iParam0 /*22*/].f_4), 32);
							iLocal_613 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
						}
					}
				}
			}
		}
	}
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0->f_1[iParam1 /*22*/]) == GET_HASH_KEY("PRIVATEBAGGAGE01X"))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	if (iParam1 < 0)
	{
		return;
	}
	if (!func_93(iParam0))
	{
		return;
	}
	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0->f_941[iVar0 /*52*/] == iParam1)
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_941[iVar0 /*52*/].f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/]))
		{
			return;
		}
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/]))
		{
			return;
		}
		iParam0->f_941[iVar0 /*52*/].f_2 = PROPSET::_GET_VEHICLE_PROP_SET(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/]);
		if (!PROPSET::DOES_PROP_SET_EXIST(iParam0->f_941[iVar0 /*52*/].f_2))
		{
			return;
		}
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/], iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/]) };
		func_137(iParam0->f_941[iVar0 /*52*/].f_2, func_136(), &(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8), vVar1, -1082130432 /* Float: -1f */);
	}
	if (PROPSET::DOES_PROP_SET_EXIST(iParam0->f_941[iVar0 /*52*/].f_2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8))
		{
			iParam0->f_941[iVar0 /*52*/].f_1 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iParam0->f_941[iVar0 /*52*/].f_3[0 /*12*/].f_8, GET_HASH_KEY("RANSACK_SAFE"), func_138(0), 0f, 0, 0, 0);
		}
		else
		{
			iParam0->f_941[iVar0 /*52*/].f_1 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iParam0->f_1[iParam0->f_941[iVar0 /*52*/] /*22*/], GET_HASH_KEY("RANSACK_SAFE"), func_138(1), -90f, 0, 0, 0);
		}
	}
}

void func_53()
{
	if (func_43(iLocal_716, 64) && !func_43(iLocal_716, 8))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 275, true);
	}
}

void func_54()
{
	int iVar0;
	int iVar1;

	if (func_43(iLocal_716, 2097152))
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			iVar1 = 0;
			while (iVar1 < Local_718.f_1[iVar0 /*22*/].f_8)
			{
				if (Local_718.f_310[Local_718.f_1[iVar0 /*22*/].f_11[iVar1] /*14*/].f_3 == 1)
				{
					func_139(&Local_718, iVar0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716, &uLocal_717, &iLocal_606, &(Local_15[iVar1 /*52*/]), &(Local_432[iVar1 /*21*/]), 1, 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	func_140(iParam0);
	if (func_141(&iLocal_716))
	{
		func_142(iParam0, iParam0->f_1104);
	}
	func_143(iParam0->f_1104, &bVar0, bParam1);
	if (iLocal_603 != -1)
	{
		if (iLocal_603 != 1)
		{
			if (iParam0->f_1104 != iLocal_603)
			{
				func_143(iLocal_603, &bVar0, bParam1);
			}
		}
		else if (iParam0->f_1104 != 0)
		{
			func_143(0, &bVar0, bParam1);
		}
	}
	else
	{
		iVar1 = -1;
		if (Local_718.f_1[0 /*22*/].f_11[0] >= 0 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/]))
		{
			if (iParam0->f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/].f_9 < 27f)
			{
				iVar1 = 0;
			}
		}
		if ((iVar1 < 0 && Local_718.f_1[iParam0->f_1102 /*22*/].f_11[0] >= 0) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_310[Local_718.f_1[iParam0->f_1102 /*22*/].f_11[0] /*14*/]))
		{
			if (iParam0->f_310[iParam0->f_1[iParam0->f_1102 /*22*/].f_11[0] /*14*/].f_9 < 27f)
			{
				iVar1 = iParam0->f_1102;
			}
		}
		if ((iVar1 >= 0 && iVar1 < iParam0->f_1098) && iParam0->f_1104 != iVar1)
		{
			func_143(iVar1, &bVar0, bParam1);
		}
	}
	if (func_75(&uLocal_717, 268435456))
	{
		if (!func_11(Local_718.f_1[iParam0->f_1104 /*22*/].f_4, 65536) && func_144(&Local_718, iParam0->f_1104))
		{
			func_145(&Local_718, iParam0->f_1104);
		}
	}
	else if (func_11(Local_718.f_1[iParam0->f_1104 /*22*/].f_4, 65536))
	{
		func_146(&Local_718, &uLocal_717, iParam0->f_1104);
	}
	iParam0->f_1104++;
	if (iParam0->f_1104 >= iParam0->f_1098)
	{
		iParam0->f_1104 = 0;
	}
	if (bVar0)
	{
		if (!func_125(&(vLocal_627[0 /*3*/])))
		{
			func_81(&(vLocal_627[0 /*3*/]));
		}
	}
	if (func_130(&(vLocal_627[0 /*3*/]), 0.5f))
	{
		func_147(iLocal_603);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;

	if (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1105))
	{
		if (func_148(Global_35, Local_718.f_1105, 1, 0))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					iVar1 = Local_718.f_1[Local_718.f_1102 /*22*/].f_11[iVar0];
					if (iVar1 >= 0)
					{
						if (!PED::IS_PED_INJURED(Local_718.f_310[iVar1 /*14*/]))
						{
							PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_57()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_16(GET_HASH_KEY("JUMPS_FROM_HORSE_TO"), GET_HASH_KEY("TRAIN"));
	if (iLocal_603 >= 0)
	{
		if (iVar0 != iLocal_611)
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_611 = iVar0;
			func_149(iLocal_603, 1);
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_718.f_1[iLocal_603 /*22*/], Global_36) };
			if (vVar1.y >= 7f)
			{
				if ((iLocal_603 - 1) >= 0)
				{
					func_149((iLocal_603 - 1), 0);
				}
			}
			else if (vVar1.y <= -7f)
			{
				if (iLocal_603 + 1 < 14)
				{
					func_149(iLocal_603 + 1, 0);
				}
			}
		}
	}
}

void func_58()
{
	if (!func_11(Local_718.f_1[0 /*22*/].f_4, 4096))
	{
		if (VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]) == Global_35)
		{
			VEHICLE::_SET_TRAIN_MAX_SPEED(Local_718.f_1[0 /*22*/], 10f);
			func_34(&(Local_718.f_1[0 /*22*/].f_4), 4096);
		}
	}
	else if (VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]) != Global_35)
	{
		func_74(&(Local_718.f_1[0 /*22*/].f_4), 4096);
	}
}

void func_59()
{
	if (func_43(iLocal_716, 64))
	{
		if (LAW::_0xA22C46F16359471C())
		{
			LAW::_0x710448D44A64C213(0);
		}
	}
	else if (!LAW::_0xA22C46F16359471C())
	{
		LAW::_0x710448D44A64C213(1);
	}
}

void func_60()
{
	if (bLocal_619)
	{
		if (!func_43(iLocal_716, 262144) && !func_43(iLocal_716, 1073741824 /* Float: 2f */))
		{
			if (!func_150())
			{
				return;
			}
			func_12(&iLocal_716, 262144, 1);
			func_81(&(vLocal_627[6 /*3*/]));
			fLocal_694 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
		}
	}
}

void func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	if (func_43(iLocal_716, 2048))
	{
		return;
	}
	if (!func_125(&(vLocal_627[2 /*3*/])))
	{
		func_81(&(vLocal_627[2 /*3*/]));
	}
	if (func_43(iLocal_716, 32768))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) != Global_35)
		{
			VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
		}
	}
	if (func_43(iLocal_716, 32768))
	{
		if (func_151(0, 1, Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], 1))
		{
			if (!func_125(&(vLocal_627[21 /*3*/])))
			{
				func_81(&(vLocal_627[21 /*3*/]));
			}
			if (func_130(&(vLocal_627[21 /*3*/]), 8.5f))
			{
				if (iLocal_615 < 4)
				{
					func_134(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_152(iLocal_615), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_615++;
				}
				else if (func_46(&Local_718, 50f) && func_43(iLocal_716, 2))
				{
					func_12(&iLocal_716, 2048, 1);
				}
			}
		}
	}
	if (func_130(&(vLocal_627[2 /*3*/]), 1.5f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
		{
			if (!func_43(iLocal_716, 2048))
			{
				if (bParam0 || (!bParam0 && (!ENTITY::IS_ENTITY_DEAD(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/]))))
				{
					if (!ITEMSET::IS_ITEMSET_VALID(iLocal_602))
					{
						iLocal_602 = ITEMSET::CREATE_ITEMSET(true);
					}
					bVar2 = false;
					if (ENTITY::GET_ENTITY_SPEED(Local_718.f_1[0 /*22*/]) <= 10f)
					{
						iVar3 = 3;
					}
					else
					{
						iVar3 = 4;
					}
					iVar1 = 0;
					while (iVar1 < iVar3)
					{
						if (!VOLUME::DOES_VOLUME_EXIST(iLocal_622[iVar1]))
						{
							switch (iVar1)
							{
								case 0:
									sVar4 = "TrainRob - volProbe0";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 1:
									sVar4 = "TrainRob - volProbe1";
									fVar5 = 20f;
									fVar6 = -3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 2:
									sVar4 = "TrainRob - volProbe2";
									fVar5 = -20f;
									fVar6 = 3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 3:
									sVar4 = "TrainRob - volProbefast";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 32f;
									fVar8 = 50f;
									fVar9 = 14f;
									break;
							}
							iLocal_622[iVar1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[0 /*22*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_718.f_1[0 /*22*/], 2), fVar9, fVar8, 8f, sVar4);
							PED::_0x7C00CFC48A782DC0(iLocal_622[iVar1], Local_718.f_1[0 /*22*/], fVar6, fVar7, 0f, 0f, 0f, fVar5, 2, 1);
						}
						ITEMSET::_CLEAR_ITEMSET(iLocal_602);
						ENTITY::_0x886171A12F400B89(iLocal_622[iVar1], iLocal_602, 2);
						iVar10 = 0;
						while (iVar10 < ITEMSET::GET_ITEMSET_SIZE(iLocal_602))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar10, iLocal_602)));
							if (!func_153(iVar0) && Local_718.f_1[0 /*22*/] != iVar0)
							{
								if (ENTITY::_IS_ENTITY_ON_TRAIN_TRACK(iVar0))
								{
									if (iVar0 == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
									{
										if (!func_43(iLocal_716, 2))
										{
											if (iLocal_615 > 1)
											{
												iLocal_615 = (iLocal_615 - 1);
											}
											func_12(&iLocal_716, 2, 1);
											if (func_125(&(vLocal_627[17 /*3*/])))
											{
												func_81(&(vLocal_627[17 /*3*/]));
											}
											if (func_125(&(vLocal_627[21 /*3*/])))
											{
												func_81(&(vLocal_627[21 /*3*/]));
											}
										}
									}
									bVar2 = true;
								}
								else
								{
									iVar10++;
								}
								iVar1++;
								if (bVar2)
								{
									if (!func_43(iLocal_716, 32768))
									{
										func_134(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_152(iLocal_615), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										iLocal_615++;
										PED::SET_PED_CONFIG_FLAG(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], 492, true);
										func_12(&iLocal_716, 32768, 1);
									}
								}
								else if (func_43(iLocal_716, 32768))
								{
									if (!func_43(iLocal_716, 1073741824 /* Float: 2f */))
									{
										func_121(&(vLocal_627[21 /*3*/]));
										iLocal_615 = 0;
										PED::SET_PED_CONFIG_FLAG(Local_718.f_310[Local_718.f_1[0 /*22*/].f_11[0] /*14*/], 492, false);
										func_12(&iLocal_716, 32768, 0);
										func_12(&iLocal_716, 2, 0);
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) != Global_35)
										{
											VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], func_154(Local_718));
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
}

void func_62()
{
	if (!func_75(&uLocal_717, 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (func_43(iLocal_716, 1))
	{
		return;
	}
	if (Local_718 == 14 && !func_43(iLocal_716, 65536))
	{
		return;
	}
	if (func_155(&uLocal_717))
	{
		func_156(162, 0);
		func_14(&uLocal_717, 2);
	}
	if (func_157(25))
	{
		if (func_158(&Local_718, iLocal_603, &uLocal_717))
		{
			func_156(153, 0);
			func_14(&uLocal_717, 4);
		}
		if (func_159(&Local_718, &uLocal_717))
		{
			func_156(154, 0);
			func_14(&uLocal_717, 8);
		}
		if (func_160(&Local_718, iLocal_603, &iLocal_716, &uLocal_717))
		{
			func_156(160, 0);
			func_14(&uLocal_717, 16);
		}
		if (func_161(&Local_718, &iLocal_716, &uLocal_717))
		{
			func_156(155, 0);
			func_14(&uLocal_717, 32);
		}
		if (func_162(iLocal_603, &uLocal_717))
		{
			func_156(157, 0);
			func_14(&uLocal_717, 64);
		}
	}
}

bool func_63()
{
	if (!func_43(iLocal_716, 64))
	{
		return false;
	}
	if (func_43(iLocal_716, 4096))
	{
		return true;
	}
	if (func_163())
	{
		return true;
	}
	if (func_164())
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_BURGLARY"), 0, 0, -1);
		return true;
	}
	if (func_43(iLocal_716, 8388608))
	{
		return true;
	}
	if (VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]) == Global_35)
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_BURGLARY"), 0, 0, -1);
		return true;
	}
	return false;
}

int func_64()
{
	if (!func_43(iLocal_716, 4096))
	{
		func_81(&(vLocal_627[3 /*3*/]));
	}
	Global_1430221.f_2 = 1;
	func_139(&Local_718, iLocal_603, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716, &uLocal_717, &iLocal_606, &(Local_15[0 /*52*/]), &(Local_432[0 /*21*/]), 1, !func_165(&Local_718, iLocal_603));
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(GET_HASH_KEY("EVENT_SHOCKING_BEAT_ALARMING"), Global_35, 5f, 20f, 10f, -1f, -1f, 180f, false, false, -1, -1);
	func_81(&(Local_718.f_1106));
	func_12(&iLocal_716, 65536, 1);
	func_81(&(vLocal_627[14 /*3*/]));
	return 1;
}

void func_65(int iParam0)
{
	*iParam0 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 11000));
}

void func_66(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_67(var uParam0, var uParam1)
{
	if (func_166(uParam0, uParam1))
	{
		func_81(uParam1[18 /*3*/]);
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
}

void func_68(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= iParam0->f_1098)
	{
		return;
	}
	if (func_43(*uParam2, 512) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return;
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, GET_HASH_KEY("GUNSHOT")))
		{
			func_167(Global_35, 0, 0, 1, 1, 0);
			func_34(&(iParam0->f_1[iParam4 /*22*/].f_4), 2);
			if (!func_125(uParam1[19 /*3*/]))
			{
				func_81(uParam1[19 /*3*/]);
			}
		}
		if (func_168(uParam1, uParam2, uParam5) && iParam4 > -1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0->f_1[iParam4 /*22*/].f_8);
			iVar0 = iParam0->f_1[iParam4 /*22*/].f_11[iVar0];
			if (iVar0 > -1)
			{
				func_65(iParam6);
				func_134(iParam0->f_310[iVar0 /*14*/], Global_35, func_169(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
			}
		}
		if (func_170(uParam1))
		{
			func_121(uParam1[15 /*3*/]);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			func_98(uParam3, 134217728);
			func_12(uParam2, 512, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
			func_14(uParam3, 134217728);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
		}
	}
}

void func_69(var uParam0)
{
	if (func_43(*uParam0, 536870912) && func_172(uParam0, 0))
	{
		func_83(1);
		func_12(uParam0, 536870912, 0);
	}
}

void func_70()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		if (func_173())
		{
			func_174(1);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
			if (!LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::PLAYER_ID()))
			{
				if (func_175())
				{
					LAW::_0x75CBF20BA47E4F89(Global_36, 0);
				}
				else
				{
					LAW::_0x75CBF20BA47E4F89(Global_36, GET_HASH_KEY("LAW_CUSTOM_TRAIN_ROBBERY"));
				}
			}
			LAW::_0x987BE590FB9D41E5(1);
			LAW::_0xDCF12B89624AAC96(1);
			func_81(&(vLocal_627[18 /*3*/]));
			func_81(&(vLocal_627[19 /*3*/]));
			if (func_176())
			{
				if (func_177(&Local_718))
				{
					VEHICLE::_0x787E43477746876F(Local_718.f_1[0 /*22*/]);
					VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(Local_718.f_1[0 /*22*/], false);
					VEHICLE::_SET_TRAIN_MAX_SPEED(Local_718.f_1[0 /*22*/], 7f);
				}
			}
			else if (func_177(&Local_718))
			{
				func_178(Local_718.f_1[0 /*22*/], 0f);
				func_179();
			}
			func_12(&iLocal_716, 4, 1);
		}
		if (func_180())
		{
			func_179();
			func_12(&iLocal_716, 1024, 1);
		}
	}
}

void func_71(int iParam0)
{
	int iVar0;

	if (MISC::GET_GAME_TIMER() >= iLocal_609)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			func_65(&iLocal_609);
		}
		else if (!func_43(iLocal_716, 8) && iParam0 > -1)
		{
			if (iParam0 != 0)
			{
				if (func_43(iLocal_716, 4096))
				{
					iVar0 = func_132(iParam0);
					if (iVar0 != 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							if (func_134(iVar0, Global_35, func_181(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0))
							{
								func_65(&iLocal_609);
							}
						}
						else
						{
							func_65(&iLocal_609);
						}
					}
				}
			}
		}
	}
}

void func_72()
{
	bool bVar0;

	if ((func_125(&(Local_718.f_1109)) && func_43(iLocal_716, 33554432)) && !func_127(&(Local_718.f_1109), 3f))
	{
		return;
	}
	bVar0 = func_182(4);
	if (func_43(iLocal_716, 33554432))
	{
		if (!bVar0)
		{
			func_12(&iLocal_716, 33554432, 0);
			func_81(&(Local_718.f_1109));
		}
	}
	else if (bVar0)
	{
		func_12(&iLocal_716, 33554432, 1);
		func_81(&(Local_718.f_1109));
	}
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_43(iLocal_716, 8192))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_12(&iLocal_716, 8192, 1);
			func_12(&iLocal_716, 16, 1);
			return;
		}
	}
	if (func_43(iLocal_716, 64))
	{
		return;
	}
	if (!func_43(iLocal_716, 16))
	{
		if (func_94(Local_718, 60f, 1))
		{
			if (!func_183(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				iVar2 = (MISC::GET_FRAME_COUNT() % 7) * 7;
				iVar3 = (iVar2 + 7 - 1);
				if (iVar3 >= Local_718.f_1099)
				{
					iVar3 = (Local_718.f_1099 - 1);
				}
				iVar1 = iVar2;
				while (iVar1 <= iVar3)
				{
					iVar0 = Local_718.f_310[iVar1 /*14*/];
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
					}
					else
					{
						iVar1++;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 190, true);
					PED::_0xC6C4E15CF7D52FEA(iVar0, 1000f);
					func_174(1);
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
					if (!LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::PLAYER_ID()))
					{
						if (func_175())
						{
							LAW::_0x75CBF20BA47E4F89(Global_36, 0);
						}
						else
						{
							LAW::_0x75CBF20BA47E4F89(Global_36, GET_HASH_KEY("LAW_CUSTOM_TRAIN_ROBBERY"));
						}
					}
					LAW::_0x987BE590FB9D41E5(1);
					LAW::_0xDCF12B89624AAC96(1);
					LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_TRAIN_ROBBERY"), 2);
					LAW::_0xF0B67BAD53C35BD9(iVar0, Global_35, iVar0, Global_36, GET_HASH_KEY("CRIME_TRAIN_ROBBERY"));
					PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 32768, false);
					func_12(&iLocal_716, 16, 1);
				}
			}
		}
	}
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_75(var uParam0, int iParam1)
{
	return func_11(*uParam0, iParam1);
}

struct<2> func_76(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_78()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]))
	{
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(Local_718.f_1[0 /*22*/], true);
		VEHICLE::_0xDC69F6913CCA0B99(Local_718.f_1[0 /*22*/], 0);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 10f);
		VEHICLE::_SET_TRAIN_MAX_SPEED(Local_718.f_1[0 /*22*/], 10f);
	}
}

void func_79(int iParam0)
{
	func_80(iParam0, 16);
}

void func_80(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

void func_81(var uParam0)
{
	func_184(uParam0, 0f);
}

void func_82()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_83(int iParam0)
{
	char* sVar0;

	sVar0 = func_185(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_186(sVar0, 0);
	}
}

void func_84(int* iParam0)
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

void func_85(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	else if (iParam0->f_1[iParam1 /*22*/].f_6 == 3)
	{
		return 2;
	}
	else if (iParam0->f_1[iParam1 /*22*/].f_6 == 1)
	{
		return 2;
	}
	else if (iParam0->f_1[iParam1 /*22*/].f_6 == 2)
	{
		return 7;
	}
	return 0;
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_187() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_187() != -1)
	{
		uVar3 = Global_36638.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36638.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

void func_89(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_188(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_189(iParam0, 4);
		}
		else
		{
			func_190(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_191(iParam0, 4);
	}
	else
	{
		func_192(iParam0, 33554432);
	}
	INVENTORY::_0x9B4E793B1CB6550A();
	func_193(iParam0);
}

bool func_90(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_17(iVar0))
	{
		return false;
	}
	if (func_77(iVar0, 1) || func_77(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, bool bParam1, bool bParam2)
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
		if (func_194())
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
		iVar0 = func_195(Global_1898164.f_1[0 /*5*/]);
		if (func_196(iVar0) && func_197(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_198(Global_1898164.f_1[0 /*5*/]))
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

int func_92(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_93(int iParam0)
{
	if ((*iParam0 == 0 || *iParam0 == 1) || *iParam0 == 14)
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0, float fParam1, bool bParam2)
{
	if (iParam0 != 14 && !bParam2)
	{
		return func_199(iParam0, Global_36) > fParam1;
	}
	return !func_124(iParam0, &(Local_718.f_1[0 /*22*/]), fParam1, -1);
}

bool func_95(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	vParam0.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_3))
		{
			if (Global_1888801[iVar0 /*35*/].f_20 == 1 || (!bParam4 && Global_1888801[iVar0 /*35*/].f_20 == 2))
			{
				vVar1 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar0 /*35*/].f_3) };
				vVar1.f_2 = 0f;
				fVar4 = BUILTIN::VDIST2(vParam0, vVar1);
				if (fVar4 < (fParam3 * fParam3))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_96(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_97()
{
	int iVar0;

	iVar0 = func_200(0, 0);
	if (func_201(iVar0))
	{
		return true;
	}
	iVar0 = func_202(0, 0);
	if (func_201(iVar0))
	{
		return true;
	}
	return false;
}

void func_98(var uParam0, int iParam1)
{
	if (func_75(uParam0, iParam1))
	{
		func_74(uParam0, iParam1);
	}
}

void func_99(var uParam0)
{
	if (!func_43(*uParam0, 4194304))
	{
		func_203(func_76(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("TRAIN")), 1);
		func_12(uParam0, 4194304, 1);
	}
}

bool func_100()
{
	if (func_43(iLocal_716, 65536))
	{
		return false;
	}
	if (func_204())
	{
		return true;
	}
	return false;
}

Vector3 func_101(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_102(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0->f_1[iParam1 /*22*/]);
	iParam0->f_1[iParam1 /*22*/].f_6 = func_205(iVar0);
	iParam0->f_1[iParam1 /*22*/].f_7 = func_206(iVar0);
}

void func_104(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, char* sParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char cVar9[16];
	char cVar11[16];
	int iVar15;
	vector3 vVar16;
	vector3 vVar19;

	vVar6 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
	vVar6.x = 0f;
	vVar6.f_1 = 0f;
	StringCopy(&cVar9, "Car_", 16);
	if (!bParam8)
	{
		MISC::_INT_TO_STRING(iParam2, "%d", &cVar11);
		StringConCat(&cVar9, &cVar11, 16);
		if (bParam6)
		{
			StringConCat(&cVar9, "def", 16);
		}
	}
	else
	{
		StringCopy(&cVar9, sParam9, 16);
	}
	if ((fParam3 != -1f || fParam4 != -1f) || fParam5 != -1f)
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), vVar6, fParam3, fParam4, fParam5, &cVar9);
	}
	else
	{
		iVar15 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		MISC::GET_MODEL_DIMENSIONS(iVar15, &vVar0, &vVar3);
		vVar16 = { (1f * (vVar3.x - vVar0.x)), (1f * (vVar3.y - vVar0.y)), (vVar3.z - vVar0.z) };
		if (bParam6)
		{
			if (iVar15 != GET_HASH_KEY("CABOOSE01X"))
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 4f);
			}
			else
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 2.2f);
			}
			vVar16.f_2 = 2f;
		}
		*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), vVar6, vVar16, &cVar9);
	}
	vVar19 = { 0f, iParam7, ((vVar3.z - vVar0.z) / 2f) };
	if (bParam6)
	{
		vVar19.f_2 = 2f;
	}
	PED::_0x7C00CFC48A782DC0(*uParam1, *uParam0, vVar19, 0f, 0f, 0f, 2, 1);
}

int func_105(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[0]))
		{
		}
		iVar1 = 1;
		while (iVar1 <= (*uParam0 - 1))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE((*uParam0)[0], iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				(*uParam0)[iVar1] = iVar0;
			}
			else
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return *uParam0;
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_1[iParam1 /*22*/].f_11[iVar0] = -1;
		iVar0++;
	}
}

int func_107()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return GET_HASH_KEY("P_CS_BILLSTACK01X");
		case 1:
			return GET_HASH_KEY("P_FOLDEDBILLS01X");
		case 2:
			return GET_HASH_KEY("P_MONEYBAG01X");
		default:
			break;
	}
	return GET_HASH_KEY("P_CS_BILLSTACK01X");
}

void func_108(var uParam0, int iParam1)
{
	func_207(uParam0, iParam1);
}

int func_109(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (iParam0->f_1[iVar0 /*22*/].f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	char cVar13[32];
	char cVar17[32];
	int iVar21;
	int iVar22;
	vector3 vVar23;

	iVar21 = iParam0->f_1[iParam1 /*22*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		return 0;
	}
	StringCopy(&cVar13, "Car_", 32);
	MISC::_INT_TO_STRING(iParam1, "%d", &cVar17);
	StringConCat(&cVar13, &cVar17, 32);
	StringConCat(&cVar13, "_ScenarioBlocker", 32);
	vVar7 = { ENTITY::GET_ENTITY_ROTATION(iVar21, 2) };
	iVar22 = ENTITY::GET_ENTITY_MODEL(iVar21);
	MISC::GET_MODEL_DIMENSIONS(iVar22, &vVar1, &vVar4);
	vVar23 = { (vVar4.x - vVar1.x), (vVar4.y - vVar1.y), (vVar4.z - vVar1.z) };
	vVar23.f_1 = (vVar23.y / 2f);
	if (bParam2)
	{
		vVar10 = { 0f, ((vVar23.y / 2f) - (vVar23.y / 4f)), 0f };
	}
	else
	{
		vVar10 = { 0f, ((-vVar23.y / 2f) + (vVar23.y / 4f)), 0f };
	}
	iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iVar21, true, false), vVar7, vVar23, &cVar13);
	PED::_0x7C00CFC48A782DC0(iVar0, iVar21, vVar10, 0f, 0f, 0f, 2, 1);
	return iVar0;
}

var func_111(int iParam0)
{
	func_208(iParam0, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 0, 0, 0, -1, -1, 32);
	POPULATION::_0xB56D41A694E42E86(iParam0, 0, 0, 0, -1, -1, 32);
	return PED::_0x4C39C95AE5DB1329(iParam0, false, 15);
}

int func_112(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0->f_1098 - 1);
	while (iVar0 >= 0)
	{
		if (iParam0->f_1[iVar0 /*22*/].f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return -1;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7 != 0)
					{
						STREAMING::REQUEST_MODEL(iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7, false);
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		STREAMING::REQUEST_MODEL(func_136(), false);
	}
}

void func_114(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_210(func_209(iVar0), uParam0);
		iVar0++;
	}
}

bool func_115()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(func_185(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_116(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7 != 0 && !STREAMING::HAS_MODEL_LOADED(iParam0->f_941[iVar0 /*52*/].f_3[iVar1 /*12*/].f_7))
					{
						return false;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		if (!STREAMING::HAS_MODEL_LOADED(func_136()))
		{
			return false;
		}
	}
	return true;
}

int func_117(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((uParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((uParam3[iVar0 /*12*/])->f_7 != 0 && !func_211((uParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((uParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (uParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((uParam3[iVar8 /*12*/])->f_8, *(uParam3[iVar0 /*12*/])) };
					if (func_211((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam3[iVar0 /*12*/])->f_8, (uParam3[iVar8 /*12*/])->f_8, 0, *(uParam3[iVar0 /*12*/]), (uParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_211((uParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(uParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(uParam3[iVar0 /*12*/]) };
					}
					if (!func_211((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_212(&vVar5, (uParam3[iVar0 /*12*/])->f_10);
					}
					if (func_211((uParam3[iVar0 /*12*/])->f_11, 64))
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(uParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((uParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_213((uParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (uParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (uParam3[iVar0 /*12*/])->f_4 };
					}
					if (func_211((uParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_214((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((uParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_211((uParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((uParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((uParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_211((uParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((uParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_211((uParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((uParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((uParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9((uParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((uParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_7 != 0)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam0->f_941[iParam1 /*52*/] /*22*/], iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/]) };
			fVar4 = (ENTITY::GET_ENTITY_HEADING(iParam0->f_1[iParam0->f_941[iParam1 /*52*/] /*22*/]) + iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_3);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_8, vVar1, fVar4, true, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_8, iParam0->f_1[iParam0->f_941[iParam1 /*52*/] /*22*/], 0, iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/], 0f, 0f, iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_3, false, false, false, false, 2, true, false, false);
			ENTITY::SET_ENTITY_PROOFS(iParam0->f_941[iParam1 /*52*/].f_3[iVar0 /*12*/].f_8, 6, false);
		}
		iVar0++;
	}
}

void func_119(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_1[iParam1 /*22*/].f_4, 65536))
	{
		return;
	}
	switch (iParam0->f_1[iParam1 /*22*/].f_3)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
			{
				if (func_215(iParam0, iParam1))
				{
					ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 1);
				}
				func_74(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
				if (!func_11(iParam0->f_1[iParam1 /*22*/].f_4, 131072))
				{
					PED::_0xF008E0BA1FE1D644(func_86(iParam0, iParam1));
					func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 131072);
				}
				iParam0->f_1[iParam1 /*22*/].f_3 = 2;
			}
			break;
		case 2:
			func_216(iParam0, iParam1);
			func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
			func_217(iParam1);
			break;
	}
}

void func_120(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iParam1 /*22*/].f_1))
	{
		return;
	}
	if (!func_11(iParam0->f_1[iParam1 /*22*/].f_4, 16))
	{
		if (bParam2)
		{
			func_208(iParam0->f_1[iParam1 /*22*/].f_1, 0);
		}
		VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam1 /*22*/], 1);
		VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam1 /*22*/], 1);
		ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
		func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 16);
	}
	else if (bParam2 && !func_11(iParam0->f_1[iParam1 /*22*/].f_4, 8192))
	{
		func_208(iParam0->f_1[iParam1 /*22*/].f_1, 0);
		func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 8192);
	}
}

void func_121(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_122(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_218((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_219(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_123(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_124(int iParam0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_220(iParam0) && iParam0 != 14)
	{
		return false;
	}
	if (iParam0 != 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (func_221(Global_35, VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), 1) < (fParam2 * fParam2))
			{
				return true;
			}
			*uParam1 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[iParam0 /*373*/].f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (func_222(Global_35, *uParam1, 1) < (fParam2 * fParam2))
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
			if (func_222(Global_35, iVar0, 1) < (fParam2 * fParam2))
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
				if (func_222(Global_35, iVar2, 1) < (fParam2 * fParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_125(var uParam0)
{
	return func_223(*uParam0, 1);
}

bool func_126()
{
	var uVar0;

	if (!func_1(Local_718) && Local_718 != 14)
	{
		return false;
	}
	if (Local_718 == 14)
	{
		uVar0 = VEHICLE::_0x45853F4E17D847D5(Local_718.f_1[0 /*22*/]);
	}
	else
	{
		uVar0 = Global_1425371[Local_718 /*373*/].f_1;
	}
	if (!VEHICLE::_0x0516FAE561276EFC(uVar0))
	{
		return false;
	}
	return !VEHICLE::_0x37D238BE69F7378A(uVar0);
}

bool func_127(var uParam0, float fParam1)
{
	if (!func_125(uParam0))
	{
		return false;
	}
	if (func_224(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_128(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				return false;
			}
			if (PED::IS_PED_ON_SPECIFIC_VEHICLE(*uParam1, iParam0->f_1[iVar0 /*22*/]))
			{
				return true;
			}
			if (func_225(*uParam1, iParam0->f_1[iVar0 /*22*/], 0))
			{
				return true;
			}
			if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iVar0 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(*uParam1, iParam0->f_1[iVar0 /*22*/].f_1, true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_129(int iParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	float fVar5;

	if (VEHICLE::_0xE887BD31D97793F6(iParam0->f_1[0 /*22*/]))
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) > 0.2f)
	{
		return false;
	}
	if (VEHICLE::_0xDE8C5B9F65017FA1(iParam0->f_1[0 /*22*/]) <= 0)
	{
		return false;
	}
	uVar1 = VEHICLE::_0xAF787E081AC4A8EE(iParam0->f_1[0 /*22*/]);
	iVar0 = VEHICLE::_0x86FA6D8B48667D75(iParam0->f_1[0 /*22*/]);
	if (iVar0 >= 0)
	{
		vVar2 = { VEHICLE::_0xBA958F68031DDBFC(uVar1, iVar0) };
		fVar5 = func_96(iParam0->f_1[0 /*22*/], vVar2, 1);
		if (fVar5 < 25f)
		{
			return true;
		}
	}
	iVar0 = VEHICLE::_0x1180A2974D251B7B(iParam0->f_1[0 /*22*/]);
	if (iVar0 >= 0)
	{
		vVar2 = { VEHICLE::_0xBA958F68031DDBFC(uVar1, iVar0) };
		fVar5 = func_96(iParam0->f_1[0 /*22*/], vVar2, 1);
		if (fVar5 < 25f)
		{
			return true;
		}
	}
	return false;
}

bool func_130(var uParam0, float fParam1)
{
	if (func_127(uParam0, fParam1))
	{
		func_121(uParam0);
		return true;
	}
	return false;
}

bool func_131(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_11(Local_718.f_1[iParam0 /*22*/].f_4, 1))
	{
		if (func_11(Local_718.f_1[iParam0 /*22*/].f_4, 4))
		{
			if (Local_718.f_1[iParam0 /*22*/].f_8 <= 0 || Local_718.f_1[iParam0 /*22*/].f_9 >= Local_718.f_1[iParam0 /*22*/].f_8)
			{
				return true;
			}
			iVar0 = 0;
			while (iVar0 < Local_718.f_1[iParam0 /*22*/].f_8)
			{
				iVar1 = Local_718.f_1[iParam0 /*22*/].f_11[iVar0];
				if (func_226(iParam0, iVar1))
				{
					return false;
				}
				iVar0++;
			}
			func_34(&(Local_718.f_1[iParam0 /*22*/].f_4), 1);
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Local_718.f_1[iParam0 /*22*/].f_8 == 0)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_718.f_1[iParam0 /*22*/].f_8);
	iVar2 = 0;
	while (!func_227(iParam0, iVar0) && iVar1 < 10)
	{
		iVar0 = func_228(0, Local_718.f_1[iParam0 /*22*/].f_8, iVar0);
		iVar1++;
	}
	iVar3 = Local_718.f_1[iParam0 /*22*/].f_11[iVar0];
	if (func_227(iParam0, iVar0))
	{
		iVar2 = Local_718.f_310[iVar3 /*14*/];
	}
	return iVar2;
}

char* func_133(bool bParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
			case default:
				return "PLEAD";
			case 1:
				return "INTIMIDATED_AGAIN_GEN";
			case 2:
				return "GENERIC_FRIGHTENED_HIGH";
				switch (iVar0)
				{
					case 0:
					case default:
						return "INTIMIDATED_AGAIN_ROB";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
						default:
							break;
				}
				default:
					break;
		}
	}
}

bool func_134(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_229(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

char* func_135(bool bParam0)
{
	if (bParam0)
	{
		return "GENERIC_CURSE_MED";
	}
	return "WHATS_GOING_ON";
}

int func_136()
{
	return GET_HASH_KEY("S_VAULT_SML_L_VAL01X");
}

int func_137(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 1;
	}
	if (!PROPSET::IS_PROP_SET_FULLY_LOADED(iParam0))
	{
		return 0;
	}
	iVar8 = -1;
	fVar10 = 99999.9f;
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar6 = PROPSET::_GET_ENTITIES_FROM_PROP_SET(iParam0, iVar0, iParam1, false, false);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (iVar7 < iVar1)
		{
			iVar1[iVar7] = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar0));
			fVar9 = func_96(iVar1[iVar7], vParam3, 1);
			if (fVar9 < fVar10 && (fParam6 < 0f || fVar9 < fParam6))
			{
				fVar10 = fVar9;
				iVar8 = iVar7;
			}
		}
	else
	{
		}
		else
		{
			iVar7++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::CLEAN_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar8 >= 0)
	{
		*uParam2 = iVar1[iVar8];
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)
{
	if (!bParam0)
	{
		return -0.3f, -0.025f, -0.8f;
	}
	return 1.35f, -0.52f, 0.94f;
}

int func_139(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, int iParam7, var uParam8, int* iParam9, bool bParam10, bool bParam11)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (func_43(*uParam5, 4096))
	{
		return 0;
	}
	if (!func_11(iParam0->f_1[iParam1 /*22*/].f_4, 2))
	{
		if (!func_43(*uParam5, 536870912))
		{
			func_83(0);
			func_12(uParam5, 536870912, 1);
		}
		if (bParam10 || bParam11)
		{
			if (func_230(iParam0, uParam5, iParam1, bParam10) && !bParam11)
			{
				if (iParam0->f_1[iParam1 /*22*/].f_6 == 2)
				{
					func_231(iParam0->f_1[iParam1 /*22*/].f_8, iParam0->f_1[iParam1 /*22*/].f_7);
				}
			}
			func_232(uParam5);
			func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 2);
			if (!func_125(uParam2[12 /*3*/]))
			{
				func_81(uParam2[12 /*3*/]);
			}
			func_81(uParam2[15 /*3*/]);
			func_45(iParam0, iParam1);
			if (*iParam4 != 0)
			{
				func_233(uParam3, iParam4);
			}
			return 1;
		}
		if (!func_230(iParam0, uParam5, iParam1, 0))
		{
			return 0;
		}
		if (!func_43(*uParam5, 134217728))
		{
			func_234(iParam0, iParam1, uParam2, uParam5, uParam6, iParam7, uParam8, iParam9);
			if (iParam0->f_1[iParam1 /*22*/].f_6 == 2)
			{
				func_231(iParam0->f_1[iParam1 /*22*/].f_8, iParam0->f_1[iParam1 /*22*/].f_7);
			}
			func_232(uParam5);
			func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 2);
			if (!func_125(uParam2[12 /*3*/]))
			{
				func_81(uParam2[12 /*3*/]);
			}
			func_45(iParam0, iParam1);
			if (*iParam4 != 0)
			{
				func_233(uParam3, iParam4);
			}
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (func_11(iParam0->f_1[iVar0 /*22*/].f_4, 32768))
		{
			func_12(&iLocal_716, 16777216, 1);
			return;
		}
		iVar0++;
	}
	func_12(&iLocal_716, 16777216, 0);
}

bool func_141(var uParam0)
{
	if (func_43(*uParam0, 64))
	{
		return true;
	}
	if (func_43(*uParam0, 4096))
	{
		return true;
	}
	if (func_43(*uParam0, 1048576))
	{
		return true;
	}
	if (func_43(*uParam0, 67108864))
	{
		return true;
	}
	if (func_43(*uParam0, 2048))
	{
		return true;
	}
	if (func_43(*uParam0, 2097152))
	{
		return true;
	}
	if (func_43(*uParam0, 1024))
	{
		return true;
	}
	if (func_43(*uParam0, 8192))
	{
		return true;
	}
	if (func_43(*uParam0, 256))
	{
		return true;
	}
	if (func_43(*uParam0, 2))
	{
		return true;
	}
	if (func_43(*uParam0, 16384))
	{
		return true;
	}
	if (func_43(*uParam0, 65536))
	{
		return true;
	}
	if (func_43(*uParam0, 32768))
	{
		return true;
	}
	if (func_43(*uParam0, 4))
	{
		return true;
	}
	return false;
}

void func_142(int iParam0, int iParam1)
{
	if (!func_11(iParam0->f_1[iParam1 /*22*/].f_4, 16384) && *iParam0 == 14)
	{
		func_235(iParam0->f_1[iParam1 /*22*/]);
		func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 16384);
	}
}

void func_143(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	func_236(&Local_718, &iLocal_716, &vLocal_627, iParam0);
	func_237(&Local_718, &iLocal_716, &vLocal_627, iParam0);
	func_238(&Local_718, &iLocal_716, &uLocal_717, iParam0);
	if (Local_718.f_1[iParam0 /*22*/].f_8 == 0)
	{
		return;
	}
	func_239(iParam0);
	iVar0 = 0;
	iVar1 = (Local_718.f_1[iParam0 /*22*/].f_8 - 1);
	if ((!func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2) && !func_43(iLocal_716, 8388608)) && func_125(&(vLocal_627[8 /*3*/])))
	{
		Local_718.f_1[iParam0 /*22*/].f_21 = func_240(iParam0);
	}
	else
	{
		Local_718.f_1[iParam0 /*22*/].f_21 = 0;
	}
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		iVar2 = Local_718.f_1[iParam0 /*22*/].f_11[iVar3];
		if (iVar2 < 0)
		{
			return;
		}
		if (func_75(&uLocal_717, 268435456) && func_144(&Local_718, iParam0))
		{
			func_241(&Local_718, iVar2, iParam0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]))
		{
			if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_718.f_310[iVar2 /*14*/].f_6) && PED::IS_PED_USING_ANY_SCENARIO(Local_718.f_310[iVar2 /*14*/]))
			{
				Local_718.f_310[iVar2 /*14*/].f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_718.f_310[iVar2 /*14*/], false);
			}
			func_242(&Local_718, iVar2);
			func_243(iParam0, iVar2);
			if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 16))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_718.f_310[iVar2 /*14*/]))
				{
					if (Local_718.f_310[iVar2 /*14*/].f_4 != 19)
					{
						*bParam1 = func_244(iParam0, iVar2);
						if (*bParam1)
						{
							func_245(&Local_718, iVar2, iLocal_603);
						}
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 19);
					}
				}
				else if (LAW::_0x0EAF918F751F27BA(Local_718.f_310[iVar2 /*14*/]))
				{
					if (Local_718.f_310[iVar2 /*14*/].f_4 != 14)
					{
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 14);
					}
				}
				else if (Local_718.f_310[iVar2 /*14*/].f_4 > 0)
				{
					if (((((((Local_718.f_310[iVar2 /*14*/].f_4 != 16 && Local_718.f_310[iVar2 /*14*/].f_4 != 15) && Local_718.f_310[iVar2 /*14*/].f_4 != 19) && Local_718.f_310[iVar2 /*14*/].f_4 != 14) && Local_718.f_310[iVar2 /*14*/].f_4 != 20) && Local_718.f_310[iVar2 /*14*/].f_3 != 1) && Local_718.f_310[iVar2 /*14*/].f_3 != 0) && func_247(&Local_718, &iLocal_716, &vLocal_627, iParam0, iVar2, iLocal_603))
					{
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 15);
					}
					else if (((((((((Local_718.f_310[iVar2 /*14*/].f_4 != 19 && Local_718.f_310[iVar2 /*14*/].f_4 != 14) && Local_718.f_310[iVar2 /*14*/].f_4 != 16) && Local_718.f_310[iVar2 /*14*/].f_4 != 15) && Local_718.f_310[iVar2 /*14*/].f_4 != 20) && Local_718.f_310[iVar2 /*14*/].f_4 != 11) && Local_718.f_310[iVar2 /*14*/].f_4 != 12) && Local_718.f_310[iVar2 /*14*/].f_4 != 13) && Local_718.f_310[iVar2 /*14*/].f_3 != 1) && Local_718.f_310[iVar2 /*14*/].f_3 != 0)
					{
						if (!PED::IS_PED_USING_ANY_SCENARIO(Local_718.f_310[iVar2 /*14*/]))
						{
							if (((!PED::IS_PED_ON_VEHICLE(Local_718.f_310[iVar2 /*14*/], false) && !PED::IS_PED_IN_ANY_VEHICLE(Local_718.f_310[iVar2 /*14*/], false)) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(Local_718.f_310[iVar2 /*14*/], Local_718.f_1[iParam0 /*22*/])) && !func_148(Local_718.f_310[iVar2 /*14*/], Local_718.f_1[iParam0 /*22*/].f_1, 1, 0))
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 16);
							}
							else if (func_248(&Local_718, iVar2, iParam0, iLocal_603))
							{
								func_249(&Local_718, iVar2, iParam0);
							}
						}
					}
				}
				switch (Local_718.f_310[iVar2 /*14*/].f_4)
				{
					case 0:
						func_250(&Local_718, iVar2);
						if (func_251(iParam0, iVar2))
						{
							Local_718.f_1[0 /*22*/].f_11[0] = Local_718.f_1[iParam0 /*22*/].f_11[iVar3];
							func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
							Local_718.f_310[iVar2 /*14*/].f_3 = 0;
							PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iVar2 /*14*/], 233, true);
							PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iVar2 /*14*/], 21, true);
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 4);
						}
						else if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
						{
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 2);
						}
						else
						{
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 1);
						}
						break;
					case 4:
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						bVar4 = func_253(&Local_718, iVar2, &iLocal_716, 0);
						if (func_254(&Local_718, iVar2, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603) || bVar4)
						{
							if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 512) || func_172(&iLocal_716, 0))
							{
								func_255(&Local_718, &uLocal_1839, &iLocal_1867, &iLocal_716, iVar2);
							}
							else if ((func_256(iLocal_1867) || bVar4) || iLocal_1867 == 0)
							{
								func_257(&Local_718, &iLocal_716, iLocal_603, &uLocal_1839, &iLocal_1867, func_43(iLocal_716, 64), 0, 0);
							}
						}
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 1);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 0);
						func_260(&Local_718, iVar2);
						break;
					case 5:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 0);
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (!func_125(&(vLocal_627[7 /*3*/])))
						{
							func_81(&(vLocal_627[7 /*3*/]));
						}
						if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, -2147483648) && func_151(0, 1, Global_35, 1))
						{
							func_261(&Local_718);
							func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), -2147483648);
						}
						if (func_130(&(vLocal_627[7 /*3*/]), 15f))
						{
							TASK::_0xE7FA07624574B79A(Local_718.f_310[iVar2 /*14*/], Global_35, 2, 1, 0.5f, 1, 0, 0, 0);
						}
						bVar5 = ENTITY::GET_ENTITY_SPEED(Local_718.f_1[0 /*22*/]) < 1f;
						if (!func_125(&(vLocal_627[7 /*3*/])) || func_224(&(vLocal_627[7 /*3*/])) > 4f)
						{
							bVar6 = true;
						}
						if (func_262(&Local_718, iVar2, 10f, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603) && (func_256(iLocal_1867) || iLocal_1867 == 0))
						{
							if (bVar6 || iLocal_1867 != 4)
							{
								bVar7 = true;
							}
						}
						if ((((bVar7 || VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]) == Global_35) || (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]) && PED::_0xE33F98BD76490ABC(Local_718.f_310[iVar2 /*14*/], PLAYER::PLAYER_ID(), 0))) || (bVar6 && func_253(&Local_718, iVar2, &iLocal_716, 0))) || bVar5)
						{
							func_257(&Local_718, &iLocal_716, iLocal_603, &uLocal_1839, &iLocal_1867, (!bVar5 && (func_43(iLocal_716, 64) || func_253(&Local_718, iVar2, &iLocal_716, 0))), 1, 0);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 0);
						break;
					case 6:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 0);
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (func_151(-3.5f, 1, Global_35, 1))
						{
							func_261(&Local_718);
							PED::PED_COWER_IN_PLACE(Local_718.f_310[iVar2 /*14*/], Global_35);
							if (iLocal_1867 != 0)
							{
								func_233(&uLocal_1839, &iLocal_1867);
							}
							VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
							VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(Local_718.f_1[0 /*22*/], true);
							VEHICLE::_0x160C1B5AB48AB87C(Local_718.f_1[0 /*22*/], 9999f);
							func_12(&iLocal_716, 2048, 1);
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
								func_98(&uLocal_717, 134217728);
							}
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 7);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 0);
						break;
					case 7:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &iLocal_716, 0);
						func_252(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) != Global_35)
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
						}
						if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 256))
						{
							PED::PED_COWER_IN_PLACE(Local_718.f_310[iVar2 /*14*/], Global_35);
							func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 256);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, Local_718.f_310[iVar2 /*14*/], iParam0, iVar2, 1);
						break;
					case 1:
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_718.f_310[iVar2 /*14*/], true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_718.f_310[iVar2 /*14*/], true, true);
						}
						func_263(&Local_718, iVar2, iLocal_716);
						if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 64))
						{
							if (MISC::GET_GAME_TIMER() >= Local_718.f_310[iVar2 /*14*/].f_13)
							{
								if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 1073741824 /* Float: 2f */))
								{
									func_134(Local_718.f_310[iVar2 /*14*/], Global_35, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
								}
								PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(Local_718.f_310[iVar3 /*14*/], Global_36, 3, false);
								TASK::_0xE7FA07624574B79A(Local_718.f_310[iVar2 /*14*/], Global_35, 3, 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 7f), 1, 0, 0, 0);
								func_74(&(Local_718.f_310[iVar2 /*14*/].f_7), 64);
							}
						}
						if (func_43(iLocal_716, 256))
						{
							func_264(&Local_718, iVar2, &iLocal_716, &uLocal_717, iLocal_603);
						}
						if (!bParam2)
						{
							if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 8))
							{
								if (((func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2) || func_265(iVar2)) || func_262(&Local_718, iVar2, 10f, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603)) || (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]) && PED::_0xE33F98BD76490ABC(Local_718.f_310[iVar2 /*14*/], PLAYER::PLAYER_ID(), 0)))
								{
									func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 8);
									func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 512);
									func_139(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716, &uLocal_717, &iLocal_606, &(Local_15[iVar3 /*52*/]), &(Local_432[iVar3 /*21*/]), 1, !func_165(&Local_718, iLocal_603));
								}
							}
							if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 2))
							{
								if (iParam0 == iLocal_603 && Local_718.f_310[iVar2 /*14*/].f_3 != 1)
								{
									if (!MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
									{
										func_266(Local_718.f_310[iVar2 /*14*/], &(Local_718.f_310[iVar2 /*14*/].f_1), -1749618580, 0, 0, "BLIP_TNRB_PASSENGER");
									}
								}
								else if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
								{
									func_267(&(Local_718.f_310[iVar2 /*14*/].f_1));
								}
								if (!func_43(iLocal_716, 8))
								{
									func_268(iParam0, iVar3);
								}
							}
							else
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 12);
							}
						}
						else if (!func_43(iLocal_716, 8))
						{
							if (func_268(iParam0, iVar3))
							{
								func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 8);
							}
						}
						break;
					case 2:
						func_269(&Local_718, iVar2);
						func_270(&Local_718, &iLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]), &uLocal_1837);
						if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 8))
						{
							if (func_271(iParam0, iVar2))
							{
								func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 8);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716);
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 17);
								func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
							}
						}
						if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 8))
						{
							if (iParam0 == iLocal_603 || Local_718.f_310[iVar2 /*14*/].f_9 < 10f)
							{
								func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_716);
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 17);
							}
						}
						else
						{
							if ((iLocal_603 != iParam0 && iLocal_603 < 0) && Local_718.f_1[iParam0 /*22*/].f_6 == 3)
							{
								func_273(&Local_718, &iLocal_716, iVar2, &fLocal_621);
							}
							else
							{
								func_274(&Local_718, &vLocal_627, &iLocal_716, &uLocal_1839, &iLocal_1867, &iLocal_606, iVar2, iParam0, iLocal_603, iLocal_604, &uLocal_608);
							}
							if (func_275(&Local_718, iParam0) && func_271(iParam0, iVar2))
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 3);
							}
						}
						if (func_43(iLocal_716, 262144) && IntToFloat(MISC::GET_GAME_TIMER()) >= fLocal_694)
						{
							func_12(&iLocal_716, 262144, 0);
							func_12(&iLocal_716, 1073741824 /* Float: 2f */, 1);
						}
						break;
					case 3:
						func_269(&Local_718, iVar2);
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 17);
						break;
					case 8:
						func_268(iParam0, iVar3);
						if (func_151(0, 1, Global_35, 1))
						{
							if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 8192))
							{
								func_134(Local_718.f_310[iVar2 /*14*/], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 4096))
							{
								func_134(Local_718.f_310[iVar2 /*14*/], Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 2);
							}
							else if (Local_718.f_310[iVar2 /*14*/].f_3 == 0)
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 4);
							}
							else
							{
								func_246(&(Local_718.f_310[iVar2 /*14*/]), 1);
							}
							func_74(&(Local_718.f_310[iVar2 /*14*/].f_7), 134217728);
							func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2048);
						}
						break;
					case 9:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, iLocal_716);
						if (func_276(&Local_718, &vLocal_627, iVar2) && func_277(&Local_718, &vLocal_627, &iLocal_716, &uLocal_717, iParam0, iVar2, &iLocal_606, &iLocal_609))
						{
							func_121(&(vLocal_627[1 /*3*/]));
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 11);
						}
						break;
					case 11:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, iLocal_716);
						if (!func_125(&(vLocal_627[13 /*3*/])))
						{
							func_81(&(vLocal_627[13 /*3*/]));
						}
						func_278(&(Local_718.f_310[iVar2 /*14*/]), &iLocal_609, &uLocal_717);
						func_121(&(vLocal_627[13 /*3*/]));
						func_279(&(Local_718.f_310[iVar2 /*14*/]));
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 12);
						break;
					case 12:
						func_268(iParam0, iVar3);
						func_278(&(Local_718.f_310[iVar2 /*14*/]), &iLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, iLocal_716);
						func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
						func_74(&(Local_718.f_310[iVar2 /*14*/].f_7), 134217728);
						func_45(&Local_718, iParam0);
						if (func_151(0, 1, Local_718.f_310[iVar2 /*14*/], 1))
						{
							PED::_0x9A77DFD295E29B09(Local_718.f_310[iVar2 /*14*/], true);
							func_246(&(Local_718.f_310[iVar2 /*14*/]), 13);
						}
						if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
						{
							func_267(&(Local_718.f_310[iVar2 /*14*/].f_1));
						}
						break;
					case 13:
						func_268(iParam0, iVar3);
						func_278(&(Local_718.f_310[iVar2 /*14*/]), &iLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, iLocal_716);
						if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
						{
							func_267(&(Local_718.f_310[iVar2 /*14*/].f_1));
						}
						break;
					case 17:
						func_269(&Local_718, iVar2);
						if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
						{
							func_12(&iLocal_716, 1048576, 1);
						}
						if (!func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2))
						{
							func_34(&(Local_718.f_1[iParam0 /*22*/].f_4), 2);
						}
						func_280(&Local_718, &iLocal_716, iVar2, iParam0, iLocal_603, &iLocal_1868, &uLocal_608, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]));
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 18);
						break;
					case 18:
						func_269(&Local_718, iVar2);
						if (!func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2))
						{
							func_34(&(Local_718.f_1[iParam0 /*22*/].f_4), 2);
						}
						func_280(&Local_718, &iLocal_716, iVar2, iParam0, iLocal_603, &iLocal_1868, &uLocal_608, &(Local_432[iVar3 /*21*/]), &(Local_15[iVar3 /*52*/]));
						break;
					case 14:
						func_263(&Local_718, iVar2, iLocal_716);
						break;
					case 15:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, iLocal_716);
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 16);
						break;
					case 16:
						func_268(iParam0, iVar3);
						func_281(&Local_718, iParam0, iVar2);
						break;
					case 19:
						if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 2))
						{
							func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
						}
						if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
						{
							func_267(&(Local_718.f_310[iVar2 /*14*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iVar2 /*14*/]))
						{
							Local_718.f_310[iVar2 /*14*/].f_1 = MAP::GET_BLIP_FROM_ENTITY(Local_718.f_310[iVar2 /*14*/]);
							if (MAP::DOES_BLIP_EXIST(Local_718.f_310[iVar2 /*14*/].f_1))
							{
								func_267(&(Local_718.f_310[iVar2 /*14*/].f_1));
							}
						}
						if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 128))
						{
							func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 128);
						}
						func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2048);
						func_122(&(Local_15[iVar3 /*52*/]), 0, 0, 1, 0);
						if (Local_718.f_310[iVar2 /*14*/].f_3 == 1)
						{
							func_45(&Local_718, iLocal_603);
						}
						func_246(&(Local_718.f_310[iVar2 /*14*/]), 20);
						func_244(iParam0, iVar2);
						if (func_11(Local_718.f_310[iVar2 /*14*/].f_7, 32))
						{
							PED::RELEASE_PED_VISIBILITY_TRACKING(Local_718.f_310[iVar2 /*14*/]);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_718.f_310[iVar2 /*14*/]));
						Local_718.f_1[iParam0 /*22*/].f_9++;
						PED::_0x7D4E70A67A651C71(1);
						break;
				}
			}
			else
			{
				func_282(iParam0, iVar3);
			}
		}
		else if (!func_11(Local_718.f_310[iVar2 /*14*/].f_7, 2))
		{
			func_34(&(Local_718.f_310[iVar2 /*14*/].f_7), 2);
		}
		iVar3++;
	}
}

bool func_144(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == iParam0->f_1102)
	{
		return false;
	}
	return true;
}

void func_145(int iParam0, int iParam1)
{
	iParam0->f_1[iParam1 /*22*/].f_4 = 0;
	iParam0->f_1[iParam1 /*22*/].f_3 = 0;
	iParam0->f_1[iParam1 /*22*/].f_9 = 0;
	iParam0->f_1[iParam1 /*22*/].f_8 = 0;
	iParam0->f_1[iParam1 /*22*/].f_10 = 0;
	iParam0->f_1[iParam1 /*22*/].f_20 = -1;
	func_106(iParam0, iParam1);
	ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
	VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam1 /*22*/], 1);
	VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam1 /*22*/], 1);
	PED::_0x7D4E70A67A651C71(func_86(iParam0, iParam1));
	func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 65536);
}

void func_146(int iParam0, var uParam1, int iParam2)
{
	if (!func_75(uParam1, -2147483648))
	{
		VEHICLE::_0xD4907EF4334C7602(iParam0->f_1[iParam2 /*22*/], 0);
		VEHICLE::_0x68830738A6BFB370(iParam0->f_1[iParam2 /*22*/], 0);
	}
	func_74(&(iParam0->f_1[iParam2 /*22*/].f_4), 65536);
}

void func_147(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0);
	if (iVar0 != 0)
	{
		func_134(iVar0, Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
		func_65(&iLocal_609);
	}
}

bool func_148(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = -1;
	if (bParam1)
	{
		func_283(&Local_718, iLocal_603, &iVar2);
	}
	iVar1 = 0;
	while (iVar1 < Local_718.f_1[iParam0 /*22*/].f_8)
	{
		iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iVar1];
		if (iVar0 >= 0)
		{
			if (Local_718.f_310[iVar0 /*14*/].f_3 != 1 && Local_718.f_310[iVar0 /*14*/].f_3 != 0)
			{
				func_34(&(Local_718.f_310[iVar0 /*14*/].f_7), 64);
				if (iVar2 == iVar0)
				{
					iVar3 = 300;
					func_34(&(Local_718.f_310[iVar0 /*14*/].f_7), 1073741824 /* Float: 2f */);
				}
				else
				{
					iVar3 = (300 + MISC::GET_RANDOM_INT_IN_RANGE(300, 1000));
				}
				Local_718.f_310[iVar0 /*14*/].f_13 = (iLocal_612 + iVar3);
			}
		}
		iVar1++;
	}
}

bool func_150()
{
	int iVar0;

	if (func_43(iLocal_716, 2))
	{
		return true;
	}
	iVar0 = Local_718.f_1[0 /*22*/].f_11[0];
	if (ENTITY::IS_ENTITY_DEAD(Local_718.f_310[iVar0 /*14*/]) && ENTITY::_0x3EC28DA1FFAC9DDD(Local_718.f_310[iVar0 /*14*/], Global_35, 0, 0))
	{
		return true;
	}
	if (VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]) != Local_718.f_310[iVar0 /*14*/])
	{
		return true;
	}
	if (func_11(Local_718.f_310[iVar0 /*14*/].f_7, 4194304) || func_11(Local_718.f_310[iVar0 /*14*/].f_7, 512))
	{
		return true;
	}
	return false;
}

bool func_151(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_284(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_285(fParam0))
	{
		return false;
	}
	return true;
}

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_CURSE_MED";
		case 1:
			return "BLOCKED_GENERIC";
		case 2:
			return "GENERIC_ANGRY_REACTION";
		case 3:
			return "GENERIC_CURSE_HIGH";
		default:
			break;
	}
	return "BLOCKED_GENERIC";
}

bool func_153(int iParam0)
{
	return VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0));
}

float func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11f;
		case 1:
			return 11f;
		case 2:
			return 11f;
		case 3:
			return 11f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 3.5f;
		case 9:
			return 3.5f;
		case 10:
			return 3.5f;
		case 11:
			return 3.5f;
		case 12:
			return 3.5f;
		case 5:
			return 0f;
		case 4:
			return 11f;
		default:
			break;
	}
	return 5f;
}

bool func_155(var uParam0)
{
	if (func_75(uParam0, 2))
	{
		return false;
	}
	if (func_87(162))
	{
		return false;
	}
	if (!func_75(uParam0, 1))
	{
		return false;
	}
	return true;
}

void func_156(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_288(iVar0, iVar1);
}

bool func_157(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_289(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_158(int iParam0, int iParam1, var uParam2)
{
	if (func_75(uParam2, 4))
	{
		return false;
	}
	if (func_87(153))
	{
		return false;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return false;
	}
	if (!func_290(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

bool func_159(int iParam0, var uParam1)
{
	if (func_75(uParam1, 8))
	{
		return false;
	}
	if (func_87(154))
	{
		return false;
	}
	if (!func_291(iParam0, 1097859072 /* Float: 15f */))
	{
		return false;
	}
	if (!func_292(Global_35))
	{
		return false;
	}
	return true;
}

bool func_160(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_75(uParam3, 16))
	{
		return false;
	}
	if (func_87(160))
	{
		return false;
	}
	if (iParam1 < 0 || !func_43(*uParam2, 64))
	{
		return false;
	}
	if (!iParam0->f_1[iParam1 /*22*/].f_6 == 2)
	{
		return false;
	}
	if (iParam0->f_1[iParam1 /*22*/].f_8 <= 0)
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, var uParam1, var uParam2)
{
	if (func_75(uParam2, 32))
	{
		return false;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return false;
	}
	if (func_87(155))
	{
		return false;
	}
	if (!func_43(*uParam1, 64))
	{
		return false;
	}
	return true;
}

bool func_162(int iParam0, var uParam1)
{
	if (func_75(uParam1, 64))
	{
		return false;
	}
	if (func_87(157))
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 1)
	{
		return false;
	}
	return true;
}

bool func_163()
{
	if (!WEAPON::IS_PED_ARMED(Global_35, 4))
	{
		return false;
	}
	if (!PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		return false;
	}
	if (!func_43(iLocal_716, 128))
	{
		return false;
	}
	if (iLocal_607 < 0)
	{
		return false;
	}
	if (Local_718.f_310[iLocal_607 /*14*/].f_3 == 1)
	{
		return false;
	}
	return true;
}

bool func_164()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/])))
	{
		iVar0 = VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 8.25f))
		{
			func_12(&iLocal_716, 2097152, 1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
			return true;
		}
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (iParam0->f_1[iParam1 /*22*/].f_8 < 1)
	{
		return false;
	}
	return true;
}

bool func_166(var uParam0, var uParam1)
{
	if (!func_43(*uParam0, 4))
	{
		return false;
	}
	if (!func_43(*uParam0, 64))
	{
		return false;
	}
	return true;
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_293(iParam0, 0f, 0f, 0f, iParam1, iParam2, bParam3, iParam4, bParam5);
}

bool func_168(var uParam0, var uParam1, var uParam2)
{
	if (func_43(*uParam1, 134217728))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -808813879))
		{
			return true;
		}
	}
	else if (func_127(uParam0[15 /*3*/], func_294(*uParam2)))
	{
		*uParam2++;
		return true;
	}
	return false;
}

char* func_169()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_FRIGHTENED_MED";
		case 1:
			return "GENERIC_SHOCKED_MED";
			default:
				break;
	}
}

bool func_170(var uParam0)
{
	if (!func_125(uParam0[15 /*3*/]))
	{
		return true;
	}
	if (func_127(uParam0[15 /*3*/], 8f))
	{
		return true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2019359053))
	{
		return true;
	}
	return false;
}

int func_171()
{
	return 4992;
}

bool func_172(var uParam0, bool bParam1)
{
	struct<17> Var0;

	if (func_43(*uParam0, 1))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		LAW::_0x9C5BD8C562565CE6(&Var0);
		if (Var0.f_11 == 6)
		{
			return true;
		}
		else if (!bParam1 && (Var0.f_15 || Var0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_173()
{
	float fVar0;
	vector3 vVar1;
	var uVar4;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	vector3 vVar11;

	if (func_43(iLocal_716, 4))
	{
		return false;
	}
	if (!func_43(iLocal_716, 131072) && Local_718.f_1100 > 0)
	{
		return false;
	}
	fVar0 = 120f;
	if (func_43(iLocal_716, 8388608))
	{
		fVar0 = 60f;
	}
	if (func_127(&(vLocal_627[14 /*3*/]), fVar0))
	{
		return true;
	}
	fVar0 = 60f;
	if (func_43(iLocal_716, 8388608))
	{
		fVar0 = 30f;
	}
	if (func_127(&(vLocal_627[14 /*3*/]), fVar0))
	{
		iVar10 = func_295();
		if ((iVar10 > 0 && iVar10 < 14) && ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[iVar10 /*22*/]))
		{
			vVar11 = { ENTITY::GET_ENTITY_COORDS(Local_718.f_1[iVar10 /*22*/], true, false) };
			if (PATHFIND::GET_CLOSEST_ROAD(vVar11, 100f, 1, &vVar1, &uVar4, &uVar7, &uVar8, &uVar9, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar11, vVar1, true) < 75f)
				{
					return true;
				}
			}
		}
	}
	fVar0 = 15f;
	if (func_43(iLocal_716, 8388608))
	{
		fVar0 = 7.5f;
	}
	if (!func_127(&(vLocal_627[14 /*3*/]), fVar0))
	{
		return false;
	}
	if (fLocal_695 < 300f)
	{
		return true;
	}
	return false;
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_296(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_297(&Global_1935630, 4194304);
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

bool func_175()
{
	return (Global_1894899 & 1 != 0 && func_298() != -1);
}

bool func_176()
{
	if (!func_43(iLocal_716, 16384))
	{
		return true;
	}
	if (!VEHICLE::_0xE887BD31D97793F6(Local_718.f_1[0 /*22*/]))
	{
		return true;
	}
	if (fLocal_695 > 300f)
	{
		return true;
	}
	return false;
}

bool func_177(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_DRIVER_OF_VEHICLE(iParam0->f_1[0 /*22*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (iVar0 == Global_35)
	{
		return false;
	}
	return true;
}

void func_178(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::SET_TRAIN_SPEED(iParam0, fParam1);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fParam1);
	}
}

void func_179()
{
	VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(Local_718.f_1[0 /*22*/], true);
	VEHICLE::_0x160C1B5AB48AB87C(Local_718.f_1[0 /*22*/], -1f);
	VEHICLE::_0xDC69F6913CCA0B99(Local_718.f_1[0 /*22*/], 1);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_718.f_1[0 /*22*/], 0f);
	VEHICLE::_SET_TRAIN_MAX_SPEED(Local_718.f_1[0 /*22*/], 0f);
}

bool func_180()
{
	float fVar0;

	if (func_43(iLocal_716, 1024))
	{
		return false;
	}
	if (VEHICLE::_0xE887BD31D97793F6(Local_718.f_1[0 /*22*/]) && fLocal_695 < 100f)
	{
		return true;
	}
	if (!func_299())
	{
		return false;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_718.f_1[0 /*22*/], -1) == Global_35)
	{
		return false;
	}
	if (iLocal_603 < 0)
	{
		return false;
	}
	if ((!func_43(iLocal_716, 131072) && !func_183(PLAYER::PLAYER_ID(), 1, 0, 1)) && Local_718.f_1100 > 0)
	{
		return false;
	}
	fVar0 = 45f;
	if (func_43(iLocal_716, 8388608))
	{
		fVar0 = 35f;
	}
	else if (func_43(iLocal_716, 32))
	{
		fVar0 = 40f;
	}
	if (func_127(&(vLocal_627[19 /*3*/]), fVar0))
	{
		return true;
	}
	if (!func_172(&iLocal_716, 1))
	{
		return false;
	}
	if (!func_127(&(vLocal_627[19 /*3*/]), 30f))
	{
		return false;
	}
	return true;
}

char* func_181()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
		case default:
			return "PLEAD";
		case 1:
			return "DONT_HURT_ME";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "GENERIC_FRIGHTENED_HIGH";
			default:
				break;
	}
}

bool func_182(int iParam0)
{
	int iVar0;

	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

int func_183(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_300(bParam1, bParam2, bParam3);
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

void func_184(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_301() - fParam1);
	func_302(uParam0, 1);
	func_303(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PRTRN_START";
		case 1:
			return "PRTRN_IDLE";
		default:
			break;
	}
	return "";
}

int func_186(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	return Global_1572887.f_12;
}

bool func_188(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_189(int iParam0, int iParam1)
{
	func_34(&(Global_1914319.f_3[iParam0 /*446*/].f_6), iParam1);
}

void func_190(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1);
}

void func_191(int iParam0, int iParam1)
{
	func_74(&(Global_1914319.f_3[iParam0 /*446*/].f_6), iParam1);
}

void func_192(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

void func_193(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

bool func_194()
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

int func_195(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_305(func_304(iParam0));
}

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_198(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_199(int iParam0, vector3 vParam1)
{
	if (func_220(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

int func_200(int iParam0, int iParam1)
{
	var uVar0;

	return func_306(&uVar0, iParam0, iParam1);
}

bool func_201(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

int func_202(int iParam0, int iParam1)
{
	var uVar0;

	return func_307(&uVar0, iParam0, iParam1);
}

void func_203(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_204()
{
	int iVar0;

	if (func_308(func_298()))
	{
		return true;
	}
	if (Local_718 != 14)
	{
		if (func_308(func_309(VEHICLE::_0x1E8A921112891651(Global_1425371[Local_718 /*373*/].f_1), 1)))
		{
			return true;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[0 /*22*/]) && func_308(func_309(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[0 /*22*/], true, false), 1)))
		{
			return true;
		}
		if (Local_718.f_1102 > 0)
		{
			iVar0 = Local_718.f_1102;
		}
		else if (Local_718.f_1098 > 0)
		{
			iVar0 = (Local_718.f_1098 - 1);
		}
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_718.f_1[Local_718.f_1102 /*22*/]) && func_308(func_309(ENTITY::GET_ENTITY_COORDS(Local_718.f_1[Local_718.f_1102 /*22*/], true, false), 1)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("NORTHCOALCAR01X"):
		case GET_HASH_KEY("NORTHSTEAMER01X"):
		case GET_HASH_KEY("PRIVATESTEAMER01X"):
		case GET_HASH_KEY("WINTERCOALCAR"):
		case GET_HASH_KEY("PRIVATECOALCAR01X"):
		case GET_HASH_KEY("WINTERSTEAMER"):
			return 0;
		case GET_HASH_KEY("PRIVATEBOXCAR01X"):
		case GET_HASH_KEY("MIDLANDREFRIGERATORCAR"):
		case GET_HASH_KEY("PRIVATEFLATCAR01X"):
		case GET_HASH_KEY("PRIVATEBOXCAR04X"):
		case GET_HASH_KEY("ARMOREDCAR03X"):
		case GET_HASH_KEY("PRIVATEARMOURED"):
		case GET_HASH_KEY("MIDLANDBOXCAR05X"):
		case GET_HASH_KEY("PRIVATEBOXCAR02X"):
		case GET_HASH_KEY("COALHOPPER01X"):
		case GET_HASH_KEY("PRIVATEBAGGAGE01X"):
			return 1;
		case GET_HASH_KEY("NORTHPASSENGER03X"):
		case GET_HASH_KEY("PRIVATEOPENSLEEPER01X"):
		case GET_HASH_KEY("PRIVATEOBSERVATIONCAR"):
		case GET_HASH_KEY("PRIVATEPASSENGER01X"):
		case GET_HASH_KEY("PRIVATEDINING01X"):
		case GET_HASH_KEY("NORTHPASSENGER01X"):
		case GET_HASH_KEY("PRIVATEOPENSLEEPER02X"):
			return 2;
		case GET_HASH_KEY("CABOOSE01X"):
			return 3;
		default:
			break;
	}
	return -1;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PRIVATEOPENSLEEPER01X"):
		case GET_HASH_KEY("PRIVATEOBSERVATIONCAR"):
		case GET_HASH_KEY("PRIVATEPASSENGER01X"):
		case GET_HASH_KEY("PRIVATEDINING01X"):
		case GET_HASH_KEY("NORTHPASSENGER01X"):
		case GET_HASH_KEY("PRIVATEOPENSLEEPER02X"):
			return 0;
		case GET_HASH_KEY("NORTHPASSENGER03X"):
			return 1;
		default:
			break;
	}
	return -1;
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_208(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
		case 1:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@PISTOLS";
		default:
			break;
	}
	return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
	return "";
}

void func_210(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			StringCopy(uParam1[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_212(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_310(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_214(float fParam0)
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

bool func_215(int iParam0, int iParam1)
{
	if (iParam0->f_1[iParam1 /*22*/].f_6 == 1)
	{
		if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.6f)
		{
			return false;
		}
	}
	return true;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		if (iParam0->f_1099 < 45 && iParam0->f_1[iParam1 /*22*/].f_8 < 8)
		{
			if (!ITEMSET::IS_ITEMSET_VALID(iLocal_601))
			{
				iLocal_601 = ITEMSET::CREATE_ITEMSET(true);
			}
			ITEMSET::_CLEAR_ITEMSET(iLocal_601);
			iVar2 = VEHICLE::_0x0E558D3A49D759D6(iParam0->f_1[iParam1 /*22*/], iLocal_601);
			iVar4 = VEHICLE::GET_DRIVER_OF_VEHICLE(iParam0->f_1[iParam1 /*22*/]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				func_311(iVar4, iLocal_601);
				iVar2++;
			}
			if ((func_312(iLocal_603, iParam1) || func_43(iLocal_716, 4096)) || func_43(iLocal_716, 1048576))
			{
				ENTITY::_0x119A5714578F4E05(iParam0->f_1[iParam1 /*22*/], 0);
				func_120(iParam0, iParam1, 0);
			}
			if (iVar2 <= iParam0->f_1[iParam1 /*22*/].f_8)
			{
				if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
				{
					ITEMSET::_CLEAR_ITEMSET(iLocal_601);
				}
				return iParam0->f_1[iParam1 /*22*/].f_8;
			}
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				iVar5 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_601));
				if (!ENTITY::IS_ENTITY_DEAD(iVar5))
				{
					if (PED::IS_PED_HUMAN(iVar5))
					{
						if (iVar5 == Global_35)
						{
						}
						else if (!LAW::_0x40851BCC33ACD9AB(iVar5) && !LAW::_0x0EAF918F751F27BA(iVar5))
						{
							if (!func_313(&iVar5))
							{
								if (iParam0->f_1099 >= 45)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
									}
									func_84(&iVar5);
									Jump @520; //curOff = 363
								}
								else if (iParam0->f_1[iParam1 /*22*/].f_8 >= 8)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
									}
									func_84(&iVar5);
								}
								else
								{
									iVar3 = iParam0->f_1[iParam1 /*22*/].f_8;
									iParam0->f_310[iParam0->f_1099 /*14*/] = iVar5;
									iParam0->f_1[iParam1 /*22*/].f_11[iVar3] = iParam0->f_1099;
									func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 4);
									iVar0++;
									iParam0->f_1[iParam1 /*22*/].f_8++;
									iParam0->f_1099++;
								}
								iVar1++;
								if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
								{
									ITEMSET::_CLEAR_ITEMSET(iLocal_601);
								}
								Jump @561; //curOff = 546
								iVar0 = iParam0->f_1[iParam1 /*22*/].f_8;
								if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
								{
									ITEMSET::_CLEAR_ITEMSET(iLocal_601);
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Local_718.f_1[iParam0 /*22*/].f_8)
	{
		iVar1 = Local_718.f_1[iParam0 /*22*/].f_11[iVar0];
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_718.f_310[iVar1 /*14*/], true))
		{
		}
		else
		{
			if (func_11(Local_718.f_310[iVar1 /*14*/].f_7, 16))
			{
				func_74(&(Local_718.f_310[iVar1 /*14*/].f_7), 16);
			}
			if (func_314(iParam0, iVar0))
			{
				func_282(iParam0, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_218(int iParam0)
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

void func_219(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_218(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_315(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_316(iVar0);
	*uParam0 = 0;
}

bool func_220(int iParam0)
{
	if (func_1(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

float func_221(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_317(vVar0, vParam1);
}

float func_222(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_317(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_223(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_224(var uParam0)
{
	if (!func_125(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_318(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_301() - uParam0->f_1);
}

bool func_225(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return false;
	}
	if (!func_148(Local_718.f_310[iParam1 /*14*/], Local_718.f_1[iParam0 /*22*/].f_1, 1, 0))
	{
		return false;
	}
	if (Local_718.f_310[iParam1 /*14*/].f_4 > 1)
	{
		return false;
	}
	if (func_11(Local_718.f_310[iParam1 /*14*/].f_7, 2))
	{
		return false;
	}
	return true;
}

bool func_227(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
	if (iVar0 < 0)
	{
		return false;
	}
	if (!func_319(Local_718.f_310[iVar0 /*14*/], 0))
	{
		return false;
	}
	if (Local_718.f_310[iVar0 /*14*/].f_3 == 1)
	{
		return false;
	}
	if (LAW::_0x0EAF918F751F27BA(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	return true;
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_320())
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
			iVar0 = func_321(func_320(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_229(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_175())
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
				if (func_322(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_323(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_81(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_324(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_321(func_325(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_230(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_43(*uParam1, 64))
	{
		return false;
	}
	if (func_43(*uParam1, 256))
	{
		return false;
	}
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam0->f_1[iParam2 /*22*/].f_8 < 1)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	if (func_43(*uParam1, 8))
	{
		return false;
	}
	if (bParam3)
	{
		return true;
	}
	if (func_172(uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_231(int iParam0, int iParam1)
{
	if (iParam0 > 1)
	{
		if (iParam1 == 0)
		{
			func_134(Global_35, Global_35, "ROB_WEALTHY_GROUP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else
		{
			func_134(Global_35, Global_35, "ROB_GROUP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
	}
	else if (iParam0 > 0)
	{
		func_134(Global_35, Global_35, "ROB_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
	}
}

void func_232(var uParam0)
{
	func_12(uParam0, 4096, 1);
	func_34(&(Global_1392581.f_3), 4);
	func_89(2, 1, 0);
	func_89(1, 1, 0);
}

void func_233(var uParam0, int iParam1)
{
	if (uParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		uParam0->f_8 = func_326();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_327(uParam0, 0);
	*iParam1 = 0;
	uParam0->f_16 = 0;
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, int* iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
	func_14(uParam4, 134217728);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	if (!func_328())
	{
		iVar0 = func_329(iParam5, 1);
	}
	else
	{
		iVar0 = func_330(Global_35, 0, 1, 0);
	}
	if (func_201(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar2, 0, -1f, -1f, -1f);
		}
		TASK::TASK_PLAY_ANIM(0, func_209(iVar1), func_331(iVar1), 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	func_122(uParam6, 0, 0, 1, 0);
	func_332(iParam7, 1);
	func_81(uParam2[15 /*3*/]);
	func_12(uParam3, 134217728, 1);
	func_12(uParam3, 512, 1);
	func_34(&(iParam0->f_1[iParam1 /*22*/].f_4), 2);
}

void func_235(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::_0xCBF88256E44D5D39(iParam0, 1);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iParam0, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam0, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0, true);
		AITRANSPORT::_SET_TRANSPORT_CONFIG_FLAG(iParam0, 0, false);
	}
}

void func_236(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_333())
	{
		if (func_125(uParam2[19 /*3*/]))
		{
			func_121(uParam2[19 /*3*/]);
		}
		return;
	}
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_DISTURBANCE"), 0, 0, -1);
		if (!func_125(uParam2[19 /*3*/]))
		{
			func_81(uParam2[19 /*3*/]);
		}
	}
	if (!func_43(*uParam1, 32))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_1[iParam3 /*22*/], true, false), (19f / 2f), true))
		{
			func_12(uParam1, 32, 1);
		}
	}
}

void func_237(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_43(*uParam1, 1048576))
	{
		if (func_11(iParam0->f_1[iParam3 /*22*/].f_4, 256))
		{
			iVar1 = 0;
			while (iVar1 < iParam0->f_1[iParam3 /*22*/].f_8)
			{
				iVar0 = iParam0->f_1[iParam3 /*22*/].f_11[iVar1];
				if ((iVar0 >= 0 && iParam0->f_310[iVar0 /*14*/].f_3 == 1) && PED::IS_PED_SHOOTING(iParam0->f_310[iVar0 /*14*/]))
				{
					func_12(uParam1, 1048576, 1);
					if (!func_125(uParam2[19 /*3*/]))
					{
						func_81(uParam2[19 /*3*/]);
					}
				}
				iVar1++;
			}
		}
	}
}

void func_238(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_75(uParam2, 268435456))
	{
		if (func_11(iParam0->f_1[iParam3 /*22*/].f_4, 32768))
		{
			func_74(&(iParam0->f_1[iParam3 /*22*/].f_4), 32768);
		}
		return;
	}
	if (func_334(iParam0, uParam1, uParam2, iParam3))
	{
		if (func_335(iParam0, iParam3))
		{
			func_34(&(iParam0->f_1[iParam3 /*22*/].f_4), 32768);
		}
		else
		{
			func_74(&(iParam0->f_1[iParam3 /*22*/].f_4), 32768);
		}
	}
}

void func_239(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Local_718.f_1[iParam0 /*22*/].f_1) && FIRE::_IS_EXPLOSION_IN_VOLUME(-1, Local_718.f_1[iParam0 /*22*/].f_1))
	{
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_VANDALISM_VEHICLE"), 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_VEHICLE_DESTRUCTION"), 0, 0, -1);
		func_174(1);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), GET_HASH_KEY("CRIME_TRAIN_ROBBERY"), 0, 0, 0, 0, 0, 0, 0);
		if (!LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::PLAYER_ID()))
		{
			if (func_175())
			{
				LAW::_0x75CBF20BA47E4F89(Global_36, 0);
			}
			else
			{
				LAW::_0x75CBF20BA47E4F89(Global_36, GET_HASH_KEY("LAW_CUSTOM_TRAIN_ROBBERY"));
			}
		}
		LAW::_0x987BE590FB9D41E5(1);
		LAW::_0xDCF12B89624AAC96(1);
	}
}

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = -1;
	iVar2 = -1;
	iVar0 = iParam0;
	while (iVar0 >= 1)
	{
		if (func_11(Local_718.f_1[iVar0 /*22*/].f_4, 2))
		{
			iVar1 = MISC::ABSI((iParam0 - iVar0));
			Jump @87; //curOff = 51
		}
		else if (Local_718.f_1[iVar0 /*22*/].f_8 == 0)
		{
			iVar3++;
		}
		iVar0 = (iVar0 + -1);
	}
	if (iVar1 > -1 && iVar3 > 0)
	{
		iVar1 = (iVar1 + iVar3 * 1);
	}
	iVar3 = 0;
	iVar0 = iParam0;
	while (iVar0 <= (Local_718.f_1098 - 1))
	{
		if (func_11(Local_718.f_1[iVar0 /*22*/].f_4, 2))
		{
			iVar2 = MISC::ABSI((iParam0 - iVar0));
			Jump @198; //curOff = 162
		}
		else if (Local_718.f_1[iVar0 /*22*/].f_8 == 0)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar2 > -1 && iVar3 > 0)
	{
		iVar2 = (iVar2 + iVar3 * 1);
	}
	if (iVar1 >= 0 && iVar2 < 0)
	{
		return iVar1;
	}
	else if (iVar2 >= 0 && iVar1 < 0)
	{
		return iVar2;
	}
	return func_321(iVar1 < iVar2, iVar1, iVar2);
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	func_267(&(iParam0->f_310[iParam1 /*14*/].f_1));
	iParam0->f_310[iParam1 /*14*/].f_2 = 0;
	iParam0->f_310[iParam1 /*14*/].f_4 = 0;
	iParam0->f_310[iParam1 /*14*/].f_7 = 0;
	iParam0->f_310[iParam1 /*14*/].f_3 = -1;
	iParam0->f_310[iParam1 /*14*/].f_10 = 0f;
	iParam0->f_310[iParam1 /*14*/].f_9 = -1f;
	iParam0->f_310[iParam1 /*14*/].f_8 = -1;
	iParam0->f_310[iParam1 /*14*/].f_11 = -1;
	iParam0->f_310[iParam1 /*14*/].f_13 = 0;
	iParam0->f_310[iParam1 /*14*/].f_12 = 0;
	iParam0->f_310[iParam1 /*14*/].f_6 = 0;
	PED::SET_PED_KEEP_TASK(iParam0->f_310[iParam1 /*14*/], true);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_310[iParam1 /*14*/]));
	iParam0->f_310[iParam1 /*14*/] = 0;
	iParam0->f_1[iParam2 /*22*/].f_8 = (iParam0->f_1[iParam2 /*22*/].f_8 - 1);
	iParam0->f_1099 = (iParam0->f_1099 - 1);
}

void func_242(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		iParam0->f_310[iParam1 /*14*/].f_9 = func_322(iParam0->f_310[iParam1 /*14*/], 1, 1);
	}
	else
	{
		iParam0->f_310[iParam1 /*14*/].f_9 = 9999.9f;
	}
}

void func_243(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!func_125(&(vLocal_627[8 /*3*/])))
	{
		func_81(&(vLocal_627[8 /*3*/]));
	}
	if (!func_11(Local_718.f_310[iParam1 /*14*/].f_7, 512))
	{
		if (func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2))
		{
			func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
			func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
		}
		else if (func_43(iLocal_716, 8388608))
		{
			func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
			func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
		}
		else if (func_127(&(vLocal_627[8 /*3*/]), 3f))
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			iVar1 = Local_718.f_1[iParam0 /*22*/].f_21;
			if (iVar1 == 0)
			{
				func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
				func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
			}
			else
			{
				fVar2 = (1f / BUILTIN::TO_FLOAT(iVar1));
				if (fVar0 < fVar2)
				{
					func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 512);
					func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 2048);
					func_121(&(vLocal_627[8 /*3*/]));
				}
			}
		}
	}
}

int func_244(int iParam0, int iParam1)
{
	if (!func_11(Local_718.f_310[iParam1 /*14*/].f_7, 128) && func_336(Local_718.f_310[iParam1 /*14*/], Global_35))
	{
		func_34(&(Local_718.f_1[iParam0 /*22*/].f_4), 8);
		func_12(&iLocal_716, 8388608, 1);
		func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 128);
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_1098)
	{
		if (func_148(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iVar1 /*22*/].f_1, 0, 0))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iParam2 >= 0)
	{
		if (iParam2 > iVar0)
		{
			iVar2 = iVar0;
			iVar3 = iParam2;
		}
		else
		{
			iVar2 = iParam2;
			iVar3 = iVar0;
		}
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			func_337(iParam0, iVar1);
			iVar1++;
		}
	}
	else
	{
		func_337(iParam0, iVar1);
	}
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_4)
	{
		uParam0->f_4 = iParam1;
	}
}

bool func_247(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;

	if (!func_125(uParam2[9 /*3*/]))
	{
		func_81(uParam2[9 /*3*/]);
	}
	if (!func_11(iParam0->f_1[iParam3 /*22*/].f_4, 2) && !(func_43(*uParam1, 1024) || func_43(*uParam1, 32768)))
	{
		return false;
	}
	iVar0 = (iParam0->f_1[iParam3 /*22*/].f_8 - iParam0->f_1[iParam3 /*22*/].f_9);
	if (iVar0 <= 3 && !(func_43(*uParam1, 1024) || func_43(*uParam1, 32768)))
	{
		return false;
	}
	if (iParam0->f_310[iParam4 /*14*/].f_9 < 19f && func_43(*uParam1, 64))
	{
		return false;
	}
	if ((iParam0->f_310[iParam4 /*14*/].f_4 == 11 || iParam0->f_310[iParam4 /*14*/].f_4 == 12) || iParam0->f_310[iParam4 /*14*/].f_4 == 9)
	{
		return false;
	}
	bVar1 = func_338(iParam0, uParam1, iParam3, iParam4);
	if ((!func_43(*uParam1, 1024) && !bVar1) && (((iParam5 == -1 || iParam5 == iParam3) || iParam3 == iParam5 + 1) || iParam3 == (iParam5 - 1)))
	{
		return false;
	}
	if ((func_43(*uParam1, 1024) || func_43(*uParam1, 32768)) || func_172(uParam1, 1))
	{
		fVar2 = 4f;
	}
	else if ((func_43(*uParam1, 8388608) || func_11(iParam0->f_1[iParam3 /*22*/].f_4, 8)) || bVar1)
	{
		fVar2 = 15f;
	}
	else if (func_11(iParam0->f_1[iParam3 /*22*/].f_4, 64))
	{
		fVar2 = 20f;
	}
	else if (iParam5 > iParam3 + 1 || iParam5 < (iParam3 - 1))
	{
		fVar2 = 15f;
	}
	else
	{
		fVar2 = 25f;
	}
	if (iParam5 != -1)
	{
		iVar3 = MISC::ABSI((iParam5 - iParam3));
		if (iVar3 > 0)
		{
			iVar3 = (iVar3 - 1);
		}
		fVar2 = (fVar2 - (fVar2 * (0.33f * IntToFloat(iVar3))));
	}
	if (!func_127(uParam2[9 /*3*/], fVar2))
	{
		return false;
	}
	func_121(uParam2[9 /*3*/]);
	iParam0->f_1[iParam3 /*22*/].f_9++;
	func_34(&(iParam0->f_1[iParam3 /*22*/].f_4), 64);
	return true;
}

bool func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 0)
	{
		return false;
	}
	if ((iParam3 == -1 || iParam2 > iParam3 + 1) || iParam2 < (iParam3 - 1))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam1 /*14*/]))
	{
		return true;
	}
	return false;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam1 /*14*/].f_6))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false) };
		iParam0->f_310[iParam1 /*14*/].f_6 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar0, GET_HASH_KEY("PROP_VEHICHLE_SEAT_PASSENGER_TRAIN_TG"), 4f, 1, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam1 /*14*/].f_6))
	{
		if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 256))
		{
			TASK::_TASK_USE_SCENARIO_POINT_2(iParam0->f_310[iParam1 /*14*/], Global_35, iParam0->f_310[iParam1 /*14*/].f_6, 0, -1, 0, -1f, false);
		}
		else
		{
			TASK::TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam1 /*14*/], iParam0->f_310[iParam1 /*14*/].f_6, 0, -1, false, true, 0, false, -1f, false);
		}
	}
}

void func_250(int iParam0, int iParam1)
{
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0->f_310[iParam1 /*14*/], false, 0f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_310[iParam1 /*14*/], true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 178, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 315, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 301, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 32768, true);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 162, false);
	if (iParam0->f_310[iParam1 /*14*/].f_3 != 1)
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0->f_310[iParam1 /*14*/], 0, false);
		func_339(iParam0, iParam1);
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 2)
	{
		PED::_0xD355E2F1BB41087E(iParam0->f_310[iParam1 /*14*/], 0.5f);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 138, true);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 32);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 1);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 31);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 6);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 5);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 26);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 33);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 15);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 27);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 28);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 3);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 14);
		PED::_0xC163DAC52AC975D3(iParam0->f_310[iParam1 /*14*/], 16);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 1, true);
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0->f_310[iParam1 /*14*/], 24592);
	PED::_0x52A24D8A1DA89658(iParam0->f_310[iParam1 /*14*/], 2, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 186, false);
}

bool func_251(int iParam0, int iParam1)
{
	if (VEHICLE::GET_DRIVER_OF_VEHICLE(Local_718.f_1[0 /*22*/]) == Local_718.f_310[iParam1 /*14*/])
	{
		return true;
	}
	if (Local_718.f_310[iParam1 /*14*/].f_3 == 0)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_340(iParam0, iParam3, iParam4))
	{
		*uParam8 = 0;
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam3 /*14*/]))
	{
		return;
	}
	if (iParam4 < 0)
	{
		if (*uParam8 != 1)
		{
			func_341(uParam7, iParam6);
			func_342(uParam7, 0);
			*uParam8 = 1;
		}
	}
	if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 2048))
	{
		func_341(uParam7, iParam6);
		bVar0 = (func_43(*uParam1, 2048) || func_11(iParam0->f_310[iParam3 /*14*/].f_7, 134217728));
		if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 268435456))
		{
			func_343(uParam7, bVar0);
		}
		else if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
		{
			func_344(uParam7, bVar0);
		}
		else
		{
			func_342(uParam7, bVar0);
		}
		func_74(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	iVar1 = func_345(1, 0, 0) | 2048 | 16384 | 256;
	iVar2 = func_346(&(iParam0->f_310[iParam3 /*14*/]), iParam6, 19f, uParam7, 0, 3, 0, 0, iVar1, 0, 0, 2, iParam0->f_310[iParam3 /*14*/].f_9);
	if (iVar2 != -1)
	{
		func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
		func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	switch (iVar2)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(iParam0, iParam2);
			if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
			{
				func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "DEFUSE_LEFT_PROPERTY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_81(uParam5[3 /*3*/]);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 268435456);
				func_74(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
			}
			else if (!func_11(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				if (func_320())
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 4096);
			}
			break;
		case 1:
			if (!func_11(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(iParam0, iParam2);
				if (PED::IS_PED_MALE(iParam0->f_310[iParam3 /*14*/]))
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 8192);
			}
			break;
		case 2:
			func_329(&uVar3, 0);
			func_257(iParam0, uParam1, iParam4, uParam9, iParam10, 1, 0, 1);
			break;
	}
}

bool func_253(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_43(*uParam2, 64);
	fVar1 = 3f;
	if (func_333() && !bVar0)
	{
		fVar1 = (fVar1 / 2f);
	}
	if (iParam1 > -1 && !ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false), fVar1, true))
		{
			return true;
		}
		if (MISC::_0xDC416CA762BC4F43(ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false), fVar1, 1, 1) > 0)
		{
			return true;
		}
	}
	if (!bVar0 || (bVar0 && bParam3))
	{
		if (MISC::_0x7A76104CC2CC69E8(iParam0->f_1[0 /*22*/], 1, 1))
		{
			return true;
		}
		if (ENTITY::_0x3EC28DA1FFAC9DDD(iParam0->f_1[0 /*22*/], Global_35, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_254(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	int iVar0;

	if (iParam0->f_310[iParam1 /*14*/].f_4 == 19)
	{
		return false;
	}
	if (func_262(iParam0, iParam1, 10f, uParam2, iParam3, uParam4, iParam5))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (*iParam3 != 8 || WEAPON::IS_WEAPON_A_GUN(iVar0))
		{
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_310[iParam1 /*14*/]) && PED::_0xE33F98BD76490ABC(iParam0->f_310[iParam1 /*14*/], PLAYER::PLAYER_ID(), 0))
	{
		return true;
	}
	if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 512))
	{
		return true;
	}
	if (func_172(uParam4, 1) && (iParam5 != -1 || func_348(iParam0->f_310[iParam1 /*14*/], Global_35, 0, 1114636288 /* Float: 60f */, 0)))
	{
		return true;
	}
	return false;
}

void func_255(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4)
{
	if (func_43(*uParam3, 67108864))
	{
		return;
	}
	if (*iParam2 != 0)
	{
		func_233(uParam1, iParam2);
	}
	TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, 3, 1, 0f, 1, 0, 0, 0);
	if (!func_43(*uParam3, 1024) && !func_338(iParam0, uParam3, 0, iParam0->f_1[0 /*22*/].f_11[0]))
	{
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(iParam0->f_1[0 /*22*/], false);
		VEHICLE::_0x160C1B5AB48AB87C(iParam0->f_1[0 /*22*/], 0f);
		VEHICLE::_0x787E43477746876F(iParam0->f_1[0 /*22*/]);
	}
	func_246(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]), 5);
	func_74(&(iParam0->f_310[iParam4 /*14*/].f_7), 32768);
	func_74(&(iParam0->f_310[iParam4 /*14*/].f_7), 65536);
	func_74(&(iParam0->f_310[iParam4 /*14*/].f_7), 131072);
	func_12(uParam3, 67108864, 1);
}

bool func_256(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return true;
		default:
			break;
	}
	return false;
}

void func_257(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	PED::_0xAAB050DA48B57978(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], "Default_Panic", 0, -1, 4);
	if (bParam5 && (iParam7 || func_349(iParam0, uParam1, iParam2)))
	{
		func_350(iParam0);
	}
	if (!func_43(*uParam1, 64) && !bParam6)
	{
		func_255(iParam0, uParam3, iParam4, uParam1, iParam0->f_1[0 /*22*/].f_11[0]);
		func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 512);
		func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
		return;
	}
	else
	{
		func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
		func_12(uParam1, 2048, 1);
		func_246(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]), 6);
	}
}

void func_258(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	char* sVar4;
	float fVar5;
	char* sVar6;
	char* sVar7;

	bVar0 = false;
	if (VEHICLE::GET_DRIVER_OF_VEHICLE(iParam0->f_1[0 /*22*/]) == iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/])
	{
		if (iParam2 == 0)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[0 /*22*/], Global_36) };
			if (vVar1.z >= 1f)
			{
				bVar0 = true;
			}
			bVar0 = true;
		}
		else if (iParam2 == 1)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[1 /*22*/], Global_36) };
			if (vVar1.z >= 2f)
			{
				bVar0 = true;
			}
		}
		else if (!bParam6 && (iParam2 == 2 || iParam2 == 3))
		{
			bVar0 = true;
		}
	}
	if (bParam6)
	{
		if (bVar0 && func_127(uParam1[11 /*3*/], 1.5f))
		{
			if (!func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 32768))
			{
				sVar4 = func_351();
				if (*iParam0 == 2 || *iParam0 == 3)
				{
					sVar4 = "STOP_THAT";
				}
				func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, sVar4, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 32768);
				func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
				func_81(uParam1[7 /*3*/]);
			}
			else if (!func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 65536))
			{
				fVar5 = 7.5f;
				if (func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 268435456) && !func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 67108864))
				{
					fVar5 = 8.5f;
				}
				if (func_127(uParam1[7 /*3*/], fVar5))
				{
					if (func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 268435456) && !func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 67108864))
					{
						func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_352(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 67108864);
					}
					else
					{
						func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_353(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 65536);
					}
					func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
					func_81(uParam1[7 /*3*/]);
				}
			}
			else if (func_127(uParam1[7 /*3*/], 8.5f))
			{
				func_255(iParam0, uParam3, iParam4, uParam5, iParam0->f_1[0 /*22*/].f_11[0]);
				func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 2048);
			}
		}
	}
	else
	{
		if (iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_9 < 15f)
		{
			if (!func_354(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], 150319005))
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, -1, 4, 51, 1);
			}
		}
		if (!func_125(uParam1[7 /*3*/]) && func_151(0, 1, iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], 1))
		{
			func_81(uParam1[7 /*3*/]);
		}
		if (bVar0 && func_127(uParam1[7 /*3*/], 10f))
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				if (!func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 32768))
				{
					func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_355(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_34(&(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7), 32768);
					func_121(uParam1[7 /*3*/]);
				}
			}
			else if (iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_9 > 5f)
			{
				sVar6 = func_356();
				func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, sVar6, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_121(uParam1[7 /*3*/]);
			}
			else if (iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_9 < 15f)
			{
				if (!func_11(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/].f_7, 65536))
				{
					func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, func_357(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_121(uParam1[7 /*3*/]);
				}
				else
				{
					sVar7 = func_356();
					func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, sVar7, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_121(uParam1[7 /*3*/]);
				}
			}
		}
	}
}

void func_259(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		PED::_0x16F798A05BB9E3B5(iParam1);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 518218985, true) == 8)
		{
			func_358(iParam1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
			TASK::TASK_FLEE_PED(iParam1, Global_35, 3, 0, 1000f, 1000000, 0);
		}
		return;
	}
	if (!bParam4)
	{
		return;
	}
	if (func_359(iParam0, iParam3))
	{
		vVar0 = { func_360(iParam0) };
		if (func_213(vVar0))
		{
			return;
		}
		func_361(iParam0, iParam1, iParam2, iParam3, vVar0);
	}
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_310[iParam1 /*14*/]))
	{
		return;
	}
	if (!func_11(iParam0->f_310[iParam1 /*14*/].f_7, 512))
	{
		return;
	}
	if (!func_151(3f, 1, 0, 0))
	{
		return;
	}
	if (!func_125(&(iParam0->f_1112)))
	{
		func_362(&(iParam0->f_1112), 0);
		return;
	}
	if (func_127(&(iParam0->f_1112), 20f))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		switch (iVar0)
		{
			case 0:
				sVar1 = "SCARED_HELP";
				break;
			case 1:
				sVar1 = "GENERIC_FRIGHTENED_HIGH";
				break;
			case 2:
				sVar1 = "GET_AWAY_FROM_ME";
				break;
			case 3:
				sVar1 = "STOP_THAT";
				break;
			case 4:
				sVar1 = "SICK_BASTARD";
				break;
			case 5:
				sVar1 = "PLEAD";
				break;
			case 6:
				sVar1 = "PANIC_HELP";
				break;
			case 7:
				sVar1 = "NEED_HELP";
				break;
			case 8:
				sVar1 = "LEAVE_ME";
				break;
			case 9:
				sVar1 = "GENERIC_SHOCKED_HIGH";
				break;
			case 10:
				sVar1 = "GENERIC_ANGRY_SHOUT";
				break;
			default:
				sVar1 = "GENERIC_CURSE_HIGH";
				break;
		}
		func_134(iParam0->f_310[iParam1 /*14*/], Global_35, sVar1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		func_81(&(iParam0->f_1112));
	}
}

void func_261(int iParam0)
{
	func_134(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], Global_35, "SCARED_HELP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 0, 1744022339, 0, 0, 0);
	VEHICLE::_0xCFE122EC635CC2B2(iParam0->f_1[0 /*22*/], "DANGER", 0, 0);
}

bool func_262(int iParam0, int iParam1, float fParam2, var uParam3, int iParam4, var uParam5, int iParam6)
{
	if (func_363(&(iParam0->f_310[iParam1 /*14*/]), fParam2))
	{
		*iParam4 = 8;
		return true;
	}
	else if (func_364(iParam0->f_310[iParam1 /*14*/], 0, uParam3, iParam4, 0, 0) || (iParam0->f_310[iParam1 /*14*/].f_8 == iParam6 && func_365(iParam0->f_310[iParam1 /*14*/], uParam3)))
	{
		if (*iParam4 == 256)
		{
			if (func_333())
			{
				return false;
			}
			if ((((!func_43(*uParam5, 64) && iParam0->f_310[iParam1 /*14*/].f_8 >= 0) && iParam0->f_310[iParam1 /*14*/].f_8 < 14) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/])) && MISC::_0x970339EFA4FDE518(iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/], 1, 1) == 0)
			{
				func_233(uParam3, iParam4);
				return false;
			}
		}
		else if (*iParam4 == 16384)
		{
			if (!func_172(uParam5, 1))
			{
				func_233(uParam3, iParam4);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_263(int iParam0, int iParam1, var uParam2)
{
	if (((func_11(iParam0->f_310[iParam1 /*14*/].f_7, 512) || func_43(uParam2, 1048576)) && (!func_11(iParam0->f_310[iParam1 /*14*/].f_7, 256) || (MISC::GET_FRAME_COUNT() % 10) == 0)) && PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam1 /*14*/]))
	{
		if (iParam0->f_310[iParam1 /*14*/].f_12 < 0)
		{
			if (func_366(iParam0->f_310[iParam1 /*14*/], 1, 1, 1, 0))
			{
				iParam0->f_310[iParam1 /*14*/].f_12 = 0;
			}
			else
			{
				iParam0->f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 980));
			}
		}
		if (MISC::GET_GAME_TIMER() >= iParam0->f_310[iParam1 /*14*/].f_12)
		{
			PED::_0xAAB050DA48B57978(iParam0->f_310[iParam1 /*14*/], "Default_Panic", 0, -1, 4);
			if (func_367(iParam0, iParam1))
			{
				PED::_0xD8CEEED54C672B5D(iParam0->f_310[iParam1 /*14*/], Global_35, 0f, 0f, 0f, 3, 3);
			}
			else
			{
				PED::_0xD8CEEED54C672B5D(iParam0->f_310[iParam1 /*14*/], iParam0->f_310[iParam1 /*14*/], 0f, 3f, 0.5f, 3, 3);
			}
			PED::_0x9A77DFD295E29B09(iParam0->f_310[iParam1 /*14*/], true);
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iParam0->f_310[iParam1 /*14*/], Global_36, 3);
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 256);
		}
	}
}

void func_264(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;

	bVar0 = func_11(iParam0->f_310[iParam1 /*14*/].f_7, 1);
	if (func_43(*uParam2, 33554432) || iParam0->f_310[iParam1 /*14*/].f_8 != iParam4)
	{
		if (!func_75(uParam3, 1) && func_368(iParam0->f_310[iParam1 /*14*/], 1, 1, 1, 0, 0))
		{
			func_14(uParam3, 1);
		}
		if (!bVar0 && MAP::DOES_BLIP_EXIST(iParam0->f_310[iParam1 /*14*/].f_1))
		{
			MAP::BLIP_ADD_MODIFIER(iParam0->f_310[iParam1 /*14*/].f_1, -1186550032);
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 1);
		}
	}
	else if (iParam0->f_310[iParam1 /*14*/].f_8 == iParam4)
	{
		if (bVar0 && MAP::DOES_BLIP_EXIST(iParam0->f_310[iParam1 /*14*/].f_1))
		{
			MAP::BLIP_REMOVE_MODIFIER(iParam0->f_310[iParam1 /*14*/].f_1, -1186550032);
			func_74(&(iParam0->f_310[iParam1 /*14*/].f_7), 1);
		}
	}
}

bool func_265(int iParam0)
{
	if (func_127(&(Local_718.f_1106), 5f))
	{
		return false;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_BEAT_ALARMING"), Global_36, 1f) && EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(Local_718.f_310[iParam0 /*14*/], true, false), 10f))
	{
		return true;
	}
	return false;
}

void func_266(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_267(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_268(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iLocal_603)
	{
		iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
		if (func_369(&Local_718, &iLocal_716, &uLocal_717, iParam0, iVar0, &(Local_432[iParam1 /*21*/]), &(Local_15[iParam1 /*52*/]), &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_606, &iLocal_607))
		{
			func_263(&Local_718, iParam1, iLocal_716);
			return true;
		}
	}
	return false;
}

void func_269(int iParam0, int iParam1)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]) || iParam0->f_310[iParam1 /*14*/].f_4 == 19)
	{
		return;
	}
	if (func_370(iParam0, iParam1, &bVar0))
	{
		func_84(&(iParam0->f_310[iParam1 /*14*/]));
		func_246(&(iParam0->f_310[iParam1 /*14*/]), 19);
	}
	else if (bVar0)
	{
		if (!PED::IS_PED_IN_COMBAT(iParam0->f_310[iParam1 /*14*/], 0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_310[iParam1 /*14*/], true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_310[iParam1 /*14*/], GET_HASH_KEY("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_310[iParam1 /*14*/], GET_HASH_KEY("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0->f_310[iParam1 /*14*/], 0, 1, 0, 0);
			func_371(iParam0->f_310[iParam1 /*14*/], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_310[iParam1 /*14*/]));
			func_246(&(iParam0->f_310[iParam1 /*14*/]), 20);
		}
	}
}

void func_270(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;

	if (iParam4 != iParam2)
	{
		if (iParam4 < 0 && iParam0->f_1[iParam2 /*22*/].f_6 == 3)
		{
			if (iParam0->f_310[iParam3 /*14*/].f_9 < 40f)
			{
				func_372(iParam0, iParam3, iParam2, iParam6, uParam7, uParam8);
			}
			else
			{
				*uParam8 = 0;
			}
		}
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam3 /*14*/]))
	{
		return;
	}
	if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 512))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam3 /*14*/], 297, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam3 /*14*/], 315, true);
		return;
	}
	if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 2048))
	{
		func_341(uParam7, iParam6);
		if (((iParam0->f_310[iParam3 /*14*/].f_4 == 17 || iParam0->f_310[iParam3 /*14*/].f_4 == 18) || iParam0->f_310[iParam3 /*14*/].f_4 == 19) || iParam0->f_310[iParam3 /*14*/].f_4 == 20)
		{
		}
		else if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
		{
			func_373(uParam7, (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 268435456) || func_11(iParam0->f_310[iParam3 /*14*/].f_7, 134217728)));
		}
		else
		{
			func_374(uParam7, (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 268435456) || func_11(iParam0->f_310[iParam3 /*14*/].f_7, 134217728)));
		}
		func_74(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	iVar0 = func_345(1, 0, 0) | 16384;
	iVar1 = func_346(&(iParam0->f_310[iParam3 /*14*/]), iParam6, 19f, uParam7, 0, 3, 0, 0, iVar0, 0, 0, 2, iParam0->f_310[iParam3 /*14*/].f_9);
	if (iVar1 != -1)
	{
		func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
		func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 2048);
	}
	switch (iVar1)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(iParam0, iParam2);
			if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 32768))
			{
				if (func_11(iParam0->f_310[iParam3 /*14*/].f_7, 524288))
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "DEFUSE_LEFT_PROPERTY_KEEP_GOING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "DEFUSE_LEFT_PROPERTY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_81(uParam5[3 /*3*/]);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 268435456);
				func_74(&(iParam0->f_310[iParam3 /*14*/].f_7), 134217728);
			}
			else if (!func_11(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				if (func_320())
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 4096);
			}
			break;
		case 1:
			if (!func_11(iParam0->f_310[iParam3 /*14*/].f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(iParam0, iParam2);
				if (PED::IS_PED_MALE(iParam0->f_310[iParam3 /*14*/]))
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, iParam0->f_310[iParam3 /*14*/], func_347(&(iParam0->f_310[iParam3 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam3 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(&(iParam0->f_310[iParam3 /*14*/]), 8);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 4096);
				func_34(&(iParam0->f_310[iParam3 /*14*/].f_7), 8192);
			}
			break;
		case 2:
			break;
	}
}

bool func_271(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;

	if (Local_718.f_310[iParam1 /*14*/].f_4 == 19)
	{
		return false;
	}
	if (!func_11(Local_718.f_310[iParam1 /*14*/].f_7, 4))
	{
		if (func_262(&Local_718, iParam1, 10f, &uLocal_1839, &iLocal_1867, &iLocal_716, iLocal_603))
		{
			if (iLocal_1867 != 256 || iLocal_603 < 0)
			{
				func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 4);
			}
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_11(Local_718.f_310[iParam1 /*14*/].f_7, 16384))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(iLocal_716, 67108864))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(iLocal_716, 2048))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(iLocal_716, 1048576))
		{
			bVar0 = true;
		}
	}
	if (!bVar0 && func_11(Local_718.f_1[iParam0 /*22*/].f_4, 2))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_265(iParam1))
	{
		bVar0 = true;
	}
	if ((!bVar0 && ENTITY::DOES_ENTITY_EXIST(Local_718.f_310[iParam1 /*14*/])) && PED::_0xE33F98BD76490ABC(Local_718.f_310[iParam1 /*14*/], PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_43(iLocal_716, 1024))
	{
		bVar0 = true;
	}
	if ((!bVar0 && func_172(&iLocal_716, 1)) && (iLocal_603 != -1 || func_348(Local_718.f_310[iParam1 /*14*/], Global_35, 0, 1114636288 /* Float: 60f */, 0)))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_11(Local_718.f_310[iParam1 /*14*/].f_7, 512))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if ((func_43(iLocal_716, 1073741824 /* Float: 2f */) && !func_43(iLocal_716, 16384)) && ((Local_718.f_310[iParam1 /*14*/].f_9 < 60f || iLocal_603 >= 0) && func_127(&(vLocal_627[17 /*3*/]), 30f)))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (iLocal_614 < 0)
		{
			iLocal_614 = MISC::GET_GAME_TIMER();
		}
		if (!func_11(Local_718.f_310[iParam1 /*14*/].f_7, 32))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_718.f_310[iParam1 /*14*/]);
			func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 32);
		}
		iVar1 = 0;
		bVar2 = false;
		if (iLocal_603 >= 0)
		{
			iVar1 = (iParam0 - iLocal_603);
			if (iVar1 < 0)
			{
				iVar1 = (iVar1 * -1);
			}
			if (Local_718.f_1[iLocal_603 /*22*/].f_6 == 1 || Local_718.f_1[iLocal_603 /*22*/].f_6 == 3)
			{
				bVar2 = true;
			}
		}
		if (Local_718.f_310[iParam1 /*14*/].f_12 < 0)
		{
			if (((iVar1 == 0 && iLocal_603 >= 0) || func_11(Local_718.f_310[iParam1 /*14*/].f_7, 4)) || (bVar2 && iVar1 == 1))
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 600));
			}
			else if (func_43(iLocal_716, 2048))
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6500, 8500));
			}
			else if (iVar1 == 1)
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(16000, 18000));
			}
			else if (iVar1 == 2)
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(23000, 25000));
			}
			else
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 32000));
			}
		}
		else
		{
			bVar3 = false;
			if (((iVar1 == 0 || func_11(Local_718.f_310[iParam1 /*14*/].f_7, 4)) || (bVar2 && iVar1 == 1)) && iLocal_603 >= 0)
			{
				bVar3 = true;
			}
			else if (iVar1 >= 1)
			{
				if (PED::_0x164CECC59E70DF86(Local_718.f_310[iParam1 /*14*/], 50f))
				{
					Local_718.f_310[iParam1 /*14*/].f_10 = (Local_718.f_310[iParam1 /*14*/].f_10 + (1f * BUILTIN::TIMESTEP()));
				}
				else
				{
					Local_718.f_310[iParam1 /*14*/].f_10 = 0f;
				}
				if (Local_718.f_310[iParam1 /*14*/].f_10 >= 1.4f && (func_43(iLocal_716, 131072) || func_43(iLocal_716, 8388608)))
				{
					bVar3 = true;
				}
				fVar4 = BUILTIN::TO_FLOAT(iVar1 * 5);
				if (func_43(iLocal_716, 32))
				{
					fVar4 = (IntToFloat(iVar1) * 3.5f);
				}
				if (Local_718.f_310[iParam1 /*14*/].f_9 > 15f && iVar1 == 1)
				{
					fVar4 = (fVar4 * 1.5f);
				}
				if (Local_718.f_310[iParam1 /*14*/].f_10 >= fVar4)
				{
					bVar3 = true;
				}
			}
			if (bVar3)
			{
				func_12(&iLocal_716, 131072, 1);
				if ((Local_718.f_310[iParam1 /*14*/].f_12 - MISC::GET_GAME_TIMER()) >= 1000)
				{
					Local_718.f_310[iParam1 /*14*/].f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 900));
				}
			}
		}
		if ((iLocal_603 != iParam0 && iLocal_603 < 0) && Local_718.f_1[iParam0 /*22*/].f_6 == 3)
		{
			if (Local_718.f_310[iParam1 /*14*/].f_12 < 0)
			{
				Local_718.f_310[iParam1 /*14*/].f_12 = MISC::GET_GAME_TIMER() + 200;
			}
		}
		func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 16384);
		if (MISC::GET_GAME_TIMER() >= Local_718.f_310[iParam1 /*14*/].f_12)
		{
			func_12(&iLocal_716, 131072, 1);
			return true;
		}
	}
	return false;
}

int func_272(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	func_45(iParam0, iParam1);
	if (*iParam4 != 0)
	{
		func_233(uParam3, iParam4);
	}
	if (!func_125(uParam2[12 /*3*/]))
	{
		func_81(uParam2[12 /*3*/]);
	}
	func_12(uParam5, 256, 1);
	return 1;
}

void func_273(int iParam0, var uParam1, int iParam2, float fParam3)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (((iParam0->f_310[iParam2 /*14*/].f_9 < 17f && !func_43(*uParam1, 16384)) && !func_11(iParam0->f_310[iParam2 /*14*/].f_7, 16384)) && (ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f || ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) < 1f))
	{
		bVar0 = true;
	}
	if ((bVar0 || func_11(iParam0->f_310[iParam2 /*14*/].f_7, 8192)) && (PED::IS_PED_FACING_PED(iParam0->f_310[iParam2 /*14*/], Global_35, 180f) || func_375(Global_35, iParam0->f_1105, 148, 1)))
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_310[iParam2 /*14*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if (vVar1.y < 0f)
		{
			return;
		}
		*fParam3 = (*fParam3 + (1f * BUILTIN::TIMESTEP()));
		fVar4 = *fParam3;
		if (func_11(iParam0->f_310[iParam2 /*14*/].f_7, 268435456))
		{
			fVar4 = (fVar4 - 4f);
		}
		if (!func_11(iParam0->f_310[iParam2 /*14*/].f_7, 32768))
		{
			if ((*fParam3 >= 5f || (*fParam3 >= 1.3f && iParam0->f_310[iParam2 /*14*/].f_9 < 8f)) || func_11(iParam0->f_310[iParam2 /*14*/].f_7, 8192))
			{
				TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam2 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
				func_134(iParam0->f_310[iParam2 /*14*/], Global_35, "GUARD_PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam2 /*14*/].f_7), 32768);
				func_34(&(iParam0->f_310[iParam2 /*14*/].f_7), 2048);
				*fParam3 = 0f;
			}
		}
		else if (!func_11(iParam0->f_310[iParam2 /*14*/].f_7, 65536))
		{
			if (fVar4 >= 7f)
			{
				TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam2 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
				func_134(iParam0->f_310[iParam2 /*14*/], Global_35, "WARNED_ALREADY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam2 /*14*/].f_7), 65536);
				*fParam3 = 0f;
			}
		}
		else if (!func_11(iParam0->f_310[iParam2 /*14*/].f_7, 131072))
		{
			if (fVar4 >= 7f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam2 /*14*/], Global_35, 3000, 0, 51, 0);
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0->f_310[iParam2 /*14*/], Global_36, 3);
				TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam2 /*14*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam2 /*14*/], iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				func_134(iParam0->f_310[iParam2 /*14*/], Global_35, func_376(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&(iParam0->f_310[iParam2 /*14*/].f_7), 131072);
				*fParam3 = 0f;
			}
		}
		else if (fVar4 >= 6f)
		{
			func_246(&(iParam0->f_310[iParam2 /*14*/]), 17);
		}
	}
	else
	{
		*fParam3 = (*fParam3 - (1f * BUILTIN::TIMESTEP()));
		if (*fParam3 < 0f)
		{
			if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam2 /*14*/]))
			{
				TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam2 /*14*/], true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_310[iParam2 /*14*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam2 /*14*/], true, false), 3f, -1, false, false, false, false);
			}
			*fParam3 = 0f;
		}
	}
}

void func_274(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_11(iParam0->f_310[iParam6 /*14*/].f_7, 32768) && !func_377(iParam0, uParam2, iParam8))
	{
		if (func_125(uParam1[3 /*3*/]) && !func_318(uParam1[3 /*3*/]))
		{
			func_378(uParam1[3 /*3*/]);
			if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 262144))
			{
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 262144);
			}
			func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
		}
		if (!func_125(uParam1[4 /*3*/]))
		{
			func_81(uParam1[4 /*3*/]);
		}
		if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 16777216))
		{
			if (!func_11(iParam0->f_1[iParam7 /*22*/].f_4, 1024) && func_11(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
			{
				if (func_127(uParam1[4 /*3*/], (10.5f / 2f)))
				{
					TASK::TASK_CLEAR_LOOK_AT(iParam0->f_310[iParam6 /*14*/]);
					TASK::_0x541E5B41DCA45828(iParam0->f_310[iParam6 /*14*/], 2, 0);
					if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam6 /*14*/]))
					{
						TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
						if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
						{
							TASK::TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam6 /*14*/], iParam0->f_310[iParam6 /*14*/].f_6, 0, 0, true, false, 0, false, -1f, false);
						}
						else
						{
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_310[iParam6 /*14*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam6 /*14*/], true, false), 3f, -1, false, false, false, false);
						}
					}
					else if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
					{
						iParam0->f_310[iParam6 /*14*/].f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iParam0->f_310[iParam6 /*14*/], false);
					}
					func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
					func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 67108864);
					func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
				}
			}
		}
		func_379(iParam0, iParam6);
		if (func_130(uParam1[4 /*3*/], 10.5f))
		{
			if (func_11(iParam0->f_310[iParam6 /*14*/].f_7, 262144))
			{
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 262144);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
			}
			else if (func_11(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
			{
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 16777216);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 2048);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				iParam0->f_1[iParam7 /*22*/].f_20 = -1;
			}
			else if (func_11(iParam0->f_310[iParam6 /*14*/].f_7, 65536))
			{
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 65536);
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 16777216);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 2048);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				iParam0->f_1[iParam7 /*22*/].f_20 = -1;
			}
			else if (func_11(iParam0->f_310[iParam6 /*14*/].f_7, 32768))
			{
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 16777216);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 2048);
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 67108864);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
				func_74(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				iParam0->f_1[iParam7 /*22*/].f_20 = -1;
			}
			if (func_125(uParam1[3 /*3*/]))
			{
				func_121(uParam1[3 /*3*/]);
			}
			TASK::_0x541E5B41DCA45828(iParam0->f_310[iParam6 /*14*/], 2, 0);
			if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam6 /*14*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iParam0->f_310[iParam6 /*14*/]);
				TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
				if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
				{
					TASK::TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam6 /*14*/], iParam0->f_310[iParam6 /*14*/].f_6, 0, 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam0->f_310[iParam6 /*14*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam6 /*14*/], true, false), 3f, -1, false, false, false, false);
				}
			}
			else if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam6 /*14*/].f_6))
			{
				iParam0->f_310[iParam6 /*14*/].f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(iParam0->f_310[iParam6 /*14*/], false);
			}
		}
	}
	if (iParam8 == iParam7 && func_377(iParam0, uParam2, iParam8))
	{
		if (!func_11(iParam0->f_1[iParam7 /*22*/].f_4, 2048))
		{
			if (func_380(iParam0, iParam7, iParam6))
			{
				func_381(iParam0, iParam6, iParam7);
				bVar0 = true;
			}
		}
		else
		{
			iVar1 = iParam0->f_1[iParam7 /*22*/].f_20;
			if (iParam6 == iVar1)
			{
				bVar0 = true;
			}
			else if (iParam0->f_310[iParam6 /*14*/].f_9 < iParam0->f_310[iVar1 /*14*/].f_9)
			{
				func_382(iParam0, iParam7);
				func_381(iParam0, iParam6, iParam7);
				func_383(iParam0, iParam6, iVar1);
				bVar0 = true;
			}
		}
		if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 16777216))
		{
			if (bVar0 && TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
			{
				func_272(iParam0, iParam7, uParam1, uParam3, iParam4, uParam2);
				func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
				func_246(&(iParam0->f_310[iParam6 /*14*/]), 17);
				func_83(0);
				func_12(uParam2, 536870912, 1);
			}
			if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 32768))
			{
				if (func_11(iParam0->f_1[iParam7 /*22*/].f_4, 512))
				{
					TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam6 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
				}
			}
			else if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
			{
				if (func_11(iParam0->f_1[iParam7 /*22*/].f_4, 1024))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam6 /*14*/], Global_35, 3000, 0, 51, 0);
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0->f_310[iParam6 /*14*/], Global_36, 3);
					TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1082130432 /* Float: -1f */);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam6 /*14*/], iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
					func_81(uParam1[3 /*3*/]);
				}
			}
			return;
		}
		if (!func_125(uParam1[3 /*3*/]))
		{
			func_81(uParam1[3 /*3*/]);
		}
		else if (func_318(uParam1[3 /*3*/]))
		{
			func_384(uParam1[3 /*3*/]);
		}
		if (func_125(uParam1[4 /*3*/]))
		{
			func_121(uParam1[4 /*3*/]);
		}
		if (func_127(uParam1[3 /*3*/], 1f))
		{
			if (func_43(*uParam2, 1073741824 /* Float: 2f */))
			{
				func_246(&(iParam0->f_310[iParam6 /*14*/]), 17);
				return;
			}
			if (bVar0 && TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
			{
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
			}
			if (func_385(iParam0, iParam6, iParam7, iParam9))
			{
				func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 65536);
				if (iParam0->f_1[iParam7 /*22*/].f_6 == 3 && iParam0->f_310[iParam6 /*14*/].f_9 < 5f)
				{
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
				}
			}
			if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 32768))
			{
				if (bVar0)
				{
					PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iParam0->f_310[iParam6 /*14*/], Global_36, 1, false);
					TASK::_0xE7FA07624574B79A(iParam0->f_310[iParam6 /*14*/], Global_35, 2, 2, 100f, 1, 0, 0, 0);
					func_134(iParam0->f_310[iParam6 /*14*/], Global_35, func_386(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 32768);
					func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
					func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
					func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
					func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
					func_81(uParam1[3 /*3*/]);
				}
			}
			else
			{
				fVar3 = 6.5f;
				if (func_11(iParam0->f_310[iParam6 /*14*/].f_7, 268435456))
				{
					fVar3 = 9.5f;
				}
				if ((func_127(uParam1[3 /*3*/], fVar3) || !func_11(iParam0->f_1[iParam7 /*22*/].f_4, 128)) || TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
				{
					if (func_387(iParam0, iParam6, iParam8, iParam9, 1, uParam2))
					{
						func_134(iParam0->f_310[iParam6 /*14*/], Global_35, func_388(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 524288);
						func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
						func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
						func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
						func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
						func_81(uParam1[3 /*3*/]);
					}
					else if (func_387(iParam0, iParam6, iParam8, iParam9, 0, uParam2))
					{
						func_134(iParam0->f_310[iParam6 /*14*/], Global_35, func_388(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 67108864);
						func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
						func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 134217728);
						func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
						func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
						func_81(uParam1[3 /*3*/]);
					}
					else if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 65536))
					{
						if (bVar0)
						{
							func_134(iParam0->f_310[iParam6 /*14*/], Global_35, func_389(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 65536);
							func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
							func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
							func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
							func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
							PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iParam0->f_310[iParam6 /*14*/], Global_36, 1, false);
							TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam6 /*14*/], Global_35, 3000, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1082130432 /* Float: -1f */);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam6 /*14*/], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							func_81(uParam1[3 /*3*/]);
						}
					}
					else if (!func_11(iParam0->f_310[iParam6 /*14*/].f_7, 131072))
					{
						if (bVar0)
						{
							PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0->f_310[iParam6 /*14*/], Global_36, 3);
							TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam6 /*14*/], true, false);
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_310[iParam6 /*14*/], Global_35, 3000, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1082130432 /* Float: -1f */);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam6 /*14*/], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							func_134(iParam0->f_310[iParam6 /*14*/], Global_35, func_376(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 131072);
							func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
							func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 512);
							func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 1024);
							func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
							func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
							func_81(uParam1[3 /*3*/]);
						}
					}
					else if (bVar0)
					{
						PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0->f_310[iParam6 /*14*/], Global_36, 3);
						func_134(iParam0->f_310[iParam6 /*14*/], Global_35, func_390(), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						*uParam10 = MISC::GET_GAME_TIMER() + 8000;
						func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 536870912);
						func_272(iParam0, iParam7, uParam1, uParam3, iParam4, uParam2);
						func_34(&(iParam0->f_1[iParam7 /*22*/].f_4), 128);
						func_34(&(iParam0->f_310[iParam6 /*14*/].f_7), 2048);
						func_74(&(iParam0->f_310[iParam6 /*14*/].f_7), 268435456);
						func_246(&(iParam0->f_310[iParam6 /*14*/]), 17);
						func_83(0);
						func_12(uParam2, 536870912, 1);
					}
				}
			}
		}
	}
}

bool func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_321((iParam1 - 1) < 0, -1, (iParam1 - 1));
	iVar0 = func_321(iParam1 + 1 >= iParam0->f_1098, -1, iParam1 + 1);
	if (iParam1 != -1 && func_11(iParam0->f_1[iParam1 /*22*/].f_4, 2))
	{
		return true;
	}
	if (iVar1 != -1 && func_11(iParam0->f_1[iVar1 /*22*/].f_4, 2))
	{
		return true;
	}
	if (iVar0 != -1 && func_11(iParam0->f_1[iVar0 /*22*/].f_4, 2))
	{
		return true;
	}
	return false;
}

int func_276(int iParam0, var uParam1, int iParam2)
{
	if (func_151(0, 1, Global_35, 1))
	{
		return 1;
	}
	if (func_125(uParam1[1 /*3*/]) && !func_127(uParam1[1 /*3*/], 2.5f))
	{
		return 0;
	}
	return 1;
}

int func_277(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_310[iParam5 /*14*/]))
	{
		return 0;
	}
	if ((!func_328() && !func_127(uParam1[20 /*3*/], 1.5f)) && !func_391(iParam0, iParam5, uParam2))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
		func_14(uParam3, 134217728);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
		func_329(iParam6, 0);
		if (!func_125(uParam1[20 /*3*/]))
		{
			func_81(uParam1[20 /*3*/]);
		}
		return 0;
	}
	if ((!PED::_0x82CB0F3F0C7785E5(iParam0->f_310[iParam5 /*14*/]) && !func_127(uParam1[20 /*3*/], 1.5f)) && !func_391(iParam0, iParam5, uParam2))
	{
		if (iParam0->f_310[iParam5 /*14*/].f_12 == 0)
		{
			iParam0->f_310[iParam5 /*14*/].f_12 = MISC::GET_GAME_TIMER();
		}
		PED::_0xD8CEEED54C672B5D(iParam0->f_310[iParam5 /*14*/], Global_35, 0f, 0f, 0f, 3, 3);
		PED::_0x9A77DFD295E29B09(iParam0->f_310[iParam5 /*14*/], true);
		return 0;
	}
	func_121(uParam1[20 /*3*/]);
	PED::_0xE735A7DA22E88359(iParam0->f_310[iParam5 /*14*/]);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && !func_43(*uParam2, 512))
	{
		func_98(uParam3, 134217728);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	func_65(iParam7);
	func_134(iParam0->f_310[iParam5 /*14*/], Global_35, "HAND_OVER_MONEY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
	return 1;
}

void func_278(var uParam0, int iParam1, var uParam2)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 25446659))
	{
		func_134(Global_35, *uParam0, "ROB_ESCALATED_HIT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 1506116031, 1, 0, 0);
		func_65(iParam1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 60809731))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(*uParam0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, -2007843936))
	{
		func_134(*uParam0, Global_35, "HAND_OVER_MONEY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
		func_65(iParam1);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			func_98(uParam2, 134217728);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
}

void func_279(var uParam0)
{
	STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("PROP_HUMAN_SEAT_CHAIR_TRAIN"), 8193, ENTITY::GET_ENTITY_MODEL(*uParam0), 0);
}

void func_280(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam2 /*14*/]))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_310[iParam2 /*14*/], 780511057, true) == 8 && iParam0->f_310[iParam2 /*14*/].f_5 != 4)
		{
			TASK::TASK_CLEAR_LOOK_AT(iParam0->f_310[iParam2 /*14*/]);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0->f_310[iParam2 /*14*/], Global_36, 3);
			TASK::TASK_COMBAT_PED(iParam0->f_310[iParam2 /*14*/], Global_35, 16777216, 16);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_310[iParam2 /*14*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_310[iParam2 /*14*/], *iParam5);
			PED::REGISTER_TARGET(iParam0->f_310[iParam2 /*14*/], Global_35, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0->f_310[iParam2 /*14*/], true, 15f);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0->f_310[iParam2 /*14*/], 1);
			PED::SET_PED_KEEP_TASK(iParam0->f_310[iParam2 /*14*/], true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam2 /*14*/], 297, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam2 /*14*/], 315, true);
			if (iParam4 == iParam3)
			{
				func_122(uParam8, 0, 0, 1, 0);
			}
		}
		if (MISC::GET_GAME_TIMER() >= *uParam6)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) == 0)
			{
				if (iParam0->f_310[iParam2 /*14*/].f_9 < 50f)
				{
					if (!func_11(iParam0->f_310[iParam2 /*14*/].f_7, 536870912))
					{
						sVar0 = func_390();
					}
					else
					{
						sVar0 = func_392();
					}
					if (func_134(iParam0->f_310[iParam2 /*14*/], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 0, 0, 0))
					{
						func_34(&(iParam0->f_310[iParam2 /*14*/].f_7), 536870912);
						*uParam6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					}
				}
			}
		}
		if (MISC::GET_GAME_TIMER() >= iParam0->f_310[iParam2 /*14*/].f_12)
		{
			iVar1 = 0;
			iVar2 = -1;
			if (func_128(iParam0, &(iParam0->f_310[iParam2 /*14*/])) && ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) > 0.2f)
			{
				if (!func_128(iParam0, &Global_35) || iParam4 < 0)
				{
					iVar1 = 1;
				}
				else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iParam4 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_310[iParam2 /*14*/], iParam0->f_1[iParam4 /*22*/].f_1, true, 0))
				{
					iVar1 = 2;
					iVar2 = iParam4;
				}
				else if (iParam4 > 0)
				{
					iVar1 = 3;
				}
				else
				{
					iVar3 = func_393(iParam0, iParam2);
					if (iVar3 > 1)
					{
						iVar1 = 3;
					}
					else
					{
						iVar1 = 3;
						if (iVar3 >= 0)
						{
							vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[iVar3 /*22*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam2 /*14*/], true, false)) };
							if (vVar4.z < 2.3f)
							{
								iVar1 = 4;
							}
						}
					}
				}
			}
			else if (iParam4 != -1 || func_46(iParam0, 30f))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 5;
			}
			if (iVar1 != iParam0->f_310[iParam2 /*14*/].f_5)
			{
				func_394(iParam0, iParam2, iVar1, iVar2);
			}
			switch (iParam0->f_310[iParam2 /*14*/].f_5)
			{
				case 1:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_310[iParam2 /*14*/], 1f);
					break;
			}
			iParam0->f_310[iParam2 /*14*/].f_12 = MISC::GET_GAME_TIMER() + 1000;
		}
		if (!MAP::DOES_BLIP_EXIST(iParam0->f_310[iParam2 /*14*/].f_1))
		{
			iParam0->f_310[iParam2 /*14*/].f_1 = MAP::BLIP_ADD_FOR_ENTITY(GET_HASH_KEY("BLIP_STYLE_ENEMY"), iParam0->f_310[iParam2 /*14*/]);
		}
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	func_395(iParam0, iParam2, iParam1);
}

void func_282(int iParam0, int iParam1)
{
	char* sVar0;

	iParam1 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
	PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iParam1 /*14*/], 171, true);
	PED::SET_PED_CONFIG_FLAG(Local_718.f_310[iParam1 /*14*/], 189, true);
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_718.f_310[iParam1 /*14*/]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_718.f_310[iParam1 /*14*/], true, true);
	}
	if (PED::IS_PED_MALE(Local_718.f_310[iParam1 /*14*/]))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_718.f_310[iParam1 /*14*/]) == func_396())
		{
			Local_718.f_310[iParam1 /*14*/].f_3 = 1;
			Local_718.f_1100++;
			func_397(Local_718.f_310[iParam1 /*14*/], GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_398(&(Local_718.f_310[iParam1 /*14*/]));
			if (!func_11(Local_718.f_1[iParam0 /*22*/].f_4, 256))
			{
				func_34(&(Local_718.f_1[iParam0 /*22*/].f_4), 256);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Local_718.f_310[iParam1 /*14*/]) == func_399())
		{
			Local_718.f_310[iParam1 /*14*/].f_3 = 0;
		}
		else
		{
			Local_718.f_310[iParam1 /*14*/].f_3 = 2;
		}
	}
	else
	{
		Local_718.f_310[iParam1 /*14*/].f_3 = 2;
	}
	Local_718.f_310[iParam1 /*14*/].f_8 = iParam0;
	func_250(&Local_718, iParam1);
	sVar0 = func_400(ENTITY::GET_ENTITY_MODEL(Local_718.f_310[iParam1 /*14*/]));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_401(Local_718.f_310[iParam1 /*14*/], sVar0, 0);
	}
	func_34(&(Local_718.f_310[iParam1 /*14*/].f_7), 16);
}

var func_283(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;

	fVar2 = 9999.9f;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1[iParam1 /*22*/].f_8)
	{
		iVar1 = iParam0->f_1[iParam1 /*22*/].f_11[iVar0];
		if (iVar1 >= 0 && iParam0->f_310[iVar1 /*14*/].f_9 < fVar2)
		{
			fVar2 = iParam0->f_310[iVar1 /*14*/].f_9;
			uVar3 = iParam0->f_310[iVar1 /*14*/];
			*iParam2 = iVar1;
		}
		iVar0++;
	}
	return uVar3;
}

bool func_284(int iParam0, bool bParam1)
{
	if (func_402(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_285(float fParam0)
{
	if (func_403(1))
	{
		return true;
	}
	if (func_125(&uLocal_0) && !func_130(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_404(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_405(iParam0))
	{
		return false;
	}
	if (func_406(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_407(iParam0, 1)) || func_408(32768))
	{
		if (!func_407(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_409())
	{
		return false;
	}
	return true;
}

void func_288(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_289(int iParam0, bool bParam1)
{
	switch (func_410(iParam0))
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

bool func_290(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 >= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
		{
			if (!func_11(iParam0->f_1[iVar0 /*22*/].f_4, -2147483648))
			{
				VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0->f_1[iVar0 /*22*/]);
				func_34(&(iParam0->f_1[iVar0 /*22*/].f_4), -2147483648);
			}
			if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0->f_1[iVar0 /*22*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_291(int iParam0, float fParam1)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_411(iParam0, iVar0, fParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_292(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_293(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<15> Var0;
	int iVar20;
	int iVar21;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	Var0.f_8 = -1082130432;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &(Var0.f_6), false, iParam5, false))
	{
		iVar20 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			Var0 = { func_412(iVar20) };
			if (func_213(vParam1))
			{
				Var0.f_3 = { func_413(iVar20) };
			}
			else
			{
				Var0.f_3 = { vParam1 };
			}
			Var0.f_7 = 1f;
			Var0.f_12 = 1;
			if (bParam8)
			{
				if (func_319(iParam0, 0))
				{
					Var0.f_9 = iParam0;
				}
				else
				{
					Var0.f_9 = 0;
				}
			}
			Var0.f_13 = 1;
			Var0.f_14 = iParam7;
			if (func_319(iParam4, 0))
			{
				Var0.f_11 = iParam4;
			}
			MISC::FIRE_SINGLE_BULLET(&Var0);
			if (bParam6)
			{
				if (WEAPON::GET_AMMO_IN_CLIP(iParam0, &iVar21, Var0.f_6))
				{
					if (iVar21 > 0)
					{
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var0.f_6, (iVar21 - 1));
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

float func_294(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case default:
			return 10f;
		case 2:
			return 5f;
		case 1:
			return 3f;
		case 0:
			return 1f;
			default:
				break;
	}
}

int func_295()
{
	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return -1;
	}
	return ((MISC::GET_FRAME_COUNT() % Local_718.f_1098 * 5) / 5);
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_298()
{
	return Global_1894899.f_2;
}

bool func_299()
{
	if (func_414())
	{
		return false;
	}
	if (func_43(iLocal_716, 16777216))
	{
		return false;
	}
	return true;
}

int func_300(bool bParam0, bool bParam1, bool bParam2)
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

float func_301()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_304(int iParam0)
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

int func_305(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_306(var uParam0, int iParam1, int iParam2)
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
	bVar18 = func_415(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_416("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_417(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_201(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_415(iParam1, 512) && func_418(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_415(iParam1, 32))) && (!WEAPON::IS_WEAPON_PISTOL(Var4.f_4) || !func_415(iParam1, 16777216))) && (!WEAPON::IS_WEAPON_REVOLVER(Var4.f_4) || !func_415(iParam1, 33554432)))
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
		func_419(iVar1);
	}
	if (func_201(iVar0))
	{
	}
	else if (!func_415(iParam1, 512))
	{
		iParam1 |= 512;
		return func_306(uParam0, iParam1, iParam2);
	}
	else if (func_415(iParam1, 256))
	{
		iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_307(var uParam0, int iParam1, int iParam2)
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
	bVar18 = func_415(iParam1, 128);
	if (func_416("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_417(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_201(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_415(iParam1, 512) && func_418(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || func_420(Var4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_415(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_415(iParam1, 4))) && (!func_420(Var4.f_4) || func_415(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(Var4.f_4) || !func_415(iParam1, 8388608))) && (!WEAPON::IS_WEAPON_RIFLE(Var4.f_4) || !func_415(iParam1, 1048576)))
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
		func_419(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_415(iParam1, 512) && !func_415(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_307(uParam0, iParam1, iParam2);
	}
	else if (func_415(iParam1, 256))
	{
		iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_308(int iParam0)
{
	if (!func_421(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_422(iParam0));
}

int func_309(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_298();
	if (func_421(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_423(vParam0, iParam3);
}

bool func_310(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_424(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_311(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

bool func_312(int iParam0, int iParam1)
{
	if (func_11(Global_1392581.f_3, 8))
	{
		return false;
	}
	if (iParam0 != iParam1)
	{
		return false;
	}
	return true;
}

bool func_313(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_718.f_1099)
	{
		if (*iParam0 == Local_718.f_310[iVar0 /*14*/])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_314(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= Local_718.f_1098)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	iVar0 = Local_718.f_1[iParam0 /*22*/].f_11[iParam1];
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	if (func_11(Local_718.f_310[iVar0 /*14*/].f_7, 16))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	if (LAW::_0x40851BCC33ACD9AB(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	if (LAW::_0x0EAF918F751F27BA(Local_718.f_310[iVar0 /*14*/]))
	{
		return false;
	}
	return true;
}

int func_315(int iParam0)
{
	return iParam0;
}

void func_316(int iParam0)
{
	if (!func_425(iParam0))
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

float func_317(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_318(var uParam0)
{
	return func_223(*uParam0, 2);
}

bool func_319(int iParam0, int iParam1)
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
	if (func_211(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_211(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_211(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_211(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_320()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_322(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_323(Global_35, iParam0, bParam1, bParam2);
}

float func_323(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_324(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_325(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_426(iParam0, &Var0);
}

int func_326()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_327(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 134217728);
	}
	else
	{
		func_74(uParam0, 134217728);
	}
}

bool func_328()
{
	int iVar0;

	iVar0 = func_330(Global_35, 0, 1, 0);
	if (((iVar0 == GET_HASH_KEY("WEAPON_UNARMED") || iVar0 == GET_HASH_KEY("WEAPON_LASSO")) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) || !WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		return true;
	}
	return false;
}

int func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_328())
	{
		return func_330(Global_35, 0, 1, 0);
	}
	iVar0 = func_330(Global_35, 1, 1, 0);
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 2, 1, 0);
	}
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 3, 1, 0);
	}
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 9, 1, 0);
	}
	if (iVar0 != GET_HASH_KEY("WEAPON_UNARMED") && !func_354(Global_35, 716706914))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
		if (bParam1)
		{
			*iParam0++;
			iVar1 = 0;
		}
		else
		{
			iVar1 = Global_35;
		}
		TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_330(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRAIN_ROB_START_RIFLE";
		case 1:
			return "PISTOL_ARMED_ROB_START";
		default:
			break;
	}
	return "";
}

void func_332(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_333()
{
	return Global_1310750.f_16077 != 0;
}

bool func_334(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_75(uParam2, 268435456))
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return true;
	}
	if (iParam3 == (iParam0->f_1098 - 1))
	{
		return true;
	}
	if (iParam3 == (iParam0->f_1098 / 2))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam1 /*22*/], 6.5f, 0f, 0f) };
	vVar3 = { vVar0 };
	if (func_427(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (MISC::ABSF(vVar6.z) < 3f)
		{
			return false;
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_1[iParam1 /*22*/], (-1f * 6.5f), 0f, 0f) };
	vVar3 = { vVar0 };
	if (func_427(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (MISC::ABSF(vVar6.z) < 3f)
		{
			return false;
		}
	}
	return true;
}

bool func_336(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= iParam0->f_1098)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iParam0->f_1[iParam1 /*22*/].f_8)
	{
		iVar0 = iParam0->f_1[iParam1 /*22*/].f_11[iVar1];
		if (iVar0 >= 0 && iVar0 < 45)
		{
			func_34(&(iParam0->f_310[iVar0 /*14*/].f_7), 2048);
		}
		iVar1++;
	}
}

bool func_338(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_43(*uParam1, 2048))
	{
		return true;
	}
	iVar0 = VEHICLE::GET_DRIVER_OF_VEHICLE(iParam0->f_1[0 /*22*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (func_95(ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam3 /*14*/], true, false), 1140457472 /* Float: 500f */, 0))
	{
		return true;
	}
	return false;
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;
	struct<13> Var1;
	int iVar24;

	iVar0 = 0;
	if (iParam0->f_310[iParam1 /*14*/].f_8 >= 0 && iParam0->f_310[iParam1 /*14*/].f_8 < iParam0->f_1098)
	{
		if (iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/].f_7 == 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1200);
		}
		else if (iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/].f_7 == 1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(300, 600);
		}
	}
	if (iVar0 > 0)
	{
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		MISC::_0xAD44856A1CD29635(Global_35, iParam0->f_310[iParam1 /*14*/], &Var1);
		iVar24 = 0;
		while (iVar24 < Var1)
		{
			if (Var1.f_1[iVar24] == GET_HASH_KEY("CURRENCY_CASH"))
			{
				Var1.f_12[iVar24] = iVar0;
				MISC::_0xBB282CF5D2333FB8(iParam0->f_310[iParam1 /*14*/], &Var1);
				return;
			}
			iVar24++;
		}
		if (Var1 >= 10)
		{
			Var1.f_12[0] = iVar0;
		}
		else
		{
			Var1.f_12[Var1] = iVar0;
			Var1++;
		}
		MISC::_0xBB282CF5D2333FB8(iParam0->f_310[iParam1 /*14*/], &Var1);
	}
}

bool func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 && iParam0->f_310[iParam1 /*14*/].f_9 < 27f)
	{
		return true;
	}
	if (iParam2 == 0 || iParam2 == 1)
	{
		return true;
	}
	return false;
}

void func_341(var uParam0, int* iParam1)
{
	func_428(iParam1, 0);
}

void func_342(var uParam0, bool bParam1)
{
	func_430(uParam0[0 /*17*/], func_429(7), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 15f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	func_430(uParam0[2 /*17*/], "TRB_STOP_DRIVER", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], bParam1);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_343(var uParam0, bool bParam1)
{
	func_430(uParam0[0 /*17*/], func_429(8), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 15f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	func_430(uParam0[2 /*17*/], "TRB_STOP_DRIVER", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], bParam1);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_344(var uParam0, bool bParam1)
{
	func_430(uParam0[0 /*17*/], func_429(8), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], bParam1);
	func_433(uParam0[0 /*17*/], 15f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	func_430(uParam0[2 /*17*/], "TRB_STOP_DRIVER", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], bParam1);
	func_433(uParam0[2 /*17*/], 15f);
}

int func_345(int iParam0, int iParam1, int iParam2)
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

int func_346(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_434(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_435(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_81(&(iParam1->f_13));
		}
		if (func_436(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_437(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_346(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_438(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_439(*uParam0, 1, 1);
						}
					}
					else if (func_440(iParam1, 22))
					{
						func_439(*uParam0, 0, 1);
					}
				}
				if (func_441(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_442(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_443(iParam8);
					if (func_444(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_445(uParam3);
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
					func_446(iParam1, uParam3, fVar8);
					if (func_447(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_122(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_448(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_441(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_449(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_444(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_442(uParam0, func_441(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_443(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_122(uParam3, 0, 0, 1, 1);
					}
					func_332(iParam1, 1);
				}
				func_446(iParam1, uParam3, fVar8);
				if (func_448(uParam0, iParam1, fParam4, bVar6))
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
			func_450(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char* func_347(var uParam0)
{
	char cVar0[32];
	char cVar4[32];

	if (uParam0->f_11 == 0)
	{
		uParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 20);
	}
	if (PED::IS_PED_MALE(*uParam0))
	{
		StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	}
	else
	{
		StringCopy(&cVar4, "INSULT_FEMALE_CONV", 32);
	}
	StringConCat(&cVar4, "_PART", 32);
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_451(cVar4);
}

bool func_348(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_452(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_453(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

int func_349(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (VEHICLE::GET_DRIVER_OF_VEHICLE(iParam0->f_1[0 /*22*/]) == Global_35)
	{
		return 0;
	}
	if (func_323(iParam0->f_1[0 /*22*/], Global_35, 1, 1) > 27f)
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], true, false) };
	if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, vVar0 + Vector(30f, 100f, 0f), vVar0 - Vector(30f, 100f, 0f), 30f) == func_454(Global_35))
	{
		return 0;
	}
	if (MISC::IS_PROJECTILE_IN_AREA(vVar0 + Vector(100f, 100f, 100f), vVar0 - Vector(100f, 100f, 100f), true))
	{
		return 0;
	}
	if (iParam2 < 2)
	{
		return 1;
	}
	if ((iParam2 < 3 && func_43(*uParam1, 8)) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/]))
	{
		return 1;
	}
	return 0;
}

void func_350(int iParam0)
{
	char* sVar0;

	func_455(0);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_1[0 /*22*/]))
	{
		sVar0 = "CALL_OUT_TO_TRAIN_ENGINEER";
	}
	else
	{
		sVar0 = "ROB_SHOUTED";
	}
	func_134(Global_35, iParam0->f_310[iParam0->f_1[0 /*22*/].f_11[0] /*14*/], sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
}

char* func_351()
{
	return "GET_OUT_CONDUCTOR";
}

char* func_352()
{
	return "GET_OUT";
}

char* func_353()
{
	return "LEAVE_NOW";
}

bool func_354(int iParam0, int iParam1)
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

char* func_355()
{
	return "WHATS_GOING_ON_BACK_THERE";
}

char* func_356()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_ANGRY_REACTION";
		case 1:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "DONT_BE_STUPID";
			default:
				break;
	}
}

char* func_357()
{
	return "NEED_HELP";
}

void func_358(int iParam0)
{
	PED::_0xBBF6D1D07C02D00A(iParam0, 32);
	PED::_0xBBF6D1D07C02D00A(iParam0, 1);
	PED::_0xBBF6D1D07C02D00A(iParam0, 31);
	PED::_0xBBF6D1D07C02D00A(iParam0, 4);
	PED::_0xBBF6D1D07C02D00A(iParam0, 0);
	PED::_0xBBF6D1D07C02D00A(iParam0, 6);
	PED::_0xBBF6D1D07C02D00A(iParam0, 5);
	PED::_0xBBF6D1D07C02D00A(iParam0, 26);
	PED::_0xBBF6D1D07C02D00A(iParam0, 33);
	PED::_0xBBF6D1D07C02D00A(iParam0, 15);
	PED::_0xBBF6D1D07C02D00A(iParam0, 27);
	PED::_0xBBF6D1D07C02D00A(iParam0, 28);
	PED::_0xBBF6D1D07C02D00A(iParam0, 3);
	PED::_0xBBF6D1D07C02D00A(iParam0, 14);
	PED::_0xBBF6D1D07C02D00A(iParam0, 16);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_125(&(iParam0->f_1115)))
	{
		func_362(&(iParam0->f_1115), 0);
		return false;
	}
	else if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam1 /*14*/]) && iParam0->f_310[iParam1 /*14*/].f_9 < 300f)
	{
		func_81(&(iParam0->f_1115));
		return false;
	}
	else if (!func_127(&(iParam0->f_1115), 5f))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) > 0.2f)
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0->f_310[iParam1 /*14*/]))
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_9 < (19f / 2f))
	{
		return false;
	}
	return true;
}

Vector3 func_360(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_1[0 /*22*/], true, false) };
	fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0->f_1[0 /*22*/]);
	if (func_456(vVar3, ENTITY::GET_ENTITY_COORDS(iParam0->f_1[1 /*22*/], true, false), Global_36))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, -1.83f, -5f, 0f) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 1.83f, -5f, 0f) };
	}
	vVar0.f_2 = (vVar0.z + 1f);
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
	{
		return 0f, 0f, 0f;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, 1f))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1, true, true);
	ENTITY::SET_ENTITY_COORDS(iParam1, vParam4, true, false, true, true);
	func_281(iParam0, iParam2, iParam3);
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1 || !func_125(uParam0))
	{
		func_81(uParam0);
	}
}

bool func_363(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_11(uParam0->f_7, 2))
	{
		return false;
	}
	iVar0 = *uParam0;
	if (!func_328())
	{
		return false;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iVar0)
	{
		return true;
	}
	if (!func_453(iVar0, Global_35, fParam1, 1))
	{
		return false;
	}
	iVar1 = PED::CAN_PED_SEE_ENTITY(iVar0, Global_35, false, false);
	if (iVar1 == 0 || iVar1 == 2)
	{
		return false;
	}
	if (func_368(iVar0, 1, 1, 1, 0, 0))
	{
		return true;
	}
	if (func_457(iVar0, 15f, 35f, 1097859072 /* Float: 15f */, 0))
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_458(uParam2, 1, iVar0);
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
			if (func_459(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_460(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_461(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_462(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_365(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_183(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_460(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_463(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_464(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_460(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_465(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_460(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_466(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_466(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_460(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_467(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_468(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_469(uParam2, 4000))
				{
					if ((func_470(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_471(uParam2, iParam0)) && func_472(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_460(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_470(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_471(uParam2, iParam0)) && func_472(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_473(iParam0, Global_1935630.f_41))
							{
								func_474();
								*iParam3 = 2;
								func_460(iParam0, uParam2, *iParam3);
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
						if (func_473(iParam0, Global_1935630.f_41))
						{
							func_474();
							*iParam3 = 2;
							func_460(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_475(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_326() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_474();
						*iParam3 = 2;
						func_460(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_476())
					{
						if (func_473(iParam0, Global_1935630.f_42))
						{
							func_474();
							*iParam3 = 2;
							func_460(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_477(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_460(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_478(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_479(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_460(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_480(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_481(uParam2, 4000))
				{
					if (func_482(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_460(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_483(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_460(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_484(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_460(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_365(int iParam0, var uParam1)
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
	if (func_485(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_486(uParam1)
		{
			fVar3 = func_487(uParam1);
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

bool func_366(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
			if (func_489(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_367(int iParam0, int iParam1)
{
	if (iParam0->f_310[iParam1 /*14*/].f_9 <= 5f)
	{
		return true;
	}
	if (func_490(PLAYER::PLAYER_ID(), iParam0->f_310[iParam1 /*14*/]))
	{
		return true;
	}
	if (func_457(iParam0->f_310[iParam1 /*14*/], 5f, 15f, 1097859072 /* Float: 15f */, 0))
	{
		return true;
	}
	return false;
}

bool func_368(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_323(iVar0, iParam0, 1, 1) <= 4f)
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
			if (func_491(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_369(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = true;
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam4 /*14*/]))
	{
		bVar0 = false;
	}
	else if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_310[iParam4 /*14*/]) && !TASK::GET_IS_TASK_ACTIVE(iParam0->f_310[iParam4 /*14*/], 3))
	{
		bVar0 = false;
	}
	else if (iParam0->f_310[iParam4 /*14*/].f_3 == 1 || iParam0->f_310[iParam4 /*14*/].f_3 == 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_492(iParam0, uParam7, uParam1, uParam2, uParam8, iParam9, iParam5, uParam6, iParam3, iParam4, iParam10);
		if (func_11(iParam0->f_310[iParam4 /*14*/].f_7, 2048))
		{
			func_341(uParam6, iParam5);
			if (iParam0->f_310[iParam4 /*14*/].f_4 == 19 || iParam0->f_310[iParam4 /*14*/].f_4 == 20)
			{
				func_122(uParam6, 0, 0, 1, 0);
			}
			else if (func_11(iParam0->f_310[iParam4 /*14*/].f_7, 2) || func_11(iParam0->f_310[iParam4 /*14*/].f_7, 4194304))
			{
				func_493(uParam6, func_11(iParam0->f_310[iParam4 /*14*/].f_7, 67108864), 1);
			}
			else if (func_11(iParam0->f_310[iParam4 /*14*/].f_7, 512))
			{
				func_493(uParam6, func_11(iParam0->f_310[iParam4 /*14*/].f_7, 67108864), (func_11(iParam0->f_310[iParam4 /*14*/].f_7, 134217728) || !func_75(uParam2, 1073741824 /* Float: 2f */)));
			}
			else
			{
				func_494(uParam6, func_11(iParam0->f_310[iParam4 /*14*/].f_7, 134217728), func_11(iParam0->f_310[iParam4 /*14*/].f_7, 4096), func_11(iParam0->f_310[iParam4 /*14*/].f_7, 8192), !func_75(uParam2, 1073741824 /* Float: 2f */));
			}
			func_74(&(iParam0->f_310[iParam4 /*14*/].f_7), 2048);
		}
		iVar2 = func_345(1, 0, 0) | 2048 | 16384 | 256 | 65536 | 2097152;
		iVar1 = func_346(&(iParam0->f_310[iParam4 /*14*/]), iParam5, 19f, uParam6, 0, 3, 0, 0, iVar2, 0, 0, 2, iParam0->f_310[iParam4 /*14*/].f_9);
		func_74(&(iParam0->f_310[iParam4 /*14*/].f_7), 33554432);
		if (func_440(iParam5, 1))
		{
			func_12(uParam1, 128, 1);
			*iParam11 = iParam4;
			func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 33554432);
		}
		if (iVar1 != -1)
		{
			func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 134217728);
		}
		switch (iVar1)
		{
			case 2:
				func_81(uParam7[1 /*3*/]);
				func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 512);
				if (!func_43(*uParam1, 65536) || !func_11(iParam0->f_310[iParam4 /*14*/].f_7, 512))
				{
					func_139(iParam0, iParam3, uParam7, uParam8, iParam9, uParam1, uParam2, iParam10, uParam6, iParam5, 0, 0);
					iParam0->f_310[iParam4 /*14*/].f_3 = 2;
					bVar3 = true;
				}
				else
				{
					func_121(uParam7[15 /*3*/]);
					if (!func_328())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, func_171(), false);
						func_14(uParam2, 134217728);
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
						func_329(iParam10, 0);
					}
				}
				if (!bVar3)
				{
					func_495(iParam0, uParam1, iParam4, iParam3);
				}
				func_74(&(iParam0->f_310[iParam4 /*14*/].f_7), 256);
				func_263(iParam0, iParam4, *uParam1);
				func_45(iParam0, iParam3);
				iParam0->f_310[iParam4 /*14*/].f_3 = 2;
				func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 4194304);
				iParam0->f_1[iParam3 /*22*/].f_10++;
				func_341(uParam6, iParam5);
				func_99(uParam1);
				func_246(&(iParam0->f_310[iParam4 /*14*/]), 9);
				return true;
			case 1:
				if (!func_11(iParam0->f_310[iParam4 /*14*/].f_7, 512))
				{
					func_341(uParam6, iParam5);
					func_45(iParam0, iParam3);
					if (PED::IS_PED_MALE(iParam0->f_310[iParam4 /*14*/]))
					{
						func_134(Global_35, iParam0->f_310[iParam4 /*14*/], func_347(&(iParam0->f_310[iParam4 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam4 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_134(Global_35, iParam0->f_310[iParam4 /*14*/], func_347(&(iParam0->f_310[iParam4 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam4 /*14*/].f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(&(iParam0->f_310[iParam4 /*14*/]), 8);
					func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 4096);
					func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 8192);
					func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 2048);
				}
				break;
			case 0:
				func_341(uParam6, iParam5);
				func_45(iParam0, iParam3);
				if (!func_11(iParam0->f_310[iParam4 /*14*/].f_7, 512))
				{
					if (func_320())
					{
						if (PED::IS_PED_MALE(iParam0->f_310[iParam4 /*14*/]))
						{
							func_134(Global_35, iParam0->f_310[iParam4 /*14*/], "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
						else
						{
							func_134(Global_35, iParam0->f_310[iParam4 /*14*/], "GREET_FEMALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
					}
					else
					{
						func_134(Global_35, iParam0->f_310[iParam4 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(&(iParam0->f_310[iParam4 /*14*/]), 8);
					func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 4096);
					func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 2048);
				}
				else
				{
					func_134(Global_35, iParam0->f_310[iParam4 /*14*/], func_496(&(iParam0->f_310[iParam4 /*14*/])), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					func_34(&(iParam0->f_310[iParam4 /*14*/].f_7), 67108864);
				}
				break;
		}
	}
	else if (func_440(iParam5, 1))
	{
		func_122(uParam6, 0, 0, 1, 0);
		func_332(iParam5, 1);
	}
	return false;
}

bool func_370(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0->f_310[iParam1 /*14*/].f_4 == 20)
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 != 1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 > 45)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0->f_1[0 /*22*/]) < 1f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_1098)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iVar0 /*22*/].f_1))
		{
			return false;
		}
		if (func_148(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iVar0 /*22*/].f_1, 1, 0))
		{
			iParam0->f_310[iParam1 /*14*/].f_8 = iVar0;
			return false;
		}
		iVar0++;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_310[iParam1 /*14*/]) && iParam0->f_310[iParam1 /*14*/].f_9 < 300f) || iParam0->f_310[iParam1 /*14*/].f_9 < (19f * 4f))
	{
		*bParam2 = 1;
		return false;
	}
	return true;
}

void func_371(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_96(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	PED::_0x39A2FC5AF55A52B1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		PED::_0x7C08E7CB8D951B70(iParam0, fParam7);
	}
	PED::_0x36E4B61DC56DE77C(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_372(int iParam0, int iParam1, int iParam2, int* iParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_11(iParam0->f_310[iParam1 /*14*/].f_7, 32768);
	iVar1 = func_497(iParam0, iParam1, iParam3, uParam4, uParam5);
	if (iVar1 != -1)
	{
		func_120(iParam0, iParam2, 0);
	}
	switch (iVar1)
	{
		case 0:
			if (bVar0)
			{
				func_341(uParam4, iParam3);
				func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
				func_134(Global_35, iParam0->f_310[iParam1 /*14*/], "DEFUSE_ARGUMENT_TOUGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 268435456);
				func_74(&(iParam0->f_310[iParam1 /*14*/].f_7), 134217728);
			}
			else
			{
				func_341(uParam4, iParam3);
				func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
				func_134(iParam0->f_310[iParam1 /*14*/], Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 1:
			func_341(uParam4, iParam3);
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 8192);
			break;
	}
}

void func_373(var uParam0, bool bParam1)
{
	func_430(uParam0[0 /*17*/], func_429(8), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], bParam1);
	func_433(uParam0[0 /*17*/], 15f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	func_430(uParam0[2 /*17*/], func_429(12), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 0);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_374(var uParam0, bool bParam1)
{
	func_430(uParam0[0 /*17*/], func_429(7), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 15f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 15f);
	func_430(uParam0[2 /*17*/], func_429(12), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 0);
	func_433(uParam0[2 /*17*/], 15f);
}

bool func_375(int iParam0, int iParam1, int iParam2, bool bParam3)
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

char* func_376()
{
	return "FINAL_WARNING";
}

bool func_377(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (!func_43(*uParam1, 64))
	{
		return false;
	}
	if (func_43(*uParam1, 8))
	{
		return false;
	}
	if (iParam0->f_1[iParam2 /*22*/].f_6 == 2)
	{
		return false;
	}
	return true;
}

void func_378(var uParam0)
{
	if (!func_125(uParam0))
	{
	}
	if (!func_318(uParam0))
	{
		uParam0->f_2 = (func_301() - uParam0->f_1);
		func_302(uParam0, 2);
	}
}

void func_379(int iParam0, int iParam1)
{
	if (!func_11(iParam0->f_310[iParam1 /*14*/].f_7, 131072))
	{
		if (func_354(iParam0->f_310[iParam1 /*14*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(iParam0->f_310[iParam1 /*14*/]) == 1)
		{
			TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam1 /*14*/], true, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_310[iParam1 /*14*/], Global_35, -1, -1f, -1f, -1f);
		}
	}
	else if (func_354(iParam0->f_310[iParam1 /*14*/], 242628503) && TASK::GET_SEQUENCE_PROGRESS(iParam0->f_310[iParam1 /*14*/]) == 0)
	{
		TASK::CLEAR_PED_TASKS(iParam0->f_310[iParam1 /*14*/], true, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(iParam0->f_310[iParam1 /*14*/], Global_35, -1, false, 1);
	}
}

bool func_380(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	if (func_11(iParam0->f_310[iParam2 /*14*/].f_7, 32768) || !PED::GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bVar0 = func_348(iParam0->f_310[iParam2 /*14*/], Global_35, 0, 19f, 0);
	}
	else
	{
		bVar0 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0->f_310[iParam2 /*14*/], Global_35, 17);
	}
	if (!bVar0)
	{
		if (func_375(Global_35, iParam0->f_1[iParam1 /*22*/].f_2, 148, 1))
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_310[iParam2 /*14*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
			fVar4 = 2f;
			if (func_11(iParam0->f_310[iParam2 /*14*/].f_7, 32768))
			{
				fVar4 = 6f;
			}
			if (vVar1.x < 0f)
			{
				vVar1.x = (vVar1.x * -1f);
			}
			if (vVar1.y > 0f && vVar1.x < fVar4)
			{
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

void func_381(int iParam0, int iParam1, int iParam2)
{
	if (!func_11(iParam0->f_1[iParam2 /*22*/].f_4, 2048))
	{
		func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 16777216);
		func_34(&(iParam0->f_1[iParam2 /*22*/].f_4), 2048);
		iParam0->f_1[iParam2 /*22*/].f_20 = iParam1;
	}
}

void func_382(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_1[iParam1 /*22*/].f_4, 2048))
	{
		func_74(&(iParam0->f_310[iParam0->f_1[iParam1 /*22*/].f_20 /*14*/].f_7), 16777216);
		func_74(&(iParam0->f_1[iParam1 /*22*/].f_4), 2048);
		iParam0->f_1[iParam1 /*22*/].f_20 = -1;
	}
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_498(iParam0, iParam1);
	iVar1 = func_498(iParam0, iParam2);
	if (iVar0 >= iVar1)
	{
		return;
	}
	switch (iVar1)
	{
		case 3:
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 131072);
		case 2:
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 65536);
		case 1:
			func_34(&(iParam0->f_310[iParam1 /*14*/].f_7), 32768);
		default:
			break;
	}
}

void func_384(var uParam0)
{
	if (!func_125(uParam0))
	{
	}
	if (func_318(uParam0))
	{
		uParam0->f_1 = (func_301() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_303(uParam0, 2);
	}
}

bool func_385(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 != -1)
	{
		return false;
	}
	if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_1[0 /*22*/]))
	{
		return false;
	}
	if (func_11(iParam0->f_1[iParam2 /*22*/].f_4, 128))
	{
		return false;
	}
	return true;
}

char* func_386()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_FAR";
		case 1:
			return "GET_LOST";
		case 2:
			return "DISCOVERED_FAR";
			default:
				break;
	}
}

bool func_387(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
{
	if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 524288))
	{
		return false;
	}
	if (func_499(iParam0, iParam2))
	{
		return true;
	}
	if (!bParam4)
	{
		if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 67108864))
		{
			return false;
		}
		if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 268435456))
		{
			return true;
		}
	}
	else if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 131072) && func_377(iParam0, uParam5, iParam3))
	{
		return true;
	}
	return false;
}

char* func_388(bool bParam0)
{
	if (bParam0)
	{
		return "KEEP_GOING";
	}
	return "GUARD_PLAYER_LOITERING";
}

char* func_389()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_NEAR";
		case 1:
			return "WARNING";
		case 2:
			return "WARNED_ALREADY";
			default:
				break;
	}
}

char* func_390()
{
	return "OPENS_FIRE";
}

bool func_391(int iParam0, int iParam1, var uParam2)
{
	if (!func_43(*uParam2, 64))
	{
		return true;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_9 > (2.75f + 1f))
	{
		return true;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_12 == 0)
	{
		return false;
	}
	if ((MISC::GET_GAME_TIMER() - iParam0->f_310[iParam1 /*14*/].f_12) < 3000)
	{
		return false;
	}
	return true;
}

char* func_392()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "OPENS_FIRE";
		case 1:
			return "TAUNT_GEN_NEUTRAL";
		case 2:
			return "TAUNT_GEN_MALE";
			default:
				break;
	}
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0 /*22*/]))
		{
			if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_1[iVar0 /*22*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iVar0 /*22*/].f_1, true, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam2)
	{
		case 5:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			PED::_0x78815FC52832B690(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam0->f_310[iParam1 /*14*/], iParam0->f_1[iParam0->f_310[iParam1 /*14*/].f_8 /*22*/].f_2, 0, false, 0);
			break;
		case 0:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, true);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, false);
			PED::_0x78815FC52832B690(iParam0->f_310[iParam1 /*14*/], 1);
			func_500(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 1:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::_0x78815FC52832B690(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			func_500(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 2:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 1);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::_0x8ACC0506743A8A5C(iParam0->f_310[iParam1 /*14*/], GET_HASH_KEY("ONAMOVINGTRAIN"), 1, -1082130432 /* Float: -1f */);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			func_500(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 3:
			PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_310[iParam1 /*14*/], 2);
			PED::SET_PED_COMBAT_RANGE(iParam0->f_310[iParam1 /*14*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_310[iParam1 /*14*/], 42, false);
			PED::_0x8ACC0506743A8A5C(iParam0->f_310[iParam1 /*14*/], GET_HASH_KEY("ONAMOVINGTRAIN"), 1, -1082130432 /* Float: -1f */);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			func_500(iParam0->f_310[iParam1 /*14*/]);
			break;
		case 4:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_310[iParam1 /*14*/], true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_1[1 /*22*/], ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false)) };
			TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(0, iParam0->f_1[1 /*22*/], 0, -1, 0.65f, vVar1.x, -4f, 1073741824 /* Float: 2f */, 17);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_1[1 /*22*/], 0, 3f, -1f, -1f);
			TASK::TASK_CLIMB(0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0->f_310[iParam1 /*14*/], iVar0);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_310[iParam1 /*14*/], 189, true);
			break;
	}
	iParam0->f_310[iParam1 /*14*/].f_5 = iParam2;
}

void func_395(int iParam0, int iParam1, int iParam2)
{
	if (func_501(iParam0, iParam1))
	{
		func_84(&(iParam0->f_310[iParam1 /*14*/]));
		iParam0->f_310[iParam1 /*14*/].f_4 = 20;
		iParam0->f_1101++;
	}
}

int func_396()
{
	return GET_HASH_KEY("S_M_M_UNITRAINGUARDS_01");
}

int func_397(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_201(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_201(iVar4) && iVar4 != iVar0)
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
	if (func_187() == -1 && !func_502(iVar0))
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
				if (func_502(GET_HASH_KEY("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_201(iVar0))
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
		func_503(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_504(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_505(iVar0))
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

void func_398(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 307, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
	PED::_0xBD75500141E4725C(*uParam0, GET_HASH_KEY("LAW"));
	PED::SET_PED_COMBAT_RANGE(*uParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 6, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 71, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 73, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 47, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 31, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
	PED::SET_COMBAT_FLOAT(*uParam0, 13, 7.5f);
	PED::SET_PED_ACCURACY(*uParam0, 50);
}

int func_399()
{
	return GET_HASH_KEY("S_M_M_UNITRAINENGINEER_01");
}

char* func_400(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("S_M_M_UNITRAINENGINEER_01"):
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
				case default:
					return "0835_S_M_M_GenConductor_01_WHITE_01";
				case 1:
					return "0836_S_M_M_GenConductor_01_WHITE_02";
				case 2:
					return "0837_S_M_M_GenConductor_01_WHITE_03";
					break;
				case GET_HASH_KEY("S_M_M_UNITRAINGUARDS_01"):
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					switch (iVar0)
					{
						case 0:
						case default:
							return "0946_A_M_M_Guard_White_AGGRESSIVE_01";
						case 1:
							return "0947_A_M_M_Guard_White_AGGRESSIVE_02";
						case 2:
							return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
						case 3:
							return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
						case 4:
							return "0950_A_M_M_Guard_White_AGGRESSIVE_05";
						case 5:
							return "0951_A_M_M_Guard_White_AGGRESSIVE_06";
						case 6:
							return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
						case 7:
							return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
						case 8:
							return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
						case 9:
							return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
							break;
					}
					return "";
				}

void func_401(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_402(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_402(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_319(iParam0, iParam1);
}

bool func_403(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_404(int iParam0, int iParam1)
{
	if (func_187() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_405(int iParam0)
{
	if (func_187() != -1)
	{
		if (func_407(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_407(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_407(iParam0, 65536) && !func_407(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_407(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_407(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_407(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_408(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_409()
{
	return Global_1905944.f_5694;
}

int func_410(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_506(iParam0);
}

bool func_411(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iParam1 /*22*/]))
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iParam0->f_1[iParam1 /*22*/], true, false), true) <= fParam2)
	{
		return true;
	}
	return false;
}

Vector3 func_412(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + Vector(0.1f, 0.1f, 0.1f) * vVar7 };
	return vVar0;
}

Vector3 func_413(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + vVar7 };
	return vVar0;
}

bool func_414()
{
	float fVar0;

	fVar0 = 250f;
	if (func_309(vLocal_696, 1) == 5)
	{
		fVar0 = 475f;
	}
	if (fLocal_695 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_415(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_416(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_507(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_417(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_418(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_507(0);
	*uParam1 = { func_509(iParam0, func_508(0), iParam3, 0) };
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

int func_419(int iParam0)
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

bool func_420(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

bool func_421(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_422(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_510())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_423(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_511(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_424(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_425(int iParam0)
{
	return func_512(iParam0, 2);
}

bool func_426(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_427(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

void func_428(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_121(&(iParam0->f_18));
}

char* func_429(int iParam0)
{
	if (func_513(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_430(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_218(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_514(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_515(iParam0->f_6, iParam0->f_5, 0);
			}
			func_516(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_517(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_431(int* iParam0, bool bParam1)
{
	func_518(iParam0, !bParam1);
}

void func_432(int* iParam0, bool bParam1)
{
	func_519(iParam0, !bParam1, 0);
}

void func_433(int* iParam0, float fParam1)
{
	if (fParam1 <= 0f)
	{
		func_520(iParam0, 0);
	}
	else
	{
		func_521(iParam0, fParam1);
	}
}

void func_434(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_435(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_436(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_522(iParam0, iParam1))
		{
			if (!func_11(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_122(uParam2, 0, 0, 1, 0);
				func_34(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_11(iParam1->f_10, 1))
		{
			func_523(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_74(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_437(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_11(iParam4, 32);
		func_524(iParam1, uParam2, 0);
		iVar5 = func_525(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_122(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_11(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_11(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_11(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_11(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_11(iParam4, 8388608) || func_11(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_11(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_11(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_440(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_440(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_11(iParam4, 67108864))
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
				iParam6 = func_526(uParam0);
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
			if (func_11(iParam4, 268435456))
			{
				iVar8 = func_527(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_528(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_440(iParam1, 23))
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
			if (func_11(iParam4, 2) || func_11(iParam4, 16))
			{
				func_439(*uParam0, 1, 1);
			}
			else
			{
				func_439(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_438(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_439(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_440(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_441(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_529(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_442(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_530(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_11(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_443(int iParam0)
{
	if (func_11(iParam0, 4))
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
	if (func_11(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_11(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_444(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_531(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_532(Global_35)) || func_533(Global_35)) || func_534(Global_35));
	fVar12 = -1f;
	if (func_125(&(iParam1->f_13)))
	{
		fVar12 = func_224(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_218((uParam4[iVar0 /*17*/])->f_6);
		func_535(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_536(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_537(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_122(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_538(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_524(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_539(iParam1, fParam6, iParam1->f_9))
					{
						func_81(&(iParam1->f_18));
						if (bVar6)
						{
							func_538(uParam4, 0, 0);
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
		func_540(iParam1, fParam2);
	}
	return bVar5;
}

void func_445(var uParam0)
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

void func_446(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_541(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_540(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_447(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_542(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_543(iParam1, 0);
				func_524(iParam1, uParam2, func_440(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_448(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_81(&(iParam1->f_18));
			return false;
		}
		else if (func_125(&(iParam1->f_18)))
		{
			func_121(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_125(&(iParam1->f_18)))
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
	return func_130(&(iParam1->f_18), fParam2);
	return true;
}

void func_449(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_535(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_450(int* iParam0, var uParam1)
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
	func_524(iParam0, uParam1, 1);
	func_122(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

var func_451(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_452(int iParam0, int iParam1, float fParam2)
{
	return func_544(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_453(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_454(var uParam0)
{
	return uParam0;
}

void func_455(int iParam0)
{
	func_121(&uLocal_0);
	func_545(1, iParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_546();
}

bool func_456(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_457(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630.f_27 && !bParam4)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_AIM")))
	{
		fVar0 = func_323(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_488(PLAYER::PLAYER_PED_ID(), 0);
				if (func_420(iVar3) && !PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_ATTACK")))
				{
					return false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_547(0) };
				vVar10 = { func_548(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_458(var uParam0, bool bParam1, int iParam2)
{
	func_549(iParam2);
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
		uParam0->f_13 = func_550(0);
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
							func_34(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_551(1))
						{
							func_34(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_551(1) || *uParam0 & 8192 != 0))
				{
					func_74(uParam0, 33554432);
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
			if (func_552(uParam0))
			{
				uParam0->f_15 = func_326();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_326() - uParam0->f_15) > 500)
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
	func_553(uParam0);
}

bool func_459(int iParam0, var uParam1)
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
			if (!func_485(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_554(iParam0, iVar2) <= func_555(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_460(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_556(iParam2, 1, 1, 1, 0))
	{
		func_34(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_327(uParam1, 1);
	func_557();
}

bool func_461(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_368(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_487(uParam1);
			if (func_558(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_486(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_327(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_327(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_462(int iParam0, int iParam1, var uParam2)
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
	if (func_366(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_487(uParam2);
		if (func_558(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_486(uParam2)
				{
					func_327(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_463(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_464(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_559(uParam2);
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
			if (func_472(uParam2, iParam1))
			{
				func_327(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_465(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_560(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_472(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_327(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_466(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_561(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_327(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_327(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_562(iParam1, vVar0, vVar4))
					{
						func_327(uParam2, 1);
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
					func_327(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_562(iParam1, vVar0, vVar7))
					{
						func_327(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_467(int iParam0, var uParam1)
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
		if (!func_485(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_563(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_564(Global_1935630.f_34[iVar0]))
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
			if (func_565(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_566(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_567(uParam1, iParam0, fVar1, iVar0))
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

bool func_468(int iParam0, var uParam1)
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

bool func_469(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_470(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_568(iVar0, &iVar2))
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
	if (func_569(iVar0, iParam0))
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

int func_471(var uParam0, int iParam1)
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

bool func_472(var uParam0, int iParam1)
{
	if (func_570(uParam0))
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

bool func_473(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_323(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_474()
{
}

bool func_475(var uParam0, int iParam1)
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
		if (func_571(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_326();
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
						if (func_96(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_326();
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

bool func_476()
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
	if ((func_326() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_477(var uParam0, int iParam1)
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
	fVar0 = func_555(uParam0);
	if (uParam0->f_12 > func_572(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_573(iParam1);
	iVar1 = func_574(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_478(int iParam0, int iParam1, var uParam2)
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
	return func_575(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_479(int iParam0, var uParam1)
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
		if (func_576(iParam0, uParam1, 1))
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
					if (!func_577(uParam1, iParam0))
					{
						if (func_96(iVar4, Global_36, 1) < 7f)
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

bool func_480(int iParam0, var uParam1)
{
	if (!func_578(0))
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

bool func_481(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_482(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_483(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_326();
	}
	else if (func_326() - uParam1->f_4) > func_579(uParam1)
	{
		return func_580(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_484(var uParam0, int iParam1)
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

bool func_485(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_574(iParam2);
	}
	else
	{
		iVar1 = func_573(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_574(iParam0);
	}
	else
	{
		iVar0 = func_573(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_11(*uParam1, 8388608))
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

int func_486(var uParam0)
{
	return uParam0->f_18;
}

float func_487(var uParam0)
{
	return uParam0->f_17;
}

int func_488(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_489(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_490(int iParam0, int iParam1)
{
	int iVar0;

	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iParam0, &iVar0, false, false) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_491(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_489(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_492(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_581(iParam0, iParam9))
	{
		func_341(uParam7, iParam6);
		func_99(uParam2);
		if (!func_43(*uParam2, 65536) || !func_11(iParam0->f_310[iParam9 /*14*/].f_7, 512))
		{
			func_139(iParam0, iParam8, uParam1, uParam4, iParam5, uParam2, uParam3, iParam10, uParam7, iParam6, 0, 0);
		}
		else
		{
			func_121(uParam1[15 /*3*/]);
		}
		func_34(&(iParam0->f_310[iParam9 /*14*/].f_7), 512);
		func_263(iParam0, iParam9, *uParam2);
		func_34(&(iParam0->f_310[iParam9 /*14*/].f_7), 4194304);
		func_34(&(iParam0->f_310[iParam9 /*14*/].f_7), 2);
		iParam0->f_1[iParam8 /*22*/].f_10++;
		func_45(iParam0, iParam8);
		func_134(Global_35, iParam0->f_310[iParam9 /*14*/], "ROB_COACH_THREATEN_WARNING_SHOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		func_81(uParam1[1 /*3*/]);
		func_121(uParam1[15 /*3*/]);
		func_246(&(iParam0->f_310[iParam9 /*14*/]), 9);
	}
}

void func_493(var uParam0, bool bParam1, bool bParam2)
{
	func_430(uParam0[2 /*17*/], func_429(12), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], (bParam1 || bParam2));
	func_433(uParam0[2 /*17*/], 2.75f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 1);
	func_433(uParam0[1 /*17*/], 2.75f);
	func_430(uParam0[0 /*17*/], func_429(7), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 1);
	func_433(uParam0[0 /*17*/], 2.75f);
}

void func_494(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_430(uParam0[0 /*17*/], func_429(7), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], (bParam1 || bParam2));
	func_433(uParam0[0 /*17*/], 2.75f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], (bParam1 || bParam3));
	func_433(uParam0[1 /*17*/], 2.75f);
	func_430(uParam0[2 /*17*/], func_429(12), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 1);
	func_432(uParam0[2 /*17*/], (bParam1 || bParam4));
	func_433(uParam0[2 /*17*/], 2.75f);
}

void func_495(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_11(iParam0->f_310[iParam2 /*14*/].f_7, 512))
	{
		if (iParam0->f_1[iParam3 /*22*/].f_10 == 0)
		{
			func_134(Global_35, iParam0->f_310[iParam2 /*14*/], "ROB_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 == 0)
			{
				func_134(Global_35, iParam0->f_310[iParam2 /*14*/], "ROB_ESCALATED_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
			else
			{
				func_134(Global_35, iParam0->f_310[iParam2 /*14*/], "ROB_ESCALATED_THREATEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
		}
	}
}

char* func_496(var uParam0)
{
	if (func_11(uParam0->f_7, 4194304) || func_11(uParam0->f_7, 2))
	{
		return "ROB_ACCEPT_OFFER";
	}
	return "ROB_DEFUSE";
}

int func_497(int iParam0, int iParam1, int* iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_11(iParam0->f_310[iParam1 /*14*/].f_7, 32768);
	if (*uParam4 != 1 || func_11(iParam0->f_310[iParam1 /*14*/].f_7, 2048))
	{
		func_341(uParam3, iParam2);
		if (!bVar0)
		{
			func_582(uParam3);
		}
		else
		{
			func_583(uParam3[0 /*17*/], 0, 1);
			func_373(uParam3, (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 268435456) || func_11(iParam0->f_310[iParam1 /*14*/].f_7, 134217728)));
		}
		func_74(&(iParam0->f_310[iParam1 /*14*/].f_7), 2048);
		*uParam4 = 1;
	}
	iVar2 = func_345(1, 0, 0) | 16384;
	if (bVar0)
	{
		fVar1 = 0f;
	}
	else
	{
		fVar1 = 2f;
	}
	iVar3 = func_346(&(iParam0->f_310[iParam1 /*14*/]), iParam2, 19f, uParam3, fVar1, 3, 0, 0, iVar2, 0, 0, 2, iParam0->f_310[iParam1 /*14*/].f_9);
	if (iVar3 != -1)
	{
		return iVar3;
	}
	if (func_584(iParam2))
	{
		iVar4 = func_585(iParam2);
		if (iVar4 != -1)
		{
			if (!bVar0)
			{
				switch (iVar4)
				{
					case 0:
						func_583(uParam3[0 /*17*/], 1, 1);
						func_134(Global_35, iParam0->f_310[iParam1 /*14*/], "GREET_GENERAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 1:
						func_583(uParam3[1 /*17*/], 1, 1);
						func_134(Global_35, iParam0->f_310[iParam1 /*14*/], func_347(&(iParam0->f_310[iParam1 /*14*/])), 0, -1082130432 /* Float: -1f */, iParam0->f_310[iParam1 /*14*/].f_11, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
			}
		}
	}
	return iVar3;
}

int func_498(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 131072))
	{
		return 3;
	}
	if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 65536))
	{
		return 2;
	}
	if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 32768))
	{
		return 1;
	}
	return 0;
}

bool func_499(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	float fVar2;

	if (iParam1 < 0)
	{
		return true;
	}
	iVar0 = func_586(Global_35, iParam0->f_1[iParam1 /*22*/], 1060437492 /* Float: 0.707f */);
	if (!PED::_0xF60165E1D2C5370B(Global_35, &uVar1, &fVar2))
	{
		return false;
	}
	if (fVar2 >= 1.5f)
	{
		return true;
	}
	else if (fVar2 >= 1f)
	{
		if (iVar0 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_500(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

bool func_501(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_310[iParam1 /*14*/]))
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_502(int iParam0)
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

int func_503(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_587(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_588((398 + iVar28), 1);
			if (func_589(iParam0, &Var0, iVar5, 0))
			{
				if (func_590(iParam0, &Var6, iVar5))
				{
					Var29 = { func_509(iParam0, Var0, iVar5, 0) };
					func_591(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_592(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_593(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_594(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_504(int iParam0, int iParam1, float fParam2)
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
			Jump @520; //curOff = 480
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == GET_HASH_KEY("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
			}
		}

bool func_505(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_506(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_595(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_507(bool bParam0)
{
	if (func_187() == -1)
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

struct<4> func_508(bool bParam0)
{
	int iVar0;

	iVar0 = func_507(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_509(923904168, func_596(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_509(923904168, func_596(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_509(923904168, func_596(bParam0), -740156546, 0);
}

struct<4> func_509(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_597(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_507(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_510()
{
	if (func_187() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_511(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_598(vParam0, 0f, 0f, 0, 2);
	return func_598(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_512(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_513(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_514(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_515(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_516(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		func_599(iParam0, 4);
		func_600(iVar0, 1);
		func_601(iVar0, 1);
	}
	else
	{
		func_602(iParam0, 4);
		func_601(iVar0, 0);
	}
}

void func_517(int* iParam0, char* sParam1)
{
	if (func_218(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_515(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_603(iParam0, 1);
}

void func_518(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_604(iParam0, 4))
		{
			func_219(&(iParam0->f_6), 1, 1);
			func_605(iParam0, 4);
		}
	}
	else if (func_604(iParam0, 4))
	{
		func_603(iParam0, 4);
		func_605(iParam0, 14);
	}
}

void func_519(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_604(iParam0, 13))
	{
		func_605(iParam0, 0);
	}
	else
	{
		func_603(iParam0, 0);
	}
	if (func_218(iParam0->f_6))
	{
		if (bParam2)
		{
			func_219(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_520(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_603(iParam0, 7);
}

void func_521(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_605(iParam0, 7);
}

bool func_522(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_606((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_523(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_541(uParam0[iVar0 /*17*/]))
		{
			func_605(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_524(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_219(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_428(iParam0, 0);
		}
	}
}

int func_525(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_607(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_218((uParam2[iVar0 /*17*/])->f_6))
		{
			func_605(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_526(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_608(*uParam0);
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

int func_527(var uParam0, int iParam1)
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

void func_528(int* iParam0, int* iParam1)
{
	if (!func_440(iParam0, 23))
	{
		if (iParam1->f_7 == GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_605(iParam1, 19);
			func_543(iParam0, 23);
			func_609(iParam1, 2);
		}
	}
}

bool func_529(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_610(16))
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
					func_611(16);
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

void func_530(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_607(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_531(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_532(int iParam0)
{
	return (func_612(iParam0, 4) || func_612(iParam0, 5));
}

int func_533(int iParam0)
{
	return func_612(iParam0, 7);
}

int func_534(int iParam0)
{
	return func_612(iParam0, 6);
}

void func_535(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_541(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_607(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_536(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_613(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_614(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_516(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_516(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_615(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_537(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_616(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_617(iParam1, 1))
	{
		func_618(iParam1, 1);
		return true;
	}
	return false;
}

void func_538(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_519(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_539(int* iParam0, float fParam1, bool bParam2)
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

void func_540(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_541(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_542(int iParam0)
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

void func_543(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_544(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_545(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_546()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

Vector3 func_547(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_548((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_548(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_549(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_619();
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
			func_620(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_550(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_551(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_621(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_552(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_187() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_622(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_622(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_574(iVar0) == -1)
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

void func_553(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_623(uParam0);
	}
}

float func_554(int iParam0, int iParam1)
{
	return func_323(iParam0, iParam1, 1, 1);
}

float func_555(var uParam0)
{
	return uParam0->f_26;
}

bool func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_557()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_558(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_11(*uParam0, 4194304))
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

float func_559(var uParam0)
{
	return uParam0->f_23;
}

int func_560(var uParam0)
{
	return uParam0->f_21;
}

int func_561(var uParam0)
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

bool func_562(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_544(iParam0, vParam4, 0.5f))
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

int func_563(int iParam0)
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
	if (func_624(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_564(int iParam0)
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

bool func_565(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(iParam1))
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

bool func_566(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(iParam1))
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

bool func_567(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_625(iParam1))
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

bool func_568(int iParam0, int iParam1)
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

bool func_569(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_626(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
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

bool func_570(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_571(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_96(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_572(var uParam0)
{
	return uParam0->f_24;
}

int func_573(int iParam0)
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

int func_574(int iParam0)
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

int func_575(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_568(Global_35, &iVar1))
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
		fVar2 = func_323(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_323(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_576(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_621(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_577(uParam1, iVar0))
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
				if (!bParam2 || !func_577(uParam1, iVar1))
				{
					if (func_96(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_577(var uParam0, int iParam1)
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

int func_578(int iParam0)
{
	if (func_510())
	{
		return 0;
	}
	return func_289(Global_1347702[58 /*49*/].f_15, 1);
}

int func_579(var uParam0)
{
	return uParam0->f_20;
}

int func_580(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_581(int iParam0, int iParam1)
{
	if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 4194304))
	{
		return false;
	}
	if (!func_11(iParam0->f_310[iParam1 /*14*/].f_7, 33554432))
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_3 == 1)
	{
		return false;
	}
	if (iParam0->f_310[iParam1 /*14*/].f_9 > (2.75f + 0.5f))
	{
		return false;
	}
	if (!PED::IS_PED_SHOOTING(Global_35))
	{
		return false;
	}
	if (PLAYER::_0x6614F9039BD31931(PLAYER::GET_PLAYER_INDEX(), 7, 0))
	{
		return false;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 19f, 4) > 0)
	{
		return false;
	}
	return true;
}

void func_582(var uParam0)
{
	func_430(uParam0[0 /*17*/], func_429(7), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_431(uParam0[0 /*17*/], 1);
	func_432(uParam0[0 /*17*/], 0);
	func_433(uParam0[0 /*17*/], 15f);
	func_430(uParam0[1 /*17*/], func_429(10), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_431(uParam0[1 /*17*/], 1);
	func_432(uParam0[1 /*17*/], 0);
	func_433(uParam0[1 /*17*/], 15f);
	func_430(uParam0[2 /*17*/], func_429(12), 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	func_431(uParam0[2 /*17*/], 0);
	func_433(uParam0[2 /*17*/], 15f);
}

void func_583(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_604(iParam0, 13))
		{
			if (bParam2)
			{
				func_519(iParam0, 0, 0);
			}
			func_605(iParam0, 13);
		}
	}
	else if (func_604(iParam0, 13))
	{
		func_603(iParam0, 13);
	}
}

bool func_584(int* iParam0)
{
	return iParam0->f_2 == 2;
}

int func_585(int* iParam0)
{
	if (func_440(iParam0, 0))
	{
		if (func_627(iParam0))
		{
			func_332(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

int func_586(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_628(iParam0, vVar0, iParam2);
}

struct<5> func_587(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_596(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_629(iParam0))
	{
		case GET_HASH_KEY("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_509(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case GET_HASH_KEY("WEAPON"):
			Var0 = { func_508(bParam1) };
			if (bParam2 && func_630(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_589(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_589(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_590(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_631(bParam1) };
			switch (func_632(iParam0))
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
			if (func_633(iParam0, -1823706425))
			{
				Var0 = { func_509(GET_HASH_KEY("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, GET_HASH_KEY("KIT_CAMP"));
			}
			else if (func_633(iParam0, -1483207246))
			{
				Var0 = { func_509(GET_HASH_KEY("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_634(Var0, &Var27, bParam1, 0))
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

int func_588(int iParam0, int iParam1)
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

bool func_589(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_635(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_590(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_418(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_591(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_636(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_634(*uParam1, &Var0, bParam6, 0))
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
	if (!func_592(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_507(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_592(bool bParam0)
{
	if (func_187() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_507(bParam0));
}

int func_593(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_637(iParam0))
	{
		return 0;
	}
	if (!func_592(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_594(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_638(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_595(int iParam0)
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

struct<4> func_596(bool bParam0)
{
	return func_509(GET_HASH_KEY("CHARACTER"), func_639(), -1591664384, bParam0);
}

bool func_597(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_598(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_599(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_600(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_512(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_601(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_602(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

void func_603(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_604(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_605(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_606(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_607(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_218(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_219(&(iParam1->f_6), 0, 1);
	}
	if (!func_218(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_541(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_640(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_218(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_615(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_641(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_642(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_514(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_641(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_516(iParam1->f_6, 0, 1);
				}
				else
				{
					func_516(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_608(int iParam0)
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

void func_609(int* iParam0, int iParam1)
{
	if (!func_604(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_605(iParam0, 14);
		}
	}
}

bool func_610(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_611(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_612(int iParam0, int iParam1)
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

bool func_613(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_614(int iParam0, bool bParam1)
{
	if (bParam1 && !func_218(iParam0))
	{
		return false;
	}
	return !func_512(iParam0, 4);
}

void func_615(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_218(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_641(iParam0, 18, 0, 1);
	func_641(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_616(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_218(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_617(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_218(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_618(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_619()
{
	if (func_643())
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

void func_620(var uParam0, var uParam1)
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

bool func_621(bool bParam0, int iParam1, int iParam2)
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

int func_622(var uParam0)
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

void func_623(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_74(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_34(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_624(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_625(int iParam0)
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

int func_626(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_627(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

int func_628(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_644(vVar3, vVar6);
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
	if (func_456(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_629(int iParam0)
{
	vector3 vVar0;

	if (!func_597(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_630(int iParam0, bool bParam1)
{
	if (func_632(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_645(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_631(bool bParam0)
{
	int iVar0;

	iVar0 = func_507(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_509(271701509, func_596(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_509(271701509, func_596(bParam0), 12999093, 0);
}

int func_632(int iParam0)
{
	struct<2> Var0;

	if (!func_597(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_633(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_632(iParam0);
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

bool func_634(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_507(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_635(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_597(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_509(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_507(bParam6), &Var0, 0);
	return uVar4;
}

bool func_636(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_637(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_638(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

struct<4> func_639()
{
	struct<4> Var0;

	return Var0;
}

int func_640(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_512(iVar0, 2))
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
				func_646(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_641(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_642(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_643()
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

float func_644(vector3 vParam0, vector3 vParam3)
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

bool func_645(int iParam0)
{
	if (!func_647(iParam0))
	{
		return false;
	}
	return func_648(iParam0);
}

void func_646(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_600(iParam0, 1);
	func_601(iParam0, 1);
	func_602(iParam0, 128);
}

bool func_647(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_648(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

