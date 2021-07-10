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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	struct<20> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	float fLocal_56 = 0f;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	struct<75> Local_65[4];
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	struct<16> Local_369[8];
	var uLocal_498 = 0;
	var uLocal_499 = 2;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 2;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = -1;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 1106247680;
	var uLocal_530 = 0;
	var uLocal_531 = 1072064102;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	var uLocal_602[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	char* sLocal_616 = NULL;
	char* sLocal_617 = NULL;
	char* sLocal_618 = NULL;
	char* sLocal_619 = NULL;
	char* sLocal_620 = NULL;
	char* sLocal_621 = NULL;
	char* sLocal_622 = NULL;
	char* sLocal_623 = NULL;
	bool bLocal_624 = false;
	bool bLocal_625 = false;
	int iLocal_626 = 0;
	bool bLocal_627 = false;
	int iLocal_628 = 0;
	bool bLocal_629 = false;
	bool bLocal_630 = false;
	bool bLocal_631 = false;
	bool bLocal_632 = false;
	bool bLocal_633 = false;
	int iLocal_634 = 0;
	float fLocal_635 = 0f;
	float fLocal_636 = 0f;
	float fLocal_637 = 0f;
	float fLocal_638 = 0f;
	float fLocal_639 = 0f;
	float fLocal_640 = 0f;
	float fLocal_641 = 0f;
	float fLocal_642 = 0f;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	char* sLocal_646 = NULL;
	vector3 vLocal_647 = { 0f, 0f, 0f };
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<2238> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_56 = -1f;
	iLocal_366 = GET_HASH_KEY("LOANSHARKING_HORSECHASE1_MALES_01");
	iLocal_367 = GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
	iLocal_368 = GET_HASH_KEY("A_C_HORSE_KENTUCKYSADDLE_GREY");
	sLocal_616 = "script@proc@loansharking@horsechase@ig1_farm_debtor";
	sLocal_617 = "script@proc@loansharking@horsechase@ig1_farm_debtor_arthur";
	sLocal_618 = "script@proc@loansharking@horsechase@ig2_debt_chase";
	sLocal_619 = "script@proc@loansharking@horsechase@ig3_return_debt";
	sLocal_620 = "script@proc@loansharking@horsechase@ig2_debt_chase_chickmatthews";
	sLocal_621 = "script@proc@loansharking@horsechase@ig2_debt_chase_rideoff";
	sLocal_622 = "script_proc@loansharking@horse_chase@ig3_return_debt";
	sLocal_623 = "ls_horse_chase_ranch_hand3";
	sLocal_646 = "script@proc@loansharking@horsechase2@tree";
	vLocal_647 = { 1444.9f, 897.85f, 122.5f };
	Var0.f_3.f_5 = 1065353216;
	Var0.f_3.f_6 = 1119092736;
	Var0.f_3.f_7 = 1092616192;
	Var0.f_3.f_8 = 1085276160;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_17.f_2 = 1106247680;
	Var0.f_17.f_3 = 1101004800;
	Var0.f_17.f_4 = 1099431936;
	Var0.f_17.f_5 = 1098907648;
	Var0.f_17.f_6 = 1082130432;
	Var0.f_32 = 1;
	Var0.f_32.f_13 = 17;
	Var0.f_32.f_218 = 1097859072;
	Var0.f_32.f_219 = 1101004800;
	Var0.f_32.f_246 = 4;
	Var0.f_352.f_3 = 17;
	Var0.f_352.f_3.f_1.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = GET_HASH_KEY("WEAPON_UNARMED");
	Var0.f_352.f_225.f_15 = 1;
	Var0.f_352.f_241 = 30;
	Var0.f_352.f_241.f_1 = -1;
	Var0.f_352.f_241.f_1.f_2 = 1;
	Var0.f_352.f_241.f_1.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_782 = 8;
	Var0.f_352.f_1111 = 8;
	Var0.f_352.f_1111.f_1.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1288 = 11;
	Var0.f_352.f_1399 = 2;
	Var0.f_352.f_1434 = 2;
	Var0.f_352.f_1451 = -1;
	Var0.f_352.f_1454 = -1;
	Var0.f_352.f_1455 = -1082130432;
	Var0.f_352.f_1537 = 24;
	Var0.f_352.f_1661 = -1;
	Var0.f_2041 = 10;
	Var0.f_2052 = 11;
	Var0.f_2077.f_8 = -1;
	Var0.f_2077.f_17 = 1097859072;
	Var0.f_2077.f_18 = 1000;
	Var0.f_2077.f_19 = 1067450368;
	Var0.f_2077.f_20 = 5000;
	Var0.f_2077.f_21 = 42;
	Var0.f_2077.f_22 = 1103626240;
	Var0.f_2077.f_23 = 1077936128;
	Var0.f_2077.f_24 = 1106247680;
	Var0.f_2077.f_25 = 1103101952;
	Var0.f_2077.f_26 = 1097859072;
	Var0.f_2077.f_27 = 1103626240;
	Var0.f_2106 = 24;
	Var0.f_2204 = -1;
	Var0.f_2210 = 2;
	Var0.f_2213 = 2;
	Var0.f_2216.f_1 = -1;
	Var0.f_2216.f_3 = -1;
	Var0.f_2216.f_6 = -1;
	Var0.f_2216.f_12 = 1073741824;
	Var0.f_2216.f_16 = 1;
	Var0.f_2237 = 1;
	Var0.f_2237.f_1.f_2 = 570;
	Var0.f_2237.f_1.f_3 = 1065353216;
	Var0.f_2237.f_1.f_4 = -1082130432;
	Var0.f_2237.f_1.f_9 = 2;
	Var0 = uScriptParam_0;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&Var0);
	while (true)
	{
		func_3(&Var0);
		if (func_4(Var0.f_16, 12))
		{
			func_5(&Var0);
		}
		else
		{
			switch (Var0.f_1)
			{
				case 0:
					func_6(&Var0);
					break;
				case 1:
					func_7(&Var0);
					break;
				case 3:
					func_8(&Var0);
					break;
				case 2:
					func_11(&Var0, func_10(&Var0, func_9()));
					if (Var0.f_1 == 8 || Var0.f_1 == 9)
					{
						HUD::DISPLAY_HUD(true);
						MAP::DISPLAY_RADAR(true);
					}
					break;
				case 6:
					func_12(&Var0);
					break;
				case 7:
					func_13(&Var0);
					break;
				case 8:
					func_14(&Var0);
					break;
				case 9:
					func_15(&Var0);
					break;
				case 10:
					func_16(&Var0, 0);
					break;
				case 11:
					func_17(&Var0);
					break;
				case 12:
					func_18(&Var0);
					break;
				case 13:
					func_19(&Var0, 0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;

	if (Global_1879534 == 1)
	{
	}
	if (func_20(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		func_21(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_15(uParam0);
		}
		else
		{
			func_16(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_1 == 11)
	{
		func_22(uParam0);
	}
	func_23(uParam0);
}

void func_2(char[4] cParam0)
{
	func_24(&(cParam0->f_2077));
	func_25(&(cParam0->f_2077), 1);
	func_26(&(cParam0->f_2077), 1);
	func_27(&(cParam0->f_2077), 1);
	if (*cParam0 == func_28())
	{
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
		func_30(0, 0);
	}
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	func_31(cParam0);
	func_32(cParam0);
	func_11(cParam0, 0);
}

void func_3(char[4] cParam0)
{
	struct<4> Var0;

	if (func_4(cParam0->f_16, 12))
	{
		return;
	}
	if (func_33())
	{
		func_34(&(cParam0->f_16), 4);
		if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			func_35(cParam0, 8);
		}
		return;
	}
	else if (func_36())
	{
		func_34(&(cParam0->f_16), 8);
		if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			func_35(cParam0, 9);
		}
		return;
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 256);
	if (cParam0->f_1 != 12 && cParam0->f_1 != 11)
	{
		if (!func_4(cParam0->f_16, 1) && cParam0->f_1 <= 3)
		{
			if (func_38(cParam0))
			{
				func_39(cParam0);
				if (cParam0->f_15 == 2 || cParam0->f_15 == 6)
				{
					func_23(cParam0);
				}
				else
				{
					func_11(cParam0, 11);
				}
				return;
			}
			func_40(cParam0);
		}
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			if (func_4(cParam0->f_16, 128))
			{
				if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
				{
					Var0 = { func_41(0) };
					if (func_42(&Var0))
					{
						func_43(&(cParam0->f_16), 128);
					}
				}
				else
				{
					func_43(&(cParam0->f_16), 128);
				}
			}
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 2048))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!func_4(cParam0->f_16, 32))
			{
				func_44();
			}
			if (!func_4(cParam0->f_16, 64))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!func_4(cParam0->f_16, 256))
			{
				func_45(1, 0);
			}
			if (func_46(cParam0))
			{
				func_11(cParam0, 10);
				return;
			}
		}
		func_47(cParam0);
		func_48(cParam0);
	}
}

bool func_4(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_5(var uParam0)
{
	if (func_20(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		func_16(uParam0, 0);
	}
	else
	{
		if (!func_49(&(uParam0->f_2070)))
		{
			func_50(&(uParam0->f_2070), 0);
		}
		func_51(uParam0);
		if (func_52(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_1 == 11)
			{
				func_22(uParam0);
			}
			else
			{
				func_39(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_6(char[4] cParam0)
{
	if (!func_53(64))
	{
		return;
	}
	if (func_54())
	{
		return;
	}
	if (func_55(cParam0) && func_56(cParam0->f_12))
	{
		func_11(cParam0, 1);
	}
}

void func_7(char[4] cParam0)
{
	if (func_57(cParam0))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
		{
			func_58(cParam0);
			func_11(cParam0, 2);
		}
		else
		{
			func_59(cParam0);
			func_11(cParam0, 3);
		}
	}
}

void func_8(char[4] cParam0)
{
	if (func_60(cParam0))
	{
		func_61(cParam0);
	}
}

int func_9()
{
	return Global_1572864.f_9;
}

int func_10(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		func_62(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0, -142743235, 0);
		func_63(5);
		func_64(8192);
		PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 297, false);
		PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 315, true);
		if (!func_65(iLocal_614, 0))
		{
			if (func_66(&iLocal_614, 1112.061f, 499.5253f, 94.7495f, 286.3102f, 1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_614, true);
				TASK::TASK_STAND_STILL(iLocal_614, -1);
			}
		}
		if (!func_67())
		{
			return 2;
		}
		PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
		PED::SET_PED_ONTO_MOUNT(Local_65[0 /*75*/], Local_65[2 /*75*/], -1, true);
		if (PED::IS_PED_FULLY_ON_MOUNT(Local_65[0 /*75*/], true) && !func_68(Local_65[0 /*75*/], 658540077))
		{
			func_69();
			func_63(7);
		}
		if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
		{
			func_70(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
			MAP::BLIP_ADD_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
		}
		func_71("LSHSC_START", 0);
		func_72(*uParam0, func_41(0), func_41(1), 0, 1);
		func_73(1, 1);
		return 8;
	}
	else if (iVar0 == 1)
	{
		func_64(8192);
		func_63(8);
		func_74(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_73(1, 1);
		func_72(*uParam0, func_41(1), func_41(2), 1, 2);
		return 8;
	}
	else if (iVar0 == 2)
	{
		func_74(GET_HASH_KEY("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_73(1, 1);
		return 9;
	}
	return 2;
}

void func_11(char[4] cParam0, int iParam1)
{
	if (iParam1 != cParam0->f_1)
	{
		cParam0->f_2 = cParam0->f_1;
		cParam0->f_1 = iParam1;
	}
}

void func_12(char[4] cParam0)
{
	if (func_75(cParam0))
	{
		if (func_76(cParam0->f_346))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			func_77(&(cParam0->f_32), &(cParam0->f_352));
			func_78(cParam0);
		}
		else
		{
			func_79(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_80(0, 1, 1);
		}
		func_11(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;

	if (func_76(cParam0->f_346))
	{
		if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_78(cParam0))
			{
				func_81(cParam0, 1);
				iVar0 = func_82(cParam0);
				func_11(cParam0, iVar0);
			}
		}
	}
	else
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (func_83(cParam0))
		{
			func_84(cParam0);
			func_81(cParam0, 0);
			iVar0 = func_82(cParam0);
			func_11(cParam0, iVar0);
		}
		else
		{
			func_80(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), true);
			func_85(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;

	iVar0 = func_86(cParam0);
	if (iVar0 != 8)
	{
		func_11(cParam0, iVar0);
	}
}

void func_15(char[4] cParam0)
{
	bool bVar0;

	if (cParam0->f_1 != 9)
	{
		func_11(cParam0, 9);
	}
	func_35(cParam0, 0);
	func_87(*cParam0, 1, 1);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_88(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_89();
		func_90(0);
		func_91(&Global_1935630, 4);
	}
	if (func_92(*cParam0))
	{
		if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			func_94("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			func_94("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			func_94("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	func_43(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		func_95();
		func_96();
	}
	func_11(cParam0, 11);
}

void func_16(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (cParam0->f_1 != 10)
	{
		func_11(cParam0, 10);
	}
	func_35(cParam0, 1);
	if (bParam1 == 1)
	{
		func_95();
		func_96();
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_49(&(cParam0->f_2070)))
			{
				func_50(&(cParam0->f_2070), 0);
			}
			func_51(cParam0);
			bVar0 = CAM::IS_DEATH_FAIL_CAMERA_RUNNING();
			bVar1 = CAM::_0x7CE9DC58E3E4755F();
			if (!func_4(cParam0->f_16, 16) && !bVar1)
			{
				if (!bVar0)
				{
					func_97(1, 1);
					func_98(&(Global_1347343.f_11), 131072);
					return;
				}
				else
				{
					func_34(&(cParam0->f_16), 16);
				}
			}
			if (bVar1)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			else if (func_52(&(cParam0->f_2070)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
		}
		iVar2 = 1;
		if (func_4(cParam0->f_16, 4))
		{
			iVar2 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_KO", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_DEAD", 16);
			}
		}
		else if (func_4(cParam0->f_16, 8))
		{
			iVar2 = 6;
			StringCopy(&(cParam0->f_2208), "PLAYER_ARRESTED", 16);
		}
		func_100(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), func_99(), 0, 0);
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		func_90(0);
		func_89();
		func_91(&Global_1935630, 4);
	}
	func_101(*cParam0);
	bParam1 = true;
	if (func_4(cParam0->f_16, 12))
	{
		bParam1 = true;
	}
	else
	{
		func_39(cParam0);
	}
	if (bParam1)
	{
		func_23(cParam0);
	}
	else
	{
		func_43(&(cParam0->f_16), 1);
		func_11(cParam0, 11);
	}
}

void func_17(char[4] cParam0)
{
	int iVar0;

	if (Global_1392626[*cParam0 /*32*/].f_9 & 4096 != 0)
	{
		func_102(*cParam0);
	}
	if (func_103(64, 1, 1))
	{
		iVar0 = func_104(0);
		if (func_105(iVar0))
		{
			func_22(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (func_106())
	{
		func_22(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!func_49(&(cParam0->f_2064)) || IntToFloat(func_52(&(cParam0->f_2064))) > func_107(cParam0))
	{
		func_50(&(cParam0->f_2064), 1);
		if (func_108(cParam0))
		{
			func_11(cParam0, 12);
		}
	}
}

void func_18(var uParam0)
{
	func_19(uParam0, 1);
	if (func_20(Global_1392626[*uParam0 /*32*/].f_9, 512))
	{
		func_95();
		func_96();
	}
}

void func_19(var uParam0, int iParam1)
{
	func_109(*uParam0, iParam1);
	func_23(uParam0);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_21(var uParam0, int iParam1)
{
}

void func_22(var uParam0)
{
}

void func_23(char[4] cParam0)
{
	func_110(cParam0);
	func_111(cParam0);
	func_112(cParam0);
	if ((cParam0->f_1 != 12 && func_113(cParam0) != 2) && !func_114(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_115(*cParam0);
	}
	func_112(cParam0);
	func_116(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_116(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (func_113(cParam0) == 0)
	{
		func_117(*cParam0);
	}
	func_118(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
	HUD::_TEXT_BLOCK_DELETE("LOAN");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_2205)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(cParam0->f_2205));
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_89();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_24(var uParam0)
{
	func_119(uParam0, 0);
	func_27(uParam0, 0);
	func_120(uParam0, 1);
	func_121(uParam0, 1);
	func_122(uParam0, 0);
	func_123(uParam0, 1);
	func_124(uParam0, 1, 1, 1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 8);
	}
	else
	{
		func_126(&(uParam0->f_1), 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 2);
	}
	else
	{
		func_126(&(uParam0->f_1), 2);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 2048);
	}
	else
	{
		func_126(&(uParam0->f_1), 2048);
	}
}

int func_28()
{
	return func_128(func_127());
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_30(int iParam0, bool bParam1)
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

void func_31(var uParam0)
{
	int iVar0;

	func_129(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	func_129(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	func_130(uParam0, "LSHRCAU");
	func_131(uParam0, 7);
	func_132(uParam0, 7);
	func_133(uParam0, 1094934838);
	STREAMING::REQUEST_ANIM_DICT(sLocal_622);
	func_134(&(uParam0->f_2041), iLocal_366);
	func_134(&(uParam0->f_2041), iLocal_367);
	func_134(&(uParam0->f_2041), iLocal_368);
	Local_65[1 /*75*/].f_2 = { 1107.073f, 507.3737f, 94.89444f };
	Local_65[1 /*75*/].f_5 = 191.6874f;
	Local_65[3 /*75*/].f_2 = { 1128.369f, 504.9968f, 95.4331f };
	Local_65[3 /*75*/].f_5 = 306.9715f;
	if (*uParam0 == func_28())
	{
		Local_65[2 /*75*/].f_2 = { 1140.01f, 491.879f, 94.9783f };
		Local_65[2 /*75*/].f_5 = -75.38f;
		Local_65[0 /*75*/].f_2 = { 1140.01f, 491.879f, 94.9783f };
		Local_65[0 /*75*/].f_5 = -75.38f;
	}
	else
	{
		Local_65[2 /*75*/].f_2 = { 1130.996f, 501.6529f, 96.2545f };
		Local_65[2 /*75*/].f_5 = 310.3113f;
		Local_65[0 /*75*/].f_2 = { 1130.114f, 502.0255f, 96.2224f };
		Local_65[0 /*75*/].f_5 = 203.7678f;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_623);
	iLocal_592 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1350.202f, -1365.132f, 78.619f, 0f, 0f, -9.934977f, 10f, 10f, 5f, "m_volMissionLaunch");
	iLocal_593 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1351.93f, -1355.268f, 78.619f, 0f, 0f, -9.934977f, 30f, 30f, 5f, "m_volInitialConversation");
	iLocal_594 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1116.18f, 496.0392f, 95.4485f, 0f, 0f, 44.58749f, 47.82171f, 40.50388f, 15.31202f, "m_volScenarioBlock");
	iLocal_595 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1117.883f, 485.0335f, 97.58239f, 0f, 0f, 39.23502f, 5.179276f, 3.044432f, 2.75114f, "m_volClimbBlock");
	iLocal_596 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1128.757f, 499.7383f, 96.33897f, 0f, 0f, -49.34036f, 7.976662f, 4.923555f, 2.762501f, "m_volShedBlock");
	iLocal_597 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1443.95f, 899.7013f, 122.7398f, 0f, 0f, 0f, 3f, 3f, 3f, "m_volTreeTrigger");
	iLocal_598 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1136.361f, 496.686f, 96.339f, 0f, 0f, 42f, 18f, 18f, 5f, "m_volChaseStart");
	func_135(iLocal_594, "LS_BANKONMISS", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	func_136(873);
	func_136(874);
	MISC::_0x2FCD528A397E5C88(iLocal_594, 16384);
	func_137(iLocal_594, 0, 0);
	MISC::_0x2FCD528A397E5C88(iLocal_594, 8);
	MISC::_0x2FCD528A397E5C88(iLocal_594, 1048576);
	uLocal_599 = PED::_0x4C39C95AE5DB1329(iLocal_594, false, 15);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_594, 0, 262144, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_594, 0, 262144, 0, -1, -1, 2);
	func_138(GET_HASH_KEY("DOOR_CRO_FARMHOUSE_01"), 1, 0f, 0, 0, 0, 1, 0);
	func_138(GET_HASH_KEY("DOOR_CRO_FARMHOUSE_03"), 1, 0f, 0, 0, 0, 1, 0);
	iVar0 = 0;
	while (iVar0 < Local_65)
	{
		func_25(&(Local_65[iVar0 /*75*/].f_7), 1);
		func_119(&(Local_65[iVar0 /*75*/].f_7), 0);
		func_120(&(Local_65[iVar0 /*75*/].f_7), 1);
		func_139(&(Local_65[iVar0 /*75*/].f_7), 1);
		func_140(&(Local_65[iVar0 /*75*/].f_7), 1);
		func_123(&(Local_65[iVar0 /*75*/].f_7), 0);
		iVar0++;
	}
}

void func_32(var uParam0)
{
	if (uParam0->f_12 == -1)
	{
		uParam0->f_12 = 5;
	}
	if (uParam0->f_12 > 0)
	{
		PED::_0xED9582B3DA8F02B4(uParam0->f_12);
	}
}

bool func_33()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	else if (Global_1935630.f_12)
	{
		return true;
	}
	else if (PED::IS_PED_FATALLY_INJURED(Global_35))
	{
		return true;
	}
	else if (ENTITY::GET_ENTITY_HEALTH(Global_35) <= 0)
	{
		return true;
	}
	return false;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35(char[4] cParam0, int iParam1)
{
	if (cParam0->f_15 != iParam1)
	{
		cParam0->f_15 = iParam1;
	}
}

bool func_36()
{
	if ((CAM::IS_SCREEN_FADED_OUT() && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
	{
		return true;
	}
	return false;
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;

	if (cParam0->f_1 == 3)
	{
		if (func_141(cParam0))
		{
			func_142(*cParam0, 1024);
			func_35(cParam0, 5);
			return true;
		}
	}
	if (func_103(0, 1, 0))
	{
		iVar0 = func_104(0);
		if (func_105(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != func_104(0))
		{
			func_129(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (func_143(Global_1392626[*cParam0 /*32*/].f_12))
		{
			func_142(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!func_144(Global_1392626[*cParam0 /*32*/].f_22))
		{
			func_129(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			func_35(cParam0, 3);
			return true;
		}
	}
	if (func_145(*cParam0))
	{
		func_129(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		func_35(cParam0, 7);
		return true;
	}
	if (func_146(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_142(*cParam0, 16384);
		func_35(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!func_147(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			func_35(cParam0, 2);
			return true;
		}
	}
	else if (func_65(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!func_147(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_148(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				func_35(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (func_149(fVar1))
	{
		func_142(*cParam0, 8192);
		func_35(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_150(cParam0);
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		func_89();
		func_151(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		func_152();
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (func_113(cParam0) != 2 && !func_114(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		func_115(*cParam0);
	}
	func_112(cParam0);
	if (func_113(cParam0) == 0)
	{
		func_117(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_153();
	func_116(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	func_116(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	func_154(cParam0);
}

void func_40(char[4] cParam0)
{
	if (!func_155(*cParam0, 4))
	{
		if (func_156(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
		{
			if (cParam0->f_2204 == -1)
			{
				cParam0->f_2204 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - cParam0->f_2204) > 120000)
			{
				func_157(*cParam0);
			}
		}
		else if (cParam0->f_2204 != -1)
		{
			cParam0->f_2204 = -1;
		}
	}
}

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		Var1 = { 1107.63f, 504.6122f, 94.6026f };
		Var1.f_3 = 272.8669f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1200.719f, 522.0459f, 89.9569f };
		Var1.f_3 = 269.5601f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1443.651f, 898.7614f, 121.2004f };
		Var1.f_3 = 181.6813f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_158(*uParam0, uParam0->f_3);
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_44()
{
	LAW::_0x15ABD5004CAD2D99(0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_UNARMED_ASSAULT"), 3, 3, 1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), GET_HASH_KEY("CRIME_TRAMPLE"), 4, 0, -1);
}

void func_45(bool bParam0, bool bParam1)
{
	if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(2, GET_HASH_KEY("INPUT_OPEN_SATCHEL_MENU"), false);
			if (Global_1935689.f_1 || Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_159(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_47(char[4] cParam0)
{
}

void func_48(char[4] cParam0)
{
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
	{
		return;
	}
	if (func_160(cParam0->f_32.f_5))
	{
		cParam0->f_32.f_5 = { func_161(*cParam0) };
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (cParam0->f_32.f_218 == 15f)
		{
			cParam0->f_32.f_218 = 50f;
		}
		if (cParam0->f_32.f_219 == 20f)
		{
			cParam0->f_32.f_219 = 75f;
		}
	}
	else
	{
		if (cParam0->f_32.f_218 > 15f)
		{
			cParam0->f_32.f_218 = 15f;
		}
		if (cParam0->f_32.f_219 > 20f)
		{
			cParam0->f_32.f_219 = 20f;
		}
	}
	if (cParam0->f_32.f_218 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= 0f)
	{
	}
	else if (cParam0->f_32.f_219 <= cParam0->f_32.f_218)
	{
	}
	if (func_76(cParam0->f_346))
	{
		if (func_162(&(cParam0->f_32), cParam0->f_346, 0, 1))
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_163(cParam0);
				func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
		else
		{
			if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
			{
				func_164(cParam0);
			}
			if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
			{
				func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
			}
		}
	}
	else if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
		{
			func_164(cParam0);
		}
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	}
}

bool func_49(var uParam0)
{
	return func_165(*uParam0, 1);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1 || !func_49(uParam0))
	{
		func_166(uParam0);
	}
}

void func_51(char[4] cParam0)
{
}

int func_52(var uParam0)
{
	if (!func_49(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_167(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_168() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_53(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_54()
{
	return func_169(Global_1935630, 4096);
}

int func_55(var uParam0)
{
	func_170(&(uParam0->f_2041));
	func_171(&(uParam0->f_2052));
	HUD::TEXT_BLOCK_REQUEST("LOAN");
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)))
	{
	}
	else
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2205));
	}
	if (((func_172(&(uParam0->f_2041)) && func_173(&(uParam0->f_2052))) && HUD::TEXT_BLOCK_IS_LOADED("LOAN")) && (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2205)) || HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2205))))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	if (PED::_0x5C16855277819BBF() >= iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_57(var uParam0)
{
	if (func_174(uParam0, 0, 3, 1) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_623))
	{
		func_175(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
		func_175(&(uParam0->f_2106), Local_65[0 /*75*/], "LSHRC_RANCH_HAND", 0);
		func_175(&(uParam0->f_2106), Local_65[1 /*75*/], "LSHRC_RANCH_DECOY", 0);
		Global_1392626[*uParam0 /*32*/].f_11 = Local_65[0 /*75*/];
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*75*/]))
		{
			func_176(1);
		}
		else
		{
			return false;
		}
		if (!func_177(&iLocal_600, GET_HASH_KEY("P_BRUSHHORSE02X"), 1107.143f, 507.3958f, 94.34319f, 0f, 0f, 0f, 0))
		{
			return false;
		}
		if (!func_177(&iLocal_601, GET_HASH_KEY("S_TWOFOLDMAP01X"), 0f, 0f, 0f, 0f, 0f, 0f, 0))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;

	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!func_178(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!func_179(Global_1392626[*cParam0 /*32*/].f_3))
		{
			func_180(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		func_181(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		func_182(&Global_1935630, 4);
		func_183(4);
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	func_115(*cParam0);
	MISC::_0x1096603B519C905F(func_184(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_88(cParam0, 1, 0);
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	func_151(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	func_185(1);
	func_186(cParam0);
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			func_34(&(cParam0->f_16), 128);
		}
		func_72(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	char cVar0[16];

	StringCopy(&cVar0, func_187(*cParam0), 16);
	StringConCat(&cVar0, "_P1", 16);
	cParam0->f_346 = func_188(&cVar0);
	func_189(cParam0, func_161(*cParam0));
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

bool func_60(char[4] cParam0)
{
	if (!func_190(cParam0))
	{
		return false;
	}
	func_191(cParam0);
	if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && func_20(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_192(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_193(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (func_194(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (func_76(cParam0->f_346))
			{
				if (!func_160(cParam0->f_32.f_5))
				{
					if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								func_111(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							func_111(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					func_111(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			func_195(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_196(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2255, &(cParam0->f_2237), 0.1f, 3, 0, cParam0->f_2256, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (func_197(&(cParam0->f_2216)))
					{
						func_112(cParam0);
						func_198(cParam0);
						func_111(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_199(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			func_111(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;

	func_58(cParam0);
	func_200(&(cParam0->f_2237), 0, 0, 1, 0);
	func_112(cParam0);
	func_34(&(cParam0->f_16), 1);
	func_201(cParam0);
	func_11(cParam0, func_202(cParam0));
	iVar0 = func_202(cParam0);
	if (iVar0 == 7)
	{
		func_12(cParam0);
		if (cParam0->f_1 != 7)
		{
			iVar0 = 6;
		}
	}
	else if (iVar0 == 8)
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
}

int func_62(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_204(iParam0, 1);
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
			func_205(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_206(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_207(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_208(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_208(iParam0, 0, 0) - iParam1) < 0)
		{
			func_62(iParam0, func_208(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_209(iParam0) == GET_HASH_KEY("WEAPON"))
	{
		if (!func_210(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_211(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_212(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != GET_HASH_KEY("UPGRADE_FSH_BAIT_NONE"))
	{
		func_205(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_213(iParam0, iParam1);
	return 1;
}

void func_63(int iParam0)
{
	if (func_214() != iParam0)
	{
		iLocal_14 = iParam0;
	}
}

void func_64(int iParam0)
{
	if (!func_215(iParam0))
	{
		func_216(&iLocal_15, iParam0);
	}
}

bool func_65(int iParam0, int iParam1)
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
	if (func_217(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_217(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_217(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_217(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_217(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_217(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_217(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_217(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_66(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;

	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*iParam0 = func_218(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return false;
	}
	else if (iVar11 == 2)
	{
		if (!func_65(*iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_67()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_65(Local_65[iVar1 /*75*/], 0))
		{
			if (!PED::IS_PED_READY_TO_RENDER(Local_65[iVar1 /*75*/]))
			{
				return false;
			}
		}
		if (func_65(iLocal_614, 0))
		{
			if (!PED::IS_PED_READY_TO_RENDER(iLocal_614))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_68(int iParam0, int iParam1)
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

void func_69()
{
	int iVar0;

	func_219(&uLocal_602, 750.1129f, 723.1831f, 113.1959f, 0);
	VEHICLE::_0xE6C5E2125EB210C1(GET_HASH_KEY("TRAINS3"), 2, 1);
	VEHICLE::SET_TRAIN_SPEED(uLocal_602[0], 0f);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_602[0], 0f);
	func_220(iLocal_598, 5f);
	iVar0 = 2054;
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
	if (func_215(8192))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_623, 0, iVar0 | 8, -1, 0, 0, -1);
	}
	else
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_623, 0, iVar0, -1, 0, 0, -1);
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
	TASK::TASK_PERFORM_SEQUENCE(Local_65[0 /*75*/], iLocal_613);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
	func_221(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
	func_221(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
	func_64(4194304);
	iLocal_626 = 0;
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam0 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam3);
		}
	}
}

int func_71(char* sParam0, bool bParam1)
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

void func_72(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_9() != iParam9)
	{
		func_222(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_223(Global_1392626[iParam0 /*32*/].f_3, Var0, Var4, iParam9, iParam10);
}

void func_73(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (iParam1 == 1)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

bool func_74(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (!func_224(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_225(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_226(iParam0, bParam2);
	iVar2 = 0;
	if (func_208(iParam0, 0, 0) == 0)
	{
		if (func_227(iParam0))
		{
			iVar5 = func_228(iParam0);
			iVar6 = func_229(iVar5);
			iVar7 = func_230(iVar6) + 1;
			func_231(iVar5);
			if (func_232(38))
			{
				func_233(483, 0);
			}
			else
			{
				func_233(482, 0);
			}
			if (iVar7 == func_234(iVar6))
			{
				func_74(func_235(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_236() && func_237(4))
				{
					if (func_236() && (func_238(38) || func_232(38)))
					{
						func_240(38, func_235(iVar6), 0, 0, func_239(), 0, -1, 0);
						func_241(2);
					}
					else
					{
						func_240(38, func_235(iVar6), 0, 0, func_239(), 0, -1, 0);
						func_241(1);
					}
				}
			}
			else if (func_236() && func_237(4))
			{
				if (func_236() && (func_238(38) || func_232(38)))
				{
					func_240(38, 0, 0, 0, func_239(), 0, -1, 0);
					func_241(2);
				}
				else
				{
					func_240(38, 0, 0, 0, func_239(), 0, -1, 0);
					func_241(1);
				}
			}
			if (func_236() && func_237(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_236() && (func_238(38) || func_232(38)))
					{
						func_242(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_242(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_209(iParam0) == GET_HASH_KEY("CLOTHING"))
	{
		if ((!func_243(iParam0, 866047851) && !func_243(iParam0, -1979000645)) && !func_243(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_244(iParam0, 8388608) && !func_245(28))
	{
		func_246(28);
	}
	if (!bVar3)
	{
		if (func_243(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_247(iParam0) == -1447088266)
			{
				iVar1 = func_249(func_248(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_250() == -1)
					{
						func_251(iVar1);
					}
					if (func_212(0) && func_252(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_253(iParam0, iVar0, iParam5);
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
					if (func_250() == -1)
					{
						func_251(iParam0);
					}
					if (func_212(0) && func_252(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_253(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_209(iParam0) == GET_HASH_KEY("WEAPON"))
		{
			if (!func_254(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_209(iParam0) == GET_HASH_KEY("AMMO") && func_255(iParam0))
		{
			if (!func_256(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_243(iParam0, 866047851))
		{
			func_257(iParam0);
		}
		else if (func_243(iParam0, 2000026003))
		{
			func_258(iParam0);
		}
		else if (func_243(iParam0, -103750053))
		{
			func_260(func_259(GET_HASH_KEY("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == GET_HASH_KEY("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_260(func_261(GET_HASH_KEY("COLLECTED"), GET_HASH_KEY("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_243(iParam0, -121341956) && !func_243(iParam0, 606799272))
		{
			if (iParam0 != GET_HASH_KEY("WEAPON_KIT_DETECTOR") && iParam0 != GET_HASH_KEY("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_262(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_233(498, 0);
				}
			}
			if (func_243(iParam0, -2017733358) || func_243(iParam0, -1369131378))
			{
				func_263(iParam0);
			}
		}
		else if (func_243(iParam0, -136654233))
		{
			if (func_243(iParam0, -1021472396))
			{
			}
		}
		else if (func_243(iParam0, -1466706512) && func_243(iParam0, 1147021565))
		{
			func_233(484, 0);
		}
		else if (func_243(iParam0, 1147021565) && func_243(iParam0, -524514947))
		{
		}
		else if (func_243(iParam0, 554195525))
		{
		}
		else if (func_243(iParam0, 589988438))
		{
			if (func_264())
			{
				func_265(GET_HASH_KEY("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_243(iParam0, 787083290) && func_243(iParam0, 949916894))
		{
			func_266(iParam0);
		}
		else if (func_243(iParam0, -1718133314))
		{
			func_267(iParam0);
		}
		else if (func_243(iParam0, -1738650224))
		{
			func_268(iParam0);
		}
		else if (func_243(iParam0, -1112814642) && func_243(iParam0, 949916894))
		{
			func_269(iParam0);
		}
		else if (iParam0 == GET_HASH_KEY("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_243(iParam0, 1841149704))
		{
			func_270();
		}
		else if (func_243(iParam0, 606799272))
		{
			func_271(iParam0, iParam1);
			func_272(iParam0);
		}
		else if (func_243(iParam0, -1112814642) && func_243(iParam0, -1697809989))
		{
			func_273(iParam0, 0, 0, 0);
		}
		else if (func_243(iParam0, -2017733358) || func_243(iParam0, -1369131378))
		{
			func_263(iParam0);
		}
		else if (func_243(iParam0, -1921346699))
		{
			if (func_250() != -1)
			{
				return false;
			}
			func_274(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_243(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_206(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_74(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_206(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_74(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_206(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_74(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_206(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_74(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_206(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_74(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case GET_HASH_KEY("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_206(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_74(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_243(iParam0, -839724752) && func_244(iParam0, 4))
		{
			if (!func_232(42))
			{
				func_275(iParam0);
			}
		}
		else if (func_243(iParam0, 1399091007))
		{
			func_276(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_243(iParam0, 1248798204))
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
				func_74(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_246(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_277(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_278(&iVar9, 0))
				{
					func_252(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case GET_HASH_KEY("UPGRADE_BANDOLIER"):
				if (func_250() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_277(PLAYER::PLAYER_PED_ID(), GET_HASH_KEY("UPGRADE_BANDOLIER"), 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case GET_HASH_KEY("WEAPON_KIT_BINOCULARS"):
				break;
			case GET_HASH_KEY("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_233(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_279();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_280();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_281();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_282();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_283();
				break;
			case GET_HASH_KEY("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_01"):
				func_284(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_01"), 0);
				func_285(499813453, 0);
				func_286(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_02"):
				func_284(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_02"), 0);
				func_285(499813453, 0);
				func_286(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_03"):
				func_284(499813453, GET_HASH_KEY("TREASURE_HUNT_LOOT_03"), 0);
				func_285(499813453, 0);
				func_286(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_04"):
				func_284(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_05"), 0);
				func_285(666607663, 0);
				func_287(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_05"):
				func_284(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_06"), 0);
				func_285(666607663, 0);
				func_287(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_06"):
				func_284(666607663, GET_HASH_KEY("TREASURE_HUNT_LOOT_07"), 0);
				func_285(666607663, 0);
				func_287(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_07"):
				func_284(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_09"), 0);
				func_285(-220219788, 0);
				func_288(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_08"):
				func_284(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_10"), 0);
				func_285(-220219788, 0);
				func_288(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_09"):
				func_284(-220219788, GET_HASH_KEY("TREASURE_HUNT_LOOT_11"), 0);
				func_285(-220219788, 0);
				func_288(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_10"):
				func_284(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_13"), 0);
				func_285(218622660, 0);
				func_289(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_11"):
				func_284(218622660, GET_HASH_KEY("TREASURE_HUNT_LOOT_14"), 0);
				func_285(218622660, 0);
				func_289(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_13"):
				func_284(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_16"), 0);
				func_285(390004462, 0);
				func_290(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_14"):
				func_284(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_17"), 0);
				func_285(390004462, 0);
				func_290(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_15"):
				func_284(390004462, GET_HASH_KEY("TREASURE_HUNT_LOOT_18"), 0);
				func_285(390004462, 0);
				func_290(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_16"):
				func_284(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_20"), 0);
				func_285(6410548, 0);
				func_291(1);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_17"):
				func_284(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_21"), 0);
				func_285(6410548, 0);
				func_291(2);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_18"):
				func_284(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_22"), 0);
				func_285(6410548, 0);
				func_291(4);
				break;
			case GET_HASH_KEY("DOCUMENT_TREASURE_MAP_19"):
				func_284(6410548, GET_HASH_KEY("TREASURE_HUNT_LOOT_23"), 0);
				func_285(6410548, 0);
				func_291(8);
				break;
			case GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM"):
				func_293(242, func_292(GET_HASH_KEY("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER"):
				func_293(240, func_292(GET_HASH_KEY("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT"):
				func_293(241, func_292(GET_HASH_KEY("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MEDICINE"):
			case GET_HASH_KEY("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_294(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_294(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_294(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case GET_HASH_KEY("CONSUMABLE_TONIC"):
			case GET_HASH_KEY("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_294(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_294(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case GET_HASH_KEY("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_294(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_TONIC"):
				func_233(488, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_HAIR_GREASE"):
				func_233(491, 0);
				break;
			case GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX"):
				func_233(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_74(func_295(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_74(func_296(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_245(1))
				{
					func_233(487, 0);
				}
				break;
			case GET_HASH_KEY("KIT_GUN_OIL"):
				func_233(486, 0);
				break;
			case GET_HASH_KEY("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_250() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case GET_HASH_KEY("UPGRADE_UPG_COFFEE_KIT"):
				func_233(496, 0);
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
		func_297(&iVar10);
		if (!func_298(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_212(0))
		{
			return true;
		}
		if (func_209(iParam0) == GET_HASH_KEY("CLOTHING"))
		{
			func_299(iParam0);
		}
		if (func_243(iParam0, -1979000645))
		{
			func_300(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_212(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_74(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_301(iVar2, 0);
		}
	}
	Var35 = { func_207(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_302(iParam0);
	if (fParam6 > 0f)
	{
		if (func_243(iParam0, -839724752))
		{
			func_303(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_205(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

bool func_75(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_193(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		func_80(1, 1, 1);
		func_304(cParam0);
		if (!func_305(cParam0))
		{
			return false;
		}
		if (func_306())
		{
			func_307(1);
			return false;
		}
	}
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_76(char* sParam0)
{
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && ANIMSCENE::_0x5D7BFDA2290B4E39(sParam0));
}

void func_77(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_308(uParam1, 32768))
	{
		Var0 = { func_309(uParam0) };
		func_310(uParam0, &Var0);
		if (func_308(uParam1, 131072))
		{
			func_311(uParam0, 268435456);
			if (func_160(uParam0->f_289))
			{
				uParam0->f_289 = { func_312(uParam1, uParam1->f_1450) };
			}
			if (func_160(uParam0->f_286))
			{
				uParam0->f_286 = { func_312(uParam1, uParam1->f_1450) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_286, &(uParam0->f_286.f_2), false);
				uParam0->f_286.f_2 = (uParam0->f_286.f_2 + 0.5f);
			}
		}
		if (func_308(uParam1, 268435456))
		{
			func_313(&(uParam0->f_284), 16384);
		}
	}
	else if (func_308(uParam1, 524288))
	{
		func_311(uParam0, 67108864);
		func_314(uParam1, 524288);
	}
	if (func_315(uParam1, 128))
	{
		func_311(uParam0, 32);
	}
	if (uParam1->f_1669 != 0)
	{
		uParam0->f_296 = uParam1->f_1669;
		if (uParam1->f_1450 >= 0 && func_316(&(uParam1->f_782[uParam1->f_1450 /*41*/]), 256))
		{
			func_313(&(uParam0->f_284), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1458)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_297), &(uParam1->f_1458), 16);
	}
}

int func_78(char[4] cParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_317(cVar0, &(cParam0->f_32), cParam0);
}

void func_79(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, 0, 51, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, -1, -1f, -1f, -1f);
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (iParam0 == 1 && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	if (iParam2 == 1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	}
	if (iParam1 == 1)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_81(char[4] cParam0, bool bParam1)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(cParam0->f_32.f_228))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(cParam0->f_32.f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_FINISHED(cParam0->f_32.f_228, false))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(cParam0->f_32.f_228, false))
					{
						ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(cParam0->f_32.f_228);
					}
					else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(cParam0->f_32.f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_32.f_228);
					}
				}
			}
		}
	}
	if (bParam1)
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 32);
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
	if (func_76(cParam0->f_346))
	{
		func_318(&(cParam0->f_32));
	}
	else
	{
		func_319(cParam0);
	}
	func_320(&(cParam0->f_32));
	StringCopy(&(cParam0->f_348), "", 32);
}

int func_82(char[4] cParam0)
{
	return 9;
}

bool func_83(char[4] cParam0)
{
	return false;
}

void func_84(char[4] cParam0)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
}

void func_85(char[4] cParam0)
{
}

int func_86(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	struct<4> Var8;

	func_321(iLocal_55, fLocal_56);
	if (func_322(Global_35, iLocal_595, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	if (iLocal_14 != 7)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
		}
	}
	if (iLocal_14 >= 7)
	{
		if (func_65(Local_65[3 /*75*/], 0) && !func_68(Local_65[3 /*75*/], 518218985))
		{
			if (func_323(Global_35, Local_65[3 /*75*/], 1, 1) < 30f && PED::IS_PED_SHOOTING(Global_35))
			{
				TASK::TASK_FLEE_PED(Local_65[3 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
		}
	}
	if (iLocal_14 >= 8)
	{
		if (func_324(&uLocal_577, 2f))
		{
			func_325(&uLocal_577);
			if (func_65(Local_65[0 /*75*/], 0) && ENTITY::GET_ENTITY_HEALTH(Local_65[0 /*75*/]) > iLocal_634)
			{
				ENTITY::SET_ENTITY_HEALTH(Local_65[0 /*75*/], iLocal_634, 0);
			}
		}
	}
	if (func_326(8) && !func_326(262144))
	{
		if (!func_327("LSHRC_TIEDUP"))
		{
			func_307(0);
			func_328(&(cParam0->f_2106), "LSHRC_TAKE_MAP", 0);
			func_329(262144);
		}
	}
	if (iLocal_14 >= 8)
	{
		func_330(cParam0);
	}
	if (func_206(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!func_215(1048576))
		{
			func_331("HELP_SATCHEL_HSC", -1, 0, 0, 0, 1);
			func_332("OBJ_VIEW_MAP_HSC");
			func_94("OBJ_VIEW_MAP_HSC", -1, 0, 1, 0, 0, -1, -1, 0);
			if (MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
			{
				MAP::REMOVE_BLIP(&(Local_65[0 /*75*/].f_1));
			}
			ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_65[0 /*75*/], 2, true);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_65[0 /*75*/], 3, true);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_65[0 /*75*/], 7, true);
			func_333(Local_65[0 /*75*/]);
			AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", false);
			func_63(8);
			func_64(1048576);
			func_334(32768);
		}
	}
	switch (func_214())
	{
		case 1:
			func_63(2);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar2 = iVar0;
				iVar3 = iVar0;
				if (!Local_65[iVar2 /*75*/].f_6 && iVar2 != 2)
				{
					iVar1 = func_335(Local_65[iVar2 /*75*/]);
					if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
					{
						if (Local_65[iVar2 /*75*/] == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))
						{
							if (func_196(&(Local_65[iVar2 /*75*/]), &(Local_65[iVar2 /*75*/].f_36), 8f, &(Local_65[iVar2 /*75*/].f_57), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) == 0)
							{
								func_336(&(uLocal_18[iVar3]), 1, 1);
								Local_65[iVar2 /*75*/].f_6 = 1;
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 297, false);
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 130, false);
								MISC::_0xE98D55C5983F2509(Local_65[iVar2 /*75*/]);
								switch (iVar2)
								{
									case 0:
										break;
									case 1:
										iLocal_626 = 1;
										bLocal_632 = func_337();
										PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.5f);
										func_63(5);
										break;
								}
							}
						}
						else
						{
							func_336(&(uLocal_18[iVar3]), 1, 1);
						}
					}
					else
					{
						func_336(&(uLocal_18[iVar3]), 1, 1);
					}
				}
				iVar0++;
			}
			break;
		case 5:
			func_338(cParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[1 /*16*/]))
			{
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_369[1 /*16*/], "ChickMatthews"))
				{
					func_339(1);
				}
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_65[1 /*75*/], 0))
			{
			}
			MISC::_0xE98D55C5983F2509(Local_65[0 /*75*/]);
			MISC::_0xE98D55C5983F2509(Local_65[1 /*75*/]);
			func_336(&(uLocal_18[0]), 1, 1);
			func_336(&(uLocal_18[1]), 1, 1);
			if (!func_215(32768))
			{
				func_71("LSHSC_START", 0);
				func_64(32768);
			}
			if (iLocal_626 == 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
				func_339(1);
				iLocal_24 = 11;
				if (bLocal_632)
				{
					TASK::TASK_FLEE_PED(Local_65[0 /*75*/], Global_35, 3, 1, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_22 = 1;
					iLocal_626 = 0;
				}
				else if (func_340())
				{
					PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
					PED::SET_PED_ONTO_MOUNT(Local_65[0 /*75*/], Local_65[2 /*75*/], -1, true);
					func_69();
				}
			}
			if (func_215(4194304))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 3)
					{
						if (func_341())
						{
							func_334(4194304);
						}
					}
				}
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			if (func_215(8192))
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_623, 11, &uLocal_643);
				if (!bLocal_624)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_65[0 /*75*/], false, true);
					bLocal_624 = true;
				}
				PED::SET_PED_ONTO_MOUNT(Local_65[0 /*75*/], Local_65[2 /*75*/], -1, true);
			}
			if (bLocal_629)
			{
				if (!func_49(&uLocal_547))
				{
					func_50(&uLocal_547, 0);
				}
				else if (func_342(&uLocal_547) >= 1f)
				{
					if (!func_215(268435456))
					{
						if (!func_68(Global_35, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_65[0 /*75*/], 0, 100000f, -1f, -1f);
						}
						else
						{
							func_64(268435456);
						}
					}
				}
			}
			if (func_327("LSHRC_IG2_ENT"))
			{
				if ((CAM::IS_GAMEPLAY_HINT_ACTIVE() && ENTITY::IS_ENTITY_ON_SCREEN(Local_65[0 /*75*/])) && (PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_LOOK_LR")) || PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_LOOK_UD"))))
				{
					func_343();
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[3 /*16*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[3 /*16*/], false))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_369[3 /*16*/]) > 4.2f)
					{
						func_344(Local_65[0 /*75*/], 3f, 1048576);
						bLocal_629 = true;
					}
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_IG2_ENT") == 0)
				{
					func_50(&uLocal_535, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
					bLocal_625 = true;
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_IG2_ENT") == 1)
				{
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_IG2_ENT") >= 2)
				{
					if (bLocal_625)
					{
						if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
						{
							func_70(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
							MAP::BLIP_ADD_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
						}
						if (MAP::DOES_BLIP_EXIST(Local_65[1 /*75*/].f_1))
						{
							MAP::REMOVE_BLIP(&(Local_65[1 /*75*/].f_1));
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4992, false);
						bLocal_625 = false;
					}
					else
					{
						func_50(&uLocal_532, 0);
					}
				}
			}
			else
			{
				if (!bLocal_632)
				{
					if ((func_68(Local_65[0 /*75*/], 242628503) && PED::IS_PED_FULLY_ON_MOUNT(Local_65[0 /*75*/], true)) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[3 /*16*/], false))
					{
						iVar4 = 1;
					}
				}
				else if (func_68(Local_65[0 /*75*/], 518218985) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[3 /*16*/], false))
				{
					iVar4 = 1;
				}
				if (iVar4 == 1)
				{
					if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
					{
						func_70(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
						MAP::BLIP_ADD_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
					}
					if (MAP::DOES_BLIP_EXIST(Local_65[1 /*75*/].f_1))
					{
						MAP::REMOVE_BLIP(&(Local_65[1 /*75*/].f_1));
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4992, false);
					bLocal_625 = false;
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						PLAYER::_0x77B0B6D17A3AC9AA(PLAYER::GET_PLAYER_INDEX(), 1f);
					}
					else if (func_65(iLocal_614, 0))
					{
						PED::_RESTORE_PED_STAMINA(iLocal_614, 100f);
					}
					func_63(7);
				}
			}
			break;
		case 7:
			if (!func_326(131072))
			{
				if (!func_49(&uLocal_586))
				{
					func_50(&uLocal_586, 0);
					AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", true);
				}
				else if (func_324(&uLocal_586, 20f))
				{
					func_325(&uLocal_586);
					AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", false);
					func_329(131072);
				}
			}
			if (!func_215(512))
			{
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CHICK_MATTHEWS"));
				iLocal_615 = MAP::_0x3E593DF9C2962EC6(-936216634);
				MAP::SET_BLIP_SPRITE(iLocal_615, GET_HASH_KEY("BLIP_AMBIENT_LOAN_SHARK"), true);
				MAP::_0x97F6F158CC5B5CA2(Local_65[0 /*75*/], iLocal_615);
				func_345(cParam0, "OBJ_CHASE_HSC", ENTITY::GET_ENTITY_COORDS(Local_65[0 /*75*/], true, false));
				func_346(Local_65[0 /*75*/]);
				func_347(Local_65[0 /*75*/], GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_65[0 /*75*/], 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_65[0 /*75*/], 3, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(Local_65[0 /*75*/], 7, false);
				func_348(Local_65[0 /*75*/], GET_HASH_KEY("HONOR_EVENT_LOOT_INNOCENT"));
				func_50(&uLocal_583, 0);
				func_64(512);
			}
			else if (func_349(&uLocal_583, 3f))
			{
				func_94("OBJ_CHASE_HSC", 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.5f);
			bVar5 = PED::IS_PED_HOGTIED(Local_65[0 /*75*/]);
			bVar6 = ENTITY::IS_ENTITY_DEAD(Local_65[0 /*75*/]);
			if (bVar5 || bVar6)
			{
				if (!func_215(16777216))
				{
					func_71("LSHSC_END", 0);
					func_64(16777216);
				}
			}
			if (bVar6)
			{
				if (!func_326(4096))
				{
					func_50(&uLocal_565, 0);
					func_307(0);
					if (func_324(&uLocal_565, 2f))
					{
						func_328(&(cParam0->f_2106), "LSHRC_KILL_HAND", 0);
						func_329(4096);
					}
				}
			}
			if (!func_326(2))
			{
				if (bVar5)
				{
					if (!func_49(&uLocal_562))
					{
						func_50(&uLocal_562, 1);
					}
				}
				else if (func_49(&uLocal_562))
				{
					func_325(&uLocal_562);
				}
			}
			if (bVar5 && !bVar6)
			{
				if (func_324(&uLocal_562, 3f))
				{
					if (!func_326(2))
					{
						func_328(&(cParam0->f_2106), "LSHRC_TIEDUP", 0);
						func_329(2);
						func_345(cParam0, "OBJ_COLLECT_HSC", ENTITY::GET_ENTITY_COORDS(Local_65[0 /*75*/], true, false));
						TASK::CLEAR_PED_TASKS(Local_65[0 /*75*/], true, false);
						func_325(&uLocal_562);
					}
				}
				if (func_326(2))
				{
					if ((!func_326(4) && func_327("LSHRC_TIEDUP")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_TIEDUP") == 4)
					{
						func_166(&uLocal_550);
						func_50(&uLocal_550, 0);
						func_329(4);
					}
					if ((func_326(4) && !func_327("LSHRC_TIEDUP")) && func_349(&uLocal_550, 8f))
					{
						func_328(&(cParam0->f_2106), "LSHRC_REP_MAP", 0);
					}
				}
				if (!func_326(8))
				{
					if (func_350(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_351(Global_35)) == Local_65[0 /*75*/])
					{
						if (func_327("LSHRC_TIEDUP"))
						{
							func_307(1);
						}
						func_329(8);
					}
				}
				if (func_352(Global_35) && func_353(Global_35, 3) == Local_65[0 /*75*/])
				{
					if (func_327("LSHRC_TIEDUP") || func_327("LSHRC_REP_MAP"))
					{
						func_307(1);
					}
				}
			}
			func_354();
			func_355(&(Local_65[1 /*75*/]), cParam0);
			fLocal_635 = func_323(Local_65[0 /*75*/], Global_35, 1, 1);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (!func_215(65536))
				{
					func_71("LSHSC_CHASE", 0);
					func_331("HELP_CAPTURE", 10000, 0, 0, 0, 1);
					func_64(65536);
				}
			}
			if (!func_215(64))
			{
				if (!func_356())
				{
					if (PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
					{
						func_328(&(cParam0->f_2106), "LSHRC_RHESCAPE", 0);
					}
					func_64(64);
				}
			}
			if (func_215(64) && !func_215(128))
			{
				if ((!func_327("LSHRC_RHESCAPE") && !func_327("LSHRC_IG2_ENT")) && !func_327("LSHRC_DECY_FLEE"))
				{
					func_328(&(cParam0->f_2106), "LSHRC_STOP_HAND", 0);
					func_64(128);
				}
			}
			if (bVar6 == 0 && PED::IS_PED_LASSOED(Local_65[0 /*75*/]))
			{
				if ((func_327("LSHRC_RHESCAPE") || func_327("LSHRC_CHASE_ELY")) || func_327("LSHRC_CHASE_LTE"))
				{
					func_307(0);
				}
			}
			if (!func_65(Local_65[0 /*75*/], 0))
			{
				if (!func_215(1048576))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
					{
						func_70(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
						MAP::BLIP_ADD_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
					}
				}
				else
				{
					func_357(&(Local_65[0 /*75*/].f_1));
				}
				if (!func_215(4096))
				{
					func_345(cParam0, "OBJ_SEARCH_HSC", 0f, 0f, 0f);
					func_64(4096);
				}
			}
			switch (iLocal_22)
			{
				case 0:
					if (func_65(Local_65[0 /*75*/], 0) && func_65(Local_65[2 /*75*/], 0))
					{
						if (func_68(Local_65[0 /*75*/], 242628503) || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], sLocal_623))
						{
							func_358();
							func_359();
						}
						else if (!func_326(65536))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[0 /*75*/], 2.5f);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[2 /*75*/], 2.5f);
							if (PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_65[0 /*75*/], false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_65[2 /*75*/], false, false);
								TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 8448, 2.5f, 0);
							}
							func_329(65536);
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_65[0 /*75*/], sLocal_623))
					{
						switch (iLocal_57)
						{
							case 0:
								iVar7 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]);
								if (iVar7 > 32 && func_360(Global_35, Local_65[0 /*75*/]) < 40f)
								{
									iLocal_57 = 1;
								}
								break;
							case 1:
								if (func_327("LSHRC_STOP_HAND"))
								{
									func_50(&uLocal_61, 1);
								}
								if ((!func_49(&uLocal_61) || func_324(&uLocal_61, 4f)) && !func_356())
								{
									if (iLocal_58 < 4)
									{
										func_328(&(cParam0->f_2106), "LSHRC_CHASE", 0);
										iLocal_58++;
										func_166(&uLocal_61);
										func_50(&uLocal_61, 0);
										iLocal_57 = 2;
									}
								}
								break;
							case 2:
								if (func_324(&uLocal_61, 3f) && !func_356())
								{
									iLocal_57 = 3;
								}
								break;
							case 3:
								if (!func_356())
								{
									iVar7 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]);
									if (iVar7 < 300)
									{
										if (iLocal_59 < 3)
										{
											func_328(&(cParam0->f_2106), "LSHRC_CHASE_ELY", 0);
											iLocal_59++;
										}
									}
									else if (iLocal_60 < 3)
									{
										func_328(&(cParam0->f_2106), "LSHRC_CHASE_LTE", 0);
										iLocal_60++;
									}
									func_166(&uLocal_61);
									func_50(&uLocal_61, 0);
									iLocal_57 = 4;
								}
								break;
							case 4:
								if (func_324(&uLocal_61, 8f))
								{
									func_325(&uLocal_61);
									iLocal_57 = 0;
								}
								break;
						}
					}
					if (func_68(Local_65[0 /*75*/], 518218985))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[0 /*75*/], 1.75f);
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_65[2 /*75*/], 1.75f);
					}
					if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 11)
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_65[0 /*75*/], true);
					}
					if (!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]) && func_65(Local_65[2 /*75*/], 0))
					{
						if (!func_68(Local_65[2 /*75*/], 518218985))
						{
							TASK::TASK_SMART_FLEE_PED(Local_65[2 /*75*/], Global_35, 1000f, -1, 0, 3f, 0);
						}
					}
					if (!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
					{
						if (!func_215(2097152))
						{
							TASK::CLEAR_PED_TASKS(Local_65[0 /*75*/], true, false);
							func_64(2097152);
						}
					}
					if (!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]))
					{
						func_71("LSHSC_OFF_HORSE", 0);
						func_361(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], 0);
						PED::SET_PED_CAN_BE_TARGETTED(Local_65[0 /*75*/], true);
						iLocal_22 = 1;
					}
					break;
				case 1:
					if (func_65(Local_65[0 /*75*/], 0))
					{
						if (!func_215(131072))
						{
							func_362(12, 4, sLocal_619, 64);
							if (((((((((!PED::IS_PED_ON_MOUNT(Local_65[0 /*75*/]) && !PED::IS_PED_LASSOED(Local_65[0 /*75*/])) && !PED::IS_PED_HOGTIED(Local_65[0 /*75*/])) && !PED::IS_PED_RAGDOLL(Local_65[0 /*75*/])) && !TASK::IS_PED_GETTING_UP(Local_65[0 /*75*/])) && !func_350(Global_35)) && !func_363(Global_35)) && !PED::GET_PED_IS_GRAPPLED(Global_35)) && !PED::GET_PED_IS_GRAPPLED(Local_65[0 /*75*/])) && !func_356())
							{
								if (!func_49(&uLocal_559) || func_364(&uLocal_559) > 10f)
								{
									if (fLocal_635 < 5f && !PED::IS_PED_ON_MOUNT(Global_35))
									{
										if (!func_215(16777216))
										{
											func_71("LSHSC_END", 0);
											func_64(16777216);
										}
										iLocal_23 = 0;
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
										TASK::TASK_LOOK_AT_ENTITY(Local_65[0 /*75*/], Global_35, -1, 0, 51, 0);
										func_64(131072);
									}
									else if (func_65(Local_65[0 /*75*/], 0))
									{
										if (!func_68(Local_65[0 /*75*/], 518218985))
										{
											TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 0, 1.5f, 0);
										}
									}
								}
							}
						}
						else if (func_365(4, cParam0, &(Local_65[0 /*75*/])))
						{
							if (func_65(Local_65[0 /*75*/], 0))
							{
								if (!func_68(Local_65[0 /*75*/], 518218985))
								{
									TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 0, 2f, 0);
								}
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						}
					}
					break;
			}
			break;
		case 8:
			if (!func_215(32768))
			{
				func_72(*cParam0, func_41(1), func_41(2), 1, 2);
				func_64(32768);
			}
			if (func_366(Global_1392626[7 /*32*/].f_3) == 1)
			{
				UIFEED::UI_FEED_CLEAR_CHANNEL(1, 1, 0);
				func_89();
				func_367("OBJ_VIEW_MAP_HSC", 1);
				func_63(9);
			}
			if (func_368(Local_65[0 /*75*/], 0))
			{
				if (!func_326(8) && !func_327("LSHRC_KILL_HAND"))
				{
					func_307(0);
					func_328(&(cParam0->f_2106), "LSHRC_DEAD", 0);
					func_329(8);
					func_329(262144);
				}
			}
			break;
		case 9:
			func_50(&uLocal_571, 0);
			if (!func_326(128) && func_324(&uLocal_571, 2f))
			{
				func_345(cParam0, "OBJ_GO_DEBT_HSC2", vLocal_647);
				func_369(&iLocal_651, vLocal_647, 408396114, 0, 0, 0);
				func_329(128);
			}
			if (func_326(128) && !func_326(32768))
			{
				if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
				{
					func_94("OBJ_GO_DEBT_HSC2", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_329(32768);
				}
			}
			if (func_370(Global_35, vLocal_647, 1) < 30f)
			{
				func_345(cParam0, "OBJ_LOCATE_DEBT_HSC2", vLocal_647);
				func_357(&iLocal_651);
				func_369(&iLocal_651, vLocal_647, -308585968, 0, 1, 30f);
				func_63(10);
			}
			break;
		case 10:
			if (!func_326(256))
			{
				if (!func_371())
				{
					func_331("HELP_DEBT_HSC2", 10000, 0, 0, 0, 1);
					func_329(256);
				}
			}
			func_372();
			if (iLocal_64 > 0)
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Local_369[7 /*16*/], "CASH", &Var8, true, "pbl_Action", 2))
				{
					func_177(&iLocal_650, GET_HASH_KEY("P_CS_BILLSTACK01X"), Var8, Var8.f_3, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_650))
			{
				if (func_156(Global_35, vLocal_647, 15f, 1, 1) && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_35, vLocal_647, 17) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_597, true, 0)))
				{
					iLocal_29 = 0;
					iLocal_30 = 0;
					iLocal_64 = 0;
					func_357(&iLocal_651);
					iLocal_651 = MAP::BLIP_ADD_FOR_COORDS(408396114, vLocal_647);
					UIFEED::UI_FEED_CLEAR_CHANNEL(1, 1, 0);
					func_63(11);
				}
			}
			break;
		case 11:
			func_372();
			if (!func_326(512))
			{
				func_345(cParam0, "OBJ_TREE_DEBT_HSC2", vLocal_647);
				func_329(512);
			}
			else
			{
				func_373(cParam0, "OBJ_TREE_DEBT_HSC2", 0f, 0f, 0f, 5, 5f);
			}
			if (!func_326(1024))
			{
				if (func_374(iLocal_652))
				{
					func_375(iLocal_652, GET_HASH_KEY("DEBT_CXT2_HSC"), 0, 1);
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_650, 2.5f, 1, 1, GET_HASH_KEY("DEBT_CXT2_HSC"), "DEBT_CXT2_HSC", 0);
					if (func_376(iLocal_652, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_650, false);
						func_336(&iLocal_652, 1, 1);
						func_329(1024);
						iLocal_64 = 2;
					}
				}
				else
				{
					iLocal_652 = func_377("DEBT_CXT1_HSC", GET_HASH_KEY("INPUT_CONTEXT_Y"), ENTITY::GET_ENTITY_COORDS(iLocal_650, true, false), 2.5f, 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, GET_HASH_KEY("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (func_206(GET_HASH_KEY("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 1, 0))
			{
				func_63(12);
			}
			break;
		case 12:
			return 9;
	}
	return 8;
}

void func_87(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_378(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_379(1))
	{
		func_380(1);
	}
	func_115(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_381();
		func_382(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_383(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_384(Global_1392626[iParam0 /*32*/].f_7);
	}
}

void func_88(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_385(0))
	{
		if (func_386(0))
		{
			func_387(0);
		}
	}
	if (func_385(1))
	{
		if (func_386(1))
		{
			func_387(1);
		}
	}
}

void func_89()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_90(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_250() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_388(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_389();
		Global_1898077.f_9 = func_390(Global_1894899.f_2);
		func_391(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_92(int iParam0)
{
	return func_93(Global_1392626[iParam0 /*32*/].f_8, 64);
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_94(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_392(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_393(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_392(sVar0, iParam1, 0, 0, 1, 1);
}

void func_95()
{
	int iVar0;

	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_96()
{
	Global_1572864.f_8 = -1;
	Global_1572864.f_9 = -1;
	Global_1572864.f_10 = -1;
	func_222(0);
	func_394(0);
	func_395(0);
	func_396(0);
	func_397(0);
	func_398(1f);
}

void func_97(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
		return;
	}
	if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
		return;
	}
	if (Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		func_399(0);
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_TRIGGER_MISSION_FAILED_CAM();
	}
}

void func_98(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_99()
{
	return false;
}

void func_100(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_400(Global_1347343.f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_98(&(Global_1347343.f_11), 64);
	}
	if (bParam4)
	{
		func_98(&(Global_1347343.f_11), 16384);
	}
	if (func_401() >= 2)
	{
		if (!func_400(Global_1347343.f_11, 16384))
		{
			func_98(&(Global_1347343.f_11), 8);
		}
		func_398(0.88f);
	}
	StringCopy(&(Global_1347343.f_3), sParam2, 64);
	Global_1347343.f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343.f_1 = iParam1;
	func_182(&Global_1935630, 2048);
	func_402(bParam5);
}

void func_101(int iParam0)
{
	if (!func_378(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	func_115(iParam0);
	func_129(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_381();
		func_382(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	Global_40.f_9052.f_1[iParam0] = func_381();
	func_382(&(Global_40.f_9052.f_1[iParam0]), 0, 0, 2, 0, 0, 0, 0);
	func_403(Global_1392626[iParam0 /*32*/].f_3);
	func_404(Global_1392626[iParam0 /*32*/].f_3, 0);
}

void func_102(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_155(iParam0, 4))
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
	if (func_155(iParam0, 4))
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
			func_37(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
		}
	}
	else if (fVar1 <= 25f)
	{
		if (Global_1392626[iParam0 /*32*/].f_10 & 1024 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_ANTAGONIZE", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_331(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 4096 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_331(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 2048 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_331(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 16384 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_331(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & 8192 != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_331(sVar3, 10000, 0, 0, 0, 1);
		}
		func_29(&(Global_1392626[iParam0 /*32*/].f_9), 8192);
	}
}

bool func_103(int iParam0, bool bParam1, bool bParam2)
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
		if (func_405())
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
		iVar0 = func_406(Global_1898164.f_1[0 /*5*/]);
		if (func_407(iVar0) && func_408(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_105(Global_1898164.f_1[0 /*5*/]))
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

int func_104(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_105(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_106()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
	return false;
}

float func_107(var uParam0)
{
	return 1f;
}

bool func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_409(uParam0);
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	iVar1 = func_113(uParam0);
	if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 5) || iVar1 == 4)
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (!WEAPON::_IS_WEAPON_SILENT(iVar0))
				{
					if (!func_68(Local_65[2 /*75*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_65[2 /*75*/], Global_35, 1000f, -1, 0, 3f, 0);
					}
					if (!func_68(Local_65[3 /*75*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_65[3 /*75*/], Global_35, 1000f, -1, 0, 3f, 0);
					}
				}
			}
		}
		func_357(&(Local_65[0 /*75*/].f_1));
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if ((Local_65[iVar2 /*75*/] != Local_65[3 /*75*/] && Local_65[iVar2 /*75*/] != Local_65[0 /*75*/]) && Local_65[iVar2 /*75*/] != Local_65[2 /*75*/])
			{
				if (!func_410(Local_65[iVar2 /*75*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
				{
					return false;
				}
				func_357(&(Local_65[iVar2 /*75*/].f_1));
			}
			iVar2++;
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65[3 /*75*/]));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65[0 /*75*/]));
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_65[2 /*75*/]));
		if (!func_371())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return true;
	}
	return true;
}

void func_109(int iParam0, int iParam1)
{
	if (!func_378(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_178(Global_1392626[iParam0 /*32*/].f_3) || func_179(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_411(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_115(iParam0);
	}
}

void func_110(char[4] cParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_118(&(Local_65[iVar0 /*75*/]), 1, 0, 1);
		func_357(&(Local_65[iVar0 /*75*/].f_1));
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*75*/]))
		{
			func_333(Local_65[iVar0 /*75*/]);
			TASK::CLEAR_PED_TASKS(Local_65[iVar0 /*75*/], true, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_336(&(uLocal_18[iVar0]), 1, 1);
		iVar0++;
	}
	func_412(&(Global_1392626[7 /*32*/].f_8), 256);
	func_89();
	func_413(&uLocal_599, iLocal_594, 0);
	func_414(iLocal_592);
	func_414(iLocal_593);
	func_414(iLocal_594);
	func_414(iLocal_596);
	func_414(iLocal_597);
	iVar0 = 0 + 1;
	while (iVar0 <= (10 - 1))
	{
		func_415(&(uLocal_602[iVar0]));
		iVar0++;
	}
	func_339(0);
	func_339(1);
	func_339(2);
	func_339(3);
	func_339(4);
	func_416(873);
	func_416(874);
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	if (iLocal_23 >= 10)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_650))
	{
		OBJECT::DELETE_OBJECT(&iLocal_650);
	}
	func_357(&iLocal_651);
	if (func_374(iLocal_652))
	{
		func_336(&iLocal_652, 1, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GET_HASH_KEY("P_CS_BILLSTACK01X"));
	func_339(7);
	AUDIO::SET_AUDIO_FLAG("ForceUrgentPlayerHorseSpurs", false);
}

void func_111(char[4] cParam0)
{
	if (cParam0->f_17 != 0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		MAP::DISPLAY_RADAR(true);
	}
	cParam0->f_17 = 0;
	cParam0->f_17.f_1 = 0;
	func_325(&(cParam0->f_17.f_12));
}

void func_112(char[4] cParam0)
{
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (func_65(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			func_200(&(cParam0->f_2237), 0, 0, 1, 0);
			func_417(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

int func_113(char[4] cParam0)
{
	return cParam0->f_15;
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_115(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_418(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_418(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_116(var uParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

void func_117(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_419(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_419(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::_DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_420(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_118(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 16384);
	}
	else
	{
		func_126(&(uParam0->f_1), 16384);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 256);
	}
	else
	{
		func_126(&(uParam0->f_1), 256);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 16);
	}
	else
	{
		func_125(uParam0, 67108864);
		func_125(uParam0, 16);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 128);
	}
	else
	{
		func_126(&(uParam0->f_1), 128);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 256);
	}
	else
	{
		func_125(uParam0, 256);
	}
}

void func_124(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_126(uParam0, 268435456);
	}
	else
	{
		func_125(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_126(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_125(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_126(uParam0, 536870912);
	}
	else
	{
		func_125(uParam0, 536870912);
	}
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_127()
{
	return Global_1572864.f_8;
}

int func_128(int iParam0)
{
	if (func_421(iParam0) == 6)
	{
		if (func_406(iParam0) == 0)
		{
			return func_422(iParam0);
		}
	}
	return -1;
}

void func_129(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_130(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2205), sParam1, 24);
}

void func_131(var uParam0, int iParam1)
{
	uParam0->f_12 = iParam1;
}

void func_132(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_133(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_134(&(uParam0->f_2041), VEHICLE::_0x8DF5F6A19F99F0D5(iParam1, iVar0));
		iVar0++;
	}
}

int func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_423(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_135(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_424(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_136(int iParam0)
{
	int iVar0;

	if (!func_425(iParam0))
	{
		return 0;
	}
	if (!func_427(func_426(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_428(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_428(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_428(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_428(iParam0));
	return 1;
}

void func_137(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_138(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_429(iParam0, 0, 0);
	if (func_430(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_431(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_432(iParam0, 1);
			}
			else
			{
				func_433(iParam0, 1);
			}
		}
		else
		{
			func_434(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_435())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_139(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(&(uParam0->f_1), 4);
	}
	else
	{
		func_126(&(uParam0->f_1), 4);
	}
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_126(uParam0, 8);
	}
	else
	{
		func_125(uParam0, 8);
	}
}

bool func_141(var uParam0)
{
	if (func_214() == 13)
	{
		func_357(&(Local_65[1 /*75*/].f_1));
		MISC::_0xE98D55C5983F2509(Local_65[0 /*75*/]);
		MISC::_0xE98D55C5983F2509(Local_65[1 /*75*/]);
		PED::SET_PED_CONFIG_FLAG(Local_65[1 /*75*/], 315, true);
		PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 315, true);
		if (!func_68(Local_65[0 /*75*/], 518218985))
		{
			TASK::TASK_FLEE_PED(Local_65[0 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!func_68(Local_65[1 /*75*/], 518218985))
		{
			TASK::TASK_FLEE_PED(Local_65[1 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!func_68(Local_65[2 /*75*/], 518218985))
		{
			TASK::TASK_FLEE_PED(Local_65[2 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!func_68(Local_65[3 /*75*/], 518218985))
		{
			TASK::TASK_FLEE_PED(Local_65[3 /*75*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		func_436();
		func_437();
		return true;
	}
	if (func_323(Global_35, Local_65[0 /*75*/], 1, 1) >= 250f)
	{
		if (!func_206(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_65[0 /*75*/]) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_65[0 /*75*/], 17))
			{
				return true;
			}
		}
	}
	return false;
}

void func_142(int iParam0, int iParam1)
{
	if (!func_378(iParam0))
	{
		return;
	}
	func_438(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_438(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_129(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

bool func_143(int iParam0)
{
	if (!func_439(iParam0))
	{
		return false;
	}
	return func_440(iParam0, 33554432);
}

bool func_144(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_441(func_381());
	if (func_442(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_442(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_442(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_442(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_442(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_442(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_442(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_442(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_442(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_442(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_442(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_442(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_442(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_442(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_442(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_442(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_442(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_145(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_40.f_1094 - 1))
		{
			if (Global_40.f_450[iVar0] == 92)
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (iParam0 == 3)
	{
		if (func_443(21))
		{
			return true;
		}
	}
	return false;
}

bool func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_444(iParam0, bParam1, bParam2, bParam3))
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

bool func_147(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_128(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_445(uParam2, 1, iVar0);
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
			if (func_446(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_447(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_448(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_449(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_450(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_444(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_447(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_451(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_452(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_447(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_453(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_447(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_454(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_454(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_447(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_455(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_456(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_457(uParam2, 4000))
				{
					if ((func_458(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_459(uParam2, iParam0)) && func_460(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_447(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_458(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_459(uParam2, iParam0)) && func_460(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_461(iParam0, Global_1935630.f_41))
							{
								func_462();
								*uParam3 = 2;
								func_447(iParam0, uParam2, *uParam3);
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
						if (func_461(iParam0, Global_1935630.f_41))
						{
							func_462();
							*uParam3 = 2;
							func_447(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_463(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_168() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_462();
						*uParam3 = 2;
						func_447(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_464())
					{
						if (func_461(iParam0, Global_1935630.f_42))
						{
							func_462();
							*uParam3 = 2;
							func_447(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_465(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_447(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_466(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_467(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_447(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_468(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_469(uParam2, 4000))
				{
					if (func_470(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_447(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_471(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_447(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_472(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_447(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_149(float fParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0);
	}
	if (iVar0 > 0 && fParam0 <= (50f * 50f))
	{
		return true;
	}
	return false;
}

void func_150(char[4] cParam0)
{
	func_473(&uLocal_498);
	func_474(cParam0, 4);
	func_475();
}

void func_151(int iParam0)
{
	Global_36580 = iParam0;
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_407(iVar0))
		{
			if (func_476(iVar0, 4))
			{
				if (func_476(iVar0, 16))
				{
					func_477(iVar0, 1);
				}
				if (func_476(iVar0, 8))
				{
					func_478(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_153()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_154(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (cParam0->f_14 == -1)
	{
		cParam0->f_14 = cParam0->f_13;
	}
	if (cParam0->f_14 >= 0)
	{
		iVar0 = cParam0->f_12;
		iVar1 = func_113(cParam0);
		if (iVar1 == 1 || iVar1 == 0)
		{
			iVar0 = cParam0->f_13;
		}
		if (cParam0->f_14 < iVar0)
		{
			iVar2 = (iVar0 - cParam0->f_14);
			PED::_0x7D4E70A67A651C71(iVar2);
			cParam0->f_13 = -1;
			cParam0->f_12 = -1;
		}
		if (cParam0->f_14 > 0)
		{
			PED::_0xED9582B3DA8F02B4(cParam0->f_14);
		}
	}
}

bool func_155(int iParam0, int iParam1)
{
	if (func_378(iParam0))
	{
		return (Global_40.f_9052.f_11[iParam0] && iParam1) != 0;
	}
	return false;
}

bool func_156(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_479(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_157(int iParam0)
{
	if (!func_155(iParam0, 8))
	{
		func_115(iParam0);
		func_480(iParam0);
		func_481(iParam0, 8);
	}
}

int func_158(vector3 vParam0, var uParam3)
{
	int iVar0;

	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) != 1)
	{
		func_482(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_483(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_484(0, 0);
		if (func_485(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			func_486(1, 0);
		}
	}
	else
	{
		func_486(1, 0);
	}
	func_394(0);
	func_487(0, vParam0, uParam3);
	return 1;
}

bool func_159(char[4] cParam0)
{
	if (iLocal_14 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*75*/]) && FIRE::IS_ENTITY_ON_FIRE(Local_65[0 /*75*/]))
		{
			func_488(cParam0, "FAIL_BURN_DBT");
			return true;
		}
	}
	if (cParam0->f_1 == 8)
	{
		if (iLocal_14 == 7)
		{
			if (fLocal_635 >= 150f && func_65(Local_65[0 /*75*/], 0))
			{
				func_488(cParam0, "FAIL_ESCAPED");
				return true;
			}
		}
	}
	return false;
}

bool func_160(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_161(int iParam0)
{
	if (!func_378(iParam0))
	{
		return Global_36;
	}
	return Global_1392626[iParam0 /*32*/].f_24;
}

bool func_162(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_295++;
		if (uParam0->f_295 < 10)
		{
			return (func_489(uParam0, 256) && !func_489(uParam0, 4194304));
		}
		uParam0->f_295 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_490(uParam0, sParam1);
	if (!func_489(uParam0, 64))
	{
		if (!func_160(func_491(uParam0)))
		{
			func_311(uParam0, 64);
		}
		else
		{
			vVar0 = { func_492(uParam0) };
			if (!func_160(vVar0))
			{
				func_493(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_370(Global_35, func_491(uParam0), 1);
	if (func_489(uParam0, 128) || func_489(uParam0, 256))
	{
		if ((fVar3 >= func_494(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
		{
			if (uParam0->f_313)
			{
				func_495();
				uParam0->f_313 = 0;
			}
			func_496(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_228);
			}
			func_318(uParam0);
			func_497(uParam0, 128, 1);
			func_497(uParam0, 256, 1);
			func_497(uParam0, 4096, 1);
			func_497(uParam0, 32768, 1);
			func_497(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_498(uParam0) || bParam2)
	{
		if (!func_489(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
			{
				if (func_498(uParam0) >= func_494(uParam0))
				{
				}
				Var4 = { func_499(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_500(uParam0);
				}
				Var4 = { func_499(uParam0) };
				iVar12 = 256;
				if (!func_489(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_228 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), iVar12, &Var4, false, true);
				func_501(uParam0, 0, 0, 0, 0);
				func_311(uParam0, 128);
			}
		}
	}
	if (func_489(uParam0, 128))
	{
		if (func_489(uParam0, 256) && !func_489(uParam0, 4194304))
		{
			return true;
		}
		func_502(uParam0);
		if (!uParam0->f_313)
		{
			if (func_503())
			{
				func_504(4096);
				uParam0->f_313 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
		{
			bVar13 = true;
			Var15 = { func_309(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_246[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_246[iVar14 /*9*/].f_8)
						{
							uParam0->f_246[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_489(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_228, &Var15))
				{
					if (!func_489(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_228, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_228, &Var15);
						}
						func_311(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_311(uParam0, 256);
			func_497(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_163(char[4] cParam0)
{
}

void func_164(char[4] cParam0)
{
	char cVar0[64];
	struct<4> Var8;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4) && !func_160(cParam0->f_32.f_5))
	{
		StringCopy(&cVar0, func_187(*cParam0), 64);
		StringConCat(&cVar0, ".VolRestrictCutscene", 64);
		cParam0->f_32.f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(cParam0->f_32.f_5, 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
	{
		POPULATION::_0xB56D41A694E42E86(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(cParam0->f_32.f_4, 0, 0, 0, -1, -1, 0);
		cParam0->f_2213[1] = PED::_0x4C39C95AE5DB1329(cParam0->f_32.f_4, false, 15);
		if (func_505(cParam0->f_32.f_4, &Var8))
		{
			PATHFIND::SET_ROADS_IN_AREA(Var8, Var8.f_3, 0, 1, 0);
		}
	}
	func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

bool func_165(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_166(var uParam0)
{
	func_506(uParam0, 0f);
}

bool func_167(var uParam0)
{
	return func_165(*uParam0, 2);
}

int func_168()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_169(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_170(var uParam0)
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

void func_171(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_172(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_173(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_174(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		iVar1 = iVar0;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_65[iVar1 /*75*/]))
		{
			switch (iVar1)
			{
				case 0:
					iVar2 = iLocal_366;
					break;
				case 1:
					iVar2 = iLocal_366;
					break;
				case 2:
					iVar2 = iLocal_367;
					break;
				case 3:
					iVar2 = iLocal_368;
					break;
			}
			Local_65[iVar1 /*75*/] = func_507(iVar2, Local_65[iVar1 /*75*/].f_2, Local_65[iVar1 /*75*/].f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_65[iVar1 /*75*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 186, false);
			PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 230, true);
			PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 146, true);
			if (iVar1 == 1)
			{
				PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Local_65[iVar1 /*75*/], 1108.619f, 503.5174f, 94.6871f, 3);
				PED::_SET_PED_BODY_COMPONENT(Local_65[iVar1 /*75*/], 960056836);
				PED::_UPDATE_PED_VARIATION(Local_65[iVar1 /*75*/], false, true, true, true, false);
			}
			if (iVar1 == 0)
			{
				PED::RELEASE_PED_VISIBILITY_TRACKING(Local_65[iVar1 /*75*/]);
				PED::_SET_PED_BODY_COMPONENT(Local_65[iVar1 /*75*/], 42186812);
				PED::_UPDATE_PED_VARIATION(Local_65[iVar1 /*75*/], false, true, true, true, false);
			}
			if (iVar1 == 2)
			{
				PED::_0x2EB75FB86C41F026(Local_65[2 /*75*/], 3, 1);
				PED::_0x06D26A96CA1BCA75(Local_65[2 /*75*/], 3, 0f, 0);
				PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, true);
				AITRANSPORT::_SET_TRANSPORT_CONFIG_FLAG(Local_65[2 /*75*/], 0, true);
				func_508(Local_65[2 /*75*/], 1);
			}
			if (iVar1 != 2 && iVar1 != 3)
			{
				PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(Local_65[iVar1 /*75*/], 130, true);
				MISC::REGISTER_INTERACTION_LOCKON_PROMPT(Local_65[iVar1 /*75*/], "", 8f, 0f, 0, 0f, 0f, 0, false, -1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_65[iVar1 /*75*/], true);
			}
			else
			{
				PED::SET_PED_CAN_BE_TARGETTED(Local_65[iVar1 /*75*/], false);
			}
			if (bParam3)
			{
				return false;
			}
		}
		else if (bParam3)
		{
			if (iVar1 == iParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return true;
}

void func_175(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_509(uParam0, iParam1, sParam2))
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

void func_176(bool bParam0)
{
	if (!func_68(Local_65[1 /*75*/], -1098463898))
	{
		func_510(Local_65[1 /*75*/], GET_HASH_KEY("PROP_HUMAN_SEAT_BENCH"), 1106.123f, 506.718f, 94.9074f, 200.52f, -1, !bParam0, bParam0, 0, -1082130432 /* Float: -1f */);
	}
}

bool func_177(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8)
{
	STREAMING::REQUEST_MODEL(iParam1, false);
	if (STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			if (!func_511(vParam5, 0f, 0f, 0f))
			{
				ENTITY::SET_ENTITY_ROTATION(*iParam0, vParam5, 2, true);
			}
			if (bParam8)
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
			}
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_178(int iParam0)
{
	int iVar0;

	iVar0 = func_512(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_179(int iParam0)
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
		iVar0 = func_513(iParam0);
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

void func_180(int iParam0, bool bParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	if (!func_514(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_515(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_515(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_421(iParam0), func_406(iParam0), func_422(iParam0), func_515(iParam0), Global_36);
		}
	}
	func_404(iParam0, 1);
	bParam1 = bParam1;
}

void func_181(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_105(iParam0))
	{
		return;
	}
	if (!func_179(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (bParam1)
	{
		if (func_515(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_515(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_516(func_406(iParam0));
			}
			if (func_250() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_515(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_515(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	func_517(iParam0);
	if (!func_105(func_104(0)))
	{
		func_404(iParam0, 3);
		func_518(bParam2);
		if (func_250() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_519(1);
		}
		func_520(iParam0, -1);
		if (bParam1 && !func_521(2))
		{
			func_522(&Global_0, 1024);
		}
		if (func_250() == -1)
		{
			func_523(&(Global_1347343.f_11), 536870912);
			func_524(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_525(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_526(0);
			}
		}
		if (func_250() == -1)
		{
			iVar1 = func_527(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_528();
				switch (iVar1)
				{
					case 0:
						func_529(0);
						break;
					case 1:
						func_529(1);
						break;
					case 2:
						func_529(2);
						break;
					case 3:
						func_529(3);
						break;
					case 4:
						func_529(4);
						break;
					case 5:
						func_529(5);
						break;
					case 6:
						func_529(5);
						break;
					case 7:
						func_529(7);
						break;
					case 8:
						func_529(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_406(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_529(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_406(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_529(11);
						break;
					default:
						iVar1 = func_528();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_530(0);
									break;
								case 1:
									func_530(1);
									break;
								case 2:
									func_530(2);
									break;
								case 3:
									func_530(3);
									break;
								case 4:
									func_530(4);
									break;
								case 5:
									func_530(5);
									break;
								case 6:
									func_530(5);
									break;
								case 7:
									func_530(7);
									break;
								case 8:
									func_530(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_531(1);
	}
	else
	{
		func_520(iParam0, -1);
		func_404(iParam0, 4);
	}
	func_532(iParam0, 0);
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_183(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5) || Global_1898077.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_250() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_390(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = iVar0;
	Global_1898077.f_8 = iParam0;
	Global_1898077.f_9 = iVar1;
	func_391(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
}

char* func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSEMR";
		case 1:
			return "LSHNT";
		case 2:
			return "LSCFJ";
		case 3:
			return "LSUND";
		case 5:
			return "LSAM";
		case 6:
			return "LSAM2";
		case 4:
			return "LSSLD";
		case 7:
			return "LSHSC";
		case 8:
			return "LSHSS";
	}
	return "";
}

void func_185(bool bParam0)
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
	func_533(0f);
	Global_1935436.f_11 = 1;
	if (func_534())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_535();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_186(char[4] cParam0)
{
	int iVar0;

	if (cParam0->f_13 == -1)
	{
		cParam0->f_13 = 8;
	}
	if (cParam0->f_13 != -1)
	{
		if (cParam0->f_13 < cParam0->f_12)
		{
			iVar0 = (cParam0->f_12 - cParam0->f_13);
			PED::_0x7D4E70A67A651C71(iVar0);
			cParam0->f_12 = -1;
		}
		if (cParam0->f_13 > 0)
		{
			PED::_0xED9582B3DA8F02B4(cParam0->f_13);
		}
	}
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSM_WOMANCRY";
		case 1:
			return "LSM_HUNTER";
		case 2:
			return "LSM_CATFISH";
		case 3:
			return "LSM_UNDERTAKER";
		case 5:
			return "LSM_MINER_1";
		case 6:
			return "LSM_MINER_2";
		case 4:
			return "LSM_SOLDIER_1";
		case 7:
			return "LSM_HC_1";
		case 8:
			return "LSM_SELL_HORSE_1";
	}
	return "";
}

char* func_188(char* sParam0)
{
	return sParam0;
}

void func_189(char[4] cParam0, vector3 vParam1)
{
	if (!func_160(vParam1))
	{
		cParam0->f_32.f_5 = { vParam1 };
	}
	else
	{
		cParam0->f_32.f_5 = { func_161(*cParam0) };
	}
}

bool func_190(char[4] cParam0)
{
	if (!func_53(64))
	{
		return false;
	}
	if (func_54())
	{
		return false;
	}
	else if (func_169(Global_1935630, 131072))
	{
		return false;
	}
	return true;
}

void func_191(char[4] cParam0)
{
	switch (cParam0->f_17)
	{
		case 0:
			if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1392626[*cParam0 /*32*/].f_24, true) > cParam0->f_17.f_5)
				{
					if (func_49(&(cParam0->f_17.f_12)))
					{
						func_325(&(cParam0->f_17.f_12));
					}
				}
				cParam0->f_17 = 1;
			}
			else
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 1:
			if (func_93(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				cParam0->f_17 = 2;
				return;
			}
			if (func_536(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
			{
				cParam0->f_17 = 2;
				return;
			}
			else if (PED::IS_PED_ON_FOOT(Global_35))
			{
				cParam0->f_17 = 2;
				return;
			}
			break;
		case 2:
			if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 128))
			{
				if ((PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !func_68(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !func_68(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_192(var uParam0, struct<4> Param1, int iParam5)
{
	switch (func_537(uParam0))
	{
		case 0:
			func_538(uParam0, Param1, iParam5);
			break;
		case 1:
			func_539(uParam0);
			break;
		case 2:
			func_540(uParam0);
			break;
	}
}

bool func_193(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_308(uParam0, 32768))
	{
		return true;
	}
	if (func_537(uParam0) >= 3)
	{
		uParam0->f_1662 = func_444(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1663 = PED::IS_PED_FULLY_ON_MOUNT(Global_35, true);
		uParam0->f_1665 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1663)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1664 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1664 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1665)
		{
			uParam0->f_1667 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1668 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_541(uParam0);
	}
	if (func_537(uParam0) < 10)
	{
		if (func_537(uParam0) == 3)
		{
			func_542(uParam0, iParam5, bParam6);
		}
		else if (func_537(uParam0) > 3)
		{
			if (func_543(uParam0) == 0)
			{
				if (!func_308(uParam0, 524288))
				{
					func_544(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_545(uParam0, 4);
					func_546(uParam0, 10);
					func_547(uParam0, iParam5);
					return true;
				}
			}
			if (!func_308(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_316(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_548(0);
			func_549();
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1450 >= 0)
			{
				if (!func_316(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_550(uParam0, uParam0->f_1450))
				{
					if (func_551(uParam0) < 7 && uParam0->f_1454 >= 0)
					{
						func_552(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					func_552(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_553(uParam0);
			}
		}
	}
	bVar0 = func_554(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_308(uParam0, 268435456) && bVar1) && !func_308(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668);
			if (uParam0->f_1450 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[uParam0->f_1450 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1668)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_555(uParam0, 131072);
				func_555(uParam0, 268435456);
			}
		}
		if (func_315(uParam0, 64) || (uParam0->f_1450 >= 0 && !func_316(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_543(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_537(uParam0) == 3 || func_308(uParam0, 131072))
	{
		func_556(uParam0);
		if (!func_308(uParam0, 262144))
		{
			if ((bVar0 && func_308(uParam0, 65536)) || func_308(uParam0, 131072))
			{
				func_555(uParam0, 32768);
				func_545(uParam0, 4);
				func_546(uParam0, 10);
				uParam0->f_1535 = 1;
				func_547(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_537(uParam0) >= 3)
	{
		func_557(uParam0, iParam5);
		func_558(uParam0);
		if (!func_559(uParam0, 1))
		{
			func_560(uParam0);
		}
		func_561(uParam0);
	}
	switch (func_537(uParam0))
	{
		case 0:
			func_538(uParam0, Param1, iParam5);
			break;
		case 1:
			func_539(uParam0);
			break;
		case 2:
			func_540(uParam0);
			break;
		case 3:
			if (func_194(uParam0))
			{
				func_562(2);
				func_552(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_166(&(uParam0->f_1638));
				func_545(uParam0, 1);
				func_563();
				func_546(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_308(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_537(uParam0) == 5)
			{
				if (func_564(uParam0))
				{
					func_545(uParam0, 2);
					func_546(uParam0, 6);
				}
			}
			if (func_537(uParam0) == 6)
			{
				if (func_565(uParam0))
				{
					func_545(uParam0, 3);
					func_546(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || func_364(&(uParam0->f_1638)) >= 15f)
			{
				if (func_566(uParam0, iParam5))
				{
					if (func_567(uParam0))
					{
						uParam0->f_1451 = func_568(uParam0);
						func_166(&(uParam0->f_1638));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_545(uParam0, 6);
						func_546(uParam0, 9);
					}
					else
					{
						func_545(uParam0, 4);
						func_546(uParam0, 10);
						func_547(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_566(uParam0, iParam5))
			{
				func_547(uParam0, iParam5);
				func_546(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_194(var uParam0)
{
	if (uParam0->f_1536)
	{
		return false;
	}
	return uParam0->f_1535;
}

void func_195(char[4] cParam0)
{
}

int func_196(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_569(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_570(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_166(&(iParam1->f_13));
		}
		if (func_571(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_572(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_196(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_417(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_573(*uParam0, 1, 1);
						}
					}
					else if (func_574(iParam1, 22))
					{
						func_573(*uParam0, 0, 1);
					}
				}
				if (func_575(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_576(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_577(iParam8);
					if (func_578(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_579(uParam3);
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
					func_580(iParam1, uParam3, fVar8);
					if (func_581(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_200(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_582(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_575(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_583(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_578(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_576(uParam0, func_575(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_577(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_200(uParam3, 0, 0, 1, 1);
					}
					func_584(iParam1, 1);
				}
				func_580(iParam1, uParam3, fVar8);
				if (func_582(uParam0, iParam1, fParam4, bVar6))
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
			func_585(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_197(var uParam0)
{
	if (uParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

void func_198(char[4] cParam0)
{
	if (!func_93(Global_1392626[*cParam0 /*32*/].f_8, 32))
	{
		if (func_65(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Global_1392626[*cParam0 /*32*/].f_11, 0, -1f, -1f, -1f);
		}
	}
}

bool func_199(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_214() == 2 || func_214() == 6)
	{
		if ((((((((((func_214() == 6 && func_215(4)) && bLocal_631 == 0) && bLocal_630 == 0) || PED::IS_PED_SHOOTING(Global_35)) || !func_65(Local_65[0 /*75*/], 2)) || !func_65(Local_65[1 /*75*/], 2)) || PED::IS_PED_LASSOED(Local_65[0 /*75*/])) || PED::IS_PED_LASSOED(Local_65[1 /*75*/])) || func_586()) || bLocal_633)
		{
			func_346(Local_65[0 /*75*/]);
			func_89();
			func_367("OBJ_LS_HSC", 1);
			MAP::BLIP_ADD_MODIFIER(Global_1392626[7 /*32*/].f_1, -1186550032);
			func_129(&(Global_1392626[7 /*32*/].f_8), 256);
			func_221(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
			func_221(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
			func_63(13);
			return false;
		}
	}
	func_587(cParam0);
	func_409(cParam0);
	func_588(cParam0);
	if (func_156(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
	{
		if (!func_589(169))
		{
			func_233(169, 0);
		}
		else if (!func_590(169) && !func_591(169))
		{
			func_592();
		}
	}
	func_321(iLocal_55, fLocal_56);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar4 = PED::GET_MOUNT(Global_35);
		if (!func_65(iLocal_614, 0))
		{
			iLocal_614 = iVar4;
		}
		else if (iLocal_614 != iVar4)
		{
			iLocal_614 = iVar4;
		}
	}
	if (func_322(Global_35, iLocal_595, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	}
	if (!func_215(1073741824 /* Float: 2f */))
	{
		if (!func_593("OBJ_LS_HSC", 0, 0, -1, -1, 0))
		{
			func_332("OBJ_LS_HSC");
		}
		func_64(1073741824 /* Float: 2f */);
	}
	if (iLocal_628 == 0)
	{
		func_594(0);
		iLocal_628 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_355(&(Local_65[iVar0 /*75*/]), cParam0);
		iVar0++;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_65(Local_65[0 /*75*/], 0))
		{
			func_595(Global_35, ENTITY::GET_ENTITY_COORDS(Local_65[0 /*75*/], true, false), 0, 30f, 20f, 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
		if (func_65(Local_65[1 /*75*/], 0))
		{
			func_595(Global_35, ENTITY::GET_ENTITY_COORDS(Local_65[1 /*75*/], true, false), 0, 30f, 20f, 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
	}
	if (func_215(4))
	{
		if (func_214() != 6 && func_214() != 13)
		{
			func_334(4);
			func_63(6);
		}
	}
	switch (func_214())
	{
		case 0:
			if (func_322(Global_35, iLocal_592, 1, 0))
			{
				func_596(cParam0, &(cParam0->f_2237[0 /*17*/]), 0, 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"), 1090519040 /* Float: 8f */, 0);
			}
			if (func_597(&Local_65, 0, 2) && func_598(15f, 1))
			{
				func_63(1);
			}
			break;
		case 1:
			func_599(&(Local_65[0 /*75*/].f_57[0 /*17*/]), "OBJ_INVESTI", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_599(&(Local_65[1 /*75*/].f_57[0 /*17*/]), "OBJ_INVESTI", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_63(2);
			break;
		case 2:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar2 = iVar0;
				iVar3 = iVar0;
				if ((!Local_65[iVar2 /*75*/].f_6 && iVar2 != 3) && iVar2 != 2)
				{
					iVar1 = func_335(Local_65[iVar2 /*75*/]);
					if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
					{
						if (Local_65[iVar2 /*75*/] == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))
						{
							if (func_196(&(Local_65[iVar2 /*75*/]), &(Local_65[iVar2 /*75*/].f_36), 8f, &(Local_65[iVar2 /*75*/].f_57), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */) == 0)
							{
								func_336(&(uLocal_18[iVar3]), 1, 1);
								Local_65[iVar2 /*75*/].f_6 = 1;
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 297, false);
								PED::SET_PED_CONFIG_FLAG(Local_65[iVar2 /*75*/], 130, false);
								MISC::_0xE98D55C5983F2509(Local_65[iVar2 /*75*/]);
							}
						}
					}
				}
				iVar0++;
			}
			if (Local_65[0 /*75*/].f_6 == 1)
			{
				if (!func_215(32))
				{
					if (!func_356())
					{
						if (iLocal_28 == 0)
						{
							iLocal_29 = 0;
							iLocal_30 = 0;
							iLocal_28 = 1;
						}
						func_63(4);
						func_64(32);
					}
					else
					{
						func_307(0);
					}
				}
			}
			if (Local_65[1 /*75*/].f_6 == 1)
			{
				if (!func_215(16))
				{
					if (!func_356())
					{
						PED::SET_PED_CONFIG_FLAG(Local_65[0 /*75*/], 297, false);
						MISC::_0xE98D55C5983F2509(Local_65[0 /*75*/]);
						PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 0.5f);
						func_63(5);
						func_64(16);
						cParam0->f_17 = 2;
						bLocal_632 = func_337();
						func_220(iLocal_598, 5f);
						return true;
					}
					else
					{
						func_307(0);
					}
				}
			}
			break;
		case 6:
			if (func_215(256))
			{
				func_63(7);
				iLocal_22 = 1;
				return true;
			}
			break;
		case 4:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_ATTACK"), false);
			}
			if (!func_326(4194304))
			{
				if (func_327("LSHRC_IG1"))
				{
					func_344(Local_65[0 /*75*/], 2f, 524288);
					func_329(4194304);
				}
			}
			else
			{
				if (!MAP::DOES_BLIP_EXIST(Local_65[1 /*75*/].f_1))
				{
					func_70(&(Local_65[1 /*75*/].f_1), Local_65[1 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
					MAP::BLIP_ADD_MODIFIER(Local_65[1 /*75*/].f_1, -546708623);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[1 /*75*/].f_1, "BLIP_STRANGER");
				}
				func_345(cParam0, "OBJ_QUEST_HSC", ENTITY::GET_ENTITY_COORDS(Local_65[1 /*75*/], true, false));
				MAP::BLIP_ADD_MODIFIER(Global_1392626[7 /*32*/].f_1, -1186550032);
				func_63(2);
			}
			break;
		case 13:
			return false;
		case 12:
			if (!func_215(16384))
			{
				func_64(16384);
				return true;
			}
			break;
	}
	return false;
}

void func_200(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_374((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_336(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_201(char[4] cParam0)
{
}

int func_202(char[4] cParam0)
{
	if (func_215(16384))
	{
		return 9;
	}
	return 8;
}

bool func_203(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	if (iVar0 == GET_HASH_KEY("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == GET_HASH_KEY("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_243(iParam0, 1399091007))
	{
		func_600(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_203(iParam0, 0))
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
	if (!func_601())
	{
		func_602(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_603(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_603(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_244(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_209(iParam0);
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
	else if (!func_604(iParam0, &Var7, iVar11, iVar10, 0, GET_HASH_KEY("UI_ITEMVIEWER")))
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
	sVar15 = func_605(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_292(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_243(iParam0, 1443104131)) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == GET_HASH_KEY("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_292(iParam0));
	}
	func_606(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_206(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_209(iParam0);
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
		if (!func_607(iParam0, 1))
		{
			return false;
		}
	}
	return func_208(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_207(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_203(iParam0, 0))
	{
		return Var0;
	}
	if (func_243(iParam0, -305066475))
	{
		if (func_250() == -1)
		{
			if (func_243(iParam0, -537818634))
			{
				return func_608(GET_HASH_KEY("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_608(GET_HASH_KEY("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_243(iParam0, -537818634))
	{
		return func_608(GET_HASH_KEY("MEDICINE_ITEMS"));
	}
	if (func_243(iParam0, 2084895747))
	{
		return func_608(GET_HASH_KEY("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

int func_208(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	if (iVar0 == GET_HASH_KEY("AMMO") || (bParam1 && iVar0 == GET_HASH_KEY("WEAPON")))
	{
		iVar1 = func_204(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == GET_HASH_KEY("WEAPON"))
	{
		return func_609(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_610(bParam2), iParam0, 0);
	return iVar2;
}

int func_209(int iParam0)
{
	vector3 vVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_210(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_611(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_613(&Var0, func_612(0));
	}
	if (!func_614(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_615(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_616(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_617(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_211(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_618(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_619(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_620(iParam0, Var0, Var0.f_4, bParam4) };
	return func_616(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_212(bool bParam0)
{
	if (func_250() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_610(bParam0));
}

void func_213(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_243(iParam0, 606799272))
		{
			func_621(iParam0, iParam1);
		}
		if (func_243(iParam0, -1112814642) && func_243(iParam0, -1697809989))
		{
			func_273(iParam0, iParam1, 1, 0);
		}
	}
}

int func_214()
{
	return iLocal_14;
}

bool func_215(int iParam0)
{
	return func_217(iLocal_15, iParam0);
}

void func_216(int iParam0, int iParam1)
{
	func_622(iParam0, iParam1);
}

bool func_217(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_218(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_623(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_160(uParam1->f_6))
		{
		}
	}
	bVar0 = func_236();
	if (*uParam1)
	{
		if (bVar0 && !func_262(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_624(5))
			{
				func_625(5);
				func_626(5);
				func_627(0);
				func_628(0);
			}
		}
	}
	if (func_629(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_262(Global_1835011[37 /*74*/].f_1, 1)) && !func_262(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_262(Global_1835011[43 /*74*/].f_1, 1)) && !func_262(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_630(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_385(iVar1))
	{
		bVar3 = true;
		if (func_631(iVar1))
		{
			bVar4 = true;
		}
		if (func_386(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_387(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_624(0) && func_624(1))
			{
				func_632(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_633())
			{
				func_634();
			}
			func_627(0);
			func_628(0);
			func_635(uParam1->f_6);
		}
	}
	if (!func_385(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_636(uParam1->f_10) == 0 || func_637(uParam1->f_10) == 0) || func_638(uParam1->f_10) == 0)
			{
				func_639(uParam1->f_10);
			}
			func_640(uParam1->f_10);
			func_641(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_630(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_385(iVar1))
	{
		bVar3 = true;
		if (func_631(iVar1))
		{
			bVar4 = true;
		}
		if (func_386(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_160(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_642(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_643(uParam1->f_10) };
			Var10 = { func_644() };
			func_645(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_646(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_647(uParam1->f_10);
		if (uParam1->f_2 && !func_160(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_648(uParam1->f_10);
	if (func_646(uParam1->f_10))
	{
		iVar16 = func_649(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

void func_219(var uParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar1 = VEHICLE::_0x635423D55CA84FC8(1094934838);
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		(*uParam0)[0] = VEHICLE::_CREATE_MISSION_TRAIN(1094934838, vParam1, bParam4, false, true, true);
		VEHICLE::_0xCBF88256E44D5D39(uLocal_602[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[0]))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
				{
					(*uParam0)[iVar0] = VEHICLE::GET_TRAIN_CARRIAGE((*uParam0)[0], iVar0);
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
					{
						VEHICLE::_0xCBF88256E44D5D39(uLocal_602[iVar0], 0);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_220(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	vector3 vVar15;
	bool bVar18;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = func_650(iParam0, &iVar0);
	if (iVar1 == -1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = func_651(iVar3, iVar0);
		if (!func_65(iVar4, 0))
		{
		}
		else if (iVar4 == Local_65[2 /*75*/] || iVar4 == Local_65[3 /*75*/])
		{
		}
		else
		{
			vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 1f, 0f, 0f) - Global_36 };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
			vVar11 = { vVar8 - Global_36 };
			vVar5.f_2 = 0f;
			vVar11.f_2 = 0f;
			vVar5 = { vVar5 / FtoV(BUILTIN::VMAG(vVar5)) };
			vVar11 = { vVar11 / FtoV(BUILTIN::VMAG(vVar11)) };
			fVar14 = func_652(vVar5, vVar11);
			fVar14 = (fVar14 / MISC::ABSF(fVar14));
			vVar15 = { vVar8 + Vector(fVar14, fVar14, fVar14) * vVar5 * Vector(fParam1, fParam1, fParam1) };
			bVar18 = PED::_0x268B3AEBF032A88D(iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar15, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, bVar18);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(iVar4, iVar2);
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_221(int* iParam0)
{
	func_599(iParam0, "", 0, GET_HASH_KEY("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

void func_222(int iParam0)
{
	Global_1572864.f_12 = iParam0;
}

void func_223(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];

	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_421(iParam0) == 1)
	{
		cVar0 = func_654(func_653(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (func_421(iParam0) == 8)
	{
		cVar0 = func_656(func_655(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_482(1, 1);
	func_487(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	func_395(0);
	func_396(0);
	func_398(1f);
}

bool func_224(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_250() == -1)
	{
		if (func_657(iParam0) && func_658(iParam0))
		{
			func_659(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_225(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_660(iParam0, iParam1);
	Var0 = { func_618(iParam0, 0, 1) };
	iVar5 = func_661(iParam0, &Var0, 0, 0);
	iVar6 = func_662(iParam0, 0);
	if ((iVar5 > 1 && !func_663()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_243(iParam0, -2051813666))
		{
			func_233(583, 1);
		}
		else
		{
			func_233(582, 0);
		}
	}
	if (func_664(iParam0, &Var0, *iParam1, 0, 0))
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

void func_226(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_665(iParam0, -949239683))
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

bool func_227(int iParam0)
{
	if (func_250() != -1)
	{
		return false;
	}
	return func_228(iParam0) != 0;
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_666())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_667(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_229(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_666())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_229(iVar0))
		{
			if (func_206(func_667(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_231(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_668(48);
	func_669(0, -1);
}

bool func_232(int iParam0)
{
	if (func_250() != -1)
	{
		return false;
	}
	return func_262(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_233(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_670(iParam0, &iVar0, &iVar1);
	if (!func_671(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_672(iVar0, iVar1);
}

int func_234(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_235(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_236()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_237(int iParam0)
{
	if (func_250() != -1)
	{
		return false;
	}
	return func_262(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_238(int iParam0)
{
	if (func_250() != -1)
	{
		return false;
	}
	if (!func_407(iParam0))
	{
		return false;
	}
	return func_178(Global_1347702[iParam0 /*49*/].f_15);
}

char* func_239()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_206(func_673(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_236() && (func_238(38) || func_232(38)))
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
			if (func_236() && (func_238(39) || func_232(39)))
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
			iVar9 = func_674(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = GET_HASH_KEY("COL_EX_INTRO");
			break;
		case 41:
			if (func_236() && (func_238(41) || func_232(41)))
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
			if (func_236() && (func_238(49) || func_232(49)))
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
			iVar9 = func_674(iParam3, 20);
			iVar14 = GET_HASH_KEY("TAXIDERMY");
			iVar11 = GET_HASH_KEY("BLIP_RC_HOBBS");
			iVar13 = GET_HASH_KEY("COL_TX_INTRO");
			break;
	}
	sVar2 = func_675(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_676(iParam0, iVar13, iVar14))
	{
	}
	if (func_677(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_678(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_679(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_680(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_681(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_241(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_236() && (func_238(38) || func_232(38)))
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
			if (func_236() && (func_238(39) || func_232(39)))
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
			if (func_236() && (func_238(49) || func_232(49)))
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
		if (func_236() && (func_238(38) || func_232(38)))
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
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_684(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_683(func_235(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("DINO_BONES"))
	{
		if (func_236() && (func_238(39) || func_232(39)))
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
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == GET_HASH_KEY("ROCK_CARVINGS"))
	{
		if (func_236() && (func_238(49) || func_232(49)))
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
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_682(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_243(int iParam0, int iParam1)
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

bool func_244(int iParam0, int iParam1)
{
	if (!func_203(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_245(int iParam0)
{
	if (!func_685(iParam0))
	{
		return false;
	}
	return func_686(iParam0);
}

void func_246(int iParam0)
{
	if (!func_685(iParam0))
	{
		return;
	}
	func_687(iParam0);
	func_688(iParam0);
}

int func_247(int iParam0)
{
	struct<2> Var0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_248(int iParam0, bool bParam1)
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
	if (func_203(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_689(iVar0) || func_690(iVar0))
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

int func_249(int iParam0, bool bParam1)
{
	if (!func_203(iParam0, 0))
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

int func_250()
{
	return Global_1572887.f_12;
}

void func_251(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_485(iParam0))
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

bool func_252(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_618(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_691((398 + iVar28), 1);
			if (func_692(iParam0, &Var0, iVar5, 0))
			{
				if (func_693(iParam0, &Var6, iVar5))
				{
					Var29 = { func_620(iParam0, Var0, iVar5, 0) };
					func_616(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_212(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_253(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_694(iParam0, iParam1);
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

bool func_253(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_255(iParam0))
	{
		return false;
	}
	if (!func_212(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_254(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_249(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_250() == -1)
		{
			func_251(iVar0);
			if (iParam1 == 1248274121)
			{
				func_695(iVar0);
			}
		}
		if (!func_664(iParam0, &uVar1, 1, 0, 0))
		{
			func_659(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_696(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_252(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_FISHINGROD") || iVar0 == GET_HASH_KEY("WEAPON_KIT_BINOCULARS"))
			{
				func_252(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == GET_HASH_KEY("WEAPON_LASSO"))
			{
				func_252(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == GET_HASH_KEY("WEAPON_MELEE_KNIFE_JOHN") && !func_697())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_698(iVar0))
				{
					func_252(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_252(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_699(Global_35, 2, 0, 1);
				if ((((func_485(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_245(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_485(iVar7) && func_245(24))
				{
					if (!func_252(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_252(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_252(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_233(480, 1);
	}
	return true;
}

bool func_255(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_256(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_255(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_485(iVar4))
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
	if (func_206(GET_HASH_KEY("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_293(func_700(iParam0), func_292(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_250() == -1)
		{
			if (func_262(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_233(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_212(0))
	{
		if (func_253(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_298(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_257(int iParam0)
{
	var uVar0;

	if ((iParam0 == GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON") && !func_701()) || iParam0 != GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_702(Global_35, iParam0, &uVar0))
		{
			func_277(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_283();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_283();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_283();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_281();
			break;
		case GET_HASH_KEY("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_279();
			break;
	}
}

void func_258(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_279();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_280();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_281();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_282();
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
			func_283();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_703();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_704();
			break;
		case GET_HASH_KEY("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_259(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_260(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_261(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_262(int iParam0, bool bParam1)
{
	switch (func_512(iParam0))
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

void func_263(int iParam0)
{
	bool bVar0;

	bVar0 = func_243(iParam0, -2017733358);
	if (func_705() < 3)
	{
		if (bVar0)
		{
			if (func_707(func_706(iParam0), iParam0))
			{
				func_293(79, func_292(func_706(iParam0)), 1);
			}
			else
			{
				func_293(78, func_292(func_706(iParam0)), 1);
			}
		}
		else
		{
			func_293(80, func_292(func_708(iParam0)), 1);
		}
	}
}

bool func_264()
{
	if (((((func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_709(GET_HASH_KEY("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_265(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_710(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_711(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_712(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_266(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_LETTER_TAXIDERMY"):
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_242(51, 0, 0, 0, 0, -1, 0);
			func_713(8192);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_TAXIDERMY"):
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_242(51, 0, 0, 0, 0, -1, 0);
			func_713(524288);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_DINO_BONES"):
			func_240(39, 0, 0, 0, 0, 0, 1, 0);
			func_242(39, 0, 0, 0, 0, -1, 0);
			func_714(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"):
			func_240(41, 0, 0, 0, 0, 0, 1, 0);
			func_242(41, 0, 0, 0, 0, -1, 0);
			func_715(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_240(49, 0, 0, 0, 0, 0, 1, 0);
			func_242(49, 0, 0, 0, 0, -1, 0);
			func_716(16);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_240(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_01"), func_717(1), 0, -1, 0);
			func_718(1);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_240(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_02"), func_717(2), 0, -1, 0);
			func_718(2);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_240(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_03"), func_717(4), 0, -1, 0);
			func_718(4);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_240(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_04"), func_717(8), 0, -1, 0);
			func_718(8);
			break;
		case GET_HASH_KEY("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_240(43, 0, 0, GET_HASH_KEY("EXOTIC_STAGE_05"), func_717(16), 0, -1, 0);
			func_718(16);
			break;
	}
}

void func_267(int iParam0)
{
	if (func_719() == 1)
	{
		if (func_232(39))
		{
			func_233(342, 0);
		}
		else
		{
			func_233(343, 0);
			func_714(1);
		}
	}
	if (func_719() >= 30)
	{
		func_233(344, 0);
	}
	func_240(39, 0, 0, 0, 0, 0, -1, 0);
	func_242(39, 0, 0, func_719(), 30, 1, 0);
}

void func_268(int iParam0)
{
	if (func_720() == 1)
	{
		if (func_232(49))
		{
			func_233(409, 0);
		}
		else
		{
			func_233(410, 0);
			func_716(1);
		}
	}
	if (func_720() >= 10)
	{
		func_233(411, 0);
	}
	func_240(49, 0, 0, 0, 0, 0, -1, 0);
	func_242(49, 0, 0, func_720(), 10, 1, 0);
}

void func_269(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 1);
			func_233(437, 0);
			func_233(440, 0);
			func_721(GET_HASH_KEY("TAXIDERMY_ORDER_01"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_242(51, 0, 0, sVar0, func_674(GET_HASH_KEY("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_713(1);
			func_722(-748969569, 0, 0);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 1);
			func_721(GET_HASH_KEY("TAXIDERMY_ORDER_02"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_242(51, 0, 0, sVar0, func_674(GET_HASH_KEY("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_713(8);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 1);
			func_721(GET_HASH_KEY("TAXIDERMY_ORDER_03"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_242(51, 0, 0, sVar0, func_674(GET_HASH_KEY("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_713(64);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 1);
			func_721(GET_HASH_KEY("TAXIDERMY_ORDER_04"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_242(51, 0, 0, sVar0, func_674(GET_HASH_KEY("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_713(512);
			break;
		case GET_HASH_KEY("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 1);
			func_233(438, 0);
			func_721(GET_HASH_KEY("TAXIDERMY_ORDER_05"), GET_HASH_KEY("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_240(51, 0, 0, GET_HASH_KEY("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_242(51, 0, 0, sVar0, func_674(GET_HASH_KEY("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_713(32768);
			break;
		default:
			func_233(439, 0);
			break;
	}
}

void func_270()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(GET_HASH_KEY("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(GET_HASH_KEY("SP_CHAL_EXPL_ROOT"), GET_HASH_KEY("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_250() == -1)
	{
		if (!func_232(43))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_233(348, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_233(350, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_233(352, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_233(400, 0);
			}
		}
		else if (func_243(iParam0, 412399755))
		{
			func_723(GET_HASH_KEY("EXOTIC_STAGE_01"));
			if (func_724() == 0)
			{
				func_669(0, 10);
				iVar1 = func_725(iParam0, iParam1, 1);
				if (((iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == GET_HASH_KEY("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_726(iParam0) < func_727(iParam0))
					{
						func_240(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_242(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_232(44))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER"))
			{
				func_233(354, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_233(399, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_233(401, 0);
			}
		}
		else if (func_243(iParam0, 709057512))
		{
			func_723(GET_HASH_KEY("EXOTIC_STAGE_02"));
			if (func_724() == 1)
			{
				func_669(0, 10);
				iVar1 = func_725(iParam0, iParam1, 2);
				if ((iParam0 == GET_HASH_KEY("PROVISION_HERON_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_726(iParam0) < func_727(iParam0))
					{
						func_240(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_242(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_232(45))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
			{
				func_233(359, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_233(394, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_233(395, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
			{
				func_233(398, 0);
			}
		}
		else if (func_243(iParam0, -1478961327))
		{
			func_723(GET_HASH_KEY("EXOTIC_STAGE_03"));
			if (func_724() == 2)
			{
				func_669(0, 10);
				iVar1 = func_725(iParam0, iParam1, 4);
				if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
				{
					if (!func_728(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
					{
						func_729(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
						func_668(48);
					}
					if (func_726(iParam0) < func_727(iParam0))
					{
						func_240(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_242(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_726(iParam0) < func_727(iParam0))
					{
						func_240(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_242(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_232(46))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER"))
			{
				func_233(356, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_233(402, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_233(404, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_233(406, 0);
			}
		}
		else if (func_243(iParam0, -1238404098))
		{
			func_723(GET_HASH_KEY("EXOTIC_STAGE_04"));
			if (func_724() == 3)
			{
				func_669(0, 10);
				iVar1 = func_725(iParam0, iParam1, 8);
				if (((iParam0 == GET_HASH_KEY("PROVISION_SPOONBILL_FEATHER") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_726(iParam0) < func_727(iParam0))
					{
						func_240(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_242(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_232(47))
		{
			if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_233(396, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_233(397, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_233(405, 0);
			}
			else if (iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_233(403, 0);
			}
		}
		else if (func_243(iParam0, 1160548794))
		{
			func_723(GET_HASH_KEY("EXOTIC_STAGE_05"));
			if (func_724() == 4)
			{
				func_669(0, 10);
				iVar1 = func_725(iParam0, iParam1, 16);
				if (((iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == GET_HASH_KEY("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_726(iParam0) < func_727(iParam0))
					{
						func_240(43, iParam0, iParam1, GET_HASH_KEY("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_242(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_272(int iParam0)
{
	int iVar0;

	if (iParam0 == GET_HASH_KEY("PROVISION_GATOR_EGG"))
	{
		if (!func_728(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0)) >= 25)
		{
			func_729(COLLECTION::_0x126CBEBBA46693CF(iVar0, GET_HASH_KEY("GATOR_EGGS"), 0), 1);
			func_668(48);
		}
	}
}

void func_273(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, GET_HASH_KEY("TAXIDERMY"), GET_HASH_KEY("TAXIDERMY_ORDER"));
		if (func_206(func_730(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_731(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_732(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_250() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_265(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("MONEY_ONE_DOLLAR"):
			func_265(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_FIVE_DOLLARS"):
			func_265(GET_HASH_KEY("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_TEN_DOLLARS"):
			func_265(GET_HASH_KEY("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD"):
			func_265(GET_HASH_KEY("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLFOLD_SML"):
			func_265(GET_HASH_KEY("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_BILLSTACK"):
			func_265(GET_HASH_KEY("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COIN"):
			func_265(GET_HASH_KEY("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINPURSE"):
			func_265(GET_HASH_KEY("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSACK"):
			func_265(GET_HASH_KEY("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINSTACK"):
			func_265(GET_HASH_KEY("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYCLIP"):
			func_265(GET_HASH_KEY("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK"):
			func_265(GET_HASH_KEY("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_MONEYSTACK_LARGE"):
			if (!func_733())
			{
				func_265(GET_HASH_KEY("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case GET_HASH_KEY("MONEY_COINCUP_SM"):
			func_265(GET_HASH_KEY("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_COINCUP_LG"):
			func_265(GET_HASH_KEY("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("CURRENCY_CASH"):
			func_265(GET_HASH_KEY("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_COMMON"):
			func_265(GET_HASH_KEY("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_RARE"):
			func_265(GET_HASH_KEY("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CARD_SET_ALL"):
			func_265(GET_HASH_KEY("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_RARE_FISH"):
			func_265(GET_HASH_KEY("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_1"):
			func_265(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_2"):
			func_265(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_3"):
			func_265(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_4"):
			func_265(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_TAXIDERMY_STAGE_5"):
			func_265(GET_HASH_KEY("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case GET_HASH_KEY("MONEY_CALLOWAY_LETTER"):
			func_265(GET_HASH_KEY("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_275(int iParam0)
{
	if (func_232(41))
	{
		func_233(363, 0);
	}
	else
	{
		func_233(362, 0);
	}
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_01"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_01"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_02"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_02"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_03"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_03"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_04"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_04"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_05"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_05"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_06"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_06"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_PERCH_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_07"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_07"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_08"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_08"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_09"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_09"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_10"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_10"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_11"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_11"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_12"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_12"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_13"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_13"));
			func_669(0, 10);
			break;
		case GET_HASH_KEY("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_734(GET_HASH_KEY("LEGENDARY_FISH_14"));
			func_735(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			func_736(GET_HASH_KEY("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_276(int iParam0, int iParam1)
{
	var uVar0;

	func_600(iParam0, iParam1, &uVar0);
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_618(iParam1, 1, 0) };
		iParam3 = func_737(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_739(iParam1, iParam2, func_738(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_740(1, (func_250() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_738(iParam3, 1) /*11*/])
			{
				func_741(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_742(32768) && iParam1 != Global_1946804.f_57[func_738(iParam3, 1) /*11*/])
			{
				func_743();
				func_741(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_741(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_744(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_741(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_504(0);
			func_745(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_741(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_278(int iParam0, bool bParam1)
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
	iVar18 = func_699(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_699(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_746("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_615(&Var3, iVar2, iVar0, iVar1))
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
						func_617(iVar0);
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

void func_279()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_280()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_281()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_282()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_283()
{
	func_747();
	func_748();
	func_749();
}

void func_284(int iParam0, int iParam1, bool bParam2)
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

void func_285(int iParam0, bool bParam1)
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
	func_682(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), GET_HASH_KEY("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), GET_HASH_KEY("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_286(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_287(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_288(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_289(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_290(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_291(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_292(int iParam0)
{
	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_293(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_670(iParam0, &iVar0, &iVar1);
	if (!func_671(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_750(iParam0, 1024))
	{
		return;
	}
	func_672(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_294(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_670(iParam0, &iVar0, &iVar1);
	if (!func_671(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_750(iParam0, 1024))
	{
		return;
	}
	func_672(iVar0, iVar1);
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

int func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_666())
	{
		return func_296();
	}
	iVar4 = (func_666() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_666())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_751(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_667(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_296()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_666());
	return func_667(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_297(int iParam0)
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

bool func_298(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_203(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_618(iParam0, 0, 1) };
	Var5 = { func_620(iParam0, Var0, Var0.f_4, 0) };
	return func_752(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_250() != -1)
	{
		return;
	}
	switch (func_247(iParam0))
	{
		case 81053684:
			if (iParam0 == GET_HASH_KEY("KIT_BANDANA") && func_753(81053684, 0) <= 0)
			{
				func_741(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == GET_HASH_KEY("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == GET_HASH_KEY("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_741(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_754(iParam0);
			if (func_755(iVar0))
			{
				func_756(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_741(30, iParam0, 0, 0, 0);
			}
			if (func_757() == -2125499975 || func_757() == -449205311)
			{
				switch (iParam0)
				{
					case GET_HASH_KEY("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case GET_HASH_KEY("CLOTHING_GUNSLINGER_OUTFIT"):
						func_741(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_757() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_741(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_758(-525676072, 0))
			{
				if (func_759(-525676072, &iVar1))
				{
					func_741(33, iVar1, 0, 0, 0);
				}
			}
			func_741(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == GET_HASH_KEY("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == GET_HASH_KEY("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_760(GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_277(Global_35, iParam0, 0, GET_HASH_KEY("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_246(24);
		if (func_278(&iVar2, 0))
		{
			func_252(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_300(int iParam0)
{
	if (func_243(iParam0, 943695443))
	{
		func_761(0, iParam0);
	}
	else if (func_243(iParam0, -2096528786))
	{
		func_761(1, iParam0);
	}
	else if (func_243(iParam0, -1094167013))
	{
		func_761(2, iParam0);
	}
	else if (func_243(iParam0, 1936654645))
	{
		func_761(3, iParam0);
	}
	else if (func_243(iParam0, 1306489306))
	{
		func_761(4, iParam0);
	}
	else if (func_243(iParam0, 435762317))
	{
		func_761(5, iParam0);
	}
	else if (func_243(iParam0, 1259363210))
	{
		func_761(6, iParam0);
	}
	else if (func_243(iParam0, 881398259))
	{
		func_761(7, iParam0);
	}
	else if (func_243(iParam0, -541549214))
	{
		func_761(8, iParam0);
	}
	else if (func_243(iParam0, 130796156))
	{
		func_761(-1, iParam0);
	}
}

int func_301(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_762(&Var4, GET_HASH_KEY("LOOT_TYPE_NORMAL"));
	return func_763(iParam0, &Var4, &uVar0, iParam1);
}

void func_302(int iParam0)
{
	switch (iParam0)
	{
		case GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_250() == -1)
			{
				if (func_262(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_233(109, 1);
				}
			}
			break;
	}
}

void func_303(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_765(func_764(0));
	func_606(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_766(iParam0), 0, GET_HASH_KEY("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_304(char[4] cParam0)
{
}

bool func_305(char[4] cParam0)
{
	if (cParam0->f_2 == 3)
	{
		if (!func_767(cParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_306()
{
	return func_768(1);
}

void func_307(int iParam0)
{
	func_769(1, iParam0, 0);
}

bool func_308(var uParam0, int iParam1)
{
	return (uParam0->f_1430 && iParam1) != 0;
}

struct<8> func_309(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_770(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_771() };
	}
	return Var0;
}

void func_310(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_246[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_230 };
			uParam0->f_246[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_772(uParam0, sParam1);
	func_497(uParam0, 2097152, 1);
	func_311(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_228, sParam1, true);
}

void func_311(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

Vector3 func_312(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	switch (uParam0->f_782[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_782[iParam1 /*41*/].f_4 - uParam0->f_782[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_773(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + uParam0->f_782[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_160(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_782[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_782[iParam1 /*41*/].f_7, true))
				{
					return vVar0[1 /*3*/];
				}
				else
				{
					return vVar0[0 /*3*/];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_782[iParam1 /*41*/].f_13 < uParam0->f_782[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_782[iParam1 /*41*/].f_12 + (uParam0->f_782[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_782[iParam1 /*41*/].f_12 + uParam0->f_782[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_782[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_782[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_782[iParam1 /*41*/].f_11 + 5f))) };
			vVar0[0 /*3*/].f_2 = (vVar0[0 /*3*/].f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!func_160(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_313(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_314(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 - (uParam0->f_1430 && iParam1));
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0->f_1432.f_1 && iParam1) != 0;
}

bool func_316(var uParam0, int iParam1)
{
	return func_774(uParam0->f_27, iParam1);
}

int func_317(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;

	func_490(uParam4, &cParam0);
	if (func_489(uParam4, 2) && !func_489(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_775(uParam4) != 1)
	{
		func_776(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_775(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false))
				{
					func_777(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					func_778(uParam4, 4);
					return 0;
				}
				else if (func_779(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				func_778(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && func_489(uParam4, 134217728))
				{
				}
				else
				{
					func_780(uParam4);
				}
				func_166(&(uParam4->f_1));
				func_778(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_502(uParam4);
				if (!func_49(&(uParam4->f_1)))
				{
					func_50(&(uParam4->f_1), 0);
				}
				else if (func_342(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_778(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (func_162(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
					{
						func_778(uParam4, 4);
					}
					else if (!func_160(func_491(uParam4)) && !func_156(Global_35, func_491(uParam4), 100f, 1, 1))
					{
						func_781(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_491(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_342(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					func_778(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_782(1, 0);
					func_777(uParam4, &cParam0);
					func_778(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_342(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				func_778(uParam4, 4);
			}
			break;
		case 3:
			func_783(uParam4);
			if (func_779(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || func_489(uParam4, 512)))
			{
				if (!func_489(uParam4, 1024) && func_784(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_489(uParam4, 512))
				{
					func_166(&(uParam4->f_1));
					func_311(uParam4, 512);
					func_778(uParam4, 4);
				}
				else if (func_489(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_776(uParam4);
			}
			if (func_489(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_785(uParam4) - func_786(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_787(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_786(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_788(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				func_789(uParam4);
				func_790(uParam4);
				return 1;
			}
			else
			{
				if (func_489(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_228);
						}
						func_166(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_311(uParam4, 512);
						func_497(uParam4, 67108864, 1);
						func_778(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_489(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && func_786(uParam4) <= 5000) && func_786(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_489(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_791(&(uParam4->f_285), 0);
					func_311(uParam4, 536870912);
				}
				if (func_786(uParam4) >= 5000 && func_786(uParam4) <= (func_785(uParam4) - 5000))
				{
					func_792();
				}
			}
			break;
		case 6:
			if (func_788(uParam4))
			{
				func_789(uParam4);
				func_790(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_489(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						func_311(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_228))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_779(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_778(uParam4, 3);
					}
					else if (func_342(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						func_778(uParam4, 3);
					}
				}
				if (func_775(uParam4) == 3)
				{
					if (func_489(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_778(uParam4, 4);
			break;
	}
	return 0;
}

void func_318(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_489(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_793(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_489(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_497(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_497(uParam0, 16, 1);
}

void func_319(char[4] cParam0)
{
	struct<4> Var0;

	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 64))
	{
		if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
		{
			POPULATION::_0xA1CFB35069D23C23(cParam0->f_32.f_4);
			POPULATION::_0x74C2B3DC0B294102(cParam0->f_32.f_4);
			if (PED::_0x91A5F9CBEBB9D936(cParam0->f_2213[1]))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(cParam0->f_2213[1], false);
			}
			if (func_505(cParam0->f_32.f_4, &Var0))
			{
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var0, Var0.f_3, 1, 1);
			}
		}
	}
	if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 128))
	{
		if (VOLUME::DOES_VOLUME_EXIST(cParam0->f_32.f_4))
		{
			VOLUME::_DELETE_VOLUME(cParam0->f_32.f_4);
		}
		func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 128);
	}
	func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 64);
}

void func_320(int* iParam0)
{
	struct<247> Var0;

	Var0 = 1;
	Var0.f_13 = 17;
	Var0.f_218 = 1097859072;
	Var0.f_219 = 1101004800;
	Var0.f_246 = 4;
	MISC::_COPY_MEMORY(iParam0, &Var0, 314);
}

void func_321(int iParam0, float fParam1)
{
	if (!func_794())
	{
		return;
	}
	if (!func_65(iParam0, 0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	switch (iLocal_31)
	{
		case 0:
			StringCopy(&Local_32, "generic_hint_cam", 64);
			StringCopy(&(Local_32.f_8), "GENERIC_HINT_CAM", 64);
			Local_32.f_19 = iParam0;
			CAM::_0x6A4D224FC7643941(&Local_32);
			iLocal_31 = 1;
			break;
		case 1:
			if (CAM::_0xDD0B7C5AE58F721D(&Local_32))
			{
				iLocal_31 = 2;
			}
			break;
		case 2:
			func_50(&uLocal_52, 0);
			if (func_324(&uLocal_52, fParam1))
			{
				if (CAM::_0x927B810E43E99932(&Local_32))
				{
					CAM::_0x0A5A4F1979ABB40E(&Local_32);
				}
				func_325(&uLocal_52);
				iLocal_31 = 3;
			}
			else if (!CAM::_0x927B810E43E99932(&Local_32))
			{
				CAM::_0xB8B207C34285E978(&Local_32);
			}
			else
			{
				CAM::_0x7B0279170961A73F(&Local_32);
			}
			break;
		case 3:
			break;
	}
}

bool func_322(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_324(var uParam0, float fParam1)
{
	if (!func_49(uParam0))
	{
		return false;
	}
	if (func_342(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_325(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_326(int iParam0)
{
	return func_217(iLocal_16, iParam0);
}

bool func_327(char* sParam0)
{
	return func_795(sParam0);
}

bool func_328(var uParam0, char* sParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam1, 24);
	return func_796(uParam0, cVar0, 0, -1, bParam2, 0);
}

void func_329(int iParam0)
{
	if (!func_326(iParam0))
	{
		func_216(&iLocal_16, iParam0);
	}
}

void func_330(char[4] cParam0)
{
	if (func_65(Local_65[0 /*75*/], 0))
	{
		if (PED::IS_PED_HOGTIED(Local_65[0 /*75*/]))
		{
			if (func_323(Global_35, Local_65[0 /*75*/], 1, 1) < 12f)
			{
				if (!func_326(16) && !func_356())
				{
					func_797(&uLocal_553, 5f, 0);
					func_329(16);
				}
				if (((func_326(16) && !func_356()) && !func_352(Global_35)) && func_324(&uLocal_553, 10f))
				{
					func_328(&(cParam0->f_2106), "LSHRC_HOGTIED", 0);
					func_166(&uLocal_553);
					func_50(&uLocal_553, 0);
				}
			}
		}
		else
		{
			if (!func_68(Local_65[0 /*75*/], 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 1, 2f, 0);
			}
			if (func_323(Global_35, Local_65[0 /*75*/], 1, 1) < 12f)
			{
				if (!func_326(32) && !func_356())
				{
					func_797(&uLocal_556, 7f, 0);
					func_329(32);
				}
				if ((((func_326(32) && !func_356()) && !func_352(Global_35)) && func_68(Local_65[0 /*75*/], 518218985)) && func_324(&uLocal_556, 8f))
				{
					func_328(&(cParam0->f_2106), "LSHRC_COWER", 0);
					func_166(&uLocal_556);
					func_50(&uLocal_556, 0);
				}
			}
		}
	}
}

int func_331(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_332(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(2, sParam0));
}

void func_333(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "honor_block");
		}
	}
}

void func_334(int iParam0)
{
	if (func_215(iParam0))
	{
		func_798(&iLocal_15, iParam0);
	}
}

int func_335(var uParam0)
{
	return uParam0;
}

void func_336(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_374(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_799(*iParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_800(iVar0);
	*iParam0 = 0;
}

int func_337()
{
	if (func_801(iLocal_596) > 0)
	{
		return 1;
	}
	return 0;
}

void func_338(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = false;
	if (bVar2)
	{
	}
	switch (iLocal_25)
	{
		case 0:
			iVar0 = func_802(Local_65[1 /*75*/], Global_35, 1060437492 /* Float: 0.707f */);
			switch (iVar0)
			{
				case 0:
					iVar1 = 8;
					break;
				case 1:
					iVar1 = 9;
					break;
				case 2:
					iVar1 = 10;
					break;
				case 3:
					iVar1 = 11;
					break;
			}
			if (func_362(iVar1, 3, sLocal_618, 0))
			{
				func_803(3);
				iLocal_29 = 0;
				iLocal_30 = 0;
				iLocal_25 = 1;
			}
			break;
		case 1:
			if (func_804(Global_35, 0f, 0f, 0f) && func_805(Global_35, 1))
			{
				if (!func_68(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_65[1 /*75*/], 0, -1f, -1f, -1f);
				}
				iLocal_25 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_369[3 /*16*/], true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[3 /*16*/], false))
				{
					if (!func_68(Global_35, 713668775))
					{
						iLocal_626 = 1;
						ANIMSCENE::START_ANIM_SCENE(Local_369[3 /*16*/]);
						TASK::TASK_LOOK_AT_ENTITY(Local_65[1 /*75*/], Global_35, 5000, 0, 51, 0);
						iLocal_25 = 3;
					}
				}
			}
			break;
		case 3:
			if (func_806(Local_369[3 /*16*/]))
			{
				func_339(3);
				func_176(0);
			}
			break;
	}
}

void func_339(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[iParam0 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_369[iParam0 /*16*/]);
	}
}

bool func_340()
{
	switch (iLocal_26)
	{
		case 0:
			if (func_362(20, 5, sLocal_620, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_369[1 /*16*/], "HorseBrush", iLocal_600);
				PED::SET_PED_CONFIG_FLAG(Local_65[2 /*75*/], 136, false);
				func_803(5);
				iLocal_26 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_369[5 /*16*/], true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[5 /*16*/], false))
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_369[5 /*16*/], 1.5f);
					ANIMSCENE::START_ANIM_SCENE(Local_369[5 /*16*/]);
					iLocal_26 = 2;
				}
			}
			break;
		case 2:
			if (func_806(Local_369[5 /*16*/]))
			{
				func_339(5);
				return true;
			}
			break;
	}
	return false;
}

bool func_341()
{
	switch (iLocal_27)
	{
		case 0:
			if (func_362(21, 6, sLocal_621, 0))
			{
				func_803(6);
				iLocal_27 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_369[6 /*16*/], true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[6 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_369[6 /*16*/]);
					iLocal_27 = 2;
				}
			}
			break;
		case 2:
			if (func_806(Local_369[6 /*16*/]))
			{
				func_339(6);
				return true;
			}
			break;
	}
	return false;
}

float func_342(var uParam0)
{
	if (!func_49(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_167(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_807() - uParam0->f_1);
}

void func_343()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_153();
}

void func_344(int iParam0, float fParam1, int iParam2)
{
	if (!func_326(iParam2))
	{
		func_343();
		func_808();
		iLocal_55 = iParam0;
		fLocal_56 = fParam1;
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, 0f, 0f, 0f, true, BUILTIN::FLOOR((fParam1 * 1000f)), 2000, 2000);
		func_50(&uLocal_52, 1);
		func_329(iParam2);
	}
}

void func_345(char[4] cParam0, char* sParam1, char[12] cParam2)
{
	if (!func_593(sParam1, 0, 0, -1, -1, 0))
	{
		func_332(sParam1);
		if (!func_49(&(cParam0->f_2067)))
		{
			func_50(&(cParam0->f_2067), 0);
		}
		else
		{
			func_166(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { cParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

void func_346(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 0);
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 1);
		ENTITY::_0xE31FC20319874CB3(iParam0, 1, 2);
	}
	else
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
	}
}

void func_347(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<13> Var1;
	int iVar24;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_809(iParam0);
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		Var1 = 1;
		Var1.f_1[0] = iParam1;
		Var1.f_12[0] = iParam2;
		iVar24 = 10;
		ENTITY::_0xA88E215CEB0435C0(iParam0, &Var1, iVar0, iVar24, 3, 0);
	}
}

void func_348(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_810(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_349(var uParam0, float fParam1)
{
	if (func_324(uParam0, fParam1))
	{
		func_325(uParam0);
		return true;
	}
	return false;
}

bool func_350(int iParam0)
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

int func_351(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_352(int iParam0)
{
	return func_811(iParam0, 3);
}

int func_353(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_812(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

void func_354()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	vector3 vVar11;

	if ((func_65(Local_65[0 /*75*/], 0) && func_352(Global_35)) && func_353(Global_35, 3) == Local_65[0 /*75*/])
	{
		if (!func_326(8192))
		{
			func_325(&uLocal_559);
			func_329(8192);
		}
	}
	if (func_326(8192) && !func_326(16384))
	{
		if (!func_352(Global_35))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*75*/], -1.5f, 0f, 0f) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*75*/], 1.5f, 0f, 0f) };
			fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true);
			fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar6, true);
			if (fVar9 < fVar10)
			{
				vVar11 = { vVar3 };
			}
			else
			{
				vVar11 = { vVar6 };
			}
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_65[0 /*75*/], -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_613);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
			func_329(16384);
		}
	}
}

void func_355(var uParam0, char[4] cParam1)
{
	if (func_813(uParam0))
	{
		if ((func_65(*uParam0, 0) && !PED::IS_PED_FLEEING(*uParam0)) && !func_68(*uParam0, 518218985))
		{
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
			if (*uParam0 == Local_65[0 /*75*/])
			{
				func_221(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
				if (func_814(*uParam0, 1, 1, 1, 0, 0))
				{
					bLocal_630 = true;
				}
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[1 /*16*/], false))
				{
					iLocal_24 = 7;
				}
				else
				{
					if (bLocal_630)
					{
						TASK::_TASK_INTIMIDATED_2(*uParam0, Global_35, 2, 0, 0, 0, 1, 0, 0);
					}
					else
					{
						func_815();
					}
					func_64(4);
				}
			}
			else if (*uParam0 == Local_65[1 /*75*/])
			{
				PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(*uParam0, 1108.619f, 503.5174f, 94.6871f, 3);
				if (func_814(*uParam0, 1, 1, 1, 0, 0))
				{
					TASK::_TASK_INTIMIDATED_2(*uParam0, Global_35, 2, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 3f, 0);
				}
				func_64(4);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 3f, 0);
				bLocal_633 = true;
			}
		}
	}
	if (func_214() != 13)
	{
		if (func_65(*uParam0, 0))
		{
			if (*uParam0 == Local_65[1 /*75*/])
			{
				if (func_814(*uParam0, 1, 1, 1, 0, 0))
				{
					bLocal_631 = true;
				}
				if (func_68(*uParam0, GET_HASH_KEY("SCRIPT_TASK_INTIMIDATED")))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, GET_HASH_KEY("SCRIPT_TASK_INTIMIDATED"), true) == 1)
					{
						if (!func_217(iLocal_17, 2))
						{
							func_221(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
							if (bLocal_631)
							{
								func_437();
								func_328(&(cParam1->f_2106), "LSHRC_DECY_FLEE", 0);
							}
							if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
							{
								func_70(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
								MAP::BLIP_ADD_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
							}
							if (!func_68(Local_65[0 /*75*/], 518218985))
							{
								func_815();
								func_64(256);
								func_339(1);
							}
							func_216(&iLocal_17, 2);
						}
					}
				}
			}
		}
	}
}

bool func_356()
{
	return func_816(1);
}

void func_357(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_358()
{
	fLocal_636 = (fLocal_641 / fLocal_635);
	fLocal_637 = (4f * fLocal_636);
	if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) <= 20)
	{
		fLocal_637 = 2.5f;
	}
	if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) <= 141)
	{
		fLocal_641 = 30f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 313)
	{
		fLocal_641 = 6f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 303)
	{
		fLocal_641 = 10f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) > 239)
	{
		fLocal_641 = 18f;
	}
	else if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_65[0 /*75*/]) >= 142)
	{
		fLocal_641 = 25f;
	}
	if (fLocal_637 < 1.501f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], 1.501f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else if (fLocal_637 > 3f)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_65[0 /*75*/], fLocal_637, 0, -1082130432 /* Float: -1f */, 0);
	}
}

void func_359()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!bLocal_627)
	{
		fLocal_638 = func_370(uLocal_602[0], 1174.338f, 793.8918f, 102.6291f, 1);
		fVar0 = func_370(Global_35, 1152.352f, 770.4551f, 95.8763f, 1);
		if (fLocal_639 != 0f && fLocal_639 < 8f)
		{
			if (fVar0 > fLocal_639)
			{
				fVar0 = fLocal_639;
			}
		}
		fLocal_639 = fVar0;
		fVar1 = ((fLocal_638 + 25f) / fLocal_639);
		fVar2 = (7f * fVar1);
		fVar3 = (fLocal_640 - fVar2);
		if (fVar3 > 0.05f)
		{
			fVar2 = (fLocal_640 - 0.05f);
		}
		fLocal_640 = fVar2;
	}
	else
	{
		func_50(&uLocal_574, 0);
		if (!func_324(&uLocal_574, 10f))
		{
			fVar4 = (func_342(&uLocal_574) / 10f);
			fLocal_640 = func_817(fLocal_642, 8f, fVar4);
		}
	}
	if (fLocal_640 < 8f)
	{
		fLocal_640 = 8f;
	}
	if (fLocal_640 >= 20f)
	{
		fLocal_640 = 20f;
	}
	if (bLocal_627 == 0 && fLocal_638 <= 1.5f)
	{
		bLocal_627 = true;
		fLocal_642 = fLocal_640;
	}
	VEHICLE::SET_TRAIN_SPEED(uLocal_602[0], fLocal_640);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_602[0], fLocal_640);
}

float func_360(int iParam0, int iParam1)
{
	return func_323(iParam0, iParam1, 1, 1);
}

void func_361(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 408396114;
	if (bParam2)
	{
		iVar0 = GET_HASH_KEY("BLIP_STYLE_COMPANION");
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_357(&(Local_65[iVar1 /*75*/].f_1));
		iVar1++;
	}
	if (!MAP::DOES_BLIP_EXIST(*uParam0) && func_65(iParam1, 0))
	{
		func_70(uParam0, iParam1, iVar0, 0);
		if (iParam1 == Local_65[1 /*75*/])
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_STRANGER");
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
		}
	}
}

bool func_362(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (Local_369[iParam1 /*16*/].f_2 == 0)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[iParam1 /*16*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_369[iParam1 /*16*/], true, false))
			{
				Local_369[iParam1 /*16*/].f_2 = 1;
			}
		}
		else
		{
			Local_369[iParam1 /*16*/].f_1 = sParam2;
			Local_369[iParam1 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_369[iParam1 /*16*/].f_1, iParam3, func_818(iParam0), false, true);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[iParam1 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_369[iParam1 /*16*/]);
			}
		}
	}
	return Local_369[iParam1 /*16*/].f_2;
}

bool func_363(int iParam0)
{
	return func_811(iParam0, 0);
}

float func_364(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0f;
	}
	if (func_167(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_807() - uParam0->f_1);
}

bool func_365(int iParam0, char[4] cParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	int iVar10;

	fVar9 = ENTITY::GET_ENTITY_HEADING(*uParam2);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_622))
	{
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_622, "money_handover_t02_arthur", ENTITY::GET_ENTITY_COORDS(*uParam2, true, false), ENTITY::GET_ENTITY_ROTATION(*uParam2, 2), 0f, 2) };
	}
	switch (iLocal_23)
	{
		case 0:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[iParam0 /*16*/], false))
			{
				func_339(iParam0);
				Local_369[iParam0 /*16*/].f_2 = 0;
			}
			else if (func_362(12, iParam0, sLocal_619, 0))
			{
				func_803(iParam0);
				func_336(&(uLocal_18[0]), 1, 1);
				func_336(&(uLocal_18[1]), 1, 1);
				MISC::_0xE98D55C5983F2509(*uParam2);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 297, false);
				PED::SET_PED_CONFIG_FLAG(*uParam2, 130, false);
				MISC::_0xE98D55C5983F2509(*uParam2);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
				TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
				if (func_323(Global_35, *uParam2, 1, 1) > 3f)
				{
					TASK::TASK_GO_TO_ENTITY(0, *uParam2, -1, 3f, 1f, 2f, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_613);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
				TASK::CLEAR_PED_TASKS(*uParam2, true, false);
				iLocal_634 = ENTITY::GET_ENTITY_HEALTH(Local_65[0 /*75*/]);
				iVar10 = ENTITY::GET_ENTITY_MAX_HEALTH(Local_65[0 /*75*/], false);
				ENTITY::SET_ENTITY_HEALTH(Local_65[0 /*75*/], iVar10, 0);
				iLocal_23 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_369[iParam0 /*16*/], true, false))
			{
				if ((!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[iParam0 /*16*/], false) && !PED::IS_PED_RAGDOLL(*uParam2)) && !TASK::IS_PED_GETTING_UP(*uParam2))
				{
					if (PED::IS_PED_FACING_PED(*uParam2, Global_35, 10f))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true, false) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar6.f_2), false);
						vVar3.f_2 = vVar6.z;
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_369[iParam0 /*16*/], vVar3, 0f, 0f, fVar9, 2);
						TASK::CLEAR_PED_TASKS(*uParam2, true, false);
						TASK::CLEAR_PED_SECONDARY_TASK(*uParam2);
						PED::SET_PED_CONFIG_FLAG(*uParam2, 297, false);
						PED::SET_PED_CONFIG_FLAG(*uParam2, 130, false);
						MISC::_0xE98D55C5983F2509(*uParam2);
						WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.15f, 512, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam2, 0, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
						TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_613);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
						func_307(0);
						func_328(&(cParam1->f_2106), "LSHRC_IG3_HAND", 0);
						ANIMSCENE::START_ANIM_SCENE(Local_369[iParam0 /*16*/]);
						iLocal_23 = 3;
					}
					else if (!func_68(Local_65[0 /*75*/], 242628503) && (!func_49(&uLocal_589) || func_324(&uLocal_589, 0.5f)))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
						TASK::TASK_STAND_STILL(0, 100);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
						TASK::TASK_PERFORM_SEQUENCE(*uParam2, iLocal_613);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
						func_166(&uLocal_589);
					}
				}
			}
			break;
		case 3:
			func_819(4, 13);
			func_819(4, 19);
			func_166(&uLocal_538);
			func_50(&uLocal_538, 0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[iParam0 /*16*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[iParam0 /*16*/], false))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_369[iParam0 /*16*/], "s_idle", true))
				{
					iLocal_23 = 4;
				}
			}
			break;
		case 4:
			func_819(4, 19);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_369[iParam0 /*16*/], func_818(19)))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_369[iParam0 /*16*/], "ARTHUR", func_818(19), 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_23 = 5;
			}
			break;
		case 5:
			func_64(8388608);
			func_819(4, 19);
			func_819(4, 14);
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_369[iParam0 /*16*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[iParam0 /*16*/], false)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_369[iParam0 /*16*/]) > 0.288f)
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_369[iParam0 /*16*/], "ARTHUR"))
				{
					iLocal_23 = 10;
				}
			}
			if (fLocal_635 > 10f)
			{
				iLocal_23 = 6;
			}
			break;
		case 6:
			if (func_820(iParam0, 14))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[iParam0 /*16*/], false))
				{
					if (!func_68(Local_65[0 /*75*/], 518218985))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_65[0 /*75*/]);
						TASK::TASK_SMART_FLEE_PED(Local_65[0 /*75*/], Global_35, 1000f, -1, 0, 1.5f, 0);
						func_334(131072);
					}
				}
			}
			break;
		case 10:
			if (!func_68(Global_35, 242628503))
			{
				if (func_820(iParam0, 19))
				{
					iLocal_23 = 2;
				}
			}
			break;
		case 2:
			if (func_806(Local_369[iParam0 /*16*/]))
			{
				func_339(iParam0);
				func_821(&iLocal_601);
				func_50(&uLocal_577, 0);
				return true;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(Local_369[iParam0 /*16*/], "pl_Action_02") && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_369[iParam0 /*16*/]) > 0.652f)
			{
				if (!func_206(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0))
				{
					func_74(GET_HASH_KEY("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_822(Local_65[0 /*75*/], 0);
				}
			}
			break;
	}
	return false;
}

int func_366(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_823(iParam0);
}

void func_367(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0.f_1 = sParam0;
	iVar2 = UIFEED::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_824(iVar2))
	{
		UIFEED::_0x2F901291EF177B02(iVar2, 0);
	}
}

bool func_368(int iParam0, bool bParam1)
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

void func_369(int iParam0, vector3 vParam1, int iParam4, char* sParam5, bool bParam6, float fParam7)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0))
	{
		if (!bParam6)
		{
			*iParam0 = MAP::BLIP_ADD_FOR_COORDS(iParam4, vParam1);
		}
		else
		{
			*iParam0 = MAP::BLIP_ADD_FOR_RADIUS(iParam4, vParam1, fParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam5);
		}
	}
}

float func_370(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_371()
{
	return func_825();
}

void func_372()
{
	switch (iLocal_64)
	{
		case 0:
			if (func_362(22, 7, sLocal_646, 0))
			{
				func_803(7);
				iLocal_64 = 1;
			}
			break;
		case 2:
			if (func_804(Global_35, 0f, 0f, 0f) && func_805(Global_35, 1))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_369[7 /*16*/], "player", "pbl_Action", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_64 = 3;
			}
			break;
		case 3:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[7 /*16*/], false) && ANIMSCENE::_0x337F1CC8EE895601(Local_369[7 /*16*/], "player"))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_369[7 /*16*/]);
				iLocal_64 = 4;
			}
			break;
		case 4:
			if (func_806(Local_369[7 /*16*/]))
			{
				func_339(7);
				func_74(GET_HASH_KEY("MONEY_LOANSHARK_HORSE_CHASE_DEBT"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_650) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_369[7 /*16*/]) > 0.898f)
			{
				OBJECT::DELETE_OBJECT(&iLocal_650);
			}
			break;
	}
}

int func_373(char[4] cParam0, char* sParam1, vector3 vParam2, int iParam5, float fParam6)
{
	float fVar0;

	if (func_826())
	{
		if (func_49(&(cParam0->f_2067)))
		{
			func_325(&(cParam0->f_2067));
		}
		return 0;
	}
	if (!func_160(vParam2))
	{
		cParam0->f_2073 = { vParam2 };
	}
	if (func_49(&(cParam0->f_2067)))
	{
		if (func_342(&(cParam0->f_2067)) >= IntToFloat(iParam5))
		{
			fVar0 = (cParam0->f_2076 - fParam6);
			if (fVar0 <= 0f)
			{
				fVar0 = (cParam0->f_2076 + fParam6);
			}
			if (fVar0 <= MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true))
			{
				func_94(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
				return 1;
			}
			else
			{
				func_166(&(cParam0->f_2067));
			}
		}
	}
	return 0;
}

bool func_374(int iParam0)
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

void func_375(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_374(iParam0))
	{
		return;
	}
	iVar0 = func_799(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

bool func_376(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_374(iParam0))
	{
		return false;
	}
	iVar0 = func_799(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

int func_377(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_160(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_827(iVar0, 2))
		{
			if (func_828(vParam2, Global_1945938[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_829(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_378(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_379(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

void func_380(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

int func_381()
{
	return Global_1899515;
}

void func_382(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_830(*iParam0);
	iVar1 = func_831(*iParam0);
	iVar2 = func_832(*iParam0);
	iVar3 = func_441(*iParam0);
	iVar4 = func_833(*iParam0);
	iVar5 = func_834(*iParam0);
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
	iVar6 = func_835(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_835(iVar1, iVar0);
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
	func_836(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_383(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (!func_105(iParam0))
	{
		return;
	}
	if (func_512(iParam0) == 4)
	{
		func_837(iParam0, func_381());
		if (!func_513(iParam0) == 5 && !func_513(iParam0) == 6)
		{
			if (bParam3)
			{
				func_404(iParam0, 6);
			}
			else
			{
				func_404(iParam0, 5);
			}
			func_838(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_518(1);
	}
	iVar0 = func_421(iParam0);
	bVar1 = func_250() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_839(0, 2);
		if (!bVar1 && bParam1)
		{
			func_840();
		}
	}
	else
	{
		func_519(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_841(iParam0);
	}
	else
	{
		Var2 = { func_608(GET_HASH_KEY("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_521(32768))
		{
			Var4 = { func_608(GET_HASH_KEY("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_513(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_406(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_406(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_406(iParam0) != 95 && func_406(iParam0) != 82) && !func_408(Global_1347702[func_406(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_406(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_406(iParam0) /*74*/].f_8), true);
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
		func_843(func_406(iParam0), iVar6, func_842());
	}
	else if (iVar0 == 8)
	{
		func_844(func_406(iParam0), iVar6, func_842(), func_534());
	}
	if (!func_513(iParam0) == 5 && !func_513(iParam0) == 6)
	{
		iVar9 = func_845(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_846(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_847(func_406(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_848((iVar10 - 20), 0, iVar10);
					iVar11 = func_848((iVar11 - 10), 0, iVar11);
				}
				func_849(1);
				func_850(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_850(45, 0, 1);
				break;
			case 8:
				iVar10 = func_851(func_406(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_848((iVar10 - 20), 0, iVar10);
					iVar11 = func_848((iVar11 - 10), 0, iVar11);
				}
				func_850(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_852(func_406(iParam0)))
				{
					func_853(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_850(120, 0, 1);
				break;
			case 2:
				func_850(120, 0, 1);
				break;
			case 6:
				func_850(func_854(func_422(iParam0)), 0, 1);
				break;
			case 5:
				func_850(120, 0, 1);
				break;
		}
	}
	func_532(iParam0, 1);
	func_837(iParam0, func_381());
	func_838(iParam0);
	if ((!func_513(iParam0) == 0 && bParam1) && func_250() == -1)
	{
		iVar12 = func_527(iParam0);
		if (iVar12 != -1)
		{
			func_90(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_528();
			if (iVar12 != -1)
			{
				func_90(0);
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
				switch (func_406(iParam0))
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
				if (func_407(func_406(iParam0)) && func_408(Global_1347702[func_406(iParam0) /*49*/].f_12, 4))
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
				if (func_406(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_663();
				}
				break;
			case 8:
				if (func_406(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_663();
				}
				break;
		}
	}
	if (!func_513(iParam0) == 5 && !func_513(iParam0) == 6)
	{
		if (bParam3)
		{
			func_404(iParam0, 6);
		}
		else
		{
			func_404(iParam0, 5);
		}
		func_838(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_406(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_855();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_74(GET_HASH_KEY("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_74(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_856(GET_HASH_KEY("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_74(GET_HASH_KEY("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(GET_HASH_KEY("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_857();
						func_858(GET_HASH_KEY("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_859();
						func_860();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_861(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_74(GET_HASH_KEY("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_HUNT_ROOT"), true);
							func_233(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_GAMB_ROOT"), true);
							func_233(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_862(304805134, 1, 1);
						if (!func_262(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_383(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_863();
						break;
					case 26:
						func_864();
						break;
					case 17:
						func_865(Global_35, GET_HASH_KEY("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_866())
						{
							func_867(GET_HASH_KEY("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_868(GET_HASH_KEY("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_381();
							func_382(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_869(GET_HASH_KEY("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_866())
						{
							func_867(GET_HASH_KEY("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_866())
						{
							func_867(GET_HASH_KEY("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_870();
						break;
					case 37:
						func_871();
						if (func_701())
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
						func_872();
						break;
					case 43:
						func_873();
						break;
					case 44:
						if (!func_262(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_383(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_262(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_383(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_874();
						break;
					case 59:
						func_875();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_876();
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
						func_877();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(GET_HASH_KEY("SP_CHAL_SURV_ROOT"), true);
							func_233(451, 0);
						}
						if (!func_878(GET_HASH_KEY("TAXIDERMY_ORDER_05")))
						{
							if (func_878(GET_HASH_KEY("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_381();
								func_382(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_869(GET_HASH_KEY("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_879(4))
						{
							if (!func_206(GET_HASH_KEY("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_381();
								func_382(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_869(GET_HASH_KEY("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_74(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_74(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_880(89200);
						func_880(2300);
						func_880(2300);
						break;
					case 68:
						func_881();
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
						func_882();
						func_880(-139100);
						break;
					case 69:
						if (func_262(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_880(-6000);
						}
						break;
					case 70:
						func_880(23400);
						func_880(1900);
						func_880(-15000);
						break;
					case 71:
						func_880(-5500);
						break;
				}
				break;
			case 8:
				switch (func_406(iParam0))
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
						func_883();
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
						func_884();
						break;
					case 66:
						func_885();
						func_886();
						break;
					case 67:
						if (!func_887(6))
						{
							func_888(6);
						}
						if (!func_887(3))
						{
							func_888(3);
						}
						if (func_866())
						{
							func_867(GET_HASH_KEY("WEAPON_PISTOL_M1899"));
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
						if (func_262(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_889(0);
							func_880(40500);
						}
						else
						{
							func_889(0);
							func_880(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_406(iParam0))
				{
					case 0:
						switch (func_422(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_890(iParam0);
		func_891();
		switch (iVar0)
		{
			case 1:
				switch (func_406(iParam0))
				{
					case 4:
						func_892(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_892(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_892(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_892(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_892(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_892(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_892(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_366(iParam0);
						func_892(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_892(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_892(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_206(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_74(GET_HASH_KEY("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_892(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_892(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_892(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_366(iParam0) == 0)
						{
							func_892(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_892(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_408(Global_1347702[func_406(iParam0) /*49*/].f_12, 536870912))
				{
					func_893(11, 1);
				}
				switch (func_406(iParam0))
				{
					case 109:
						func_892(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_893(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_892(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_892(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_892(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_892(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_894(0, 10, 11, GET_HASH_KEY("CABR01")))
				{
					func_892(iParam0, func_366(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_894(0, 7, 11, GET_HASH_KEY("CACR02")))
				{
					func_892(iParam0, func_895(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_894(0, 8, 11, GET_HASH_KEY("CACR03")))
				{
					func_892(iParam0, func_895(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_894(0, 11, 11, GET_HASH_KEY("CACR01")))
				{
					func_892(iParam0, func_895(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_894(0, 12, 11, GET_HASH_KEY("CACR04")))
				{
					func_892(iParam0, func_895(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_513(iParam0) == 0)
			{
				if (func_515(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_515(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_896(func_421(iParam0), func_515(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_406(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_898(func_897(Global_1879514.f_1));
						if (iVar0 == 8 && func_406(iParam0) == 58)
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
						if (func_407(func_406(iParam0)) && func_408(Global_1347702[func_406(iParam0) /*49*/].f_12, 1))
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
			func_669(bParam2, iVar20);
		}
	}
	func_531(1);
	if ((bVar13 || func_663()) && (func_421(iParam0) == 1 || func_421(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_384(int iParam0)
{
	if (!func_378(iParam0))
	{
		return;
	}
	else if (!func_105(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_115(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_512(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_411(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

bool func_385(int iParam0)
{
	iParam0 = func_623(iParam0);
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

bool func_386(int iParam0)
{
	int iVar0;

	iParam0 = func_623(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_385(iParam0))
	{
		return false;
	}
	iVar0 = func_630(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_387(int iParam0)
{
	int iVar0;

	iParam0 = func_623(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_385(iParam0))
	{
		return;
	}
	iVar0 = func_630(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_388(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_389()
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

int func_390(int iParam0)
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

void func_391(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

var func_392(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_393(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_188(sParam1));
}

void func_394(int iParam0)
{
	Global_1572864.f_11 = iParam0;
}

void func_395(bool bParam0)
{
	Global_1572864.f_14 = bParam0;
	if (bParam0)
	{
		func_397(1);
	}
}

void func_396(bool bParam0)
{
	Global_1572864.f_13 = bParam0;
	if (bParam0)
	{
		func_397(0);
	}
}

void func_397(int iParam0)
{
	Global_1572864.f_15 = iParam0;
}

void func_398(float fParam0)
{
	Global_1572864.f_22 = fParam0;
}

void func_399(bool bParam0)
{
	if (func_899())
	{
		Global_1357509 = 1;
	}
	if (func_900(GET_HASH_KEY("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, GET_HASH_KEY("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = GET_HASH_KEY("WEAPON_UNARMED");
	}
}

bool func_400(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_401()
{
	return Global_1572864.f_12;
}

void func_402(bool bParam0)
{
	int iVar0;
	struct<16> Var1;

	if (func_824(Global_1935630.f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_901();
	Var1.f_3.f_3 = iVar0;
	if ((!func_902(Global_1347343.f_2) && !func_400(Global_1347343.f_11, 64)) || func_521(32768))
	{
		Var1.f_7 = func_903();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_400(Global_1347343.f_11, 1024) && !func_521(32768))
	{
		Var1.f_11 = func_904();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_400(Global_1347343.f_11, 8))
	{
		Var1.f_15 = func_905();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343.f_1 != 2)
	{
		Global_1935630.f_3 = func_906(&Var1, "REPLAY_T", &(Global_1347343.f_3), 0, 1);
	}
	else
	{
		Global_1935630.f_3 = func_907(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	}
	func_98(&(Global_1347343.f_11), 1073741824 /* Float: 2f */);
	if (bParam0)
	{
		func_98(&(Global_1347343.f_11), 1048576);
	}
	CAM::_0x16E9ABDD34DDD931();
}

void func_403(int iParam0)
{
	int iVar0;

	if (!func_105(iParam0))
	{
		return;
	}
	if (iParam0 != func_104(0))
	{
		return;
	}
	if (func_515(iParam0) == 0)
	{
	}
	iVar0 = func_421(iParam0);
	if (func_513(iParam0) == 3)
	{
		if (func_515(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_515(iParam0)))
		{
			if (func_421(iParam0) != 1 && func_421(iParam0) != 8)
			{
				func_896(func_421(iParam0), func_515(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_838(iParam0);
	func_518(1);
	func_519(0);
	func_404(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_849(1);
			func_850(15, 0, 1);
			break;
		case 4:
			func_850(10, 0, 1);
			break;
		case 8:
			func_850(10, 0, 1);
			break;
		case 9:
			func_850(10, 0, 1);
			break;
		case 2:
			func_850(10, 0, 1);
			break;
		case 6:
			func_850(10, 0, 1);
			break;
		case 5:
			func_850(10, 0, 1);
			break;
	}
	func_531(1);
}

void func_404(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	func_908(iParam0, iParam1);
}

bool func_405()
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

int func_406(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_910(func_909(iParam0));
}

bool func_407(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_408(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_409(char[4] cParam0)
{
	int iVar0;

	switch (iLocal_24)
	{
		case 0:
			if (func_362(1, 1, sLocal_616, 0))
			{
				func_803(1);
				iLocal_24 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_369[1 /*16*/], true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[1 /*16*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_369[1 /*16*/]);
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			func_819(1, 2);
			func_819(1, 3);
			func_819(1, 4);
			func_819(1, 5);
			func_819(1, 6);
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_369[1 /*16*/]) > 0.98f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				switch (iVar0)
				{
					case 1:
						iLocal_24 = 3;
						break;
					case 2:
						iLocal_24 = 4;
						break;
					case 3:
						iLocal_24 = 5;
						break;
				}
			}
			break;
		case 3:
			func_820(1, 2);
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_369[1 /*16*/], "s_base", true))
			{
				iLocal_24 = 2;
			}
			break;
		case 4:
			func_820(1, 3);
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_369[1 /*16*/], "s_base", true))
			{
				iLocal_24 = 2;
			}
			break;
		case 5:
			func_820(1, 4);
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_369[1 /*16*/], "s_base", true))
			{
				iLocal_24 = 2;
			}
			break;
		case 6:
			func_820(1, 5);
			TASK::TASK_LOOK_AT_ENTITY(Local_65[0 /*75*/], Global_35, 5000, 0, 51, 0);
			iLocal_24 = 2;
			break;
		case 7:
			func_820(1, 6);
			func_437();
			iLocal_24 = 8;
			break;
		case 8:
			if (ANIMSCENE::_0x1F0E401031E20146(Local_369[1 /*16*/], "pl_BreakOut"))
			{
				func_437();
				if (func_214() != 13)
				{
					func_328(&(cParam0->f_2106), "LSHRC_HAND_FLEE", 0);
				}
				iLocal_24 = 9;
			}
			break;
		case 9:
			if (func_806(Local_369[1 /*16*/]))
			{
				if (bLocal_630 == 0)
				{
					if (!func_68(Local_65[0 /*75*/], 518218985))
					{
						func_815();
					}
					if (!func_68(Local_65[2 /*75*/], 518218985))
					{
						TASK::TASK_SMART_FLEE_PED(Local_65[2 /*75*/], Global_35, 1000f, -1, 0, 3f, 0);
					}
				}
				else if (func_214() != 13)
				{
					func_50(&uLocal_568, 1);
					TASK::_TASK_INTIMIDATED_2(Local_65[0 /*75*/], Global_35, 2, 0, 0, 0, 0, 0, 0);
				}
				func_339(1);
				func_64(4);
				iLocal_24 = 10;
			}
			break;
		case 10:
			if ((AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING("LSHRC_HAND_FLEE") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHRC_HAND_FLEE") >= 1) || (func_324(&uLocal_568, 5f) && func_214() != 13))
			{
				if (!func_68(Local_65[0 /*75*/], 518218985))
				{
					if (!MAP::DOES_BLIP_EXIST(Local_65[0 /*75*/].f_1))
					{
						func_70(&(Local_65[0 /*75*/].f_1), Local_65[0 /*75*/], GET_HASH_KEY("BLIP_STYLE_COMPANION"), 0);
						MAP::BLIP_ADD_MODIFIER(Local_65[0 /*75*/].f_1, -546708623);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_65[0 /*75*/].f_1, "BLIP_CHICK");
					}
					func_815();
					func_64(256);
					iLocal_24 = 11;
				}
			}
			break;
	}
}

bool func_410(int iParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		return false;
	}
	else if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		if (fParam1 == -1f)
		{
			fParam1 = func_370(iParam0, Global_36, 0);
		}
		if (fParam1 > fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_411(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_105(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_178(iParam0) && !func_179(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_515(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_178(iParam0))
	{
		iParam2 = -1;
	}
	if (func_513(iParam0) == 3 || (func_513(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_515(iParam0))))
	{
		func_896(func_421(iParam0), func_515(iParam0), iParam2);
		if ((!func_105(Global_1572864.f_8) && !func_103(0, 1, 0)) && !func_169(Global_1935630, 32768))
		{
			iVar0 = func_527(iParam0);
			if (iVar0 != -1)
			{
				func_90(0);
			}
			else if (func_421(iParam0) == 8)
			{
				iVar0 = func_528();
				if (iVar0 != -1)
				{
					func_90(0);
				}
			}
		}
	}
	func_404(iParam0, 0);
	if (func_104(0) == iParam0)
	{
		func_518(1);
		func_519(0);
		func_531(1);
	}
	func_532(iParam0, 1);
	func_838(iParam0);
}

void func_412(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_413(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_414(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_415(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
}

int func_416(int iParam0)
{
	if (!func_425(iParam0))
	{
		return 0;
	}
	if (!func_427(func_426(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_428(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_428(iParam0));
	return 1;
}

void func_417(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_418(var uParam0)
{
	*uParam0 = 0;
}

void func_419(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_911(vVar0, 0);
}

void func_420(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_912(vVar0, vVar3, 0f) };
	vVar9 = { func_913(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

int func_421(int iParam0)
{
	if (!func_105(iParam0))
	{
		return 0;
	}
	return func_914(func_909(iParam0));
}

int func_422(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_915(func_909(iParam0));
}

int func_423(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_424(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_160(vParam0))
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
		if (func_916(vParam0))
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
	func_917(iVar0, bParam8);
	return iVar0;
}

bool func_425(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_426(int iParam0)
{
	if (!func_425(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_427(int iParam0)
{
	return iParam0 != 0;
}

int func_428(int iParam0)
{
	if (!func_425(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_429(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_430(int iParam0)
{
	if (func_918(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_431(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_430(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_432(int iParam0, bool bParam1)
{
	if (func_430(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_433(int iParam0, bool bParam1)
{
	if (func_430(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_434(int iParam0, bool bParam1)
{
	if (func_430(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_435()
{
	return true;
}

void func_436()
{
	if (func_327("LSHRC_HAND_FLEE"))
	{
		func_919("LSHRC_HAND_FLEE", 0);
	}
	if (func_327("LSHRC_DECY_FLEE"))
	{
		func_919("LSHRC_DECY_FLEE", 0);
	}
}

void func_437()
{
	if (func_327("LSHRC_PROX_HAND"))
	{
		func_919("LSHRC_PROX_HAND", 0);
	}
	if (func_327("LSHRC_PROX_DECY"))
	{
		func_919("LSHRC_PROX_DECY", 0);
	}
}

void func_438(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_439(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_440(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_441(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_442(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_443(int iParam0)
{
	int iVar0;

	if (!func_920(iParam0))
	{
		return false;
	}
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
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_921(bParam1, bParam2, bParam3);
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

void func_445(var uParam0, bool bParam1, int iParam2)
{
	func_922(iParam2);
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
		uParam0->f_13 = func_923(0);
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
							func_126(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_924(1))
						{
							func_126(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_924(1) || *uParam0 & 8192 != 0))
				{
					func_125(uParam0, 33554432);
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
			if (func_925(uParam0))
			{
				uParam0->f_15 = func_168();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_168() - uParam0->f_15) > 500)
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
	func_926(uParam0);
}

bool func_446(int iParam0, var uParam1)
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
			if (!func_927(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_360(iParam0, iVar2) <= func_928(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_447(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_929(iParam2, 1, 1, 1, 0))
	{
		func_126(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_930(uParam1, 1);
	func_153();
}

bool func_448(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_814(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_931(uParam1);
			if (func_932(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_933(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_930(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_930(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_449(int iParam0, int iParam1, var uParam2)
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
	if (func_934(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_931(uParam2);
		if (func_932(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_933(uParam2)
				{
					func_930(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_450(int iParam0, var uParam1)
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
	if (func_927(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_933(uParam1)
		{
			fVar3 = func_931(uParam1);
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

bool func_451(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_168();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_452(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_935(uParam2);
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
			if (func_460(uParam2, iParam1))
			{
				func_930(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_453(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_936(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_460(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_930(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_454(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_937(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_930(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_930(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, 0, 0);
					if (func_938(iParam1, vVar0, vVar4))
					{
						func_930(uParam2, 1);
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
					func_930(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(GET_HASH_KEY("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, GET_HASH_KEY("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, 0, 0);
					if (func_938(iParam1, vVar0, vVar7))
					{
						func_930(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_455(int iParam0, var uParam1)
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
		if (!func_927(iParam0, uParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_939(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_940(Global_1935630.f_34[iVar0]))
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
			if (func_941(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_942(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_943(uParam1, iParam0, fVar1, iVar0))
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

bool func_456(int iParam0, var uParam1)
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

bool func_457(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_168();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_458(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_944(iVar0, &iVar2))
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
	if (func_945(iVar0, iParam0))
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

int func_459(var uParam0, int iParam1)
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

bool func_460(var uParam0, int iParam1)
{
	if (func_946(uParam0))
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

bool func_461(int iParam0, int iParam1)
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

void func_462()
{
}

bool func_463(var uParam0, int iParam1)
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
		if (func_947(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_168();
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
						if (func_370(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_168();
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

bool func_464()
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
	if ((func_168() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_465(var uParam0, int iParam1)
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
	fVar0 = func_928(uParam0);
	if (uParam0->f_12 > func_948(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_949(iParam1);
	iVar1 = func_950(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_466(int iParam0, int iParam1, var uParam2)
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
	return func_951(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_467(int iParam0, var uParam1)
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
		if (func_952(iParam0, uParam1, 1))
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
					if (!func_953(uParam1, iParam0))
					{
						if (func_370(iVar4, Global_36, 1) < 7f)
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

bool func_468(int iParam0, var uParam1)
{
	if (!func_954(0))
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

bool func_469(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_168();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_470(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_471(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_168();
	}
	else if (func_168() - uParam1->f_4) > func_955(uParam1)
	{
		return func_956(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_472(var uParam0, int iParam1)
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

void func_473(var uParam0)
{
	func_957(uParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_474(char[4] cParam0, int iParam1)
{
	cParam0->f_14 = iParam1;
}

void func_475()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_65(Local_65[iVar0 /*75*/], 1))
		{
			PED::SET_PED_KEEP_TASK(Local_65[iVar0 /*75*/], true);
		}
		iVar0++;
	}
}

bool func_476(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_477(int iParam0, bool bParam1)
{
	if (!func_476(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_958(iParam0), func_959(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_958(iParam0), func_959(iParam0), 2, "");
		func_960(iParam0, 16);
	}
	else
	{
		if (func_476(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_958(iParam0), func_959(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_958(iParam0), func_959(iParam0), 0, "");
		}
		func_961(iParam0, 16);
	}
}

void func_478(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_476(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_958(iParam0), func_959(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_476(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_958(iParam0), func_959(iParam0), 1, "");
		}
		func_960(iParam0, 8);
	}
	else
	{
		if (func_476(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_958(iParam0), func_959(iParam0), 0, "");
		}
		func_961(iParam0, 8);
	}
}

float func_479(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_480(int iParam0)
{
	func_963(iParam0, func_962(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2f));
}

void func_481(int iParam0, int iParam1)
{
	if (func_378(iParam0))
	{
		Global_40.f_9052.f_11[iParam0] = (Global_40.f_9052.f_11[iParam0] || iParam1);
	}
}

void func_482(int iParam0, bool bParam1)
{
	if (func_250() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_521(32768))
	{
		return;
	}
	if (!func_521(32768))
	{
		func_964(1, bParam1);
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
	if (func_521(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_381();
	}
}

int func_483(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = GET_HASH_KEY("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, bParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_484(int iParam0, int iParam1)
{
	var uVar0;

	return func_965(&uVar0, iParam0, iParam1);
}

bool func_485(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != GET_HASH_KEY("WEAPON_UNARMED"));
}

void func_486(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_485(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_966(1);
	}
}

void func_487(int iParam0, vector3 vParam1, var uParam4)
{
	Global_2621440[iParam0 /*12066*/].f_9.f_7 = { vParam1 };
	Global_2621440[iParam0 /*12066*/].f_9.f_13 = uParam4;
	Global_2621440[iParam0 /*12066*/].f_9 = 5;
	Global_2621440[iParam0 /*12066*/].f_9.f_15 = func_967(vParam1, 1);
}

void func_488(char[4] cParam0, char* sParam1)
{
	StringCopy(&(cParam0->f_2208), sParam1, 16);
}

bool func_489(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_490(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_489(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_224), {func_968("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_224), {func_968("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_311(uParam0, 8192);
}

Vector3 func_491(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_492(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_969(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_229))
	{
		uParam0->f_229 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_224), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_229, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_229, func_970(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_229, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_229);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_493(var uParam0, vector3 vParam1)
{
	if (func_160(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_494(var uParam0)
{
	return uParam0->f_219;
}

void func_495()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_971(Var0);
	}
}

void func_496(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_228, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_246[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_228, &(uParam0->f_246[iVar0 /*9*/]));
		}
		uParam0->f_246[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_497(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_228))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_228);
	}
}

float func_498(var uParam0)
{
	return uParam0->f_218;
}

struct<8> func_499(var uParam0)
{
	return uParam0->f_230;
}

void func_500(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_972() };
	func_772(uParam0, &Var0);
}

void func_501(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_489(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_511(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_973());
		func_311(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_974(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_311(uParam0, 16);
	}
}

void func_502(var uParam0)
{
	if ((!func_489(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_228)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_228, false))
	{
		func_975(uParam0);
		func_976(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_228, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_228);
		}
		func_311(uParam0, 32768);
	}
}

bool func_503()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_504(int iParam0)
{
	struct<4> Var0;

	if (func_977(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_971(Var0);
}

bool func_505(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar6 = { VOLUME::_GET_VOLUME_ROTATION(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return true;
}

void func_506(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_807() - fParam1);
	func_978(uParam0, 1);
	func_979(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_507(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_980(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_508(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0xA2F8B3B5FEDFC100(iParam0, GET_HASH_KEY("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_509(var uParam0, int iParam1, char* sParam2)
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

void func_510(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

bool func_511(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_512(int iParam0)
{
	if (!func_105(iParam0))
	{
		return -1;
	}
	return func_513(iParam0);
}

int func_513(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_981(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_514(int iParam0)
{
	return func_512(iParam0) == 0;
}

int func_515(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_516(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_920(iParam0))
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

void func_517(int iParam0)
{
	if (!func_105(iParam0))
	{
		return;
	}
	func_983(iParam0, func_982(iParam0) + 1);
}

void func_518(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_91(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_182(&Global_1935630, 4194304);
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

int func_519(bool bParam0)
{
	if (!bParam0 && func_984(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(GET_HASH_KEY("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_520(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_985(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	func_986(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_987(iVar0, iParam1);
	return iParam1;
}

bool func_521(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_522(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_523(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_524(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_525(bool bParam0)
{
	func_988(bParam0);
	func_989(bParam0);
	func_990(bParam0);
	func_991(bParam0);
	func_992(bParam0);
	func_993(bParam0);
	func_994(bParam0);
	func_995(bParam0);
}

void func_526(bool bParam0)
{
	if (func_250() != -1)
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
		func_233(89, 1);
		ATTRIBUTE::_START_PERIODIC_ICON(5);
	}
	else
	{
		func_233(90, 1);
		ATTRIBUTE::_STOP_PERIODIC_ICON(5);
	}
	func_996(1, bParam0, 1);
	func_283();
	Global_40.f_11095.f_43 = bParam0;
}

int func_527(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_421(iParam0))
	{
		case 1:
			iVar0 = func_406(iParam0);
			return func_997(iVar0);
		case 8:
			iVar1 = func_406(iParam0);
			if (func_408(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_998(iVar1);
			}
			break;
	}
	return -1;
}

int func_528()
{
	if (!func_262(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_262(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_262(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_262(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_262(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_262(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_262(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_529(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_250() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_999(Global_1898077.f_7, Global_1898077.f_3);
}

void func_530(int iParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_250() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = iVar0;
	func_1000(Global_1898077.f_7, Global_1898077.f_4);
}

void func_531(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_532(int iParam0, bool bParam1)
{
	if (func_250() != -1)
	{
		return;
	}
	if (func_104(0) != iParam0)
	{
		return;
	}
	if (func_1001(iParam0))
	{
		if (bParam1)
		{
			func_1002(-525676072);
		}
		else
		{
			func_1003(-525676072);
		}
	}
}

void func_533(float fParam0)
{
	func_1004(10, fParam0);
}

bool func_534()
{
	if (func_250() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == GET_HASH_KEY("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_535()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

bool func_536(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	func_595(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = func_370(iParam0, vParam1, 1);
	if (!func_49(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_50(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_325(uParam4);
	}
	if (func_49(uParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_342(uParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1005(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_1005(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

int func_537(var uParam0)
{
	return uParam0->f_1;
}

void func_538(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_1006(uParam0, 4);
	if (func_1007(uParam0, &uParam1, iParam5))
	{
		func_546(uParam0, 1);
	}
}

void func_539(var uParam0)
{
	if (!func_1008(uParam0))
	{
		return;
	}
	if (!func_308(uParam0, 4194304))
	{
		func_1009(uParam0);
		func_555(uParam0, 4194304);
	}
	if (func_1010(uParam0))
	{
		func_1011(uParam0);
		func_1012(uParam0);
		func_546(uParam0, 2);
	}
}

void func_540(var uParam0)
{
	uParam0->f_1451 = -1;
	func_545(uParam0, 0);
	func_546(uParam0, 3);
	func_1013(uParam0, 0);
	func_325(&(uParam0->f_1635));
	func_1014(uParam0);
	func_325(&(uParam0->f_1638));
}

void func_541(var uParam0)
{
	bool bVar0;

	if (!func_308(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(GET_HASH_KEY("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(GET_HASH_KEY("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_1015(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1015(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_555(uParam0, 134217728);
		}
	}
}

void func_542(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!func_308(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!func_308(uParam0, 4096) && uParam0->f_1662)
	{
		return;
	}
	if (!func_308(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_553(uParam0);
	func_1016(uParam0, uParam0->f_1663, uParam0->f_1665);
	func_1017(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !func_156(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !func_308(uParam0, 33554432)) && !func_308(uParam0, 4))
		{
			func_1018(uParam0, uParam0->f_1663);
			return;
		}
	}
	if (!func_308(uParam0, 4))
	{
		if (func_1019(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1450 = uParam0->f_1454;
				func_555(uParam0, 8);
				return;
			}
		}
		else
		{
			func_1018(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = func_1020(uParam0, uParam0->f_1456);
			if (fVar0 < 0f || (uParam0->f_1663 && fVar0 < 1f))
			{
				uParam0->f_1454 = uParam0->f_1456;
				if (!bParam2)
				{
					uParam0->f_1450 = uParam0->f_1456;
					func_555(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1455 == -1f || fVar0 <= uParam0->f_1455) || uParam0->f_1456 == uParam0->f_1454)
				{
					if (uParam0->f_1456 != uParam0->f_1454)
					{
					}
					uParam0->f_1454 = uParam0->f_1456;
					uParam0->f_1455 = fVar0;
					func_555(uParam0, 16);
					if (((!func_308(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, true) < (uParam0->f_782[uParam0->f_1454 /*41*/].f_11 + 5f))
					{
						func_1021(uParam0);
						func_555(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1454 == uParam0->f_1456)
			{
				func_314(uParam0, 16);
			}
		}
		if (uParam0->f_1456 + 1 >= 8)
		{
			uParam0->f_1456 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1456 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_782[iVar2 /*41*/].f_29)
				{
					uParam0->f_1456 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1456 = 0;
			}
		}
		if (uParam0->f_1454 < 0)
		{
			return;
		}
		if (func_316(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 2) && uParam0->f_1663)
		{
			return;
		}
	}
	if (func_308(uParam0, 16))
	{
		fVar4 = func_370(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		if (uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_JUMP"), false);
		}
		fVar5 = func_1022(Global_36, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_782[uParam0->f_1454 /*41*/].f_17 || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_1.f_2 + uParam0->f_782[uParam0->f_1454 /*41*/].f_10))
			{
				func_552(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1665 && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1667) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1667, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
			}
		}
		else if ((uParam0->f_1663 && fVar4 <= (uParam0->f_782[uParam0->f_1454 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1664))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1664, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1663 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1664) > 1.25f) || func_308(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1641, uParam0->f_1645) && func_1020(uParam0, uParam0->f_1454) < 10000f) && func_308(uParam0, 16)) || func_308(uParam0, 4))
		{
			if (!func_308(uParam0, 4))
			{
				func_555(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_550(uParam0, uParam0->f_1454))
			{
				iVar7 |= 2048;
			}
			if (func_1023(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1452 = 0;
				func_314(uParam0, 4);
			}
		}
	}
	else if (func_308(uParam0, 4))
	{
		func_314(uParam0, 4);
	}
}

int func_543(var uParam0)
{
	return *uParam0;
}

void func_544(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_308(uParam0, 512))
	{
		return;
	}
	if (func_364(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (func_1024(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_555(uParam0, 524288);
	}
}

void func_545(var uParam0, int iParam1)
{
	uParam0->f_1449 = iParam1;
}

void func_546(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_547(var uParam0, int iParam1)
{
	int iVar0;

	if (func_315(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			HUD::_DISPLAY_HUD_COMPONENT(474191950);
			break;
		default:
			if (func_1025())
			{
				if (!func_308(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_1025())
	{
		func_314(uParam0, 512);
		func_1026(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_1027(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_1028(uParam0->f_782[uParam0->f_1450 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_1029();
	func_1030(uParam0, 1, 0);
	func_1031(uParam0);
	if (func_308(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_1026(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1641);
	}
	if (func_315(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_1032()))
	{
		CAM::_0x798BE43C9393632B(func_1032());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1111[iVar0 /*22*/].f_2), func_1032())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1111[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1111[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_308(uParam0, 524288) || iParam1 == 1)
	{
		func_1033();
	}
	if (func_315(uParam0, 16))
	{
		if (func_543(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
		}
	}
	func_1034();
	if (func_315(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1667))
	{
		if (!func_308(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1667) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1667))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
		}
	}
	func_560(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1687);
	}
	return 1;
}

void func_548(bool bParam0)
{
	if (bParam0)
	{
		func_1035(4);
	}
	func_1035(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_549()
{
	Global_1905944.f_5695 = 1;
}

bool func_550(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_241[iVar0 /*18*/].f_17 == 1 && uParam0->f_241[iVar0 /*18*/].f_2 == 4) && uParam0->f_241[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_551(var uParam0)
{
	return uParam0->f_2;
}

void func_552(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_774(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_774(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1663)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1664, 214, true);
	}
	if (uParam0->f_1662 && func_308(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_774(uParam1, 262144) && Global_1935630.f_44 == GET_HASH_KEY("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_1036(&iVar1, uParam2);
	func_1037(&(uParam0->f_1670), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_308(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_1038();
	func_1039(uParam0, 1);
}

void func_553(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;

	iVar0 = uParam0->f_1454;
	if (iVar0 >= 0 && !func_559(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), func_1040(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), func_1032(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1040(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), func_1041(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1458)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1458.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1111[iVar0 /*22*/])
		{
			if (!func_1042(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!func_1042(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					func_1036(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					func_1043(&(uParam0->f_1670), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_782[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1111[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 17)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1111[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_1042(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1111[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668) || iVar26 != uParam0->f_1668))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
											func_1026(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1044(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_1022(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = func_1042(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_1042(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_1042(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_1045(0, 0);
								}
								bVar32 = true;
								func_1026(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !func_828(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1474.f_22 != bVar30);
								uParam0->f_1474.f_16 = iVar23;
								uParam0->f_1474.f_17 = { vVar20 };
								uParam0->f_1474.f_20 = fVar27;
								uParam0->f_1474.f_21 = fVar28;
								uParam0->f_1474.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1474 = { uParam0->f_1458 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1474));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1497.f_16 != iVar23);
								bVar32 = (bVar32 || !func_828(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1497.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1497.f_21 != bVar30);
								uParam0->f_1497.f_16 = iVar23;
								uParam0->f_1497.f_17 = { vVar20 };
								uParam0->f_1497.f_20 = !bVar31;
								uParam0->f_1497.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1497 = { uParam0->f_1458 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1497));
								}
							}
							Jump @1468; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
							}
							StringCopy(&(uParam0->f_1458), "", 64);
							StringCopy(&(uParam0->f_1458.f_8), "", 64);
							func_1046(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_554(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_1047(uParam0, &iVar0))
	{
		func_1048(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_555(var uParam0, int iParam1)
{
	uParam0->f_1430 = (uParam0->f_1430 || iParam1);
}

void func_556(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_543(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1454;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_782[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_782[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_782[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_782[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_1641);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1641) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_782[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_782[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_782[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_782[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668))
			{
				func_555(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1668 == iVar9)
			{
				func_555(uParam0, 65536);
				return;
			}
		}
		func_314(uParam0, 65536);
	}
}

void func_557(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_537(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1660)
		{
			if (uParam0->f_241[iVar0 /*18*/].f_7)
			{
				func_1049(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = func_1050(uParam0, iVar0);
				if (bVar1)
				{
					func_1051(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_550(uParam0, uParam0->f_1450))
		{
			func_1052(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_1049(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = func_1050(uParam0, iVar0);
			if (bVar1)
			{
				func_1051(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1457 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1457 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_558(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1687))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1687);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1687);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_559(var uParam0, int iParam1)
{
	return (uParam0->f_1431 && iParam1) != 0;
}

void func_560(var uParam0)
{
	func_1053(&(uParam0->f_1670));
}

void func_561(var uParam0)
{
	uParam0->f_1431 = 0;
}

void func_562(int iParam0)
{
	int iVar0;

	if (func_250() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_65(func_1054(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_1054(iVar0), func_1055(), 1))
			{
				func_1056(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_563()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_564(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_370(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_14 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_565(var uParam0)
{
	if (uParam0->f_1450 >= 0)
	{
		if (func_370(Global_35, uParam0->f_782[uParam0->f_1450 /*41*/].f_1, 0) < uParam0->f_782[uParam0->f_1450 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_782[uParam0->f_1450 /*41*/].f_15 >= uParam0->f_782[uParam0->f_1450 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_566(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_1451 < 0)
	{
		return true;
	}
	switch (uParam0->f_241[uParam0->f_1451 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (func_342(&(uParam0->f_1638)) >= 15f)
			{
				func_555(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (func_342(&(uParam0->f_1638)) >= 15f)
				{
					func_555(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_1057(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_1057(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_1057(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_1057(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_1057(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_342(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

bool func_567(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_568(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_241[iVar0 /*18*/].f_17 == 2 && func_1058(&(uParam0->f_241[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_569(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_570(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_571(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1059(iParam0, iParam1))
		{
			if (!func_442(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_200(uParam2, 0, 0, 1, 0);
				func_126(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_442(iParam1->f_10, 1))
		{
			func_1060(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_125(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_572(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_442(iParam4, 32);
		func_1061(iParam1, uParam2, 0);
		iVar5 = func_1062(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_200(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_442(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_442(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_442(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_442(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_442(iParam4, 8388608) || func_442(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_442(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_442(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_574(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_574(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_442(iParam4, 67108864))
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
				iParam6 = func_1063(uParam0);
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
			if (func_442(iParam4, 268435456))
			{
				iVar8 = func_1064(uParam2, GET_HASH_KEY("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1065(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_574(iParam1, 23))
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
			if (func_442(iParam4, 2) || func_442(iParam4, 16))
			{
				func_573(*uParam0, 1, 1);
			}
			else
			{
				func_573(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_573(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_574(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_575(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1066(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_576(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1067(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_442(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_577(int iParam0)
{
	if (func_442(iParam0, 4))
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
	if (func_442(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_RELOAD"), false);
	}
	if (func_442(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, GET_HASH_KEY("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_578(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_1068(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_1069(Global_35)) || func_1070(Global_35)) || func_1071(Global_35));
	fVar12 = -1f;
	if (func_49(&(iParam1->f_13)))
	{
		fVar12 = func_342(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_374((uParam4[iVar0 /*17*/])->f_6);
		func_1072(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1073(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1074(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_200(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1075(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_1061(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_1076(iParam1, fParam6, iParam1->f_9))
					{
						func_166(&(iParam1->f_18));
						if (bVar6)
						{
							func_1075(uParam4, 0, 0);
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
		func_1077(iParam1, fParam2);
	}
	return bVar5;
}

void func_579(var uParam0)
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

void func_580(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1078(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_1077(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_581(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, GET_HASH_KEY("INPUT_INTERACT_LOCKON")))
		{
			if (func_1079(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1080(iParam1, 0);
				func_1061(iParam1, uParam2, func_574(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_582(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_166(&(iParam1->f_18));
			return false;
		}
		else if (func_49(&(iParam1->f_18)))
		{
			func_325(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_49(&(iParam1->f_18)))
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
	return func_349(&(iParam1->f_18), fParam2);
	return true;
}

void func_583(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1072(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_584(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_585(int* iParam0, var uParam1)
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
	func_1061(iParam0, uParam1, 1);
	func_200(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_586()
{
	if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == Local_65[0 /*75*/] || PED::GET_MELEE_TARGET_FOR_PED(Global_35) == Local_65[1 /*75*/])
	{
		if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		{
			return true;
		}
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Local_65[0 /*75*/]) || PED::IS_PED_IN_MELEE_COMBAT(Local_65[1 /*75*/]))
	{
		return true;
	}
	return false;
}

void func_587(char[4] cParam0)
{
	float fVar0;
	float fVar1;
	struct<23> Var2;
	struct<23> Var27;

	fVar0 = func_323(Local_65[0 /*75*/], Global_35, 1, 1);
	fVar1 = func_323(Local_65[1 /*75*/], Global_35, 1, 1);
	if (((fVar0 <= 7f && !Local_65[0 /*75*/].f_6) && !func_215(4)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_65[0 /*75*/], 17))
	{
		if (!func_49(&uLocal_544))
		{
			func_50(&uLocal_544, 0);
		}
		if (func_342(&uLocal_544) >= 5f && iLocal_24 < 7)
		{
			if (!func_356())
			{
				if (!func_327("LSHRC_PROX_HAND"))
				{
					func_328(&(cParam0->f_2106), "LSHRC_PROX_HAND", 0);
					func_64(262144);
					func_166(&uLocal_544);
					func_50(&uLocal_544, 0);
				}
			}
			Var2.f_4 = -1;
			Var2.f_8 = 2;
			Var2.f_9 = 1;
			Var2.f_10 = 1;
			Var2.f_11 = 1;
			Var2.f_13 = 1;
			Var2.f_14 = 2;
			Var2.f_15 = 2;
			Var2.f_16 = 3;
			Var2.f_19 = 3;
			Var2.f_20 = 1;
			Var2.f_21 = 3;
			Var2.f_22 = 3;
			Var2.f_7 = 8000;
			Var2.f_9 = 1;
			Var2.f_10 = 1;
			Var2.f_11 = 1;
			Var2.f_12 = 0;
			Var2.f_8 = 4;
			Var2.f_17 = 0;
			Var2.f_18 = 0;
			Var2.f_19 = 4;
			Var2.f_20 = 4;
			Var2.f_21 = 4;
			Var2.f_22 = 4;
			Var2.f_3 = Global_35;
			Var2.f_4 = 21030;
			Var2.f_14 = 2;
			Var2.f_15 = 2;
			IK::_0x66F9EB44342BB4C5(Local_65[0 /*75*/], &Var2);
		}
	}
	else if (func_49(&uLocal_544))
	{
		func_325(&uLocal_544);
	}
	if (((fVar1 <= 7f && !Local_65[1 /*75*/].f_6) && !func_215(4)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_65[1 /*75*/], 17))
	{
		if (!func_49(&uLocal_541))
		{
			func_50(&uLocal_541, 0);
		}
		if (func_342(&uLocal_541) >= 5f)
		{
			if (!func_215(524288))
			{
				if (!func_356())
				{
					if (!func_327("LSHRC_PROX_DECY"))
					{
						func_328(&(cParam0->f_2106), "LSHRC_PROX_DECY", 0);
						func_64(524288);
					}
				}
			}
			Var27.f_4 = -1;
			Var27.f_8 = 2;
			Var27.f_9 = 1;
			Var27.f_10 = 1;
			Var27.f_11 = 1;
			Var27.f_13 = 1;
			Var27.f_14 = 2;
			Var27.f_15 = 2;
			Var27.f_16 = 3;
			Var27.f_19 = 3;
			Var27.f_20 = 1;
			Var27.f_21 = 3;
			Var27.f_22 = 3;
			Var27.f_7 = 8000;
			Var27.f_9 = 1;
			Var27.f_10 = 1;
			Var27.f_11 = 1;
			Var27.f_12 = 0;
			Var27.f_8 = 4;
			Var27.f_17 = 0;
			Var27.f_18 = 0;
			Var27.f_19 = 4;
			Var27.f_20 = 4;
			Var27.f_21 = 4;
			Var27.f_22 = 4;
			Var27.f_3 = Global_35;
			Var27.f_4 = 21030;
			Var27.f_14 = 2;
			Var27.f_15 = 2;
			IK::_0x66F9EB44342BB4C5(Local_65[1 /*75*/], &Var27);
		}
	}
	else if (func_49(&uLocal_541))
	{
		func_325(&uLocal_541);
	}
}

void func_588(char[4] cParam0)
{
	switch (iLocal_28)
	{
		case 0:
			if (func_362(7, 2, sLocal_617, 0))
			{
				func_803(2);
			}
			break;
		case 1:
			if (func_804(Global_35, 0f, 0f, 0f) && func_805(Global_35, 1))
			{
				if (!func_68(Global_35, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_65[0 /*75*/], 0, -1f, -1f, -1f);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
				iLocal_28 = 2;
				iLocal_24 = 6;
			}
			break;
		case 2:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_369[2 /*16*/], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_369[2 /*16*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, 0f, 2);
				ANIMSCENE::START_ANIM_SCENE(Local_369[2 /*16*/]);
			}
			else
			{
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_369[2 /*16*/]) >= 0.649f)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				}
				if (func_1081() > 0.5f)
				{
					func_339(2);
					iLocal_28 = 4;
				}
			}
			if (func_806(Local_369[2 /*16*/]))
			{
				func_339(2);
				iLocal_28 = 4;
			}
			break;
		case 4:
			break;
	}
}

bool func_589(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_250() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

bool func_590(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_670(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

bool func_591(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_592()
{
	if (!func_215(2))
	{
		if (!func_371())
		{
			if (func_331("INVEST_HELP", 10000, 0, 0, 0, 1) != 0)
			{
				func_64(2);
			}
		}
	}
}

bool func_593(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_393(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, func_1082());
}

void func_594(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_1083(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar0 /*373*/].f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar1 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar1 /*373*/].f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_250() == -1)
	{
		Global_1430221.f_1 = !bParam0;
	}
}

void func_595(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_511(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar3 = func_370(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if ((func_1084() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_1005(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_1005(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

void func_596(char[4] cParam0, int* iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_20(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (MISC::IS_STRING_NULL(sParam2))
		{
			sParam2 = "OBJ_INTERACT";
		}
		cParam0->f_2256 = iParam6;
		cParam0->f_2255 = iParam5;
		func_599(iParam1, sParam2, iParam3, iParam4, 0, 0, 0, 1, 0);
	}
}

int func_597(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		if (ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*75*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_598(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (iVar1 != 2)
		{
			if (func_1085(Global_35, Local_65[iVar1 /*75*/], fParam0, bParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_599(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_374(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_1086(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_1087(iParam0->f_6, iParam0->f_5, 0);
			}
			func_1088(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_1089(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_600(int iParam0, int iParam1, var uParam2)
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

bool func_601()
{
	return !Global_1911774;
}

void func_602(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_603(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)