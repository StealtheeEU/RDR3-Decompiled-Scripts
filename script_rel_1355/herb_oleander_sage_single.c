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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	vector3 vLocal_23[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_36[4] = { 0, 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<39> Var0;
	float fVar39;
	bool bVar40;
	int iVar41;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0.f_9 = 3;
	Var0.f_13 = 4;
	Var0.f_20 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 4;
	Var0.f_28 = 4;
	Var0.f_33 = 4;
	Var0.f_5 = ScriptParam_0;
	Var0.f_6 = ScriptParam_0.f_1;
	func_1(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0);
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&Var0);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(&Var0);
	}
	Var0 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var0.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	Var0.f_4 = TASK::_0x6718F40313A2B5A6(ScriptParam_0.f_1);
	Global_43839[Var0.f_18]++;
	if (func_3() != 0)
	{
		if (!func_4(10))
		{
			func_2(&Var0);
		}
	}
	Var0.f_24 = func_5(Var0.f_18, Var0);
	if (Var0.f_24 <= -1)
	{
		Var0.f_24 = func_6(Var0.f_18, Var0);
		if (func_7(&Var0))
		{
			func_8(&Var0);
		}
		else
		{
			func_9(&Var0);
		}
	}
	while (func_10(&Var0))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			func_2(&Var0);
		}
		BUILTIN::WAIT(0);
	}
	iLocal_14 = 0;
	while (func_11(&Var0))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			func_2(&Var0);
		}
		func_12(&Var0);
		func_13(&Var0);
		if (iLocal_14 <= 0)
		{
			fVar39 = BUILTIN::VDIST2(Var0, Global_36);
			switch (func_14(&Var0))
			{
				case 0:
					Var0.f_24 = func_5(Var0.f_18, Var0);
					if (Var0.f_24 <= -1)
					{
						Var0.f_24 = func_6(Var0.f_18, Var0);
						if (func_7(&Var0))
						{
							func_8(&Var0);
						}
						else
						{
							func_9(&Var0);
						}
					}
					func_15(&Var0, 1);
					break;
				case 1:
					if (fVar39 < 4900f)
					{
						func_15(&Var0, 2);
					}
					break;
				case 2:
					if (func_16(Var0.f_24, Var0.f_4))
					{
						func_17(Var0.f_24, 0);
					}
					bVar40 = func_18(Var0.f_24);
					if (bVar40)
					{
						func_15(&Var0, 3);
					}
					else
					{
						func_15(&Var0, 4);
					}
					func_19(&Var0);
					break;
				case 4:
					if (func_20(&Var0))
					{
						iVar41 = func_21(&Var0);
						if (iVar41 != 1)
						{
							if (iVar41 == 0)
							{
								iLocal_14 = 1000;
							}
							else
							{
								func_2(&Var0);
							}
						}
						else
						{
							func_15(&Var0, 5);
						}
					}
					break;
				case 3:
					if (func_20(&Var0))
					{
						iVar41 = func_21(&Var0);
						if (iVar41 == 1)
						{
							func_15(&Var0, 6);
						}
						else if (iVar41 == 0)
						{
							iLocal_14 = 1000;
						}
						else
						{
							func_2(&Var0);
						}
					}
					break;
				case 5:
					if (func_22(&Var0))
					{
						func_15(&Var0, 10);
					}
					break;
				case 6:
					if (func_22(&Var0))
					{
						func_15(&Var0, 7);
					}
					break;
				case 7:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 174961811))
					{
						if (func_24(Var0.f_18, func_23(PLAYER::GET_PLAYER_INDEX()), &(Var0.f_24), &iLocal_21, 1))
						{
							func_15(&Var0, 9);
						}
					}
					else if (!func_18(Var0.f_24))
					{
						func_15(&Var0, 9);
					}
					if (!bLocal_22)
					{
						if (func_25(4))
						{
							if (fVar39 < 625f && !PED::IS_PED_ON_MOUNT(Global_35))
							{
								func_26(602, 0);
								bLocal_22 = true;
							}
						}
						else
						{
							bLocal_22 = true;
						}
					}
					if (fVar39 > 8100f || func_27(Var0.f_24, 1))
					{
						func_28(Var0.f_24, 1);
						func_15(&Var0, 8);
					}
					break;
				case 9:
					func_29(Var0.f_24);
					func_30(Var0.f_24, iLocal_21);
					if (func_31(Var0.f_18))
					{
						func_32(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(Var0.f_4), 1777389635, 0));
					}
					Global_1935496.f_127 = 1;
					func_15(&Var0, 10);
					break;
				case 10:
					if (func_33(Var0.f_18))
					{
						func_34(Var0, &uLocal_16, &uLocal_17, &uLocal_18);
					}
					if (fVar39 > 8100f || func_27(Var0.f_24, 1))
					{
						func_28(Var0.f_24, 1);
						func_15(&Var0, 8);
					}
					break;
				case 8:
					func_35(&Var0);
					func_15(&Var0, 1);
					break;
			}
		}
		if (func_37(func_36(&Var0)))
		{
			if (func_38(&Var0) != func_36(&Var0))
			{
				func_39(&Var0, func_36(&Var0));
			}
		}
		else if (func_38(&Var0) != Global_36580)
		{
			func_39(&Var0, Global_36580);
		}
		func_40(&Var0);
		iLocal_14 = (iLocal_14 - 1);
		if (iLocal_14 < 0)
		{
			iLocal_14 = 0;
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0);
}

void func_1(var uParam0)
{
	uParam0->f_18 = 26;
	uParam0->f_19 = GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE");
	uParam0->f_20 = 3;
	uParam0->f_21 = 1;
	uParam0->f_22 = 1;
	uParam0->f_38 = GET_HASH_KEY("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF");
}

void func_2(var uParam0)
{
	Global_43839[uParam0->f_18] = (Global_43839[uParam0->f_18] - 1);
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);
	if (func_38(uParam0) == 1 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
	{
		Global_1913813 = uParam0->f_6;
	}
	func_35(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	return Global_1572887.f_12;
}

bool func_4(int iParam0)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return func_42(iParam0);
}

int func_5(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_43(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_44(iVar3))
		{
			return iVar2;
		}
		else if (func_45(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_47(vParam1, func_46(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_6(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return -1;
	}
	if (func_43(vParam1))
	{
		return -1;
	}
	if (Global_40.f_9273 >= 500)
	{
		Global_40.f_9273 = 0;
	}
	iVar0 = Global_40.f_9273;
	func_48(&(Global_27573[iVar0 /*9*/]), iParam0, vParam1, -15);
	Global_40.f_9273++;
	return iVar0;
}

bool func_7(var uParam0)
{
	return uParam0->f_20 != 3;
}

void func_8(var uParam0)
{
	var uVar0[6];
	var uVar7[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	func_49(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_22 > 4)
	{
		uParam0->f_22 = 4;
	}
	if (uParam0->f_21 <= 0)
	{
		uParam0->f_21 = 1;
	}
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_21, uParam0->f_22 + 1);
	iVar12 = 0;
	while (iVar12 <= (iVar11 - 1))
	{
		if (uVar0[iVar12] == 0)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = uVar7[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
		}
		if (uParam0->f_23 > 0)
		{
			iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
		}
		iVar15 = ((uVar0[iVar12] || BUILTIN::SHIFT_LEFT(iVar13, 9)) || BUILTIN::SHIFT_LEFT(iVar14, 13)) | 1073741824;
		func_50(uParam0->f_24, iVar12, iVar15);
		iVar12++;
	}
}

void func_9(var uParam0)
{
	var uVar0[6];
	var uVar7;
	int iVar11;
	int iVar12;

	uVar7 = 3;
	func_49(uParam0->f_20, &uVar0, &uVar7);
	if (uParam0->f_23 > 0)
	{
		iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
	}
	iVar12 = ((uVar0[0] || BUILTIN::SHIFT_LEFT(0, 9)) || BUILTIN::SHIFT_LEFT(iVar11, 13)) | 1073741824;
	func_50(uParam0->f_24, 0, iVar12);
}

bool func_10(var uParam0)
{
	if (func_51(Global_35) && func_52())
	{
		return true;
	}
	func_13(uParam0);
	if (func_37(func_36(uParam0)))
	{
		if (func_38(uParam0) != func_36(uParam0))
		{
			func_39(uParam0, func_36(uParam0));
		}
	}
	else if (func_38(uParam0) != Global_36580)
	{
		func_39(uParam0, Global_36580);
	}
	if (func_38(uParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_11(var uParam0)
{
	if (func_53(1))
	{
		return false;
	}
	if (func_38(uParam0) == 1)
	{
		if (Global_1913813 == 0)
		{
			return false;
		}
	}
	return true;
}

void func_12(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && func_54()) && func_55(PLAYER::PLAYER_ID(), 1, 0)) && func_56(0) == GET_HASH_KEY("HERBALIST"))
	{
		bVar0 = true;
	}
	if (!bVar0 && !(uParam0->f_18 == 11 || uParam0->f_18 == 26))
	{
		return;
	}
	if (func_57(uParam0->f_18) || uParam0->f_8 == 1)
	{
		bVar0 = true;
	}
	if (func_38(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_22)
		{
			if (func_58(uParam0->f_13[iVar1]))
			{
				MISC::_0x40D72189F46D2E15(uParam0->f_13[iVar1], 0);
			}
			iVar1++;
		}
	}
}

void func_13(var uParam0)
{
	int iVar0;

	if (!func_59(&(uParam0->f_25)))
	{
		func_60(&(uParam0->f_25), 1f, 0);
	}
	if (func_61(&(uParam0->f_25)) >= 1f)
	{
		func_62(&(uParam0->f_25));
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_63(Global_36581[iVar0 /*2*/], *uParam0))
			{
				func_64(uParam0, Global_36581[iVar0 /*2*/].f_1);
			}
			iVar0++;
		}
		if (func_31(uParam0->f_18) && !func_65(uParam0->f_18))
		{
			if (func_67(func_66(uParam0->f_18)) >= (func_69(func_68(uParam0->f_18)) - 1))
			{
				func_64(uParam0, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	return uParam0->f_11;
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
}

bool func_16(int iParam0, float fParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return false;
	}
	if (!func_70(iParam0))
	{
		return false;
	}
	if (func_71(iParam0, fParam1))
	{
		return false;
	}
	iVar0 = func_72(iParam0);
	func_73(&iVar0, 0, 0, 0, 0, 3, 0, 0);
	if (func_74(iVar0, 1))
	{
		return true;
	}
	return false;
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_75(iParam0, iVar0))
		{
			func_76(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_77(iParam0, 1);
	}
}

bool func_18(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_75(iParam0, iVar0))
		{
		}
		else if (!func_78(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_19(var uParam0)
{
	TASK::_0x73F0D0327BFA0812(uParam0->f_38);
}

bool func_20(var uParam0)
{
	if (!TASK::_0x5E5D96BE25E9DF68(uParam0->f_38))
	{
		return false;
	}
	return true;
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	uVar4 = uParam0->f_2;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 2f), &uVar4, false))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, (uParam0->f_2 + 10f), &uVar4, false))
		{
			uParam0->f_12++;
			if (uParam0->f_12 >= 50)
			{
				uParam0->f_12 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}
	uParam0->f_2 = uVar4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_75(uParam0->f_24, iVar0))
		{
		}
		else
		{
			func_79(uParam0->f_24, iVar0, &iVar1, &iVar2, &uVar3);
			vLocal_23[iVar0 /*3*/] = (*uParam0 + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
			vLocal_23[iVar0 /*3*/].f_1 = (uParam0->f_1 + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
			vLocal_23[iVar0 /*3*/].f_2 = uParam0->f_2;
			if (uParam0->f_23 > 0)
			{
				iLocal_36[iVar0] = uVar3;
			}
			else
			{
				iLocal_36[iVar0] = -1;
			}
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_23[iVar0 /*3*/], vLocal_23[iVar0 /*3*/].f_1, (vLocal_23[iVar0 /*3*/].f_2 + 10f), &(vLocal_23[iVar0 /*3*/].f_2), false))
			{
				uParam0->f_12 = 0;
				return -1;
			}
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	return 1;
}

bool func_22(var uParam0)
{
	var uVar0;
	int iVar1;

	if (iLocal_15 < 4)
	{
		if (!func_43(vLocal_23[iLocal_15 /*3*/]))
		{
			if (!Global_1913812)
			{
				iVar1 = 0;
				if (((((((uParam0->f_18 == 1 || uParam0->f_18 == 9) || uParam0->f_18 == 10) || uParam0->f_18 == 17) || uParam0->f_18 == 21) || uParam0->f_18 == 25) || uParam0->f_18 == 32) || uParam0->f_18 == 36)
				{
					iVar1 |= 2;
					vLocal_23[iLocal_15 /*3*/] = { vLocal_23[iLocal_15 /*3*/] + func_80(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
				if (uParam0->f_18 == 37)
				{
					iVar1 |= 2;
					vLocal_23[iLocal_15 /*3*/] = { vLocal_23[iLocal_15 /*3*/] + func_80(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
				if (func_78(uParam0->f_24, iLocal_15))
				{
					iVar1 |= 1;
				}
				uParam0->f_13[iLocal_15] = TASK::_0x5B4BBE80AD5972DC(uParam0->f_38, vLocal_23[iLocal_15 /*3*/], func_81((uParam0->f_3 + (IntToFloat(iLocal_15) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f)))), iVar1, &uVar0, iLocal_36[iLocal_15]);
				if (func_82(uParam0->f_18))
				{
					uParam0->f_28[iLocal_15] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vLocal_23[iLocal_15 /*3*/], 0.37f, 4, 27, 0);
				}
				if (uParam0->f_18 == 38)
				{
					func_83(&(uParam0->f_33[iLocal_15]), vLocal_23[iLocal_15 /*3*/], 0.15f);
				}
				iLocal_15++;
				Global_1913812 = 1;
			}
		}
		else
		{
			return true;
		}
		return false;
	}
	return true;
}

Vector3 func_23(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_24(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	float fVar15;

	if (func_43(vParam1))
	{
		return false;
	}
	if (*iParam4 <= -1)
	{
		*iParam4 = func_5(iParam0, vParam1);
	}
	if (*iParam4 <= -1)
	{
		return false;
	}
	fVar14 = -1f;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_75(*iParam4, iVar0))
		{
			if (bParam6 && func_78(*iParam4, iVar0))
			{
			}
			else
			{
				vVar8 = { func_46(*iParam4) };
				func_79(*iParam4, iVar0, &iVar1, &iVar2, &uVar3);
				vVar5.x = (vVar8.x + (IntToFloat(iVar1) * BUILTIN::COS(BUILTIN::TO_FLOAT(iVar2))));
				vVar5.f_1 = (vVar8.y + (IntToFloat(iVar1) * BUILTIN::SIN(BUILTIN::TO_FLOAT(iVar2))));
				fVar15 = func_47(vParam1, vVar5);
				if (fVar14 < 0f || (fVar14 >= 0f && fVar15 < fVar14))
				{
					fVar14 = fVar15;
					iVar4 = iVar0;
					vVar11 = { vVar5 };
				}
			}
		}
		iVar0++;
	}
	if (func_47(vParam1, vVar11) < 25f)
	{
		*iParam5 = iVar4;
		return true;
	}
	return false;
}

bool func_25(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_84(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_85(iParam0, &iVar0, &iVar1);
	if (!func_86(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_87(iVar0, iVar1);
}

bool func_27(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return (Global_38105[iParam0 /*9*/].f_3 && iParam1) != 0;
	}
	return (Global_27573[iParam0 /*9*/].f_3 && iParam1) != 0;
}

void func_28(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 = (Global_38105[iParam0 /*9*/].f_3 - (Global_38105[iParam0 /*9*/].f_3 && iParam1));
		return;
	}
	Global_27573[iParam0 /*9*/].f_3 = (Global_27573[iParam0 /*9*/].f_3 - (Global_27573[iParam0 /*9*/].f_3 && iParam1));
}

void func_29(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 500)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_2 = func_88();
		return;
	}
	Global_27573[iParam0 /*9*/].f_2 = func_88();
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] |= 4096;
		return;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] |= 4096;
}

bool func_31(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return true;
		default:
			return false;
	}
	return false;
}

void func_32(var uParam0)
{
	COLLECTION::_0x3EA62E56F386C997(uParam0, 1);
}

bool func_33(int iParam0)
{
	return !func_31(iParam0);
}

void func_34(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = Param0.f_18;
	iVar1 = Param0.f_24;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (iVar1 != -1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1027129856))
		{
			if (func_89(iVar0, Global_35, 0, 1, func_23(PLAYER::GET_PLAYER_INDEX())))
			{
				if (func_90() && PED::IS_PED_ON_FOOT(Global_35))
				{
					if (iVar0 == 26 || iVar0 == 11)
					{
						bVar2 = true;
					}
					else if (iVar0 == 29)
					{
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
						if (iVar3 == 3)
						{
							bVar2 = true;
						}
					}
				}
				func_91(iVar0, 1, 1);
				func_92(func_68(iVar0), !bVar2);
				func_93(func_68(iVar0), 1, 0, 0, 0);
				func_94(iVar0, 1);
			}
		}
		func_95(uParam39, uParam40, bVar2, uParam41);
	}
}

void func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (func_75(uParam0->f_24, iVar1) && uParam0->f_13[iVar1] != iVar0)
		{
			TASK::_0x5758B1EE0C3FD4AC(uParam0->f_13[iVar1], 0);
			uParam0->f_13[iVar1] = 0;
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_96(&(uParam0->f_28[iVar2])))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_28[iVar2]), 1);
			uParam0->f_28[iVar2] = -1;
		}
		if (func_96(&(uParam0->f_33[iVar2])))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(uParam0->f_33[iVar2]), 1);
			uParam0->f_33[iVar2] = -1;
		}
		iVar2++;
	}
	iLocal_15 = 0;
}

int func_36(var uParam0)
{
	return uParam0->f_9;
}

bool func_37(int iParam0)
{
	return iParam0 != 3;
}

int func_38(var uParam0)
{
	return uParam0->f_8;
}

void func_39(var uParam0, int iParam1)
{
	if (!func_37(iParam1))
	{
		return;
	}
	if (func_38(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

void func_40(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_97(Global_1935630, 2097152))
	{
		bVar0 = true;
	}
	if (func_38(uParam0) == 2)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_22)
	{
		if (func_58(uParam0->f_13[iVar1]))
		{
			MISC::_0x082C043C7AFC3747(uParam0->f_13[iVar1], 1);
			MISC::_0x40D72189F46D2E15(uParam0->f_13[iVar1], 1);
		}
		iVar1++;
	}
}

bool func_41(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_43(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/] > 0;
	}
	return Global_27573[iParam0 /*9*/] > 0;
}

int func_45(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/];
	}
	else
	{
		return Global_27573[iParam0 /*9*/];
	}
	return 0;
}

Vector3 func_46(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1f, -1f, -1f;
	}
	if (func_3() != -1)
	{
		return func_98(Global_38105[iParam0 /*9*/].f_1);
	}
	return func_98(Global_27573[iParam0 /*9*/].f_1);
}

float func_47(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_48(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	struct<5> Var0;

	Var0.f_2 = -15;
	Var0.f_4 = 4;
	MISC::_COPY_MEMORY(uParam0, &Var0, 9);
	*uParam0 = iParam1;
	uParam0->f_1 = func_99(vParam2);
	uParam0->f_2 = iParam5;
}

void func_49(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
			(*uParam2)[0] = 1;
			(*uParam2)[1] = 2;
			(*uParam2)[2] = 3;
			break;
		case 1:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		case 2:
			(*uParam2)[0] = 3;
			(*uParam2)[1] = 4;
			(*uParam2)[2] = 5;
			break;
		case 3:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
		default:
			(*uParam2)[0] = 2;
			(*uParam2)[1] = 3;
			(*uParam2)[2] = 4;
			break;
	}
	(*uParam1)[0] = 0;
	(*uParam1)[1] = 67;
	(*uParam1)[2] = 139;
	(*uParam1)[3] = 223;
	(*uParam1)[4] = 293;
	(*uParam1)[5] = 359;
	iVar0 = 5;
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
		uVar2 = (*uParam1)[iVar1];
		(*uParam1)[iVar1] = (*uParam1)[iVar0];
		(*uParam1)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > 500)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = iParam2;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] = iParam2;
}

bool func_51(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_52()
{
	return (Global_1894899 & 1 != 0 && func_100() != -1);
}

bool func_53(bool bParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	return false;
}

bool func_54()
{
	return func_101(Global_1572887.f_6, 1);
}

bool func_55(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam1 != -1)
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			if (Global_1146442.f_1[iVar1 /*11*/].f_1 == iParam1 && func_102(iVar1, 128, iVar0))
			{
				if (bParam2)
				{
					if (Global_1146749.f_20[iVar1 /*16*/] >= 2)
					{
						return true;
					}
				}
				else if (Global_1146749.f_20[iVar1 /*16*/] >= 6)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_56(int iParam0)
{
	return Global_1146442.f_1[iParam0 /*11*/].f_3;
}

bool func_57(int iParam0)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return func_104(iParam0, 4, 1);
}

bool func_58(int iParam0)
{
	return iParam0 != -1;
}

bool func_59(var uParam0)
{
	return func_105(*uParam0, 1);
}

void func_60(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_59(uParam0))
	{
		func_106(uParam0, fParam1);
	}
}

float func_61(var uParam0)
{
	if (!func_59(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_107(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_108() - uParam0->f_1);
}

void func_62(var uParam0)
{
	func_106(uParam0, 0f);
}

bool func_63(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_64(var uParam0, int iParam1)
{
	if (!func_37(iParam1))
	{
		return;
	}
	if (func_36(uParam0) == iParam1)
	{
		return;
	}
	uParam0->f_9 = iParam1;
}

bool func_65(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return func_109(43);
		case 22:
		case 24:
			return func_110() >= 1;
		case 1:
		case 9:
		case 17:
			return func_110() >= 2;
		case 25:
		case 32:
		case 36:
			return func_110() >= 3;
		case 10:
		case 14:
		case 30:
		case 35:
			return func_110() >= 4;
		default:
			break;
	}
	return false;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1112589856;
		case 9:
			return 270657460;
		case 10:
			return 1485944635;
		case 14:
			return 767056202;
		case 17:
			return -1064869901;
		case 21:
			return -16133028;
		case 22:
			return -1268393363;
		case 24:
			return 5452285;
		case 25:
			return -491162917;
		case 30:
			return 1819699601;
		case 32:
			return 1077382670;
		case 35:
			return 1298182602;
		case 36:
			return -345586569;
		default:
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	return COLLECTION::_0x5461C821D00FE15A(1777389635, iParam0);
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return GET_HASH_KEY("CONSUMABLE_HERB_GINSENG");
		case 3:
			return GET_HASH_KEY("CONSUMABLE_HERB_GINSENG");
		case 4:
			return GET_HASH_KEY("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return GET_HASH_KEY("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return GET_HASH_KEY("CONSUMABLE_HERB_CURRANT");
		case 7:
			return GET_HASH_KEY("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return GET_HASH_KEY("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return GET_HASH_KEY("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return GET_HASH_KEY("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return GET_HASH_KEY("CONSUMABLE_HERB_SAGE");
		case 15:
			return GET_HASH_KEY("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return GET_HASH_KEY("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return GET_HASH_KEY("CONSUMABLE_HERB_CURRANT");
		case 19:
			return GET_HASH_KEY("CONSUMABLE_HERB_SAGE");
		case 20:
			return GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 23:
			return GET_HASH_KEY("CONSUMABLE_HERB_MILKWEED");
		case 26:
			return GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 27:
			return GET_HASH_KEY("CONSUMABLE_HERB_OREGANO");
		case 28:
			return GET_HASH_KEY("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 29:
			return GET_HASH_KEY("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 31:
			return GET_HASH_KEY("CONSUMABLE_HERB_RAMS_HEAD");
		case 33:
			return GET_HASH_KEY("CONSUMABLE_HERB_RED_RASPBERRY");
		case 34:
			return GET_HASH_KEY("CONSUMABLE_HERB_SAGE");
		case 37:
			return GET_HASH_KEY("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 38:
			return GET_HASH_KEY("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 39:
			return GET_HASH_KEY("CONSUMABLE_HERB_WILD_CARROTS");
		case 40:
			return GET_HASH_KEY("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 41:
			return GET_HASH_KEY("CONSUMABLE_HERB_WILD_MINT");
		case 42:
			return GET_HASH_KEY("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 43:
			return GET_HASH_KEY("CONSUMABLE_HERB_YARROW");
		case 1:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR");
		case 9:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR");
		case 10:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL");
		case 14:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS");
		case 17:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST");
		case 21:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
		case 22:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER");
		case 24:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN");
		case 25:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED");
		case 30:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS");
		case 32:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL");
		case 35:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS");
		case 36:
			return GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER");
		default:
			break;
	}
	return 0;
}

int func_69(int iParam0)
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

bool func_70(int iParam0)
{
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_2 != -15;
	}
	return Global_27573[iParam0 /*9*/].f_2 != -15;
}

bool func_71(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_45(iParam0);
	if (!func_31(iVar0) || func_3() != -1)
	{
		return false;
	}
	if (!func_65(iVar0) && func_111(COLLECTION::_0x126CBEBBA46693CF(BUILTIN::FLOOR(fParam1), 1777389635, 0)))
	{
		return true;
	}
	return false;
}

var func_72(int iParam0)
{
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_2;
	}
	return Global_27573[iParam0 /*9*/].f_2;
}

void func_73(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_112(*uParam0);
	iVar1 = func_113(*uParam0);
	iVar2 = func_114(*uParam0);
	iVar3 = func_115(*uParam0);
	iVar4 = func_116(*uParam0);
	iVar5 = func_117(*uParam0);
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
	iVar6 = func_118(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_118(iVar1, iVar0);
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
	func_119(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_74(int iParam0, bool bParam1)
{
	return func_120(func_88(), iParam0, bParam1);
}

bool func_75(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;
	}
	return Global_27573[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;
}

void func_76(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = (Global_38105[iParam0 /*9*/].f_4[iParam1] - Global_38105[iParam0 /*9*/].f_4[iParam1] & 4096);
		return;
	}
	Global_27573[iParam0 /*9*/].f_4[iParam1] = (Global_27573[iParam0 /*9*/].f_4[iParam1] - Global_27573[iParam0 /*9*/].f_4[iParam1] & 4096);
}

void func_77(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 = (Global_38105[iParam0 /*9*/].f_3 || iParam1);
		return;
	}
	Global_27573[iParam0 /*9*/].f_3 = (Global_27573[iParam0 /*9*/].f_3 || iParam1);
}

bool func_78(int iParam0, int iParam1)
{
	if (iParam0 <= -1)
	{
		return false;
	}
	if (func_3() != -1)
	{
		return Global_38105[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;
	}
	return Global_27573[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (func_3() != -1)
	{
		func_121(&(Global_38105[iParam0 /*9*/]), iParam1, iParam2, iParam3, uParam4);
		return;
	}
	func_122(&(Global_27573[iParam0 /*9*/]), iParam1, iParam2, iParam3, uParam4);
}

Vector3 func_80(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

float func_81(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_82(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
		default:
			break;
	}
	return false;
}

void func_83(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = -1;
	func_123(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

bool func_84(int iParam0, bool bParam1)
{
	switch (func_124(iParam0))
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

void func_85(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_86(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_125(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_126(iParam0))
	{
		return false;
	}
	if (func_127(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_128(iParam0, 1)) || func_129(32768))
	{
		if (!func_128(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_130())
	{
		return false;
	}
	return true;
}

void func_87(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_88()
{
	return Global_1899515;
}

bool func_89(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	if (func_24(iParam0, vParam4, &iVar0, &iVar1, 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && iParam1 == Global_35)
		{
			iVar2 = func_131(iParam0);
			TELEMETRY::_TELEMETRY_HERB_PICKED(iVar2);
			COMPENDIUM::COMPENDIUM_HERB_PICKED(iVar2, vParam4);
			if (!func_132(iParam0))
			{
				func_133(iParam0, 0, 1);
			}
			if (func_3() == -1)
			{
				if (func_84(Global_1835011[4 /*74*/].f_1, 1))
				{
					iVar3 = func_134(iParam0);
					if (iVar3 != -1)
					{
						func_26(iVar3, 1);
					}
				}
			}
			func_136(func_135(GET_HASH_KEY("PICK"), iVar2), iParam3);
			func_136(func_137(GET_HASH_KEY("HERBS_PICKED_TOTAL")), iParam3);
			if (func_138(iParam0))
			{
				func_136(func_137(GET_HASH_KEY("HERBS_PICKED_MUSHROOMS")), iParam3);
			}
		}
		func_29(iVar0);
		func_30(iVar0, iVar1);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_90()
{
	return func_139(1);
}

void func_91(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_68(iParam0);
	iVar1 = func_140(&iVar0);
	if (iVar1 != iParam0)
	{
		func_141(iVar1, 4);
	}
	if (!func_103(iParam0))
	{
		return;
	}
	if (func_57(iParam0))
	{
		return;
	}
	func_141(iParam0, 4);
	func_142(iParam0, bParam1);
	if (!func_132(iParam0))
	{
		func_133(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_143(0, 0, 1))
		{
			func_144(1, 6);
		}
	}
}

void func_92(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;

	Var0.f_1 = 20;
	if ((func_145(iParam0, 1573112293) || func_145(iParam0, 672467738)) || func_145(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_146(iParam0) == GET_HASH_KEY("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iParam0, &Var0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_147(0, Var22.f_2);
				func_148(Var22.f_2, 1);
				func_149(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_147(2, Var22.f_2);
				func_150(Var22.f_2);
				func_149(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_147(1, Var22.f_2);
				func_151(Var22.f_2);
				func_149(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_152(Var22.f_2, Var22.f_5);
				if (func_153(&uVar38, &uVar39, fVar33))
				{
					func_154(fVar33, 1, bVar37, bParam1);
					func_149(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_152(Var22.f_2, Var22.f_5);
				if (func_153(&uVar38, &uVar39, fVar34))
				{
					func_155(fVar34, 1, bVar37, bParam1);
					func_149(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_152(Var22.f_2, Var22.f_5);
				if (func_153(&uVar38, &uVar39, fVar35))
				{
					func_156(fVar35, 1, bVar37, bParam1);
					func_149(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_157(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_158(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_157(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_158(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_157(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_158(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_157(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_158(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_157(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_158(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_157(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_158(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_159(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				iVar42 = 1;
			}
		}
		if (iVar42 || func_145(iParam0, -537818634))
		{
			func_136(func_160(GET_HASH_KEY("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_145(iParam0, -1457797660))
		{
			func_136(func_160(GET_HASH_KEY("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar40)
		{
			func_136(func_160(GET_HASH_KEY("DEADEYE_ITEMS_USED")), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_93(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
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
	if (!func_161(iParam0, 0))
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
	if (!func_162())
	{
		func_163(iParam0, iParam1, bParam2, iParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_164(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (iParam3 || iParam4)
		{
			StringCopy(&cVar2, func_164(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_165(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_146(iParam0);
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
	else if (!func_166(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_168(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_167(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_145(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_167(iParam0));
	}
	func_169(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_94(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_135(GET_HASH_KEY("EATEN"), func_131(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_136(func_137(GET_HASH_KEY("HERBS_EATEN")), iParam1);
}

int func_95(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*uParam0 < 5)
	{
		if (((func_170() || (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, *uParam1))) || !func_90()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return 1;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_171(uParam3, 0);
			}
			if (func_59(uParam3) && func_61(uParam3) > 2f)
			{
				func_172(uParam0, 1);
				func_173(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_172(uParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_172(uParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_172(uParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_172(uParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_96(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_98(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_99(struct<2> Param0, var uParam2)
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

int func_100()
{
	return Global_1894899.f_2;
}

bool func_101(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_102(int iParam0, int iParam1, int iParam2)
{
	return func_174(Global_1146517[iParam2 /*7*/][iParam0], iParam1);
}

bool func_103(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_104(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_103(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_105(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_106(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_108() - fParam1);
	func_175(uParam0, 1);
	func_176(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_107(var uParam0)
{
	return func_105(*uParam0, 2);
}

float func_108()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_109(int iParam0)
{
	if (func_3() != -1)
	{
		return false;
	}
	return func_84(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_110()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_177(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_111(var uParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

int func_112(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_178(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_113(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_114(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_115(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_116(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_117(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_118(int iParam0, int iParam1)
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

void func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_179(iParam0, iParam6);
	func_180(iParam0, iParam5);
	func_181(iParam0, iParam4);
	func_182(iParam0, iParam3);
	func_183(iParam0, iParam2);
	func_184(iParam0, iParam1);
}

bool func_120(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_185(iParam1) || !func_185(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_121(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

void func_122(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = uParam0->f_4[iParam1] & 511;
	*iParam2 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(uParam0->f_4[iParam1] & 57344, 13);
}

void func_123(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_96(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_96(uParam0))
		{
		}
	}
}

int func_124(int iParam0)
{
	if (!func_186(iParam0))
	{
		return -1;
	}
	return func_187(iParam0);
}

bool func_125(int iParam0, int iParam1)
{
	if (func_3() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_126(int iParam0)
{
	if (func_3() != -1)
	{
		if (func_128(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_128(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_128(iParam0, 65536) && !func_128(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_128(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_128(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_128(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_129(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_130()
{
	return Global_1905944.f_5694;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return GET_HASH_KEY("HERB_ALASKAN_GINSENG");
		case 3:
			return GET_HASH_KEY("HERB_AMERICAN_GINSENG");
		case 4:
			return GET_HASH_KEY("HERB_BAY_BOLETE");
		case 5:
			return GET_HASH_KEY("HERB_BLACK_BERRY");
		case 6:
			return GET_HASH_KEY("HERB_BLACK_CURRANT");
		case 7:
			return GET_HASH_KEY("HERB_BURDOCK_ROOT");
		case 8:
			return GET_HASH_KEY("HERB_CHANTERELLES");
		case 11:
			return GET_HASH_KEY("HERB_COMMON_BULRUSH");
		case 12:
			return GET_HASH_KEY("HERB_CREEPING_THYME");
		case 13:
			return GET_HASH_KEY("HERB_DESERT_SAGE");
		case 15:
			return GET_HASH_KEY("HERB_ENGLISH_MACE");
		case 16:
			return GET_HASH_KEY("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return GET_HASH_KEY("HERB_GOLDEN_CURRANT");
		case 19:
			return GET_HASH_KEY("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return GET_HASH_KEY("HERB_INDIAN_TOBACCO");
		case 23:
			return GET_HASH_KEY("HERB_MILKWEED");
		case 26:
			return GET_HASH_KEY("HERB_OLEANDER_SAGE");
		case 27:
			return GET_HASH_KEY("HERB_OREGANO");
		case 28:
			return GET_HASH_KEY("HERB_PARASOL_MUSHROOM");
		case 29:
			return GET_HASH_KEY("HERB_PRAIRIE_POPPY");
		case 31:
			return GET_HASH_KEY("HERB_RAMS_HEAD");
		case 33:
			return GET_HASH_KEY("HERB_RED_RASPBERRY");
		case 34:
			return GET_HASH_KEY("HERB_RED_SAGE");
		case 37:
			return GET_HASH_KEY("HERB_VANILLA_FLOWER");
		case 38:
			return GET_HASH_KEY("HERB_VIOLET_SNOWDROP");
		case 39:
			return GET_HASH_KEY("HERB_WILD_CARROTS");
		case 40:
			return GET_HASH_KEY("HERB_WILD_FEVERFEW");
		case 41:
			return GET_HASH_KEY("HERB_WILD_MINT");
		case 42:
			return GET_HASH_KEY("HERB_WINTERGREEN_BERRY");
		case 43:
			return GET_HASH_KEY("HERB_YARROW");
		case 1:
			return GET_HASH_KEY("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return GET_HASH_KEY("HERB_CIGAR_ORCHID");
		case 10:
			return GET_HASH_KEY("HERB_CLAMSHELL_ORCHID");
		case 14:
			return GET_HASH_KEY("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return GET_HASH_KEY("HERB_GHOST_ORCHID");
		case 21:
			return GET_HASH_KEY("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return GET_HASH_KEY("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return GET_HASH_KEY("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return GET_HASH_KEY("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return GET_HASH_KEY("HERB_QUEENS_ORCHID");
		case 32:
			return GET_HASH_KEY("HERB_RAT_TAIL_ORCHID");
		case 35:
			return GET_HASH_KEY("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return GET_HASH_KEY("HERB_SPIDER_ORCHID");
	}
	return 0;
}

bool func_132(int iParam0)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return func_104(iParam0, 1, 1);
}

void func_133(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if (func_132(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_31(iParam0);
	}
	if (!bParam1)
	{
		if (func_3() != -1)
		{
		}
		else
		{
			func_188(iParam0);
		}
	}
	func_141(iParam0, 1);
	if (func_3() == -1)
	{
		func_190(iParam0, func_189());
	}
	func_142(iParam0, 1);
	if (bParam2)
	{
		if (!func_143(0, 0, 1))
		{
			func_144(1, 6);
		}
	}
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 100;
		case 13:
		case 19:
		case 34:
			return 101;
		case 20:
			return 102;
		case 43:
			return 103;
		case 39:
			return 104;
		case 11:
			return 105;
		case 26:
			return 106;
		case 5:
		case 33:
		case 42:
			return 107;
	}
	return -1;
}

struct<2> func_135(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_136(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_137(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_138(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
	}
	return false;
}

bool func_139(int iParam0)
{
	return func_191(iParam0);
}

int func_140(int iParam0)
{
	switch (*iParam0)
	{
		case GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case GET_HASH_KEY("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case GET_HASH_KEY("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case GET_HASH_KEY("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case GET_HASH_KEY("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case GET_HASH_KEY("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case GET_HASH_KEY("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case GET_HASH_KEY("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case GET_HASH_KEY("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case GET_HASH_KEY("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case GET_HASH_KEY("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case GET_HASH_KEY("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case GET_HASH_KEY("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case GET_HASH_KEY("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case GET_HASH_KEY("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case GET_HASH_KEY("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case GET_HASH_KEY("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case GET_HASH_KEY("CONSUMABLE_HERB_SAGE"):
			return 34;
		case GET_HASH_KEY("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case GET_HASH_KEY("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case GET_HASH_KEY("CONSUMABLE_HERB_WILD_CARROTS"):
			return 39;
		case GET_HASH_KEY("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 40;
		case GET_HASH_KEY("CONSUMABLE_HERB_WILD_MINT"):
			return 41;
		case GET_HASH_KEY("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 42;
		case GET_HASH_KEY("CONSUMABLE_HERB_YARROW"):
			return 43;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 1;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"):
			return 9;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 10;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"):
			return 14;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"):
			return 17;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 21;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 22;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"):
			return 24;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 25;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"):
			return 30;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 32;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"):
			return 35;
		case GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"):
			return 36;
	}
	return 0;
}

void func_141(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if (func_3() != -1)
	{
		Global_36638[iParam0] = (Global_36638[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

void func_142(int iParam0, bool bParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if (func_192(iParam0))
	{
		return;
	}
	func_141(iParam0, 2);
	if (bParam1)
	{
		if (!func_143(0, 0, 1))
		{
			func_144(1, 6);
		}
	}
}

bool func_143(int iParam0, bool bParam1, bool bParam2)
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
		if (func_193())
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
		iVar0 = func_194(Global_1898164.f_1[0 /*5*/]);
		if (func_195(iVar0) && func_196(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_186(Global_1898164.f_1[0 /*5*/]))
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

void func_144(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_197(&Global_0, 8);
	}
	if (!func_198() || func_3() != -1)
	{
		return;
	}
	func_197(&Global_0, 1);
}

bool func_145(int iParam0, int iParam1)
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

int func_146(int iParam0)
{
	vector3 vVar0;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_147(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_148(int iParam0, bool bParam1)
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

void func_149(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_150(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_151(int iParam0)
{
	int iVar0;

	if (func_3() != -1)
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

float func_152(int iParam0, float fParam1)
{
	return func_199(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

bool func_153(var uParam0, var uParam1, float fParam2)
{
	if (func_3() != -1)
	{
		return true;
	}
	if (!func_200(0))
	{
		return true;
	}
	if (fParam2 <= 0f)
	{
		return true;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477.f_191.f_3)
	{
		func_201(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}
	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_191.f_1 = 0;
	}
	Global_1347477.f_191.f_1++;
	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_26(0, 1);
			Global_1347477.f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_201(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}
	Global_1347477.f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return true;
}

void func_154(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_202(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_203(0);
	if (bParam1)
	{
		func_204(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_205();
	}
	if (bParam2)
	{
		fParam0 = func_206(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_208(0, func_207(fParam0, -100f, 100f), bParam1);
}

void func_155(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_202(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_203(2);
	if (bParam1)
	{
		func_204(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_206(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_208(2, func_207(fParam0, -100f, 100f), bParam1);
}

void func_156(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_3() == 0)
	{
		func_202(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_203(1);
	if (bParam1)
	{
		func_204(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_206(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_208(1, func_207(fParam0, -100f, 100f), bParam1);
}

float func_157(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_158(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_209(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_210(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_211(-1);
			func_212(0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_210(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_213(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_210(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_214(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_215(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_215(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_215(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar0, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_159(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_216(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_4(17))
	{
		return;
	}
	if (func_217())
	{
		iVar1 = func_218(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_218(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477.f_195 = func_88();
			func_73(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_219(&fVar3, &fVar4);
		func_220(13, func_207(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_26(94, 0);
		}
	}
}

struct<2> func_160(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_161(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_162()
{
	return !Global_1911774;
}

void func_163(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_164(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_161(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_166(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_167(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_168(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_169(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_221(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_170()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1 || !func_59(uParam0))
	{
		func_62(uParam0);
	}
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_173(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_174(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_175(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_177(var uParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_179(int iParam0, int iParam1)
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

void func_180(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_113(*iParam0);
	iVar1 = func_112(*iParam0);
	if (iParam1 < 1 || iParam1 > func_118(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_182(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_183(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_184(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_185(int iParam0)
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
	iVar0 = func_117(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_116(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_115(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_112(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_113(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_114(iParam0);
	if (iVar5 < 1 || iVar5 > func_118(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_186(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_187(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_222(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

void func_188(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_26(210, 0);
			break;
		case 16:
			func_26(211, 0);
			break;
		case 33:
			func_26(212, 0);
			break;
		case 42:
			func_26(213, 0);
			break;
		case 2:
			func_26(214, 0);
			break;
		case 3:
			func_26(215, 0);
			break;
		case 43:
			func_26(216, 0);
			break;
		case 15:
			func_26(217, 0);
			break;
		case 23:
			func_26(218, 0);
			break;
		case 37:
			func_26(219, 0);
			break;
		case 26:
			func_26(220, 0);
			break;
		case 13:
			func_26(221, 0);
			break;
		case 19:
			func_26(222, 0);
			break;
		case 34:
			func_26(223, 0);
			break;
		case 38:
			func_26(224, 0);
			break;
		case 40:
			func_26(225, 0);
			break;
		case 7:
			func_26(226, 0);
			break;
		case 20:
			func_26(227, 0);
			break;
		case 18:
			func_26(228, 0);
			break;
		case 6:
			func_26(229, 0);
			break;
		case 29:
			func_26(230, 0);
			break;
		case 39:
			func_26(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_26(233, 0);
			break;
		case 8:
			func_26(234, 0);
			break;
		case 28:
			func_26(235, 0);
			break;
		case 31:
			func_26(236, 0);
			break;
		case 12:
			func_26(237, 0);
			break;
		case 27:
			func_26(238, 0);
			break;
		case 41:
			func_26(239, 0);
			break;
	}
}

int func_189()
{
	if (func_3() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return 1;
	}
	return 0;
}

void func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_ACUNAS_STAR_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_ACUNAS_STAR_ORCHID_JN"), 0);
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_ALASKAN_GINSENG_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_ALASKAN_GINSENG_JN"), 0);
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_AMERICAN_GINSENG_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_AMERICAN_GINSENG_JN"), 0);
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BAY_BOLETE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BAY_BOLETE_JN"), 0);
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BLACKBERRY_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BLACKBERRY_JN"), 0);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BLACK_CURRANT_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BLACK_CURRANT_JN"), 0);
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BULRUSH_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BULRUSH_JN"), 0);
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BURDOCK_ROOT_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_BURDOCK_ROOT_JN"), 0);
			}
			break;
		case 39:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CARROT_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CARROT_JN"), 0);
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CHANTERELLE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CHANTERELLE_JN"), 0);
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CIGAR_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CIGAR_ORCHID_JN"), 0);
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CLAMSHELL_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CLAMSHELL_ORCHID_JN"), 0);
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CREEPING_THYME_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_CREEPING_THYME_JN"), 0);
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_DESERT_SAGE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_DESERT_SAGE_JN"), 0);
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_DRAGONS_MOUTH_ORCHID_JN"), 0);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_ENGLISH_MACE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_ENGLISH_MACE_JN"), 0);
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_FEVERFEW_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_FEVERFEW_JN"), 0);
			}
			break;
		case 17:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_GHOST_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_GHOST_ORCHID_JN"), 0);
			}
			break;
		case 18:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_GOLDEN_CURRANT_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_GOLDEN_CURRANT_JN"), 0);
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_HUCKLEBERRY_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_HUCKLEBERRY_JN"), 0);
			}
			break;
		case 19:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_HUMMINGBIRD_SAGE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_HUMMINGBIRD_SAGE_JN"), 0);
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_INDIAN_TOBACCO_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_INDIAN_TOBACCO_JN"), 0);
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_LADY_OF_THE_NIGHT_ORCHID_JN"), 0);
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_LADY_SLIPPER_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_LADY_SLIPPER_ORCHID_JN"), 0);
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_MILKWEED_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_MILKWEED_JN"), 0);
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_MINT_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_MINT_JN"), 0);
			}
			break;
		case 24:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_MOCCASIN_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_MOCCASIN_ORCHID_JN"), 0);
			}
			break;
		case 25:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_NIGHT_SCENTED_ORCHID_JN"), 0);
			}
			break;
		case 26:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_OLEANDER_SAGE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_OLEANDER_SAGE_JN"), 0);
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_OREGANO_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_OREGANO_JN"), 0);
			}
			break;
		case 28:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_PARASOL_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_PARASOL_JN"), 0);
			}
			break;
		case 29:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_PRAIRIE_POPPY_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_PRAIRIE_POPPY_JN"), 0);
			}
			break;
		case 30:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_QUEENS_ORCHIDS_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_QUEENS_ORCHIDS_JN"), 0);
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RAMSHEAD_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RAMSHEAD_ORCHID_JN"), 0);
			}
			break;
		case 33:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RASPBERRY_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RASPBERRY_JN"), 0);
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RAT_TAIL_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RAT_TAIL_ORCHID_JN"), 0);
			}
			break;
		case 34:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RED_SAGE_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_RED_SAGE_JN"), 0);
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_SPARROWS_EGG_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_SPARROWS_EGG_ORCHID_JN"), 0);
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_SPIDER_ORCHID_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_SPIDER_ORCHID_JN"), 0);
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_VANILLA_FLOWER_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_VANILLA_FLOWER_JN"), 0);
			}
			break;
		case 38:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_VIOLET_SNOWDROP_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_VIOLET_SNOWDROP_JN"), 0);
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_WINTERBERRY_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_WINTERBERRY_JN"), 0);
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_YARROW_AR"), 0);
			}
			else
			{
				func_223(GET_HASH_KEY("JOURNAL_HERB_YARROW_JN"), 0);
			}
			break;
		default:
			break;
	}
}

bool func_191(int iParam0)
{
	return func_174(Global_1935496.f_27, iParam0);
}

bool func_192(int iParam0)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return func_104(iParam0, 2, 1);
}

bool func_193()
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

int func_194(int iParam0)
{
	if (!func_186(iParam0))
	{
		return -1;
	}
	return func_225(func_224(iParam0));
}

bool func_195(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_197(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_198()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

float func_199(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

bool func_200(int iParam0)
{
	if (func_226())
	{
		return false;
	}
	return func_84(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_201(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_227(iParam0, &Var0);
}

void func_202(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_206(iParam0, fParam1, 1);
	}
	func_229(iParam0, (func_228(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_203(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_204(float fParam0)
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

void func_205()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_206(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_88();
	func_230(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_231(iParam0, 2);
	if (func_120(iVar0, func_232(iParam0, 2), 1))
	{
		func_233(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_26(88, bParam2);
		return 0f;
	}
	func_234(iParam0, func_88(), 2);
	func_233(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_207(float fParam0, float fParam1, float fParam2)
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

void func_208(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_3() != -1)
	{
		return;
	}
	if (!func_4(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_235(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_236(iParam0), iVar0);
	func_238(func_237(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_239(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_26(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_26(func_240(iParam0), 1);
	}
	sVar1 = func_241(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

bool func_209(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_242(2);
	func_243(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_212(bool bParam0)
{
	if (func_3() != -1)
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
		func_26(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_26(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_244(1, bParam0, 1);
	func_245();
	Global_40.f_11095.f_43 = bParam0;
}

void func_213(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_246(2);
	func_247(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_214(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_248(2);
	func_249(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_215(int iParam0, bool bParam1, bool bParam2)
{
	func_229(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_216(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

bool func_217()
{
	if (func_3() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return func_74(Global_1347477.f_195, 0);
}

int func_218(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_219(var uParam0, var uParam1)
{
	if (!func_198())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_220(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_164(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_250(1, bVar1, 1, sVar2);
		func_251(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_235(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_245();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_235(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_235(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_221(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

int func_222(int iParam0)
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

void func_223(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_252(iParam0, 0);
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
		func_253(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_224(int iParam0)
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

int func_225(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_226()
{
	if (func_3() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_227(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_228(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_254();
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

int func_229(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_254();
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
		func_255(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_256(iVar0, iParam0, fParam1);
	func_257(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_236(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_230(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_112(*iParam0);
	iVar1 = func_113(*iParam0);
	iVar2 = func_114(*iParam0);
	iVar3 = func_115(*iParam0);
	iVar4 = func_116(*iParam0);
	iVar5 = func_117(*iParam0);
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
		iVar7 = func_118(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_119(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_231(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_254();
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

int func_232(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_254();
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

void func_233(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_254();
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

void func_234(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_254();
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

int func_235(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_236(int iParam0)
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

int func_237(int iParam0)
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

void func_238(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_258(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_239(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_240(int iParam0)
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

char* func_241(int iParam0)
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

int func_242(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_254();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850;
		case 1:
			return Global_1955569.f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_243(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_244(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
}

void func_245()
{
	func_259();
	func_260();
	func_261();
}

int func_246(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_254();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850.f_2;
		case 1:
			return Global_1955569.f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_247(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iVar0, fParam0);
}

int func_248(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_254();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569.f_850.f_1;
		case 1:
			return Global_1955569.f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_249(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

void func_250(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_251(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_258(0, 1, bParam0, bParam1);
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

void func_252(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_262(1);
	}
}

void func_253(int iParam0)
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
			func_252(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_262(1);
	}
}

int func_254()
{
	if (func_263())
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_254();
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

void func_256(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_241(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_264(iParam1), fParam2, -1);
	}
}

void func_257(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_254();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_265(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_266(iParam0, iVar0, iParam3);
	}
}

char* func_258(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_164(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_164(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_259()
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

	if (func_267())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_203(2);
	}
	if (Global_1347477.f_119)
	{
		return func_203(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_268();
	fVar2 = func_269();
	fVar3 = func_270();
	fVar4 = func_271();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_272()));
	fVar7 = (func_203(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_273(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_274(3, fVar9, fVar9 > 100f);
	return func_207(fVar7, -100f, 100f);
}

float func_260()
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

	if (func_267())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_203(1);
	}
	if (Global_1347477.f_119)
	{
		return func_203(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_268();
	fVar2 = func_269();
	fVar3 = func_270();
	fVar4 = func_271();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_272()));
	fVar7 = (func_203(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_273(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_274(2, fVar9, fVar9 > 100f);
	return func_207(fVar7, -100f, 100f);
}

float func_261()
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

	if (func_267())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_203(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_275())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_276())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_203(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_268();
	fVar2 = func_269();
	fVar3 = func_270();
	fVar4 = func_271();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_272()));
	fVar7 = (func_203(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_273(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_274(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_203(0);
	}
	return func_207(fVar7, -100f, 100f);
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		func_277(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_278(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_263()
{
	return Global_1955569.f_866;
}

char* func_264(int iParam0)
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

void func_265(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_254();
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

void func_266(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_254();
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

bool func_267()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_268()
{
	float fVar0;
	int iVar1;

	fVar0 = func_216(13);
	iVar1 = func_218(fVar0);
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

float func_269()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_270()
{
	if (func_279())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_271()
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

float func_272()
{
	return Global_1955565.f_3;
}

void func_273(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_258(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_274(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_258(iParam0, 2, 0, 0);
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

bool func_275()
{
	return func_216(12) <= -99f;
}

bool func_276()
{
	return func_216(12) >= 99f;
}

void func_277(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_278(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_279()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

