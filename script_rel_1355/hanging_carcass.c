#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<44> Var0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1) || func_1() != -1)
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_40 = GET_HASH_KEY("P_CARCASSHANGLRG02X");
	Var0.f_41 = GET_HASH_KEY("P_CARCASSHANGMED01B");
	Var0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var0.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	Var0.f_43 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(ScriptParam_0.f_1));
	Var0.f_39 = ENTITY::GET_ENTITY_MODEL(Var0.f_43);
	StringCopy(&(Var0.f_22), "Dead_Hanging", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0, 0);
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3(&Var0) || func_4(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_5(&(ScriptParam_0.f_1)) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, 0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(var uParam0, bool bParam1)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_49);
	}
	if (bParam1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_44))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_44));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_45))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_45));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_46));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_47))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_47));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_48))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_48));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_42))
	{
		if (func_7(uParam0, 256))
		{
			if (!func_7(uParam0, 32))
			{
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 10000, 20000, 0, false, true, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_42));
		}
		PED::_0x7D4E70A67A651C71(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_43))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_43));
	}
}

int func_3(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(uParam0->f_1, Global_1425196[iVar0 /*3*/], 0.1f, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_4(var uParam0)
{
	int iVar0;
	vector3 vVar1[5];

	vVar1[0 /*3*/] = { -2844.586f, 133.7118f, 183.6223f };
	vVar1[1 /*3*/] = { -1008.624f, -544.7607f, 98.21857f };
	vVar1[2 /*3*/] = { 2074.396f, 996.5762f, 111.6177f };
	vVar1[3 /*3*/] = { 2832.072f, -1226.912f, 46.65f };
	vVar1[4 /*3*/] = { -2255.234f, -1914.754f, 116.158f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_8(vVar1[iVar0 /*3*/], uParam0->f_1, 5f, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_5(var uParam0)
{
	if ((SCRIPTS::IS_THREAD_EXIT_REQUESTED() || !TASK::DOES_SCENARIO_POINT_EXIST(*uParam0)) || func_9())
	{
		return true;
	}
	return false;
}

bool func_6(var uParam0)
{
	switch (uParam0->f_57)
	{
		case 0:
			if (func_10(uParam0))
			{
				func_11(uParam0, 1);
			}
			break;
		case 1:
			if (func_12(uParam0))
			{
				func_11(uParam0, 2);
			}
			break;
		case 2:
			if (func_13(uParam0))
			{
				func_11(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(uParam0))
			{
				if (func_15(3, uParam0))
				{
					func_11(uParam0, 5);
				}
				else
				{
					func_11(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_16(uParam0))
			{
				func_11(uParam0, 5);
			}
			break;
		case 5:
			if (func_17(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 6);
			}
			break;
		case 6:
			if (func_19(uParam0))
			{
				func_11(uParam0, 7);
			}
			break;
		case 7:
			if (func_20(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 8);
			}
			break;
		case 8:
			if (func_21(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 9);
			}
			break;
		case 9:
			break;
	}
	return false;
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0->f_56 && iParam1) != 0;
}

bool func_8(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_9()
{
	return Global_1898164.f_163;
}

bool func_10(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	vVar0 = { 799.362f, 1512.22f, 203.6078f };
	vVar3 = { 2558f, 795f, 75f };
	vVar6 = { -754f, -1284.5f, 42.75f };
	if (func_8(uParam0->f_1, vVar3, 60f, 1))
	{
		func_22(uParam0, 128);
		func_22(uParam0, 64);
	}
	if (func_8(uParam0->f_1, vVar6, 10f, 1))
	{
		func_22(uParam0, 64);
	}
	switch (uParam0->f_39)
	{
		case GET_HASH_KEY("P_CARCASSHANGLRG01X"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (func_23(uParam0->f_1))
			{
				case 0:
				case 2:
				case 4:
				case 9:
				case 11:
					iVar9 = 0;
					break;
			}
			if (func_8(uParam0->f_1, vVar0, 10f, 1))
			{
				iVar9 = 1;
			}
			if (func_7(uParam0, 128))
			{
				iVar9 = 0;
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@DEER@NORMAL@DEAD", 64);
					uParam0->f_38 = GET_HASH_KEY("A_C_DEER_01");
					StringCopy(&(uParam0->f_30), "PD_Deer_aged_carcass_Hvy", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@WOLF_MEDIUM@NORMAL@DEAD", 64);
					uParam0->f_38 = GET_HASH_KEY("A_C_WOLF_MEDIUM");
					break;
			}
			uParam0->f_50 = 45454;
			uParam0->f_51 = 33646;
			uParam0->f_55 = 0;
			break;
		case GET_HASH_KEY("P_CARCASSHANGMED01A"):
		case GET_HASH_KEY("P_CARCASSHANGMED01X"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (uParam0->f_39 == GET_HASH_KEY("P_CARCASSHANGMED01X"))
			{
				if (func_7(uParam0, 128))
				{
					iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
				else
				{
					iVar9 = 1;
				}
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@FOX@NORMAL@DEAD", 64);
					uParam0->f_38 = GET_HASH_KEY("A_C_FOX_01");
					StringCopy(&(uParam0->f_30), "PD_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@RABBIT@NORMAL@DEAD", 64);
					uParam0->f_38 = GET_HASH_KEY("A_C_RABBIT_01");
					StringCopy(&(uParam0->f_30), "PD_Ex_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 2:
					StringCopy(&(uParam0->f_14), "CREATURES_BIRD@DUCK@NORMAL@DEAD", 64);
					uParam0->f_38 = GET_HASH_KEY("A_C_DUCK_01");
					uParam0->f_55 = 1;
					uParam0->f_50 = 14285;
					break;
			}
			break;
		case GET_HASH_KEY("P_CARCASSHANGFISH01A"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar9)
			{
				case 0:
					uParam0->f_38 = GET_HASH_KEY("A_C_FISHRAINBOWTROUT_01_MS");
					break;
				case 1:
					uParam0->f_38 = GET_HASH_KEY("A_C_FISHSALMONSOCKEYE_01_MS");
					break;
			}
			uParam0->f_55 = 3;
			break;
		case GET_HASH_KEY("P_CARCASSHANGSML01X"):
			break;
	}
	return true;
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_57 = iParam1;
}

bool func_12(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_39, false);
	STREAMING::REQUEST_MODEL(uParam0->f_38, false);
	PED::_0xF008E0BA1FE1D644(1);
	if (func_15(0, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_40, false);
	}
	if (func_15(1, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_41, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_14));
	}
	return true;
}

bool func_13(var uParam0)
{
	if ((!STREAMING::HAS_MODEL_LOADED(uParam0->f_39) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_38)) || !PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (func_15(0, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_40))
		{
			return false;
		}
	}
	if (func_15(1, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_41))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_14)))
		{
			return false;
		}
	}
	return true;
}

bool func_14(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = -90f;
	vVar1 = { uParam0->f_1 };
	OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_43);
	if (func_15(3, uParam0))
	{
		vVar1 = { func_24(uParam0) };
	}
	if (func_15(1, uParam0))
	{
		uParam0->f_45 = OBJECT::CREATE_OBJECT(uParam0->f_41, vVar1, false, true, false, false, false);
		OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_45);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_45, false, false);
	}
	uParam0->f_42 = func_25(uParam0->f_38, vVar1, (uParam0->f_4 + fVar0), 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_42, true);
	PED::_SET_PED_SCALE(uParam0->f_42, 1f);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 186, false);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 243, true);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_42, uParam0->f_42, false);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, false, false);
	OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_43);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_43, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
	if (func_15(3, uParam0))
	{
		func_26(uParam0->f_42, 1, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	if (func_7(uParam0, 128))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_30)))
		{
			PED::APPLY_PED_DAMAGE_PACK(uParam0->f_42, &(uParam0->f_30), 0f, 1f);
		}
	}
	func_27(uParam0, 0);
	return true;
}

bool func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_39 == GET_HASH_KEY("P_CARCASSHANGLRG01X");
		case 1:
			return (uParam1->f_39 == GET_HASH_KEY("P_CARCASSHANGMED01X") || uParam1->f_39 == GET_HASH_KEY("P_CARCASSHANGMED01A"));
		case 2:
			return uParam1->f_39 == GET_HASH_KEY("P_CARCASSHANGSML01X");
		case 3:
			return uParam1->f_39 == GET_HASH_KEY("P_CARCASSHANGFISH01A");
		default:
			break;
	}
	return false;
}

bool func_16(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		TASK::TASK_PLAY_ANIM(uParam0->f_42, &(uParam0->f_14), &(uParam0->f_22), 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	else
	{
		func_26(uParam0->f_42, 1, 1);
	}
	if (func_15(1, uParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, true);
	}
	return true;
}

bool func_17(var uParam0)
{
	if (!func_28(&(uParam0->f_52)))
	{
		func_29(&(uParam0->f_52));
		uParam0->f_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f);
	}
	if (func_30(&(uParam0->f_52), uParam0->f_5))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_42))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, true, false);
			switch (uParam0->f_55)
			{
				case 0:
					func_31(uParam0);
					break;
				case 1:
				case 2:
				case 3:
					func_32(uParam0);
					break;
			}
			if (func_15(1, uParam0) || func_15(3, uParam0))
			{
				if (func_15(1, uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, false);
				}
				func_33(uParam0);
			}
			return true;
		}
	}
	return false;
}

void func_18(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_19(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_7(uParam0, 64))
	{
		bVar0 = true;
	}
	else if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
	{
		if ((ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42) || PED::_0x7020839C7302D8AC(uParam0->f_42)) || (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46) && !PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
		{
			func_34(uParam0);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
	}
	return bVar0;
}

bool func_20(var uParam0)
{
	if (func_15(0, uParam0))
	{
		if (!func_7(uParam0, 256))
		{
			if (PED::_0xBA208A8D6399A3AC(uParam0->f_42, 10) || PED::_0xBA208A8D6399A3AC(uParam0->f_42, 13))
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
				func_35(uParam0);
				func_2(uParam0, 1);
				func_22(uParam0, 256);
				return true;
			}
		}
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49) && PED::IS_PED_USING_THIS_SCENARIO(Global_35, uParam0->f_49))
	{
		if (!func_7(uParam0, 8))
		{
			TASK::TASK_LOOK_AT_COORD(Global_35, func_24(uParam0), -1, 0, 21, 0);
			func_22(uParam0, 8);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1900650591))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_42, 5000, 0, 21, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1244474073))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
			uParam0->f_44 = OBJECT::CREATE_OBJECT(GET_HASH_KEY("P_CARCASSHANGLRG02X"), uParam0->f_1, false, true, false, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_44, Global_35, 4, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			func_22(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2118990041))
		{
			if (func_15(1, uParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.1f, 0.2f, 0.1f, -1);
			}
			else if (func_15(3, uParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.001f, 0.199f, 0.001f, -1);
			}
			else
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
			}
			func_22(uParam0, 4);
			return false;
		}
		if (func_7(uParam0, 4) && !func_7(uParam0, 32))
		{
			PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
			func_27(uParam0, 1);
			func_22(uParam0, 32);
			func_35(uParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 519570738))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_44, true, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, true, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
			func_22(uParam0, 4);
		}
	}
	else if (func_7(uParam0, 8) && !func_7(uParam0, 16))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		func_2(uParam0, 1);
		func_22(uParam0, 16);
		func_22(uParam0, 256);
		return true;
	}
	else if ((!PED::_0x7020839C7302D8AC(uParam0->f_42) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42)) && ((func_15(1, uParam0) || func_15(3, uParam0)) && PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
	{
		if (func_7(uParam0, 128))
		{
			MISC::SET_PED_DECOMPOSED(uParam0->f_42, true);
			func_27(uParam0, 1);
		}
		if (!func_7(uParam0, 64))
		{
			func_27(uParam0, 1);
		}
		func_22(uParam0, 256);
		func_35(uParam0);
		func_2(uParam0, 1);
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_28(&(uParam0->f_52)))
	{
		if (PED::_0x758F081DB204DDDE(Global_35))
		{
			iVar0 = PED::GET_LOOTING_PICKUP_TARGET_ENTITY(Global_35);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == uParam0->f_42)
			{
				func_29(&(uParam0->f_52));
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1) == 1376140891)
			{
				SCRIPTS::GET_EVENT_DATA(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_35 && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar2.y) == uParam0->f_42)
				{
					if (vVar2.z)
					{
						func_36(2, GET_HASH_KEY("HONOR_EVENT_THEFT"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
						return true;
					}
					else
					{
						return true;
					}
				}
				else if (vVar2.x == 0 || vVar2.y == 0)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_42) == 5)
	{
		func_36(2, GET_HASH_KEY("HONOR_EVENT_THEFT"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		return true;
	}
	return false;
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_56 = (uParam0->f_56 || iParam1);
}

int func_23(vector3 vParam0)
{
	return func_37(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Vector3 func_24(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	switch (uParam0->f_39)
	{
		case GET_HASH_KEY("P_CARCASSHANGLRG01X"):
			iVar3 = 4;
			break;
		case GET_HASH_KEY("P_CARCASSHANGMED01A"):
		case GET_HASH_KEY("P_CARCASSHANGMED01X"):
		case GET_HASH_KEY("P_CARCASSHANGFISH01A"):
			iVar3 = 4;
			break;
	}
	vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	return vVar0;
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_38(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_26(int iParam0, bool bParam1, bool bParam2)
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

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	PED::SET_LOOTING_FLAG(uParam0->f_42, 0, bParam1);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_42, 7, bParam1);
}

bool func_28(var uParam0)
{
	return func_39(*uParam0, 1);
}

void func_29(var uParam0)
{
	func_40(uParam0, 0f);
}

bool func_30(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_41(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_51);
	iVar2 = func_42(uParam0->f_39, 0);
	iVar3 = func_42(uParam0->f_39, 1);
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar2) };
	vVar7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar0, iVar2, vVar4, -1f, 1, 0, 0);
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar1, iVar3, vVar7, -1f, 1, 0, 0);
}

void func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = func_42(uParam0->f_39, 2);
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 90f, 0f };
	switch (uParam0->f_38)
	{
		case GET_HASH_KEY("A_C_FOX_01"):
			vVar5 = { -0.0125f, -0.03f, 0.0125f };
			vVar8 = { 90f, 0f, 90f };
			break;
		case GET_HASH_KEY("A_C_RABBIT_01"):
			vVar2 = { -0.0125f, 0f, -0.025f };
			vVar8 = { 0f, 90f, 0f };
			break;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_45, uParam0->f_42, iVar1, iVar0, vVar5, vVar2, vVar8, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
}

void func_33(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_15(3, uParam0))
	{
		iVar0 = 8;
		fVar1 = 0.2f;
	}
	else
	{
		iVar0 = 1;
		fVar1 = 0.3f;
	}
	uParam0->f_46 = PHYSICS::_ADD_ROPE_2(uParam0->f_1, 0f, 0f, 0f, fVar1, iVar0, false, 1, -1f);
	if (func_15(3, uParam0))
	{
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_42, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 32157);
	}
	else
	{
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_45, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 33568);
	}
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_46, 0, 0, fVar1, 1);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_46, "ROPE_SETTINGS_DEFAULT");
	PHYSICS::_0x7A54D82227A139DB(&(uParam0->f_46), 1);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_46, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_46, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_46, 1);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_46, 1);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_46, 1, 1);
	AUDIO::_0x2651DDC0EA269073(uParam0->f_46, 1f);
}

void func_34(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	switch (uParam0->f_39)
	{
		case GET_HASH_KEY("P_CARCASSHANGLRG01X"):
			iVar0 = GET_HASH_KEY("WORLD_PLAYER_CARCASS_PEG_2M15");
			vVar1 = { 0.155f, -0.9f, 0f };
			break;
		case GET_HASH_KEY("P_CARCASSHANGMED01A"):
		case GET_HASH_KEY("P_CARCASSHANGFISH01A"):
			iVar0 = GET_HASH_KEY("WORLD_PLAYER_CARCASS_CUT_1M80");
			vVar1 = { -0.1f, -0.61f, 0f };
			break;
	}
	if (iVar0 != 0)
	{
		uParam0->f_49 = TASK::CREATE_SCENARIO_POINT_HASH(iVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, vVar1), uParam0->f_4, 0, 0, 0);
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (Global_1425196.f_31 > 9 || Global_1425196.f_31 < 0)
	{
		Global_1425196.f_31 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(Global_1425196[iVar0 /*3*/], uParam0->f_1, 0.1f, 0))
		{
			return;
		}
		iVar0++;
	}
	Global_1425196[Global_1425196.f_31 /*3*/] = { uParam0->f_1 };
	Global_1425196.f_31++;
}

void func_36(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36616 && func_43(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_44(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") && iParam1 != GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_VERMIN")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_KILL_HORSE")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != GET_HASH_KEY("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_45(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_46(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_45(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_37(int iParam0)
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

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_47(iParam1))
		{
			func_48(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_49(iParam0, 0, 1);
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
			func_50(iParam0, 0);
			bVar0 = true;
		}
		func_51(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_40(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_52() - fParam1);
	func_53(uParam0, 1);
	func_54(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_41(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_55(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_52() - uParam0->f_1);
}

int func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("P_CARCASSHANGLRG01X"):
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 5;
			}
			break;
		case GET_HASH_KEY("P_CARCASSHANGMED01A"):
		case GET_HASH_KEY("P_CARCASSHANGMED01X"):
		case GET_HASH_KEY("P_CARCASSHANGFISH01A"):
			if (iParam1 == 3)
			{
				return 2;
			}
			if (iParam1 == 2)
			{
				return 4;
			}
			if (iParam1 == 0)
			{
				return 5;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
		case GET_HASH_KEY("P_CARCASSHANGSML01X"):
			if (iParam1 == 2)
			{
				return 6;
			}
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
	}
	return 4;
}

int func_43(int iParam0)
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

int func_44(int iParam0)
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

void func_45(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_56();
	if (iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KILL") || iParam3 == GET_HASH_KEY("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_57(iParam0);
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
	if (func_58(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_59())
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
	Global_40.f_11095.f_35 = func_60(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_56();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == GET_HASH_KEY("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_61(iVar1);
		func_63(func_62(), 0, 4000);
		func_64(Global_40.f_11095.f_35);
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
		func_65(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_67(func_66(GET_HASH_KEY("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_44(14))
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
					sParam4 = func_68(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_67(func_66(GET_HASH_KEY("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_44(4))
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
					sParam4 = func_68(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, GET_HASH_KEY("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_66(GET_HASH_KEY("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_70(10, 1);
	}
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_47(int iParam0)
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

void func_48(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_71(iParam0, iParam1))
		{
			if (func_72(iParam0, iParam1))
			{
				if (func_73(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_74(iParam0);
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

void func_49(int iParam0, int iParam1, bool bParam2)
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

void func_50(int iParam0, bool bParam1)
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

void func_51(int iParam0, int iParam1)
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

float func_52()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_55(var uParam0)
{
	return func_39(*uParam0, 2);
}

int func_56()
{
	int iVar0;

	iVar0 = func_75();
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

int func_57(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_1() != -1)
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
	fVar1 = func_76(MISC::ABSF(fVar1) < 1f, func_76(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_58(int iParam0)
{
	if (!func_77(iParam0))
	{
		return false;
	}
	return func_78(iParam0);
}

bool func_59()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_60(int iParam0, int iParam1, int iParam2)
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

int func_61(int iParam0)
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

int func_62()
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

void func_63(int iParam0, bool bParam1, int iParam2)
{
	func_79((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_80(iParam0);
}

void func_64(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_81(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_65(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_82(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_83(iVar5, &iVar2, &iVar0))
			{
				if (!func_84(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_85(iVar2);
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
							if (func_86(iVar2) == GET_HASH_KEY("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_56() <= -160;
								}
								else if (iVar0 == GET_HASH_KEY("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_56() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_87();
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

struct<2> func_66(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_67(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_68(int iParam0)
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

var func_69(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_88(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_89(iParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (!func_91(iParam0, &iVar0, &iVar1))
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

bool func_71(int iParam0, int iParam1)
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

bool func_72(int iParam0, int iParam1)
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

bool func_73(int iParam0, int iParam1)
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
	if (!func_71(iParam0, iVar0))
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

void func_74(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_75()
{
	return Global_40.f_11095.f_35;
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_77(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_79(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_92(bParam1);
	}
}

void func_80(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("HONORMETERVALUE"), iParam0);
}

char* func_81(int iParam0)
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

bool func_82(int iParam0)
{
	vector3 vVar0;

	if (!func_93(23, &vVar0))
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

bool func_83(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_93(23, &Var0))
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

bool func_84(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_85(int iParam0)
{
	return iParam0;
}

int func_86(int iParam0)
{
	vector3 vVar0;

	if (!func_84(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_87()
{
	int iVar0;

	iVar0 = func_56();
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

void func_88(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(GET_HASH_KEY("FEEDTEXTURENAME"), iParam2);
}

bool func_89(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_90()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_91(int iParam0, int iParam1, int iParam2)
{
	if (!func_89(iParam0))
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

void func_92(bool bParam0)
{
	func_94(bParam0);
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

bool func_93(int iParam0, var uParam1)
{
	if (!func_95(iParam0))
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

void func_94(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(GET_HASH_KEY("HONORMETERVISIBLE"), bParam0);
}

bool func_95(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

