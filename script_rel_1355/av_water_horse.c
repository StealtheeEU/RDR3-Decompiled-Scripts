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
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = -1;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 1097859072;
	var uLocal_28 = 1000;
	var uLocal_29 = 1067450368;
	var uLocal_30 = 5000;
	var uLocal_31 = 42;
	var uLocal_32 = 1103626240;
	var uLocal_33 = 1077936128;
	var uLocal_34 = 1106247680;
	var uLocal_35 = 1103101952;
	var uLocal_36 = 1097859072;
	var uLocal_37 = 1103626240;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	float fLocal_46 = 0f;
	struct<13> ScriptParam_0 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<504> Var0;
	bool bVar504;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_43 = "script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@b";
	iLocal_44 = GET_HASH_KEY("WORLD_ANIMAL_HORSE_DRINK_GROUND_DOMESTIC");
	iLocal_45 = -1;
	fLocal_46 = 0.5f;
	Var0.f_1 = -1;
	Var0.f_3.f_9 = 3;
	Var0.f_20 = 25;
	Var0.f_20.f_1.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_9 = 1;
	Var0.f_20.f_1.f_10 = 1;
	Var0.f_20.f_1.f_11 = 1;
	Var0.f_20.f_1.f_12 = 1;
	Var0.f_20.f_1.f_13 = 1;
	Var0.f_20.f_1.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	Var0.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	Var0.f_372 = 10;
	Var0.f_372.f_1.f_7 = 1;
	Var0.f_372.f_1.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	Var0.f_469 = 10;
	Var0.f_482 = -1;
	Var0.f_493 = 1056964608;
	Var0.f_494 = 1119092736;
	Var0.f_495 = 1112014848;
	Var0.f_502 = 1259902591;
	Var0 = ScriptParam_0;
	Var0.f_1 = ScriptParam_0.f_11;
	Var0.f_483 = { ScriptParam_0.f_1 };
	Var0.f_486 = { ScriptParam_0.f_4 };
	Var0.f_489 = ScriptParam_0.f_7;
	Var0.f_20[0 /*14*/] = ScriptParam_0.f_8;
	Var0.f_453 = ScriptParam_0.f_9;
	Var0.f_500 = ScriptParam_0.f_10;
	Var0.f_503 = ScriptParam_0.f_12;
	func_1(&Var0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Stack.Push(&Var0);
		Stack.Push(1);
		Call_Loc(Var0.f_467);
		func_2(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar504 = false;
	while (!bVar504)
	{
		if (func_3(&Var0))
		{
			bVar504 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	func_4(uParam0);
}

void func_2(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_20[iVar0 /*14*/].f_4);
		}
		iVar0++;
	}
	if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_496))
	{
		VOLUME::_0xFDFECC6EE4491E11(uParam0->f_496);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_497))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_497);
		func_5(uParam0->f_497);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_498))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_498);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_498);
		func_5(uParam0->f_498);
	}
}

bool func_3(var uParam0)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (uParam0->f_464 > 0 && uParam0->f_464 < 8)
	{
		if (uParam0->f_499)
		{
			uParam0->f_464 = 8;
		}
		else if (func_6(uParam0))
		{
			uParam0->f_464 = 8;
		}
	}
	switch (uParam0->f_464)
	{
		case 0:
			if (func_7(uParam0->f_483))
			{
				if ((MISC::GET_GAME_TIMER() - uParam0->f_481) > 1000)
				{
					iVar1 = 0;
					uParam0->f_482 = func_8(*uParam0, &iVar1, 1, 0, 0);
					if (uParam0->f_482 != -1)
					{
						uParam0->f_483 = { Global_1415419.f_2996[uParam0->f_482 /*7*/] };
						uParam0->f_486 = { Global_1415419.f_2996[uParam0->f_482 /*7*/].f_3 };
						uParam0->f_489 = Global_1415419.f_2996[uParam0->f_482 /*7*/].f_6;
						bVar0 = true;
					}
					else
					{
						uParam0->f_480++;
						uParam0->f_481 = MISC::GET_GAME_TIMER();
						if (uParam0->f_480 > 1)
						{
							func_9(&(Global_1415419.f_19[*uParam0 /*12*/].f_11), 1);
							uParam0->f_464 = 8;
						}
					}
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_10(*uParam0, uParam0->f_483, uParam0->f_1);
				TELEMETRY::_0x3145044F3990D321(func_11(*uParam0), uParam0->f_489, uParam0->f_483, uParam0->f_20[0 /*14*/], uParam0->f_453);
				fVar2 = func_12(*uParam0);
				if (fVar2 > 0f)
				{
					uParam0->f_496 = func_13(uParam0->f_483, fVar2, "AMB_VIG", 1, 0, 8, 0, -1082130432 /* Float: -1f */);
				}
				func_14(uParam0, uParam0->f_483, uParam0->f_486);
				if (Global_1415419.f_9758 != 0)
				{
					uParam0->f_18 = 1;
				}
				if (Global_1415419.f_19[*uParam0 /*12*/].f_6 != 4)
				{
					uParam0->f_497 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_483, 0f, 0f, 0f, func_15(uParam0));
					POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_497, 0, 0, 0, -1, -1, 0);
					uParam0->f_498 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_483, 0f, 0f, 0f, 15f, 15f, 10f);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_498, 224, 0, 0, -1, -1, 14);
					POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_498, 224, 0, 0, -1, -1, 0);
				}
				uParam0->f_464 = 1;
			}
			break;
		case 1:
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_465);
			if (StackVal)
			{
				uParam0->f_464 = 2;
			}
			break;
		case 2:
			if (func_16(uParam0))
			{
				uParam0->f_464 = 3;
			}
			break;
		case 3:
			if (func_17(uParam0) && func_18(uParam0))
			{
				uParam0->f_464 = 5;
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (func_19(uParam0))
			{
				func_20(uParam0);
				if (func_21(*uParam0))
				{
					func_22(uParam0->f_483, 6f, 1, 1, 0, 0, 0);
				}
				uParam0->f_464 = 4;
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if ((func_23(uParam0) && func_24(uParam0)) && func_25(uParam0))
			{
				func_26(uParam0);
				uParam0->f_464 = 6;
			}
			else
			{
				return false;
			}
			break;
		case 6:
			func_27(uParam0);
			if (func_28(uParam0))
			{
				func_29(uParam0);
				uParam0->f_464 = 7;
			}
			break;
		case 7:
			func_27(uParam0);
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_466);
			if (StackVal)
			{
				if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_496))
				{
					VOLUME::_0xFDFECC6EE4491E11(uParam0->f_496);
				}
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_497))
				{
					POPULATION::_0xA1CFB35069D23C23(uParam0->f_497);
					func_5(uParam0->f_497);
				}
				uParam0->f_464 = 8;
			}
			break;
		case 8:
			Stack.Push(uParam0);
			Stack.Push(0);
			Call_Loc(uParam0->f_467);
			if (StackVal)
			{
				func_2(uParam0);
				uParam0->f_464 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

void func_4(var uParam0)
{
	func_33(uParam0, 10954, 11033, 12110);
}

void func_5(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_6(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;

	if (Global_1935630.f_12)
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam0->f_18)
		{
			fVar0 = 500f;
		}
		else
		{
			fVar0 = func_34(*uParam0);
		}
		fVar0 = (fVar0 * fVar0);
		if (uParam0->f_464 != 7)
		{
			fVar1 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_483);
			if (fVar1 < fVar0)
			{
				return false;
			}
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_19)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar2 /*14*/]))
			{
				fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_20[iVar2 /*14*/], false, false));
				if (fVar3 < fVar0)
				{
					return false;
				}
			}
			iVar2++;
		}
		return true;
	}
	return false;
}

bool func_7(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_8(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4)
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
		bVar3 = func_35(bParam0);
		bVar3 = (bVar3 * bVar3);
		bVar4 = func_36(bParam0);
		bVar4 = (bVar4 * bVar4);
		iVar0 = Global_1415419.f_19[bParam0 /*12*/].f_8;
		while (iVar0 <= Global_1415419.f_19[bParam0 /*12*/].f_9)
		{
			*iParam1++;
			if (!func_37(bParam0, Global_1415419.f_2996[iVar0 /*7*/]))
			{
			}
			else
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Global_1415419.f_2996[iVar0 /*7*/]);
				if (bParam2 && bParam0 != 34)
				{
					iVar5 = func_38(Global_35, Global_1415419.f_2996[iVar0 /*7*/], 1060437492 /* Float: 0.707f */);
					if (iVar5 == 1)
					{
					}
					else if (fVar6 < fVar2)
					{
						if (func_39(Global_1415419.f_2996[iVar0 /*7*/], fVar6, (bParam0 <= 33 || bParam0 == 72), fParam4, bVar3, bVar4, bParam0))
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

void func_9(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_10(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_40() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_40();
	}
	func_41(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, 0);
	func_42(iParam0, 1, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_2++;
	Global_32074.f_2697.f_1++;
	if (iParam4 != -1 && iParam4 < 4)
	{
		Global_1415419.f_9721[iParam4 /*8*/].f_4 = { vParam1 };
	}
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1385367302;
		case 0:
			return GET_HASH_KEY("HASH_AMB_VIG_BARBER_SHAVING");
		case 1:
			return GET_HASH_KEY("HASH_AMB_VIG_BODY_TOSS");
		case 2:
			return GET_HASH_KEY("HASH_AMB_VIG_BUTCHER_BLEED_DEER");
		case 3:
			return GET_HASH_KEY("HASH_AMB_VIG_BUTCHER_HANG_CARCASS");
		case 4:
			return GET_HASH_KEY("HASH_AMB_VIG_CHAMBERPOT_TOSS");
		case 5:
			return GET_HASH_KEY("HASH_AMB_VIG_COW_GRAZING");
		case 6:
			return GET_HASH_KEY("HASH_AMB_VIG_DROP_RABBIT_TABLE");
		case 7:
			return GET_HASH_KEY("HASH_AMB_VIG_GET_DIRECTIONS");
		case 8:
			return GET_HASH_KEY("HASH_AMB_VIG_GOAT_GRAZING");
		case 9:
			return GET_HASH_KEY("HASH_AMB_VIG_LIGHT_SMOKE");
		case 10:
			return GET_HASH_KEY("HASH_AMB_VIG_LUMBER_PASS_DOWN_BALCONY");
		case 11:
			return GET_HASH_KEY("HASH_AMB_VIG_LUMBER_PASS_UP_BALCONY");
		case 12:
			return GET_HASH_KEY("HASH_AMB_VIG_MAN_JUMP_FENCE");
		case 13:
			return GET_HASH_KEY("HASH_AMB_VIG_MAN_STAND_AT_WAGON");
		case 14:
			return GET_HASH_KEY("HASH_AMB_VIG_PUMP_CART");
		case 16:
			return GET_HASH_KEY("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_HIGH");
		case 17:
			return GET_HASH_KEY("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_MED");
		case 18:
			return GET_HASH_KEY("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_HIGH");
		case 19:
			return GET_HASH_KEY("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_MED");
		case 20:
			return GET_HASH_KEY("HASH_AMB_VIG_STAGE_COACH");
		case 21:
			return GET_HASH_KEY("HASH_AMB_VIG_STARTING_TO_RAIN_FEMALE");
		case 22:
			return GET_HASH_KEY("HASH_AMB_VIG_STARTING_TO_RAIN_MALE");
		case 23:
			return GET_HASH_KEY("HASH_AMB_VIG_VOMIT_SIT_FEMALE");
		case 24:
			return GET_HASH_KEY("HASH_AMB_VIG_VOMIT_SIT_MALE");
		case 25:
			return GET_HASH_KEY("HASH_AMB_VIG_VOMIT_WALL_FEMALE");
		case 26:
			return GET_HASH_KEY("HASH_AMB_VIG_VOMIT_WALL_MALE");
		case 27:
			return GET_HASH_KEY("HASH_AMB_VIG_WAGON_LOAD_BARREL");
		case 28:
			return GET_HASH_KEY("HASH_AMB_VIG_WAGON_SWEEPER");
		case 29:
			return GET_HASH_KEY("HASH_AMB_VIG_WAGON_UNLOAD_BARREL");
		case 30:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_WITH_HORSE_A");
		case 31:
			return GET_HASH_KEY("HASH_AMB_VIG_WHISPER_SIT");
		case 32:
			return GET_HASH_KEY("HASH_AMB_VIG_WHISPER_STAND");
		case 33:
			return GET_HASH_KEY("HASH_AMB_VIG_WHORE_GIVE_MONEY_MADAM");
		case 34:
			return GET_HASH_KEY("HASH_AMB_VIG_AMB_CAMP_ROBBERY");
		case 35:
			return GET_HASH_KEY("HASH_AMB_VIG_BOAT_PLACEMENT");
		case 36:
			return GET_HASH_KEY("HASH_AMB_VIG_COUGAR_GRAPPLE_PED");
		case 37:
			return GET_HASH_KEY("HASH_AMB_VIG_CROSS_TERRAIN_WALKER");
		case 38:
			return GET_HASH_KEY("HASH_AMB_VIG_DEER_CARRY_DROPOFF");
		case 39:
			return GET_HASH_KEY("HASH_AMB_VIG_DEER_CARRY_RIDE");
		case 40:
			return GET_HASH_KEY("HASH_AMB_VIG_DOG_IN_WAGON");
		case 41:
			return GET_HASH_KEY("HASH_AMB_VIG_DUCK_CARRY");
		case 42:
			return GET_HASH_KEY("HASH_AMB_VIG_FEMALE_RIDER_MALE_WALKER");
		case 43:
			return GET_HASH_KEY("HASH_AMB_VIG_FISHING_RIVER");
		case 44:
			return GET_HASH_KEY("HASH_AMB_VIG_FISHING_RIVER_DOG");
		case 45:
			return GET_HASH_KEY("HASH_AMB_VIG_GATOR_GRAPPLE_PED");
		case 46:
			return GET_HASH_KEY("HASH_AMB_VIG_GOAT_CARRY_RIDE");
		case 47:
			return GET_HASH_KEY("HASH_AMB_VIG_HOBO_TRAIN_HOP_NO_SACK");
		case 48:
			return GET_HASH_KEY("HASH_AMB_VIG_MACFARLANE_FARMER");
		case 49:
			return GET_HASH_KEY("HASH_AMB_VIG_MAN_RIDING_DONKEY");
		case 50:
			return GET_HASH_KEY("HASH_AMB_VIG_MAN_SIT_READ");
		case 51:
			return GET_HASH_KEY("HASH_AMB_VIG_MAN_RIDE_WITH_LANTERN");
		case 52:
			return GET_HASH_KEY("HASH_AMB_VIG_OUTDOORSMAN");
		case 61:
			return GET_HASH_KEY("HASH_AMB_VIG_TRAFFIC_CART");
		case 62:
			return GET_HASH_KEY("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_RIDERS");
		case 63:
			return GET_HASH_KEY("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_WALKERS");
		case 64:
			return GET_HASH_KEY("HASH_AMB_VIG_TRAVELLER_GALLOP_PAST");
		case 53:
			return GET_HASH_KEY("HASH_AMB_VIG_RAM_CARRY_RIDE");
		case 54:
			return GET_HASH_KEY("HASH_AMB_VIG_RESTING_HAT");
		case 55:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDER_GALLOP");
		case 56:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDER_WITH_DOG");
		case 57:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_NATIVE");
		case 58:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_RIDER");
		case 60:
			return GET_HASH_KEY("HASH_AMB_VIG_SLOW_RIDER");
		case 66:
			return GET_HASH_KEY("HASH_AMB_VIG_WAGON_BACK_PASSENGER");
		case 65:
			return GET_HASH_KEY("HASH_AMB_VIG_WAGON_HARMONICA");
		case 72:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_WITH_DOG");
		case 67:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_HORSE_CARRY_DEER");
		case 68:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_HORSE_CARRY_GOAT");
		case 69:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_HORSE_CARRY_PRONGHORN");
		case 70:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_HORSE_CARRY_RAM");
		case 71:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_PACK_HORSE");
		case 73:
			return GET_HASH_KEY("HASH_AMB_VIG_WALK_WITH_OX");
		case 74:
			return GET_HASH_KEY("HASH_AMB_VIG_WATER_HORSE");
		case 75:
			return GET_HASH_KEY("HASH_AMB_VIG_ALLIGATOR_BOAR_LEG");
		case 76:
			return GET_HASH_KEY("HASH_AMB_VIG_ALLIGATOR_BOAR_NECK");
		case 77:
			return GET_HASH_KEY("HASH_AMB_VIG_ALLIGATOR_EAT_DEAD_BIRD");
		case 78:
			return GET_HASH_KEY("HASH_AMB_VIG_ARMADILLO_RUN");
		case 79:
			return GET_HASH_KEY("HASH_AMB_VIG_BAT_FLEE_SWARM_LRG");
		case 80:
			return GET_HASH_KEY("HASH_AMB_VIG_BAT_HANG_SWARM");
		case 81:
			return GET_HASH_KEY("HASH_AMB_VIG_BEARBLACK_BACKDOWN");
		case 82:
			return GET_HASH_KEY("HASH_AMB_VIG_BEAR_INTIMIDATE_WOLF");
		case 83:
			return GET_HASH_KEY("HASH_AMB_VIG_BEAR_RUN_CATCH_FISH");
		case 84:
			return GET_HASH_KEY("HASH_AMB_VIG_BEAR_SCRATCH_BACK");
		case 85:
			return GET_HASH_KEY("HASH_AMB_VIG_BEAR_VS_WOLVES");
		case 86:
			return GET_HASH_KEY("HASH_AMB_VIG_BEAVER_SWIM_WITH_BRANCH");
		case 87:
			return GET_HASH_KEY("HASH_AMB_VIG_BIG_CAT_AMBUSH_DEER");
		case 88:
			return GET_HASH_KEY("HASH_AMB_VIG_BIG_CAT_KILL_RACCOON");
		case 89:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FENCE_SWARM_CROW");
		case 90:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_CROW");
		case 91:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK");
		case 92:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG");
		case 93:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG_W");
		case 94:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_GOOSE");
		case 95:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_PIGEON");
		case 96:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN");
		case 97:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_DARK");
		case 98:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_LRG");
		case 99:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_SEAGULL");
		case 100:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_SONGBIRD");
		case 101:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_FLEE_SWARM_SPARROW");
		case 102:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRDS_IN_TREE");
		case 103:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_BLUEJAY");
		case 104:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_CARDINAL");
		case 105:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_DUCK");
		case 106:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_EAGLE");
		case 107:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_HAWK");
		case 108:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_HERON");
		case 109:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_LOON");
		case 110:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_OWL");
		case 111:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_SEAGULL");
		case 112:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_SONGBIRD");
		case 113:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_SPARROW");
		case 114:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_SWARM_CROW");
		case 115:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_LAND_SWARM_PIGEON");
		case 116:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_ON_ALLIGATOR");
		case 117:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_ON_BUCK");
		case 118:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_ON_BUFFALO");
		case 119:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_ON_COW");
		case 120:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_ON_ELK");
		case 121:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_ON_MOOSE");
		case 122:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_SWARM");
		case 123:
			return GET_HASH_KEY("HASH_AMB_VIG_BIRD_WIRE_SWARM_SPARROW");
		case 124:
			return GET_HASH_KEY("HASH_AMB_VIG_BLUEJAY_ON_PERCH");
		case 125:
			return GET_HASH_KEY("HASH_AMB_VIG_BOAR_RUN");
		case 126:
			return GET_HASH_KEY("HASH_AMB_VIG_BUCK_AND_DOE");
		case 127:
			return GET_HASH_KEY("HASH_AMB_VIG_BUCKS_FIGHTING");
		case 128:
			return GET_HASH_KEY("HASH_AMB_VIG_BUFFALO_VS_BUFFALO");
		case 129:
			return GET_HASH_KEY("HASH_AMB_VIG_BUFFALO_WALLOW_SHAKE");
		case 130:
			return GET_HASH_KEY("HASH_AMB_VIG_CALIFORNIACONDOR_ON_PERCH");
		case 131:
			return GET_HASH_KEY("HASH_AMB_VIG_CAMP_BIRD_ON_PERCH");
		case 132:
			return GET_HASH_KEY("HASH_AMB_VIG_CARDINAL_ON_PERCH");
		case 133:
			return GET_HASH_KEY("HASH_AMB_VIG_CAT_CARRY_RAT");
		case 134:
			return GET_HASH_KEY("HASH_AMB_VIG_CAT_CATCH_BIRD");
		case 135:
			return GET_HASH_KEY("HASH_AMB_VIG_CAT_RUN");
		case 136:
			return GET_HASH_KEY("HASH_AMB_VIG_COYOTE_CATCH_SQUIRREL");
		case 137:
			return GET_HASH_KEY("HASH_AMB_VIG_COYOTE_EAT_SHEEP");
		case 138:
			return GET_HASH_KEY("HASH_AMB_VIG_COYOTE_TAKEDOWN_MISS_DEER");
		case 139:
			return GET_HASH_KEY("HASH_AMB_VIG_CROWS_AND_EAGLES_EAT_DEER");
		case 140:
			return GET_HASH_KEY("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_DEER");
		case 141:
			return GET_HASH_KEY("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_HUMAN");
		case 142:
			return GET_HASH_KEY("HASH_AMB_VIG_CROWS_EATING_DEER");
		case 143:
			return GET_HASH_KEY("HASH_AMB_VIG_CROWS_EATING_HUMAN");
		case 144:
			return GET_HASH_KEY("HASH_AMB_VIG_CROW_ON_PERCH");
		case 145:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_BOAR");
		case 146:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_BUCK");
		case 147:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_BUFFALO");
		case 148:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_COYOTE");
		case 149:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_HORSE_A");
		case 150:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_HORSE_B");
		case 151:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_PIG");
		case 152:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_POSSUM");
		case 153:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_PRONGHORN");
		case 154:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_RACCOON");
		case 155:
			return GET_HASH_KEY("HASH_AMB_VIG_DEAD_SHEEP");
		case 156:
			return GET_HASH_KEY("HASH_AMB_VIG_DEER_ANTLERS_STUCK");
		case 157:
			return GET_HASH_KEY("HASH_AMB_VIG_DEER_RUN");
		case 158:
			return GET_HASH_KEY("HASH_AMB_VIG_DEER_TREE_RUB");
		case 159:
			return GET_HASH_KEY("HASH_AMB_VIG_DISCOVERABLE_PARAKEET");
		case 160:
			return GET_HASH_KEY("HASH_AMB_VIG_DOG_CHASE_CAT");
		case 161:
			return GET_HASH_KEY("HASH_AMB_VIG_DOG_CHASE_TAIL");
		case 162:
			return GET_HASH_KEY("HASH_AMB_VIG_DOGS_PLAYING");
		case 163:
			return GET_HASH_KEY("HASH_AMB_VIG_DUCK_WATER_SWARM");
		case 164:
			return GET_HASH_KEY("HASH_AMB_VIG_EAGLE_CATCH_FISH");
		case 165:
			return GET_HASH_KEY("HASH_AMB_VIG_EAGLE_CATCH_RABBIT");
		case 166:
			return GET_HASH_KEY("HASH_AMB_VIG_EAGLE_CATCH_SEASNAKE");
		case 167:
			return GET_HASH_KEY("HASH_AMB_VIG_EAGLE_DIVE_CATCH_FISH");
		case 168:
			return GET_HASH_KEY("HASH_AMB_VIG_EAGLE_ON_PERCH");
		case 169:
			return GET_HASH_KEY("HASH_AMB_VIG_FOX_CATCH_RODENT");
		case 170:
			return GET_HASH_KEY("HASH_AMB_VIG_FOX_HUNT_IN_SNOW");
		case 171:
			return GET_HASH_KEY("HASH_AMB_VIG_FOX_RUN");
		case 172:
			return GET_HASH_KEY("HASH_AMB_VIG_FOX_SIT");
		case 173:
			return GET_HASH_KEY("HASH_AMB_VIG_GOAT_RUN");
		case 174:
			return GET_HASH_KEY("HASH_AMB_VIG_HAWK_CATCH_SNAKE");
		case 175:
			return GET_HASH_KEY("HASH_AMB_VIG_HAWK_CATCH_SQUIRREL");
		case 176:
			return GET_HASH_KEY("HASH_AMB_VIG_HAWK_ON_PERCH");
		case 177:
			return GET_HASH_KEY("HASH_AMB_VIG_HAWK_VS_SNAKE");
		case 178:
			return GET_HASH_KEY("HASH_AMB_VIG_HORSE_WALLOW");
		case 179:
			return GET_HASH_KEY("HASH_AMB_VIG_IGUANA_RUN");
		case 180:
			return GET_HASH_KEY("HASH_AMB_VIG_IGUANA_DESERT_RUN");
		case 181:
			return GET_HASH_KEY("HASH_AMB_VIG_JAVELINA_RUN");
		case 186:
			return GET_HASH_KEY("HASH_AMB_VIG_OWL_CATCH_RAT");
		case 187:
			return GET_HASH_KEY("HASH_AMB_VIG_OWL_ON_PERCH");
		case 188:
			return GET_HASH_KEY("HASH_AMB_VIG_PELICAN_DIVE");
		case 189:
			return GET_HASH_KEY("HASH_AMB_VIG_PELICAN_ON_PERCH");
		case 190:
			return GET_HASH_KEY("HASH_AMB_VIG_PIG_ROLL_MUD");
		case 191:
			return GET_HASH_KEY("HASH_AMB_VIG_PIG_RUN");
		case 192:
			return GET_HASH_KEY("HASH_AMB_VIG_RABBIT_CHASE_RABBIT");
		case 193:
			return GET_HASH_KEY("HASH_AMB_VIG_RABBIT_RUN");
		case 182:
			return GET_HASH_KEY("HASH_AMB_VIG_MANGY_DOG_AND_VULTURES");
		case 183:
			return GET_HASH_KEY("HASH_AMB_VIG_MOOSE_GRAZING");
		case 184:
			return GET_HASH_KEY("HASH_AMB_VIG_MOOSE_SLIPPING");
		case 185:
			return GET_HASH_KEY("HASH_AMB_VIG_MUSKRAT_RUN");
		case 194:
			return GET_HASH_KEY("HASH_AMB_VIG_RACCOON_EATING");
		case 195:
			return GET_HASH_KEY("HASH_AMB_VIG_RACCOON_RUN");
		case 196:
			return GET_HASH_KEY("HASH_AMB_VIG_RAMS_HEADBUTT");
		case 197:
			return GET_HASH_KEY("HASH_AMB_VIG_RAM_RUN");
		case 198:
			return GET_HASH_KEY("HASH_AMB_VIG_RATS_EAT_HUMAN");
		case 199:
			return GET_HASH_KEY("HASH_AMB_VIG_RATS_EATING_GROUP");
		case 200:
			return GET_HASH_KEY("HASH_AMB_VIG_RAVEN_ON_PERCH");
		case 201:
			return GET_HASH_KEY("HASH_AMB_VIG_REDFOOTED_BOOBY_ON_PERCH");
		case 202:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_BUCK");
		case 203:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_ELK");
		case 204:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_MOOSE");
		case 205:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_PRONGHORN");
		case 206:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_RAM");
		case 207:
			return GET_HASH_KEY("HASH_AMB_VIG_RIDGELINE_WOLF");
		case 59:
			return GET_HASH_KEY("HASH_AMB_VIG_ROVING_SHEEP_P1");
		case 15:
			return GET_HASH_KEY("HASH_AMB_VIG_SHEEP_GRAZING");
		case 210:
			return GET_HASH_KEY("HASH_AMB_VIG_SHEEP_RUN");
		case 211:
			return GET_HASH_KEY("HASH_AMB_VIG_SKUNK_RUN");
		case 208:
			return GET_HASH_KEY("HASH_AMB_VIG_SCAVENGER_ON_DEER");
		case 209:
			return GET_HASH_KEY("HASH_AMB_VIG_SEAGULL_CATCH_FISH");
		case 212:
			return GET_HASH_KEY("HASH_AMB_VIG_SNAKE_RUN");
		case 213:
			return GET_HASH_KEY("HASH_AMB_VIG_SQUIRREL_CHASE_SQUIRREL");
		case 214:
			return GET_HASH_KEY("HASH_AMB_VIG_SQUIRREL_RUN");
		case 215:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_BEARBLACK");
		case 216:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_BEAVER");
		case 217:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_BOAR");
		case 218:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_DEER");
		case 219:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_DOG");
		case 220:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_ELK");
		case 221:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_FOX");
		case 222:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_MOOSE");
		case 223:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_MUSKRAT");
		case 224:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_POSSUM");
		case 225:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_RACCOON");
		case 226:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_RAT");
		case 227:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIMMING_WOLF");
		case 228:
			return GET_HASH_KEY("HASH_AMB_VIG_SWIM_WOLF_CHASE_MOOSE");
		case 229:
			return GET_HASH_KEY("HASH_AMB_VIG_TURKEY_RUN");
		case 230:
			return GET_HASH_KEY("HASH_AMB_VIG_VULTURES_EATING_CARCASS_A");
		case 231:
			return GET_HASH_KEY("HASH_AMB_VIG_VULTURES_EATING_HUMAN");
		case 232:
			return GET_HASH_KEY("HASH_AMB_VIG_VULTURE_ON_PERCH");
		case 233:
			return GET_HASH_KEY("HASH_AMB_VIG_WILD_BULL");
		case 234:
			return GET_HASH_KEY("HASH_AMB_VIG_WILD_GOAT");
		case 235:
			return GET_HASH_KEY("HASH_AMB_VIG_WILD_OX");
		case 236:
			return GET_HASH_KEY("HASH_AMB_VIG_WILD_SHARK");
		case 237:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLF_AMBUSH_DEER");
		case 238:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLF_FLEE_WOLVES");
		case 239:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLF_HOWL_CORPSE");
		case 240:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLF_HOWLING");
		case 241:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLVES_HOWLING");
		case 242:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLVES_EAT_DEER");
		case 243:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLVES_PLAYING");
		case 244:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLVES_PLAYING_B");
		case 245:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLVES_PLAYING_C");
		case 246:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLVES_RESTING");
		case 247:
			return GET_HASH_KEY("HASH_AMB_VIG_WOLF_TAKEDOWN_MISS_DEER");
		default:
			break;
	}
	return -1385367302;
}

float func_12(int iParam0)
{
	if (func_43(iParam0))
	{
		switch (Global_1415419.f_19[iParam0 /*12*/].f_6)
		{
			case 0:
				return 12f;
			case 1:
				return 1f;
			case 2:
				return 50f;
			case 3:
				return 100f;
			case 4:
				return 0f;
			default:
				break;
		}
	}
	return 12f;
}

int func_13(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_7(vParam0))
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
		if (func_44(vParam0))
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
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_45(iVar0, bParam8);
	return iVar0;
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam4)
{
	func_46(uParam0, "WATER_HORSE", "", vParam1, vParam4);
	iLocal_38 = GET_HASH_KEY("A_M_M_HTLROUGHTRAVELLERS_01");
	switch (*uParam0)
	{
		case 54:
			sLocal_43 = "script_respawn@looping@hybrid@generic@unarmed_hat@sit_wake_up@a";
			iLocal_44 = GET_HASH_KEY("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC");
			iLocal_38 = func_48(func_47(), 0, 0, 0, 0, 0, 1);
			iLocal_39 = func_49(GET_HASH_KEY("HORSE_CLASS_RIDING"), 1);
			func_50(uParam0, 0, "MPDHP_MAN", iLocal_38, vParam1, vParam4.z, 1, 1, 1, 1, GET_HASH_KEY("META_OUTFIT_DEFAULT"), 1);
			func_50(uParam0, 1, "MPDHP_HORSE", iLocal_39, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -4f, 0f, 0f), (10f + vParam4.z), 1, 1, 1, 1, GET_HASH_KEY("META_OUTFIT_DEFAULT"), 1);
			break;
		case 74:
			iLocal_38 = func_48(func_47(), 1, 1, 1, 1, 1, 1);
			sLocal_43 = "script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@b";
			iLocal_39 = func_49(GET_HASH_KEY("HORSE_CLASS_RIDING"), 1);
			func_50(uParam0, 1, "MPDHP_HORSE", iLocal_39, vParam1, vParam4.z, 1, 1, 1, 1, GET_HASH_KEY("META_OUTFIT_DEFAULT"), 1);
			func_50(uParam0, 0, "MPDHP_MAN", iLocal_38, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, vParam4.z, -2f, 0f, 0f), (10f + vParam4.z), 1, 1, 1, 1, GET_HASH_KEY("META_OUTFIT_DEFAULT"), 1);
			fLocal_46 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 4f);
			break;
	}
}

Vector3 func_15(var uParam0)
{
	switch (*uParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 23:
		case 24:
		case 25:
		case 26:
			return 0.5f, 0.5f, 2f;
		case 7:
		case 9:
			return 1f, 0.6f, 1.9f;
		case 11:
			return 1.2f, 3f, 4.5f;
		case 30:
			return 2f, 1.5f, 3f;
		case 33:
			return 3f, 3f, 1.5f;
		default:
			break;
	}
	return 3f, 3f, 3f;
}

bool func_16(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			iVar0 = 0;
			if (uParam0->f_16)
			{
				iVar0 |= 64;
			}
			if (uParam0->f_17)
			{
				iVar0 |= 48;
			}
			uParam0->f_3.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, iVar0, uParam0->f_3.f_9[0], false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_3.f_1, uParam0->f_3.f_2, uParam0->f_3.f_5, 2);
		}
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return false;
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_3.f_1);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar1 /*14*/].f_2 != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_20[iVar1 /*14*/].f_2, false);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_371)
	{
		if (uParam0->f_372[iVar1 /*8*/].f_2 != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_372[iVar1 /*8*/].f_2, false);
		}
		iVar1++;
	}
	if (uParam0->f_453.f_1 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_453.f_1, false);
	}
	PED::_0xED9582B3DA8F02B4(uParam0->f_19);
	return true;
}

int func_17(var uParam0)
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return 0;
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_3.f_1, true, false))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_3.f_8)
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_3.f_1, uParam0->f_3.f_9[iVar0]);
				}
				return 0;
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar0 /*14*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20[iVar0 /*14*/].f_2))
			{
				return 0;
			}
			if (uParam0->f_20[iVar0 /*14*/].f_3 != GET_HASH_KEY("META_OUTFIT_DEFAULT"))
			{
				if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
				{
					uParam0->f_20[iVar0 /*14*/].f_4 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_20[iVar0 /*14*/].f_2, uParam0->f_20[iVar0 /*14*/].f_3);
					if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar0 /*14*/].f_4))
					{
						uParam0->f_20[iVar0 /*14*/].f_3 = GET_HASH_KEY("META_OUTFIT_DEFAULT");
						uParam0->f_20[iVar0 /*14*/].f_9 = 1;
					}
					return 0;
				}
				else if (!PED::_0x610438375E5D1801(uParam0->f_20[iVar0 /*14*/].f_4))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		if (uParam0->f_372[iVar0 /*8*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_372[iVar0 /*8*/].f_2))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_453.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_453.f_1))
		{
			return 0;
		}
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0)
{
	return 1;
}

bool func_19(var uParam0)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<4> Var4;

	if (Global_1935630.f_12)
	{
		return false;
	}
	if (func_51(0, 0, 1))
	{
		if (func_52(0) == 4)
		{
			return true;
		}
	}
	if (uParam0->f_500)
	{
		return true;
	}
	if (Global_1415419.f_9757 == -310375866)
	{
		return true;
	}
	if (func_53(uParam0->f_503, 2))
	{
		return true;
	}
	if (func_54())
	{
		fVar2 = (150f * 150f);
		fVar3 = (40f * 40f);
	}
	else
	{
		fVar2 = (150f * 150f);
		if (*uParam0 == 34)
		{
			fVar3 = 900f;
		}
		else
		{
			fVar3 = (75f * 75f);
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar1 /*14*/].f_2 != 0)
		{
			if (func_7(uParam0->f_20[iVar1 /*14*/].f_5))
			{
				if (uParam0->f_20[iVar1 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					Var4 = { 0f, 0f, 0f };
					Var4.f_3 = { 0f, 0f, 0f };
					Var4.f_6 = { 0f, 0f, 0f };
					Var4.f_9 = { 0f, 0f, 0f };
					ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_20[iVar1 /*14*/].f_1, &Var4, true, uParam0->f_3.f_9[0], 2);
					uParam0->f_20[iVar1 /*14*/].f_5 = { Var4 };
					uParam0->f_20[iVar1 /*14*/].f_8 = Var4.f_3.f_2;
				}
			}
			fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_20[iVar1 /*14*/].f_5);
			if (fVar0 < fVar2)
			{
				if (fVar0 < fVar3)
				{
					return false;
				}
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_20[iVar1 /*14*/].f_2, uParam0->f_20[iVar1 /*14*/].f_5, true))
				{
					return false;
				}
			}
		}
		iVar1++;
	}
	return true;
}

int func_20(var uParam0)
{
	struct<5> Var0;

	Var0 = Global_1415419.f_1;
	Var0.f_2 = 0;
	Var0.f_3 = func_11(*uParam0);
	if (Global_1415419.f_9757 != -1)
	{
		Var0.f_4 = Global_1415419.f_9757;
		if (func_55(uParam0, &Var0))
		{
			return 1;
		}
		else
		{
			Var0.f_4 = GET_HASH_KEY("DEFAULT");
			func_55(uParam0, &Var0);
			return 1;
		}
	}
	else
	{
		Var0.f_4 = GET_HASH_KEY("DEFAULT");
	}
	func_55(uParam0, &Var0);
	return 1;
}

bool func_21(int iParam0)
{
	int iVar0;

	iVar0 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	if ((((iVar0 == 66 || iVar0 == 64) || iVar0 == 68) || iVar0 == 67) || iVar0 == 74)
	{
		return true;
	}
	return false;
}

void func_22(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_23(var uParam0)
{
	struct<4> Var0;

	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = { 0f, 0f, 0f };
	Var0.f_6 = { 0f, 0f, 0f };
	Var0.f_9 = { 0f, 0f, 0f };
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_453) && uParam0->f_453.f_1 != 0)
	{
		if (uParam0->f_453.f_7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_453.f_2, &Var0, false, 0, 2);
				uParam0->f_453.f_3 = { Var0 };
				uParam0->f_453.f_6 = Var0.f_3.f_2;
			}
		}
		if (uParam0->f_453.f_10 != 0)
		{
			uParam0->f_453 = VEHICLE::_CREATE_DRAFT_VEHICLE(uParam0->f_453.f_1, uParam0->f_453.f_3, uParam0->f_453.f_6, true, true, uParam0->f_453.f_9, uParam0->f_453.f_10, false);
		}
		else
		{
			uParam0->f_453 = VEHICLE::CREATE_VEHICLE(uParam0->f_453.f_1, uParam0->f_453.f_3, uParam0->f_453.f_6, true, true, uParam0->f_453.f_9, false);
		}
		if (uParam0->f_453.f_9)
		{
			VEHICLE::_0x3053064F909B5F42(uParam0->f_453, 1);
		}
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_453))
	{
		if (uParam0->f_453.f_8)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_3.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_453, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_453, 2), 2);
			}
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_453, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_453, true, true);
		}
	}
	return 1;
}

int func_24(var uParam0)
{
	struct<4> Var0;
	int iVar12;
	int iVar13;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			return 0;
		}
	}
	iVar12 = 0;
	while (iVar12 < uParam0->f_19)
	{
		if (uParam0->f_20[iVar12 /*14*/].f_2 != 0)
		{
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 0f, 0f, 0f };
			Var0.f_9 = { 0f, 0f, 0f };
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar12 /*14*/]))
			{
				if (uParam0->f_20[iVar12 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_20[iVar12 /*14*/].f_1, &Var0, false, 0, 2);
					uParam0->f_20[iVar12 /*14*/].f_5 = { Var0 };
					uParam0->f_20[iVar12 /*14*/].f_8 = Var0.f_3.f_2;
				}
				if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_20[iVar12 /*14*/].f_4))
				{
					uParam0->f_20[iVar12 /*14*/] = PED::_0xEAF682A14F8E5F53(uParam0->f_20[iVar12 /*14*/].f_4, uParam0->f_20[iVar12 /*14*/].f_5, uParam0->f_20[iVar12 /*14*/].f_8, true, true, 0, 0);
				}
				else
				{
					uParam0->f_20[iVar12 /*14*/] = func_56(uParam0->f_20[iVar12 /*14*/].f_2, uParam0->f_20[iVar12 /*14*/].f_5, uParam0->f_20[iVar12 /*14*/].f_8, 1, 1, 0, 1, uParam0->f_20[iVar12 /*14*/].f_11, uParam0->f_20[iVar12 /*14*/].f_9, 0, 0, 0, 0);
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 259, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 458, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 453, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 230, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 186, true);
				if (PED::IS_PED_HUMAN(uParam0->f_20[iVar12 /*14*/]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 146, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 307, true);
				}
				if (!PED::IS_PED_HUMAN(uParam0->f_20[iVar12 /*14*/]))
				{
					if (!func_57(uParam0->f_20[iVar12 /*14*/]))
					{
						iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
						if (iVar12 < 3)
						{
							if (iVar13 <= 6)
							{
								PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 1);
							}
							else
							{
								PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 2);
							}
						}
						else if (iVar13 <= 8)
						{
							PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 1);
						}
						else
						{
							PED::_SET_PED_QUALITY(uParam0->f_20[iVar12 /*14*/], 2);
						}
					}
				}
				if (uParam0->f_20[iVar12 /*14*/].f_12)
				{
					PED::_SET_PED_SCALE(uParam0->f_20[iVar12 /*14*/], 1f);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[iVar12 /*14*/], true);
				return 0;
			}
		}
		iVar12++;
	}
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < uParam0->f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar12 /*14*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20[iVar12 /*14*/], true);
			if (uParam0->f_500)
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar12 /*14*/], 171, true);
			}
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_20[iVar12 /*14*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_20[iVar12 /*14*/], true, false);
			}
			else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[iVar12 /*14*/], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_20[iVar12 /*14*/], true, true);
			}
		}
		iVar12++;
	}
	return 1;
}

int func_25(var uParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		Var1 = { 0f, 0f, 0f };
		Var1.f_3 = { 0f, 0f, 0f };
		Var1.f_6 = { 0f, 0f, 0f };
		Var1.f_9 = { 0f, 0f, 0f };
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_372[iVar0 /*8*/]))
		{
			if ((uParam0->f_372[iVar0 /*8*/].f_7 && func_7(uParam0->f_372[iVar0 /*8*/].f_3)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_372[iVar0 /*8*/].f_1, &Var1, false, 0, 2);
				uParam0->f_372[iVar0 /*8*/].f_3 = { Var1 };
				uParam0->f_372[iVar0 /*8*/].f_6 = Var1.f_3.f_2;
			}
			uParam0->f_372[iVar0 /*8*/] = OBJECT::CREATE_OBJECT(uParam0->f_372[iVar0 /*8*/].f_2, uParam0->f_372[iVar0 /*8*/].f_3, true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_372[iVar0 /*8*/], uParam0->f_372[iVar0 /*8*/].f_6);
			if (uParam0->f_372[iVar0 /*8*/].f_7 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_372[iVar0 /*8*/], Var1.f_3, 2, true);
			}
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			if (uParam0->f_20[iVar0 /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				if (uParam0->f_20[iVar0 /*14*/].f_13)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20[iVar0 /*14*/], false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[iVar0 /*14*/], 168, true);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_20[iVar0 /*14*/].f_1, uParam0->f_20[iVar0 /*14*/], 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[iVar0 /*14*/], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_371)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_372[iVar0 /*8*/]) && uParam0->f_372[iVar0 /*8*/].f_7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_372[iVar0 /*8*/].f_1, uParam0->f_372[iVar0 /*8*/], 0);
			}
		}
		iVar0++;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (uParam0->f_453.f_7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_453.f_2, uParam0->f_453, 0);
		}
	}
}

void func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_20[iVar0 /*14*/], 29, true);
		}
		iVar0++;
	}
}

bool func_28(var uParam0)
{
	return true;
}

void func_29(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_3.f_1, uParam0->f_3.f_9[0], true);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_3.f_1);
	}
}

int func_30(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_43);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_43))
	{
		return 0;
	}
	func_58(&uLocal_10, 0);
	func_59(&uLocal_10, 1);
	func_60(&uLocal_10, 1);
	func_61(&uLocal_10, 1);
	func_62(&uLocal_10, 1);
	func_63(&uLocal_10, 1);
	func_64(&uLocal_10, 100);
	return 1;
}

int func_31(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!uParam0->f_469[0])
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar1 /*14*/]))
			{
				if (func_65(uParam0->f_20[iVar1 /*14*/], 0, &uLocal_10, &uVar0, 0, 0))
				{
					func_66(uParam0);
					uParam0->f_469[0] = 1;
				}
				else
				{
					iVar1++;
				}
				if (uParam0->f_469[0])
				{
					return 1;
				}
				switch (iLocal_9)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
						{
							func_67(&(uParam0->f_20[1 /*14*/].f_5), 1, 10, 0);
							TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_20[1 /*14*/], iLocal_44, uParam0->f_20[1 /*14*/].f_5, uParam0->f_20[1 /*14*/].f_8, 0, false, true, 0, -1f, false);
							func_68(&(uParam0->f_20[1 /*14*/]), 0, 1);
							PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
						{
							PED::SET_PED_CONFIG_FLAG(uParam0->f_20[0 /*14*/], 297, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_20[0 /*14*/], 130, false);
							PED::SET_PED_OWNS_ANIMAL(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/], false);
							PED::_0xED1C764997A86D5A(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/]);
							WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_20[0 /*14*/], true, true);
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_20[0 /*14*/], GET_HASH_KEY("WEAPON_REVOLVER_CATTLEMAN"), 999, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							func_67(&(uParam0->f_20[0 /*14*/].f_5), 1, 10, 0);
							func_69(uParam0->f_20[0 /*14*/], uParam0->f_20[0 /*14*/].f_5, uParam0->f_20[0 /*14*/].f_8, 2, 1073741824 /* Float: 2f */);
							if (*uParam0 == 54)
							{
								func_70(uParam0->f_20[0 /*14*/], GET_HASH_KEY("WORLD_HUMAN_SIT_FALL_ASLEEP"), 0, 0, 0, -1082130432 /* Float: -1f */);
								PED::_0xF9CBD46433E36713(Global_35, uParam0->f_20[0 /*14*/], 0f, 0f, 0f, 4f, 20f, 200f, -1f, "MPDHP_MAN");
							}
							else
							{
								TASK::TASK_PLAY_ANIM(uParam0->f_20[0 /*14*/], sLocal_43, "respawn_loop", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
							}
							func_68(&(uParam0->f_20[0 /*14*/]), 0, 1);
							iLocal_45 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uParam0->f_20[0 /*14*/].f_5, 1.5f, 2, 27, 0);
						}
						iLocal_9 = 1;
						break;
					case 1:
						if (*uParam0 == 54)
						{
							if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar2, false, false))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar2))
								{
									if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == uParam0->f_20[0 /*14*/] && (PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS")) || PAD::IS_CONTROL_JUST_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"))))
									{
										if (PED::_0xC22AA08A8ADB87D4(uParam0->f_20[0 /*14*/]) != GET_HASH_KEY("WORLD_HUMAN_SIT_GROUND_SLEEPING_MALE_A"))
										{
											func_66(uParam0);
											iLocal_9 = 2;
										}
									}
								}
							}
						}
						else if (func_71(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848 /* Float: 50f */))
						{
							func_72(*uParam0, 0);
							func_73(*uParam0, uParam0->f_483, 0);
							iLocal_9 = 2;
						}
						break;
					case 2:
						if (!func_74(&uLocal_40))
						{
							func_75(&uLocal_40);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_35) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[0 /*14*/]))
						{
							if (func_77(&uLocal_40, func_76(*uParam0 == 54, 240f, fLocal_46)) || func_78(uParam0->f_20[0 /*14*/], Global_35, 1) < 100f)
							{
								PED::_SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(uParam0->f_20[0 /*14*/], uParam0->f_20[1 /*14*/].f_5);
								TASK::OPEN_SEQUENCE_TASK(&iVar3);
								if (*uParam0 != 54)
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_43, "respawn_action", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
								}
								TASK::TASK_MOUNT_ANIMAL(0, uParam0->f_20[1 /*14*/], -1, -1, 1f, 1, 0, 0);
								TASK::TASK_MOVE_IN_TRAFFIC(0, 1f, 128, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar3);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[0 /*14*/], iVar3);
								TASK::CLEAR_SEQUENCE_TASK(&iVar3);
								PED::SET_PED_KEEP_TASK(uParam0->f_20[0 /*14*/], true);
								if (func_79(uParam0->f_20[1 /*14*/], 0))
								{
									TASK::CLEAR_PED_TASKS(uParam0->f_20[1 /*14*/], true, false);
								}
								func_75(&uLocal_40);
								iLocal_9 = 3;
							}
						}
						break;
					case 3:
						if (!func_74(&uLocal_40))
						{
							func_75(&uLocal_40);
						}
						if (func_77(&uLocal_40, 20f) && func_78(Global_35, uParam0->f_20[0 /*14*/], 1) > 10000f)
						{
							return 1;
						}
						break;
				}
				return 0;
			}
		}
	}
}

int func_32(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar0 /*14*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[iVar0 /*14*/], true))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
				{
				}
				func_80(&(uParam0->f_20[iVar0 /*14*/]), 1, 1, 1);
				if (STREAMING::IS_MODEL_VALID(uParam0->f_20[iVar0 /*14*/].f_2))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_20[iVar0 /*14*/].f_2);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_45, 1);
	}
	return 1;
}

void func_33(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_465 = iParam1;
	uParam0->f_466 = iParam2;
	uParam0->f_467 = iParam3;
}

float func_34(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 199:
			return 75f;
		case 72:
			return 200f;
		case 52:
			return 250f;
		case 43:
		case 44:
			return 200f;
		case 47:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 700f;
			}
			else
			{
				return 200f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 650f;
			}
			else
			{
				return 175f;
			}
			break;
		default:
			if (func_54())
			{
				switch (func_81())
				{
					case 92:
						fVar0 = 200f;
						break;
					case 26:
						fVar0 = 175f;
						break;
					case 76:
						fVar0 = 175f;
						break;
					case 120:
						fVar0 = 175f;
						break;
					case 82:
						fVar0 = 175f;
						break;
					default:
						fVar0 = 105f;
						break;
				}
			}
			else
			{
				fVar0 = 200f;
			}
			break;
	}
	return fVar0;
}

float func_35(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 64:
			fVar0 = 175f;
			break;
		case 37:
			fVar0 = 175f;
			break;
		case 199:
			fVar0 = 50f;
			break;
		case 52:
			return 200f;
		case 47:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 300f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
		case 44:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600f;
			}
			else
			{
				return 150f;
			}
			break;
		default:
			if (func_54())
			{
				switch (func_81())
				{
					case 92:
						fVar0 = 175f;
						break;
					case 26:
						fVar0 = 150f;
						break;
					case 76:
						fVar0 = 150f;
						break;
					case 120:
						fVar0 = 150f;
						break;
					case 82:
						fVar0 = 150f;
						break;
					default:
						fVar0 = 80f;
						break;
				}
			}
			else
			{
				fVar0 = 175f;
			}
			break;
	}
	return fVar0;
}

float func_36(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 64:
			fVar0 = 100f;
			break;
		case 37:
			fVar0 = 100f;
			break;
		case 199:
			fVar0 = 20f;
			break;
		default:
			if (func_54())
			{
				switch (func_81())
				{
					case 92:
						fVar0 = 16f;
						break;
					case 76:
						fVar0 = 16f;
						break;
					case 26:
						fVar0 = 16f;
						break;
					case 82:
						fVar0 = 16f;
						break;
					default:
						fVar0 = 25f;
						break;
				}
			}
			else
			{
				fVar0 = 50f;
			}
			break;
	}
	return fVar0;
}

bool func_37(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 58:
		case 124:
		case 132:
		case 168:
		case 176:
		case 187:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
			return true;
		default:
			break;
	}
	if (MISC::ABSF((Global_36.f_2 - vParam1.z)) > 30f)
	{
		return false;
	}
	return true;
}

int func_38(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_82(vVar3, vVar6);
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
	if (func_83(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_39(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	bool bVar0;
	int iVar1[3];
	var uVar5;
	float fVar7;

	if (fParam3 == -1f)
	{
		bVar0 = BUILTIN::VDIST2(Global_36, vParam0);
	}
	else
	{
		bVar0 = fParam3;
	}
	if (bVar0 > bParam6)
	{
		return false;
	}
	if (bVar0 < bParam7)
	{
		return false;
	}
	if (!bParam5)
	{
		if (iParam8 != 34)
		{
			uVar5 = 1;
			if (!bParam4)
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
			}
			else
			{
				iVar1[0] = 4;
				iVar1[1] = 16384;
				iVar1[2] = 8;
			}
			if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar5, &iVar1, 0))
			{
				return false;
			}
		}
		if (func_54())
		{
			if (bParam4)
			{
				fVar7 = 3f;
			}
			else
			{
				fVar7 = 60f;
			}
		}
		else if (((iParam8 == 15 || iParam8 == 7) || iParam8 == 28) || iParam8 == 34)
		{
			fVar7 = 3f;
		}
		else
		{
			fVar7 = 100f;
		}
		if (VOLUME::_0x769BB7626B8CDB06(vParam0, fVar7, 0, 8, 0))
		{
			return false;
		}
		if (func_84(vParam0, fVar7))
		{
			return false;
		}
		if (func_85(vParam0))
		{
			return false;
		}
	}
	return true;
}

int func_40()
{
	return Global_1899515;
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_86(*uParam0);
	iVar1 = func_87(*uParam0);
	iVar2 = func_88(*uParam0);
	iVar3 = func_89(*uParam0);
	iVar4 = func_90(*uParam0);
	iVar5 = func_91(*uParam0);
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
	iVar6 = func_92(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_92(iVar1, iVar0);
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
	func_93(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_40() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_40();
					}
					func_41(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_9(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

bool func_43(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_44(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_45(int iParam0, bool bParam1)
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

void func_46(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam6)
{
	uParam0->f_2 = sParam1;
	uParam0->f_3 = sParam2;
	uParam0->f_3.f_2 = { vParam3 };
	uParam0->f_3.f_5 = { vParam6 };
}

int func_47()
{
	return Global_1897952.f_41;
}

int func_48(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1[6];
	int iVar8;

	iVar0 = GET_HASH_KEY("A_M_M_HTLROUGHTRAVELLERS_01");
	if (bParam6)
	{
		switch (iParam0)
		{
			case 0:
			case 2:
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_BYNROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 1:
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_BIVROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 3:
			case 4:
			case 9:
			case 12:
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_HTLROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 6:
			case 7:
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_GRIROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 10:
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_RKRROUGHTRAVELLERS_01");
				iVar8++;
				break;
			case 11:
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_SCLROUGHTRAVELLERS_01");
				iVar8++;
				break;
		}
	}
	switch (iParam0)
	{
		case 1:
		case 6:
		case 7:
		case 12:
			if (bParam1)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_FARMTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam2)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_HUNTERTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam3)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_FAMILYTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam4)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_RANCHERTRAVELERS_COOL_01");
				iVar8++;
			}
			if (bParam5)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_DELIVERYTRAVELERS_COOL_01");
				iVar8++;
			}
			break;
		default:
			if (bParam1)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_FARMTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam2)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_HUNTERTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam3)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_FAMILYTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam4)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_RANCHERTRAVELERS_WARM_01");
				iVar8++;
			}
			if (bParam5)
			{
				iVar1[iVar8] = GET_HASH_KEY("A_M_M_DELIVERYTRAVELERS_WARM_01");
				iVar8++;
			}
			break;
	}
	if (iVar8 > 0)
	{
		iVar0 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8)];
	}
	return iVar0;
}

int func_49(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(GET_HASH_KEY("HORSE_TYPE_RIDING"), 0, GET_HASH_KEY("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case GET_HASH_KEY("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(GET_HASH_KEY("HORSE_TYPE_DRAFT"), 0, GET_HASH_KEY("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case GET_HASH_KEY("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(GET_HASH_KEY("HORSE_TYPE_RACE"), 0, GET_HASH_KEY("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case GET_HASH_KEY("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(GET_HASH_KEY("HORSE_TYPE_WAR"), 0, GET_HASH_KEY("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case GET_HASH_KEY("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(GET_HASH_KEY("HORSE_TYPE_WORK"), 0, GET_HASH_KEY("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(GET_HASH_KEY("HORSE_TYPE_RIDING"), 0, GET_HASH_KEY("SPECIES_HORSE"), true, false, 0f, 0f, 0f);
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	uParam0->f_20[iParam1 /*14*/].f_1 = sParam2;
	uParam0->f_20[iParam1 /*14*/].f_2 = iParam3;
	uParam0->f_20[iParam1 /*14*/].f_5 = { vParam4 };
	uParam0->f_20[iParam1 /*14*/].f_8 = iParam7;
	uParam0->f_20[iParam1 /*14*/].f_9 = iParam8;
	uParam0->f_20[iParam1 /*14*/].f_10 = iParam9;
	uParam0->f_20[iParam1 /*14*/].f_11 = iParam10;
	uParam0->f_20[iParam1 /*14*/].f_12 = iParam11;
	uParam0->f_20[iParam1 /*14*/].f_3 = iParam12;
	uParam0->f_20[iParam1 /*14*/].f_13 = iParam13;
	uParam0->f_19++;
}

bool func_51(int iParam0, bool bParam1, bool bParam2)
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
		if (func_94())
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
		iVar0 = func_95(Global_1898164.f_1[0 /*5*/]);
		if (func_96(iVar0) && func_97(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_98(Global_1898164.f_1[0 /*5*/]))
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

int func_52(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_54()
{
	return (Global_1894899 & 1 != 0 && func_81() != -1);
}

bool func_55(var uParam0, var uParam1)
{
	var uVar0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam1->f_1), uParam1))
	{
		uParam1->f_2 = 1;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar0, uParam1))
		{
			uParam0->f_494 = uVar0;
		}
		uParam1->f_2 = 2;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar0, uParam1))
		{
			uParam0->f_493 = uVar0;
		}
		uParam1->f_2 = 3;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar0, uParam1))
		{
			uParam0->f_495 = uVar0;
		}
		return true;
	}
	return false;
}

int func_56(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_99(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_57(int iParam0)
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

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_100(uParam0, 1);
		func_101(uParam0, 1);
		func_102(uParam0, 1);
		func_103(uParam0, 1);
		func_104(uParam0, 1);
		func_105(uParam0, 1);
		func_106(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_100(uParam0, 0);
		func_101(uParam0, 0);
		func_102(uParam0, 0);
		func_103(uParam0, 0);
		func_104(uParam0, 0);
		func_105(uParam0, 0);
		func_106(uParam0, 0);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_9(&(uParam0->f_1), 256);
	}
	else
	{
		func_107(&(uParam0->f_1), 256);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_9(&(uParam0->f_1), 4);
	}
	else
	{
		func_107(&(uParam0->f_1), 4);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_9(&(uParam0->f_1), 2);
	}
	else
	{
		func_107(&(uParam0->f_1), 2);
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_9(&(uParam0->f_1), 1);
	}
	else
	{
		func_107(&(uParam0->f_1), 1);
	}
}

void func_63(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_9(&(uParam0->f_1), 16);
	}
	else
	{
		func_107(&(uParam0->f_1), 16);
	}
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_65(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_108(uParam2, 1, iVar0);
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
			if (func_109(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_110(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_111(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_112(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_113(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_114(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_110(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_115(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_116(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_110(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_117(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_110(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_118(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_118(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_110(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_119(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_120(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_121(uParam2, 4000))
				{
					if ((func_122(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_123(uParam2, iParam0)) && func_124(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_110(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_122(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_123(uParam2, iParam0)) && func_124(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_125(iParam0, Global_1935630.f_41))
							{
								func_126();
								*uParam3 = 2;
								func_110(iParam0, uParam2, *uParam3);
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
						if (func_125(iParam0, Global_1935630.f_41))
						{
							func_126();
							*uParam3 = 2;
							func_110(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_127(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_128() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_126();
						*uParam3 = 2;
						func_110(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_129())
					{
						if (func_125(iParam0, Global_1935630.f_42))
						{
							func_126();
							*uParam3 = 2;
							func_110(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_130(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_110(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_131(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_132(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_110(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_133(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_134(uParam2, 4000))
				{
					if (func_135(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_110(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_136(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_110(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_137(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_110(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_66(var uParam0)
{
	if (!uParam0->f_469[1])
	{
		func_72(*uParam0, 0);
		uParam0->f_469[1] = 1;
	}
	if (!uParam0->f_469[2])
	{
		func_73(*uParam0, uParam0->f_483, 0);
		uParam0->f_469[2] = 1;
	}
}

int func_67(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_138(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_68(var uParam0, bool bParam1, bool bParam2)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam1);
	if (!bParam1 && bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 168, true);
	}
}

void func_69(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_139(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_140(iParam0))
	{
		if (func_141(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_142(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_142(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_142(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_142(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_142(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_142(iParam5, 129))
	{
		if (func_142(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_142(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_142(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_142(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_140(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_142(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_142(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

bool func_71(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, float fParam5)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	if (func_53(uParam0->f_503, 1))
	{
		if (Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7)
		{
			Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7 = 0;
			return true;
		}
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() % 8) == 0)
	{
		if (fParam4 > fParam2)
		{
			fVar1 = fParam2;
		}
		else
		{
			fVar1 = fParam4;
		}
		if (func_143(Global_35))
		{
			iVar2 = func_144(Global_35);
			if (PED::_0xF60165E1D2C5370B(iVar2, &fVar3, &fVar4))
			{
				if (fVar3 >= 1.501f || fVar4 >= 1.501f)
				{
					fVar1 = (fVar1 * 1.3f);
					fParam2 = (fParam2 * 1.3f);
				}
			}
		}
		else
		{
			fVar5 = 1f;
			fVar6 = 1f;
			PED::_0xF60165E1D2C5370B(Global_35, &fVar5, &fVar6);
			if (fVar5 <= 2f && fVar6 <= 2f)
			{
				fVar1 = (fVar1 * 0.7f);
				fParam2 = (fParam2 * 0.7f);
			}
		}
		fVar1 = (fVar1 * fVar1);
		fParam2 = func_145(fParam2);
		fVar7 = func_146(Global_36, uParam0->f_483);
		if (fVar7 < uParam0->f_502)
		{
			uParam0->f_502 = fVar7;
		}
		else if ((fVar7 - uParam0->f_502) > fParam5)
		{
			return true;
		}
		iVar0 = 0;
		while (iVar0 < uParam0->f_19)
		{
			if (iVar0 >= iParam3)
			{
				return false;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
			{
				if (!PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_20[iVar0 /*14*/]);
				}
				fVar8 = func_78(Global_35, uParam0->f_20[iVar0 /*14*/], 1);
				if (fVar8 < fVar1)
				{
					return true;
				}
				if (fVar8 < (fParam2 * fParam2))
				{
					if (PED::_0x5102307CE88798EB(uParam0->f_20[iVar0 /*14*/]) && PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[iVar0 /*14*/]))
					{
						if (!func_74(&(uParam0->f_490)))
						{
							func_75(&(uParam0->f_490));
						}
						if (func_147(&(uParam0->f_490), fParam1))
						{
							func_148(&(uParam0->f_490));
							return true;
						}
						return false;
					}
				}
			}
			iVar0++;
		}
		if (func_74(&(uParam0->f_490)))
		{
			func_148(&(uParam0->f_490));
		}
	}
	return false;
}

void func_72(int iParam0, bool bParam1)
{
	if (func_40() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_40();
	}
	func_41(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, 0);
	if (bParam1)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_7 = (Global_1415419.f_7 + 50000);
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_8 = (Global_1415419.f_8 + 50000);
		}
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_3++;
	Global_32074.f_2697.f_3++;
}

void func_73(int iParam0, vector3 vParam1, bool bParam4)
{
	if (func_40() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
	{
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_40();
	}
	func_41(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7, 0, 0, 0, 0);
	if (bParam4)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_7 = (Global_1415419.f_7 + 120000);
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
			{
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_8 = (Global_1415419.f_8 + 120000);
		}
	}
	func_42(iParam0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 2), 0, 0);
	func_149(iParam0);
	func_150(iParam0, vParam1);
	Global_32074.f_2697.f_6[iParam0 /*6*/]++;
	Global_32074.f_2697.f_2++;
}

bool func_74(var uParam0)
{
	return func_151(*uParam0, 1);
}

void func_75(var uParam0)
{
	func_152(uParam0, 0f);
}

float func_76(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_77(var uParam0, float fParam1)
{
	if (!func_74(uParam0))
	{
		return false;
	}
	if (func_153(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

float func_78(int iParam0, int iParam1, bool bParam2)
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
	return func_154(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_79(int iParam0, int iParam1)
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
	if (func_142(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_142(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_142(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_80(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_81()
{
	return Global_1894899.f_2;
}

float func_82(vector3 vParam0, vector3 vParam3)
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

bool func_83(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_84(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (func_155(vParam0, Global_1415419.f_9721[iVar0 /*8*/].f_4, fParam3, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_85(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_32074.f_2697.f_1495[iVar0 /*4*/] != -1)
		{
			if (func_155(vParam0, Global_32074.f_2697.f_1495[iVar0 /*4*/].f_1, 1f, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_86(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_156(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_87(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_88(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_89(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_90(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_91(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_92(int iParam0, int iParam1)
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

void func_93(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam6);
	func_158(uParam0, iParam5);
	func_159(uParam0, iParam4);
	func_160(uParam0, iParam3);
	func_161(uParam0, iParam2);
	func_162(uParam0, iParam1);
}

bool func_94()
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

int func_95(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_164(func_163(iParam0));
}

bool func_96(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_98(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_99(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_165(iParam1))
		{
			func_166(iParam0, GET_HASH_KEY("META_OUTFIT_DEFAULT"));
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
			func_167(iParam0, 0, 1);
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
			func_168(iParam0, 0);
			bVar0 = true;
		}
		func_169(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 4);
	}
	else
	{
		func_9(uParam0, 4);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 8);
	}
	else
	{
		func_9(uParam0, 8);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 16);
	}
	else
	{
		func_9(uParam0, 67108864);
		func_9(uParam0, 16);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 32);
	}
	else
	{
		func_9(uParam0, 32);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 64);
	}
	else
	{
		func_9(uParam0, 64);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 1024);
	}
	else
	{
		func_9(uParam0, 1024);
	}
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 1048576);
	}
	else
	{
		func_9(uParam0, 1048576);
	}
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_108(var uParam0, bool bParam1, int iParam2)
{
	func_170(iParam2);
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
		uParam0->f_13 = func_171(0);
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
							func_107(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_172(1))
						{
							func_107(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_172(1) || *uParam0 & 8192 != 0))
				{
					func_9(uParam0, 33554432);
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
			if (func_173(uParam0))
			{
				uParam0->f_15 = func_128();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_128() - uParam0->f_15) > 500)
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
	func_174(uParam0);
}

bool func_109(int iParam0, var uParam1)
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
			if (!func_175(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_176(iParam0, iVar2) <= func_177(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_110(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_178(iParam2, 1, 1, 1, 0))
	{
		func_107(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_179(uParam1, 1);
	func_180();
}

bool func_111(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_181(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_182(uParam1);
			if (func_183(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_184(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_179(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_179(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_112(int iParam0, int iParam1, var uParam2)
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
	if (func_185(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_182(uParam2);
		if (func_183(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_184(uParam2)
				{
					func_179(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_113(int iParam0, var uParam1)
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
	if (func_175(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_184(uParam1)
		{
			fVar3 = func_182(uParam1);
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

int func_114(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_186(bParam1, bParam2, bParam3);
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

bool func_115(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_128();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_116(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_187(uParam2);
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
			if (func_124(uParam2, iParam1))
			{
				func_179(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_117(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_188(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_124(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_179(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_118(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_189(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_179(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_179(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_190(iParam1, vVar0, vVar4))
					{
						func_179(uParam2, 1);
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
					func_179(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_190(iParam1, vVar0, vVar7))
					{
						func_179(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_119(int iParam0, var uParam1)
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
		if (!func_175(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_191(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_57(Global_1935630.f_34[iVar0]))
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
			if (func_192(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_193(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_194(uParam1, iParam0, fVar1, iVar0))
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

bool func_120(int iParam0, var uParam1)
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

bool func_121(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_128();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_122(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_195(iVar0, &iVar2))
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
	if (func_196(iVar0, iParam0))
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

int func_123(var uParam0, int iParam1)
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

bool func_124(var uParam0, int iParam1)
{
	if (func_197(uParam0))
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

bool func_125(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_198(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_126()
{
}

bool func_127(var uParam0, int iParam1)
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
		if (func_199(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_128();
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
						if (func_200(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_128();
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

int func_128()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_129()
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
	if ((func_128() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_130(var uParam0, int iParam1)
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
	fVar0 = func_177(uParam0);
	if (uParam0->f_12 > func_201(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_202(iParam1);
	iVar1 = func_203(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_131(int iParam0, int iParam1, var uParam2)
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
	return func_204(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_132(int iParam0, var uParam1)
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
		if (func_205(iParam0, uParam1, 1))
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
					if (!func_206(uParam1, iParam0))
					{
						if (func_200(iVar4, Global_36, 1) < 7f)
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

bool func_133(int iParam0, var uParam1)
{
	if (!func_207(0))
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

bool func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_128();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_135(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_136(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_128();
	}
	else if (func_128() - uParam1->f_4) > func_208(uParam1)
	{
		return func_209(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_137(var uParam0, int iParam1)
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

bool func_138(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_139(var uParam0)
{
	return uParam0;
}

bool func_140(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_141(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, GET_HASH_KEY("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_142(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_143(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_144(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

float func_145(float fParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_1935630.f_44;
		if (WEAPON::_IS_WEAPON_SNIPER(iVar0) || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
		{
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				fParam0 = (fParam0 + (CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() * fParam0));
			}
		}
	}
	return fParam0;
}

float func_146(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_147(var uParam0, float fParam1)
{
	if (func_77(uParam0, fParam1))
	{
		func_148(uParam0);
		return true;
	}
	return false;
}

void func_148(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_149(int iParam0)
{
	if (func_43(iParam0))
	{
		switch (Global_1415419.f_19[iParam0 /*12*/].f_5)
		{
			case 1:
				func_210(0, 1, 0, 0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 4), 0, 0, 1);
				func_210(1, 1, 0, 0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 4), 0, 0, 1);
				break;
			case 37:
				func_210(60, 1, 0, 0, (Global_1415419.f_19[iParam0 /*12*/].f_7 / 4), 0, 0, 1);
				break;
		}
	}
}

void func_150(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_32074.f_2697.f_1495[iVar0 /*4*/] == -1)
		{
			iVar1 = iVar0;
			Jump @109; //curOff = 39
		}
		else if (Global_32074.f_2697.f_1495[iVar0 /*4*/] == iParam0)
		{
			if (func_155(Global_32074.f_2697.f_1495[iVar0 /*4*/].f_1, vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_32074.f_2697.f_1495[iVar0 /*4*/] = Global_32074.f_2697.f_1495[iVar0 + 1 /*4*/];
			Global_32074.f_2697.f_1495[iVar0 /*4*/].f_1 = { Global_32074.f_2697.f_1495[iVar0 + 1 /*4*/].f_1 };
			iVar0++;
		}
		iVar1 = 9;
	}
	Global_32074.f_2697.f_1495[iVar1 /*4*/] = iParam0;
	Global_32074.f_2697.f_1495[iVar1 /*4*/].f_1 = { vParam1 };
}

bool func_151(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_152(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_211() - fParam1);
	func_212(uParam0, 1);
	func_213(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_153(var uParam0)
{
	if (!func_74(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_214(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_211() - uParam0->f_1);
}

float func_154(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_155(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_156(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_87(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_92(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_163(int iParam0)
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

int func_164(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_165(int iParam0)
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

void func_166(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_215(iParam0, iParam1))
		{
			if (func_216(iParam0, iParam1))
			{
				if (func_217(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_218(iParam0);
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

void func_167(int iParam0, int iParam1, bool bParam2)
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

void func_168(int iParam0, bool bParam1)
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

void func_169(int iParam0, int iParam1)
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

void func_170(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_219();
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
			func_220(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_171(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_172(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_221(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_173(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_222() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_223(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_223(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_203(iVar0) == -1)
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

void func_174(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_224(uParam0);
	}
}

bool func_175(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_203(iParam2);
	}
	else
	{
		iVar1 = func_202(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_203(iParam0);
	}
	else
	{
		iVar0 = func_202(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_53(*uParam1, 8388608))
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

float func_176(int iParam0, int iParam1)
{
	return func_198(iParam0, iParam1, 1, 1);
}

float func_177(var uParam0)
{
	return uParam0->f_26;
}

bool func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_179(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_107(uParam0, 134217728);
	}
	else
	{
		func_9(uParam0, 134217728);
	}
}

void func_180()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_181(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_198(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_225(iVar0, 0)))
		{
			if (func_226(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_182(var uParam0)
{
	return uParam0->f_17;
}

bool func_183(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_53(*uParam0, 4194304))
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

int func_184(var uParam0)
{
	return uParam0->f_18;
}

bool func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_225(iVar0, 0)))
		{
			if (func_227(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_186(bool bParam0, bool bParam1, bool bParam2)
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

float func_187(var uParam0)
{
	return uParam0->f_23;
}

int func_188(var uParam0)
{
	return uParam0->f_21;
}

int func_189(var uParam0)
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

bool func_190(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_228(iParam0, vParam4, 0.5f))
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

int func_191(int iParam0)
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
	if (func_229(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_192(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_230(iParam1))
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

bool func_193(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_230(iParam1))
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

bool func_194(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_230(iParam1))
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

bool func_195(int iParam0, int iParam1)
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

bool func_196(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_231(iParam0, 1, 0, 0) != GET_HASH_KEY("WEAPON_LASSO"))
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

bool func_197(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_198(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_199(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_200(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_200(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_201(var uParam0)
{
	return uParam0->f_24;
}

int func_202(int iParam0)
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

int func_203(int iParam0)
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

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_195(Global_35, &iVar1))
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
		fVar2 = func_198(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_198(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_205(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_221(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_206(uParam1, iVar0))
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
				if (!bParam2 || !func_206(uParam1, iVar1))
				{
					if (func_200(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_206(var uParam0, int iParam1)
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

int func_207(int iParam0)
{
	if (func_232())
	{
		return 0;
	}
	return func_233(Global_1347702[58 /*49*/].f_15, 1);
}

int func_208(var uParam0)
{
	return uParam0->f_20;
}

int func_209(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_210(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_234(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_222() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

float func_211()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_214(var uParam0)
{
	return func_151(*uParam0, 2);
}

bool func_215(int iParam0, int iParam1)
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

bool func_216(int iParam0, int iParam1)
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

bool func_217(int iParam0, int iParam1)
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
	if (!func_215(iParam0, iVar0))
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

void func_218(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_219()
{
	if (func_235())
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

void func_220(var uParam0, var uParam1)
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

bool func_221(bool bParam0, int iParam1, int iParam2)
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

int func_222()
{
	return Global_1572887.f_12;
}

int func_223(var uParam0)
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

void func_224(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_9(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_107(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_225(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_226(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_227(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_227(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_228(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_229(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_230(int iParam0)
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

int func_231(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_232()
{
	if (func_222() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_233(int iParam0, bool bParam1)
{
	switch (func_236(iParam0))
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

int func_234(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_235()
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

int func_236(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_237(iParam0);
}

int func_237(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_238(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_238(int iParam0)
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

