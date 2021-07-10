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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar37;
	bool bVar38;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (!Global_40)
	{
		CLOCK::SET_CLOCK_TIME(8, 0, 0);
		CLOCK::SET_CLOCK_DATE(5, 1, 1899);
	}
	if (func_2())
	{
		func_3(0);
	}
	else
	{
		func_3(1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_ANDALUSIAN_PERLINO"), true);
	}
	func_4();
	func_5(-1, 0);
	func_6(0);
	func_7(0);
	func_8();
	func_9();
	func_10();
	func_11();
	func_12();
	func_13();
	func_14();
	func_15();
	func_16(128);
	if (func_17(2))
	{
		func_16(32768);
		Global_1347343.f_2 = func_18();
		func_19(&Global_1935630, 2048);
		func_20(&Global_1347343, 5);
	}
	else
	{
		func_21(32768);
		func_22();
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(true);
	}
	while (!func_23("init_all_sp", 1024))
	{
		BUILTIN::WAIT(0);
	}
	while (!func_24(256))
	{
		BUILTIN::WAIT(0);
	}
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	VEHICLE::SET_RANDOM_TRAINS(false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	func_25(1);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_WILD_ANIMAL"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_WILD_ANIMAL_PREDATOR"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_CRIMINALS"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GUNSLINGERS"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_LARAMIE_GANG"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_SKINNER_BROTHERS"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_CREOLE"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_LEMOYNE_RAIDERS"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_SMUGGLERS"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_ODRISCOLL"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_GANG_MURFREE_BROOD"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_WILD_ANIMAL_BIRD"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_ALLIGATOR"), 0);
	PED::_0xDC91F22F09BC6C2F(GET_HASH_KEY("REL_BOAR"), 0);
	func_26();
	func_27();
	SCRIPTS::_0x11B0A0B282FA9B10(1);
	SCRIPTS::_0xF9E951A1E5517C06();
	if (!Global_40)
	{
		if (func_28() != -1)
		{
			func_29(0, 0, 1);
		}
		else
		{
			func_29(0, -1, 1);
			if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_30(GET_HASH_KEY("BENCHMARK"))))
			{
				Global_43893 = 1;
			}
		}
		func_31(1);
	}
	else if (!func_32(0) && !func_17(32770))
	{
		func_29(0, -1, 1);
	}
	else if (!func_24(32768))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 < 6)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(6, 0, 0);
		}
	}
	if (Global_43893)
	{
		func_33(128);
	}
	MAP::_0xD3F58E9316B7FC2A(1);
	UIFEED::UI_FEED_CLEAR_CHANNEL(2, 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::_0x5CA20FBE49891BBD(PLAYER::PLAYER_PED_ID(), 0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
		}
		else
		{
			if (func_17(32))
			{
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				bVar1 = true;
			}
			Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	bVar2 = func_34(func_24(32768));
	if (Global_40)
	{
		if (func_35())
		{
			func_36();
			iVar3 = func_37(Global_35, 0, 0, 1);
			if (!func_38(func_37(Global_35, 2, 0, 1), 0) && (!func_39(iVar3) || !WEAPON::_IS_WEAPON_ONE_HANDED(iVar3)))
			{
				iVar4 = func_40(0, 0);
				if (func_39(iVar4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar4, true, 2, false, false);
				}
				else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
				}
			}
			func_41();
			func_42();
			func_43();
			if (bVar2 && Global_40.f_9 <= 2)
			{
				func_45(func_44(), &vVar5, &uVar8);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar5, false, false, true, true);
			}
			if (!func_46())
			{
				func_47(Global_35, Global_40.f_7729, 1, 0, 0);
			}
			func_48();
		}
		else
		{
			func_49();
		}
	}
	Global_1898438 = -5000;
	iVar9 = func_50(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
	bVar10 = func_51(iVar9);
	while ((!func_52() || ((!func_24(4096) && !func_24(32768)) && !func_17(128))) || !bVar10)
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
		}
		else
		{
			func_53();
			func_54();
			iVar9 = func_50(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			bVar10 = func_51(iVar9);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			}
			BUILTIN::WAIT(0);
		}
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
		}
		else
		{
			if (func_17(32))
			{
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				bVar1 = true;
			}
			Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
	}
	func_55();
	func_56();
	if (!Global_40 && !func_35())
	{
		func_57(24);
		func_58();
		while ((ENTITY::IS_ENTITY_DEAD(Global_35) || !PED::IS_PED_READY_TO_RENDER(Global_35)) || func_59())
		{
			if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			{
			}
			else
			{
				BUILTIN::WAIT(0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD"), true, 2, false, false);
		func_60(0, 0);
		func_61(-1);
		func_62(100f);
	}
	if (!func_24(32768))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 4260352);
		if (func_63())
		{
			func_16(8192);
		}
		else
		{
			func_21(8192);
		}
	}
	else
	{
		func_21(8192);
	}
	if (func_17(128) && !func_46())
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Global_2621440[0 /*12066*/].f_9.f_7, Global_2621440[0 /*12066*/].f_9.f_13, true, false, true);
	}
	if (func_24(8192))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		func_33(1024);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_16(64);
	Global_40 = 1;
	func_64();
	func_65(32);
	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_30(GET_HASH_KEY("BENCHMARK"))))
	{
		func_65(128);
		func_65(16);
	}
	else
	{
		func_33(128);
	}
	if (func_28() == -1)
	{
		func_66();
		if (func_67(Global_1879514.f_1) && Global_1879514.f_18)
		{
		}
		else if (func_67(Global_1347343.f_2))
		{
		}
		else if (func_17(2))
		{
		}
		else
		{
			UILOG::_UILOG_CLEAR_ALL_ENTRIES();
		}
		func_68();
		func_69();
		func_70();
		func_71();
		func_72();
		func_73();
		func_74();
		func_75(0);
		func_76();
		if ((((func_77(Global_1935630, 131072) && func_32(60)) && !func_32(67)) && (CLOCK::GET_CLOCK_HOURS() > 16 || CLOCK::GET_CLOCK_HOURS() < 6)) && func_78() == 22)
		{
			func_79(9);
		}
		func_80();
		while (!func_81(&uVar11))
		{
			BUILTIN::WAIT(0);
		}
	}
	while (!bVar38)
	{
		bVar38 = SCRIPTS::IS_THREAD_EXIT_REQUESTED();
		iVar37 = (1 + iVar37);
		if (iVar37 >= 10)
		{
			func_82();
			iVar37 = 0;
		}
		if (!Global_1572887.f_8)
		{
			func_54();
		}
		if (((Global_43893 && !Global_43889) && !bVar38) && !func_17(48))
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BENCHMARK")) <= 0)
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BENCHMARK"));
				if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BENCHMARK")))
				{
				}
				else
				{
					SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BENCHMARK"), 1024);
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(GET_HASH_KEY("BENCHMARK"));
					Global_43893 = 0;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	while (!SCRIPTS::_0x380FFA15B72408FB(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1894899.f_2 = -1;
	if (func_83() != 2)
	{
		Global_1572864.f_3 = 0;
		func_84();
	}
}

bool func_2()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_3(bool bParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"), bParam0);
}

void func_4()
{
	func_85();
	func_86();
	func_87();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_40 || bParam1)
	{
		iVar0 = 0;
		while (iVar0 < func_88())
		{
			func_89(iVar0, iParam0);
			iVar0++;
		}
	}
}

void func_6(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		Global_1898330[iVar0] = -1;
		iVar0++;
	}
	Global_1898329 = 0;
	iVar1 = 0;
	while (iVar1 < func_88())
	{
		if ((func_90(iVar1) == 1 || func_90(iVar1) == 2) || func_90(iVar1) == 3)
		{
			if (bParam0)
			{
				func_93(func_91(iVar1), func_92(iVar1), 2);
			}
			func_94(iVar1, 0);
			func_95(iVar1, -15);
		}
		iVar1++;
	}
	if (func_28() == -1)
	{
		func_96(8);
		func_96(1);
	}
}

void func_7(bool bParam0)
{
	int iVar0;

	if (!Global_40 || bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			Global_40.f_450[iVar0] = -1;
			iVar0++;
		}
	}
}

void func_8()
{
	var uVar0;
	int iVar1;

	if (func_97())
	{
		return;
	}
	func_98(&uVar0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		func_99(&uVar0, iVar1);
		iVar1++;
	}
	func_100(&uVar0);
	func_101();
}

void func_9()
{
	func_102(1, 1442955798 /* GXTEntry: "Your horse is out of whistling range. While out of range, it will be shown as ~1b" +
    "~. You must get closer in order to be able to call it." */, 82949);
	func_102(6, -637613554 /* GXTEntry: "Continue to bond with your horse to increase the range at which it can be called." +
    "" */, 4);
	func_102(2, -491264247 /* GXTEntry: "Your horse is out of whistling range." */, 5);
	func_102(3, -211951838 /* GXTEntry: "Your main horse is out of whistling range. While out of range, it will be shown a" +
    "s ~1b~. You must get closer in order to be able to call it." */, 17413);
	func_102(4, -504561681 /* GXTEntry: "Your temporary horse is out of whistling range. While out of range, it will be sh" +
    "own as ~1b~. You must get closer in order to be able to call it." */, 17412);
	func_102(5, 1989166464 /* GXTEntry: "Your horses are out of whistling range." */, 4);
	func_102(7, 1528898976 /* GXTEntry: "You cannot call or command a horse until you have bonded with it. Continue to spe" +
    "nd time with this horse in order to gain its trust." */, 5);
	func_102(8, 740917367 /* GXTEntry: "Your horse won\'t follow you if you\'re in camp." */, 5);
	func_102(9, -1158474473 /* GXTEntry: "Your horse is hitched nearby. It stays hitched if you whistle for it while in cam" +
    "p." */, 5);
	func_102(10, -641388262 /* GXTEntry: "Your horse is lost." */, 5);
	func_102(11, -580966558 /* GXTEntry: "You do not have a horse available to call. You can steal, purchase, unstable, or " +
    "find a horse in the wild." */, 5);
	func_102(12, -1407195211 /* GXTEntry: "Your horse is not on the island." */, 5);
	func_102(13, -417529492 /* GXTEntry: "Horses do not respond to whistling when you are inside a building." */, 5);
	func_102(14, -1324583934 /* GXTEntry: "Your horse does not respond to whistling while you are in a cave." */, 5);
	func_102(15, -2015497475 /* GXTEntry: "Your horse does not respond to whistling while you are in a tunnel." */, 5);
	func_102(16, 1661723837 /* GXTEntry: "Your horse has been spooked. It has to calm down before it will respond to your c" +
    "ommands." */, 5);
	func_102(17, 1994675293 /* GXTEntry: "Your horse does not respond to commands in camp." */, 5);
	func_102(18, 1225508464 /* GXTEntry: "Your horse does not respond to commands on the ranch." */, 5);
	func_102(19, 1721144768 /* GXTEntry: "You have bonded with this horse and it will now respond to whistles and commands." +
    " To make it your main horse, equip it with your saddle." */, 4);
	func_102(20, 1262746693 /* GXTEntry: "You have bonded with this horse and it will now respond to whistles and commands." +
    "" */, 4);
	func_102(21, 354025617 /* GXTEntry: "You\'ve unlocked Rearing with this horse. Hold ~INPUT_HORSE_STOP ~ and tap ~INPUT_" +
    "HORSE_JUMP~ when stationary to perform this move." */, 581);
	func_102(22, -1855078184 /* GXTEntry: "You\'ve unlocked Skid Turns and Skid Stops with this horse. Hold ~INPUT_HORSE_STOP" +
    "~ + ~INPUT_HORSE_SPRINT~ while moving to perform these moves." */, 581);
	func_102(23, 1421241404 /* GXTEntry: "You\'ve unlocked the ability to Drift with this horse. Hold ~INPUT_HORSE_COLLECT~ " +
    "and use ~INPUT_HORSE_MOVE_LR~ while moving to perform this move." */, 581);
	func_102(24, 1895435813 /* GXTEntry: "." */, 4);
	func_102(25, 357598967 /* GXTEntry: "." */, 4);
	func_102(26, -1605217361 /* GXTEntry: "Your horse is dirty. This will cause its Health Core to drain faster. Brush your " +
    "horse or ride it through water to clean it." */, 4);
	func_102(27, -117368017 /* GXTEntry: "." */, 4);
	func_102(28, -1270089526 /* GXTEntry: "Your horse\'s Health will refill slower while its Health Core is low. Refill your " +
    "horse\'s Health Core by feeding it." */, 65540);
	func_102(29, 443850809 /* GXTEntry: "Your horse\'s Stamina will refill slower while its Stamina Core is low. Refill you" +
    "r horse\'s Stamina Core by feeding it." */, 65540);
	func_102(30, -2141646614 /* GXTEntry: "Your horse\'s Health Core is empty. This will begin to refill if you get off your " +
    "horse and allow it to rest, or lead it on foot using the reins." */, 65540);
	func_102(31, -1958786645 /* GXTEntry: "Your horse\'s Stamina Core is empty. This will begin to refill if you get off your" +
    " horse and allow it to rest, or lead it on foot using the reins." */, 65540);
	func_102(33, -1671091787 /* GXTEntry: "Your horse\'s Stamina Core is empty. If you continue to force it to swim, it will " +
    "buck you off and head for land." */, 65540);
	func_102(32, 1865623514 /* GXTEntry: "Both your horse\'s Cores are empty. These will begin to refill if you get off your" +
    " horse and allow it to rest, or lead it on foot using the reins." */, 65540);
	func_102(34, -271085641 /* GXTEntry: "Galloping causes a horse\'s Stamina to drain. Push the horse too hard and it will " +
    "buck you off." */, 4);
	func_102(35, GET_HASH_KEY("TF_HORSE_SPRINT_STAMINA_2"), 4);
	func_103(34, 35);
	func_102(36, GET_HASH_KEY("TF_HORSE_BUCK_OVERSPURRED"), 580);
	func_102(37, 1231893470 /* GXTEntry: "Horses become agitated when near predators. Bonding with your horse helps it beco" +
    "me more courageous." */, 580);
	func_102(38, 1045850957 /* GXTEntry: "~1~ belongs to ~2~ and doesn\'t like being ridden by anyone but him." */, 1541);
	func_102(39, 1474802901 /* GXTEntry: "~1~ belongs to ~2~. You cannot own or bond with a gang horse." */, 1025);
	func_102(40, 1437266219 /* GXTEntry: "This horse belongs to ~1~ and cannot be mounted at this time." */, 1025);
	func_102(41, 287196071 /* GXTEntry: "This is now your main horse. It is represented as ~1b~ on the radar." */, 17412);
	func_102(42, -1534873329 /* GXTEntry: "Your saddle has been returned to the nearest stable. You can collect it from any " +
    "stable ~BLIP_SHOP_HORSE~." */, 5);
	func_102(43, -923785888 /* GXTEntry: "Feeding your horse will replenish its Cores." */, 4);
	func_102(44, 107847243 /* GXTEntry: "Hitching your horse will let it rest, and allow its Cores to begin refilling if t" +
    "hey are low." */, 4);
	func_102(45, -874005272 /* GXTEntry: "You can command your horse to Stay, Flee, or Follow by focusing on it with ~INPUT" +
    "_INTERACT_LOCKON~ when it\'s nearby." */, 68);
	func_102(46, 285322508 /* GXTEntry: "You must increase your bond with a new horse before it is able to perform additio" +
    "nal actions, such as rearing." */, 65540);
	func_102(47, -1740675049 /* GXTEntry: "Study the horse to learn information about it. Call to the horse to get its atten" +
    "tion." */, 4);
	func_102(48, 497806156 /* GXTEntry: "Call to the horse to get its attention." */, 4);
	func_102(49, 71529769 /* GXTEntry: "Slowly approach the horse while staying locked on with ~INPUT_INTERACT_LOCKON~. M" +
    "oving quickly will spook the horse and cause it to run off." */, 4);
	func_102(50, 1068274146 /* GXTEntry: "You\'ve spooked the horse. Stop and calm it before continuing your approach." */, 4);
	func_102(51, 1584871165 /* GXTEntry: "Once it allows you to get close, press ~INPUT_ENTER~ to mount the horse." */, 4);
	func_102(52, -1151368854 /* GXTEntry: "Hold ~INPUT_MOVE_DOWN_ONLY~ and use ~INPUT_MOVE_LR~ to steer in the opposite dire" +
    "ction of the horse\'s movement to stay balanced." */, 4);
	func_102(53, 1490608149 /* GXTEntry: "You\'ve successfully broken the horse, but it will still have some wild tendencies" +
    ". Continue to bond with it to make it more obedient." */, 4);
	func_102(54, -1552620374 /* GXTEntry: "You were bucked while breaking a wild horse. Hold ~INPUT_MOVE_DOWN_ONLY~ and use " +
    "~INPUT_MOVE_LR~ to steer in the opposite direction of the horse\'s movement to st" +
    "ay balanced, and break it." */, 65540);
	func_102(55, -1656871326 /* GXTEntry: "Your horse has died. You can remove your saddle and put it on another horse, or p" +
    "urchase a new horse from the stables ~BLIP_SHOP_HORSE~" */, 4);
	func_102(56, 722368711 /* GXTEntry: "Your horse is critically injured. Use a horse reviver to heal your horse, or it w" +
    "ill die." */, 4);
	func_102(57, -1665795073 /* GXTEntry: "You need a Horse Reviver to revive your horse. You can craft one of these, or pur" +
    "chase one from a shop." */, 4);
	func_102(58, -1416617006 /* GXTEntry: "You need a Horse Reviver to revive your horse. These can be purchased from any Ge" +
    "neral Store or stables." */, 4);
	func_102(59, -1373195946 /* GXTEntry: "You now own multiple horses and can store up to 3 at the stables. Your previous h" +
    "orse has been stabled for you." */, 68);
	func_102(60, 1851568687 /* GXTEntry: "Equipping your saddle on a horse makes it your horse. Your weapons and camping eq" +
    "uipment are stored on your saddle." */, 68);
	func_103(59, 60);
	func_102(61, -2104417357 /* GXTEntry: "Your horse is agitated by a predator. Move the horse away or deal with the predat" +
    "or. If the predator gets too close your horse will flee." */, 66052);
	func_102(62, 1166291909 /* GXTEntry: "Your horse is agitated by a predator. If the predator gets too close your horse w" +
    "ill buck you off and flee." */, 66052);
	func_102(63, -688802965 /* GXTEntry: "You cannot remove the saddle from your horse while carrying animal carcasses or h" +
    "ogtied bodies." */, 5);
	func_102(64, -1731420917 /* GXTEntry: "Your saddle has been left behind. You can pick up your saddle ~BLIP_SADDLE~ from " +
    "its current location, or travel to any stable to have it retrieved automatically" +
    "." */, 4);
	func_102(65, 1712039849 /* GXTEntry: "Your saddle is out of reach. Return to the stable to retrieve your saddle." */, 4);
	func_102(66, 1257969622 /* GXTEntry: "Your horse\'s Stamina will drain faster while galloping, if there is an animal or " +
    "person stowed on the back." */, 65540);
	func_102(67, -1230044011 /* GXTEntry: "You are unable to saddle this horse at the moment. Make sure it\'s calm and you ar" +
    "en\'t in view of the owner, law or other witnesses to equip your saddle." */, 4);
	func_102(68, 623122901 /* GXTEntry: "Match speed with a companion by holding or tapping ~INPUT_HORSE_SPRINT~ while rid" +
    "ing near them. Your horse\'s Stamina will not drain while matching their speed." */, 69);
	func_102(69, 116888688 /* GXTEntry: "You have lost your hat. It can be retrieved from your horse or wardrobe." */, 0);
	func_102(71, -879318171 /* GXTEntry: "You have found a special hat. This hat has been added to your wardrobe and can be" +
    " stored on your horse. Special hats glow when lying on the ground." */, 0);
	func_102(72, 1109693541 /* GXTEntry: "You have found a special hat. This hat has been added to your wardrobe and can be" +
    " stored on your horse." */, 65536);
	func_102(73, -1884070406 /* GXTEntry: "This hat cannot be stored and will be lost if left on the ground." */, 65536);
	func_102(74, -1174138158 /* GXTEntry: "You have no outfits suitable for cold weather on your horse." */, 0);
	func_102(75, -508418261 /* GXTEntry: "You have no outfits suitable for hot weather on your horse." */, 0);
	func_102(76, -688557028 /* GXTEntry: "You have no outfits suitable for hot or cold weather on your horse." */, 0);
	func_102(198, -1663681033 /* GXTEntry: "Companions that want to go hunting with you will be marked with a ~BLIP_REGION_HU" +
    "NTING~ on the radar." */, 4);
	func_102(199, 1384944530 /* GXTEntry: "You have entered Legendary Animal Territory. Hunt this Legendary Animal by findin" +
    "g and inspecting clues." */, 4);
	func_102(200, -1030418965 /* GXTEntry: "You have entered Legendary Animal Territory, but there is too much activity in th" +
    "e area to track the animal." */, 4);
	func_102(201, 943325079 /* GXTEntry: "You have entered Legendary Animal Territory, but it will be some time before the " +
    "animal returns to the area." */, 4);
	func_102(78, 1204386981 /* GXTEntry: "You have acquired an ingredient required to craft the ~1~." */, 1028);
	func_102(79, -1858995382 /* GXTEntry: "You have gathered all the ingredients required to make the ~1~. Take these to the" +
    " Fence to craft this Talisman." */, 1028);
	func_102(80, 370447594 /* GXTEntry: "You have gathered the ingredient required to make the ~1~. Take this ingredient t" +
    "o the Fence to craft this Trinket." */, 1028);
	func_102(81, 620517859 /* GXTEntry: "You are now hot. While hot, your Health Core will drain faster. Change clothes to" +
    " cool down." */, 32784);
	func_102(82, 786300880 /* GXTEntry: "You are now cold. While cold, your Health Core will drain faster. Change clothes " +
    "to warm up." */, 32784);
	func_102(83, -1405655995 /* GXTEntry: "You are now drunk. Wait a few minutes to sober up." */, 32768);
	func_102(84, 199112456 /* GXTEntry: "You can rest by holding ~INPUT_DYNAMIC_SCENARIO~. Your Cores will not drain while" +
    " resting, and will refill slightly if they are very low." */, 32768);
	func_102(85, GET_HASH_KEY("TF_LOW_STAMINA_CORE_START"), 32768);
	func_102(86, -817307285 /* GXTEntry: "Your Dead Eye Core is empty. You can sleep, smoke cigars, eat food, or drink coff" +
    "ee and alcohol to refill your Dead Eye Core." */, 32768);
	func_102(87, GET_HASH_KEY("TF_LOW_HEALTH_CORE_START"), 32768);
	func_102(88, -1258723850 /* GXTEntry: "Your body has grown used to the effect of eating these plants. Stop eating them f" +
    "or a day and you will gain the full benefit from them again." */, 0);
	func_102(0, 1328275845 /* GXTEntry: "You are sick. While sick, you will only gain the benefit from consuming a limited" +
    " amount of food and drink." */, 513);
	func_102(89, -1346179088 /* GXTEntry: "You have been poisoned. This will cause your Health Core to drain. Eat a Health h" +
    "erb, such as Ginseng, to counteract the effects." */, 516);
	func_102(90, -1989120746 /* GXTEntry: "The effects of the poison have worn off." */, 4);
	func_102(91, -743542107 /* GXTEntry: "When you gain or lose weight, ~BLIP_RPG_OVERWEIGHT~ or ~BLIP_RPG_UNDERWEIGHT~ wil" +
    "l be shown in your Health Core." */, 4);
	func_102(92, -1799252769 /* GXTEntry: "You are now at your maximum weight." */, 4);
	func_102(93, 2061289134 /* GXTEntry: "You are now at your minimum weight." */, 4);
	func_102(94, 307558439 /* GXTEntry: "Overeating will cause you to gain weight, while not eating regularly enough will " +
    "cause you to lose weight." */, 0);
	func_102(95, -463004596 /* GXTEntry: "Your weight affects how quickly your Stamina drains, and the amount of damage you" +
    " can take." */, 0);
	func_103(94, 95);
	func_102(96, -997992274 /* GXTEntry: "Animals attached to your horse will decompose. Sell them before this happens." */, 16);
	func_102(97, -707888317 /* GXTEntry: "The animal on your horse is starting to decompose and is losing its value." */, 16);
	func_102(98, -334321697 /* GXTEntry: "The animal has decomposed too much and has lost all its value." */, 16);
	func_102(99, 940276186 /* GXTEntry: "While resting at a camp fire, you can access fire crafting. Fire crafting allows " +
    "you to cook meat and make tonics." */, 32768);
	func_102(100, -234727727 /* GXTEntry: "Ginseng is used to craft items that replenish Health. Use a campfire to craft wit" +
    "h Ginseng." */, 32768);
	func_102(101, 650526530 /* GXTEntry: "Sage is used to craft items that replenish Stamina. Use a campfire to craft with " +
    "Sage." */, 32768);
	func_102(102, -1840254829 /* GXTEntry: "Indian Tobacco is used to craft items that replenish Dead Eye. Use a campfire to " +
    "craft with Indian Tobacco." */, 32768);
	func_102(103, -1399389135 /* GXTEntry: "Yarrow is used to craft items that replenish Health. Use a campfire to craft with" +
    " Yarrow." */, 32768);
	func_102(104, -708925047 /* GXTEntry: "Wild carrots can be eaten or fed to your horse to replenish your Health Core." */, 32768);
	func_102(105, 1910552235 /* GXTEntry: "Common Bulrush is used to craft items for your horse." */, 32768);
	func_102(106, -117450424 /* GXTEntry: "Oleander is a poisonous herb. Use it in crafting to apply poison to weapons like " +
    "throwing knives and arrows." */, 32768);
	func_102(107, -1353351646 /* GXTEntry: "Eating berries refills your Health Core." */, 32768);
	func_102(108, -1169508001 /* GXTEntry: "When you skin or pluck an animal, you take meat from the carcass. You can cook an" +
    "d eat this meat at a campfire to refill your Cores." */, 32768);
	func_102(109, -422501883 /* GXTEntry: "Flight feathers can be used to craft improved or unique arrows." */, 32768);
	func_102(110, -907241368 /* GXTEntry: "Eat food before combat. When your Cores are full your regeneration rate is highes" +
    "t. When in combat, use healing tonics to refill Health quickly." */, 516);
	func_102(111, -273354156 /* GXTEntry: "You lose money when killed by enemies." */, 516);
	func_102(112, -503418783 /* GXTEntry: "The last location you died at is marked ~1b~ on the map." */, 1540);
	func_102(113, -1860078853 /* GXTEntry: "Press ~INPUT_VEH_EXIT~ to stand up in the boat. Hold ~INPUT_VEH_EXIT~ to exit the" +
    " boat." */, 4);
	func_102(77, 1598041226 /* GXTEntry: "You now own the off-hand holster. This allows you to carry two sidearms at once a" +
    "nd dual wield them." */, 5);
	func_102(114, 2065666193 /* GXTEntry: "You can begin more bounty missions from bounty posters found around towns." */, 5);
	func_102(115, 682756528 /* GXTEntry: "~s~A bounty poster has been posted at the ~BLIP_PROC_BOUNTY_POSTER~. Retrieving t" +
    "hese posters will give you the details needed to hunt a bounty target.~s~" */, 4);
	func_102(116, 601181133 /* GXTEntry: "~s~You have captured a criminal. You can take them back to the ~a~ Sheriff\'s Offi" +
    "ce for a small reward.~s~" */, 1028);
	func_102(117, -1160517710 /* GXTEntry: "~s~You are now wanted. You cannot collect on any bounties in this district until " +
    "you have paid your debt to society.~s~" */, 4);
	func_102(118, -1295863724 /* GXTEntry: "~s~Committing serious crimes will cause towns to go into lockdown for a while. Th" +
    "is is shown by a red area on the Pause Map.~s~" */, 5);
	func_102(119, -763105322 /* GXTEntry: "~s~Additional lawmen are patrolling while a town is locked down and you will beco" +
    "me wanted again if spotted before clearing your bounty.~s~" */, 5);
	func_103(118, 119);
	func_102(120, 1415497946 /* GXTEntry: "~s~Blackwater and the surrounding area is in lockdown, shown by a red area on the" +
    " Pause Map. You will become wanted if seen by law in this area.~s~" */, 4);
	func_102(121, -1293582803 /* GXTEntry: "~s~You can now sell stolen wagons to Seamus at the Wagon Fence ~BLIP_SHOP_COACH_F" +
    "ENCING~ in Emerald Ranch.~s~" */, 5);
	func_102(122, 603143905 /* GXTEntry: "~s~You can sell this wagon at the Wagon Fence ~BLIP_SHOP_COACH_FENCING~ in Emeral" +
    "d Ranch.~s~" */, 4);
	func_102(123, -273612239 /* GXTEntry: "~s~You need to wait for the Wagon Fence to return before selling a wagon.~s~" */, 4);
	func_102(124, -563233876 /* GXTEntry: "~s~You are wanted by the law and cannot use the shop at this time. Please try aga" +
    "in later.~s~" */, 4);
	func_102(125, 549692738 /* GXTEntry: "~s~You can no longer drop this wagon off at the Wagon Fence as it has been too he" +
    "avily damaged.~s~" */, 4);
	func_102(127, -1558839150 /* GXTEntry: "You can sell horses to Clay and Clive at Clemen\'s Cove ~BLIP_SHOP_HORSE_FENCING~." +
    " They will pay more than a stable for stolen horses, but less for purchased hors" +
    "es." */, 5);
	func_102(128, -1342271498 /* GXTEntry: "Clay will only accept the horse you are riding or leading." */, 4);
	func_102(129, 1740863586 /* GXTEntry: "~s~You\'ve discovered a home you can break into and rob, which is marked on your m" +
    "ap with ~e~~BLIP_PROC_HOME~~s~ when available.~s~" */, 0);
	func_102(152, 1587580315 /* GXTEntry: "Some shops run an illicit business on the side. Exploring around a shop, or getti" +
    "ng a tip from a stranger may expose a shop\'s unusual activities." */, 0);
	func_102(131, 1590177402 /* GXTEntry: "In addition to buying stolen wagons, Seamus runs a Fence. Visit a Fence to sell v" +
    "aluables, buy illicit goods, or craft Talismans and Trinkets." */, 5);
	func_102(153, 807130733 /* GXTEntry: "~s~Trains can be lucrative robbery targets. You can board the train while it\'s st" +
    "opped or jump on it from horseback to rob it.~s~" */, 4);
	func_102(154, -399307153 /* GXTEntry: "~s~To board the train, ride your horse alongside it and hold ~INPUT_HORSE_SPRINT~" +
    " to match its speed. When the prompt appears, press ~INPUT_JUMP~ to jump to the " +
    "train." */, 4);
	func_102(157, 513607990 /* GXTEntry: "~s~You can stop the train by threatening the engineer or by blocking the tracks.~" +
    "s~" */, 4);
	func_102(158, 356872743 /* GXTEntry: "~s~Forcing the train to stop away from populated areas will decrease the size of " +
    "the law response, should you allow a witness to escape.~s~" */, 4);
	func_102(155, 1205588547 /* GXTEntry: "~s~Acting in a threatening manner to passengers will initiate the robbery.~s~" */, 4);
	func_102(156, -444028358 /* GXTEntry: "~s~If the train passes through town while you are robbing the train, the law will" +
    " be alerted and a patrol will be dispatched after you." */, 4);
	func_102(159, -467846174 /* GXTEntry: "~s~Once the robbery has started, passengers that you have not yet robbed in the c" +
    "ar you are currently in will be marked on the radar.~s~" */, 4);
	func_102(160, -107628785 /* GXTEntry: "~s~Hold ~INPUT_AIM~ to target a passenger and press ~INPUT_INTERACT_LOCKON_ROB~ t" +
    "o rob them.~s~" */, 4);
	func_102(162, -1124101458 /* GXTEntry: "~s~Clear out the guards to give yourself time to rob the passengers.~s~" */, 516);
	func_103(155, 156);
	func_103(160, 159);
	func_103(157, 158);
	func_102(130, -832951255, 1024);
	func_102(138, 145624648 /* GXTEntry: "~s~You have been given a tip about a robbery opportunity. Press ~INPUT_PLAYER_MEN" +
    "U~ and open the log to find more information.~s~" */, 0);
	func_102(139, -1469076539 /* GXTEntry: "~s~You have been given a tip about an Indian holding camp ~BLIP_EVENT_RIGGS_CAMP~" +
    ".~s~" */, 0);
	func_102(132, 719752691 /* GXTEntry: "Poker is now available. Visit ~BLIP_MG_POKER~ to play." */, 0);
	func_102(133, 507790294 /* GXTEntry: "You cannot carry any more ~1~. Buy a bandolier to increase your capacity." */, 1028);
	func_102(134, -1928326675 /* GXTEntry: "You cannot carry any more ~1~. Buy an ammo belt to increase your capacity." */, 1028);
	func_102(135, -1969895912 /* GXTEntry: "You cannot carry any more ~1~. Complete challenges to upgrade your bandolier to i" +
    "ncrease your capacity." */, 1028);
	func_102(136, 730174236 /* GXTEntry: "You cannot carry any more ~1~. Complete challenges to upgrade your ammo belt to i" +
    "ncrease your capacity." */, 1028);
	func_102(137, -770663347 /* GXTEntry: "You cannot carry any more ~1~." */, 1028);
	func_102(163, 697102681 /* GXTEntry: "~s~Individuals that owe the gang money are marked on the map with ~1b~. Seek out " +
    "the debtors and recover the money.~s~" */, 1025);
	func_102(164, -859472440 /* GXTEntry: "~s~Put any collected debts in the camp funds.~s~" */, 0);
	func_102(165, 1492120364 /* GXTEntry: "~s~Arthur must confront certain targets. Press ~INPUT_INTERACT_NEG~ to confront.~" +
    "s~" */, 0);
	func_102(166, -1563370335 /* GXTEntry: "~s~Radar blips that cover large areas are meant to be searched.~s~" */, 1);
	func_102(167, -1893503445 /* GXTEntry: "~s~You can skin dead animals by holding ~INPUT_LOOT~ when standing next to the ca" +
    "rcass. Animal skins, pelts, and hides can be sold at shops.~s~" */, 0);
	func_102(168, -1993236866 /* GXTEntry: "~s~You can loot dead bodies for ammo and items. Stand over the body and hold ~INP" +
    "UT_LOOT~ to search it.~s~" */, 0);
	func_102(169, -861998726 /* GXTEntry: "~s~One of Strauss\' debtors was last seen in this area. Search the area to find th" +
    "em and reclaim the debt.~s~" */, 68);
	func_102(170, 878260591 /* GXTEntry: "~s~Donate the recovered debt to the camp funds ~COLOR_OBJECTIVE~~BLIP_AMBIENT_TIT" +
    "HING~~s~ at camp, or head to one of the other debtors ~BLIP_PROC_LOANSHARK~ to r" +
    "ecover further debts.~s~" */, 581);
	func_102(171, -1309461467 /* GXTEntry: "This table game is unavailable at the moment. Try again later." */, 4);
	func_102(173, 205914143 /* GXTEntry: "When camp requests are fulfilled, they appear as a ~BLIP_CAMP_REQUEST~ with the c" +
    "haracter in question. Check in with them to complete the request." */, 4);
	func_102(172, 1333257018 /* GXTEntry: "Companions will sometimes ask for help retrieving an item. Find and return it to " +
    "them in camp for a reward." */, 4);
	func_102(140, -1880803763 /* GXTEntry: "You have acquired the Lasso. This tool allows you to rope a variety of animals an" +
    "d to immobilize and hogtie people." */, 4);
	func_102(141, 310470683 /* GXTEntry: "To lasso a target, equip your lasso like any other weapon, aim at the target with" +
    " ~INPUT_AIM~ + ~INPUTGROUP_LOOK~, and press ~INPUT_ATTACK~ to hurl your lasso." */, 4);
	func_102(142, GET_HASH_KEY("TF_LASSO_ON_HORSE"), 516);
	func_102(143, -1146048144 /* GXTEntry: "To hogtie a target, quickly approach the target and press ~INPUT_HOGTIE~. If you " +
    "don\'t hogtie the lassoed target, that person will break free after a few seconds" +
    "." */, 4);
	func_102(144, 1669998970 /* GXTEntry: "You can place the hogtied person on your horse. Press ~INPUT_PLACE_CARRIABLE_ONTO" +
    "_PARENT~ when next to your horse\'s hind quarter." */, 4);
	func_102(145, 1161166319 /* GXTEntry: "When being grappled, mash ~INPUT_MELEE_ATTACK~ to escape." */, 532);
	func_102(146, GET_HASH_KEY("TF_NO_GUNS_IN_RHODES"), 5);
	func_102(147, -1904663526 /* GXTEntry: "You cannot use weapons or cause trouble in Rhodes when you are acting as a deputy" +
    " for Sheriff Gray." */, 5);
	func_102(148, -222321090 /* GXTEntry: "Dutch has asked the gang to not use weapons or cause trouble in Caliga Hall." */, 5);
	func_102(149, 911175212 /* GXTEntry: "You cannot use weapons or cause trouble in Caliga Hall when you are acting as a d" +
    "eputy for Sheriff Gray." */, 5);
	func_102(150, 901098319 /* GXTEntry: "This weapon is in poor condition. Maintain your weapons by pressing ~INPUT_QUICK_" +
    "SELECT_INSPECT~ while they are selected on the Weapon Wheel." */, 4);
	func_102(501, 556962895 /* GXTEntry: "You can interact with the shopkeeper by approaching the catalogue and selecting t" +
    "he appropriate option." */, 128);
	func_102(502, -4732326 /* GXTEntry: "You can interact with the shopkeeper by holding ~INPUT_INTERACT_LOCKON~ and selec" +
    "ting the appropriate option." */, 128);
	func_102(503, -809342316 /* GXTEntry: "You can interact with the foreman by holding ~INPUT_INTERACT_LOCKON~ and selectin" +
    "g the appropriate option." */, 128);
	func_102(504, GET_HASH_KEY("TF_SHOP_POST_OFFICE"), 0);
	func_102(505, -1635466248 /* GXTEntry: "The Off-hand Holster is now available for purchase at any Gunsmith store. The Off" +
    "-hand Holster allows you to dual wield." */, 1);
	func_102(506, 323252264 /* GXTEntry: "Many shops allow you to interact with items on shelves, in order to examine or pu" +
    "rchase them directly." */, 128);
	func_102(507, -1792565875 /* GXTEntry: "This General Store does not sell clothing. Clothing can be purchased at the nearb" +
    "y Tailor." */, 65664);
	func_102(508, -2112795848 /* GXTEntry: "You have to be on foot to interact with this shopkeeper." */, 65664);
	func_102(511, -1189716495 /* GXTEntry: "The Trapper is shown by ~BLIP_SHOP_ANIMAL_TRAPPER~ on the map." */, 128);
	func_102(510, -190287083 /* GXTEntry: "You cannot shop while holding an animal pelt or carcass. They can be sold to a Bu" +
    "tcher or the Trapper for cash." */, 128);
	func_102(509, 322258537 /* GXTEntry: "You cannot shop while holding an animal pelt or carcass. They can be sold to a Bu" +
    "tcher for cash." */, 128);
	func_102(512, 542316304 /* GXTEntry: "This is the Trapper. He buys whole animals, skins, furs, hides and feathers. He c" +
    "an also craft various clothing items from the animals and pelts you sell him." */, 128);
	func_102(513, 213395742 /* GXTEntry: "The Trapper has a permanent shop in Saint Denis, in addition to a traveling stall" +
    " that can be found in the wilderness." */, 128);
	func_102(514, 1494443098 /* GXTEntry: "The Trapper can now use ~1~ to craft garments." */, 1152);
	func_102(515, 1234464176 /* GXTEntry: "To sell a pelt stored on the back of your horse, take your horse close to the But" +
    "cher\'s stall, focus on the Butcher, and hold ~INPUT_SHOP_SELL~." */, 65664);
	func_102(516, 706866209 /* GXTEntry: "To sell a pelt stored on the back of your horse, take your horse close to the Tra" +
    "pper\'s stall, focus on the Trapper, and hold ~INPUT_SHOP_SELL~." */, 65664);
	func_102(517, 1707129024 /* GXTEntry: "The catalogue is currently unavailable while working at Pronghorn Ranch." */, 128);
	func_102(518, 1413978366 /* GXTEntry: "The catalogue and weapon customization are currently unavailable while working at" +
    " Pronghorn Ranch." */, 128);
	func_102(519, -1072053682 /* GXTEntry: "You cannot craft or buy items from the Fence while working at Pronghorn Ranch." */, 128);
	func_102(520, -571835808 /* GXTEntry: "You cannot buy items from the Trapper while working at Pronghorn Ranch." */, 128);
	func_102(521, 1562440933 /* GXTEntry: "You have already bought all currently available newspapers." */, 128);
	func_102(522, 1727165432 /* GXTEntry: "You cannot purchase train tickets while carrying something." */, 128);
	func_102(523, -1774924102 /* GXTEntry: "The ~1~ is now available to purchase in shops." */, 1088);
	func_102(524, -477965895 /* GXTEntry: "The ~1~ is now available to modify in shops." */, 1089);
	func_102(525, -825236504 /* GXTEntry: "The ~1~ is now available to purchase and modify in shops." */, 1088);
	func_102(526, -945757107 /* GXTEntry: "New weapons are available to purchase and modify in shops." */, 65);
	func_102(527, -1646996587 /* GXTEntry: "Special lures are now available to purchase at the Bait shop in Lagras. Using the" +
    "se lures will make it easier to catch larger fish." */, 1);
	func_102(174, -1239844062 /* GXTEntry: "You cannot use weapons in camp." */, 0);
	func_102(175, -1024099583 /* GXTEntry: "You cannot use weapons in this area." */, 4);
	func_102(176, 274213443 /* GXTEntry: "You are unable to ride your horse in this town." */, 4);
	func_102(177, 951458700 /* GXTEntry: "You can access basic crafting, without a fire, by selecting the crafting tools fr" +
    "om your Item Wheel." */, 4);
	func_102(178, -1784981781 /* GXTEntry: "You are unable to rest, craft, or sleep when in combat." */, 4);
	func_102(555, 1055679868 /* GXTEntry: "Gunfire near camp may bring unwanted attention. Move further away to a safe dista" +
    "nce." */, 4);
	func_102(556, -1451930162 /* GXTEntry: "You are unable to fire weapons around ranch grounds. Move further away to a safe " +
    "distance." */, 4);
	func_102(151, -1724964058 /* GXTEntry: "You can lock on to the padlock to assist in aiming." */, 5);
	func_102(179, 754006577 /* GXTEntry: "~s~You have discovered a stranger. They are marked with a ~1b~ and will give you " +
    "tasks to perform.~s~" */, 1028);
	func_102(180, -1591427451 /* GXTEntry: "~1b~ blips indicate optional stranger missions. Speak to the stranger in the area" +
    " to begin the strand.~s~" */, 1028);
	func_102(181, -2132053925 /* GXTEntry: "~s~You\'ve received your first task. Tasks can be completed at any time.~s~" */, 4);
	func_102(182, -1840773566 /* GXTEntry: "~s~This task has marked ~q~an area~s~ on your map to search rather than a specifi" +
    "c location. This does not have to be searched immediately.~s~" */, 4);
	func_102(183, -1958980732 /* GXTEntry: "~s~You have received a task from a stranger. These tasks can be completed at any " +
    "time, and are marked with a ~BLIP_RC~.~s~" */, 4);
	func_102(184, -824284931 /* GXTEntry: "~s~You have encountered a stranger ~BLIP_RC~. Some strangers will give you tasks " +
    "to perform. These tasks can be completed at any time .~s~" */, 4);
	func_102(185, -1662190894 /* GXTEntry: "~s~A letter has been left for you at your tent. You can check for mail for the ga" +
    "ng at Post Offices in towns.~s~" */, 4);
	func_102(186, -2044484942 /* GXTEntry: "~s~A letter has arrived for you. Return to camp to read this.~s~" */, 4);
	func_102(187, GET_HASH_KEY("TF_JOURNAL_ACCESS0"), 4);
	func_102(188, -2130020923 /* GXTEntry: "~s~The status of any current task can be viewed in your Progress menu or Compendi" +
    "um in the Pause menu, accessed using ~INPUT_FRONTEND_PAUSE~.~s~" */, 4);
	func_102(189, -1926263277 /* GXTEntry: "~s~You can also access your progress menu or Compendium using ~INPUT_FEED_INTERAC" +
    "T~ for a short period after receiving an update.~s~" */, 4);
	func_102(190, -2098628304 /* GXTEntry: "~s~Herbs with special properties are marked with ~BLIP_PLANT~ on your radar. Thes" +
    "e herbs can be used in medicines and tonics or sold to merchants.~s~" */, 4);
	func_102(191, -332901139 /* GXTEntry: "~s~Visit ~BLIP_PROC_COACH~ for information about coaches carrying valuable cargo." +
    "~s~" */, 5);
	func_102(192, 1832946484 /* GXTEntry: "~s~You can hunt and skin any animal, and sell the proceeds in town, or bring them" +
    " back to help the gang.~s~" */, 4);
	func_102(193, -2119444607 /* GXTEntry: "This animal is decomposed and can no longer be skinned." */, 4);
	func_102(194, 982638214 /* GXTEntry: "Use available beds to save progress, change outfits and, once unlocked, fast trav" +
    "el." */, 5);
	func_102(195, 104025434 /* GXTEntry: "Press ~INPUT_SPECIAL_ABILITY~ to engage Dead Eye." */, 4);
	func_102(196, GET_HASH_KEY("TF_EAGLE_EYE"), 0);
	func_102(197, -1746780873 /* GXTEntry: "~s~To row forwards, hold ~INPUT_VEH_BOAT_ACCELERATE~. To row backwards, hold ~INP" +
    "UT_VEH_BOAT_BRAKE~. Steer using ~INPUT_VEH_BOAT_MOVE_LR~." */, 4);
	func_102(202, -57221646 /* GXTEntry: "You have been challenged to a duel. If you accept, you will be asked to get into " +
    "position to begin." */, 4);
	func_102(203, 1440543461 /* GXTEntry: "You have challenged someone to a duel. Get into position to begin." */, 4);
	func_102(204, 1659742301 /* GXTEntry: "This person can be challenged to a duel. If you make the challenge, you will be a" +
    "sked to get into position to begin." */, 4);
	func_102(205, -1728520507 /* GXTEntry: "You currently do not have a suitable weapon to accept this duel challenge." */, 4);
	func_102(206, -100261443 /* GXTEntry: "You have discovered a recipe." */, 12);
	func_102(207, 1282359645 /* GXTEntry: "You have discovered a new herb." */, 12);
	func_102(208, -1117426317 /* GXTEntry: "You have discovered the properties of ~1~." */, 1036);
	func_102(209, -2139696785 /* GXTEntry: "You have tasted ~1~, which has taught you a new recipe." */, 1036);
	func_102(210, -79710399 /* GXTEntry: "Blackberry is a Health herb. It can be eaten to refill your Health Core or crafte" +
    "d into Predator Bait." */, 1);
	func_102(211, 1464586970 /* GXTEntry: "Evergreen Huckleberry is a Health herb. It can be eaten to refill your Health Cor" +
    "e or crafted into Predator Bait." */, 1);
	func_102(212, -187882257 /* GXTEntry: "Raspberry is a Health herb. It can be eaten to refill your Health Core or crafted" +
    " into Predator Bait." */, 1);
	func_102(213, 317970992 /* GXTEntry: "Wintergreen Berry is a Health herb. It can be eaten to refill your Health Core or" +
    " crafted into Predator Bait." */, 1);
	func_102(214, -863957205 /* GXTEntry: "Alaskan Ginseng is a Health herb. It can be eaten to refill your Health Core or c" +
    "rafted into a Health Cure." */, 1);
	func_102(215, 2097878939 /* GXTEntry: "American Ginseng is a Health herb. It can be eaten to refill your Health Core or " +
    "crafted into a Health Cure." */, 1);
	func_102(216, -937931736 /* GXTEntry: "Yarrow is a Health herb. It can be eaten to refill your Health Core or crafted in" +
    "to a Health Cure." */, 1);
	func_102(217, 615174536 /* GXTEntry: "English Mace is a Health herb. It can be eaten to refill your Health Core or craf" +
    "ted into a Health Cure." */, 1);
	func_102(218, -1398748526 /* GXTEntry: "Milkweed is a Health herb. It can be eaten to refill your Health Core or crafted " +
    "into special items." */, 1);
	func_102(219, -1569965791 /* GXTEntry: "Vanilla Flower is a Health herb. It can be eaten to refill your Health Core or cr" +
    "afted into Herbivore Bait." */, 1);
	func_102(220, 2019508864 /* GXTEntry: "Oleander Sage is a poisonous herb. It can be crafted into deadly weapons." */, 1);
	func_102(221, -899306442 /* GXTEntry: "Desert Sage is a Stamina herb. It can be eaten to refill your Stamina Core or cra" +
    "fted into Bitters or a Horse Stimulant." */, 1);
	func_102(222, -1934751777 /* GXTEntry: "Hummingbird Sage is a Stamina herb. It can be eaten to refill your Stamina Core o" +
    "r crafted into Bitters or a Horse Stimulant." */, 1);
	func_102(223, 1746273927 /* GXTEntry: "Red Sage is a Stamina herb. It can be eaten to refill your Stamina Core or crafte" +
    "d into Bitters or a Horse Stimulant." */, 1);
	func_102(224, -644567760 /* GXTEntry: "Violet Snowdrop is a Stamina herb. It can be eaten to refill your Stamina Core or" +
    " crafted into Herbivore Bait." */, 1);
	func_102(225, -74448660 /* GXTEntry: "Wild Feverfew is a Stamina herb. It can be eaten to refill your Stamina Core or c" +
    "rafted into Bitters." */, 1);
	func_102(226, 14795803 /* GXTEntry: "Burdock Root is a Stamina herb. It can be eaten to refill your Stamina Core or cr" +
    "afted into Bitters." */, 1);
	func_102(227, -1478852948 /* GXTEntry: "Indian Tobacco is a Dead Eye herb. It can be eaten to refill your Dead Eye Core o" +
    "r crafted into Snake Oil." */, 1);
	func_102(228, -309353715 /* GXTEntry: "Golden Currant is a Dead Eye herb. It can be eaten to refill your Dead Eye Core o" +
    "r crafted into Snake Oil." */, 1);
	func_102(229, 199374245 /* GXTEntry: "Blackcurrant is a Dead Eye herb. It can be eaten to refill your Dead Eye Core or " +
    "crafted into Snake Oil." */, 1);
	func_102(230, -935762660 /* GXTEntry: "Prairie Poppy is a Dead Eye herb. It can be eaten to refill your Dead Eye Core or" +
    " crafted into Snake Oil." */, 1);
	func_102(231, 234082525 /* GXTEntry: "Wild Carrot is a Health herb. It can be eaten to refill your Health Core or craft" +
    "ed into horse items." */, 1);
	func_102(232, 1026737268 /* GXTEntry: "Common Bulrush is a Health herb. It can be crafted into a Horse Stimulant." */, 1);
	func_102(233, 1049796611 /* GXTEntry: "Bay Bolete is a Health herb. It can be eaten to refill your Health Core or crafte" +
    "d into Herbivore Bait." */, 1);
	func_102(234, -281686174 /* GXTEntry: "Chanterelle is a Health herb. It can be eaten to refill your Health Core or craft" +
    "ed into Herbivore Bait." */, 1);
	func_102(235, -1072882472 /* GXTEntry: "Parasol Mushroom is a Health herb. It can be eaten to refill your Health Core or " +
    "crafted into Herbivore Bait." */, 1);
	func_102(236, -1826634801 /* GXTEntry: "Ram\'s Head is a Health herb. It can be eaten to refill your Health Core or crafte" +
    "d into Herbivore Bait." */, 1);
	func_102(237, 1539508377 /* GXTEntry: "Creeping Thyme is a Dead Eye herb. It can be eaten to refill your Dead Eye Core o" +
    "r used as a seasoning in cooking." */, 1);
	func_102(238, -279714506 /* GXTEntry: "Oregano is a Stamina herb. It can be eaten to refill your Stamina Core or used as" +
    " a seasoning in cooking." */, 1);
	func_102(239, 898084375 /* GXTEntry: "Wild Mint is a Health herb. It can be eaten to refill your Health Core or used as" +
    " a seasoning in cooking." */, 1);
	func_102(240, 843093427 /* GXTEntry: "Using ~1~ will increase your Health XP." */, 1028);
	func_102(241, 185035452 /* GXTEntry: "Using ~1~ will increase your Dead Eye XP." */, 1028);
	func_102(242, -744402065 /* GXTEntry: "Using ~1~ will increase your Stamina XP." */, 1028);
	func_102(243, -97628567 /* GXTEntry: "You cannot gain experience from ~1~ because your Dead Eye is at max level." */, 1028);
	func_102(244, -2007846308 /* GXTEntry: "You cannot gain experience from ~1~ because your Health is at max level." */, 1028);
	func_102(245, 379360587 /* GXTEntry: "You cannot gain experience from ~1~ because your Stamina is at max level." */, 1028);
	func_102(246, 979767353 /* GXTEntry: "Your Health bar has increased. Fist fights, bow shots, fishing and other physical" +
    " strength related activities will increase it further." */, 4);
	func_102(247, 1794940017 /* GXTEntry: "Your Dead Eye bar has increased. Trick shots, hunting, crafting and other surviva" +
    "list related activities will increase it further." */, 4);
	func_102(248, -17930993 /* GXTEntry: "Your Stamina bar has increased. Performing strenuous activities such as sprinting" +
    " or swimming will increase it further." */, 4);
	func_102(249, -1090577349 /* GXTEntry: "Whenever you have money set aside for the gang, you can fund the camp at ~p~~BLIP" +
    "_AMBIENT_TITHING~." */, 4);
	func_102(250, 1523477057 /* GXTEntry: "You have taken a companion\'s request. Some companions will request items, these w" +
    "ill be listed in the camp upgrades sub menu." */, 4);
	func_102(251, -1449348514 /* GXTEntry: "You have a companion\'s requested item. Talk to them to deliver it." */, 4);
	func_102(252, 1194521184 /* GXTEntry: "You have fulfilled a companion\'s request. Come back later for a potential reward." +
    "" */, 4);
	func_102(253, 1624444568 /* GXTEntry: "You have collected a requested item. This item is currently wanted by a camp comp" +
    "anion." */, 4);
	func_102(254, -1899809609 /* GXTEntry: "When you give money to the gang, it raises morale, and the money will be used to " +
    "purchase camp upgrades and supplies." */, 4);
	func_102(255, 2068383985 /* GXTEntry: "Animal carcasses can be dropped off to Pearson at ~BLIP_SHOP_BUTCHER~ to contribu" +
    "te to gang supplies." */, 5);
	func_102(256, -692047840 /* GXTEntry: "Bring Pearson animals to supply the camp. He can use the meat for food and the sk" +
    "ins to craft Satchels with increased capacity." */, 4);
	func_102(257, 584304790 /* GXTEntry: "Bring Pearson animals to supply the camp. He can use the meat for food and the sk" +
    "ins to craft Satchels with increased capacity." */, 4);
	func_102(258, 1007934964 /* GXTEntry: "~s~Go to the map screen ~INPUT_FRONTEND_PAUSE~ and press ~INPUT_FRONTEND_ACCEPT~ " +
    "to add or remove a custom waypoint with a route." */, 5);
	func_102(259, -1770595760 /* GXTEntry: "If a nearby civilian sees or hears something suspicious they may come to investig" +
    "ate. Investigating civilians are marked with a white ~BLIP_AMBIENT_EYEWITNESS~." */, 4);
	func_102(260, -1690981711 /* GXTEntry: "If a witness sees you commit a crime they\'ll be marked with a bright red ~BLIP_AM" +
    "BIENT_EYEWITNESS~. If they report your crime then law will be dispatched to hunt" +
    " you down." */, 4);
	func_102(261, -1143104690 /* GXTEntry: "A witness that hasn\'t seen the criminal is marked with a dark red ~BLIP_AMBIENT_E" +
    "YEWITNESS~. They\'ll report this evidence and law will come to investigate furthe" +
    "r." */, 4);
	func_102(262, -2037426830 /* GXTEntry: "Witnesses can be intimidated into forgetting your crimes. Focus on the witness an" +
    "d press ~INPUT_CONTEXT_Y~ to intimidate." */, 4);
	func_102(265, 329339607 /* GXTEntry: "You are wanted. Fussar\'s Guards are now searching for you." */, 516);
	func_102(266, -562783689 /* GXTEntry: "Evade the guards by escaping from the red search area marked on the radar." */, 516);
	func_102(263, 231450604 /* GXTEntry: "You are wanted. Lawmen are now searching for you." */, 516);
	func_102(264, 904198174 /* GXTEntry: "Evade the law by escaping from the red search area marked on the radar." */, 516);
	func_102(267, 1302525821 /* GXTEntry: "The law cannot see you. If you continue to evade them they will eventually stop l" +
    "ooking for you." */, 516);
	func_102(268, -839870815 /* GXTEntry: "If your crimes aren\'t too severe, lawmen may give you an opportunity to surrender" +
    " peacefully. Focus on the lawman and press ~INPUT_SURRENDER~ to surrender." */, 516);
	func_102(269, -363264000 /* GXTEntry: "Lawmen will become suspicious if you loiter in certain areas for too long. Move a" +
    "long quickly to avoid their attention." */, 4);
	func_102(270, -451327186 /* GXTEntry: "Certain areas are private property. Property owners may report you to the law for" +
    " trespassing." */, 4);
	func_102(271, -771574767 /* GXTEntry: "If lawmen haven\'t identified a suspect you may be able to talk your way out of tr" +
    "ouble. Focus on the lawman and press ~INPUT_INTERACT_LOCKON_POS~ to try to bluff" +
    " your way out." */, 4);
	func_102(274, 926789089 /* GXTEntry: "There is still a bounty on your head. Pay it off at a Post Office ~BLIP_POST_OFFI" +
    "CE~." */, 4);
	func_102(272, 211359492 /* GXTEntry: "Your description has been noted by the law. Make yourself harder to recognize by " +
    "wearing a mask or changing your appearance." */, 4);
	func_102(273, 869869151 /* GXTEntry: "Bounty hunters have tracked you down." */, 516);
	func_102(276, 1531107089 /* GXTEntry: "If you cannot pay for your crimes, you will be held in the jail for a time. When " +
    "you get out, they give you your guns back." */, 4);
	func_102(275, 2067898910 /* GXTEntry: "Your bounty has been cleared now that you\'ve served your time. The sheriff has ta" +
    "ken a portion of your total bounty as punishment." */, 516);
	func_102(277, -1537183144 /* GXTEntry: "When you get arrested, the law will take you to the nearest jail. There you must " +
    "pay for your crimes." */, 4);
	func_102(278, -1753314606 /* GXTEntry: "The law in the area is aware of your past misdeeds and will come down on you more" +
    " harshly." */, 4);
	func_102(279, -976689306 /* GXTEntry: "The law in the area is aware of your grave past and will stop at nothing to bring" +
    " you to justice." */, 4);
	func_102(280, -280551512 /* GXTEntry: "The law in the area is aware of your sterling reputation and is unconcerned with " +
    "stories of uncouth behavior." */, 4);
	func_102(281, 1310626790 /* GXTEntry: "Bounty hunters remember previous crimes you committed in their state. Pay off you" +
    "r bounty at a Post Office ~BLIP_POST_OFFICE~." */, 4);
	func_102(282, -1458426020 /* GXTEntry: "The law are no longer pursuing you, but your crimes won\'t be forgotten. If you ar" +
    "e spotted by a lawman in a red area you will become wanted again." */, 4);
	func_102(283, -1521356354 /* GXTEntry: "Lawmen have posted a bounty on your head. Avoid them, or pay off your bounty at a" +
    " Post Office." */, 4);
	func_102(284, 479362125 /* GXTEntry: "Getting away with a crime while wearing a disguise reduces the law\'s heat on you." +
    "" */, 4);
	func_102(289, -1730471781 /* GXTEntry: "Minor crimes anger the population around you. Instead of going for the law, they " +
    "often come to take it out of your hide." */, 4);
	func_102(477, 934523351 /* GXTEntry: "Until you pay your bounty, bounty hunters will continue to track you down. Telegr" +
    "aph services are located within each Post Office ~BLIP_POST_OFFICE~." */, 4);
	func_102(290, 1246561821 /* GXTEntry: "Come back at a later time to see the upgrades." */, 4);
	func_102(291, 1402143862 /* GXTEntry: "Chores can be performed around camp. Go to the ~BLIP_AMBIENT_CHORE~~s~ to complet" +
    "e the chore." */, 4);
	func_102(544, 1427410966 /* GXTEntry: "When crossing state lines, your bounty and Wanted Level will reflect any crimes y" +
    "ou have committed in the state you just entered." */, 516);
	func_102(545, 842295137 /* GXTEntry: "When you commit crimes in a town or region, it will enter lockdown. Lockdown will" +
    " be lifted once enough time has passed, or you pay your bounty." */, 516);
	func_102(546, 1462654506 /* GXTEntry: "You have committed enough crimes that the town has been locked down. Extra patrol" +
    "s have been posted, and you can no longer use local shops." */, 516);
	func_102(547, 1165537983 /* GXTEntry: "Pay off your bounty at a Post Office or stay away from the area for a while to le" +
    "t the law cool off." */, 516);
	func_102(548, 748924890 /* GXTEntry: "Your presence is not welcome in this area. Keep out of the region to avoid troubl" +
    "e." */, 516);
	func_102(285, 1096551697 /* GXTEntry: "Changing your appearance - including clothes, hair, and facial hair - reduces the" +
    " likelihood of lawmen recognizing you as a criminal." */, 4);
	func_102(286, -1119237950 /* GXTEntry: "Taking down your bounty posters delays posses, marshals, and bounty hunters from " +
    "finding you in the wilderness." */, 4);
	func_102(287, 2075914777 /* GXTEntry: "When arrested, you must serve a jail sentence and pay a fine equal to half your s" +
    "tate bounty. Upon release, your state bounty is cleared." */, 4);
	func_102(288, -217483428 /* GXTEntry: "When broken out of jail, you don\'t have to pay a fine to clear your bounty." */, 516);
	func_102(292, -376517445 /* GXTEntry: "The Camp item is now available for purchase at the General Store. With it you can" +
    " save your game from anywhere in the wilderness." */, 4);
	func_102(293, -381895251 /* GXTEntry: "After settling into Beecher\'s Hope, you can help with the upkeep by pitching in a" +
    "round the ranch." */, 4);
	func_102(294, 923523402, 4);
	func_102(295, -35625228, 4);
	func_102(296, 2022461088 /* GXTEntry: "Honor and character attributes can be increased by partaking in daily chores arou" +
    "nd the camp. These efforts will be recognized by the gang." */, 4);
	func_102(297, -428820254 /* GXTEntry: "Honor and character attributes can be increased by partaking in daily chores arou" +
    "nd the ranch." */, 4);
	func_102(298, 854468693 /* GXTEntry: "~s~To plant a placeable explosive, select it from the Weapon Wheel and place it o" +
    "n the ground with ~INPUT_ATTACK~.~s~" */, 4);
	func_102(299, -1005627854 /* GXTEntry: "Look for Legendary Fish locations throughout the world. Once caught, you can mail" +
    " them to Gill for a nice reward." */, 5);
	func_102(300, -1986558213 /* GXTEntry: "To convince the camper to let you sit down, stand next to him and press ~INPUT_CO" +
    "NTEXT_Y~ to give him whiskey." */, 4);
	func_102(301, -1272081633 /* GXTEntry: "To respond to a camper\'s story,~n~Press ~INPUT_INTERACT_POS~ to respond positivel" +
    "y~n~Press ~INPUT_INTERACT_NEG~ to respond negatively." */, 4);
	func_102(302, GET_HASH_KEY("TF_SP_GANG_HIDEOUTS"), 4);
	func_102(303, -1470773185 /* GXTEntry: "You have discovered a gang camp. Enemy gang camps can be a good source of supplie" +
    "s." */, 4);
	func_102(304, -2003731674 /* GXTEntry: "Expanded rest time options will become available as you acquire upgrades to your " +
    "camp tent." */, 4);
	func_102(305, -414636663 /* GXTEntry: "To sit at the campfire, dismount your horse, and press ~INPUT_CONTEXT_Y~ near an " +
    "open spot to take a seat." */, 0);
	func_102(306, -504736726 /* GXTEntry: "You have already learned this crafting recipe." */, 8);
	func_102(307, -1361844183 /* GXTEntry: "You have learned the Special Horse Medicine recipe." */, 8);
	func_102(308, 868895700 /* GXTEntry: "You have learned the Special Horse Reviver recipe." */, 8);
	func_102(309, 559911112 /* GXTEntry: "You have learned the Horse Ointment recipe." */, 8);
	func_102(310, 1066071363 /* GXTEntry: "You have learned the Special Horse Stimulant recipe." */, 8);
	func_102(311, 1993508052 /* GXTEntry: "You have learned the Horse Meal recipe." */, 8);
	func_102(312, 1996292318 /* GXTEntry: "You have learned the Special Health Cure recipe." */, 8);
	func_102(313, 374801514 /* GXTEntry: "You have learned the Special Bitters recipe." */, 8);
	func_102(314, -658139838 /* GXTEntry: "You have learned the Special Snake Oil recipe." */, 8);
	func_102(315, 423966992 /* GXTEntry: "You have learned the Special Tonic recipe." */, 8);
	func_102(316, -1092683892 /* GXTEntry: "You have learned the Potent Herbivore Bait recipe." */, 8);
	func_102(317, 1662423691 /* GXTEntry: "You have learned the Potent Predator Bait recipe." */, 8);
	func_102(318, 1384456296 /* GXTEntry: "You have learned the Predator Bait recipe." */, 8);
	func_102(319, -1078914282 /* GXTEntry: "You have learned the Cover Scent recipe." */, 8);
	func_102(320, 916440151 /* GXTEntry: "You have learned the Dynamite Arrow recipe." */, 8);
	func_102(321, 1008252 /* GXTEntry: "You have learned the Fire Arrow recipe." */, 8);
	func_102(322, -863697517 /* GXTEntry: "You have learned the Improved Arrow recipe." */, 8);
	func_102(323, -1520658097 /* GXTEntry: "You have learned the Poison Arrow recipe." */, 8);
	func_102(324, 389581591 /* GXTEntry: "You have learned the Small Game Arrow recipe." */, 8);
	func_102(325, -815118364 /* GXTEntry: "You have learned the Volatile Dynamite recipes." */, 8);
	func_102(326, -2081582655 /* GXTEntry: "You have learned the Fire Bottle recipes." */, 8);
	func_102(327, 1163268602 /* GXTEntry: "You have learned the Volatile Fire Bottle recipe." */, 8);
	func_102(328, 1503394588 /* GXTEntry: "You have learned the Homing Tomahawk recipe." */, 8);
	func_102(329, 511709238 /* GXTEntry: "You have learned the Improved Throwing Knife recipe." */, 8);
	func_102(330, -571060537 /* GXTEntry: "You have learned the Improved Tomahawk recipe." */, 8);
	func_102(331, -373743187 /* GXTEntry: "You have learned the Poison Throwing Knife recipe." */, 8);
	func_102(332, 1580384419 /* GXTEntry: "You have learned the Split Point Ammo recipes." */, 8);
	func_102(333, -271256091 /* GXTEntry: "You have learned the Express Explosive Ammo recipes." */, 8);
	func_102(334, -744708298 /* GXTEntry: "You have learned the Incendiary Buckshot Ammo recipe." */, 8);
	func_102(335, 552259871 /* GXTEntry: "You have learned the Explosive Slug Ammo recipe." */, 8);
	func_102(336, 1378118496 /* GXTEntry: "This bait attracts a herbivore from the surrounding area. For best results, drop " +
    "the bait in remote areas, then crouch nearby and remain still." */, 8);
	func_102(337, 1048616093 /* GXTEntry: "This bait attracts a predator from the surrounding area. For best results, drop t" +
    "he bait in remote areas, then crouch nearby and remain still." */, 8);
	func_102(338, 1959042715 /* GXTEntry: "You\'ve discovered a Treasure Map. Open your Satchel to look at the map and solve " +
    "the clues to find the treasure location." */, 13);
	func_102(339, -750056018 /* GXTEntry: "You\'ve discovered a Treasure Map. Solve the clues to find the location on the map" +
    "." */, 12);
	func_102(340, -1207210341 /* GXTEntry: "You can find treasure maps that lead to new treasure chests. Keep an eye out for " +
    "treasure hunters in the wilderness, and treasure maps for sale." */, 12);
	func_102(341, 830154589 /* GXTEntry: "You have discovered the location of ~1~ out of ~2~ dinosaur bones." */, 12);
	func_102(342, 120752336 /* GXTEntry: "You have discovered the location of a dinosaur bone. You can mail the coordinates" +
    " to Deborah MacGuinness from any Post Office." */, 12);
	func_102(343, -311552075 /* GXTEntry: "You have discovered the location of a dinosaur bone. Someone has been spotted sea" +
    "rching for these in the Heartlands region." */, 12);
	func_102(344, -1797702717 /* GXTEntry: "You have discovered all locations of the dinosaur bones and can now mail the rema" +
    "ining coordinates to Deborah MacGuinness from any Post Office." */, 12);
	func_102(345, -1866285071, 12);
	func_102(346, 413422106 /* GXTEntry: "The Scientist has invited you back to her ranch in Cumberland Forest. Please chec" +
    "k the Pause Map in that region for more information." */, 12);
	func_102(347, -1561454178 /* GXTEntry: "The Legendary Fish Collector has invited you back to his shack in the Heartlands." +
    " Please check the Pause Map in that region for more information." */, 12);
	func_102(348, 689307199 /* GXTEntry: "You have discovered the plume from a little egret. Fine goods like these are of i" +
    "nterest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(349, -1806282340 /* GXTEntry: "You have found the plume from a little egret. The Exotics Collector in Saint Deni" +
    "s has been looking for these." */, 12);
	func_102(350, 1053614726 /* GXTEntry: "You have discovered the plume from a reddish egret. Fine goods like these are of " +
    "interest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(351, 888381014 /* GXTEntry: "You have found the plume from a reddish egret. The Exotics Collector in Saint Den" +
    "is has been looking for these." */, 12);
	func_102(352, 107432890 /* GXTEntry: "You have discovered the plume from a snowy egret. Fine goods like these are of in" +
    "terest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(353, -1111734316 /* GXTEntry: "You have found the plume from a snowy egret. The Exotics Collector in Saint Denis" +
    " has been looking for these." */, 12);
	func_102(354, 1901901467 /* GXTEntry: "You have discovered the feather from a heron. Fine goods like these are of intere" +
    "st to collectors who can be found in the nicer parts of town." */, 12);
	func_102(355, 1075202719 /* GXTEntry: "You have found the feather from a heron. The Exotics Collector in Saint Denis has" +
    " been looking for these." */, 12);
	func_102(356, 1621225785 /* GXTEntry: "You have discovered the feather from a roseate spoonbill. Fine goods like these a" +
    "re of interest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(357, -742698155 /* GXTEntry: "You have found the feather from a roseate spoonbill. The Exotics Collector in Sai" +
    "nt Denis has been looking for these." */, 12);
	func_102(358, -25905133 /* GXTEntry: "You have found everything on the list from the Exotics Collector. Visit him in Sa" +
    "int Denis." */, 12);
	func_102(359, -1664137180 /* GXTEntry: "You have discovered a gator egg. Fine goods like these are of interest to collect" +
    "ors who can be found in the nicer parts of town." */, 12);
	func_102(360, 1729562527 /* GXTEntry: "You have discovered a gator egg. The Exotics Collector in Saint Denis has been lo" +
    "oking for these." */, 12);
	func_102(361, 970343313 /* GXTEntry: "You have found a gator egg. The Exotics Collector in Saint Denis has been looking" +
    " for these." */, 12);
	func_102(362, -478447865 /* GXTEntry: "You have caught a legendary fish. A man living along the coast of Flat Iron Lake " +
    "has been looking for these." */, 12);
	func_102(363, -712121287 /* GXTEntry: "~s~You have caught a legendary fish. Take it to the Post Office ~BLIP_POST_OFFICE" +
    "~ to send to Jeremy Gill.~s~" */, 12);
	func_102(364, GET_HASH_KEY("TF_LEGENDARY_FISH_MAILED_ONE"), 12);
	func_102(365, GET_HASH_KEY("TF_LEGENDARY_FISH_MAILED_TEN"), 12);
	func_102(366, GET_HASH_KEY("TF_LEGENDARY_FISH_MAILED_ALL"), 12);
	func_102(367, GET_HASH_KEY("TF_DINO_BONE_MAILED_ONE"), 12);
	func_102(368, GET_HASH_KEY("TF_DINO_BONE_MAILED_FIFTEEN"), 12);
	func_102(369, GET_HASH_KEY("TF_DINO_BONE_MAILED_ALL"), 12);
	func_102(370, GET_HASH_KEY("TF_ROCK_CARVING_MAILED_ONE"), 12);
	func_102(371, GET_HASH_KEY("TF_ROCK_CARVING_MAILED_FIVE"), 12);
	func_102(372, GET_HASH_KEY("TF_ROCK_CARVING_MAILED_ALL"), 12);
	func_102(373, GET_HASH_KEY("TF_TAXIDERMY_MAILED_ONE"), 12);
	func_102(374, GET_HASH_KEY("TF_TAXIDERMY_MAILED_TWO"), 12);
	func_102(375, GET_HASH_KEY("TF_TAXIDERMY_MAILED_THREE"), 12);
	func_102(376, GET_HASH_KEY("TF_TAXIDERMY_MAILED_FOUR"), 12);
	func_102(377, 1467621484 /* GXTEntry: "~s~All orders to obtain animal parts have been filled. Check back to any Post Off" +
    "ice ~BLIP_POST_OFFICE~ in the next couple of days.~s~" */, 12);
	func_102(378, 1935973298 /* GXTEntry: "~s~You have discovered a Legendary Fish location. Go to ~BLIP_RC~ to speak to the" +
    " fish collector.~s~" */, 12);
	func_102(379, GET_HASH_KEY("TF_RARE_FISHING_SPOT_FOUND_NO_POLE"), 12);
	func_102(380, 754746483 /* GXTEntry: "You discovered the location of a Legendary Fish. Someone living near Flat Iron La" +
    "ke is known for their interest in fish." */, 12);
	func_102(381, 700674893 /* GXTEntry: "You have found an Acuna\'s Star orchid. The Exotics Collector in Saint Denis has b" +
    "een looking for these." */, 12);
	func_102(382, 622132109 /* GXTEntry: "You have found a Cigar orchid. The Exotics Collector in Saint Denis has been look" +
    "ing for these." */, 12);
	func_102(383, 1850845847 /* GXTEntry: "You have found a Clamshell orchid. The Exotics Collector in Saint Denis has been " +
    "looking for these." */, 12);
	func_102(384, 1898040470 /* GXTEntry: "You have found a Dragon\'s Mouth orchid. The Exotics Collector in Saint Denis has " +
    "been looking for these." */, 12);
	func_102(390, 597254123 /* GXTEntry: "You have found a Queen\'s orchid. The Exotics Collector in Saint Denis has been lo" +
    "oking for these." */, 12);
	func_102(386, 2088680135 /* GXTEntry: "You have found a Lady Slipper orchid. The Exotics Collector in Saint Denis has be" +
    "en looking for these." */, 12);
	func_102(387, -1419809142 /* GXTEntry: "You have found a Lady of the Night orchid. The Exotics Collector in Saint Denis h" +
    "as been looking for these." */, 12);
	func_102(385, 1902211699 /* GXTEntry: "You have found a Ghost orchid. The Exotics Collector in Saint Denis has been look" +
    "ing for these." */, 12);
	func_102(388, -1776248175 /* GXTEntry: "You have found a Moccasin Flower orchid. The Exotics Collector in Saint Denis has" +
    " been looking for these." */, 12);
	func_102(389, 615491862 /* GXTEntry: "You have found a Night Scented orchid. The Exotics Collector in Saint Denis has b" +
    "een looking for these." */, 12);
	func_102(391, -2061650310 /* GXTEntry: "You have found a Rat Tail orchid. The Exotics Collector in Saint Denis has been l" +
    "ooking for these." */, 12);
	func_102(392, 1598599287 /* GXTEntry: "You have found a Sparrow\'s Egg orchid. The Exotics Collector in Saint Denis has b" +
    "een looking for these." */, 12);
	func_102(393, -1384768670 /* GXTEntry: "You have found a Spider\'s orchid. The Exotics Collector in Saint Denis has been l" +
    "ooking for these." */, 12);
	func_102(394, -1263260445 /* GXTEntry: "You have discovered the Acuna\'s Star orchid. Fine goods like these are of interes" +
    "t to collectors who can be found in the nicer parts of town." */, 12);
	func_102(395, -681745701 /* GXTEntry: "You have discovered the Cigar orchid. Fine goods like these are of interest to co" +
    "llectors who can be found in the nicer parts of town." */, 12);
	func_102(396, 1673076308 /* GXTEntry: "You have discovered the Clamshell orchid. Fine goods like these are of interest t" +
    "o collectors who can be found in the nicer parts of town." */, 12);
	func_102(397, 1333248783 /* GXTEntry: "You have discovered the Dragon\'s Mouth orchid. Fine goods like these are of inter" +
    "est to collectors who can be found in the nicer parts of town." */, 12);
	func_102(403, 1971122678 /* GXTEntry: "You have discovered the Queen\'s orchid. Fine goods like these are of interest to " +
    "collectors who can be found in the nicer parts of town." */, 12);
	func_102(399, -1283711700 /* GXTEntry: "You have discovered the Lady Slipper orchid. Fine goods like these are of interes" +
    "t to collectors who can be found in the nicer parts of town." */, 12);
	func_102(400, -411588657 /* GXTEntry: "You have discovered the Lady of the Night orchid. Fine goods like these are of in" +
    "terest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(398, 1640529993 /* GXTEntry: "You have discovered the Ghost orchid. Fine goods like these are of interest to co" +
    "llectors who can be found in the nicer parts of town." */, 12);
	func_102(401, 344731596 /* GXTEntry: "You have discovered the Moccasin Flower orchid. Fine goods like these are of inte" +
    "rest to collectors who can be found in the nicer parts of town." */, 12);
	func_102(402, 535128630 /* GXTEntry: "You have discovered the Night Scented orchid. Fine goods like these are of intere" +
    "st to collectors who can be found in the nicer parts of town." */, 12);
	func_102(404, 942375749 /* GXTEntry: "You have discovered the Rat Tail orchid. Fine goods like these are of interest to" +
    " collectors who can be found in the nicer parts of town." */, 12);
	func_102(405, 866158837 /* GXTEntry: "You have discovered the Sparrow\'s Egg orchid. Fine goods like these are of intere" +
    "st to collectors who can be found in the nicer parts of town." */, 12);
	func_102(406, -732669044 /* GXTEntry: "You have discovered the Spider\'s orchid. Fine goods like these are of interest to" +
    " collectors who can be found in the nicer parts of town." */, 12);
	func_102(407, -650519405 /* GXTEntry: "You have discovered the location of ~1~ out of ~2~ rock carvings." */, 12);
	func_102(408, 2129621514, 12);
	func_102(409, 1236700945 /* GXTEntry: "You have discovered the location of the first rock carving. You can mail the coor" +
    "dinates to Francis Sinclair from any Post Office." */, 12);
	func_102(410, 1370981391 /* GXTEntry: "You have discovered the location of the first rock carving. Someone has been spot" +
    "ted searching for these near Strawberry in Big Valley." */, 12);
	func_102(411, -1254074275 /* GXTEntry: "You have discovered all locations of the rock carvings and can now mail the remai" +
    "ning coordinates to Francis Sinclair from any Post Office." */, 12);
	func_102(412, -1188874649 /* GXTEntry: "Now that you have found all the rock carvings, Francis Sinclair has invited you t" +
    "o his homestead near Strawberry." */, 12);
	func_102(413, 1598712949 /* GXTEntry: "The Taxidermist has invited you to his house to see his completed work." */, 12);
	func_102(414, GET_HASH_KEY("TF_LEGEND_OF_EAST_OUTFIT_UNLOCKED"), 12);
	func_102(415, -1354674126 /* GXTEntry: "The Legend of the East outfit bestows multiple benefits, including increasing the" +
    " range of Eagle Eye and decreasing your Health Core drain rate." */, 12);
	func_102(416, -1530394161 /* GXTEntry: "Go to any Gunsmith shop to buy the bandolier and gunbelt equipment so you can hol" +
    "d more ammunition. Completing challenges will allow you to upgrade them." */, 12);
	func_102(417, -989610486 /* GXTEntry: "You have acquired the perfect carcass of a Rabbit. The Taxidermist that lives nea" +
    "r Strawberry has been looking for these." */, 12);
	func_102(418, 742807149 /* GXTEntry: "You have acquired the perfect carcass of a Squirrel. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(419, -2133920725 /* GXTEntry: "You have acquired the perfect carcass of a Cardinal. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(420, 1553996704 /* GXTEntry: "You have acquired the perfect carcass of a Rat. The Taxidermist that lives near S" +
    "trawberry has been looking for these." */, 12);
	func_102(421, 1732430723 /* GXTEntry: "You have acquired the perfect carcass of a Woodpecker. The Taxidermist that lives" +
    " near Strawberry has been looking for these." */, 12);
	func_102(422, 1473826052 /* GXTEntry: "You have acquired the perfect carcass of a Chipmunk. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(423, -34067420 /* GXTEntry: "You have acquired the perfect carcass of an Opossum. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(424, -29199894 /* GXTEntry: "You have acquired the perfect carcass of an Oriole. The Taxidermist that lives ne" +
    "ar Strawberry has been looking for these." */, 12);
	func_102(425, 1585726424 /* GXTEntry: "You have acquired the perfect carcass of a Robin. The Taxidermist that lives near" +
    " Strawberry has been looking for these." */, 12);
	func_102(426, -1379597176 /* GXTEntry: "You have acquired the perfect carcass of a Songbird. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(427, 513661771 /* GXTEntry: "You have acquired the perfect carcass of a Sparrow. The Taxidermist that lives ne" +
    "ar Strawberry has been looking for these." */, 12);
	func_102(428, 1175101656 /* GXTEntry: "You have acquired the perfect carcass of a Toad. The Taxidermist that lives near " +
    "Strawberry has been looking for these." */, 12);
	func_102(429, 1747774401 /* GXTEntry: "You have acquired the perfect carcass of a Skunk. The Taxidermist that lives near" +
    " Strawberry has been looking for these." */, 12);
	func_102(430, -1848239712 /* GXTEntry: "You have acquired the perfect carcass of a Bullfrog. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(431, 1761032615 /* GXTEntry: "You have acquired the perfect carcass of a Cedar Waxwing. The Taxidermist that li" +
    "ves near Strawberry has been looking for these." */, 12);
	func_102(432, -180697003 /* GXTEntry: "You have acquired the perfect carcass of a Bat. The Taxidermist that lives near S" +
    "trawberry has been looking for these." */, 12);
	func_102(433, 609648029 /* GXTEntry: "You have acquired the perfect carcass of a Blue Jay. The Taxidermist that lives n" +
    "ear Strawberry has been looking for these." */, 12);
	func_102(434, -1652586024 /* GXTEntry: "You have acquired the perfect carcass of a Crow. The Taxidermist that lives near " +
    "Strawberry has been looking for these." */, 12);
	func_102(435, -1248948810 /* GXTEntry: "You have acquired the perfect carcass of a Beaver. The Taxidermist that lives nea" +
    "r Strawberry has been looking for these." */, 12);
	func_102(436, 1387759490 /* GXTEntry: "You have acquired all of the animal pelts that the Taxidermist needs for the orde" +
    "r. These items can be mailed directly from any Post Office." */, 12);
	func_102(437, 1025931364 /* GXTEntry: "Mail the requested animals at a Post Office. To get small animal carcasses, you\'l" +
    "l need to use a Small Game arrow or the Varmint Rifle." */, 12);
	func_102(438, 564871348 /* GXTEntry: "You\'ve received the last order to obtain animal parts." */, 12);
	func_102(439, -1281191843 /* GXTEntry: "You\'ve received another order to obtain animal parts." */, 12);
	func_102(440, 282800835 /* GXTEntry: "The Varmint Rifle can be purchased at any Gunsmith. Use Crafting Tools or set up " +
    "a camp to make Small Game Arrows." */, 12);
	func_102(441, -652778061 /* GXTEntry: "You can track your Challenge progress by tapping ~INPUT_PLAYER_MENU~ to open the " +
    "Log." */, 12);
	func_102(442, -1892417555 /* GXTEntry: "You can track your Challenge progress by tapping ~INPUT_PLAYER_MENU~ to open the " +
    "Log." */, 12);
	func_102(443, 212443252 /* GXTEntry: "You have unlocked new Challenges. Check your Log for more information." */, 13);
	func_102(444, 1764583115 /* GXTEntry: "You have unlocked the Bandit Challenge. Check your Log for more information." */, 13);
	func_102(445, -669584681 /* GXTEntry: "You have unlocked the Explorer Challenge. Check your Log for more information." */, 13);
	func_102(446, 1534464445 /* GXTEntry: "You have unlocked the Gambler Challenge. Check your Log for more information." */, 13);
	func_102(447, -2973651 /* GXTEntry: "You have unlocked the Herbalist Challenge. Check your Log for more information." */, 13);
	func_102(448, 9538750 /* GXTEntry: "You have unlocked the Horseman Challenge. Check your Log for more information." */, 13);
	func_102(449, 1035665367 /* GXTEntry: "You have unlocked the Master Hunter Challenge. Check your Log for more informatio" +
    "n." */, 13);
	func_102(450, -1038247998 /* GXTEntry: "You have unlocked the Sharpshooter Challenge. Check your Log for more information" +
    "." */, 13);
	func_102(451, 687504463 /* GXTEntry: "You have unlocked the Survivalist Challenge. Check your Log for more information." +
    "" */, 13);
	func_102(452, -1139541693 /* GXTEntry: "You have unlocked the Weapons Expert Challenge. Check your Log for more informati" +
    "on." */, 13);
	func_102(453, 1263252909 /* GXTEntry: "You have unlocked new reinforced equipment at the Trapper. Visit Pearson for info" +
    "rmation about the Trapper." */, 12);
	func_102(454, 489659542 /* GXTEntry: "You have unlocked new reinforced equipment at the Trapper." */, 12);
	func_102(455, 475429548 /* GXTEntry: "By obtaining this full set of reinforced equipment, you have permanently increase" +
    "d your Health bar by 1 tank." */, 8);
	func_102(456, 97482151 /* GXTEntry: "By obtaining this full set of reinforced equipment, you have permanently increase" +
    "d your Stamina bar by 1 tank." */, 8);
	func_102(457, -1963976206 /* GXTEntry: "By obtaining this full set of reinforced equipment, you have permanently increase" +
    "d your Dead Eye bar by 1 tank." */, 8);
	func_102(458, -909262152 /* GXTEntry: "~s~You have been asked by the Foreman at Castor\'s Ridge to provide wood. You will" +
    " be rewarded if you deliver this wagon to the worksite.~s~" */, 12);
	func_102(459, 1000235946 /* GXTEntry: "~s~This wagon has lost too much lumber to return to Castor\'s Ridge.~s~" */, 12);
	func_102(460, 1715283973 /* GXTEntry: "~1~ Progress Menu entry added. Check the Dutch\'s Gang section for more informatio" +
    "n." */, 1032);
	func_102(461, 671494356 /* GXTEntry: "~1~ Progress Menu entry updated. Check the Dutch\'s Gang section for more informat" +
    "ion." */, 1032);
	func_102(462, 615838792 /* GXTEntry: "You have skinned a new animal type: ~1~." */, 1032);
	func_102(463, -408469321 /* GXTEntry: "You have plucked a new animal type: ~1~." */, 1032);
	func_102(464, 1970236789 /* GXTEntry: "When skinning an animal, you also take meat from the carcass. Set up your camp to" +
    " cook this meat." */, 65536);
	func_102(465, 821861942 /* GXTEntry: "Cooking a carried animal will only reward you with meat." */, 4);
	func_102(466, 2018900854 /* GXTEntry: "You have killed a Legendary Animal. Sell the pelt to the Trapper ~BLIP_SHOP_ANIMA" +
    "L_TRAPPER~ who can then craft it in to a unique outfit." */, 5);
	func_102(467, -660473096 /* GXTEntry: "You abandoned your Legendary Animal. Visit the nearest Fence and Trapper to acces" +
    "s the quality parts and pelt for crafting." */, 5);
	func_102(468, 1368298322 /* GXTEntry: "To put on the bandana, press and hold ~INPUT_OPEN_WHEEL_MENU~, then press ~INPUT_" +
    "SELECT_NEXT_WHEEL~. Select the bandana item with ~INPUTGROUP_RADIAL_MENU_NAV~ to" +
    " toggle the bandana disguise." */, 4);
	func_102(470, 1222713470 /* GXTEntry: "To take off the bandana, press and hold ~INPUT_OPEN_WHEEL_MENU~, then press ~INPU" +
    "T_SELECT_NEXT_WHEEL~. Select the bandana item with ~INPUTGROUP_RADIAL_MENU_NAV~ " +
    "to toggle the bandana disguise." */, 4);
	func_102(471, -292534915 /* GXTEntry: "Take the property sales document to the location owner (marked with ~BLIP_PROC_HO" +
    "ME_KEY~) to complete the property purchase." */, 0);
	func_102(472, 358418309 /* GXTEntry: "To equip your Binoculars, open the Item Wheel and page through the items in the K" +
    "it slot by pressing ~INPUT_RADIAL_MENU_SLOT_NAV_PREV~ or ~INPUT_RADIAL_MENU_SLOT" +
    "_NAV_NEXT~." */, 4);
	func_102(473, -1174847606 /* GXTEntry: "Hold ~INPUT_AIM~ to aim the binoculars in the direction you wish to look." */, 4);
	func_102(474, 312859304 /* GXTEntry: "Use ~INPUT_SNIPER_ZOOM~ to zoom in and out." */, 5);
	func_102(475, 1960454965 /* GXTEntry: "Press ~INPUT_CONTEXT_Y~ to select a location to fast travel to." */, 4);
	func_102(476, 1999760871 /* GXTEntry: "The resources needed to travel across the region are presented as a monetary cost" +
    ". The longer the distance, the higher the price." */, 4);
	func_102(478, -1788636233 /* GXTEntry: "Hold ~INPUT_SPRINT~ to follow your companions." */, 4);
	func_102(479, 1835807439 /* GXTEntry: "To use placed dynamite, hold ~INPUT_AIM~ to aim at the intended location. When cl" +
    "ose, press ~INPUT_ATTACK~ to place the dynamite." */, 4);
	func_102(480, 1785312833 /* GXTEntry: "You are now carrying your purchased weapon(s). Your previous firearms have been s" +
    "towed on your horse." */, 68);
	func_102(481, 1760169707 /* GXTEntry: "When aiming a weapon with a scope attached, use ~INPUT_TOGGLE_WEAPON_SCOPE~ to to" +
    "ggle scope view." */, 5);
	func_102(482, -1159772199 /* GXTEntry: "You found a Cigarette Card. Some hobbyists consider these cards to be valuable co" +
    "llector\'s items. Keep an eye out for more." */, 128);
	func_102(483, 1601895762 /* GXTEntry: "You found a Cigarette Card. Once all cards in a set have been located, you can ma" +
    "il the set to Phineas T. Ramsbottom from any Post Office." */, 128);
	func_102(484, -1684535486 /* GXTEntry: "You\'ve picked up an opened item. Opened items provide half the benefits of new it" +
    "ems." */, 4);
	func_102(485, 1326949609 /* GXTEntry: "You\'ve obtained a Premium Cigarette Pack. Each Premium Cigarette Pack contains a " +
    "collectable Cigarette Card within." */, 4);
	func_102(487, -904526984 /* GXTEntry: "You\'ve picked up Coffee. Brew it at your camp to restore your Dead Eye Core and S" +
    "tamina Core." */, 4);
	func_102(486, 2104273923 /* GXTEntry: "You have picked up Gun Oil which can be used to improve the condition of your wea" +
    "pons. Select a gun in the Weapon Wheel, then press ~INPUT_QUICK_SELECT_INSPECT~ " +
    "to maintain it." */, 4);
	func_102(488, -1931970597 /* GXTEntry: "You\'ve picked up Hair Tonic. Use it to accelerate the growth of your hair." */, 4);
	func_102(489, -1829471519 /* GXTEntry: "Your beard won\'t grow any longer unless you use Hair Tonic. Each use of Hair Toni" +
    "c will allow your beard to grow a little bit longer." */, 4);
	func_102(490, 1818962879 /* GXTEntry: "Hair Tonic has worn off." */, 4);
	func_102(491, 1367171656 /* GXTEntry: "You\'ve picked up Pomade. Use it to grease your hair." */, 4);
	func_102(492, 53603274 /* GXTEntry: "Pomade has worn off." */, 4);
	func_102(493, -1110615762 /* GXTEntry: "Your beard is getting long. You can use the shaving kit beside your tent or visit" +
    " a Barber Shop to maintain your facial hair." */, 4);
	func_102(494, -768196698 /* GXTEntry: "You have just consumed a meal of seasoned meat. This will greatly delay the onset" +
    " of hunger." */, 4);
	func_102(495, 1092157679, 4);
	func_102(496, 605594785 /* GXTEntry: "You\'ve picked up a Coffee Percolator. Use it at your camp to brew Coffee." */, 4);
	func_102(497, 107216183 /* GXTEntry: "You can only use this item while camped." */, 4);
	func_102(498, 44718251 /* GXTEntry: "You\'ve picked up a Valuable. You can use Valuables in crafting, sell them to a Fe" +
    "nce or donate them to the camp funds." */, 4);
	func_102(499, 1178446450 /* GXTEntry: "You can rob any shop by aiming your gun at the clerk." */, 4);
	func_102(500, -1482023523, 4);
	func_102(528, -938630534 /* GXTEntry: "You will receive a discount at this shop because of your high honor." */, 132);
	func_102(529, -1492841353 /* GXTEntry: "You can now sell stolen horses to the auction manager at Valentine while not busy" +
    " with other activities." */, 4);
	func_102(530, -888771407 /* GXTEntry: "You can sell this horse at the Valentine auction yard." */, 4);
	func_102(531, -726690250 /* GXTEntry: "A companion activity is available in camp. Talk to companions marked on your map " +
    "to join in." */, 4);
	func_102(532, 494770882 /* GXTEntry: "Your bonus Bank Robbery mission is available at ~BLIP_ROBBERY_BANK~." */, 4);
	func_102(533, 423259730 /* GXTEntry: "You are unable to ride your horse in camp." */, 5);
	func_102(534, 382417452 /* GXTEntry: "You are unable to bring wagons into camp. They will be available again when you l" +
    "eave." */, 5);
	func_102(535, -960396333 /* GXTEntry: "You are unable to bring dead humans into camp." */, 5);
	func_102(536, -1331259017 /* GXTEntry: "You are unable to bring prisoners into camp." */, 5);
	func_102(537, -45968461 /* GXTEntry: "Your gang\'s camp is shown by ~BLIP_CAMP~ on the map." */, 4);
	func_102(538, 1314256397 /* GXTEntry: "Ammo ~BLIP_SUPPLIES_AMMO~, Provisions ~BLIP_SUPPLIES_FOOD~ and Health supplies ~B" +
    "LIP_SUPPLIES_HEALTH~ can be found around camp. The current stock levels are show" +
    "n when near the Tithing Box." */, 4);
	func_102(539, -316486779 /* GXTEntry: "The gang are celebrating the safe return of Sean and will be unavailable for othe" +
    "r activities for a while." */, 5);
	func_102(540, 819078787 /* GXTEntry: "The gang are celebrating the safe return of Jack and will be unavailable for othe" +
    "r activities for a while." */, 5);
	func_102(550, -281500653 /* GXTEntry: "Each day, Pearson will make stew, which you can eat from the pot at ~BLIP_GRUB~" */, 4);
	func_102(551, -59149683 /* GXTEntry: "The stew is currently being prepared. Check again after noon." */, 4);
	func_102(552, -1360245176 /* GXTEntry: "You\'ve eaten stew recently, try again later." */, 4);
	func_102(553, -583640217 /* GXTEntry: "When you grab a bowl of stew you\'ll need to wait a few days before being able to " +
    "grab another." */, 4);
	func_102(557, 1151299477 /* GXTEntry: "If you haven\'t taken a bath for a while, Miss Grimshaw will insist that you wash " +
    "yourself." */, 4);
	func_102(541, -1449538839 /* GXTEntry: "Your recent actions have attracted the attention of the law. Leave the area befor" +
    "e they can find you." */, 580);
	func_102(542, 970874492 /* GXTEntry: "Your recent actions have attracted the attention of the Fussar\'s guards. Leave th" +
    "e area before they can find you." */, 580);
	func_102(543, -1902016335, 580);
	func_102(549, 876207536 /* GXTEntry: "Any bodies found will be reported and lawmen dispatched to investigate. Hide or d" +
    "ispose of bodies to avoid unwanted attention." */, 68);
	func_102(554, -458935376 /* GXTEntry: "Buy a district camp map to discover unknown camp sites." */, 4);
	func_102(558, -1454291508 /* GXTEntry: "You will need to drop what you\'re carrying in order to perform certain actions." */, 0);
	func_102(559, -189560664 /* GXTEntry: "Herd animals by moving behind the group to encourage them in the desired directio" +
    "n." */, 5);
	func_102(560, -629386182 /* GXTEntry: "Shout at the herd by holding ~INPUT_INTERACT_LOCKON~ and pressing ~INPUT_INTERACT" +
    "_LOCKON_NEG~ to make them move faster." */, 5);
	func_102(561, 783296342 /* GXTEntry: "Shout at the herd by pressing ~INPUT_INTERACT_LOCKON~, and then ~INPUT_INTERACT_L" +
    "OCKON_NEG~ to make them move faster." */, 5);
	func_102(562, -866797587 /* GXTEntry: "While aiming a gun, point it in the air by pressing ~INPUT_AIM_IN_AIR~ and shoot " +
    "to make the herd move faster." */, 5);
	func_102(563, -1173417120 /* GXTEntry: "Try to maintain a constant speed behind the animals. Some animals are naturally s" +
    "lower and you should match their speed to avoid trampling them." */, 5);
	func_102(564, -1937311304 /* GXTEntry: "An animal may break away from the group or be left behind. They will turn into a " +
    "~o~straggler~s~ and no longer move with the rest of the group." */, 5);
	func_102(565, 1917109556 /* GXTEntry: "To round up stragglers, you can shout at or ride close to them to encourage them " +
    "back towards the group." */, 5);
	func_102(567, -758436435 /* GXTEntry: "Rhodes and the surrounding area are now in lockdown. Remaining lawmen in the area" +
    " will be looking for you." */, 5);
	func_102(568, 1771247710 /* GXTEntry: "You have acquired a Gold Ingot. It can be sold at any fence for a large profit." */, 5);
	func_102(569, -1489191516 /* GXTEntry: "To change the camera distance and perspective press ~INPUT_NEXT_CAMERA~." */, 5);
	func_102(566, -1644813909 /* GXTEntry: "The Badger Claw Trinket will prevent Dead Eye from draining for up to ten seconds" +
    " or until you shoot." */, 4);
	func_102(570, -1768696225 /* GXTEntry: "Multiple missions are available in camp. These are shown as ~1b~ on the radar." */, 1028);
	func_102(571, -647510190 /* GXTEntry: "Press ~INPUT_NEXT_CAMERA~ to toggle between first and third person views." */, 4);
	func_102(572, 1354876753 /* GXTEntry: "You gained honor as you captured the bounty and brought him to jail." */, 1028);
	func_102(573, -956226118 /* GXTEntry: "Sometimes you will get a choice to help a companion or not. Your decision will af" +
    "fect your Honor Level." */, 1028);
	func_102(574, -1980846656 /* GXTEntry: "You chose not to help Mary Linton. Your Honor Level will increase or decrease dep" +
    "ending on whether you choose to help companions or not." */, 1028);
	func_102(575, -27462829 /* GXTEntry: "Your honor increased as you returned Jamie to Mary." */, 1028);
	func_102(576, -1596380617, 1028);
	func_102(577, -1669705514 /* GXTEntry: "Your honor increased as you decided to spare Anthony Foreman." */, 1028);
	func_102(578, -863406233 /* GXTEntry: "Your honor decreased as you decided to kill Anthony Foreman." */, 1028);
	func_102(579, -2000372153 /* GXTEntry: "An optional mission is now available ~1b~. Completing them can be a way to gain h" +
    "onor." */, 1092);
	func_102(580, -1677384704 /* GXTEntry: "You have applied Cover Scent to yourself. This blocks your scent for a limited pe" +
    "riod, allowing you to approach animals without them smelling you." */, 65536);
	func_102(581, 1403704658 /* GXTEntry: "The effects of your Cover Scent have worn off. Stay down wind of animals you are " +
    "hunting so they have less chance of detecting you via smell." */, 65536);
	func_102(582, 2082745666 /* GXTEntry: "You cannot stow all looted items as your Satchel is full. Pearson can craft Satch" +
    "els with increased capacity." */, 0);
	func_102(584, 2082745666 /* GXTEntry: "You cannot stow all looted items as your Satchel is full. Pearson can craft Satch" +
    "els with increased capacity." */, 65536);
	func_102(583, 1780796148 /* GXTEntry: "You cannot harvest all of this animal\'s parts, as you have no space to stow them." +
    " Open your Satchel and make space by pressing ~INPUT_GAME_MENU_OPTION~ to discar" +
    "d unwanted items." */, 0);
	func_102(585, -1459293189 /* GXTEntry: "Your Dead Eye is too low. Open the Item Wheel by holding ~INPUT_OPEN_WHEEL_MENU~ " +
    "then pressing ~INPUT_SELECT_NEXT_WHEEL~ and consume a Dead Eye tonic to refill i" +
    "t." */, 98821);
	func_102(586, -725743520 /* GXTEntry: "Your Dead Eye ability has improved. You can now manually tag targets in Dead Eye " +
    "with ~INPUT_SPECIAL_ABILITY_ACTION~." */, 4);
	func_102(587, -1022696190 /* GXTEntry: "Your Dead Eye ability has improved. You will now remain in Dead Eye when you fire" +
    " your weapon if you have not tagged a target." */, 4);
	func_102(588, 198899353 /* GXTEntry: "Your Dead Eye ability has improved. Fatal areas will now be highlighted while you" +
    " are in Dead Eye." */, 4);
	func_102(589, -106868186 /* GXTEntry: "Your Dead Eye ability has improved. Critical areas will now also be highlighted w" +
    "hile you are in Dead Eye." */, 4);
	func_102(590, -573686971 /* GXTEntry: "You can now manually tag targets in Dead Eye with ~INPUT_SPECIAL_ABILITY_ACTION~." +
    "" */, 4);
	func_102(591, -1626499362 /* GXTEntry: "You will now remain in Dead Eye when you fire your weapon if you do not have a ta" +
    "rget tagged." */, 4);
	func_102(592, 1571811637 /* GXTEntry: "Fatal areas will now be highlighted while you are in Dead Eye." */, 4);
	func_102(593, 1279507001 /* GXTEntry: "Critical areas will now also be highlighted while you are in Dead Eye." */, 4);
	func_102(594, -1882496981 /* GXTEntry: "Fortify Bar" */, 492544);
	func_102(595, 2010127730 /* GXTEntry: "Fortify Core" */, 492544);
	func_102(596, -1707737945 /* GXTEntry: "Mission blips covering a large area have to be searched to find your companion\'s " +
    "location." */, 4);
	func_102(600, 1191776810 /* GXTEntry: "You can view, manage and share photos by accessing the Social area from the Pause" +
    " menu or by selecting View Photos when the camera is equipped." */, 8192);
	func_102(601, GET_HASH_KEY("TF_KIT_CAMP"), 4);
	func_102(597, GET_HASH_KEY("TF_ALT_AMMO"), 98308);
	func_102(598, -63569106 /* GXTEntry: "When using the Compass you can press ~INPUT_SELECT_RADAR_MODE~ to briefly display" +
    " the full Radar again." */, 1);
	func_102(599, -38169362 /* GXTEntry: "With the Radar turned off you can press ~INPUT_SELECT_RADAR_MODE~ to briefly disp" +
    "lay it again." */, 1);
	func_102(602, 86033522 /* GXTEntry: "Plants and Herbs that you can pick will be highlighted in Eagle Eye. You can use " +
    "herbs as ingredients in crafting recipes." */, 98308);
	func_102(603, -958136213 /* GXTEntry: "You can temporarily store one unbonded horse by hitching it in camp." */, 4);
	func_102(604, -1800046437 /* GXTEntry: "An unbonded horse is already hitched at camp. Hitching this new horse will cause " +
    "the previous horse to be lost." */, 4);
	func_102(605, -1282453027 /* GXTEntry: "You can craft items at the crafting fire near the edge of camp." */, 4);
	func_102(606, 486059546 /* GXTEntry: "You can craft items at the main camp fire." */, 4);
	func_102(608, 668424118 /* GXTEntry: "Missions and activities can lock and become unavailable when you are wanted by th" +
    "e law or bounty hunters." */, 4);
	func_102(607, -662684443 /* GXTEntry: "Study and track animals through your Binoculars by holding ~INPUT_INTERACT_LOCKON" +
    "_STUDY_BINOCULARS~ while looking at them." */, 4);
	func_102(611, GET_HASH_KEY("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES"), 4);
	func_102(612, GET_HASH_KEY("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD"), 4);
	func_102(613, -1474564683 /* GXTEntry: "You cannot leave animal corpses to rot in camp." */, 4);
	func_102(614, 484684935 /* GXTEntry: "You cannot leave animal corpses to rot at the ranch." */, 4);
	func_102(615, 128830014 /* GXTEntry: "Items dropped in camp will always be left in a convenient location. Hunted animal" +
    " carcasses and parts can be handed in at Pearson\'s butcher counter." */, 5);
	func_102(616, 183722917 /* GXTEntry: "Items dropped in camp will always be left in a convenient location." */, 5);
	func_102(617, 948386188 /* GXTEntry: "Items dropped on the ranch will always be left in a convenient location." */, 5);
	func_102(609, GET_HASH_KEY("TF_AIM_AMBUSH"), 4);
	func_102(610, -1920992599 /* GXTEntry: "When being robbed, focus on the attacker and press ~INPUT_SURRENDER~ to surrender" +
    "." */, 32772);
	func_102(618, 2821915 /* GXTEntry: "Your Familiarity with a weapon has increased. As you use different weapons certai" +
    "n stats will improve. View your current Familiarity level with discovered weapon" +
    "s in the Compendium." */, 4);
	func_102(620, 1943562780 /* GXTEntry: "New horses are available to purchase in the Valentine, Scarlett Meadows and Straw" +
    "berry stables." */, 5);
	func_102(619, -1886596731 /* GXTEntry: "Each Stable ~BLIP_SHOP_HORSE~ offers a different selection of horse breeds for pu" +
    "rchase." */, 5);
	func_103(620, 619);
	func_102(621, -2017488406 /* GXTEntry: "New horses are available to purchase in the Scarlett Meadows and Strawberry stabl" +
    "es." */, 4);
	func_102(622, -1721289415 /* GXTEntry: "New horses are available to purchase in the Scarlett Meadows and St. Denis stable" +
    "s." */, 4);
	func_102(623, -169021893 /* GXTEntry: "New horses are available to purchase in the Van Horn stables." */, 4);
	func_102(624, -466007340 /* GXTEntry: "New horses are available to purchase in the Blackwater and Tumbleweed stables." */, 4);
	func_102(625, 669666786 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(626, -1001421270 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(627, 1127637781 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(628, 739719858 /* GXTEntry: "Continue playing to unlock your bonus content." */, 5);
	func_102(629, -1151895259 /* GXTEntry: "When you do work for the gang, half the take is set aside for gang savings. The o" +
    "ther half is split between the gang members who worked on the job." */, 4);
	func_104();
	func_105();
}

void func_10()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ObjectiveSequence");
	Global_1911643.f_2 = iVar0;
	Global_1911643.f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Enabled", false);
	Global_1911643.f_4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar0, "Objectives");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643.f_4);
}

void func_11()
{
	func_106(0);
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_107(iVar0) != 0)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				func_108(iVar0);
			}
		}
		iVar0++;
	}
}

void func_13()
{
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_40.f_9536[iVar0] = -1;
		iVar0++;
	}
}

void func_15()
{
	int iVar0;
	var uVar1;

	if (func_28() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 130)
	{
		if ((func_109(iVar0) == 4 || func_109(iVar0) == 3) || func_109(iVar0) == 6)
		{
			Global_1888801[iVar0 /*35*/] = func_111(iVar0, 0, 5, func_110(iVar0));
			if (func_109(iVar0) == 3)
			{
				uVar1 = func_112(func_111(iVar0, 0, 5, 0));
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

bool func_17(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

var func_18()
{
	return Global_1572864.f_8;
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_21(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

void func_22()
{
	if (func_28() != -1)
	{
		return;
	}
	Global_1347343.f_2 = -1;
	Global_1347343 = -1;
	Global_1347343.f_1 = -1;
	StringCopy(&(Global_1347343.f_3), "", 64);
	Global_1347343.f_12 = 0;
	Global_1347343.f_11 = 0;
}

bool func_23(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return false;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

bool func_24(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_25(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_113(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_19(&Global_1935630, 4194304);
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

void func_26()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
}

void func_27()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
}

int func_28()
{
	return Global_1572887.f_12;
}

void func_29(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	Global_1879534.f_7301 = 1;
	Global_1879534.f_7301.f_1 = 0;
	func_114(iParam2);
	func_115(bParam0, iParam1, 1);
	func_116();
	func_117();
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = 0;
	}
	MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
	NETWORK::_0xA95470DA137587F5(0);
	NETWORK::_0xBB697756309D77EE(0);
}

char* func_30(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case GET_HASH_KEY("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case GET_HASH_KEY("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case GET_HASH_KEY("DEMO"):
			sVar0 = "demo";
			break;
		case GET_HASH_KEY("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case GET_HASH_KEY("PRIVATE"):
			sVar0 = "private";
			break;
		case GET_HASH_KEY("FRIENDLY"):
			sVar0 = "friendly";
			break;
		case GET_HASH_KEY("HARDCORE"):
			sVar0 = "hardcore";
			break;
		case GET_HASH_KEY("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case GET_HASH_KEY("RANDOM_POSSE"):
			sVar0 = "random_posse";
			break;
		case GET_HASH_KEY("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case GET_HASH_KEY("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case GET_HASH_KEY("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case GET_HASH_KEY("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case GET_HASH_KEY("SPAWN_LOCATION"):
			sVar0 = "spawn_location";
			break;
		case GET_HASH_KEY("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case GET_HASH_KEY("CAMP"):
			sVar0 = "camp";
			break;
		case GET_HASH_KEY("HANDHELD"):
			sVar0 = "handheld";
			break;
		case GET_HASH_KEY("BENCHMARK"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_31(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_118(1, bParam0))
	{
	}
	func_119();
	Global_1934765 = 0;
}

bool func_32(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_120(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_33(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

int func_34(bool bParam0)
{
	if (!Global_40)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (func_17(2))
	{
		return 0;
	}
	if (bParam0)
	{
		return 0;
	}
	if (!func_122())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (UISTICKYFEED::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (Global_1572864.f_21 != 0)
	{
		return 0;
	}
	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
	{
		return 0;
	}
	return 1;
}

bool func_35()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_36()
{
	int iVar0;

	if (Global_1347400.f_76)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	WEAPON::_0xC395355843BE134B(Global_35);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, false, 0, true))
	{
		if (((iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS")) || iVar0 == GET_HASH_KEY("WEAPON_KIT_CAMERA")) || iVar0 == GET_HASH_KEY("WEAPON_KIT_DETECTOR"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		}
	}
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_38(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_39(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

int func_40(int iParam0, int iParam1)
{
	var uVar0;

	return func_124(&uVar0, iParam0, iParam1);
}

void func_41()
{
}

void func_42()
{
}

void func_43()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (func_125(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

int func_44()
{
	return Global_40.f_4283.f_1;
}

void func_45(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	if (!func_126(iParam0))
	{
		*uParam1 = { Global_36 };
		if (!Global_1935630.f_12)
		{
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f };
			*uParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*uParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f };
			*uParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*uParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*uParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f };
			*uParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f };
			*uParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f };
			*uParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f };
			*uParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f };
			*uParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f };
			*uParam2 = 163f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*uParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f };
			*uParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*uParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*uParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*uParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*uParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*uParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f };
			*uParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f };
			*uParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f };
			*uParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f };
			*uParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*uParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f };
			*uParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*uParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*uParam2 = 90f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f };
			*uParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*uParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f };
			*uParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f };
			*uParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f };
			*uParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*uParam2 = 0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f };
			*uParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f };
			*uParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*uParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f };
			*uParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f };
			*uParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f };
			*uParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*uParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f };
			*uParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*uParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*uParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f };
			*uParam2 = 170f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*uParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*uParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f };
			*uParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f };
			*uParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f };
			*uParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f };
			*uParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*uParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*uParam2 = 0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*uParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*uParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f };
			*uParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f };
			*uParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*uParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*uParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*uParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*uParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*uParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f };
			*uParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f };
			*uParam2 = 0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f };
			*uParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f };
			*uParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*uParam2 = 0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*uParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f };
			*uParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f };
			*uParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*uParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*uParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*uParam2 = 0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f };
			*uParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f };
			*uParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*uParam2 = 0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f };
			*uParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f };
			*uParam2 = 14.4916f;
			return;
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f };
				*uParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f };
			*uParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*uParam2 = 121f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f };
			*uParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f };
			*uParam2 = 353f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f };
			*uParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f };
			*uParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f };
			*uParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f };
			*uParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f };
			*uParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f };
			*uParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f };
			*uParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f };
			*uParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f };
			*uParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f };
			*uParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*uParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*uParam2 = 0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f };
			*uParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f };
			*uParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f };
			*uParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*uParam2 = 0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f };
			*uParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*uParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*uParam2 = 34.0605f;
			return;
		case 25:
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*uParam2 = 304.563f;
			return;
		default:
			break;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		*uParam1 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
		vVar0 = { VOLUME::_GET_VOLUME_ROTATION(Global_1888801[iParam0 /*35*/].f_3) };
		*uParam2 = vVar0.z;
	}
}

bool func_46()
{
	return func_77(Global_1935630, 4096);
}

int func_47(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_127(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_128(iParam1);
	}
	if ((bParam3 && func_129(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_130(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_131(Global_40.f_7729, 4096);
		func_132(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		func_133(bParam0);
	}
	func_134();
	if (!func_135(iParam1))
	{
		func_137(iVar0, bParam0, func_136(iParam1), 1, 0, 1);
	}
	func_138(bParam0);
	return 1;
}

void func_48()
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_ARROW_CONFUSION"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_ARROW_DISORIENT"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_ARROW_DRAIN"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_ARROW_TRAIL"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_ARROW_WOUND"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_THROWING_KNIVES_CONFUSE"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_THROWING_KNIVES_DISORIENT"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_THROWING_KNIVES_DRAIN"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_THROWING_KNIVES_TRAIL"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, GET_HASH_KEY("AMMO_THROWING_KNIVES_WOUND"));
}

void func_49()
{
	struct<2> Var0;

	func_139();
	func_140();
	func_141(1);
	func_142(1);
	func_143(-2125499975);
	func_144();
	if (func_145() == 1160113249)
	{
		Global_40.f_7729 = 62;
		Global_1905941 = 62;
	}
	else
	{
		Global_40.f_7729 = 6;
		Global_1905941 = 6;
	}
	func_146();
	if (!func_35())
	{
		func_147(24);
	}
	else
	{
		func_148(24);
	}
	Global_1935630 = 0;
	func_149();
	func_48();
	func_150(1);
	func_151(0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), false, true);
		if (func_35())
		{
			func_152(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
		}
		func_153(GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"));
		func_152(GET_HASH_KEY("CUSTOM_SATCHEL"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_35, GET_HASH_KEY("PLAYER"));
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_BAND_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_HERB_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_HORSE_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_SHOT_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), false);
		UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_WEAP_ROOT"), false);
		func_154(0);
		if (MONEY::_MONEY_GET_CASH_BALANCE() > 0)
		{
			MONEY::_MONEY_DECREMENT_CASH_BALANCE(MONEY::_MONEY_GET_CASH_BALANCE());
		}
		Var0 = { func_155(GET_HASH_KEY("CAREER_CASH")) };
		STATS::_0x0FEE2561120F3333(&Var0);
		if (!func_35())
		{
			func_156(1);
			func_152(GET_HASH_KEY("KIT_BANDANA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("KIT_MASK_GREY_CLOTH"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("CLOTHING_WINTER_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_BAND_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_HERB_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_HORSE_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_SHOT_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_CHAL_WEAP_ROOT"), true);
			if (func_157())
			{
				func_152(GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_POTENT_SNAKE_OIL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_CORNEDBEEF_CAN"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_PEACHES_CAN"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_MOONSHINE"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_CHOCOLATE_BAR"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_CHEWING_TOBACCO"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_HERB_OREGANO"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			else
			{
				func_152(GET_HASH_KEY("CONSUMABLE_MEDICINE"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_152(GET_HASH_KEY("WEAPON_LASSO"), 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("WEAPON_REPEATER_CARBINE"), 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("WEAPON_REVOLVER_SCHOFIELD"), 1, 1, 0, 1, 1543882317, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("AMMO_REPEATER"), 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("AMMO_REVOLVER"), 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(GET_HASH_KEY("KIT_WARDROBE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_158(GET_HASH_KEY("GAME_START"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
			func_152(GET_HASH_KEY("DOCUMENT_NEWSPAPER_ED_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_159(1);
			func_152(GET_HASH_KEY("KIT_HORSE_BRUSH"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			if (!func_157())
			{
				func_152(GET_HASH_KEY("CONSUMABLE_APPLE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_HORSE_STIMULANT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_POTENT_HORSE_STIMULANT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(GET_HASH_KEY("CONSUMABLE_HORSE_REVIVER"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_160();
			func_161(MISC::GET_RANDOM_INT_IN_RANGE(120, 420), 0, 1);
			if (!func_162(GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"), 1, 0))
			{
				func_152(GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_162(GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"), 1, 0))
			{
				func_152(GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_162(GET_HASH_KEY("CLOTHING_ROBBERY_OUTFIT"), 1, 0))
			{
				func_152(GET_HASH_KEY("CLOTHING_ROBBERY_OUTFIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	}
	func_163(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 0);
	func_164(0, 1);
	func_106(1);
	func_165();
	func_166();
	func_167(1);
	func_168(1, 1);
	func_169(1);
	func_170();
	func_171();
	func_172();
	func_173();
	func_174();
	PED::_0xE6CB36F43A95D75F(0.1f);
}

int func_50(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_78();
	if (func_126(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_175(vParam0, iParam3);
}

int func_51(int iParam0)
{
	if (func_121())
	{
		return 1;
	}
	if (!func_126(iParam0))
	{
		return 1;
	}
	if (func_109(iParam0) == 4)
	{
		if (iParam0 != func_44())
		{
			return 1;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_23)))
	{
		return 1;
	}
	if (func_176(iParam0))
	{
		return 1;
	}
	else
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iParam0 /*35*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
		}
		if (func_177(iParam0, 2))
		{
		}
		if (func_177(iParam0, 1))
		{
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
		{
		}
	}
	return 0;
}

bool func_52()
{
	return ((func_24(1) && func_24(4)) && func_24(2));
}

void func_53()
{
	bool bVar0;
	int iVar1;

	if (func_97())
	{
		return;
	}
	func_178(8);
	func_179(Global_1897952.f_35);
	func_180(Global_1897952.f_35);
	Global_1897952.f_35++;
	if (Global_1897952.f_35 >= 17)
	{
		Global_1897952.f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952.f_36 != -1)
	{
		if (Global_1897952.f_36 != func_181())
		{
			func_182(Global_1897952.f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_183(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_181() != iVar1)
		{
			Global_1897952.f_37 = 1;
			if (func_182(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952.f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false)) && func_181() != -1)
		{
			func_182(func_181());
		}
		Global_1897952.f_37 = 0;
	}
}

void func_54()
{
	if (func_28() == -1)
	{
		if (func_184())
		{
			func_185();
		}
	}
	if (Global_1894899 & 64 != 0)
	{
		func_12();
		func_186(0);
	}
	func_187();
	func_188();
	func_189();
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_28() != -1)
	{
		return;
	}
	iVar1 = 932;
	iVar2 = 952;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		func_190((iVar1 + iVar0), 0);
		iVar0++;
	}
}

void func_56()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (func_125(iVar0))
		{
			func_147(iVar0);
		}
		else
		{
			func_148(iVar0);
		}
		iVar0++;
	}
}

void func_57(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_192(iParam0);
	func_148(iParam0);
}

void func_58()
{
	if (func_145() == 1160113249)
	{
		func_47(Global_35, 62, 1, 0, 0);
	}
	else
	{
		func_47(Global_35, 6, 1, 0, 0);
	}
}

bool func_59()
{
	int iVar0;

	iVar0 = Global_1946804.f_529[9];
	iVar0 = (iVar0 + Global_1946804.f_529[4]);
	iVar0 = (iVar0 + Global_1946804.f_529[10]);
	iVar0 = (iVar0 + Global_1946804.f_529[1]);
	iVar0 = (iVar0 + Global_1946804.f_529[2]);
	iVar0 = (iVar0 + Global_1946804.f_529[6]);
	iVar0 = (iVar0 + Global_1946804.f_529[29]);
	iVar0 = (iVar0 + Global_1946804.f_529[26]);
	iVar0 = (iVar0 + Global_1946804.f_529[18]);
	iVar0 = (iVar0 + Global_1946804.f_529[19]);
	return iVar0 > 0;
}

void func_60(int iParam0, bool bParam1)
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

void func_61(int iParam0)
{
	int iVar0;

	if (func_28() != -1)
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

void func_62(float fParam0)
{
	if (func_193(1) < fParam0)
	{
		func_194(1, fParam0, 0);
	}
	if (func_193(2) < fParam0)
	{
		func_194(2, fParam0, 0);
	}
	if (func_193(0) < fParam0)
	{
		func_194(0, fParam0, 0);
	}
}

bool func_63()
{
	if (func_17(32))
	{
		return false;
	}
	if (func_195() == 3)
	{
		return false;
	}
	if (func_17(2))
	{
		return false;
	}
	if (func_17(4096))
	{
		return false;
	}
	if (func_17(128))
	{
		return false;
	}
	if (UISTICKYFEED::_0xC5C395C60B542A3C(1))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (func_77(Global_1935630, 131072))
	{
		return false;
	}
	if (func_123())
	{
		return false;
	}
	if ((func_28() == -1 && !Global_40) && Global_40.f_40)
	{
		return false;
	}
	return true;
}

void func_64()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	func_196(&Global_0);
}

void func_65(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_66()
{
	int iVar0;

	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(1);
		Global_1898441[iVar0 /*38*/] = 1;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_ENTER_RDR", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ENTER_RDR_COM", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_24), "AF_RDR", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_5[0 /*3*/]), "", 24);
	}
}

bool func_67(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_68()
{
	func_198();
	func_199();
	func_200();
}

void func_69()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == -1)
		{
		}
		else if (!func_201(iVar0, 1073741824 /* Float: 2f */))
		{
		}
		else
		{
			func_202(iVar0, 1);
		}
		iVar0++;
	}
}

void func_70()
{
	if (!func_203(4))
	{
		func_205(func_204());
	}
	if (func_35() && !func_206(40))
	{
		func_208(func_207());
	}
	func_209();
	if (func_35() && !func_206(48))
	{
		func_211(func_210());
	}
	if (func_35() && !func_206(42))
	{
		func_213(func_212());
	}
	if (!func_214(4))
	{
		func_216(func_215());
	}
	if (func_35() && !func_206(50))
	{
		func_218(func_217());
	}
	if (func_35() && !func_206(51))
	{
		func_220(func_219());
	}
	if (!func_221(8))
	{
		func_223(func_222());
	}
	if (!func_224(8))
	{
		func_226(func_225());
	}
	if (!func_227(8))
	{
		func_229(func_228());
	}
	if (!func_230(4))
	{
		func_232(func_231());
	}
	if (!func_233(8))
	{
		func_235(func_234());
	}
	if (!func_236(16))
	{
		func_238(func_237());
	}
}

void func_71()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			iVar1 = func_239(iVar0);
			if (!func_240(iVar1, -2147483648))
			{
			}
			else
			{
				func_241(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_242(iVar0))
		{
			if (func_243(iVar0, 4))
			{
				if (!func_243(iVar0, 128))
				{
					if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_244(iVar0), func_245(iVar0)))
					{
						func_246(iVar0);
					}
					if (Global_1347702[iVar0 /*49*/].f_12 & 512 != 0)
					{
						func_247(iVar0);
					}
					else
					{
						func_248(iVar0);
					}
				}
				else
				{
					func_249(iVar0, 1);
					func_250(iVar0, 4);
					func_250(iVar0, 128);
					if (Global_1347702[iVar0 /*49*/].f_48 != -1)
					{
						iVar1 = func_91(Global_1347702[iVar0 /*49*/].f_48);
						if (iVar1 == 8)
						{
							iVar2 = func_251(Global_1347702[iVar0 /*49*/].f_48);
							if (func_242(iVar2))
							{
								if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_244(iVar2), func_245(iVar2)))
								{
									func_246(iVar2);
								}
								if (Global_1347702[iVar2 /*49*/].f_12 & 512 != 0)
								{
									func_247(iVar2);
								}
								else
								{
									func_248(iVar2);
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	func_252();
	func_253();
	func_254();
	func_255();
	func_256();
}

void func_74()
{
	if (!func_32(6))
	{
		return;
	}
	if (!func_32(37))
	{
		func_257(13);
	}
	if (!func_120(Global_1347702[112 /*49*/].f_15, 1))
	{
		func_257(1);
	}
	if (!func_32(21))
	{
		func_257(11);
		func_257(14);
	}
	if (func_120(Global_1347702[67 /*49*/].f_15, 1) && !func_32(37))
	{
		if (!func_258(6))
		{
			func_257(6);
		}
	}
	if (func_120(Global_1347702[67 /*49*/].f_15, 1) && !func_32(28))
	{
		if (!func_258(3))
		{
			func_257(3);
		}
	}
}

void func_75(bool bParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_ASBMINER_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_ASBMINER_02"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_ASBMINER_03"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_ASBMINER_04"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_NBXSTREETKIDS_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_NBXSTREETKIDS_SLUMS_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_SDSTREETKIDS_SLUMS_02"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("A_M_Y_UNICORPSE_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("S_M_Y_ARMY_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("S_M_Y_NEWSPAPERBOY_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(GET_HASH_KEY("S_M_Y_RACRAILWORKER_01"), bParam0);
}

void func_76()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == GET_HASH_KEY("CSTAG_MOOD_ARTHUR_COLTER") || Global_40.f_4283.f_6[iVar0 /*5*/] == GET_HASH_KEY("CSTAG_MOOD_ARTHUR_BEAVER"))
		{
			return;
		}
		iVar0++;
	}
	iVar1 = func_259();
	switch (iVar1)
	{
		case 0:
			func_260(GET_HASH_KEY("CSTAG_MOOD_ARTHUR_COLTER"), GET_HASH_KEY("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 0, 1);
			PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 5);
			break;
		case 4:
		case 5:
		case 6:
			func_260(GET_HASH_KEY("CSTAG_MOOD_ARTHUR_BEAVER"), GET_HASH_KEY("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 0, 1);
			PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 6);
			break;
		default:
			break;
	}
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_78()
{
	return Global_1894899.f_2;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	iVar0 = func_261();
	iVar1 = func_262(iVar0);
	iVar2 = func_263(iVar0);
	iVar3 = func_264(iVar0);
	if (func_265(iVar0) > iParam0)
	{
		iVar1++;
		if (iVar1 > func_266(iVar2, iVar3))
		{
			iVar1 = 1;
			if (iVar2 == 11)
			{
				iVar2 = 0;
				iVar3++;
			}
			else
			{
				iVar2++;
			}
		}
	}
	func_267(&iVar0, 0, 0, iParam0, iVar1, iVar2, iVar3);
	CLOCK::SET_CLOCK_TIME(func_265(iVar0), func_268(iVar0), func_269(iVar0));
	CLOCK::SET_CLOCK_DATE(func_262(iVar0), func_263(iVar0), func_264(iVar0));
}

void func_80()
{
	if (!func_2())
	{
		return;
	}
	if (func_32(17))
	{
		if (!func_270(GET_HASH_KEY("WEAPON_REPEATER_EVANS")))
		{
			func_271(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
		}
	}
	if (func_272(67))
	{
		if (!func_270(GET_HASH_KEY("WEAPON_PISTOL_M1899")))
		{
			func_271(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
		}
	}
	if (func_32(33))
	{
		if (!func_270(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT")))
		{
			func_271(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
		}
	}
	if (func_32(34))
	{
		if (!func_270(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER")))
		{
			func_271(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
		}
	}
}

bool func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	char[] cVar4[8];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	switch (*uParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 77)
			{
				iVar1 = 1;
				cVar2 = func_273(Global_1835011[iVar0 /*74*/].f_1);
				if (func_67(Global_1835011[iVar0 /*74*/].f_1) && func_120(Global_1835011[iVar0 /*74*/].f_1, 1))
				{
					switch (func_274(iVar0))
					{
						case 0:
							uParam0->f_1++;
							break;
						case 1:
							uParam0->f_2++;
							break;
						case 2:
							uParam0->f_3++;
							break;
						case 3:
							uParam0->f_4++;
							break;
						case 4:
							uParam0->f_5++;
							break;
						case 5:
							uParam0->f_6++;
							break;
						case 6:
							uParam0->f_7++;
							break;
						case 7:
							uParam0->f_8++;
							break;
						case 8:
							uParam0->f_9++;
							break;
						default:
							iVar1 = 0;
							break;
					}
					if (iVar0 == 7)
					{
						uParam0->f_11++;
					}
					if (iVar1 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
					{
						uParam0->f_10++;
					}
					if (MISSIONDATA::MISSIONDATA_GET_RATING(MISC::GET_HASH_KEY(&cVar2)) >= 5)
					{
						uParam0->f_13++;
					}
				}
				iVar0++;
			}
			*uParam0 = 1;
			break;
		case 1:
			iVar3 = 0;
			while (iVar3 < 156)
			{
				iVar1 = 1;
				cVar4 = func_273(Global_1347702[iVar3 /*49*/].f_15);
				if (func_67(Global_1347702[iVar3 /*49*/].f_15) && func_120(Global_1347702[iVar3 /*49*/].f_15, 1))
				{
					if (func_275(Global_1347702[iVar3 /*49*/].f_12, 536870912))
					{
						uParam0->f_12++;
					}
					if (func_275(Global_1347702[iVar3 /*49*/].f_12, 1))
					{
						switch (func_276(iVar3))
						{
							case 0:
								uParam0->f_1++;
								break;
							case 1:
								uParam0->f_2++;
								break;
							case 2:
								uParam0->f_3++;
								break;
							case 3:
								uParam0->f_4++;
								break;
							case 4:
								uParam0->f_5++;
								break;
							case 5:
								uParam0->f_6++;
								break;
							case 6:
								uParam0->f_7++;
								break;
							case 7:
								uParam0->f_8++;
								break;
							case 8:
								uParam0->f_9++;
								break;
							default:
								iVar1 = 0;
								break;
						}
						if (iVar1 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar3 /*49*/].f_3))))
						{
							uParam0->f_10++;
						}
						if (MISSIONDATA::MISSIONDATA_GET_RATING(MISC::GET_HASH_KEY(&cVar4)) >= 5)
						{
							uParam0->f_13++;
						}
					}
					else if (func_275(Global_1347702[iVar3 /*49*/].f_12, 4))
					{
						if (!func_275(Global_1347702[iVar3 /*49*/].f_12, 4194304))
						{
							if (!func_275(Global_1347702[iVar3 /*49*/].f_12, 512))
							{
								uParam0->f_14++;
							}
							else
							{
								uParam0->f_11++;
							}
						}
					}
				}
				iVar3++;
			}
			*uParam0 = 2;
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 < 19)
			{
				if (iVar5 != 0)
				{
					switch (iVar5)
					{
						case 4:
							iVar6 = -727372692;
							break;
						case 5:
							iVar6 = 532503220;
							break;
						case 6:
							iVar6 = 562599937;
							break;
						case 7:
							iVar6 = 1714554710;
							break;
						case 8:
							iVar6 = 1610646968;
							break;
						case 9:
							iVar6 = -1249289544;
							break;
						case 10:
							iVar6 = -508074447;
							break;
						case 11:
							iVar6 = -1917132299;
							break;
						case 12:
							iVar6 = -763271696;
							break;
						case 13:
							iVar6 = 1116308524;
							break;
						case 14:
							iVar6 = 379859357;
							break;
						case 15:
							iVar6 = 1822876181;
							break;
						case 16:
							iVar6 = 1354284392;
							break;
						case 17:
							iVar6 = 43681669;
							break;
						case 18:
							iVar6 = 1871337449;
							break;
					}
					if (iVar6 != 0)
					{
						if (MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar6))
						{
							uParam0->f_15++;
						}
					}
				}
				iVar5++;
			}
			*uParam0 = 3;
			break;
		case 3:
			iVar7 = 0;
			while (iVar7 < 30)
			{
				if (Global_40.f_11623[iVar7 /*8*/].f_6 > 0)
				{
					uParam0->f_16++;
				}
				iVar7++;
			}
			*uParam0 = 4;
			break;
		case 4:
			iVar8 = 0;
			while (iVar8 < 120)
			{
				if (Global_17504.f_42[iVar8 /*8*/] > 0)
				{
					uParam0->f_17++;
				}
				iVar8++;
			}
			*uParam0 = 5;
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < 9)
			{
				iVar10 = func_277(iVar9);
				if (func_126(iVar10))
				{
					iVar11 = func_278(iVar10);
					if (func_67(iVar11) && func_279(iVar11) > 0)
					{
						uParam0->f_18++;
					}
				}
				iVar9++;
			}
			*uParam0 = 6;
			break;
		case 6:
			iVar12 = 0;
			while (iVar12 < 144)
			{
				iVar13 = func_280(iVar12, 1);
				if (func_281(iVar13) && func_282(iVar13, 32))
				{
					uParam0->f_19++;
				}
				iVar12++;
			}
			*uParam0 = 7;
			break;
		case 7:
			if (MISC::IS_BIT_SET(Global_40.f_11958, 0))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 1))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 2))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 3))
			{
				uParam0->f_20++;
			}
			iVar14 = 0;
			while (iVar14 < 8)
			{
				if (func_283(iVar14, 67108864))
				{
					uParam0->f_21++;
				}
				iVar14++;
			}
			if (func_120(func_111(0, 1, 11, GET_HASH_KEY("HAI_HUNTING_02")), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 2, 11, GET_HASH_KEY("HAI_FISHING_01")), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 3, 11, GET_HASH_KEY("HAI_FISHING_02")), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 4, 11, GET_HASH_KEY("HAI_FIVE_FINGER_FILLET_01")), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 5, 11, GET_HASH_KEY("HAI_HUNTING_06")), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 6, 11, GET_HASH_KEY("HAI_DOMINOES_01")), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 7, 11, GET_HASH_KEY("HAI_COACH_ROBBERY_01")), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 8, 11, GET_HASH_KEY("HAI_COACH_ROBBERY_02")), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 9, 11, GET_HASH_KEY("HAI_FIVE_FINGER_FILLET_02")), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 10, 11, GET_HASH_KEY("CABR01")), 1))
			{
				uParam0->f_24++;
			}
			if (func_120(func_111(0, 11, 11, GET_HASH_KEY("HAI_COACH_ROBBERY_03")), 1))
			{
				uParam0->f_24++;
			}
			if (func_120(func_111(0, 12, 11, GET_HASH_KEY("HAI_COACH_ROBBERY_04")), 1))
			{
				uParam0->f_24++;
			}
			if (func_120(func_111(0, 13, 11, GET_HASH_KEY("HAI_RUSTLING_02")), 1))
			{
				uParam0->f_24++;
			}
			iVar15 = 0;
			while (iVar15 < 16)
			{
				if (Global_40.f_9319[iVar15 /*4*/].f_1)
				{
					uParam0->f_25++;
				}
				iVar15++;
			}
			*uParam0 = 8;
			break;
		case 8:
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")), uParam0->f_1);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")), uParam0->f_2);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")), uParam0->f_3);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")), uParam0->f_4);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")), uParam0->f_5);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")), uParam0->f_6);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")), uParam0->f_7);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")), uParam0->f_8);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")), uParam0->f_9);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("REQUIRED_MISSIONS")), uParam0->f_10);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS")), uParam0->f_14);
			func_285(func_284(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY")), uParam0->f_11);
			func_285(func_284(GET_HASH_KEY("KILLS"), GET_HASH_KEY("LEGENDARY_ANIMALS")), uParam0->f_25);
			func_285(func_155(GET_HASH_KEY("SHACK_FOUND")), uParam0->f_15);
			func_285(func_155(GET_HASH_KEY("SPECIAL_PED_INTERACTION")), uParam0->f_16);
			func_285(func_155(GET_HASH_KEY("UNIQUE_BEATS_COMPLETED")), uParam0->f_17);
			func_285(func_155(GET_HASH_KEY("GANG_HIDEOUT_COMPLETED")), uParam0->f_18);
			func_285(func_155(GET_HASH_KEY("DISCOVERABLE_FOUND")), uParam0->f_19);
			func_286(5, uParam0->f_13);
			func_286(6, uParam0->f_20);
			func_286(7, uParam0->f_21);
			func_286(11, uParam0->f_12);
			if (Global_40.f_11095.f_37 == 8 || Global_40.f_11095.f_36 == 8)
			{
				func_286(10, 1);
			}
			if (uParam0->f_22 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(GET_HASH_KEY("ACH_FWB_HOVERLOOK"), 1);
			}
			if (uParam0->f_23 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(GET_HASH_KEY("ACH_FWB_CLEMENS"), 1);
			}
			if (uParam0->f_24 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(GET_HASH_KEY("ACH_FWB_SHADY"), 1);
			}
			if (func_287(Global_1835011[36 /*74*/].f_1) < 1 && func_32(36))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(GET_HASH_KEY("ACH_LEND_HAND"), 1);
			}
			func_288();
			return true;
	}
	return false;
}

void func_82()
{
	if (func_289(Global_1898164, 2))
	{
		func_290(&Global_1898164, 2);
		func_113(&Global_1935630, 895);
	}
	if (func_289(Global_1898164, 1))
	{
		func_290(&Global_1898164, 1);
		func_291(&Global_1898164, 2);
	}
}

int func_83()
{
	return Global_1572864;
}

void func_84()
{
	Global_21 = 0;
}

void func_85()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_86()
{
}

void func_87()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

int func_88()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

void func_89(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = 0;
		Global_12106[iParam0 /*7*/] = 0;
		Global_12106[iParam0 /*7*/].f_2 = 0;
		Global_12106[iParam0 /*7*/].f_3 = 0;
		Global_12106[iParam0 /*7*/].f_4 = 0;
		Global_12106[iParam0 /*7*/].f_6 = -15;
		return;
	}
	func_292(iParam0);
	Global_1058888.f_498[iParam0 /*2*/] = 0;
	Global_1058888.f_498[iParam0 /*2*/].f_1 = 0;
}

int func_90(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_293(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_91(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	return func_295(func_294(iParam0));
}

int func_92(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_28() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_94(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_292(iParam0);
	}
	else
	{
		func_296(iParam0, iParam1);
	}
	func_297();
}

void func_95(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

void func_96(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	Var1 = { func_155(GET_HASH_KEY("DEATHS")) };
	STATS::_0x6123E2832C34243D(&Var1, iVar0, -1, -1, 0);
}

bool func_97()
{
	return false;
}

void func_98(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(-1412413887);
	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 223399367, "regions/state(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1487863141, "iBountyDecayRate:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -766247814, "iBountyDropToUnrestrict:value");
}

void func_99(var uParam0, int iParam1)
{
	struct<2> Var0;

	if (iParam1 > 6)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (!func_298(uParam0, iParam1, &Var0))
	{
		return;
	}
	Global_1934266.f_7[iParam1 /*3*/] = Var0;
	Global_1934266.f_7[iParam1 /*3*/].f_1 = Var0.f_1;
}

void func_100(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
}

void func_101()
{
	Global_1934266.f_78 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "wanted");
	Global_1934266.f_78.f_55 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1934266.f_78, "showBountyHunterMessage", false);
	func_299(&(Global_1934266.f_78.f_1), "firstMessage");
	func_299(&(Global_1934266.f_78.f_19), "secondMessage");
	func_299(&(Global_1934266.f_78.f_37), "thirdMessage");
	Global_1934266.f_78.f_62 = -1;
	StringCopy(&(Global_1934266.f_78.f_64), "", 24);
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	Global_1905944.f_22[iParam0 /*9*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_2 = iParam2;
}

void func_103(int iParam0, int iParam1)
{
	Global_1905944.f_22[iParam0 /*9*/].f_8 = iParam1;
}

void func_104()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_300(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_105()
{
	Global_1905944.f_5693 = -1;
}

void func_106(bool bParam0)
{
	func_302(1, func_301(1), bParam0);
	func_302(0, func_301(0), bParam0);
	func_302(2, func_301(2), bParam0);
}

int func_107(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

void func_108(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_304(func_303(iParam0)) };
	Global_36308[iParam0] = MAP::BLIP_ADD_FOR_COORDS(func_305(func_107(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_36308[iParam0], func_306(func_107(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_36308[iParam0], func_107(iParam0), iParam0);
}

int func_109(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return GET_HASH_KEY("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return GET_HASH_KEY("REGION_BAY_MACOMBS_END");
		case 2:
			return GET_HASH_KEY("REGION_BAY_MERKINSWALLER");
		case 3:
			return GET_HASH_KEY("REGION_BAY_LAGRAS");
		case 4:
			return GET_HASH_KEY("REGION_BAY_LAKAY");
		case 5:
			return GET_HASH_KEY("REGION_BAY_SAINT_DENIS");
		case 6:
			return GET_HASH_KEY("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return GET_HASH_KEY("REGION_BAY_SERIAL_KILLER");
		case 8:
			return GET_HASH_KEY("REGION_BAY_SERENDIPITY");
		case 9:
			return GET_HASH_KEY("REGION_BAY_SHADYBELLE");
		case 10:
			return GET_HASH_KEY("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return GET_HASH_KEY("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return GET_HASH_KEY("REGION_BGV_BERYLS_DREAM");
		case 13:
			return GET_HASH_KEY("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return GET_HASH_KEY("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return GET_HASH_KEY("REGION_BGV_FORTRIGGS");
		case 16:
			return GET_HASH_KEY("REGION_BGV_HANGINGDOG");
		case 17:
			return GET_HASH_KEY("REGION_BGV_LONEMULESTEAD");
		case 18:
			return GET_HASH_KEY("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return GET_HASH_KEY("REGION_BGV_MONTO_REST");
		case 20:
			return GET_HASH_KEY("REGION_BGV_OWANJILA_DAM");
		case 21:
			return GET_HASH_KEY("REGION_BGV_PAINTEDSKY");
		case 22:
			return GET_HASH_KEY("REGION_BGV_PRONGHORN");
		case 24:
			return GET_HASH_KEY("REGION_BGV_SHACK");
		case 23:
			return GET_HASH_KEY("REGION_BGV_RIGGS_STATION");
		case 25:
			return GET_HASH_KEY("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return GET_HASH_KEY("REGION_BGV_STRAWBERRY");
		case 27:
			return GET_HASH_KEY("REGION_BGV_VALLEY_VIEW");
		case 28:
			return GET_HASH_KEY("REGION_BGV_WALLACE_STATION");
		case 29:
			return GET_HASH_KEY("REGION_BGV_WATSONSCABIN");
		case 30:
			return GET_HASH_KEY("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return GET_HASH_KEY("REGION_BLU_COPPERHEAD");
		case 32:
			return GET_HASH_KEY("REGION_BLU_SISIKA");
		case 33:
			return GET_HASH_KEY("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return GET_HASH_KEY("REGION_CML_DINO_LADY");
		case 35:
			return GET_HASH_KEY("REGION_CML_OLDFORTWALLACE");
		case 36:
			return GET_HASH_KEY("REGION_CML_SIXPOINTCABIN");
		case 37:
			return GET_HASH_KEY("REGION_GRT_BEECHERS");
		case 38:
			return GET_HASH_KEY("REGION_GRT_BLACKWATER");
		case 39:
			return GET_HASH_KEY("REGION_GRT_QUAKERS_COVE");
		case 40:
			return GET_HASH_KEY("REGION_GRZ_ADLERRANCH");
		case 41:
			return GET_HASH_KEY("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return GET_HASH_KEY("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return GET_HASH_KEY("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return GET_HASH_KEY("REGION_GRZ_CHEZPORTER");
		case 52:
			return GET_HASH_KEY("REGION_GRZ_COHUTTA");
		case 43:
			return GET_HASH_KEY("REGION_GRZ_COLTER");
		case 44:
			return GET_HASH_KEY("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return GET_HASH_KEY("REGION_GRZ_GUNFIGHT");
		case 45:
			return GET_HASH_KEY("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return GET_HASH_KEY("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return GET_HASH_KEY("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return GET_HASH_KEY("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return GET_HASH_KEY("REGION_GRZ_THELOFT");
		case 55:
			return GET_HASH_KEY("REGION_GRE_VETERAN");
		case 56:
			return GET_HASH_KEY("REGION_GRZ_WAPITI");
		case 49:
			return GET_HASH_KEY("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return GET_HASH_KEY("REGION_GUA_AGUASDULCES");
		case 58:
			return GET_HASH_KEY("REGION_GUA_CAMP");
		case 59:
			return GET_HASH_KEY("REGION_GUA_CINCOTORRES");
		case 60:
			return GET_HASH_KEY("REGION_GUA_LACAPILLA");
		case 61:
			return GET_HASH_KEY("REGION_GUA_MANICATO");
		case 62:
			return GET_HASH_KEY("REGION_HRT_ABANDONED_MILL");
		case 64:
			return GET_HASH_KEY("REGION_HRT_CARMODYDELL");
		case 65:
			return GET_HASH_KEY("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return GET_HASH_KEY("REGION_HRT_CROP_FARM");
		case 67:
			return GET_HASH_KEY("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return GET_HASH_KEY("REGION_HRT_DOWNSRANCH");
		case 69:
			return GET_HASH_KEY("REGION_HRT_EMERALDRANCH");
		case 70:
			return GET_HASH_KEY("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return GET_HASH_KEY("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return GET_HASH_KEY("REGION_HRT_LARNEDSOD");
		case 73:
			return GET_HASH_KEY("REGION_HRT_LOONY_CULT");
		case 74:
			return GET_HASH_KEY("REGION_HRT_LUCKYSCABIN");
		case 75:
			return GET_HASH_KEY("REGION_HRT_SWANSONS_STATION");
		case 76:
			return GET_HASH_KEY("REGION_HRT_VALENTINE");
		case 77:
			return GET_HASH_KEY("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return GET_HASH_KEY("REGION_ROA_ANNESBURG");
		case 79:
			return GET_HASH_KEY("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return GET_HASH_KEY("REGION_ROA_BEECHERS_C");
		case 80:
			return GET_HASH_KEY("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return GET_HASH_KEY("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return GET_HASH_KEY("REGION_ROA_BUTCHERCREEK");
		case 83:
			return GET_HASH_KEY("REGION_ROA_DOVERHILL");
		case 84:
			return GET_HASH_KEY("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return GET_HASH_KEY("REGION_ROA_ISOLATIONIST");
		case 86:
			return GET_HASH_KEY("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return GET_HASH_KEY("REGION_ROA_MOSSY_FLATS");
		case 88:
			return GET_HASH_KEY("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return GET_HASH_KEY("REGION_ROA_ROCKYSEVEN");
		case 90:
			return GET_HASH_KEY("REGION_ROA_TRAPPER");
		case 91:
			return GET_HASH_KEY("REGION_ROA_VANHORNMANSION");
		case 92:
			return GET_HASH_KEY("REGION_ROA_VANHORNPOST");
		case 93:
			return GET_HASH_KEY("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return GET_HASH_KEY("REGION_SCM_BULGERGLADE");
		case 95:
			return GET_HASH_KEY("REGION_SCM_CALIGAHALL");
		case 96:
			return GET_HASH_KEY("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return GET_HASH_KEY("REGION_SCM_CLEMENSCOVE");
		case 98:
			return GET_HASH_KEY("REGION_SCM_CLEMENSPOINT");
		case 99:
			return GET_HASH_KEY("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return GET_HASH_KEY("REGION_SCM_DAIRY_FARM");
		case 101:
			return GET_HASH_KEY("REGION_SCM_HORSE_SHOP");
		case 102:
			return GET_HASH_KEY("REGION_SCM_LONNIESSHACK");
		case 103:
			return GET_HASH_KEY("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return GET_HASH_KEY("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return GET_HASH_KEY("REGION_SCM_RHODES");
		case 106:
			return GET_HASH_KEY("REGION_SCM_SLAVE_PEN");
		case 107:
			return GET_HASH_KEY("REGION_TAL_AURORA_BASIN");
		case 109:
			return GET_HASH_KEY("REGION_TAL_COCHINAY");
		case 110:
			return GET_HASH_KEY("REGION_TAL_MANZANITAPOST");
		case 111:
			return GET_HASH_KEY("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return GET_HASH_KEY("REGION_TAL_TANNERSREACH");
		case 108:
			return GET_HASH_KEY("REGION_TAL_DEAD_SETTLER");
		case 113:
			return GET_HASH_KEY("REGION_TAL_TRAPPER");
		case 126:
			return GET_HASH_KEY("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return GET_HASH_KEY("REGION_HEN_THIEVES_LANDING");
		case 120:
			return GET_HASH_KEY("REGION_CHO_ARMADILLO");
		case 121:
			return GET_HASH_KEY("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return GET_HASH_KEY("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return GET_HASH_KEY("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return GET_HASH_KEY("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return GET_HASH_KEY("REGION_CHO_TWIN_ROCKS");
		case 114:
			return GET_HASH_KEY("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return GET_HASH_KEY("REGION_GAP_TUMBLEWEED");
		case 116:
			return GET_HASH_KEY("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return GET_HASH_KEY("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return GET_HASH_KEY("REGION_RIO_BENEDICT_POINT");
		case 118:
			return GET_HASH_KEY("REGION_RIO_FORT_MERCER");
		case 119:
			return GET_HASH_KEY("REGION_RIO_PLAIN_VIEW");
		case 128:
			return GET_HASH_KEY("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_88())
	{
		iVar2 = func_88();
	}
	iVar5 = func_307(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_294(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_294(iVar6) == 0)
			{
				return func_308(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_294(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_294(iVar6) == 0)
			{
				return func_308(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_308(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

var func_112(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "(", 64);
	StringIntConCat(&cVar0, func_251(iParam0), 64);
	StringConCat(&cVar0, ",", 64);
	StringIntConCat(&cVar0, func_309(iParam0), 64);
	StringConCat(&cVar0, ",", 64);
	StringConCat(&cVar0, func_310(func_91(iParam0)), 64);
	StringConCat(&cVar0, ")", 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_114(int iParam0)
{
	if (Global_1572887.f_12 == 0)
	{
		return;
	}
	Global_40.f_1 = iParam0;
	TELEMETRY::_0x9BEE018A63FFFAD9(iParam0);
}

void func_115(bool bParam0, int iParam1, bool bParam2)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_311(1);
	func_312(0, 0, 1, 0);
	if ((iParam1 == -1 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != GET_HASH_KEY("PAUSE_MENU_REPLAY_LAUNCHER")) && func_24(64))
	{
		PLAYER::FORCE_CLEANUP(2);
	}
	if (iParam1 == -1)
	{
		UILOG::_UILOG_CLEAR_ALL_ENTRIES();
		if (bParam2)
		{
			PERSISTENCE::_0x7A1BD123E5CDB6E5();
			func_313();
			MISC::CLEAR_BIT(&(Global_1934765.f_301), 1);
		}
	}
	if (iParam1 == -1)
	{
		func_314();
		func_315();
	}
	func_316(bParam0, iParam1);
	func_317();
	func_318(1, 0);
	func_319(iParam1);
	func_320(iParam1);
	func_321();
	func_322(iParam1);
	func_323();
	func_324();
	func_325();
	func_326();
	func_327(1, 16);
	func_328();
	func_329(&(Global_1934765.f_402));
	func_330();
	func_331(1);
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	Global_1879534.f_6 = 1;
	Global_1879534.f_7 = 0;
	func_311(0);
}

void func_116()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 = Global_1879534.f_7222[iVar0 /*2*/];
		iVar0++;
	}
}

void func_117()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1879534.f_7300 - 1))
	{
		MISC::CLEAR_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
		iVar0++;
	}
}

bool func_118(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];

	if (!bParam0)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			return false;
		}
		if (func_332())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !func_17(32768))
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
			func_333(666617953);
			func_333(1733948592);
			func_333(1700234797);
			func_333(1305074360);
			func_333(-436566493);
			func_333(-1995815064);
			func_333(-483649675);
			func_333(212587871);
			func_333(GET_HASH_KEY("TAX_SHUTTERS_CLOSED"));
			func_333(1190076410);
			func_333(350100475);
			func_333(2033090463);
			func_333(-688011628);
			func_333(-787042507);
			func_333(1688216398);
			func_333(669655585);
			func_333(-895099271);
			func_333(556610581);
			func_333(GET_HASH_KEY("ARM_05_CHOLERA"));
			if (func_2())
			{
				func_333(-693659956);
				func_333(GET_HASH_KEY("SPPACK_A1SUP_OBELISK"));
				func_333(-400238535);
				func_333(1416512144);
			}
			func_333(GET_HASH_KEY("SPPACK_A4SUP_AQUADUCT"));
			func_333(-846479900);
			func_333(-866774384);
			if (!Global_1934765.f_288)
			{
				func_334(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			func_335();
			func_336();
			func_337();
			return false;
		case 1:
			func_338();
			func_337();
			return false;
		case 2:
			func_339();
			func_337();
			return false;
		case 3:
			break;
	}
	if (!func_340(514932331))
	{
		func_333(1892122519);
	}
	if (func_340(-1414537028))
	{
		if (!func_289(Global_1934765.f_20, 1))
		{
			func_341(5, 1);
			func_341(7, 1);
			func_341(6, 1);
			func_341(1, 1);
			func_291(&(Global_1934765.f_20), 1);
		}
	}
	else if (func_289(Global_1934765.f_20, 1))
	{
		func_341(5, 2);
		func_341(1, 2);
		func_290(&(Global_1934765.f_20), 1);
	}
	if (func_340(269047710))
	{
		func_342(382484708);
		func_333(-910880980);
	}
	else
	{
		func_342(-910880980);
		func_333(382484708);
	}
	if (func_340(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (func_340(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (func_340(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (func_340(-683458244))
	{
		func_343(203);
		func_334(204);
	}
	else
	{
		func_343(204);
		func_334(203);
	}
	func_344(273461605, 79, 2, 4096);
	func_344(-868076593, 9, 32, 4096);
	func_344(1205826474, 36, 64, 4096);
	if (func_340(373691918))
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
		if (func_340(657241756))
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
		if (!func_17(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (func_340(-2058120606))
	{
		if (func_28() == -1)
		{
		}
	}
	else if (func_28() == -1)
	{
	}
	if (func_340(311708813))
	{
		func_333(-1786365097);
		func_334(178);
	}
	else
	{
		func_342(-1786365097);
		func_343(178);
	}
	if (!func_340(1399676951))
	{
		func_342(1934919499);
		func_342(993595204);
		func_342(-515396642);
		func_342(1291083725);
		func_342(GET_HASH_KEY("DES_STR_JAIL"));
		if (func_340(-1524512402))
		{
			func_333(GET_HASH_KEY("DES_STR_JAIL"));
			func_334(193);
		}
		else
		{
			iVar0 = func_287(func_345(11));
			if (func_346(iVar0, 1))
			{
				func_333(GET_HASH_KEY("DES_STR_JAIL"));
				func_334(193);
			}
			else
			{
				func_343(193);
				if (func_346(iVar0, 2))
				{
					func_333(1291083725);
				}
				else if (func_346(iVar0, 4))
				{
					func_333(993595204);
				}
			}
		}
	}
	if (func_340(1497516462))
	{
		if (func_28() == -1)
		{
			func_347(68, 16);
			func_348(557, 32);
			func_348(563, 32);
			func_348(560, 32);
			func_348(561, 32);
			func_348(562, 32);
			func_349(565, 32);
			func_350(565, 0);
			func_349(564, 32);
			func_350(564, 0);
			func_349(554, 32);
			func_350(554, 0);
			func_349(555, 32);
			func_350(555, 0);
			func_349(556, 32);
			func_350(556, 0);
		}
		func_343(199);
		func_334(198);
	}
	else if (func_340(2016141805))
	{
		if (func_28() == -1)
		{
			func_347(68, 16);
			func_348(557, 32);
			func_348(563, 32);
			func_349(560, 32);
			func_350(560, 0);
			func_349(561, 32);
			func_350(561, 0);
			func_349(562, 32);
			func_350(562, 0);
			func_349(554, 32);
			func_350(554, 0);
			func_349(555, 32);
			func_350(555, 0);
			func_349(556, 32);
			func_350(556, 0);
			func_349(565, 32);
			func_350(565, 0);
			func_349(564, 32);
			func_350(564, 0);
		}
		func_343(199);
		func_343(198);
	}
	else if (func_340(1010885152))
	{
		if (func_28() == -1)
		{
			func_351(68, 16);
			func_350(554, 0);
			func_350(555, 0);
			func_350(556, 0);
			func_350(557, 0);
			func_350(563, 0);
			func_350(560, 0);
			func_350(561, 0);
			func_350(562, 0);
			func_350(565, 0);
			func_350(564, 0);
		}
		func_343(199);
		func_334(198);
	}
	else if (func_340(-502324015))
	{
		if (func_28() == -1)
		{
			func_347(68, 16);
			func_349(554, 32);
			func_349(555, 32);
			func_349(556, 32);
			func_349(557, 32);
			func_349(563, 32);
			func_350(554, 0);
			func_350(555, 0);
			func_350(556, 0);
			func_350(557, 0);
			func_350(563, 0);
			func_348(565, 32);
			func_348(564, 32);
			func_348(560, 32);
			func_348(561, 32);
			func_348(562, 32);
		}
		func_343(198);
		func_334(199);
	}
	if (func_340(440043364))
	{
		func_342(376665102);
	}
	else
	{
		func_333(376665102);
	}
	if (func_340(-1425209566))
	{
		if (func_28() == -1)
		{
			func_348(800, 32);
		}
	}
	else if (func_28() == -1)
	{
		func_349(800, 32);
		func_350(800, 0);
	}
	func_352();
	if (func_340(0))
	{
		func_333(1149195254);
		func_333(2016081133);
		func_333(363257921);
		func_333(58066174);
		func_333(-1521525254);
		func_333(-761186147);
		func_333(-1872939092);
		func_333(-964156415);
		func_353(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_354(-434746250, 1);
		if (func_340(-699277634))
		{
			func_333(-2137633069);
			func_334(121);
			func_334(123);
			func_334(125);
			if (func_28() == -1)
			{
				func_351(93, 16);
				func_355(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
			}
		}
		else
		{
			func_333(1944013855);
			func_334(120);
			func_334(122);
			func_334(124);
			func_347(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (func_340(473295046))
	{
		func_333(-1643869063);
		func_333(-1108618313);
		func_333(-787678727);
		func_353(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_354(-434746250, 1);
		if (func_340(-699277634))
		{
			func_356("bra_man_burned_bra3");
		}
		else
		{
			func_356("bra_man_burned");
		}
		func_347(93, 16);
		if (func_28() == -1)
		{
			func_348(621, 32);
			func_348(622, 32);
			func_348(623, 32);
			func_348(624, 32);
			func_349(909, 32);
			func_350(909, 0);
			func_349(910, 32);
			func_350(910, 0);
			func_349(911, 32);
			func_350(911, 0);
			func_349(912, 32);
			func_350(912, 0);
			func_349(913, 32);
			func_350(913, 0);
			func_349(914, 32);
			func_350(914, 0);
			func_349(617, 32);
			func_350(617, 0);
			func_349(618, 32);
			func_350(618, 0);
			func_349(619, 32);
			func_350(619, 0);
			func_349(620, 32);
			func_350(620, 0);
			func_349(915, 32);
			func_350(915, 0);
			func_349(916, 32);
			func_350(916, 0);
			func_349(917, 32);
			func_350(917, 0);
			func_349(625, 32);
			func_350(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (func_340(-1738165526))
	{
		func_333(-1643869063);
		func_333(622597018);
		func_333(1649275138);
		func_353(1);
		func_356("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_357(-434746250, 1);
		func_351(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, 0, 15);
		}
	}
	if (!func_340(-270094635))
	{
		func_333(1355914142);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_16, 7);
		}
	}
	else
	{
		func_342(1355914142);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_16);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (func_340(-1666278201))
	{
		func_342(706203603);
		func_333(937192284);
	}
	else
	{
		func_342(937192284);
		func_333(706203603);
	}
	if (func_340(405586984))
	{
		func_342(-1052023588);
		func_342(-745087561);
		func_358("old_nav_wall_hole");
		func_358("old_nav_nts3_start");
		func_358("old_nav_nts3_end");
		func_333(944314155);
		func_356("old_nav_wall_fill");
	}
	else if (func_340(1509509592))
	{
		func_342(-1052023588);
		func_358("old_nav_wall_fill");
		func_358("old_nav_wall_hole");
		func_358("old_nav_nts3_end");
		func_333(944314155);
		func_333(-745087561);
		func_356("old_nav_nts3_start");
	}
	else if (func_340(-959357075))
	{
		func_342(944314155);
		func_358("old_nav_wall_fill");
		func_358("old_nav_nts3_start");
		func_358("old_nav_wall_hole");
		func_333(-1052023588);
		func_333(-745087561);
		func_356("old_nav_nts3_end");
	}
	else if (func_340(-1311865656))
	{
		func_342(944314155);
		func_342(-745087561);
		func_358("old_nav_wall_fill");
		func_358("old_nav_nts3_start");
		func_358("old_nav_nts3_end");
		func_333(-1052023588);
		func_356("old_nav_wall_hole");
	}
	if (func_340(2091701359))
	{
		func_333(GET_HASH_KEY("VAN_02_HORSEBOAT"));
	}
	else
	{
		func_342(GET_HASH_KEY("VAN_02_HORSEBOAT"));
	}
	if (func_340(1376646519))
	{
		func_342(-920505696);
		func_342(281772765);
		func_342(-516683274);
		func_343(135);
		func_343(136);
		func_343(137);
		func_343(138);
		func_358("nav_std_bank_start");
		func_358("nav_std_bank_shootout");
		func_358("nav_std_bank_dest");
		func_334(134);
		func_333(1017355491);
		func_333(-1004522372);
	}
	else if (func_340(931649776))
	{
		func_342(-920505696);
		func_342(-516683274);
		func_343(135);
		func_343(136);
		func_343(137);
		func_343(138);
		func_358("nav_std_bank_shootout");
		func_358("nav_std_bank_dest");
		func_333(-1004522372);
		func_334(134);
		func_333(1017355491);
		func_333(281772765);
		func_356("nav_std_bank_start");
	}
	else if (func_340(-434590080))
	{
		func_342(-920505696);
		func_342(-516683274);
		func_343(134);
		func_343(137);
		func_358("nav_std_bank_start");
		func_358("nav_std_bank_dest");
		func_333(-1004522372);
		func_334(135);
		func_334(136);
		func_334(138);
		func_333(1017355491);
		func_333(281772765);
		func_356("nav_std_bank_shootout");
	}
	else if (func_340(1743048395))
	{
		func_342(1017355491);
		func_342(281772765);
		func_342(-1004522372);
		func_343(134);
		func_343(135);
		func_334(137);
		func_334(138);
		func_358("nav_std_bank_start");
		func_358("nav_std_bank_shootout");
		func_333(-516683274);
		func_333(-920505696);
		func_356("nav_std_bank_dest");
	}
	else if (func_340(449774763))
	{
		func_342(1017355491);
		func_342(-516683274);
		func_342(281772765);
		func_343(134);
		func_343(135);
		func_343(136);
		func_343(138);
		func_333(-1004522372);
		func_334(137);
	}
	if (func_340(-764163380))
	{
		func_343(140);
		func_334(139);
	}
	else
	{
		func_343(139);
		func_334(140);
	}
	if (func_340(-349064220))
	{
		func_333(140744122);
		func_333(-1795618779);
		func_356("hso_post_caravan");
	}
	else
	{
		func_342(140744122);
		func_342(-1795618779);
		func_358("hso_post_caravan");
	}
	if (func_340(1776302352))
	{
		func_333(1691578074);
		func_333(-1936937394);
		func_356("dewclm_post_caravan");
	}
	else
	{
		func_342(1691578074);
		func_342(-1936937394);
		func_358("dewclm_post_caravan");
	}
	if (func_340(-523522517))
	{
		func_333(-1130111983);
		func_333(-1015786727);
	}
	else
	{
		func_342(-1130111983);
		func_342(-1015786727);
	}
	if (func_340(1591451572))
	{
		func_333(560821199);
	}
	else
	{
		func_342(560821199);
	}
	if (func_340(1177464213))
	{
		func_342(-313831898);
		func_342(634920011);
		func_333(1694736240);
		func_333(2035758463);
	}
	else
	{
		func_342(1694736240);
		func_342(2035758463);
		func_333(-313831898);
		func_333(634920011);
	}
	func_359();
	func_360();
	if (func_340(459290420))
	{
		func_333(474287981);
		func_333(-338553155);
		func_333(-1636879249);
		func_333(205214733);
		func_342(GET_HASH_KEY("WEATHERVOL_CHPT1_SNOWSTORM"));
		func_334(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_361(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (func_340(1884271742))
	{
		func_333(867231253);
		func_333(-323126593);
		func_333(-1316886711);
		func_333(205214733);
		func_342(GET_HASH_KEY("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_340(-2038424081))
	{
		func_333(867231253);
		func_333(-1670453688);
		func_333(-323126593);
		func_333(-1316886711);
		func_333(205214733);
		func_356("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(753127042))
	{
		func_333(1248111234);
		func_333(-1670453688);
		func_333(-323126593);
		func_333(-1316886711);
		func_333(205214733);
		func_356("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(-1187950766))
	{
		func_333(474287981);
		func_333(-1670453688);
		func_333(-1636879249);
		func_333(-338553155);
		func_334(186);
		func_356("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(356365161))
	{
		func_333(474287981);
		func_333(-1670453688);
		func_333(-338553155);
		func_333(-1636879249);
		func_356("col_nav_wint1_cabin_prefire");
		func_334(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(-939420910))
	{
		func_333(GET_HASH_KEY("WIN1_INTRO_CUTSCENE"));
		func_333(474287981);
		func_333(-717025835);
		func_333(-338553155);
		func_333(-1636879249);
		func_334(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_361(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (func_340(-1170496998))
	{
		func_333(-1306375743);
		func_333(-743781837);
		func_333(2114706334);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765.f_15, 7);
		}
		func_334(149);
		func_334(150);
		func_334(151);
		func_334(152);
	}
	else
	{
		func_342(-1306375743);
		func_342(-743781837);
		func_342(2114706334);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765.f_15);
			VOLUME::_DELETE_VOLUME(Global_1934765.f_15);
		}
		func_343(149);
		func_343(150);
		func_343(151);
		func_343(152);
	}
	func_362();
	if (func_340(2080210939))
	{
		func_333(-1055748784);
	}
	else
	{
		func_342(-1055748784);
	}
	if (func_340(1485195808))
	{
		func_334(147);
		func_343(148);
	}
	else
	{
		func_343(147);
		func_334(148);
	}
	if (func_340(-1532284567))
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
	if (func_340(2127577956))
	{
		func_333(GET_HASH_KEY("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		func_342(GET_HASH_KEY("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		func_333(GET_HASH_KEY("SHA_EXT_SHUTTERS_NORMAL"));
		func_342(GET_HASH_KEY("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (func_340(-524145696))
	{
		func_333(809554858);
		func_333(1810083187);
		func_342(159921796);
		func_342(-1739900853);
		func_333(2113454609);
		func_333(-520163372);
		func_342(-90228526);
		func_343(17);
		func_343(2);
		func_343(4);
		func_334(1);
		func_334(5);
		func_363(931206119, 1, 0, 0, 0, 0, 0, 0);
		func_363(1783003505, 1, 0, 0, 0, 0, 0, 0);
		func_333(-646014955);
		func_358("shb_nav_camp_running");
		func_358("shb_nav_camp_teardown");
		func_342(1265596420);
		func_358("shb_nav_camp_01");
		func_356("shb_nav_camp_00");
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
		func_358("shb_nav_camp_00");
		func_358("shb_nav_camp_01");
		func_342(809554858);
		func_342(1265596420);
		func_342(1810083187);
		func_363(931206119, 0, 0, 0, 1, 0, 0, 0);
		func_363(1783003505, 0, 0, 0, 1, 0, 0, 0);
		func_342(-646014955);
		if (func_340(282809459))
		{
			func_343(5);
			func_343(17);
			func_343(1);
			func_343(2);
			func_334(4);
			func_342(-520163372);
			func_333(-90228526);
			func_333(159921796);
			func_342(-1739900853);
			func_342(2113454609);
		}
		else if (func_340(1626481264))
		{
			func_343(5);
			func_343(4);
			func_343(1);
			func_343(2);
			func_334(17);
			func_342(-520163372);
			func_333(-90228526);
			func_333(159921796);
			func_333(-1739900853);
			func_342(2113454609);
		}
		else
		{
			func_342(-90228526);
			func_342(159921796);
			func_342(-1739900853);
			func_333(2113454609);
		}
		func_343(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (func_340(-63926460))
	{
		func_342(1929440211);
		func_342(2126897368);
		func_333(-833857740);
		func_333(-825836321);
		if (func_340(1665756137))
		{
			func_333(-1718055184);
			func_358("han_nav_endless_summer");
			func_356("han_nav_endless_summer_marston4");
		}
		else
		{
			func_342(-1718055184);
			func_358("han_nav_endless_summer_marston4");
			func_356("han_nav_endless_summer");
		}
	}
	else
	{
		func_342(-833857740);
		func_342(-825836321);
		func_342(-1718055184);
		func_358("han_nav_endless_summer");
		func_358("han_nav_endless_summer_marston4");
		func_333(1929440211);
	}
	if (func_340(374115931))
	{
		func_334(164);
		func_356("bvh_nav_endless_summer");
	}
	else
	{
		func_343(164);
		func_358("bvh_nav_endless_summer");
	}
	if (func_340(1982676972))
	{
		func_334(20);
	}
	else
	{
		func_343(20);
	}
	if (func_340(-2034257789))
	{
		STREAMING::REQUEST_IPL_HASH(GET_HASH_KEY("SIX_POINT_LIGHTS_ON"));
		func_343(22);
		func_343(24);
		func_334(21);
		func_334(23);
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(GET_HASH_KEY("SIX_POINT_LIGHTS_ON"));
		func_343(21);
		func_343(23);
		func_334(22);
		func_334(24);
	}
	if (func_340(-1014145132))
	{
		func_334(200);
	}
	else
	{
		func_343(200);
	}
	if (func_340(-1840704908))
	{
		func_334(201);
	}
	else
	{
		func_343(201);
	}
	if (func_28() == -1)
	{
		if (func_340(-1053549743))
		{
			func_364(65536, 1);
		}
		else
		{
			func_364(65536, 0);
		}
	}
	func_365();
	if (func_340(-2073072369))
	{
		func_333(1343484786);
		func_333(1989074279);
		func_356("sad3_nav_rhodes_shootout_00");
	}
	else if (func_340(-1674179981))
	{
		if (func_340(-1053549743))
		{
			func_333(1871051363);
			func_333(-2144587490);
			func_333(1033721560);
			func_356("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_333(1343484786);
			func_333(-1671953459);
			func_333(1871051363);
			func_333(-2144587490);
			func_356("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_340(-1835851517))
	{
		if (func_340(-1053549743))
		{
			func_333(-2144587490);
			func_333(1033721560);
			func_356("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_333(1343484786);
			func_333(-1671953459);
			func_333(-2144587490);
			func_356("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_340(-1838352012))
	{
		if (func_340(-1053549743))
		{
			func_333(146746575);
			func_333(1033721560);
			func_356("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_333(1343484786);
			func_333(-1671953459);
			func_333(146746575);
			func_356("rho_nav_grave_norm_gry3_off");
		}
	}
	if (func_340(-644722288))
	{
		func_342(1882605165);
		func_333(869642051);
	}
	else
	{
		func_342(869642051);
		func_333(1882605165);
	}
	if (func_340(1691618738))
	{
		func_342(-184821200);
		func_333(-490818122);
		func_333(1412515639);
		func_333(-1377139506);
	}
	else
	{
		func_333(-184821200);
		func_342(-490818122);
		func_342(1412515639);
		func_342(-1377139506);
	}
	if (func_340(-741351766))
	{
		func_343(130);
		func_334(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		func_343(131);
		func_334(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (func_340(-1717960576))
	{
		func_343(133);
		func_334(132);
	}
	else if (func_340(210001842))
	{
		func_343(132);
		func_334(133);
	}
	if (func_340(-1164215952))
	{
		func_342(1603294144);
		func_333(349486662);
		func_343(144);
		func_334(143);
	}
	else
	{
		func_342(349486662);
		func_333(1603294144);
		func_343(143);
		func_334(144);
	}
	if (func_340(-1236261996))
	{
		func_342(897455211);
		func_342(774477221);
		func_333(1136898294);
		func_333(1097534152);
		func_343(146);
		func_334(145);
	}
	else
	{
		func_342(1136898294);
		func_342(1097534152);
		func_333(897455211);
		func_333(774477221);
		func_343(145);
		func_334(146);
	}
	if (func_340(-1799960545))
	{
		func_343(170);
		func_334(169);
	}
	else
	{
		func_343(169);
		func_334(170);
	}
	if (func_340(-628542779))
	{
		func_334(180);
	}
	else
	{
		func_343(180);
	}
	if (func_340(1500064347))
	{
		func_333(724436573);
		func_342(-1475403379);
	}
	else
	{
		func_333(-1475403379);
		func_342(724436573);
	}
	if (func_340(-1741667789))
	{
		func_343(179);
	}
	else
	{
		func_334(179);
	}
	if (func_340(-853383233))
	{
		if (func_28() == -1)
		{
			if (!func_366(70, 32))
			{
				func_349(70, 32);
				func_367(70);
			}
		}
	}
	else if (func_28() == -1)
	{
		if (func_366(70, 32))
		{
			func_348(70, 32);
			func_368(70);
		}
	}
	if (func_340(-334729750))
	{
		func_333(1138093977);
		func_356("wat_nav_grave");
	}
	else
	{
		func_342(1138093977);
		func_358("wat_nav_grave");
	}
	if (func_340(1926308480))
	{
		func_342(1849913721);
		func_333(573576705);
	}
	else if (func_340(280705402))
	{
		func_333(1849913721);
		func_342(573576705);
	}
	else if (func_340(1766284049))
	{
		func_342(1849913721);
		func_342(573576705);
	}
	if (func_340(-150493654))
	{
		func_342(-848315456);
		func_342(105426297);
		func_342(2095421392);
		func_342(-1614141377);
		func_342(45121961);
		func_342(-7594117);
		func_342(1388161943);
		func_333(-642132908);
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
		func_358("utp2_nav_tree_fallen");
	}
	else if (func_340(-1271608261))
	{
		func_342(-642132908);
		func_342(105426297);
		func_342(-1614141377);
		func_342(45121961);
		func_342(-7594117);
		func_342(1388161943);
		func_333(2095421392);
		func_333(-848315456);
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
		func_358("utp2_nav_tree_fallen");
	}
	else if (func_340(1846061697))
	{
		func_342(-642132908);
		func_342(2095421392);
		func_342(105426297);
		func_342(-7594117);
		func_333(45121961);
		func_333(-1614141377);
		func_333(-848315456);
		func_333(1388161943);
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
		func_356("utp2_nav_tree_fallen");
	}
	else if (func_340(-1145519186))
	{
		func_342(-642132908);
		func_342(-848315456);
		func_342(-1614141377);
		func_342(45121961);
		func_342(2095421392);
		func_342(-7594117);
		func_342(1388161943);
		func_333(105426297);
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
		func_358("utp2_nav_tree_fallen");
	}
	if (!func_369(51))
	{
		if (func_340(1485494263))
		{
			func_342(1672215059);
			func_342(-1177027698);
			func_342(23211744);
			func_342(604668055);
			func_342(GET_HASH_KEY("DES_NTVS2_TREEFALL"));
			func_333(1708195603);
			func_356("nts2_fallen_tree_ridge");
		}
		else
		{
			func_342(23211744);
			func_342(604668055);
			func_342(1708195603);
			func_333(GET_HASH_KEY("DES_NTVS2_TREEFALL"));
			func_333(1672215059);
			func_333(-1177027698);
			func_358("nts2_fallen_tree_ridge");
		}
	}
	if (func_28() == -1)
	{
		if (func_340(-811637947))
		{
			if (func_366(497, 32))
			{
				func_348(497, 32);
				func_368(497);
			}
			if (func_366(498, 32))
			{
				func_348(498, 32);
				func_368(498);
			}
		}
		else
		{
			if (!func_366(497, 32))
			{
				func_349(497, 32);
				func_367(497);
			}
			if (!func_366(498, 32))
			{
				func_349(498, 32);
				func_367(498);
			}
		}
	}
	if (func_340(106479759))
	{
		func_342(-1403908542);
		func_342(1598834669);
		func_342(1299817544);
		func_342(1204787444);
		func_342(66523468);
		func_342(2040259178);
		func_342(1947806010);
		func_358("str_nav_construction_stage_0");
		func_358("str_nav_construction_stage_1");
		func_358("str_nav_construction_stage_2");
		func_358("str_nav_construction_stage_3");
		func_333(1924458218);
		func_356("utp1_bridge_cover");
	}
	else
	{
		func_342(1924458218);
		func_358("utp1_bridge_cover");
		if (func_340(198200492))
		{
			func_342(1299817544);
			func_342(1204787444);
			func_342(66523468);
			func_342(2040259178);
			func_342(1947806010);
			func_358("str_nav_construction_stage_1");
			func_358("str_nav_construction_stage_2");
			func_358("str_nav_construction_stage_3");
			func_333(-1403908542);
			func_333(1598834669);
			func_356("str_nav_construction_stage_0");
			if (func_28() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_340(-1124061431))
		{
			func_342(-1403908542);
			func_342(1598834669);
			func_342(1204787444);
			func_342(66523468);
			func_342(2040259178);
			func_342(1947806010);
			func_358("str_nav_construction_stage_0");
			func_358("str_nav_construction_stage_2");
			func_358("str_nav_construction_stage_3");
			func_333(1299817544);
			func_356("str_nav_construction_stage_1");
			if (func_28() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_340(52706132))
		{
			func_342(-1403908542);
			func_342(1598834669);
			func_342(1299817544);
			func_342(66523468);
			func_342(2040259178);
			func_342(1947806010);
			func_358("str_nav_construction_stage_0");
			func_358("str_nav_construction_stage_1");
			func_358("str_nav_construction_stage_3");
			func_333(1204787444);
			func_356("str_nav_construction_stage_2");
			if (func_28() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_340(-259123672))
		{
			func_342(-1403908542);
			func_342(1598834669);
			func_342(1299817544);
			func_342(1204787444);
			func_358("str_nav_construction_stage_0");
			func_358("str_nav_construction_stage_1");
			func_358("str_nav_construction_stage_2");
			func_333(66523468);
			func_333(2040259178);
			func_333(1947806010);
			func_356("str_nav_construction_stage_3");
			if (func_28() == -1)
			{
				PERSCHAR::_0x187D65F3AEC5D679(GET_HASH_KEY("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (func_340(-356975260))
	{
		func_342(73781828);
		func_333(-391567710);
	}
	else
	{
		func_342(-391567710);
		func_333(73781828);
	}
	if (func_340(-2106214197))
	{
	}
	else if (func_340(-1029225159))
	{
	}
	if (func_340(757752139))
	{
		func_343(168);
	}
	else
	{
		func_334(168);
	}
	if (func_340(1609506757))
	{
		func_333(-205116461);
		func_333(-1490034522);
		func_342(-1473336090);
		func_342(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		func_343(158);
		if (!func_369(47))
		{
			func_334(159);
		}
		else
		{
			func_343(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (func_340(439465264))
		{
			func_334(155);
			func_343(154);
			func_334(157);
			func_343(156);
		}
		else
		{
			func_334(156);
			func_370(156);
			func_334(154);
			func_343(155);
			func_343(157);
		}
	}
	else
	{
		func_333(-1473336090);
		func_333(-1013403664);
		func_342(-205116461);
		func_342(-1490034522);
		Global_1934765.f_289 = 0;
		func_343(154);
		func_343(155);
		func_343(157);
		func_343(156);
		func_343(159);
		func_334(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_371(-179f), false, 7);
		}
	}
	if (func_340(-2021582629) && func_372())
	{
		func_342(432272547);
		func_333(204868257);
		func_356("nav_sdn_fundraiser");
	}
	else
	{
		func_342(204868257);
		func_333(432272547);
		func_358("nav_sdn_fundraiser");
	}
	if (func_340(-1232809834))
	{
		func_342(206289712);
		func_333(-1225383143);
	}
	else
	{
		func_342(-1225383143);
		func_333(206289712);
	}
	if (func_340(141950038))
	{
		func_342(-473077489);
		func_333(619024057);
		func_333(-836433697);
		func_354(586229709, 1);
	}
	else
	{
		func_342(-836433697);
		func_342(619024057);
		func_333(-473077489);
		func_357(586229709, 1);
	}
	if (func_340(544152906))
	{
		func_342(1821956151);
		func_333(-704461521);
	}
	else
	{
		func_342(-704461521);
		func_333(1821956151);
	}
	if (func_340(26054262))
	{
		func_334(166);
	}
	else
	{
		func_343(166);
	}
	if (func_340(-503955743))
	{
		func_334(167);
	}
	else
	{
		func_343(167);
	}
	if (func_340(945612176))
	{
		func_334(161);
		func_334(163);
		func_343(160);
		func_343(162);
	}
	else
	{
		func_334(160);
		func_334(162);
		func_343(161);
		func_343(163);
	}
	if (func_340(-1706438978))
	{
		func_334(142);
		func_343(141);
	}
	else
	{
		func_343(141);
		func_343(142);
	}
	if (func_340(94263042))
	{
		func_333(-1499162505);
		func_333(GET_HASH_KEY("AMB_CAMP_GRZ_FINALE2"));
		if (func_340(-2106445152))
		{
			func_342(-1832103801);
			func_343(230);
			func_358("fin2_micah_hideout");
			func_356("fin2_micah_hideout_abandon");
		}
		else
		{
			func_333(-1832103801);
			func_334(230);
			func_358("fin2_micah_hideout_abandon");
			func_356("fin2_micah_hideout");
		}
	}
	else
	{
		func_342(-1499162505);
		func_342(GET_HASH_KEY("AMB_CAMP_GRZ_FINALE2"));
		func_342(-1832103801);
		func_343(230);
		func_358("fin2_micah_hideout");
		func_358("fin2_micah_hideout_abandon");
	}
	if (func_340(-25901845))
	{
		func_342(-468702164);
		func_343(192);
		func_333(-1436188587);
		func_334(191);
	}
	else
	{
		func_342(-1436188587);
		func_343(191);
		func_333(-468702164);
		func_334(192);
	}
	if (func_340(-75024673))
	{
		func_333(1573766063);
	}
	else
	{
		func_342(1573766063);
	}
	if (func_340(1250636944))
	{
		func_333(-892659042);
	}
	else
	{
		func_342(-892659042);
	}
	if (func_340(-1831552326))
	{
		func_334(194);
		func_343(195);
	}
	else
	{
		func_334(195);
		func_343(194);
	}
	if (func_340(-1151084372))
	{
		func_334(196);
	}
	else
	{
		func_343(196);
	}
	if (func_340(1064154891))
	{
		func_334(19);
		func_343(18);
	}
	else
	{
		func_334(18);
		func_343(19);
	}
	if (func_340(1822001510))
	{
	}
	else if (func_340(-1612662716))
	{
	}
	if (func_340(689930684))
	{
		func_334(176);
	}
	else
	{
		func_343(176);
	}
	if (func_340(-1957523409))
	{
		func_334(177);
	}
	else
	{
		func_343(177);
	}
	if (func_340(1306158345))
	{
		func_342(943998860);
		func_342(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Part_Fixed");
		func_358("HKK_Camp_Only");
		func_373(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_340(1952610440))
	{
		func_342(943998860);
		func_333(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_333(580700069);
		func_333(1347068672);
		func_358("HKK_Part_Fixed");
		func_358("HKK_Camp_Only");
		func_356("HKK_Trashed_Wagons");
		func_374(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_340(-223469678))
	{
		func_333(943998860);
		func_333(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Camp_Only");
		func_356("HKK_Part_Fixed");
		func_374(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_340(-404698347))
	{
		func_333(943998860);
		func_342(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Part_Fixed");
		func_356("HKK_Camp_Only");
		func_374(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_340(1517904467))
	{
		func_342(943998860);
		func_342(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Part_Fixed");
		func_358("HKK_Camp_Only");
		func_373(GET_HASH_KEY("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (func_340(-1405998267))
	{
		func_333(2015532863);
	}
	else
	{
		func_342(2015532863);
	}
	if (func_340(-468693731))
	{
		func_342(-800942395);
		func_333(-741366935);
	}
	else
	{
		func_342(-741366935);
		func_333(-800942395);
	}
	if (func_340(-238080464))
	{
		func_333(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		func_342(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (func_340(1607768502))
	{
		func_333(808576710);
		func_342(-775951892);
		func_342(1547403545);
		func_342(1431947993);
		func_342(137316925);
		func_342(-660075384);
	}
	else if (func_340(-1852605133))
	{
		func_333(1547403545);
		func_342(-775951892);
		func_342(808576710);
		func_342(1431947993);
		func_342(137316925);
		func_342(-660075384);
	}
	else if (func_340(-129643890))
	{
		func_333(-660075384);
		func_342(-775951892);
		func_342(1547403545);
		func_342(808576710);
		func_342(1431947993);
		func_342(137316925);
	}
	else if (func_340(-1433686245))
	{
		func_333(137316925);
		func_342(-775951892);
		func_342(1547403545);
		func_342(808576710);
		func_342(1431947993);
		func_342(-660075384);
	}
	else
	{
		func_333(-775951892);
		func_342(1547403545);
		func_342(808576710);
		func_342(1431947993);
		func_342(137316925);
		func_342(-660075384);
	}
	if (func_340(192515737))
	{
		func_333(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(1879779330);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(426191476))
	{
		func_333(-2142987163);
		func_342(1104143966);
		func_342(1027093524);
		func_342(1879779330);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(187862543))
	{
		func_333(1027093524);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1879779330);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(417081698))
	{
		func_333(1879779330);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(791041526))
	{
		func_333(-1617847332);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(1879779330);
		func_342(317070801);
	}
	else
	{
		func_333(317070801);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(1879779330);
		func_342(-1617847332);
	}
	if (func_125(45))
	{
		if (func_340(-1838712533))
		{
			func_333(-771786794);
			func_342(-1267247536);
			func_342(-468635897);
			func_342(535384482);
			func_342(1088045886);
			func_342(-1678761663);
			func_342(1724413302);
			func_342(-626641013);
		}
		else if (func_340(1140218954))
		{
			func_333(-1267247536);
			func_342(-468635897);
			func_342(-771786794);
			func_342(535384482);
			func_342(1088045886);
			func_342(-1678761663);
			func_342(1724413302);
			func_342(-626641013);
		}
		else
		{
			func_333(-468635897);
			func_342(-771786794);
			func_342(-1267247536);
			func_342(535384482);
			func_342(1088045886);
			func_342(-1678761663);
			func_342(1724413302);
			func_342(-626641013);
		}
	}
	else if (func_340(-1257057567))
	{
		func_333(1088045886);
		func_342(-1678761663);
		func_342(1724413302);
		func_342(-626641013);
		func_342(535384482);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else if (func_340(-1419919497))
	{
		func_333(-1678761663);
		func_342(1724413302);
		func_342(-626641013);
		func_342(535384482);
		func_342(1088045886);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else if (func_340(-1718674470))
	{
		func_333(1724413302);
		func_342(-626641013);
		func_342(535384482);
		func_342(1088045886);
		func_342(-1678761663);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else if (func_340(-35658630))
	{
		func_333(-626641013);
		func_342(535384482);
		func_342(1088045886);
		func_342(-1678761663);
		func_342(1724413302);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else
	{
		func_333(535384482);
		func_342(1088045886);
		func_342(-1678761663);
		func_342(1724413302);
		func_342(-626641013);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	if (func_340(-108307814))
	{
		func_342(-205505701);
		func_333(-51262018);
	}
	else
	{
		func_342(-51262018);
		func_333(-205505701);
	}
	if (func_340(-1123615607))
	{
		func_342(874022542);
		func_342(GET_HASH_KEY("DES_DIS_ALCHEMIST"));
		func_333(552030279);
		func_356("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_342(552030279);
		func_358("disco_nav_alchemist_house_burnt");
		func_333(874022542);
		func_333(GET_HASH_KEY("DES_DIS_ALCHEMIST"));
	}
	if (func_340(-261141318))
	{
		func_333(-531198053);
	}
	else
	{
		func_342(-531198053);
	}
	func_333(-791673850);
	func_333(-395621323);
	func_333(-1799943886);
	func_333(-1436313374);
	func_333(1473078398);
	func_342(-2116659774);
	func_333(-953275122);
	func_333(-893624314);
	func_333(1193359531);
	func_333(1145227353);
	func_333(1915867459);
	func_333(98482444);
	func_333(26932594);
	func_333(-1930879809);
	func_333(46370274);
	func_333(-1279036865);
	func_333(781058494);
	func_333(1467466015);
	func_333(-363626454);
	func_333(-1314125880);
	func_333(1763246099);
	func_333(-593457329);
	func_333(274045919);
	func_333(-1047394327);
	func_333(-1535282356);
	func_333(-1816233372);
	func_333(-551038153);
	func_333(-1022426685);
	func_333(-262759679);
	func_333(976641588);
	func_333(1601053042);
	func_342(453346329);
	func_333(-1233192626);
	func_342(-620856989);
	func_333(1262164851);
	func_333(-755250900);
	func_358("disco_nav_circus_wagon_off");
	func_333(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	func_334(202);
	func_334(231);
	if (func_340(1015669983))
	{
		func_342(317070801);
		func_333(-763477089);
	}
	else
	{
		func_342(-763477089);
		func_333(317070801);
	}
	if (func_340(1867912207))
	{
		func_343(175);
		func_334(174);
	}
	else
	{
		func_343(174);
		func_334(175);
	}
	if (func_340(-534215902))
	{
		func_343(197);
	}
	else
	{
		func_334(197);
	}
	if (func_340(-9438024))
	{
		func_343(173);
		func_334(171);
		func_334(172);
	}
	else
	{
		func_334(173);
		func_343(171);
		func_343(172);
	}
	if (func_340(-1223121209))
	{
		func_342(1886602884);
		func_342(-1640200357);
		func_333(-1280884206);
	}
	else if (func_340(630808005))
	{
		func_342(-1280884206);
		func_333(1886602884);
		func_333(-1640200357);
	}
	else
	{
		func_342(-1280884206);
		func_342(-1640200357);
		func_333(1886602884);
	}
	if (func_340(1453909576))
	{
		func_342(-2127665186);
		func_342(-451832572);
		func_342(-689352221);
		func_342(1854980771);
		func_342(325677491);
		func_342(-391187090);
		func_342(1513363974);
		func_342(-1349539327);
		func_342(1963724330);
		func_333(-1902184438);
		func_333(1236921921);
		func_333(740012805);
	}
	else if (func_340(1643531967))
	{
		func_342(-1902184438);
		func_342(-689352221);
		func_342(1236921921);
		func_342(-391187090);
		func_342(740012805);
		func_342(1963724330);
		func_333(-2127665186);
		func_333(-451832572);
		func_333(1854980771);
		func_333(325677491);
		func_333(1513363974);
		func_333(-1349539327);
	}
	else
	{
		func_342(-1902184438);
		func_342(-451832572);
		func_342(1236921921);
		func_342(325677491);
		func_342(740012805);
		func_342(-1349539327);
		func_333(-2127665186);
		func_333(-689352221);
		func_333(1854980771);
		func_333(-391187090);
		func_333(1513363974);
		func_333(1963724330);
	}
	if (func_340(1164928979))
	{
		func_342(-1366431554);
		func_333(-960136064);
	}
	else
	{
		func_342(-960136064);
		func_333(-1366431554);
	}
	if (func_340(527226204))
	{
		func_342(-2122914678);
		func_333(-518004776);
	}
	else
	{
		func_342(-518004776);
		func_333(-2122914678);
	}
	if (func_340(1944170089))
	{
		func_333(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		func_342(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (func_340(1213993593))
	{
		func_333(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		func_342(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (func_340(1216784232))
	{
		func_333(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		func_342(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (func_340(1410198831))
	{
		func_333(GET_HASH_KEY("REG_HRT_HUNTING02"));
		func_374(GET_HASH_KEY("REG_HRT_HUNTING02"));
	}
	else
	{
		func_342(GET_HASH_KEY("REG_HRT_HUNTING02"));
		func_373(GET_HASH_KEY("REG_HRT_HUNTING02"));
	}
	if (func_340(-538889627))
	{
		if (func_375(536870912) == 0)
		{
			func_376(536870912);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		func_342(1221694281);
		func_342(-1552951782);
		func_342(-1142569437);
		func_342(474113610);
		func_342(-297340751);
		func_342(1802934313);
		func_342(2108112010);
		func_342(1208537422);
		func_342(361734047);
		func_342(446554495);
		func_342(-118700196);
		func_342(-735136865);
		func_342(636278554);
		func_358("pro_empty_nav");
		func_358("pro_fence_fixed_nav");
		func_358("pro_burned_nav");
		func_333(1423681694);
		func_333(775893260);
		func_333(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_333(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_333(1031662866);
		func_333(-1041976064);
		func_333(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_333(-436084091);
		func_333(-868830916);
		func_333(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_333(-262959893);
		func_333(1049886174);
		func_333(-1042390616);
		func_333(2038589758);
		func_356("pro_fence_broken_nav");
		if (func_28() == -1)
		{
			func_347(22, 16);
			func_377(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_340(-1056767524))
	{
		if (func_375(536870912) == 0)
		{
			func_376(536870912);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		func_342(-436084091);
		func_342(-1552951782);
		func_342(-1142569437);
		func_342(474113610);
		func_342(-297340751);
		func_342(1802934313);
		func_342(2108112010);
		func_342(1208537422);
		func_342(361734047);
		func_342(446554495);
		func_342(-118700196);
		func_342(-735136865);
		func_342(636278554);
		func_358("pro_empty_nav");
		func_358("pro_fence_broken_nav");
		func_358("pro_burned_nav");
		func_333(1423681694);
		func_333(775893260);
		func_333(-329355129);
		func_333(2117211184);
		func_333(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_333(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_333(1031662866);
		func_333(-1041976064);
		func_333(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_333(1221694281);
		func_333(-868830916);
		func_333(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_333(-262959893);
		func_333(1049886174);
		func_333(-1042390616);
		func_333(2038589758);
		func_356("pro_fence_fixed_nav");
		if (func_28() == -1)
		{
			func_347(22, 16);
			func_377(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_340(-182889087))
	{
		if (func_375(536870912) == 0)
		{
			func_376(536870912);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"), -2550f, 400f, 0, 0);
		}
		func_342(-436084091);
		func_342(-1552951782);
		func_342(-1142569437);
		func_342(474113610);
		func_342(-297340751);
		func_342(1802934313);
		func_342(2108112010);
		func_342(1208537422);
		func_342(361734047);
		func_342(446554495);
		func_342(-1042390616);
		func_358("pro_empty_nav");
		func_358("pro_fence_broken_nav");
		func_358("pro_fence_fixed_nav");
		func_333(1423681694);
		func_333(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_333(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_333(1031662866);
		func_333(-1041976064);
		func_333(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_333(1221694281);
		func_333(-868830916);
		func_333(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_333(-262959893);
		func_333(1049886174);
		func_333(-118700196);
		func_333(-735136865);
		func_333(636278554);
		func_333(2038589758);
		func_356("pro_burned_nav");
		if (func_28() == -1)
		{
			func_347(22, 16);
			func_377(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (func_375(536870912))
		{
			func_378(536870912);
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_PRONGHORNRANCH"));
		}
		func_342(1423681694);
		func_342(GET_HASH_KEY("PRO_MANSION_INT_MILO"));
		func_342(GET_HASH_KEY("PRO_BARN_INT_MILO"));
		func_342(1031662866);
		func_342(-1041976064);
		func_342(GET_HASH_KEY("PRO_ES_01_WORKERHOUSE"));
		func_342(1221694281);
		func_342(-436084091);
		func_342(GET_HASH_KEY("PRO_WRKSHP_INT_MILO"));
		func_342(-262959893);
		func_342(1049886174);
		func_342(-1042390616);
		func_342(-118700196);
		func_342(-735136865);
		func_342(636278554);
		func_342(2038589758);
		func_342(775893260);
		func_358("pro_fence_broken_nav");
		func_358("pro_fence_fixed_nav");
		func_358("pro_burned_nav");
		func_333(-1552951782);
		func_333(-1142569437);
		func_333(474113610);
		func_333(-297340751);
		func_333(-868830916);
		func_333(1802934313);
		func_333(2108112010);
		func_333(1208537422);
		func_333(361734047);
		func_333(446554495);
		func_356("pro_empty_nav");
		if (func_28() == -1)
		{
			func_351(22, 16);
			func_379(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_0x4C39C95AE5DB1329(Global_1888801[22 /*35*/].f_4, false, 15);
			}
		}
	}
	if (func_340(2019386373))
	{
		func_342(-217646849);
		func_342(-694809996);
		func_342(-2053475031);
		func_333(-279703229);
		func_333(-623091266);
	}
	else if (func_340(-664252410))
	{
		func_342(-279703229);
		func_342(-2053475031);
		func_333(-217646849);
		func_333(-694809996);
		func_333(-623091266);
	}
	else if (func_340(2109952320))
	{
		func_342(-279703229);
		func_342(-217646849);
		func_342(-623091266);
		func_333(-694809996);
		func_333(-2053475031);
	}
	if (func_340(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (func_340(-1077783786))
	{
		func_342(-961488528);
		func_333(-1569624057);
	}
	else
	{
		func_342(-1569624057);
		func_333(-961488528);
	}
	if (func_340(-299522880))
	{
		func_333(131323483);
		func_342(-134556459);
	}
	else
	{
		func_342(131323483);
		func_333(-134556459);
	}
	if (func_125(45))
	{
		func_342(GET_HASH_KEY("WAP_RAINSFALLS_BASE"));
		func_342(661576070);
		func_342(795060201);
		func_342(1003623269);
		func_342(-395621323);
		func_342(-924329535);
		func_333(739805687);
		func_333(-243627670);
		func_333(-198004806);
		func_356("nav_wapiti_es");
	}
	else
	{
		func_342(739805687);
		func_342(-243627670);
		func_342(-198004806);
		func_358("nav_wapiti_es");
		func_333(1003623269);
		func_333(-924329535);
		func_333(-395621323);
		if (func_340(-389056691))
		{
			func_342(661576070);
			func_333(GET_HASH_KEY("WAP_RAINSFALLS_BASE"));
			func_333(795060201);
		}
		else
		{
			func_342(795060201);
			func_333(GET_HASH_KEY("WAP_RAINSFALLS_BASE"));
			func_333(661576070);
		}
	}
	if (func_340(-1824738758))
	{
		func_333(1489268640);
	}
	else
	{
		func_342(1489268640);
	}
	func_380();
	if (func_340(1221801385))
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
	if (func_340(-306246697))
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
	if (func_340(-1847672446))
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
	if (!func_340(-789397228))
	{
		func_333(-614421509);
		func_333(604920544);
		func_333(GET_HASH_KEY("SER_01_GRANDKOR3"));
		if (func_340(-2022369555))
		{
			func_333(-1716205818);
			func_342(-276259505);
		}
		else
		{
			func_333(-276259505);
			func_342(-1716205818);
		}
		if (!Global_1934765.f_295 && func_381(5))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOAT"), 3290f, -1310f, 0, 0);
			Global_1934765.f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		func_342(-614421509);
		func_342(604920544);
		func_342(GET_HASH_KEY("SER_01_GRANDKOR3"));
		func_342(-276259505);
		func_342(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}
	if (func_340(1358491857))
	{
		func_333(1056170594);
		func_333(-873881483);
		func_333(146172383);
		if (func_340(723021499))
		{
			func_333(GET_HASH_KEY("NEW_BOATS_01_GRANDKOR3"));
			func_342(1157695860);
		}
		else
		{
			func_333(1157695860);
			func_342(GET_HASH_KEY("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && func_381(5))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870f, -1400f, 0, 0);
			Global_1934765.f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		func_342(1056170594);
		func_342(-873881483);
		func_342(GET_HASH_KEY("NEW_BOATS_01_GRANDKOR3"));
		func_342(1157695860);
		func_342(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}
	func_382();
	StringCopy(&cVar1, "nav_sdn_docks_", 64);
	if (func_340(1358491857))
	{
		StringConCat(&cVar1, "korrigan_", 64);
	}
	if (func_340(-1825294305))
	{
		StringConCat(&cVar1, "antenor_", 64);
		func_333(-445068262);
		func_333(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		func_342(-445068262);
		func_342(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (func_340(522677506))
	{
		func_333(1048677741);
		func_333(-2035101386);
		func_333(1284188544);
		func_333(1520435387);
		func_333(876228895);
		StringConCat(&cVar1, "trains_", 64);
	}
	else
	{
		func_342(1048677741);
		func_342(-2035101386);
		func_342(1284188544);
		func_342(1520435387);
		func_342(876228895);
	}
	if (!func_125(45))
	{
		func_342(-274080837);
		func_342(-1036688493);
		func_342(-1512794226);
		func_342(913995529);
		func_333(481139295);
		func_333(165972019);
		func_333(1679182807);
		func_333(-1986089134);
		StringConCat(&cVar1, "pre_es", 64);
	}
	else
	{
		func_342(481139295);
		func_342(165972019);
		func_342(1679182807);
		func_342(-1986089134);
		func_333(-274080837);
		func_333(-1036688493);
		func_333(-1512794226);
		func_333(913995529);
		StringConCat(&cVar1, "es", 64);
	}
	func_356(&cVar1);
	if (func_340(171499483))
	{
		func_342(-890900091);
		func_333(-1758697759);
	}
	else
	{
		func_342(-1758697759);
		func_333(-890900091);
	}
	if (func_340(235928616))
	{
		func_342(GET_HASH_KEY("COM_MULESHED"));
		func_342(1926336063);
		func_342(-800534102);
		func_358("nav_crn1_barn");
		func_333(-886310806);
		func_356("nav_crn1_barn_burnt");
	}
	else
	{
		func_342(-886310806);
		func_358("nav_crn1_barn_burnt");
		func_333(GET_HASH_KEY("COM_MULESHED"));
		func_333(1926336063);
		func_333(-800534102);
		func_356("nav_crn1_barn");
	}
	if (func_340(345808947))
	{
		func_343(190);
		func_334(189);
	}
	else
	{
		func_343(189);
		func_334(190);
	}
	if (func_340(1167397384))
	{
		func_342(1736386364);
	}
	else
	{
		func_333(1736386364);
	}
	if (func_340(2024769126))
	{
		func_342(516817794);
	}
	else
	{
		func_333(516817794);
	}
	if (func_340(-154581735))
	{
		func_342(-262371610);
	}
	else
	{
		func_333(-262371610);
	}
	if (func_340(-1530132748))
	{
		func_342(-389510791);
	}
	else
	{
		func_333(-389510791);
	}
	if (func_340(976539083))
	{
		func_342(71064384);
	}
	else
	{
		func_333(71064384);
	}
	func_333(579127040);
	func_333(-2011620387);
	if (func_340(409602249))
	{
		func_333(677191274);
	}
	else
	{
		func_342(677191274);
	}
	if (func_340(651395116))
	{
		func_333(GET_HASH_KEY("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		func_342(GET_HASH_KEY("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (func_340(1488286867))
	{
		func_333(516308968);
	}
	else
	{
		func_342(516308968);
	}
	if (func_340(665676602))
	{
		func_333(1308321372);
	}
	else
	{
		func_342(1308321372);
	}
	if (func_340(8924991))
	{
		func_333(-449454773);
	}
	else
	{
		func_342(-449454773);
	}
	if (func_340(932909855))
	{
		func_333(-1754541271);
		func_333(-1363999915);
		func_333(-1116430120);
	}
	else
	{
		func_342(-1754541271);
		func_342(-1363999915);
		func_342(-1116430120);
	}
	if (func_340(2051822093))
	{
		func_333(-163883900);
	}
	else
	{
		func_342(-163883900);
	}
	if (func_340(-1241340344))
	{
		func_333(-1010679388);
	}
	else
	{
		func_342(-1010679388);
	}
	if (func_340(-1558439474))
	{
		func_333(1033367448);
	}
	else
	{
		func_342(1033367448);
	}
	if (func_340(2077022393))
	{
		func_342(391022529);
		func_342(-1560636071);
		func_342(1870870569);
		func_342(-904833761);
		func_342(1713084298);
		func_342(928528900);
		func_333(-2118853492);
		func_333(-597126658);
	}
	else
	{
		func_342(-2118853492);
		func_342(-597126658);
		if (func_340(1583012985))
		{
			func_342(391022529);
			func_342(-1560636071);
			func_333(1713084298);
		}
		else
		{
			func_342(1713084298);
			func_333(391022529);
			func_333(-1560636071);
		}
		if (func_340(479419429))
		{
			func_342(1870870569);
			func_342(-904833761);
			func_333(928528900);
		}
		else
		{
			func_342(928528900);
			func_333(1870870569);
			func_333(-904833761);
		}
	}
	if (func_340(-1556423728))
	{
		func_333(-1023331176);
	}
	else
	{
		func_342(-1023331176);
	}
	if (func_340(-144653976))
	{
		func_333(-1809571159);
	}
	else
	{
		func_342(-1809571159);
	}
	if (func_340(-351362068))
	{
		func_333(-2071756699);
	}
	else
	{
		func_342(-2071756699);
	}
	if (func_340(-939114198))
	{
		func_333(-1625703283);
	}
	else
	{
		func_342(-1625703283);
	}
	if (func_340(-1318987693))
	{
		func_333(-1696865897);
	}
	else
	{
		func_342(-1696865897);
	}
	if (func_340(-545450213))
	{
		func_342(-1950049852);
		func_333(-724913398);
	}
	else
	{
		func_342(-724913398);
		func_333(-1950049852);
	}
	func_358("railroad_stageMP");
	if (func_340(-2101264851))
	{
		func_333(1858796535);
		func_333(945532872);
		func_333(-2043326480);
		func_333(992791293);
		func_333(-1815023148);
		func_333(731209239);
		func_333(1531008020);
		func_333(-952533419);
		func_333(582879672);
		func_333(1750312025);
		func_333(-759698431);
		func_333(59954835);
		func_333(-1461922204);
		func_333(2079207010);
		func_333(-1360840312);
		func_333(-816857367);
	}
	else
	{
		func_342(1858796535);
		func_342(945532872);
		func_342(-2043326480);
		func_342(992791293);
		func_342(-1815023148);
		func_342(731209239);
		func_342(1531008020);
		func_342(-952533419);
		func_342(582879672);
		func_342(1750312025);
		func_342(-759698431);
		func_342(59954835);
		func_342(-1461922204);
		func_342(2079207010);
		func_342(-1360840312);
		func_342(-816857367);
	}
	if (func_340(434558613))
	{
		func_333(-715865581);
		func_342(-1387511711);
		func_342(1901132483);
		func_342(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_358("rmllr_cabin_normal");
		func_356("rmllr_cabin_burnt");
	}
	else
	{
		func_333(-1387511711);
		func_333(1901132483);
		func_342(-2082345587);
		func_342(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_358("rmllr_cabin_burnt");
		func_356("rmllr_cabin_normal");
	}
	if (func_340(1186594126))
	{
		func_333(GET_HASH_KEY("CVB_MURDERTREE"));
	}
	else
	{
		func_342(GET_HASH_KEY("CVB_MURDERTREE"));
	}
	if (func_340(469053995))
	{
		func_333(GET_HASH_KEY("M_07_P_MURDERROCK"));
	}
	else
	{
		func_342(GET_HASH_KEY("M_07_P_MURDERROCK"));
	}
	if (func_340(476714362))
	{
		func_333(GET_HASH_KEY("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		func_342(GET_HASH_KEY("M_09_P_CAMPFIREMURDER"));
	}
	if (func_340(1947931439))
	{
		func_333(1628286919);
		func_342(GET_HASH_KEY("NEW_COM_07_NOHOTEL"));
		func_342(GET_HASH_KEY("NEW_COM_07_WIN"));
	}
	else
	{
		func_333(GET_HASH_KEY("NEW_COM_07_NOHOTEL"));
		func_333(GET_HASH_KEY("NEW_COM_07_WIN"));
		func_342(1628286919);
	}
	if (func_340(-879507474))
	{
		func_342(1928252407);
		func_333(-98843293);
	}
	else
	{
		func_342(-98843293);
		func_333(1928252407);
	}
	if (func_340(1050128548))
	{
		func_333(GET_HASH_KEY("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		func_342(GET_HASH_KEY("RE_SP_SAVAGEWARNING_01"));
	}
	if (func_340(868326136))
	{
		func_333(GET_HASH_KEY("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		func_342(GET_HASH_KEY("RE_SP_SAVAGEWARNING_02"));
	}
	if (func_340(-515561750))
	{
		func_342(-892659042);
		func_342(30201771);
		func_333(517553365);
		func_356("mud4_saloon_fight");
	}
	else if (func_340(26245360))
	{
		func_358("mud4_saloon_fight");
		func_342(30201771);
		func_333(-2083943324);
		func_333(517553365);
		func_356("mud4_saloon_fight_start");
	}
	else
	{
		func_358("mud4_saloon_fight_start");
		func_358("mud4_saloon_fight");
		func_342(517553365);
		func_342(-2083943324);
		func_333(30201771);
	}
	if (func_340(-1060078174))
	{
		if (func_125(45))
		{
			func_342(GET_HASH_KEY("K_11_P_MARY1_CAMP"));
			func_358("MS_MARY1_CAMP");
			func_333(GET_HASH_KEY("K_11_P_CHELONIAN_CAMP"));
			func_356("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_342(GET_HASH_KEY("K_11_P_CHELONIAN_CAMP"));
			func_358("MS_CHELONIAN_CAMP");
			func_333(GET_HASH_KEY("K_11_P_MARY1_CAMP"));
			func_356("MS_MARY1_CAMP");
		}
		func_383(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		func_383(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		func_383(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		func_342(GET_HASH_KEY("K_11_P_MARY1_CAMP"));
		func_342(GET_HASH_KEY("K_11_P_CHELONIAN_CAMP"));
		func_384(&(Global_1934765.f_17), 1);
		func_384(&(Global_1934765.f_18), 1);
		func_384(&(Global_1934765.f_19), 1);
	}
	if (func_340(817925178))
	{
		func_333(-1417469821);
	}
	else
	{
		func_342(-1417469821);
	}
	if (func_340(-785605431))
	{
	}
	else
	{
		func_342(146172383);
	}
	if (func_340(1557082963))
	{
		func_342(GET_HASH_KEY("C_13_NOTRAP_01"));
		func_342(765343099);
		func_333(-909306169);
	}
	else if (func_340(-350863510))
	{
		func_342(GET_HASH_KEY("C_13_NOTRAP_01"));
		func_342(-909306169);
		func_333(765343099);
	}
	else
	{
		func_342(765343099);
		func_342(-909306169);
		func_333(GET_HASH_KEY("C_13_NOTRAP_01"));
	}
	if (func_340(-1952856164))
	{
		func_342(-890900091);
		func_342(-1758697759);
		func_333(591001924);
	}
	else if (func_340(249726958))
	{
		func_342(-890900091);
		func_342(591001924);
		func_333(-1758697759);
	}
	else
	{
		func_342(-1758697759);
		func_342(591001924);
		func_333(-890900091);
	}
	if (func_340(-99303535))
	{
		func_342(-2092712551);
		func_333(-1307469679);
	}
	else if (func_340(1433244935))
	{
		func_342(-1307469679);
		func_333(-2092712551);
	}
	else
	{
		func_342(-2092712551);
		func_342(-1307469679);
	}
	func_385(1512816328, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC01_01"));
	func_385(1207048789, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC02_01"));
	func_385(-1230112817, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC03_01"));
	func_385(-1278074582, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC01_02"));
	func_385(-1436021162, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC02_02"));
	func_385(407136781, GET_HASH_KEY("GANG_SKINAFTERMATH_LOC03_02"));
	if (func_340(-978957786))
	{
		func_333(1111220101);
		func_333(1372565859);
		func_333(1644962309);
		if (!Global_1934765.f_296 && func_381(127))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_THIEVESLANDINGBOAT"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		func_342(1111220101);
		func_342(1372565859);
		func_342(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (func_340(559573222))
	{
		func_342(1137646647);
		func_333(-898081380);
	}
	else
	{
		func_342(-898081380);
		func_333(1137646647);
	}
	if (func_340(-1818850842))
	{
		func_342(1584946069);
	}
	else
	{
		func_333(1584946069);
	}
	if (func_340(-792853067))
	{
		func_342(-1828030290);
		func_333(827269092);
	}
	else
	{
		func_333(-1828030290);
		func_342(827269092);
	}
	if (func_340(1151197909))
	{
		func_334(165);
	}
	else
	{
		func_343(165);
	}
	if (func_340(-828139293))
	{
		func_342(1364392658);
		func_333(-794503195);
		func_356("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BRIDGEDESTROYED"), 512f, 1756f, 0, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		func_342(-794503195);
		func_333(1364392658);
		func_358("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (func_340(-464836488))
	{
		func_342(-1192199739);
		func_333(-65072454);
	}
	else
	{
		func_342(-65072454);
		func_333(-1192199739);
	}
	if (func_340(-233743613))
	{
		func_333(1692451176);
	}
	else
	{
		func_342(1692451176);
	}
	if (func_340(1203043430))
	{
		func_333(-102951407);
	}
	else
	{
		func_342(-102951407);
	}
	if (func_340(299694527))
	{
		func_333(1833824812);
	}
	else
	{
		func_342(1833824812);
	}
	if (func_259() == 2)
	{
		if (func_340(-1949204933))
		{
			func_342(1734859244);
			func_333(719147410);
		}
		else
		{
			func_333(1734859244);
			func_342(719147410);
		}
	}
	if (!func_369(4))
	{
		if (func_259() == 1 && func_386() == 1)
		{
			if (func_340(442317566))
			{
				func_342(1948051928);
				func_333(1453569688);
			}
			else
			{
				func_333(1948051928);
				func_342(1453569688);
			}
		}
		else
		{
			func_342(1453569688);
			func_342(1948051928);
		}
	}
	if (func_340(-736853952))
	{
		func_333(GET_HASH_KEY("MISSION_SEAN_1"));
		func_374(GET_HASH_KEY("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		func_342(GET_HASH_KEY("MISSION_SEAN_1"));
		func_373(GET_HASH_KEY("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (func_340(1478132521))
	{
		func_342(1759143160);
		func_333(398639187);
		func_358("reservation_abandoned");
		func_356("nav_sean1_camp");
	}
	else
	{
		func_342(398639187);
		func_333(1759143160);
	}
	if (func_340(-360036154))
	{
		func_342(1136457806);
		func_333(1255880931);
	}
	else
	{
		func_333(1136457806);
		func_342(1255880931);
	}
	if (func_340(2024383613))
	{
		func_342(-753844687);
		func_333(GET_HASH_KEY("NAT_NATIVE1_COH_02"));
		func_356("ntv1_cohutta");
	}
	else
	{
		func_333(-753844687);
		func_342(GET_HASH_KEY("NAT_NATIVE1_COH_02"));
		func_358("ntv1_cohutta");
	}
	if (func_340(-622554983))
	{
		func_333(GET_HASH_KEY("NAT_NATIVE1_ARMY_01"));
		func_356("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			func_387(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		func_342(GET_HASH_KEY("NAT_NATIVE1_ARMY_01"));
		func_358("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			func_388(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (func_340(1954026328))
	{
		func_333(-1835067413);
		func_342(-1392150519);
		func_334(226);
	}
	else
	{
		func_333(-1392150519);
		func_342(-1835067413);
		func_343(226);
	}
	if (func_340(-330120947))
	{
		func_333(GET_HASH_KEY("SDS_WELL_COVER"));
	}
	else
	{
		func_342(GET_HASH_KEY("SDS_WELL_COVER"));
	}
	if (func_340(-1764522338))
	{
		func_342(GET_HASH_KEY("N_1114_WATERTOWER01_FEUD1"));
		func_333(GET_HASH_KEY("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		func_333(GET_HASH_KEY("N_1114_WATERTOWER01_FEUD1"));
		func_342(GET_HASH_KEY("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (func_340(-76237062))
	{
		func_333(-1085363933);
		func_333(-537740003);
		func_356("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_342(-1085363933);
		func_342(-537740003);
		func_358("trn1_nav_ann_shootout_00");
	}
	if (func_340(-333135263))
	{
		func_333(728046625);
	}
	else
	{
		func_342(728046625);
	}
	if (func_340(885203519))
	{
		func_334(228);
	}
	else
	{
		func_343(228);
	}
	if (func_340(-1080627546))
	{
		func_334(227);
	}
	else
	{
		func_343(227);
	}
	if (func_340(1522511407))
	{
		func_333(-929277449);
		func_333(-723094901);
		func_333(-801609437);
	}
	else
	{
		func_342(-929277449);
		func_342(-723094901);
		func_342(-801609437);
	}
	if (func_340(1446719356))
	{
		func_333(GET_HASH_KEY("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		func_342(GET_HASH_KEY("P_12P_BLACKWHITE_CAMP"));
	}
	if (func_340(171107021))
	{
		func_333(GET_HASH_KEY("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		func_342(GET_HASH_KEY("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

void func_119()
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

bool func_120(int iParam0, bool bParam1)
{
	switch (func_389(iParam0))
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

bool func_121()
{
	return false;
}

bool func_122()
{
	if (func_32(43) && !func_32(44))
	{
		return false;
	}
	if (func_32(67) && func_259() != 8)
	{
		return false;
	}
	return true;
}

bool func_123()
{
	if (func_28() != -1)
	{
		return false;
	}
	if (!func_35())
	{
		return false;
	}
	if (!func_120(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_120(Global_1835011[2 /*74*/].f_1, 1) && func_120(Global_1347702[120 /*49*/].f_15, 1)) && !func_120(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_120(Global_1835011[37 /*74*/].f_1, 1) && !func_120(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_120(Global_1835011[57 /*74*/].f_1, 1) && !func_120(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_120(Global_1835011[26 /*74*/].f_1, 1) && !func_120(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_120(Global_1835011[62 /*74*/].f_1, 1) && func_120(Global_1835011[63 /*74*/].f_1, 1)) && !func_120(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_120(Global_1835011[75 /*74*/].f_1, 1) && !func_120(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_120(Global_1835011[76 /*74*/].f_1, 1) && !func_120(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_120(Global_1835011[40 /*74*/].f_1, 1) && func_120(Global_1835011[41 /*74*/].f_1, 1)) && !func_120(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_120(Global_1835011[62 /*74*/].f_1, 1) && func_120(Global_1835011[63 /*74*/].f_1, 1)) && !func_120(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_120(Global_1835011[65 /*74*/].f_1, 1) && func_120(Global_1835011[66 /*74*/].f_1, 1)) && !func_120(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

int func_124(var uParam0, int iParam1, int iParam2)
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
	bVar18 = func_390(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_391("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_392(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_39(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_390(iParam1, 512) && func_393(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_390(iParam1, 32))) && (!WEAPON::IS_WEAPON_PISTOL(Var4.f_4) || !func_390(iParam1, 16777216))) && (!WEAPON::IS_WEAPON_REVOLVER(Var4.f_4) || !func_390(iParam1, 33554432)))
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
		func_394(iVar1);
	}
	if (func_39(iVar0))
	{
	}
	else if (!func_390(iParam1, 512))
	{
		iParam1 |= 512;
		return func_124(uParam0, iParam1, iParam2);
	}
	else if (func_390(iParam1, 256))
	{
		iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_125(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	return func_395(iParam0);
}

bool func_126(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_127(int iParam0)
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

int func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_396();
	}
	if (func_28() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

bool func_129(int iParam0, int iParam1)
{
	if (!func_397(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_130(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_398(iParam1);
	func_399(&(Global_1946804.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964));
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_397(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_132(int iParam0, int iParam1)
{
	if (!func_397(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_133(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

void func_134()
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
	if (!func_400(1))
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
	TASK::TASK_PLAY_ANIM(Global_35, func_401(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_402(1);
	STREAMING::REMOVE_ANIM_DICT(func_401());
}

bool func_135(int iParam0)
{
	return false;
}

int func_136(int iParam0)
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

void func_137(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar4 = func_403(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_28() != -1)
	{
		return;
	}
	func_404();
	if (bParam5)
	{
		if (!func_405(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_400(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		func_406();
	}
	func_407(iVar3, 1, 1, 1, 1, 1);
	func_408(31, 0, 0, 0, 0);
	func_409(0);
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
		if (PED::IS_PED_A_PLAYER(bParam1))
		{
			func_408(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_408(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		func_410(&(Global_1946804.f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

void func_138(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_139()
{
	if (func_28() != -1)
	{
		return;
	}
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0x5D6182F3BCE1333B(1, -142743235);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_411(1, 1);
}

int func_140()
{
	if (!func_413(-1898635967, func_412(), 1))
	{
		return 0;
	}
	if (func_414())
	{
		if (!func_413(146323340, func_412(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_141(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_38(iVar1, 0))
		{
			func_415(iVar1, 0, bParam0);
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

void func_142(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 - (Global_26796.f_774 && iParam0));
}

void func_143(int iParam0)
{
	Global_1946804.f_1 = iParam0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	func_416(&Global_1949604);
	func_417();
	iVar2 = 0;
	if (func_418(1))
	{
		Global_1946804.f_1 = Global_26796.f_775;
		func_141(0);
		if (((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && func_120(Global_1835011[4 /*74*/].f_1, 1)) && !func_418(16))
		{
			func_419(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
			func_420();
			func_421(16);
		}
		func_422();
		switch (Global_1946804.f_1)
		{
			case -2125499975:
			case -449205311:
				Global_40.f_39 = GET_HASH_KEY("PLAYER_ZERO");
				Global_1935630.f_2 = Global_40.f_39;
				break;
			case 1160113249:
				Global_1935630.f_2 = GET_HASH_KEY("PLAYER_THREE");
				if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::GET_ENTITY_MODEL(Global_35) != GET_HASH_KEY("PLAYER_THREE"))
				{
					Global_40.f_39 = 0;
				}
				break;
		}
	}
	else
	{
		func_141(1);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_26796.f_26[iVar0 /*120*/] = 0;
			Global_26796.f_26[iVar0 /*120*/].f_1 = 0;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				vVar3.x = Global_1946804.f_57[iVar1 /*11*/];
				Global_26796.f_26[iVar0 /*120*/].f_1.f_1[iVar1 /*3*/] = { vVar3 };
				iVar1++;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			vVar3.x = Global_1946804.f_57[iVar1 /*11*/];
			Global_1946804.f_1497.f_1[iVar1 /*3*/] = { vVar3 };
			Global_1946804.f_1378.f_1[iVar1 /*3*/] = { vVar3 };
			iVar1++;
		}
		if ((((Global_1946804.f_1 == 0 || Global_1946804.f_1 == -2125499975) || Global_1946804.f_1 == -449205311) || Global_1946804.f_1 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_MALE")) || Global_1946804.f_1 == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			func_143(-2125499975);
			func_423(&(Global_1946804.f_1378), 2020890174, &iVar2, 0, 0, 0, 0);
			func_424(GET_HASH_KEY("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
			func_423(&(Global_1946804.f_1378), GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"), &iVar2, 0, 1, 0, 0);
			Global_26796.f_776 = 0;
			func_407(-1, 0, 1, 1, 1, 0);
			func_425(-1, 0, 0, 6);
			func_426(GET_HASH_KEY("CLOTHING_MULTI_ITEM_CLEAN"), 3, 3, 3, 0);
			func_427(0, 5, 0);
			Global_40.f_39 = GET_HASH_KEY("PLAYER_ZERO");
			Global_1935630.f_2 = Global_40.f_39;
			Global_26796.f_775 = Global_1946804.f_1;
		}
		else if (Global_1946804.f_1 == 1160113249)
		{
			func_143(Global_1946804.f_1);
			switch (Global_1946804.f_1)
			{
				case 1160113249:
					Global_1935630.f_2 = GET_HASH_KEY("PLAYER_THREE");
					Global_40.f_39 = 0;
					break;
			}
		}
		func_421(1);
		func_428(7);
	}
	Global_1347698 = 0;
	Global_1347698.f_1 = 0;
	Global_1347698.f_2 = 0;
	return 1;
}

int func_145()
{
	return Global_1946804.f_1;
}

void func_146()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (func_429(iVar0))
		{
			Global_40.f_7157[iVar0 /*3*/] = 1;
		}
		iVar0++;
	}
}

void func_147(int iParam0)
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
			func_430(1);
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
			func_431(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_431(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_431(3);
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
			func_432(1);
			break;
		case 34:
			func_433(1);
			break;
		case 35:
			func_434(1);
			break;
		case 36:
			break;
		case 37:
			func_435(0);
			break;
		case 38:
			func_436(0);
			break;
		case 39:
			func_437(0);
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
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_438("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_439(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_438("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_439(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_438("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_439(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_438("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", GET_HASH_KEY("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_439(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_28() == -1)
			{
				if (!func_440(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) || func_441(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_372())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = GET_HASH_KEY("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_162(iVar0, 1, 0))
					{
						func_442(iVar0, 1, 752097756);
					}
					func_443(Global_35, iVar0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_28() == -1)
			{
				if (!func_162(1013902307, 1, 0))
				{
					func_442(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_28() == -1)
			{
				if (!func_162(1013902307, 1, 0))
				{
					func_442(1013902307, 1, 752097756);
				}
				if (!func_162(142640135, 1, 0))
				{
					func_442(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_28() == -1)
			{
				if (!func_162(786809402, 1, 0))
				{
					func_442(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_28() == -1)
			{
				if (!func_162(786809402, 1, 0))
				{
					func_442(786809402, 1, 752097756);
				}
				if (!func_162(-518019409, 1, 0))
				{
					func_442(-518019409, 1, 752097756);
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
			func_444();
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

void func_148(int iParam0)
{
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
			func_430(0);
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
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 2);
			func_445(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 2);
			func_445(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 2);
			func_445(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 2);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 2);
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
			func_432(0);
			break;
		case 34:
			func_433(0);
			break;
		case 35:
			func_434(0);
			break;
		case 36:
			break;
		case 37:
			func_435(1);
			break;
		case 38:
			func_436(1);
			break;
		case 39:
			func_437(1);
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
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 2:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 1)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			}
			break;
		case 3:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 2)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			}
			break;
		case 4:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 3)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			}
			break;
		case 5:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 4)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			}
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), false);
			UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), false);
			break;
		case 48:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 50:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 49:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 51:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(1);
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
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER"), false);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_ENDLESS_SUMMER_WEAPONS"), false);
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_POST_GANG1"), false);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), false);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), false);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("COMPENDIUM"), false);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_PEDS_REACT_TO_SICK_ATHUR"), false);
			break;
	}
}

void func_149()
{
}

int func_150(bool bParam0)
{
	func_446(6, 0, 0, 513, bParam0);
	func_446(62, 0, 0, 513, bParam0);
	func_446(7, 0, 4, 513, bParam0);
	func_446(8, 0, 4, 513, bParam0);
	func_446(9, 0, 8, 513, bParam0);
	func_446(10, 0, 8, 513, bParam0);
	func_446(12, 0, 0, 1, 0);
	func_446(11, 0, 0, 17, bParam0);
	func_446(14, 0, 0, 1, 0);
	func_446(13, 0, 0, 1, 0);
	func_446(61, 0, 0, 1, 0);
	func_446(63, 0, 0, 1, 0);
	func_446(70, 0, 4, 513, bParam0);
	func_446(94, 0, 0, 1, 0);
	func_446(15, 0, 0, 545, bParam0);
	func_446(16, 0, 0, 521, bParam0);
	func_446(17, 0, 0, 521, bParam0);
	func_446(18, 0, 0, 1, 0);
	func_446(19, 0, 0, 1, 0);
	func_446(20, 0, 0, 1, 0);
	func_446(0, 0, 0, 513, bParam0);
	func_446(1, 0, 0, 513, bParam0);
	func_446(2, 0, 0, 513, bParam0);
	func_446(3, 0, 0, 513, bParam0);
	func_446(4, 0, 0, 513, bParam0);
	func_446(5, 0, 0, 513, bParam0);
	func_446(24, 0, 0, 513, bParam0);
	func_446(25, 0, 0, 513, bParam0);
	func_446(26, 0, 0, 513, bParam0);
	func_446(27, 0, 0, 513, bParam0);
	func_446(28, 0, 0, 513, bParam0);
	func_446(21, 0, 0, 513, bParam0);
	func_446(22, 0, 0, 513, bParam0);
	func_446(29, 0, 0, 513, bParam0);
	func_446(30, 0, 0, 513, bParam0);
	func_446(31, 0, 0, 513, bParam0);
	func_446(32, 0, 0, 513, bParam0);
	func_446(33, 0, 0, 513, bParam0);
	func_446(34, 0, 0, 513, bParam0);
	func_446(35, 0, 0, 513, bParam0);
	func_446(36, 0, 0, 513, bParam0);
	func_446(37, 0, 0, 513, bParam0);
	func_446(38, 0, 0, 513, bParam0);
	func_446(39, 0, 0, 513, bParam0);
	func_446(40, 0, 0, 513, bParam0);
	func_446(41, 0, 0, 513, bParam0);
	func_446(42, 0, 0, 513, bParam0);
	func_446(43, 0, 0, 513, bParam0);
	func_446(44, 0, 0, 513, bParam0);
	func_446(45, 0, 0, 513, bParam0);
	func_446(46, 0, 0, 513, bParam0);
	func_446(47, 0, 0, 513, bParam0);
	func_446(48, 0, 0, 513, bParam0);
	func_446(49, 0, 0, 513, bParam0);
	func_446(50, 0, 0, 513, bParam0);
	func_446(51, 0, 0, 513, bParam0);
	func_446(52, 0, 0, 513, bParam0);
	func_446(53, 0, 0, 513, bParam0);
	func_446(54, 0, 0, 513, bParam0);
	func_446(55, 0, 0, 513, bParam0);
	func_446(56, 0, 0, 513, bParam0);
	func_446(57, 0, 0, 513, bParam0);
	func_446(58, 0, 0, 513, bParam0);
	func_446(59, 0, 0, 513, bParam0);
	func_446(60, 0, 0, 513, bParam0);
	func_446(23, 0, 0, 1, 0);
	func_446(67, 0, 0, 1, 0);
	func_446(68, 0, 0, 1, 0);
	func_446(69, 0, 0, 1, 0);
	func_446(75, 0, 0, 1, 0);
	func_446(79, 0, 0, 1, 0);
	func_446(83, 0, 0, 1, 0);
	func_446(87, 0, 0, 1, 0);
	func_446(71, 0, 0, 1, 0);
	func_446(73, 0, 0, 1, 0);
	func_446(77, 0, 0, 1, 0);
	func_446(78, 0, 0, 1, 0);
	func_446(81, 0, 0, 1, 0);
	func_446(85, 0, 0, 1, 0);
	func_446(89, 0, 0, 1, 0);
	func_446(76, 0, 0, 1, 0);
	func_446(80, 0, 0, 1, 0);
	func_446(82, 0, 0, 1, 0);
	func_446(84, 0, 0, 1, 0);
	func_446(86, 0, 0, 1, 0);
	func_446(88, 0, 0, 1, 0);
	func_446(72, 0, 0, 1, 0);
	func_446(74, 0, 0, 1, 0);
	func_446(93, 0, 0, 513, bParam0);
	func_446(66, 0, 0, 1, 0);
	func_446(64, 0, 0, 1, 0);
	func_446(70, 0, 4, 513, bParam0);
	func_446(90, 0, 0, 1, 0);
	func_446(65, 0, 0, 513, bParam0);
	func_446(91, 0, 0, 513, bParam0);
	func_446(92, 0, 0, 1, 0);
	func_447(1);
	return 1;
}

void func_151(bool bParam0)
{
	if (func_28() != -1)
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
		func_439(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_439(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_448(1, bParam0, 1);
	func_449();
	Global_40.f_11095.f_43 = bParam0;
}

bool func_152(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_38(iParam0, 0))
	{
		return false;
	}
	if (!func_450(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_451(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_452(iParam0, bParam2);
	iVar2 = 0;
	if (func_453(iParam0, 0, 0) == 0)
	{
		if (func_454(iParam0))
		{
			iVar5 = func_455(iParam0);
			iVar6 = func_456(iVar5);
			iVar7 = func_457(iVar6) + 1;
			func_458(iVar5);
			if (func_206(38))
			{
				func_439(483, 0);
			}
			else
			{
				func_439(482, 0);
			}
			if (iVar7 == func_459(iVar6))
			{
				func_152(func_460(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_35() && func_461(4))
				{
					if (func_35() && (func_462(38) || func_206(38)))
					{
						func_464(38, func_460(iVar6), 0, 0, func_463(), 0, -1, 0);
						func_465(2);
					}
					else
					{
						func_464(38, func_460(iVar6), 0, 0, func_463(), 0, -1, 0);
						func_465(1);
					}
				}
			}
			else if (func_35() && func_461(4))
			{
				if (func_35() && (func_462(38) || func_206(38)))
				{
					func_464(38, 0, 0, 0, func_463(), 0, -1, 0);
					func_465(2);
				}
				else
				{
					func_464(38, 0, 0, 0, func_463(), 0, -1, 0);
					func_465(1);
				}
			}
			if (func_35() && func_461(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_35() && (func_462(38) || func_206(38)))
					{
						func_466(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_466(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_467(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_468(iParam0, 866047851) && !func_468(iParam0, -1979000645)) && !func_468(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_469(iParam0, 8388608) && !func_125(28))
	{
		func_156(28);
	}
	if (!bVar3)
	{
		if (func_468(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_470(iParam0) == -1447088266)
			{
				iVar1 = func_472(func_471(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_28() == -1)
					{
						func_153(iVar1);
					}
					if (func_473(0) && func_474(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_475(iParam0, iVar0, iParam5);
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
					if (func_28() == -1)
					{
						func_153(iParam0);
					}
					if (func_473(0) && func_474(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_475(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_467(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_476(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_467(iParam0) == GET_HASH_KEY("AMMO") && func_477(iParam0))
		{
			if (!func_478(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_468(iParam0, 866047851))
		{
			func_479(iParam0);
		}
		else if (func_468(iParam0, 2000026003))
		{
			func_480(iParam0);
		}
		else if (func_468(iParam0, -103750053))
		{
			func_482(func_481(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_482(func_284(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_468(iParam0, -121341956) && !func_468(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_120(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_439(498, 0);
				}
			}
			if (func_468(iParam0, -2017733358) || func_468(iParam0, -1369131378))
			{
				func_483(iParam0);
			}
		}
		else if (func_468(iParam0, -136654233))
		{
			if (func_468(iParam0, -1021472396))
			{
			}
		}
		else if (func_468(iParam0, -1466706512) && func_468(iParam0, 1147021565))
		{
			func_439(484, 0);
		}
		else if (func_468(iParam0, 1147021565) && func_468(iParam0, -524514947))
		{
		}
		else if (func_468(iParam0, 554195525))
		{
		}
		else if (func_468(iParam0, 589988438))
		{
			if (func_484())
			{
				func_485(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_468(iParam0, 787083290) && func_468(iParam0, 949916894))
		{
			func_486(iParam0);
		}
		else if (func_468(iParam0, -1718133314))
		{
			func_487(iParam0);
		}
		else if (func_468(iParam0, -1738650224))
		{
			func_488(iParam0);
		}
		else if (func_468(iParam0, -1112814642) && func_468(iParam0, 949916894))
		{
			func_489(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_468(iParam0, 1841149704))
		{
			func_490();
		}
		else if (func_468(iParam0, 606799272))
		{
			func_491(iParam0, iParam1);
			func_492(iParam0);
		}
		else if (func_468(iParam0, -1112814642) && func_468(iParam0, -1697809989))
		{
			func_493(iParam0, 0, 0, 0);
		}
		else if (func_468(iParam0, -2017733358) || func_468(iParam0, -1369131378))
		{
			func_483(iParam0);
		}
		else if (func_468(iParam0, -1921346699))
		{
			if (func_28() != -1)
			{
				return false;
			}
			func_494(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_468(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_162(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_152(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_162(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_152(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_162(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_152(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_162(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_152(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_162(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_152(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_162(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_152(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_468(iParam0, -839724752) && func_469(iParam0, 4))
		{
			if (!func_206(42))
			{
				func_495(iParam0);
			}
		}
		else if (func_468(iParam0, 1399091007))
		{
			func_496(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_468(iParam0, 1248798204))
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
				func_152(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_156(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_443(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_497(&iVar9, 0))
				{
					func_474(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_28() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_443(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_439(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_498();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_499();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_500();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_501();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_449();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_502(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_503(499813453, 0);
				func_504(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_502(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_503(499813453, 0);
				func_504(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_502(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_503(499813453, 0);
				func_504(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_502(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_503(666607663, 0);
				func_505(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_502(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_503(666607663, 0);
				func_505(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_502(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_503(666607663, 0);
				func_505(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_502(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_503(-220219788, 0);
				func_506(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_502(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_503(-220219788, 0);
				func_506(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_502(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_503(-220219788, 0);
				func_506(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_502(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_503(218622660, 0);
				func_507(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_502(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_503(218622660, 0);
				func_507(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_502(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_503(390004462, 0);
				func_508(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_502(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_503(390004462, 0);
				func_508(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_502(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_503(390004462, 0);
				func_508(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_503(6410548, 0);
				func_509(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_503(6410548, 0);
				func_509(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_503(6410548, 0);
				func_509(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_503(6410548, 0);
				func_509(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_511(242, func_510(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_511(240, func_510(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_511(241, func_510(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_512(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_512(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_512(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_512(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_512(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_512(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_439(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_439(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_439(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_152(func_513(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_152(func_514(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_125(1))
				{
					func_439(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_439(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_28() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_439(496, 0);
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
		func_515(&iVar10);
		if (!func_442(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_473(0))
		{
			return true;
		}
		if (func_467(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_516(iParam0);
		}
		if (func_468(iParam0, -1979000645))
		{
			func_517(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_473(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_152(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_518(iVar2, 0);
		}
	}
	Var35 = { func_519(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_520(iParam0);
	if (fParam6 > 0f)
	{
		if (func_468(iParam0, -839724752))
		{
			func_521(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_522(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_153(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_39(iParam0))
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

void func_154(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_523(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_524(iVar5, &iVar2, &iVar0))
			{
				if (!func_38(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_525(iVar2);
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
							if (func_467(iVar2) == GET_HASH_KEY("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_526() <= -160;
								}
								else if (iVar0 == GET_HASH_KEY("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_526() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_527();
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

struct<2> func_155(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_156(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_528(iParam0);
	func_147(iParam0);
}

bool func_157()
{
	return false;
}

void func_158(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_529(iParam0);
	if (!bParam1)
	{
		func_530(iVar0, sParam4, iParam5);
	}
	func_531(iVar0, bParam1, fParam2, iParam3, 752097756);
}

void func_159(bool bParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, GET_HASH_KEY("WEAPON_FISHINGROD"), 0, false))
	{
		func_152(GET_HASH_KEY("WEAPON_FISHINGROD"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

void func_160()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		Global_17504.f_42[iVar0 /*8*/].f_2 = 0;
		Global_17504.f_42[iVar0 /*8*/].f_3 = 0;
		Global_17504.f_42[iVar0 /*8*/].f_1 = 0;
		Global_17504.f_42[iVar0 /*8*/] = 0;
		iVar0++;
	}
}

void func_161(int iParam0, int iParam1, bool bParam2)
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

bool func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_38(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_467(iParam0);
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
		if (!func_532(iParam0, 1))
		{
			return false;
		}
	}
	return func_453(iParam0, 0, bParam2) >= iParam1;
}

void func_163(vector3 vParam0, bool bParam3)
{
	int iVar0;

	if (!func_35() || bParam3)
	{
		iVar0 = func_533(vParam0, 1);
		Global_40.f_7729 = iVar0;
	}
	else
	{
		iVar0 = Global_40.f_7729;
	}
	Global_1905941 = Global_40.f_7729;
	func_47(Global_35, iVar0, 1, !bParam3, 0);
	func_534();
}

void func_164(int iParam0, bool bParam1)
{
	if (func_28() == -1)
	{
		func_535(0, iParam0);
		func_535(2, iParam0);
		func_535(1, iParam0);
		if (bParam1)
		{
			func_536(10, iParam0);
			func_536(12, iParam0);
			func_536(13, iParam0);
			func_536(15, iParam0);
		}
	}
}

void func_165()
{
	Global_40.f_11095.f_42 = 0;
	Global_40.f_11095.f_43 = 0;
	Global_40.f_11095.f_44 = 0f;
	Global_40.f_11095.f_45 = 0f;
	Global_40.f_11095.f_49 = 0f;
	Global_40.f_11095.f_50 = 0f;
	Global_40.f_11095.f_51 = 0f;
	Global_40.f_11095.f_52 = 0f;
	Global_40.f_11095.f_53 = 0f;
	Global_40.f_11095.f_54 = 0f;
	Global_40.f_11095.f_55 = 0f;
	Global_40.f_11095.f_56 = 0f;
	Global_40.f_11095.f_57 = 0f;
	Global_40.f_11095.f_58 = 0f;
	Global_40.f_11095.f_59 = 0f;
	Global_40.f_11095.f_60 = 0f;
	Global_40.f_11095.f_61 = 0f;
	Global_40.f_11095.f_62 = 0f;
	Global_40.f_11095.f_63 = 0f;
	Global_40.f_11095.f_64 = 0f;
	Global_40.f_11095.f_65 = 0;
	Global_40.f_11095.f_66 = 0;
	Global_40.f_11095.f_68 = 0f;
	Global_40.f_11095.f_69 = 0f;
	Global_40.f_11095.f_70 = 0f;
	func_500();
	func_537();
	func_498();
	func_501();
	func_538();
	func_499();
	func_539();
}

void func_166()
{
	Global_1347477.f_185 = 0;
	Global_1347477.f_184 = -1;
	Global_1347477.f_189 = 0;
	Global_1347477.f_190 = 0;
}

void func_167(bool bParam0)
{
	if (func_28() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_168(bool bParam0, bool bParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_42();
	if (bParam1)
	{
		func_61(-1);
	}
}

void func_169(bool bParam0)
{
	if (func_28() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_43();
}

void func_170()
{
	int iVar0;

	if (func_28() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_23118[iVar0 /*11*/].f_1 = -15;
			Global_23118[iVar0 /*11*/].f_4 = -1;
			Global_23118[iVar0 /*11*/].f_4.f_1 = 0;
			Global_23118[iVar0 /*11*/].f_4.f_2 = 0;
			Global_23118[iVar0 /*11*/].f_4.f_3 = 0;
			func_290(&(Global_23118[iVar0 /*11*/].f_4.f_5), 1);
			Global_23118[iVar0 /*11*/].f_4.f_4 = -15;
			func_290(&(Global_23118[iVar0 /*11*/].f_4.f_5), 2);
			if (Global_23118[iVar0 /*11*/] & 16777216 == 0)
			{
				Global_23118[iVar0 /*11*/] = (Global_23118[iVar0 /*11*/] - Global_23118[iVar0 /*11*/] & 33554432);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_1058888.f_40615[iVar0 /*11*/].f_1 = -15;
			Global_1058888.f_40615[iVar0 /*11*/].f_4 = -1;
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_1 = 0;
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_2 = 0;
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_3 = 0;
			func_290(&(Global_1058888.f_40615[iVar0 /*11*/].f_4.f_5), 1);
			Global_1058888.f_40615[iVar0 /*11*/].f_4.f_4 = -15;
			func_290(&(Global_1058888.f_40615[iVar0 /*11*/].f_4.f_5), 2);
			if (Global_1058888.f_40615[iVar0 /*11*/] & 16777216 == 0)
			{
				Global_1058888.f_40615[iVar0 /*11*/] = (Global_1058888.f_40615[iVar0 /*11*/] - Global_1058888.f_40615[iVar0 /*11*/] & 33554432);
			}
			iVar0++;
		}
	}
}

void func_171()
{
	int iVar0;
	struct<12> Var1;
	int iVar13;

	Var1.f_6 = -1;
	Var1.f_6.f_4 = -15;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar13 = Global_40.f_358[iVar0 /*12*/].f_5;
		iVar13 = (iVar13 - iVar13 & 1);
		iVar13 = (iVar13 - iVar13 & 4);
		Global_40.f_358[iVar0 /*12*/] = { Var1 };
		Global_40.f_358[iVar0 /*12*/].f_5 = iVar13;
		iVar0++;
	}
}

void func_172()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::_0x062B4A4A3396351D(iVar0);
	func_540();
}

void func_173()
{
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_ORBIS_DAY_ONE"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_REDEEMED"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), false);
	UNLOCK::UNLOCK_SET_UNLOCKED(GET_HASH_KEY("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), false);
}

void func_174()
{
	if (func_28() != -1)
	{
		return;
	}
	func_541();
	func_542();
	func_543();
	func_544();
	func_545();
	func_546();
	func_547();
}

int func_175(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_548(vParam0);
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

bool func_176(int iParam0)
{
	if (!func_126(iParam0))
	{
		return false;
	}
	return func_177(iParam0, 8);
}

bool func_177(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_178(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

void func_179(int iParam0)
{
	int iVar0;

	if (func_549(iParam0, 1) || func_549(iParam0, 2))
	{
		iVar0 = func_550(iParam0);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			if (func_549(iParam0, 1))
			{
				func_551(iVar0, 0);
				func_552(iVar0, 0);
				func_553(iParam0, 1);
			}
			if (func_549(iParam0, 2))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				VOLUME::_DELETE_VOLUME(iVar0);
				func_553(iParam0, 2);
			}
		}
	}
}

void func_180(int iParam0)
{
	if (func_549(iParam0, 4))
	{
		func_554(iParam0);
		func_553(iParam0, 4);
	}
	if (func_549(iParam0, 8))
	{
		func_555(iParam0);
		func_553(iParam0, 8);
	}
}

int func_181()
{
	return Global_1897952.f_41;
}

bool func_182(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = func_556(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		if (func_28() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952.f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952.f_42, 523);
				return true;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				func_557(sVar0, 523);
				return true;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952.f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952.f_43), Global_1897952.f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1897952.f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return false;
		}
		Global_1897952.f_42 = SCRIPTS::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1897952.f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		bVar1 = func_558(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), (bVar1 || func_560(func_559(iParam0))));
		if (func_559(iParam0) != func_559(func_181()) || bVar1)
		{
			func_561(func_181(), 0);
			iVar2 = func_50(Global_36, 1);
			if (!func_562(iVar2))
			{
				if (!func_77(Global_1935630, 16384) && !func_46())
				{
					if (func_563(func_559(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						func_564(-1, -1, -1, 0, func_559(iParam0), 0);
					}
					else if (bVar1)
					{
						func_564(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_565(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_566(iParam0);
			}
			else
			{
				func_561(iParam0, 1);
			}
		}
		if (func_181() != -1)
		{
			func_567(func_181());
			func_554(func_181());
		}
		func_568(iParam0);
		if (func_569(iParam0))
		{
			PLAYER::_0x14E57F88BA0A07FC(func_570(iParam0));
		}
		func_571(iParam0);
		func_572(iParam0);
		iVar3 = -1000;
		if (func_126(func_78()))
		{
			iVar3 = Global_1888801[func_78() /*35*/].f_1;
		}
		if (iVar3 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar4 = func_50(Global_36, 1);
			if (func_573(iVar4, 1, 0) == 0)
			{
				func_575(func_574(iParam0, 1), func_559(iParam0));
			}
			func_576(0.775f, 0.2f, 0.025f, 0f);
			func_555(iParam0);
		}
		if (8 == iParam0 != func_340(373691918))
		{
			func_577(373691918, 8 == iParam0, 0);
		}
		return true;
	}
	return false;
}

int func_183(vector3 vParam0)
{
	return func_578(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_184()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	fVar2 = 4f;
	fVar3 = 3f;
	if ((Global_1357549.f_1641 >= 6 && Global_1357549.f_1641 != 10) || (Global_1357549.f_1641 == 10 && func_579(&(Global_1357549.f_1642)) < ((fVar2 + fVar3) + 6.75f)))
	{
		CAM::_0x71D71E08A7ED5BD7(1);
	}
	switch (Global_1357549.f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			break;
	}
	switch (Global_1357549.f_1641)
	{
		case 0:
			if (func_580() == 0 || func_581())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_583(func_582(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_582(iVar0));
					if (iVar1 == 3)
					{
						Global_1357549.f_1645 = func_584(iVar0);
						PED::SET_PED_CONFIG_FLAG(func_582(iVar0), 343, true);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_582(iVar0)))
						{
							func_585(func_582(Global_1357549.f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549.f_1646 = 1;
							Global_1357549.f_1647 = 1;
							Global_1357549.f_1641 = 1;
						}
					}
					else if (iVar1 == 1)
					{
						Global_1357549.f_1645 = func_584(iVar0);
						if ((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_582(iVar0)))
						{
							if (Global_1357549.f_1646 == 1 || ENTITY::GET_IS_ANIMAL(func_582(iVar0)))
							{
								if (ENTITY::GET_IS_ANIMAL(func_582(iVar0)))
								{
									func_585(func_582(Global_1357549.f_1645), "LEAVE_DOG_ALONE", GET_HASH_KEY("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(func_582(iVar0));
								}
								else
								{
									Global_1357549.f_1646 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										func_585(func_582(Global_1357549.f_1645), "GENERIC_MOCK", GET_HASH_KEY("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, 0, 0, 1);
									}
									else
									{
										func_586(iVar0);
									}
								}
							}
						}
					}
					else if (iVar1 == 2)
					{
						Global_1357549.f_1645 = func_584(iVar0);
						if (((Global_1357549.f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_582(iVar0))) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_582(Global_1357549.f_1645)))
						{
							if (Global_1357549.f_1647 == 1)
							{
								Global_1357549.f_1647 = 0;
								if (func_587(iVar0))
								{
									func_585(func_582(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								}
								else
								{
									func_585(func_582(Global_1357549.f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
								}
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
			func_588(Global_1357549.f_1635, &(Global_1357549.f_1637), &(Global_1357549.f_1640));
			if ((func_580() == 0 || func_581()) || func_589(Global_1357549.f_1637))
			{
				func_590();
				Global_1357549.f_1641 = 0;
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_583(func_582(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_582(iVar0));
					if (iVar1 == 4)
					{
						if (func_589(Global_1357549.f_1637) == 0)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == 0 && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == 0)
								{
									Global_1357549.f_1645 = func_591(iVar0, 1);
									if (func_592(Global_1357549.f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_582(Global_1357549.f_1645)))
									{
										if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
										}
										func_590();
										Global_1357549.f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(func_593(), 0, func_594(Global_1357549.f_1635), false, true);
										Global_1357549.f_1641 = 3;
									}
									else
									{
										func_590();
										Global_1357549.f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), false);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549.f_1636);
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Global_1357549.f_1636, func_594(Global_1357549.f_1635));
			Global_1357549.f_1641 = 2;
			break;
		case 2:
			if (func_595(Global_1357549.f_1645))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1357549.f_1636))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1357549.f_1636, true, false))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549.f_1636, func_594(Global_1357549.f_1635)))
						{
							TASK::CLEAR_PED_TASKS(func_582(Global_1357549.f_1645), true, false);
							func_596();
							func_597(0, 0, 0);
							Global_1357549.f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_598(Global_1357549.f_1645, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			break;
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1357549.f_1636, false))
			{
				if (func_583(Global_35, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				func_599();
				STREAMING::_REQUEST_SCENARIO_TYPE(GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND"), 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(func_582(Global_1357549.f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_582(Global_1357549.f_1645), false, false, true, false);
				func_585(func_582(Global_1357549.f_1645), func_600(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549.f_1641 = 5;
			}
			else
			{
				func_601();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1636);
			}
			break;
		case 5:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.15f)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				}
			}
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.92f || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Global_1357549.f_1636) > 0.37f))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549.f_1636, false);
				func_602(&(Global_1357549.f_1642), 0);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_582(Global_1357549.f_1645), true, false, true, false);
				func_260(GET_HASH_KEY("CSTAG_GRIEFING_KNOCKOUT_POST"), 1017034651, GET_HASH_KEY("CSTAG_PRIORITY_CRITICAL"), 6, 1, 1, 0);
				Global_1357549.f_1641 = 6;
			}
			break;
		case 6:
			if (func_579(&(Global_1357549.f_1642)) > fVar2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549.f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549.f_1640);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549.f_1636, func_594(Global_1357549.f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549.f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549.f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549.f_1641 = 8;
				func_603(Global_1357549.f_1645, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				func_604();
				func_605(fVar3);
				return true;
			}
			break;
		case 8:
			if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND"), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					if (func_579(&(Global_1357549.f_1642)) > (fVar2 + 2.5f))
					{
						Global_1357549.f_1641 = 7;
					}
				}
			}
			break;
		case 7:
			Global_1357549.f_1635++;
			if (Global_1357549.f_1635 >= 4)
			{
				Global_1357549.f_1635 = 0;
			}
			PED::_0xC494C76A34266E82(Global_35, 3);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			func_606();
			Global_1357549.f_1641 = 9;
			break;
		case 9:
			func_607();
			if (func_579(&(Global_1357549.f_1642)) > (fVar2 + fVar3))
			{
				Global_1357549.f_1641 = 10;
			}
			break;
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				if (func_583(Global_35, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
				}
				func_608(&(Global_1357549.f_1642));
				STREAMING::_0x4EDDD9E9CA5AF985(GET_HASH_KEY("WORLD_PLAYER_SLEEP_GROUND"));
				func_609(2, GET_HASH_KEY("HONOR_EVENT_ANTAGONIZE"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				Global_1357549.f_1641 = 0;
			}
			break;
	}
	return false;
}

void func_185()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590.f_19547)
	{
		if (Global_1327590.f_19547[iVar0 /*5*/] != -1)
		{
			func_610(iVar0);
		}
		iVar0++;
	}
}

void func_186(bool bParam0)
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

int func_187()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;

	if (Global_1572887.f_8)
	{
		return 1;
	}
	if ((Global_36 == 0f && Global_36.f_1 == 0f) && Global_36.f_2 == 0f)
	{
		return 1;
	}
	if (Global_1894899 & 264 != 0)
	{
		return 1;
	}
	if (Global_1572887.f_12 == -1 && func_24(64))
	{
		bVar0 = true;
	}
	else if (Global_1572887.f_12 == 0)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_126(Global_1894899.f_2))
	{
		bVar2 = VOLUME::DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_2 /*35*/].f_3);
		bVar3 = true;
		if (bVar2)
		{
			bVar1 = VOLUME::IS_POINT_IN_VOLUME(Global_1888801[Global_1894899.f_2 /*35*/].f_3, Global_36);
		}
	}
	bVar4 = PED::IS_PED_INJURED(Global_35);
	bVar5 = func_611(0, 1, 1);
	if (bVar0 && !bVar4)
	{
		if (func_126(Global_1894899.f_2))
		{
			func_612(Global_1894899.f_2, Global_1894899.f_2, bVar5);
			if (Global_1894899.f_5 != Global_1894899.f_2)
			{
				func_612(Global_1894899.f_5, Global_1894899.f_2, bVar5);
			}
		}
		else
		{
			func_612(Global_1894899.f_5, Global_1894899.f_2, bVar5);
		}
	}
	Global_1894899.f_5++;
	if (Global_1894899.f_5 >= 130)
	{
		Global_1894899.f_5 = 0;
	}
	if (bVar3)
	{
		func_613(Global_1894899.f_2, bVar1, bVar2);
	}
	else
	{
		iVar6 = 0;
		iVar7 = (130 - 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar8 = func_50(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			if (func_126(iVar8))
			{
				iVar6 = iVar8;
				iVar7 = iVar8;
			}
		}
		else if (func_614(8))
		{
			if (func_615(Global_1897952.f_41))
			{
				if ((Global_1897952.f_41 == 5 || Global_1897952.f_41 == 6) || Global_1897952.f_41 == 7)
				{
					iVar6 = func_616(7);
					iVar7 = func_617(6);
				}
				else
				{
					iVar6 = func_616(Global_1897952.f_41);
					iVar7 = func_617(Global_1897952.f_41);
				}
			}
		}
		if (Global_1894899.f_4 < iVar6 || Global_1894899.f_4 > iVar7)
		{
			bVar10 = func_618(&bVar9);
			if (!bVar10)
			{
				Global_1894899.f_4 = iVar6;
			}
		}
		func_613(Global_1894899.f_4, bVar1, VOLUME::DOES_VOLUME_EXIST(Global_1888801[Global_1894899.f_4 /*35*/].f_3));
		if (bVar9)
		{
			Global_1894899.f_4 = iVar6;
		}
		else if (!bVar10)
		{
			Global_1894899.f_4++;
		}
	}
	return 1;
}

void func_188()
{
	if (Global_1894899.f_9)
	{
		if (!func_619(Global_1934266.f_148))
		{
			func_620();
		}
	}
	switch (HUD::_0x7EC0D68233E391AC(6))
	{
		case 1:
			if (!func_619(Global_1934266.f_148))
			{
				func_620();
			}
			break;
		case 2:
			if (func_619(Global_1934266.f_148))
			{
				UIFEED::_0x2F901291EF177B02(Global_1934266.f_148, 0);
			}
			break;
	}
}

void func_189()
{
	int iVar0;

	if (func_621(Global_36, Global_1894899.f_6))
	{
		iVar0 = func_622(Global_1894899.f_6);
		if (iVar0 != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
			{
				if (func_125(45) || !func_623(Global_1894899.f_6))
				{
					MAP::_0xD8C7162AB2E2AF45(iVar0);
				}
			}
		}
		Global_1894899.f_3 = Global_1894899.f_6;
	}
	else if (Global_1894899.f_3 != -1 && !func_621(Global_36, Global_1894899.f_3))
	{
		Global_1894899.f_3 = -1;
	}
	Global_1894899.f_6++;
	if (Global_1894899.f_6 >= 51)
	{
		Global_1894899.f_6 = 0;
	}
}

int func_190(int iParam0, bool bParam1)
{
	if (!func_624(iParam0))
	{
		return 0;
	}
	if (!func_366(iParam0, 2))
	{
		return 0;
	}
	if (func_366(iParam0, 32) && !bParam1)
	{
		func_626(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_625(iParam0)));
		if (func_28() == -1)
		{
			if (func_366(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_627(iParam0));
				func_348(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_627(iParam0));
		}
		return 0;
	}
	if (!func_628(iParam0) && func_28() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_627(iParam0)))
	{
		func_348(iParam0, 128);
		return 1;
	}
	func_626(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_625(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_627(iParam0));
	if (func_366(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_627(iParam0));
		func_348(iParam0, 2048);
	}
	return 1;
}

bool func_191(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

float func_193(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_194(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	if (func_28() != -1)
	{
		return;
	}
	if (!func_125(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_629(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_630(iParam0), iVar0);
	func_632(func_631(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_633(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_439(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_439(func_634(iParam0), 1);
	}
	sVar1 = func_635(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_195()
{
	return Global_1572864.f_1;
}

void func_196(var uParam0)
{
	uParam0->f_2 = 0;
}

int func_197(int iParam0)
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

int func_198()
{
	return func_636();
}

void func_199()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 == 0 || Global_40.f_6563[iVar0 /*27*/].f_24 == 19)
		{
		}
		else
		{
			if (Global_40.f_6563[iVar0 /*27*/].f_24 == 1)
			{
				func_637(iVar0, 2);
			}
			if (Global_40.f_6563[iVar0 /*27*/].f_24 > 3 && Global_40.f_6563[iVar0 /*27*/].f_24 < 11)
			{
				func_637(iVar0, 11);
			}
			if (Global_40.f_6563[iVar0 /*27*/] == 9 || Global_40.f_6563[iVar0 /*27*/] == 11)
			{
				if (Global_40.f_6563[iVar0 /*27*/].f_24 == 16)
				{
					func_637(iVar0, 15);
				}
			}
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 == 0 || Global_40.f_6563[iVar0 /*27*/].f_24 == 19)
		{
		}
		else
		{
			if (Global_40.f_6563[iVar0 /*27*/].f_24 >= 2)
			{
				func_638(&(Global_40.f_6563[iVar0 /*27*/]));
				func_639();
				func_640(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			if (Global_40.f_6563[iVar0 /*27*/].f_24 < 3)
			{
				func_641(Global_40.f_6563[iVar0 /*27*/]);
			}
			if (Global_40.f_6563[iVar0 /*27*/].f_24 == 3)
			{
				func_642(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			else if (Global_40.f_6563[iVar0 /*27*/].f_24 > 3 && Global_40.f_6563[iVar0 /*27*/].f_24 <= 11)
			{
				func_643(&(Global_40.f_6563[iVar0 /*27*/]), 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, "ITEM_REQ_RETURN", 0, 0, 0);
			}
			else if (Global_40.f_6563[iVar0 /*27*/].f_24 > 11)
			{
				sVar1 = func_644(Global_40.f_6563[iVar0 /*27*/].f_3, 0);
				switch (func_259())
				{
					case 1:
					case 2:
					case 6:
						func_643(&(Global_40.f_6563[iVar0 /*27*/]), 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::VAR_STRING(10, "ITEM_REQ_ITEM_PICKUP_TENT", sVar1), 0, 0, 0);
						break;
					case 3:
					case 8:
						func_643(&(Global_40.f_6563[iVar0 /*27*/]), 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::VAR_STRING(10, "ITEM_REQ_ITEM_PICKUP_ROOM", sVar1), 0, 0, 0);
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_201(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0 /*7*/].f_6 && iParam1) != 0;
}

void func_202(int iParam0, bool bParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;

	iVar2 = GET_HASH_KEY("BLIP_ROBBERY_HOME");
	iVar3 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 0:
			sVar4 = "PRHM1_LOG";
			sVar5 = "PRHM1_LOG_DESC";
			sVar0 = "PRHM1_LOG_OBJ1";
			sVar6 = "MISSION_PRHM1";
			sVar1 = "PRHM1_LOG";
			break;
		case 2:
			sVar4 = "PRHM2_LOG";
			sVar5 = "PRHM2_LOG_DESC";
			sVar0 = "PRHM2_LOG_OBJ1";
			sVar6 = "MISSION_PRHM2";
			sVar1 = "PRHM2_LOG";
			break;
		case 3:
			sVar4 = "PRHM6_LOG";
			sVar5 = "PRHM6_LOG_DESC";
			sVar0 = "PRHM6_LOG_OBJ1";
			sVar6 = "MISSION_PRHM6";
			sVar1 = "PRHM6_LOG";
			break;
		case 4:
			sVar4 = "PRHM3_LOG";
			sVar5 = "PRHM3_LOG_DESC";
			sVar0 = "PRHM3_LOG_OBJ1";
			sVar6 = "MISSION_PRHM3";
			sVar1 = "PRHM3_LOG";
			break;
		case 6:
			sVar4 = "PRHM7_LOG";
			sVar5 = "PRHM7_LOG_DESC";
			sVar0 = "PRHM7_LOG_OBJ1";
			sVar6 = "MISSION_PRHM7";
			sVar1 = "PRHM7_LOG";
			break;
		case 7:
			sVar4 = "PRHM5_LOG";
			sVar5 = "PRHM5_LOG_DESC";
			sVar0 = "PRHM5_LOG_OBJ1";
			sVar6 = "MISSION_PRHMW";
			sVar1 = "PRHM5_LOG";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, func_645(iParam0), func_646(iParam0), MISC::GET_HASH_KEY(sVar4), MISC::GET_HASH_KEY(sVar5), 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, func_645(iParam0), MISC::GET_HASH_KEY(sVar6), GET_HASH_KEY("SP_MISSIONS_20"));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, func_645(iParam0), iVar2, iVar3);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, func_645(iParam0), MISC::GET_HASH_KEY(sVar0), sVar0, false, false, false);
	if (bParam1)
	{
		return;
	}
	func_648(sVar1, 0, iVar3, iVar2, GET_HASH_KEY("PLAYER_MENU"), 0, -1, -2, func_647(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	func_649(iParam0, 1073741824 /* Float: 2f */);
	func_650(0, -1);
}

bool func_203(int iParam0)
{
	return (Global_40.f_12004 && iParam0) != 0;
}

int func_204()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_203(func_651(iVar0)))
		{
			return func_651(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_464(38, 0, 0, 0, func_463(), 0, -1, 0);
			break;
		case 2:
			func_464(38, 0, 0, 0, func_463(), 0, -1, 0);
			break;
		case 4:
			break;
	}
}

bool func_206(int iParam0)
{
	if (func_28() != -1)
	{
		return false;
	}
	return func_120(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_207()
{
	int iVar0;

	iVar0 = 7;
	while (iVar0 >= 0)
	{
		if (func_653(func_652(iVar0)))
		{
			return func_652(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_464(39, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			func_464(39, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 4:
			func_464(39, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 8:
			func_464(39, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 16:
			func_464(39, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 32:
			func_464(39, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 64:
			break;
	}
}

void func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar4 = func_654(iVar0);
		if (func_346(Global_40.f_8863.f_148, iVar4))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		iVar3 = MISC::GET_HASH_KEY("DISCO_DREAM");
		iVar2 = 20;
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar3))
		{
			UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar3, 0f, 0f, 0f, MISC::GET_HASH_KEY("DISCO_DREAM"), MISC::GET_HASH_KEY("DISCO_DRM_DESC"), 0);
		}
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar3, MISC::VAR_STRING(2, "DISCO_DC_FOUND", iVar1, iVar2));
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 0, MISC::VAR_STRING(2, "DISCO_DRM_OBJ", iVar1, iVar2), iVar1 == iVar2, false, false);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar3, MISC::GET_HASH_KEY("TOAST_DREAMCATCHER"), MISC::GET_HASH_KEY("hud_toasts"));
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar3, MISC::GET_HASH_KEY("MISSION_COLLECTDREAM"), MISC::GET_HASH_KEY("SP_MISSIONS_13"));
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 0, "DISCO_DRM_CHECK1", iVar1 == iVar2, true, false);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 1, "DISCO_DRM_CHECK2", func_655(373034311, 2), true, false);
	}
}

int func_210()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	while (iVar0 >= 0)
	{
		iVar1 = func_656(iVar0);
		if (func_657(iVar1))
		{
			return iVar1;
		}
		iVar0 = (iVar0 + -1);
	}
	return func_656(iVar0);
}

void func_211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_464(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), 0, 0, -1, 0);
			break;
		case 2:
			func_464(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), 0, 0, -1, 0);
			break;
		case 4:
			func_464(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), 0, 0, -1, 0);
			break;
		case 8:
			func_464(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), 0, 0, -1, 0);
			break;
		case 16:
			func_464(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), 0, 0, -1, 0);
			break;
		case 32:
			break;
	}
}

int func_212()
{
	int iVar0;

	iVar0 = 6;
	while (iVar0 >= 0)
	{
		if (func_659(func_658(iVar0)))
		{
			return func_658(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_464(41, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			func_464(41, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 4:
			func_464(41, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 8:
			func_464(41, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 16:
			func_464(41, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 32:
			break;
	}
}

bool func_214(int iParam0)
{
	return (Global_40.f_12004.f_4 && iParam0) != 0;
}

int func_215()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_214(func_660(iVar0)))
		{
			return func_660(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_661(1, 0, 0, 0);
			break;
		case 2:
			func_661(15, 1, 0, 0);
			break;
		case 4:
			break;
	}
}

int func_217()
{
	int iVar0;

	iVar0 = 7;
	while (iVar0 >= 0)
	{
		if (func_663(func_662(iVar0)))
		{
			return func_662(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_464(49, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			func_464(49, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 4:
			func_464(49, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 8:
			func_464(49, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 16:
			func_464(49, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 32:
			func_464(49, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 64:
			break;
	}
}

int func_219()
{
	int iVar0;

	iVar0 = 22;
	while (iVar0 >= 0)
	{
		if (func_665(func_664(iVar0)))
		{
			return func_664(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_220(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1:
			func_666(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"), &sVar0, 1, 0, 0);
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			break;
		case 2:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), 0, 0, 7, 0);
			break;
		case 4:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), 0, 0, 7, 1);
			break;
		case 8:
			func_666(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			break;
		case 16:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), 0, 0, 7, 0);
			break;
		case 32:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), 0, 0, 7, 1);
			break;
		case 64:
			func_666(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			break;
		case 128:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), 0, 0, 7, 0);
			break;
		case 256:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), 0, 0, 7, 1);
			break;
		case 512:
			func_666(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			break;
		case 1024:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 7, 0);
			break;
		case 2048:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 7, 1);
			break;
		case 4096:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 3, 0);
			break;
		case 8192:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			break;
		case 16384:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 5, 0);
			break;
		case 32768:
			func_666(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			break;
		case 65536:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 7, 0);
			break;
		case 262144:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 0, 0);
			break;
		case 524288:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			break;
		case 1048576:
			func_464(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 2, 0);
			break;
		case 2097152:
			break;
	}
}

bool func_221(int iParam0)
{
	return (Global_40.f_12004.f_7 && iParam0) != 0;
}

int func_222()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_221(func_667(iVar0)))
		{
			return func_667(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_502(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
			break;
		case 2:
			func_502(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
			break;
		case 4:
			func_502(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
			break;
		case 8:
			break;
	}
}

bool func_224(int iParam0)
{
	return (Global_40.f_12004.f_8 && iParam0) != 0;
}

int func_225()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_224(func_668(iVar0)))
		{
			return func_668(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_502(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
			break;
		case 2:
			func_502(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
			break;
		case 4:
			func_502(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
			break;
		case 8:
			break;
	}
}

bool func_227(int iParam0)
{
	return (Global_40.f_12004.f_9 && iParam0) != 0;
}

int func_228()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_227(func_669(iVar0)))
		{
			return func_669(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_229(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_502(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
			break;
		case 2:
			func_502(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
			break;
		case 4:
			func_502(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
			break;
		case 8:
			break;
	}
}

bool func_230(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

int func_231()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_230(func_670(iVar0)))
		{
			return func_670(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_502(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
			break;
		case 2:
			func_502(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
			break;
		case 4:
			break;
	}
}

bool func_233(int iParam0)
{
	return (Global_40.f_12004.f_11 && iParam0) != 0;
}

int func_234()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_233(func_671(iVar0)))
		{
			return func_671(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_235(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_502(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
			break;
		case 2:
			func_502(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
			break;
		case 4:
			func_502(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
			break;
		case 8:
			break;
	}
}

bool func_236(int iParam0)
{
	return (Global_40.f_12004.f_12 && iParam0) != 0;
}

int func_237()
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (func_236(func_672(iVar0)))
		{
			return func_672(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
			break;
		case 2:
			func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
			break;
		case 4:
			func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
			break;
		case 8:
			func_502(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
			break;
		case 16:
			break;
	}
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 29;
		case 0:
			return 43;
		case 2:
			return 61;
		case 3:
			return 73;
		default:
			break;
	}
	return -1;
}

bool func_240(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

void func_241(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar6 = MISC::GET_HASH_KEY("BLIP_ROBBERY_SHOP");
	iVar7 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 29:
			sVar2 = "PRRGS_LOG";
			iVar3 = GET_HASH_KEY("PRRGS_LOG");
			sVar4 = "PRRGS_LOG_DESC";
			iVar5 = GET_HASH_KEY("PRRGS_LOG_DESC");
			sVar0 = "PRRGS_LOG_OBJ1";
			iVar1 = GET_HASH_KEY("PRRGS_LOG_OBJ1");
			iVar8 = -1662367475;
			break;
		case 43:
			sVar2 = "PRNBG_LOG";
			iVar3 = GET_HASH_KEY("PRNBG_LOG");
			sVar4 = "PRNBG_LOG_DESC";
			iVar5 = GET_HASH_KEY("PRNBG_LOG_DESC");
			sVar0 = "PRNBG_LOG_OBJ2";
			iVar1 = GET_HASH_KEY("PRNBG_LOG_OBJ2");
			iVar8 = -1637141202;
			break;
		case 61:
			sVar2 = "PRSGS_LOG";
			iVar3 = GET_HASH_KEY("PRSGS_LOG");
			sVar4 = "PRSGS_LOG_DESC";
			iVar5 = GET_HASH_KEY("PRSGS_LOG_DESC");
			sVar0 = "PRSGS_LOG_OBJ3";
			iVar1 = GET_HASH_KEY("PRSGS_LOG_OBJ3");
			iVar8 = -439915887;
			break;
		case 73:
			sVar2 = "PRVDO_LOG";
			iVar3 = GET_HASH_KEY("PRVDO_LOG");
			sVar4 = "PRVDO_LOG_DESC";
			iVar5 = GET_HASH_KEY("PRVDO_LOG_DESC");
			sVar0 = "PRVDO_LOG_OBJ4";
			iVar1 = GET_HASH_KEY("PRVDO_LOG_OBJ4");
			iVar8 = -366465324;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, func_673(iParam0), func_674(iParam0), iVar3, iVar5, 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, func_673(iParam0), iVar8, GET_HASH_KEY("SP_MISSIONS_20"));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, func_673(iParam0), iVar6, iVar7);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, func_673(iParam0), iVar1, sVar0, false, false, false);
	if (bParam1)
	{
		return;
	}
	func_648(sVar2, 0, iVar7, iVar6, GET_HASH_KEY("PLAYER_MENU"), 0, -1, -2, func_675(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	func_676(iParam0, -2147483648);
	func_650(0, -1);
}

bool func_242(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_243(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

int func_244(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_245(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_246(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_677(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_244(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_245(iParam0), Global_1347702[iParam0 /*49*/].f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), Global_1347702[iParam0 /*49*/].f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_245(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_245(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_245(iParam0)))
	{
		func_678(iParam0, 4);
	}
}

void func_247(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];

	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar1, "PSTR_O_", 16);
		StringConCat(&cVar1, &cVar0, 16);
		cVar3 = func_679(0, &cVar1, 0, 0, -1, -1);
		func_680(iParam0, &cVar1, cVar3, -1082130432 /* Float: -1f */);
	}
}

void func_248(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	bool bVar5;
	bool bVar6;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_244(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_245(iParam0));
		}
		func_250(iParam0, 4);
		func_250(iParam0, 8);
		return;
	}
	else if (func_275(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		func_681(Global_1347702[iParam0 /*49*/]);
		func_246(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_679(0, &cVar1, 0, 0, -1, -1);
			func_680(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_245(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_250(iParam0, 4);
		func_250(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_243(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_243(iParam0, 16))
	{
		bVar6 = true;
	}
	func_681(Global_1347702[iParam0 /*49*/]);
	func_246(iParam0);
	MemCopy(&cVar1, {Global_1347702[iParam0 /*49*/].f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (func_243(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (func_243(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
	{
		cVar4 = func_679(0, &cVar1, 0, 0, -1, -1);
		func_680(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		if (func_243(iParam0, 16) || bVar6)
		{
			func_682(iParam0, 1);
		}
		if (func_243(iParam0, 8) || bVar5)
		{
			func_683(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_679(0, &cVar1, 0, 0, -1, -1);
		func_680(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		func_683(iParam0, 1);
		if (func_243(iParam0, 16) || bVar6)
		{
			func_682(iParam0, 1);
		}
	}
}

void func_249(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_244(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_245(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_245(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_245(iParam0));
			}
		}
	}
	func_250(iParam0, 4);
	func_250(iParam0, 8);
	func_250(iParam0, 16);
}

void func_250(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

int func_251(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_684(func_294(iParam0));
}

void func_252()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_685(iVar0);
		iVar0++;
	}
}

void func_253()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_686(iVar0);
		if (iVar1 == 0)
		{
		}
		else
		{
			func_687(iVar1);
		}
		iVar0++;
	}
}

void func_254()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = func_688(iVar0);
		if (iVar1 == 0)
		{
		}
		else
		{
			func_689(iVar1);
		}
		iVar0++;
	}
}

void func_255()
{
	if (!func_120(Global_1347702[26 /*49*/].f_15, 1))
	{
		return;
	}
	if (func_120(Global_1347702[28 /*49*/].f_15, 1))
	{
		return;
	}
	if (func_120(func_345(37), 1))
	{
		if (!func_120(func_345(44), 1))
		{
			return;
		}
	}
	if (func_120(func_345(59), 1))
	{
		if (!func_120(func_345(67), 1))
		{
			return;
		}
	}
	func_690();
	func_691();
	func_692();
	func_693();
}

void func_256()
{
	if (Global_43891)
	{
		return;
	}
	else if (func_694(func_345(23)))
	{
		return;
	}
	func_695();
	func_696();
	func_697();
	func_698();
	func_699();
	func_700();
}

void func_257(int iParam0)
{
	func_701(iParam0, 4, 1);
}

bool func_258(int iParam0)
{
	return func_702(iParam0, 4, 1);
}

int func_259()
{
	return Global_40.f_4283;
}

int func_260(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_703(iParam0);
	iVar3 = func_704(iParam0);
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
				iVar1 = func_261();
				func_705(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_706(iParam0, 1);
			if (func_707(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_708(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_709(1, iParam0);
				}
				else
				{
					func_710(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_261()
{
	return Global_1899515;
}

int func_262(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_263(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_264(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_711(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_265(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_266(int iParam0, int iParam1)
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

void func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_712(iParam0, iParam6);
	func_713(iParam0, iParam5);
	func_714(iParam0, iParam4);
	func_715(iParam0, iParam3);
	func_716(iParam0, iParam2);
	func_717(iParam0, iParam1);
}

int func_268(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_269(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

bool func_270(int iParam0)
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

void func_271(int iParam0)
{
	int iVar0;

	if (!func_39(iParam0))
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

bool func_272(int iParam0)
{
	if (func_28() != -1)
	{
		return false;
	}
	if (!func_242(iParam0))
	{
		return false;
	}
	return func_120(Global_1347702[iParam0 /*49*/].f_15, 1);
}

char[] func_273(int iParam0)
{
	char[] cVar0[8];

	if (!func_67(iParam0))
	{
		return cVar0;
	}
	switch (func_91(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_718(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_251(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_111(0, 10, 11, GET_HASH_KEY("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

int func_274(int iParam0)
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

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_276(int iParam0)
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

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 16;
		case 2:
			return 36;
		case 3:
			return 79;
		case 4:
			return 125;
		case 5:
			return 127;
		case 6:
			return 118;
		case 7:
			return 129;
		case 8:
			return 114;
		default:
			break;
	}
	return -1;
}

int func_278(int iParam0)
{
	if (!func_719(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_279(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_720(iParam0) & 2147418112, 16);
}

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 373034311;
		case 1:
			return 870958936;
		case 2:
			return -1287911066;
		case 3:
			return -777592153;
		case 4:
			return -1084929085;
		case 5:
			return 1347913620;
		case 6:
			return -1568839185;
		case 7:
			return 1937333853;
		case 8:
			return -780455182;
		case 9:
			return -2019711818;
		case 10:
			return -1636964661;
		case 11:
			return -321841939;
		case 12:
			return 1154568952;
		case 13:
			return -1646022773;
		case 14:
			return 2134589549;
		case 15:
			return -1109016944;
		case 16:
			return -1787770845;
		case 17:
			return -1761578407;
		case 18:
			return 404434344;
		case 19:
			return 503180747;
		case 20:
			return -709811179;
		case 21:
			return -1609238411;
		case 22:
			return 173549940;
		case 23:
			return -1420566543;
		case 24:
			return -1208846034;
		case 25:
			return -986176781;
		case 26:
			return 1048086072;
		case 27:
			return 939555152;
		case 28:
			return -1859413640;
		case 29:
			return -161804536;
		case 30:
			return -30872859;
		case 31:
			return -1505275983;
		case 32:
			return 733338689;
		case 33:
			return 1034793488;
		case 34:
			return -2009137002;
		case 35:
			return 74587361;
		case 36:
			return 2072029413;
		case 37:
			return -261997819;
		case 38:
			return -599506500;
		case 39:
			return 1424723727;
		case 40:
			return -35775921;
		case 41:
			return 2135153015;
		case 42:
			return 1519228573;
		case 43:
			return 1124200691;
		case 44:
			return -357364973;
		case 45:
			return -1308658310;
		case 46:
			return -641229542;
		case 47:
			return -1427565340;
		case 48:
			return -1614148516;
		case 49:
			return -1958832660;
		case 50:
			return -1882503209;
		case 51:
			return -1300082860;
		case 52:
			return 247563739;
		case 53:
			return -1481450947;
		case 54:
			return 233600584;
		case 55:
			return -763376358;
		case 56:
			return 1801731633;
		case 57:
			return 1490223565;
		case 58:
			return 1335921989;
		case 59:
			return -2008558277;
		case 60:
			return 435290930;
		case 61:
			return -1494823099;
		case 62:
			return 1861313914;
		case 63:
			return 1519472817;
		case 64:
			return -1859023693;
		case 65:
			return 1734766691;
		case 66:
			return -1824429070;
		case 67:
			return 149709049;
		case 68:
			return -968854939;
		case 69:
			return 1342653896;
		case 70:
			return 657666087;
		case 71:
			return 1187917501;
		case 72:
			return 58958195;
		case 73:
			return 2072069278;
		case 74:
			return -499529359;
		case 75:
			return 425000526;
		case 76:
			return -1714262909;
		case 77:
			return 1505050944;
		case 78:
			return -1283611369;
		case 79:
			return -919236330;
		case 80:
			return 1431862613;
		case 81:
			return -1243267511;
		case 82:
			return 918206817;
		case 83:
			return -920971071;
		case 84:
			return -1053108445;
		case 85:
			return 1284679164;
		case 86:
			return 1351526287;
		case 87:
			return 397377585;
		case 88:
			return -409986722;
		case 89:
			return -1887999095;
		case 90:
			return 1982045664;
		case 91:
			return -834293086;
		case 92:
			return -849582265;
		case 93:
			return 429544447;
		case 94:
			return -1841331114;
		case 95:
			return -715636193;
		case 96:
			return -1061274876;
		case 97:
			return -148407339;
		case 98:
			return -415839138;
		case 99:
			return 1673499939;
		case 100:
			return -777150535;
		case 101:
			return 118535038;
		case 102:
			return 1833243216;
		case 103:
			return -979575591;
		case 104:
			return -654238687;
		case 105:
			return 1120968795;
		case 106:
			return -544327665;
		case 107:
			return 230001763;
		case 108:
			return 921081956;
		case 109:
			return 949011950;
		case 110:
			return -739986731;
		case 111:
			return -1144800837;
		case 112:
			return -1686810506;
		case 113:
			return -1848895400;
		case 114:
			return -657632;
		case 115:
			return -1761189332;
		case 116:
			return -2060865802;
		case 117:
			return -1923503631;
		case 118:
			return -607940493;
		case 119:
			return 1986618633;
		case 120:
			return 2000209669;
		case 121:
			return 513110082;
		case 122:
			return 1091556515;
		case 123:
			return -1457751321;
		case 124:
			return -1891628345;
		case 125:
			return -1960242214;
		case 126:
			return 1187689415;
		case 127:
			return -1177787273;
		case 128:
			return 464413478;
		case 129:
			return 1464664327;
		case 130:
			return -490142739;
		case 131:
			return 330993088;
		case 132:
			return 221420861;
		case 133:
			return 1535254161;
		case 134:
			return 683269210;
		case 135:
			return -232974724;
		case 136:
			return 308500632;
		case 137:
			return -890175011;
		case 138:
			return -2108030724;
		case 139:
			return -1272862985;
		case 140:
			return -1240932004;
		case 141:
			return -1829339703;
		case 142:
			return 677950956;
		case 143:
			return 0;
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

bool func_281(int iParam0)
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

bool func_282(int iParam0, int iParam1)
{
	if (!func_721(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_722(iParam0, 1)] && iParam1) != 0;
}

bool func_283(int iParam0, int iParam1)
{
	return (Global_40.f_9422[iParam0 /*7*/].f_5 && iParam1) != 0;
}

struct<2> func_284(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_285(var uParam0, var uParam1, var uParam2)
{
	STATS::_0x91A4F58E01ED5E4C(&uParam0, uParam2);
}

void func_286(int iParam0, int iParam1)
{
	int iVar0;

	if (func_723(iParam0))
	{
		return;
	}
	iVar0 = func_724(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 > iVar0)
	{
		func_725(iParam0, iParam1);
	}
}

int func_287(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_726(iParam0);
}

void func_288()
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

	if (!func_77(Global_1935630, 8192))
	{
		return;
	}
	if (func_17(32768))
	{
		return;
	}
	func_113(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * func_728(10f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * func_728(5f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("COMPLETED"), GET_HASH_KEY("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * func_728(25f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * func_728(1f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * func_728(6f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * func_728(1f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("DISCOVERABLE_FOUND"))))));
	iVar1 = func_730();
	fVar0 = (fVar0 + (0.1111111f * func_728(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_ACTRESSES"))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_AMERICANS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_ANIMALS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_ARTISTS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_GIRLS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_GUNSLINGERS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_HORSES")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_INVENTIONS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_LANDMARKS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_PLANTS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_SPORTS")))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, GET_HASH_KEY("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, GET_HASH_KEY("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + func_728(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_728(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_732()))));
	if (func_272(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_731(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(GET_HASH_KEY("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(GET_HASH_KEY("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * func_728(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_728(5f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * func_728(5f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("KILLS"), GET_HASH_KEY("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_733(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_733(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_733(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(GET_HASH_KEY("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_733(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_733(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_733(COMPENDIUM::_0x729D52F61A5A9E22(GET_HASH_KEY("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	func_734(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_728((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_728(1f, BUILTIN::TO_FLOAT(func_735(GET_HASH_KEY("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(func_736());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ATTEMPTS"), GET_HASH_KEY("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * func_728(5f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * func_728(1f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * func_728(1f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * func_728(1f, BUILTIN::TO_FLOAT(func_729(GET_HASH_KEY("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("MADE_RECIPE_TYPE"), GET_HASH_KEY("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_728(1f, BUILTIN::TO_FLOAT(func_727(GET_HASH_KEY("ROB_COMPLETED"), GET_HASH_KEY("TRAIN"))))));
	Var6 = { func_155(GET_HASH_KEY("TOTAL_PROGRESS_MADE")) };
	fVar8 = func_737(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_67(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!func_67(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_90(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_738(Global_1898330[iVar61]);
				}
				else
				{
					func_739(iVar61, 0);
					if (func_91(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_92(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_92(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
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
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_92(Global_1898437), &iVar9);
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

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_290(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_292(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_740(iVar0);
}

int func_293(int iParam0)
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

int func_294(int iParam0)
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

int func_295(int iParam0)
{
	return iParam0 & 31;
}

int func_296(int iParam0, int iParam1)
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
			func_741(iVar2);
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

void func_297()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

bool func_298(var uParam0, int iParam1, int* iParam2)
{
	struct<4> Var0;

	Var0 = *uParam0;
	Var0.f_2 = 223399367;
	Var0.f_3 = func_742(iParam1);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1487863141;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, &Var0);
		Var0.f_2 = -766247814;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(iParam2->f_1), &Var0);
	}
	else
	{
		return false;
	}
	return true;
}

void func_299(var uParam0, char* sParam1)
{
	char* sVar0;

	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1934266.f_78, sParam1);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showMessage", false);
	if (func_145() == GET_HASH_KEY("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		sVar0 = "LAW_UI_WANTED_F";
	}
	else
	{
		sVar0 = "LAW_UI_WANTED_M";
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "upperLocText", sVar0);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "upperTextStyle", 0);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText0", "");
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText1", "");
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText2", "");
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText3", "");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText0", "");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText1", "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText2", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText3", "");
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "switchLowerTextToIndex", 0);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showKnownPulse", false);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showUnknownPulse", false);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showShortWantedCooldown", false);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showLongWantedCooldown", false);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showWarningAnimation", false);
}

void func_300(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_301(int iParam0)
{
	int iVar0;

	if (func_743(iParam0, &iVar0))
	{
		return func_744(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_157())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_157())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_157())
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

void func_302(int iParam0, int iParam1, bool bParam2)
{
	if ((Global_40.f_11095.f_11[iParam0] <= 0f || bParam2) && !PED::IS_PED_INJURED(Global_35))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iParam1);
		Global_40.f_11095.f_11[iParam0] = BUILTIN::TO_FLOAT(iParam1);
	}
}

int func_303(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

Vector3 func_304(int iParam0)
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

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 21:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 22:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 23:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 24:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 25:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 26:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 28:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 29:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 33:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 34:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 30:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 32:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 31:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 41:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 42:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 35:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 36:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 37:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 38:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 39:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 27:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 45:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 40:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 43:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 44:
			return GET_HASH_KEY("BLIP_STYLE_SHOP");
		case 46:
			return -972966383;
		case 47:
			return -972966383;
		case 48:
			return -972966383;
		case 49:
			return -678244495;
		case 50:
			return -678244495;
		case 51:
			return -678244495;
		case 52:
			return 1560611276;
		case 53:
			return -494978356;
		case 54:
			return -494978356;
		case 55:
			return -494978356;
		case 56:
			return -494978356;
		case 57:
			return -507182222;
		case 58:
			return -1337945352;
		case 59:
			return -678244495;
		case 60:
			return -678244495;
		case 61:
			return -678244495;
		case 62:
			return -383696203;
		default:
			break;
	}
	return 0;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return GET_HASH_KEY("BLIP_MG_POKER");
		case 1:
			return GET_HASH_KEY("BLIP_MG_BLACKJACK");
		case 2:
			return GET_HASH_KEY("BLIP_MG_DOMINOES");
		case 4:
			return GET_HASH_KEY("BLIP_MG_FIVE_FINGER_FILLET");
		case 5:
			return GET_HASH_KEY("BLIP_SUMMER_COW");
		case 6:
			return GET_HASH_KEY("BLIP_SUMMER_HORSE");
		case 7:
			return GET_HASH_KEY("BLIP_FENCE_BUILDING");
		case 8:
			return GET_HASH_KEY("BLIP_MG_DOMINOES_ALL3S");
		case 9:
			return GET_HASH_KEY("BLIP_MG_DOMINOES_ALL5S");
		case 10:
			return GET_HASH_KEY("BLIP_MG_DOMINOES_DRAW");
		case 11:
			return GET_HASH_KEY("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT");
		case 12:
			return GET_HASH_KEY("BLIP_MG_FIVE_FINGER_FILLET_GUTS");
		case 14:
			return GET_HASH_KEY("BLIP_PROC_LOANSHARK");
		case 13:
			return GET_HASH_KEY("BLIP_AMBIENT_HERD");
		case 16:
			return GET_HASH_KEY("BLIP_PROC_BOUNTY_POSTER");
		case 17:
			return GET_HASH_KEY("BLIP_AMBIENT_COACH");
		case 18:
			return GET_HASH_KEY("BLIP_AMBIENT_TRAIN");
		case 19:
			return GET_HASH_KEY("BLIP_AMBIENT_RIVERBOAT");
		case 20:
			return GET_HASH_KEY("BLIP_SHOP_STORE");
		case 21:
			return GET_HASH_KEY("BLIP_SHOP_SHADY_STORE");
		case 22:
			return GET_HASH_KEY("BLIP_AMBIENT_QUARTERMASTER");
		case 23:
			return GET_HASH_KEY("BLIP_SHOP_GUNSMITH");
		case 24:
			return GET_HASH_KEY("BLIP_SHOP_COACH_FENCING");
		case 25:
			return GET_HASH_KEY("BLIP_SHOP_DOCTOR");
		case 26:
			return GET_HASH_KEY("BLIP_SHOP_TAILOR");
		case 28:
			return GET_HASH_KEY("BLIP_SHOP_BLACKSMITH");
		case 29:
			return GET_HASH_KEY("BLIP_SHOP_TRAINER");
		case 33:
			return GET_HASH_KEY("BLIP_POST_OFFICE");
		case 34:
			return GET_HASH_KEY("BLIP_POST_OFFICE_REC");
		case 30:
			return GET_HASH_KEY("BLIP_SHOP_TRAIN");
		case 31:
			return GET_HASH_KEY("BLIP_SHOP_BARBER");
		case 32:
			return GET_HASH_KEY("BLIP_SHOP_BUTCHER");
		case 35:
			return GET_HASH_KEY("BLIP_SHOP_TACKLE");
		case 36:
			return GET_HASH_KEY("BLIP_SHOP_ANIMAL_TRAPPER");
		case 37:
			return GET_HASH_KEY("BLIP_SHOP_HORSE");
		case 38:
			return GET_HASH_KEY("BLIP_SHOP_HORSE_FENCING");
		case 39:
			return GET_HASH_KEY("BLIP_SHOP_HORSE_SADDLE");
		case 27:
			return GET_HASH_KEY("BLIP_SALOON");
		case 40:
			return GET_HASH_KEY("BLIP_AMBIENT_NEWSPAPER");
		case 41:
			return GET_HASH_KEY("BLIP_SHOP_MARKET_STALL");
		case 42:
			return GET_HASH_KEY("BLIP_SHOP_MARKET_STALL");
		case 43:
			return GET_HASH_KEY("BLIP_HOTEL_BED");
		case 44:
			return GET_HASH_KEY("BLIP_PHOTO_STUDIO");
		case 45:
			return GET_HASH_KEY("BLIP_STABLE");
		case 46:
			return GET_HASH_KEY("BLIP_PROC_HOME");
		case 47:
			return GET_HASH_KEY("BLIP_PROC_HOME_LOCKED");
		case 48:
			return GET_HASH_KEY("BLIP_PROC_HOME");
		case 49:
			return GET_HASH_KEY("BLIP_AMBIENT_TELEGRAPH");
		case 50:
			return GET_HASH_KEY("BLIP_AMBIENT_COACH_TAXI");
		case 51:
			return GET_HASH_KEY("BLIP_AMBIENT_THEATRE");
		case 52:
			return GET_HASH_KEY("BLIP_REGION_CARAVAN");
		case 53:
			return GET_HASH_KEY("BLIP_EVENT_APPLESEED");
		case 54:
			return GET_HASH_KEY("BLIP_EVENT_CASTOR");
		case 55:
			return GET_HASH_KEY("BLIP_EVENT_RAILROAD_CAMP");
		case 56:
			return GET_HASH_KEY("BLIP_EVENT_RIGGS_CAMP");
		case 57:
			return GET_HASH_KEY("BLIP_REGION_HIDEOUT");
		case 58:
			return GET_HASH_KEY("BLIP_PROC_HOME");
		case 59:
			return GET_HASH_KEY("BLIP_MG_FISHING");
		case 60:
			return GET_HASH_KEY("BLIP_AMBIENT_THEATRE");
		case 61:
			return GET_HASH_KEY("BLIP_AMBIENT_THEATRE");
		case 62:
			return GET_HASH_KEY("BLIP_TOWN");
		default:
			break;
	}
	return 0;
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_745(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_88())
	{
		return -1;
	}
	iVar0 = func_307(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_94(iVar1, 0);
	func_746(iVar1, 0);
	func_747(iVar1, 0);
	func_748(iVar1, 0);
	func_749(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_750(iVar1, iParam4);
	}
	return iVar1;
}

int func_309(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_751(func_294(iParam0));
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "None";
		case 1:
			return "Story";
		case 2:
			return "Procedural";
		case 3:
			return "Location";
		case 4:
			return "Minigame";
		case 5:
			return "Hideout";
		case 6:
			return "Job";
		case 7:
			return "Beat";
		case 9:
			return "SpecialPed";
		case 11:
			return "CompanionActivity";
		case 8:
			return "RCM";
		case 10:
			return "Versus";
		case 12:
			return "Free Mode Activity";
	}
	return "Unknown";
}

void func_311(bool bParam0)
{
	if (Global_1879534 == bParam0)
	{
		return;
	}
	Global_1879534 = bParam0;
	TELEMETRY::_0xEC0BD8736DCAF841(bParam0);
	if (func_17(32768) && !bParam0)
	{
		if (Global_1879534.f_7301.f_1)
		{
			Global_1879534.f_7301.f_1 = 0;
		}
		if (Global_1879534.f_1)
		{
			Global_1879534.f_1 = 0;
		}
	}
}

int func_312(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar4 = func_28() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_565(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!func_346(Global_1898439, 1024))
	{
		func_752();
		func_753(&Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_67(Global_1898330[iVar2]) && func_754(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581.f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!func_755(iVar2, 1024))
			{
				func_739(iVar2, 0);
				switch (Global_1898346[iVar2 /*6*/].f_3)
				{
					case 1:
						if (!Global_1835011[iVar0 /*74*/].f_71)
						{
							iVar0 = Global_1898346[iVar2 /*6*/].f_4;
							if (func_756(iVar0))
							{
								if (!bParam1)
								{
									func_757(iVar0, 0);
								}
								func_758(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_759(iVar0);
								if (bVar3 && !func_760(&(Global_1835011[iVar0 /*74*/]), 32768))
								{
									func_761(&(Global_1835011[iVar0 /*74*/]), 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899.f_2 == Global_1835011[iVar0 /*74*/].f_21)
									{
										Global_1835011[iVar0 /*74*/].f_64 = func_261();
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
						if (iVar5 == 0 && func_28() == -1)
						{
							iVar6 = Global_1898346[iVar2 /*6*/].f_5;
							if (Global_1392626[iVar6 /*32*/].f_3 != func_762(0))
							{
								if (bVar3)
								{
									func_763(iVar6, 0, 0);
								}
								else
								{
									func_763(iVar6, 1, 0);
								}
								if (func_754(Global_1392626[iVar6 /*32*/].f_3))
								{
									func_738(Global_1392626[iVar6 /*32*/].f_3);
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
		if (!func_346(Global_1898439, 8192))
		{
			if (bVar3 && !Global_43891)
			{
				func_764(16384);
			}
			else
			{
				func_765();
			}
			func_753(&Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = Global_40.f_450[iVar7];
			if (func_242(iVar1) && Global_1347702[iVar1 /*49*/] != 45)
			{
				if (func_766(Global_1347702[iVar1 /*49*/].f_13, 256))
				{
				}
				else if (Global_1347702[iVar1 /*49*/].f_15 != func_762(0))
				{
					if (func_767(0) == 1 || func_767(0) == 8)
					{
						func_768(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_769(iVar1, 0);
					}
					if (func_754(Global_1347702[iVar1 /*49*/].f_15))
					{
						func_738(Global_1347702[iVar1 /*49*/].f_15);
					}
				}
				func_770(&(Global_1347702[iVar1 /*49*/].f_13), 2);
			}
			iVar7++;
		}
	}
	func_771();
	if (bParam2)
	{
		func_772();
	}
	func_773();
	func_774();
	return 1;
}

void func_313()
{
	struct<60> Var0;
	int iVar60;

	Var0.f_8.f_1 = -15;
	Var0.f_11 = 10;
	Var0.f_11.f_1.f_1 = -15;
	Var0.f_11.f_1.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_42 = -1;
	Var0.f_43 = -15;
	Var0.f_45 = -15;
	Var0.f_46 = -15;
	Var0.f_47 = -15;
	Var0.f_48 = -15;
	Var0.f_50 = -15;
	iVar60 = 0;
	while (iVar60 < 27)
	{
		Global_40.f_4942[iVar60 /*60*/] = { Var0 };
		iVar60++;
	}
}

void func_314()
{
	MISC::_COPY_MEMORY(&Global_20710, &Global_2714655, 2408);
}

void func_315()
{
	int iVar0;
	struct<11> Var1;

	Var1.f_1 = -15;
	Var1.f_2 = -15;
	Var1.f_4 = -1;
	Var1.f_4.f_4 = -15;
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_23118[iVar0 /*11*/] = { Var1 };
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			Global_1058888.f_40615[iVar0 /*11*/] = { Var1 };
			iVar0++;
		}
	}
}

void func_316(bool bParam0, int iParam1)
{
	func_312(0, 0, 1, 0);
	func_775();
	func_776();
	func_6(1);
	func_777();
	func_22();
	if (iParam1 == -1)
	{
		if (!func_35() || bParam0)
		{
			func_778(Global_1835011[0 /*74*/].f_1, 0, 0, 0, 1);
		}
		else
		{
			MAP::_MAP_DISCOVERY_SET_ENABLED(-1753910767);
		}
	}
}

void func_317()
{
	func_779();
	func_780();
	func_315();
}

void func_318(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_781())
	{
		if (func_782(255))
		{
			if (!func_783(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_126(Global_1894899.f_2) && func_176(Global_1894899.f_2))
		{
			func_784(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_785(16);
			}
		}
		else if (func_126(Global_1894899.f_2) && !func_177(Global_1894899.f_2, 2))
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
		func_786(16);
		func_787();
		if (bVar0)
		{
			func_786(1);
		}
	}
}

void func_319(int iParam0)
{
	PLAYER::_0x77E83C315A3B31CA(PLAYER::GET_PLAYER_INDEX());
	if (iParam0 == -1)
	{
		func_788();
		func_789();
		func_790();
		func_791();
		func_792();
		func_793();
		func_794();
		func_795();
		func_796();
		func_797();
		func_798();
		func_799(1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -944777689 /* GXTEntry: "Mr Linton" */);
	}
	func_104();
	func_800();
}

void func_320(int iParam0)
{
	if (iParam0 == -1)
	{
		func_49();
	}
	else
	{
		func_801();
	}
}

void func_321()
{
	PERSCHAR::_0x8BC555034A5A5E8C(GET_HASH_KEY("PERSCHAR_COMP_HORSE_CHARLES"), GET_HASH_KEY("A_C_HORSE_GANG_CHARLES"));
	PERSCHAR::_0x8BC555034A5A5E8C(GET_HASH_KEY("PERSCHAR_COMP_HORSE_SADIE"), GET_HASH_KEY("A_C_HORSE_GANG_SADIE"));
	PERSCHAR::_0x8BC555034A5A5E8C(GET_HASH_KEY("PERSCHAR_COMP_HORSE_UNCLE"), GET_HASH_KEY("A_C_HORSE_GANG_UNCLE"));
	Global_40.f_4942[7 /*60*/].f_7 = 0;
	Global_40.f_4942[11 /*60*/].f_7 = 0;
	Global_40.f_4942[4 /*60*/].f_7 = 0;
}

void func_322(int iParam0)
{
	if (iParam0 == -1)
	{
		func_802();
	}
	else
	{
		func_803();
	}
}

void func_323()
{
	func_804();
	func_805(0);
	if (func_28() == -1)
	{
		func_806(!func_35());
	}
	func_807();
	func_808();
	Global_40.f_7854 = 0;
	Global_40.f_7855 = 0;
	Global_40.f_7856 = 0;
	func_809();
	if (Global_40)
	{
		func_810();
	}
	AUDIO::_0x3E93DDDCBB6111E4("RDR3.BattleSeqIndex", 0f);
}

void func_324()
{
	HUD::_JOURNAL_CLEAR_ALL_PROGRESS();
	func_811();
}

void func_325()
{
	if (func_28() == 0)
	{
		return;
	}
	else
	{
		func_812();
		func_813();
	}
}

void func_326()
{
	if (func_28() != -1)
	{
		return;
	}
	Global_40.f_4283.f_328 = -15;
	Global_40.f_4283.f_329 = -15;
	Global_40.f_4283.f_331 = -15;
	Global_40.f_4283.f_332[0] = -1;
	Global_40.f_4283.f_332[1] = -1;
	func_814(&(Global_40.f_4283.f_440[0 /*63*/]));
	func_814(&(Global_40.f_4283.f_440[1 /*63*/]));
	func_815(0, 711);
}

void func_327(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_816(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_816(iParam1, iParam0);
	}
}

void func_328()
{
	vector3 vVar0;
	int iVar5;
	var uVar6;

	vVar0 = 176656832;
	vVar0.f_1 = -15;
	vVar0.f_2 = 1017034651;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_4283.f_6[iVar5 /*5*/]), &vVar0, 5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 17)
	{
		Global_1357549.f_1848[iVar5] = 0;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 50)
	{
		MISC::_COPY_MEMORY(&(Global_1357549.f_1252[iVar5 /*3*/]), &uVar6, 3);
		iVar5++;
	}
	Global_1357549.f_1403 = 0;
	Global_1357549.f_1404 = 0;
	Global_1357549.f_1405 = 0;
	Global_1357549.f_1406 = 0;
	Global_1359453 = 0;
}

void func_329(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_5 = { func_817() };
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
}

void func_330()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_CAMP_COLTER", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_CAMP_HORSESHOE_OVERLOOK", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_clemens_point", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_shady_belle", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_beaver_hollow", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_pronghorn_ranch", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_pronghorn_ranch", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_beechers_hope", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_beechers_hope", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Camp_Lakay", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Camp_Guarma", false, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_camp_dark_mood_zone", false, true);
}

void func_331(bool bParam0)
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
		func_818();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

bool func_332()
{
	if (func_819(-524145696))
	{
		if (func_820(809554858))
		{
			return true;
		}
		func_821(-524145696);
	}
	if (func_819(-1223121209))
	{
		if (func_820(-451832572))
		{
			return true;
		}
		func_821(-1223121209);
	}
	if (func_819(-1053549743))
	{
		if (func_820(1033721560) || func_823(func_822(105), Global_36))
		{
			return true;
		}
		func_821(-1053549743);
	}
	if (func_819(1649996811))
	{
		if (func_820(GET_HASH_KEY("BEE_01_CAMP")))
		{
			return true;
		}
		func_821(1649996811);
	}
	if (func_819(1478132521))
	{
		if (func_824(398639187, 1120403456 /* Float: 100f */))
		{
			return true;
		}
		func_821(1478132521);
	}
	return false;
}

void func_333(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_335()
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

	if (!func_125(45))
	{
		if (Global_1934765.f_290)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BEECHERS_A"));
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BEECHERS_B"));
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BEECHERS_C"));
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_290 = 0;
		}
		if (Global_1934765.f_292)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_292 = 0;
		}
		if (!Global_1934765.f_291 && func_381(38))
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BLACKWATER_REGULAR"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_291 = 1;
		}
		func_342(-37875204);
		func_342(258104717);
		func_342(-76700394);
		func_342(1614255891);
		func_342(1861460906);
		func_342(1044079550);
		func_358("nav_shack_BA");
		func_333(-1079295176);
		func_333(894787561);
		func_342(-1276109918);
		func_342(-1386423483);
		func_342(-1405375965);
		func_342(1277540472);
		func_342(-1331593143);
		func_342(1133172356);
		func_342(-559257162);
		func_358("nav_shack_BB");
		func_333(979670262);
		func_333(418666411);
		func_333(651621232);
		func_342(-574996782);
		func_342(1169511062);
		func_342(-1266106154);
		func_342(-1377975054);
		func_342(897624424);
		func_342(-2111718052);
		func_358("nav_shack_BC");
		func_333(-165202905);
		func_333(-1327148782);
		func_333(-1965378386);
		func_342(175578406);
		func_342(-686953321);
		func_342(-1737485501);
		func_342(-739754595);
		func_342(942470447);
		func_342(-1859413313);
		func_342(489834626);
		func_333(-1667265438);
		func_333(54029413);
		func_333(-1070234238);
		func_333(-931280709);
		func_333(-1170563128);
		func_333(1394163483);
		func_358("nav_std_train_station_es");
		func_342(-5339556);
		func_342(1258244391);
		func_342(1343343014);
		func_342(-2082201137);
		func_342(1641449717);
		func_342(739412171);
		func_342(-501793326);
		func_342(466168676);
		func_342(1479152994);
		func_358("nav_blackwater_endless_summer");
		func_333(1173561253);
		func_333(1470738186);
		func_333(-1632348233);
		func_342(903666582);
		func_333(1081087978);
		func_358("nav_val_es");
		func_358("nav_val_es_saloon_lockdown");
		func_358("nav_val_es_full_lockdown");
		func_342(GET_HASH_KEY("ANN_05_HOUSE_ES"));
		func_333(GET_HASH_KEY("ANN_05_HOUSE"));
		func_333(-693132475);
		func_358("nav_annesburg_es");
		func_342(158063004);
		func_358("nav_coots_graves");
		func_342(-1112373128);
		func_342(-891994084);
		func_342(-84516711);
		func_342(-657241692);
		func_333(1596089211);
		func_333(-2133417899);
		func_333(1274804496);
		func_333(1597665303);
		func_333(116162819);
		func_358("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		iVar0 = func_825(2087609309);
		if (!GRAPHICS::_0x113857D66A9CABE6(iVar0))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar0, true);
		}
		func_342(-1380983970);
		func_342(-1912028958);
		func_333(563944718);
		func_358("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, true);
		}
		if (func_28() == -1)
		{
			if (func_826(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_348((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (func_826(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_348((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!func_611(0, 0, 1))
			{
				func_348(944, 32);
				func_348(940, 32);
			}
			func_827(GET_HASH_KEY("META_OUTFIT_DEFAULT"));
			iVar4 = 0;
			while (iVar4 < 13)
			{
				func_829(iVar4, func_828(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765.f_290)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BEECHERS_A"), -1550f, 250f, 0, 0);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BEECHERS_B"), 1440f, -1580f, 0, 0);
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BEECHERS_C"), 1770f, 480f, 0, 0);
			Global_1934765.f_290 = 1;
		}
		if (!Global_1934765.f_292)
		{
			MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BLACKWATER_ENDSUM"), -811f, -1212.5f, 0, 0);
			Global_1934765.f_292 = 1;
		}
		if (Global_1934765.f_291)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BLACKWATER_REGULAR"));
			Global_1934765.f_291 = 0;
		}
		func_333(-37875204);
		func_333(258104717);
		func_333(-76700394);
		func_333(1614255891);
		func_333(1861460906);
		func_333(1044079550);
		func_356("nav_shack_BA");
		func_342(-1079295176);
		func_342(894787561);
		func_333(-1276109918);
		func_333(-1386423483);
		func_333(-1405375965);
		func_333(1277540472);
		func_333(-1331593143);
		func_333(1133172356);
		func_333(-559257162);
		func_356("nav_shack_BB");
		func_342(979670262);
		func_342(418666411);
		func_342(651621232);
		func_333(-574996782);
		func_333(1169511062);
		func_333(-1266106154);
		func_333(-1377975054);
		func_333(-2111718052);
		func_333(897624424);
		func_356("nav_shack_BC");
		func_342(-165202905);
		func_342(-1327148782);
		func_342(-1965378386);
		func_342(-1667265438);
		func_342(54029413);
		func_342(-1070234238);
		func_342(-931280709);
		func_342(-1170563128);
		func_342(1394163483);
		func_333(175578406);
		func_333(489834626);
		func_333(-686953321);
		func_333(-1737485501);
		func_333(-739754595);
		func_333(942470447);
		func_333(-1859413313);
		func_356("nav_std_train_station_es");
		func_342(1173561253);
		func_342(1470738186);
		func_342(-1632348233);
		func_333(-5339556);
		func_333(1258244391);
		func_333(1343343014);
		func_333(-2082201137);
		func_333(1641449717);
		func_333(739412171);
		func_333(-501793326);
		func_333(466168676);
		func_333(1479152994);
		func_356("nav_blackwater_endless_summer");
		func_342(1081087978);
		func_333(903666582);
		if (func_340(-1215445344))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_es_full_lockdown");
		}
		else if (func_340(-1763509974))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_es_saloon_lockdown");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_356("nav_val_es");
		}
		func_342(GET_HASH_KEY("ANN_05_HOUSE"));
		func_342(-693132475);
		func_333(GET_HASH_KEY("ANN_05_HOUSE_ES"));
		func_356("nav_annesburg_es");
		func_333(158063004);
		func_356("nav_coots_graves");
		func_342(1596089211);
		func_342(-2133417899);
		func_342(1274804496);
		func_342(1597665303);
		func_342(116162819);
		func_333(-1112373128);
		func_333(-891994084);
		func_333(-84516711);
		func_333(-657241692);
		func_356("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		iVar5 = func_825(2087609309);
		if (GRAPHICS::_0x113857D66A9CABE6(iVar5))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar5, false);
		}
		func_333(-1380983970);
		func_342(563944718);
		func_333(-1912028958);
		func_356("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, false);
		}
		if (func_28() == -1)
		{
			if (func_826(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_349((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (func_826(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_349((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			func_349(944, 32);
			func_349(940, 32);
			func_827(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				func_829(iVar9, func_830(iVar9));
				iVar9++;
			}
		}
	}
}

void func_336()
{
	if (func_272(38))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", false);
	}
	if (func_831())
	{
		func_832(56);
	}
	else
	{
		func_833(56);
	}
	if (func_125(44))
	{
		func_832(105);
		func_832(95);
	}
	else
	{
		func_833(105);
		func_833(95);
	}
	if (func_834(105))
	{
		func_835(func_110(105));
	}
	else if (func_836(105))
	{
		func_837(105);
	}
	if (func_834(95))
	{
		func_835(func_110(95));
	}
	else if (func_836(95))
	{
		func_837(95);
	}
	func_342(481636996);
	func_334(212);
	func_334(211);
	func_334(213);
	func_334(214);
	func_334(215);
	func_334(216);
	func_334(217);
	func_334(218);
	func_334(219);
	func_334(220);
	func_334(221);
	func_334(222);
	func_334(223);
	func_334(224);
	func_334(225);
	func_333(1454866069);
	func_333(-383442850);
	func_333(531960211);
	func_333(GET_HASH_KEY("DIS_SCM_CC_GRAFFITI"));
	func_333(-2041779893);
	func_333(1123990218);
	func_333(GET_HASH_KEY("BEP_01_CC_GRAFFITI"));
	func_333(GET_HASH_KEY("TWO_01_CC_GRAFFITI"));
	func_333(GET_HASH_KEY("DIS_GAP_CC_GRAFFITI"));
	func_333(-1111286486);
	func_333(GET_HASH_KEY("A_WATER_ICE_CC_GRAFFITI"));
	func_333(107317036);
	func_333(1193229750);
	func_333(1492183352);
	func_333(GET_HASH_KEY("VAN_02_CC_GRAFFITI"));
	func_333(-1664053323);
	func_333(-1375030991);
	func_333(-313992757);
	func_334(205);
	func_334(206);
	func_334(207);
	func_334(208);
	func_334(209);
	func_334(210);
	func_333(-1176501741);
	if (!func_369(44))
	{
		func_334(26);
	}
	else
	{
		func_343(26);
	}
	func_357(1121239638, 1);
	func_357(-1677757270, 1);
	func_357(906662604, 1);
	func_357(-310410837, 1);
	func_343(185);
	func_334(184);
	func_333(642301973);
	func_342(1260721433);
	func_838();
	func_333(626046501);
}

void func_337()
{
	Global_1934765++;
}

void func_338()
{
	int iVar0;

	func_839();
	if (func_28() == 0)
	{
		func_333(-1253110600);
		func_333(-1402083909);
	}
	iVar0 = -1;
	if (func_340(704802028))
	{
		func_333(-1012618146);
		func_333(-722030448);
		func_356("nav_mesh_beech_shack");
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_333(-904669171);
		func_333(774601424);
		func_333(-584332967);
		func_333(-1615103170);
		func_333(1256771838);
		func_333(-1765152778);
		func_333(-2072231077);
		func_333(19217583);
	}
	else if (func_340(588987611))
	{
		func_333(-1012618146);
		func_333(-722030448);
		func_333(1757739778);
		func_356("nav_mesh_beech_shack_with_fire");
		func_333(578474998);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
	}
	else if (func_340(2008888900))
	{
		func_333(-1012618146);
		func_333(1757739778);
		func_356("nav_mesh_beech_shack_with_fire");
		func_333(GET_HASH_KEY("BEE_01_CAMP"));
		func_333(578474998);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_342(-722030448);
	}
	else if (func_340(1649996811))
	{
		func_333(GET_HASH_KEY("BEE_01_CAMP"));
		func_356("nav_mesh_beech_camp_with_rubble");
		func_333(578474998);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_333(2111816145);
	}
	else if (func_340(227918160))
	{
		func_333(GET_HASH_KEY("BEE_01_CAMP"));
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_333(578474998);
		func_356("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_340(168171957))
	{
		func_333(GET_HASH_KEY("BEE_01_CAMP"));
		func_333(-1667461262);
		func_333(-974480336);
		func_333(411742897);
		func_333(1344772301);
		func_333(1467774743);
		func_333(43335376);
		func_356("nav_mesh_beech_house_finished");
		func_333(-284612948);
		func_333(-1325016116);
		func_333(578474998);
		func_334(111);
		func_334(116);
		func_334(100);
		func_334(101);
	}
	else if (func_340(1193080109))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1344772301);
		func_333(1467774743);
		func_333(GET_HASH_KEY("BEE_01_BARN_STAGE05"));
		func_333(578474998);
		func_333(43335376);
		func_333(1353861354);
		func_333(1205945639);
		func_356("nav_mesh_beech_barn_finished");
		func_333(-284612948);
		func_333(431365499);
		func_333(276582710);
		func_333(1191890045);
		func_333(1864768904);
		func_333(-692583342);
		func_333(-918785150);
		func_334(116);
		func_334(100);
		func_334(102);
		func_334(103);
		if (func_32(75) && !func_840(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(104);
		func_334(105);
		func_334(111);
		if (func_840(108))
		{
			func_343(107);
		}
		else
		{
			func_334(107);
		}
	}
	else if (func_340(-639037538))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1467774743);
		func_333(GET_HASH_KEY("BEE_01_BARN_STAGE05"));
		func_333(1353861354);
		func_356("nav_mesh_beech_house_decor");
		func_333(578474998);
		func_333(1236917971);
		func_333(43335376);
		func_333(-284612948);
		func_333(-2090209059);
		func_333(1977031606);
		func_333(1929454697);
		func_333(938290967);
		func_333(1532009326);
		func_333(1344772301);
		func_333(-918785150);
		func_333(-692583342);
		func_333(GET_HASH_KEY("BEE_CRAFTINGFIRE01"));
		func_374(GET_HASH_KEY("BEE_CRAFTINGFIRE01"));
		func_333(-1860722801);
		func_333(637627640);
		func_333(349494711);
		func_334(117);
		func_334(116);
		func_334(100);
		func_334(109);
		func_334(102);
		func_334(110);
		func_334(106);
		if (!func_840(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(111);
	}
	else if (func_340(-491981251))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1467774743);
		func_333(GET_HASH_KEY("BEE_01_BARN_STAGE05"));
		func_333(1353861354);
		func_356("nav_mesh_beech_house_decor");
		func_333(578474998);
		func_333(1236917971);
		func_333(43335376);
		func_333(-284612948);
		func_333(-2090209059);
		func_333(1977031606);
		func_333(1929454697);
		func_333(938290967);
		func_333(1532009326);
		func_333(1344772301);
		func_333(-918785150);
		func_333(-692583342);
		func_333(GET_HASH_KEY("BEE_CRAFTINGFIRE01"));
		func_374(GET_HASH_KEY("BEE_CRAFTINGFIRE01"));
		func_333(-1860722801);
		func_333(637627640);
		func_333(349494711);
		func_334(117);
		func_334(116);
		func_334(100);
		func_334(109);
		func_334(102);
		func_334(110);
		if (func_840(108))
		{
			func_343(107);
		}
		else
		{
			func_334(107);
		}
		if (!func_840(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(111);
	}
	else if (func_340(-618620429))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1467774743);
		func_333(GET_HASH_KEY("BEE_01_BARN_STAGE05"));
		func_333(1353861354);
		func_356("nav_mesh_beech_house_completed");
		func_333(578474998);
		func_333(1236917971);
		func_333(43335376);
		func_333(-284612948);
		func_333(349494711);
		func_333(1965249616);
		func_333(-2021605623);
		func_333(1649902358);
		func_333(1169279648);
		func_333(1532009326);
		func_333(1344772301);
		func_333(-918785150);
		func_333(-692583342);
		func_333(GET_HASH_KEY("BEE_CRAFTINGFIRE01"));
		func_374(GET_HASH_KEY("BEE_CRAFTINGFIRE01"));
		func_333(-1860722801);
		func_333(637627640);
		func_333(-218940381);
		if (!func_840(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(117);
		func_334(116);
		func_334(100);
		func_334(109);
		func_334(102);
		func_334(112);
		func_334(113);
		func_334(111);
		func_334(113);
		if (func_840(115))
		{
			func_343(114);
		}
		else
		{
			func_334(114);
		}
	}
	if (Global_1934765.f_300 != iVar0)
	{
		if (Global_1934765.f_300 != -1)
		{
			MAP::_0xE057FEA9A22EB3EE(GET_HASH_KEY("EXTERIOR_BEECHERSHOPE"));
		}
		MAP::_0x1392105DA88BBFFB(GET_HASH_KEY("EXTERIOR_BEECHERSHOPE"), -1640f, -1370f, 0, iVar0);
		Global_1934765.f_300 = iVar0;
	}
}

void func_339()
{
	vector3 vVar0;
	vector3 vVar10;

	if (func_340(-1215445344))
	{
		func_342(-661560211);
		func_333(GET_HASH_KEY("VAL_02_LOCKDOWN_BANK"));
		func_333(-784156210);
		if (func_125(45))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_es_full_lockdown");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_full_lockdown");
		}
	}
	else
	{
		func_342(GET_HASH_KEY("VAL_02_LOCKDOWN_BANK"));
		func_342(-784156210);
		func_333(-661560211);
		if (func_125(45))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_356("nav_val_es");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_358("nav_val_full_lockdown");
		}
	}
	if (func_340(-254562075))
	{
		func_342(-1049500949);
		func_333(-981203673);
		func_333(-2009766528);
	}
	else
	{
		func_342(-981203673);
		func_342(-2009766528);
		func_333(-1049500949);
	}
	if (func_340(320943355))
	{
		func_342(135886022);
		func_333(1228600352);
		func_333(406334892);
	}
	else
	{
		func_342(1228600352);
		func_342(406334892);
		func_333(135886022);
	}
	if (func_340(689024866))
	{
		func_342(-1933617196);
		func_333(GET_HASH_KEY("VAL_02_LOCKDOWN_GUN"));
		func_333(-1905652203);
	}
	else
	{
		func_342(GET_HASH_KEY("VAL_02_LOCKDOWN_GUN"));
		func_342(-1905652203);
		func_333(-1933617196);
	}
	if (func_340(1160698568))
	{
		func_342(-1588793465);
		func_333(GET_HASH_KEY("VAL_02_LOCKDOWN_HOTEL"));
		func_333(1519091923);
		func_363(1879307167, 1, 0, 0, 0, 0, 0, 0);
		func_363(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_342(GET_HASH_KEY("VAL_02_LOCKDOWN_HOTEL"));
		func_342(1519091923);
		func_333(-1588793465);
		func_363(1879307167, 0, 0, 0, 1, 0, 0, 0);
		func_363(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_340(-1179948750))
	{
		func_342(GET_HASH_KEY("VAL_03_DEFAULT_JAIL"));
		func_333(-1301569116);
		func_333(GET_HASH_KEY("VAL_03_PROPS_LOCKDOWN_JAIL"));
	}
	else
	{
		func_342(-1301569116);
		func_342(GET_HASH_KEY("VAL_03_PROPS_LOCKDOWN_JAIL"));
		func_333(GET_HASH_KEY("VAL_03_DEFAULT_JAIL"));
	}
	if (func_340(1713221411))
	{
		func_342(924412185);
		func_333(GET_HASH_KEY("VAL_02_LOCKDOWN_LAW"));
		func_333(-156313117);
	}
	else
	{
		func_342(GET_HASH_KEY("VAL_02_LOCKDOWN_LAW"));
		func_342(-156313117);
		func_333(924412185);
	}
	if (func_340(300221584))
	{
		func_342(-1781246069);
		func_333(282485265);
		func_333(-1744253204);
	}
	else
	{
		func_342(282485265);
		func_342(-1744253204);
		func_333(-1781246069);
	}
	if (func_340(-220282381))
	{
		func_342(-1892595931);
		func_333(56708243);
	}
	else
	{
		func_342(56708243);
		func_333(-1892595931);
	}
	if (func_340(-1329135070))
	{
		func_342(-1158072415);
		func_333(199047531);
		func_333(192173299);
		func_841(32, 1);
	}
	else
	{
		func_342(199047531);
		func_342(192173299);
		func_333(-1158072415);
		if ((!func_842(9, 0) && !func_843(5)) && !func_844(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			func_845(32, &vVar0, 1);
			func_846(&vVar0, 1, 1);
		}
	}
	if (func_340(-1763509974))
	{
		func_333(-776975047);
		func_333(1385025009);
		if (!func_340(-1215445344))
		{
			if (func_125(45))
			{
				func_358("nav_val_saloon_lockdown");
				func_358("nav_val_full_lockdown");
				func_358("nav_val_es");
				func_358("nav_val_es_full_lockdown");
				func_356("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_358("nav_val_saloon_lockdown");
				func_358("nav_val_es_saloon_lockdown");
				func_358("nav_val_full_lockdown");
				func_358("nav_val_es_full_lockdown");
				func_358("nav_val_es");
				func_356("nav_val_saloon_lockdown");
			}
		}
		func_363(-908482159, 1, 0, 0, 0, 0, 0, 0);
		func_363(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		func_363(968874193, 1, 0, 0, 0, 0, 0, 0);
		func_363(1154795503, 1, 0, 0, 0, 0, 0, 0);
		func_363(583884620, 1, 0, 0, 0, 0, 0, 0);
		func_363(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		func_342(-776975047);
		func_342(1385025009);
		func_363(-908482159, 0, 0, 0, 1, 0, 0, 0);
		func_363(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		func_363(968874193, 0, 0, 0, 1, 0, 0, 0);
		func_363(1154795503, 0, 0, 0, 1, 0, 0, 0);
		func_363(583884620, 0, 0, 0, 1, 0, 0, 0);
		func_363(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (func_125(45))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_356("nav_val_es");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_358("nav_val_full_lockdown");
		}
	}
	if (func_28() == -1)
	{
		if (func_340(-1206122982))
		{
			func_349(450, 32);
			func_349(451, 32);
			func_349(452, 32);
			func_349(453, 32);
			func_349(466, 32);
			func_349(467, 32);
			func_349(471, 32);
			func_349(464, 32);
		}
		else
		{
			func_348(450, 32);
			func_348(451, 32);
			func_348(452, 32);
			func_348(453, 32);
			func_348(466, 32);
			func_348(467, 32);
			func_348(471, 32);
			func_348(464, 32);
		}
		if (func_340(-666014935))
		{
			func_363(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			func_363(244699522, 1, 0, 0, 0, 0, 0, 0);
			func_363(-590254598, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			func_363(244699522, 0, 0, 0, 1, 0, 0, 0);
			func_363(-590254598, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(1074873669))
		{
			func_349(433, 32);
		}
		else
		{
			func_348(433, 32);
		}
		if (func_340(-1579419919))
		{
			func_363(551601484, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			func_363(-983069384, 1, 0, 0, 0, 0, 0, 0);
			func_363(-768760124, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(551601484, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			func_363(-983069384, 0, 0, 0, 1, 0, 0, 0);
			func_363(-768760124, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(478884033))
		{
			func_349(83, 32);
			func_349(84, 32);
			func_349(85, 32);
			func_349(86, 32);
			func_349(87, 32);
			func_349(79, 32);
		}
		else
		{
			func_348(83, 32);
			func_348(84, 32);
			func_348(85, 32);
			func_348(86, 32);
			func_348(87, 32);
			func_348(79, 32);
		}
		if (func_340(-191424539))
		{
			func_363(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			func_363(2046695029, 1, 0, 0, 0, 0, 0, 0);
			func_363(834296435, 1, 0, 0, 0, 0, 0, 0);
			func_363(1124531468, 1, 0, 0, 0, 0, 0, 0);
			func_363(-902483455, 1, 0, 0, 0, 0, 0, 0);
			func_363(-566797819, 1, 0, 0, 0, 0, 0, 0);
			func_363(1469250492, 1, 0, 0, 0, 0, 0, 0);
			func_363(678501753, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			func_363(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			func_363(2046695029, 0, 0, 0, 1, 0, 0, 0);
			func_363(834296435, 0, 0, 0, 1, 0, 0, 0);
			func_363(1124531468, 0, 0, 0, 1, 0, 0, 0);
			func_363(-902483455, 0, 0, 0, 1, 0, 0, 0);
			func_363(-566797819, 0, 0, 0, 1, 0, 0, 0);
			func_363(1469250492, 0, 0, 0, 1, 0, 0, 0);
			func_363(678501753, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			func_363(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(-397760715))
		{
			func_363(1098854605, 1, 0, 0, 0, 0, 0, 0);
			func_363(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_841(19, 1);
		}
		else
		{
			func_363(1098854605, 0, 0, 0, 1, 0, 0, 0);
			func_363(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!func_842(9, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("RCM_CALLAWAY1")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("RCM_CALLAWAY12")) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				func_845(19, &vVar10, 1);
				func_846(&vVar10, 1, 1);
			}
		}
		if (func_340(2639906))
		{
			func_363(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			func_363(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			func_363(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(1660024373))
		{
			func_349(320, 32);
			func_349(317, 32);
			func_349(318, 32);
			func_349(319, 32);
			func_349(250, 32);
		}
		else
		{
			func_348(320, 32);
			func_348(317, 32);
			func_348(318, 32);
			func_348(319, 32);
			func_348(250, 32);
		}
		if (func_340(-1063147448))
		{
			func_363(-399528504, 1, 0, 0, 0, 0, 0, 0);
			func_363(804086151, 1, 0, 0, 0, 0, 0, 0);
			func_363(-923901632, 1, 0, 0, 0, 0, 0, 0);
			func_363(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-399528504, 0, 0, 0, 1, 0, 0, 0);
			func_363(804086151, 0, 0, 0, 1, 0, 0, 0);
			func_363(-923901632, 0, 0, 0, 1, 0, 0, 0);
			func_363(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(-80522843))
		{
			func_349(354, 32);
			func_349(367, 32);
			func_349(368, 32);
			func_349(369, 32);
			func_349(370, 32);
			func_349(371, 32);
			func_349(886, 32);
		}
		else
		{
			func_348(354, 32);
			func_348(367, 32);
			func_348(368, 32);
			func_348(86, 32);
			func_348(370, 32);
			func_348(371, 32);
			func_348(886, 32);
		}
		if (func_340(-1523910291))
		{
			func_363(2094297354, 1, 0, 0, 0, 0, 0, 0);
			func_363(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(2094297354, 0, 0, 0, 1, 0, 0, 0);
			func_363(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

bool func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_847(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_341(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

void func_342(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_340(iParam0))
	{
		if (func_289(Global_1934765.f_20, iParam2))
		{
			iVar0 = func_822(iParam1);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				func_290(&(Global_1934765.f_20), iParam2);
			}
		}
	}
	else if (!func_289(Global_1934765.f_20, iParam2))
	{
		iVar1 = func_822(iParam1);
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			POPULATION::_0x18262CAFEBB5FBE1(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iVar1, iParam3, 0, 0, -1, -1, 0);
			func_291(&(Global_1934765.f_20), iParam2);
		}
	}
}

int func_345(int iParam0)
{
	if (!func_756(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

bool func_346(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_347(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

void func_348(int iParam0, int iParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (!func_624(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_349(int iParam0, int iParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (!func_624(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

bool func_350(int iParam0, bool bParam1)
{
	if (!func_624(iParam0))
	{
		return false;
	}
	if (!func_366(iParam0, 2))
	{
		return false;
	}
	if (func_625(iParam0) == 0)
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_627(iParam0)))
	{
		return true;
	}
	if (func_366(iParam0, 1) && !bParam1)
	{
		func_349(iParam0, 128);
		return true;
	}
	func_348(iParam0, 129);
	func_848(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_627(iParam0));
	func_626(iParam0, 0);
	return true;
}

void func_351(int iParam0, int iParam1)
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

void func_352()
{
	if (!func_340(0))
	{
		func_342(1149195254);
		func_342(2016081133);
		func_342(363257921);
		func_342(58066174);
		func_342(-1521525254);
		func_342(-761186147);
		func_342(-1872939092);
		func_342(-964156415);
	}
	else
	{
		func_342(-1643869063);
	}
	if (!func_340(473295046))
	{
		func_342(-1108618313);
		func_342(-787678727);
	}
	if (!func_340(-1738165526))
	{
		func_342(622597018);
		func_342(1649275138);
	}
	func_342(-2137633069);
	func_342(1944013855);
	func_342(-437251660);
	func_343(124);
	func_343(125);
	func_343(187);
	func_343(188);
	func_343(123);
	func_343(122);
	func_343(121);
	func_343(120);
	func_358("bra_man_burned");
	func_358("bra_man_burned_bra3");
	func_358("bra_man_endsum");
}

void func_353(bool bParam0)
{
	func_849(-1452136643, bParam0);
	func_849(-744260705, bParam0);
	func_849(1424293412, bParam0);
	func_849(1060557512, bParam0);
	func_849(-362403544, bParam0);
	func_849(-592147003, bParam0);
	func_849(2056145270, bParam0);
	func_849(748826019, bParam0);
	func_849(366542865, bParam0);
	func_849(-1508467572, bParam0);
	func_849(-1220264217, bParam0);
	func_849(-990258606, bParam0);
	func_849(-1508467572, bParam0);
	func_849(-1220264217, bParam0);
	func_849(-990258606, bParam0);
	func_849(-665583358, bParam0);
	func_849(-282972514, bParam0);
	func_849(-64632667, bParam0);
	func_849(314111435, bParam0);
	func_849(24859476, bParam0);
	func_849(340621560, bParam0);
	func_849(1266707689, bParam0);
	func_849(434145706, bParam0);
	func_849(654746614, bParam0);
	func_849(1965736001, bParam0);
	func_849(1650694835, bParam0);
	func_849(1891284833, bParam0);
	func_849(1576931820, bParam0);
	func_849(1812999696, bParam0);
	func_849(-1184151355, bParam0);
	func_849(-946313953, bParam0);
	func_849(-889100155, bParam0);
	func_849(-1296418825, bParam0);
	func_849(352816221, !bParam0);
	func_849(1128622296, !bParam0);
	func_849(979982112, !bParam0);
	func_849(1756640181, !bParam0);
	func_849(1557076971, !bParam0);
	func_849(1913538153, !bParam0);
	func_849(-1603329230, !bParam0);
	func_849(-1892843345, !bParam0);
	func_849(241205019, !bParam0);
}

void func_354(int iParam0, int iParam1)
{
	func_363(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_826(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_367((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_356(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_357(int iParam0, int iParam1)
{
	func_363(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_358(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_359()
{
	if (func_340(-919512195))
	{
		func_342(419559004);
		func_342(1786931635);
		func_342(557212279);
		func_342(1426715569);
		func_342(2097480406);
		func_358("cal_nav_tabacco_burnt");
		func_358("cal_nav_tabacco_burning");
		func_358("cal_nav_tabacco_mission");
		func_333(702350293);
		func_333(-677977650);
		func_333(26815048);
		func_333(-1229109520);
		func_356("cal_nav_tabacco_clean");
	}
	else if (func_340(-1925798111))
	{
		func_342(419559004);
		func_342(1786931635);
		func_342(557212279);
		func_358("cal_nav_tabacco_burnt");
		func_358("cal_nav_tabacco_burning");
		func_358("cal_nav_tabacco_clean");
		func_333(702350293);
		func_333(-677977650);
		func_333(26815048);
		func_333(-1229109520);
		func_333(1426715569);
		func_333(2097480406);
		func_356("cal_nav_tabacco_mission");
	}
	else if (func_340(420709909))
	{
		func_342(419559004);
		func_342(26815048);
		func_342(-1229109520);
		func_358("cal_nav_tabacco_burnt");
		func_358("cal_nav_tabacco_clean");
		func_358("cal_nav_tabacco_mission");
		func_333(702350293);
		func_333(-677977650);
		func_333(1786931635);
		func_333(557212279);
		func_333(1426715569);
		func_333(2097480406);
		func_356("cal_nav_tabacco_burning");
	}
	else if (func_340(1703426636))
	{
		func_342(702350293);
		func_342(-677977650);
		func_342(26815048);
		func_342(-1229109520);
		func_342(1426715569);
		func_342(2097480406);
		func_358("cal_nav_tabacco_clean");
		func_358("cal_nav_tabacco_mission");
		func_358("cal_nav_tabacco_burning");
		func_333(419559004);
		func_333(1786931635);
		func_333(557212279);
		func_356("cal_nav_tabacco_burnt");
	}
}

void func_360()
{
	func_342(-717025835);
	func_342(1248111234);
	if (!func_340(1884271742) && !func_340(-2038424081))
	{
		func_342(-1316886711);
		func_342(867231253);
	}
	if (!func_340(356365161))
	{
		func_342(474287981);
		func_342(-1670453688);
	}
	func_342(2039534767);
	func_342(GET_HASH_KEY("WIN1_INTRO_CUTSCENE"));
	func_342(-323126593);
	func_342(1590561203);
	func_342(205214733);
	if (!func_340(-1187950766) && !func_340(356365161))
	{
		func_342(-338553155);
		func_342(-1106668087);
		func_342(-1636879249);
	}
	func_343(186);
	if (!func_340(356365161))
	{
		func_358("col_nav_wint1_cabin_prefire");
	}
	func_358("col_nav_wint1_cabin_duringfire");
	func_358("col_nav_wint2_post");
	func_358("col_nav_wint_end");
}

void func_361(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_847(iParam0, 1);
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

void func_362()
{
	if (func_340(371850993))
	{
		func_333(263152228);
		func_333(1936009597);
	}
	else
	{
		func_342(263152228);
		func_342(1936009597);
	}
}

void func_363(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_850(iParam0, 0, 0);
	if (func_851(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_852(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_853(iParam0, 1);
			}
			else
			{
				func_854(iParam0, 1);
			}
		}
		else
		{
			func_855(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_856())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_364(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1310750.f_16074 = (Global_1310750.f_16074 || iParam0);
	}
	else
	{
		Global_1310750.f_16074 = (Global_1310750.f_16074 - (Global_1310750.f_16074 && iParam0));
	}
}

void func_365()
{
	if (!func_340(-1053549743))
	{
		func_342(1033721560);
	}
	func_342(1343484786);
	func_342(1871051363);
	func_342(146746575);
	func_342(-2144587490);
	func_342(1989074279);
	func_342(-1671953459);
	func_358("rho_nav_grave_norm_gry3_off");
	func_358("rho_nav_grave_norm_gry3_on");
	func_358("rho_nav_grave_dug_gry3_off");
	func_358("rho_nav_grave_dug_gry3_on");
	func_358("rho_nav_grave_open_gry3_off");
	func_358("rho_nav_grave_open_gry3_on");
	func_358("sad3_nav_rhodes_shootout_00");
}

bool func_366(int iParam0, int iParam1)
{
	if (func_28() != -1)
	{
		return false;
	}
	if (!func_624(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

bool func_367(int iParam0)
{
	int iVar0;

	if (!func_624(iParam0))
	{
		return false;
	}
	if (!func_857(func_625(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_627(iParam0)))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_627(iParam0))))
		{
			return true;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_627(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_627(iParam0));
	return true;
}

bool func_368(int iParam0)
{
	if (!func_624(iParam0))
	{
		return false;
	}
	if (!func_857(func_625(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_627(iParam0)))
	{
		return false;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_627(iParam0));
	return true;
}

bool func_369(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_694(Global_1835011[iParam0 /*74*/].f_1);
}

void func_370(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

float func_371(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_372()
{
	if (func_28() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_373(int iParam0)
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

void func_374(int iParam0)
{
	if (!GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

bool func_375(int iParam0)
{
	switch (func_28())
	{
		case -1:
			return (Global_1357549.f_1495 && iParam0) != 0;
	}
	return false;
}

void func_376(int iParam0)
{
	switch (func_28())
	{
		case -1:
			Global_1357549.f_1495 = (Global_1357549.f_1495 || iParam0);
			break;
	}
}

int func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_826(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_368((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_378(int iParam0)
{
	switch (func_28())
	{
		case -1:
			Global_1357549.f_1495 = (Global_1357549.f_1495 - (Global_1357549.f_1495 && iParam0));
			break;
	}
}

int func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_826(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_350((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_380()
{
	if (func_340(-2020023971))
	{
		func_342(758684739);
		func_342(-661825463);
		func_333(518127510);
		func_343(182);
		func_334(181);
	}
	else
	{
		func_342(518127510);
		func_333(758684739);
		func_333(-661825463);
		func_343(181);
		func_334(182);
	}
}

bool func_381(int iParam0)
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

void func_382()
{
	func_358("nav_sdn_docks_pre_es");
	func_358("nav_sdn_docks_korrigan_pre_es");
	func_358("nav_sdn_docks_antenor_pre_es");
	func_358("nav_sdn_docks_trains_pre_es");
	func_358("nav_sdn_docks_korrigan_antenor_pre_es");
	func_358("nav_sdn_docks_antenor_trains_pre_es");
	func_358("nav_sdn_docks_korrigan_trains_pre_es");
	func_358("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_358("nav_sdn_docks_es");
	func_358("nav_sdn_docks_korrigan_es");
	func_358("nav_sdn_docks_antenor_es");
	func_358("nav_sdn_docks_trains_es");
	func_358("nav_sdn_docks_korrigan_antenor_es");
	func_358("nav_sdn_docks_antenor_trains_es");
	func_358("nav_sdn_docks_korrigan_trains_es");
	func_358("nav_sdn_docks_korrigan_antenor_trains_es");
}

void func_383(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, 1, -1, 0);
	}
}

void func_384(var uParam0, int iParam1)
{
	if (*uParam0 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(uParam0, iParam1);
		*uParam0 = -1;
	}
}

void func_385(int iParam0, int iParam1)
{
	if (func_340(iParam0))
	{
		func_333(iParam1);
	}
	else
	{
		func_342(iParam1);
	}
}

int func_386()
{
	return Global_40.f_4283.f_4;
}

int func_387(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_589(vParam0))
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
		if (func_858(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1